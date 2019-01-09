/*
 * Copyright (C) 2018 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "CpuOperationUtils.h"
#include "OperationResolver.h"
#include "OperationsUtils.h"

#include <cfloat>
#include <cmath>

#include "Tracing.h"

namespace android {
namespace nn {
namespace generate_proposals {

namespace {

const float PI = 3.14159265358979323846;
const float kMaxTransform = std::log(1000.0 / 16.0);

void clipBoxesAxisAligned(float xRoiCenter, float yRoiCenter, float roiWidth, float roiHeight,
                          float imageWidth, float imageHeight, float* outputBase) {
    float x1 = xRoiCenter - roiWidth / 2;
    float y1 = yRoiCenter - roiHeight / 2;
    float x2 = xRoiCenter + roiWidth / 2 - 1.0f;
    float y2 = yRoiCenter + roiHeight / 2 - 1.0f;

    x1 = std::min(std::max(x1, 0.0f), imageWidth - 1.0f);
    y1 = std::min(std::max(y1, 0.0f), imageHeight - 1.0f);
    x2 = std::min(std::max(x2, 0.0f), imageWidth - 1.0f);
    y2 = std::min(std::max(y2, 0.0f), imageHeight - 1.0f);

    outputBase[0] = x1;
    outputBase[1] = y1;
    outputBase[2] = x2;
    outputBase[3] = y2;
}

void clipBoxesRotated(float xRoiCenter, float yRoiCenter, float roiWidth, float roiHeight,
                      float roiAngle, bool angleBoundOn, int32_t angleBoundHigh,
                      int32_t angleBoundLow, float clipAngleThreshold, float imageWidth,
                      float imageHeight, float* outputBase) {
    if (angleBoundOn) {
        const int32_t angleBoundRange = angleBoundHigh - angleBoundLow;
        while (roiAngle < angleBoundLow) {
            roiAngle += angleBoundRange;
        }
        while (roiAngle > angleBoundHigh) {
            roiAngle -= angleBoundRange;
        }
    }

    if (std::abs(roiAngle) < clipAngleThreshold) {
        float x1 = xRoiCenter - (roiWidth - 1.0f) / 2;
        float x2 = xRoiCenter + (roiWidth - 1.0f) / 2;
        float y1 = yRoiCenter - (roiHeight - 1.0f) / 2;
        float y2 = yRoiCenter + (roiHeight - 1.0f) / 2;
        x1 = std::min(std::max(x1, 0.0f), imageWidth - 1.0f);
        x2 = std::min(std::max(x2, 0.0f), imageWidth - 1.0f);
        y1 = std::min(std::max(y1, 0.0f), imageHeight - 1.0f);
        y2 = std::min(std::max(y2, 0.0f), imageHeight - 1.0f);
        xRoiCenter = (x1 + x2) / 2;
        yRoiCenter = (y1 + y2) / 2;
        roiWidth = x2 - x1 + 1.0f;
        roiHeight = y2 - y1 + 1.0f;
    }

    outputBase[0] = xRoiCenter;
    outputBase[1] = yRoiCenter;
    outputBase[2] = roiWidth;
    outputBase[3] = roiHeight;
    outputBase[4] = roiAngle;
}

inline bool bboxTransformPrepare(const Shape& roiShape, const Shape& bboxDeltasShape,
                                 const Shape& imageInfoShape, const Shape& weightsShape,
                                 bool rotated, bool angleBoundOn, int32_t angleBoundLow,
                                 int32_t angleBoundHigh, Shape* outputShape,
                                 Shape* batchSplitShape) {
    NN_OPS_CHECK(getNumberOfDimensions(roiShape) == 2);
    NN_OPS_CHECK(getNumberOfDimensions(bboxDeltasShape) == 2);
    NN_OPS_CHECK(getNumberOfDimensions(imageInfoShape) == 2);
    NN_OPS_CHECK(getNumberOfDimensions(weightsShape) == 1);

    const uint32_t kRoiDim = rotated ? 5 : 4;
    uint32_t numRois = getSizeOfDimension(roiShape, 0);
    uint32_t roiInfoLength = getSizeOfDimension(roiShape, 1);
    uint32_t numClasses = getSizeOfDimension(bboxDeltasShape, 1) / kRoiDim;
    uint32_t numBatches = getSizeOfDimension(imageInfoShape, 0);

    NN_OPS_CHECK(roiInfoLength == kRoiDim + 1 || (roiInfoLength == kRoiDim && numBatches == 1));
    NN_OPS_CHECK(getSizeOfDimension(bboxDeltasShape, 0) == numRois);
    NN_OPS_CHECK(getSizeOfDimension(bboxDeltasShape, 1) == kRoiDim * numClasses);
    NN_OPS_CHECK(getSizeOfDimension(imageInfoShape, 1) == 3);
    NN_OPS_CHECK(getSizeOfDimension(weightsShape, 0) == 4);

    if (rotated && angleBoundOn) {
        NN_OPS_CHECK(angleBoundHigh > angleBoundLow);
        NN_OPS_CHECK((angleBoundHigh - angleBoundLow) % 180 == 0);
    }

    outputShape->type = roiShape.type;
    outputShape->dimensions = {numRois, numClasses * kRoiDim};

    batchSplitShape->type = OperandType::TENSOR_INT32;
    batchSplitShape->dimensions = {numBatches};
    batchSplitShape->offset = 0;
    batchSplitShape->scale = 1.0f;

    return true;
}

inline bool bboxTransformFloat32(const float* roiData, const Shape& roiShape,
                                 const float* bboxDeltasData, const Shape& bboxDeltasShape,
                                 const float* imageInfoData, const Shape& imageInfoDataShape,
                                 const float* weightsData, const Shape& weightsDataShape,
                                 int32_t applyScale, bool rotated, bool angleBoundOn,
                                 int32_t angleBoundLow, int32_t angleBoundHigh,
                                 float clipAngleThreshold, float* outputData,
                                 const Shape& outputShape, int32_t* batchSplitData,
                                 const Shape& batchSplitShape) {
    const uint32_t kRoiDim = rotated ? 5 : 4;

    uint32_t numRois = getSizeOfDimension(roiShape, 0);
    uint32_t roiInfoLength = getSizeOfDimension(roiShape, 1);
    uint32_t numClasses = getSizeOfDimension(bboxDeltasShape, 1) / kRoiDim;
    uint32_t numBatches = getSizeOfDimension(imageInfoDataShape, 0);
    uint32_t imageInfoLength = getSizeOfDimension(imageInfoDataShape, 1);

    memset(batchSplitData, 0, getNumberOfElements(batchSplitShape) * sizeof(int32_t));

    const float* roiDataEnd =
            roiData + static_cast<uint64_t>(numRois) * static_cast<uint64_t>(roiInfoLength);
    const float* bboxDeltasBase = bboxDeltasData;
    float* outPtr = outputData;
    for (const float* roiBase = roiData; roiBase < roiDataEnd; roiBase += kRoiDim) {
        uint32_t batchIndex = 0;
        if (roiInfoLength == kRoiDim + 1) {
            batchIndex = static_cast<uint32_t>(roiBase[0]);
            roiBase++;
        }

        // Check for malformed data
        // 1. invalid batch id
        // 2. Invalid region: x2 <= x1 || y2 <= y1
        NN_RET_CHECK_GE(batchIndex, 0);
        NN_RET_CHECK_LT(batchIndex, numBatches);
        if (!rotated) {
            NN_RET_CHECK_LT(roiBase[0], roiBase[2]);
            NN_RET_CHECK_LT(roiBase[1], roiBase[3]);
        }
        batchSplitData[batchIndex]++;

        const float* imageInfoBase = imageInfoData + batchIndex * imageInfoLength;
        float imageScale = imageInfoBase[2];
        float imageHeight = std::round(imageInfoBase[0] / imageScale);
        float imageWidth = std::round(imageInfoBase[1] / imageScale);

        float xRoiCenterBefore, yRoiCenterBefore;
        float roiWidthBefore, roiHeightBefore, roiAngleBefore;
        if (rotated) {
            xRoiCenterBefore = roiBase[0] / imageScale;
            yRoiCenterBefore = roiBase[1] / imageScale;
            roiWidthBefore = roiBase[2] / imageScale;
            roiHeightBefore = roiBase[3] / imageScale;
            roiAngleBefore = roiBase[4];
        } else {
            roiWidthBefore = (roiBase[2] - roiBase[0]) / imageScale + 1.0f;
            roiHeightBefore = (roiBase[3] - roiBase[1]) / imageScale + 1.0f;
            xRoiCenterBefore = roiBase[0] / imageScale + roiWidthBefore / 2;
            yRoiCenterBefore = roiBase[1] / imageScale + roiHeightBefore / 2;
            roiAngleBefore = 0;
        }

        for (uint32_t i = 0; i < numClasses; i++) {
            float roiWidthLogScale = std::min(bboxDeltasBase[2] / weightsData[2], kMaxTransform);
            float roiHeightLogScale = std::min(bboxDeltasBase[3] / weightsData[3], kMaxTransform);
            float xRoiCenterDelta = bboxDeltasBase[0] / weightsData[0] * roiWidthBefore;
            float yRoiCenterDelta = bboxDeltasBase[1] / weightsData[1] * roiHeightBefore;
            float angleDelta = rotated ? bboxDeltasBase[4] * 180.0f / PI : 0;

            float roiWidthAfter = std::exp(roiWidthLogScale) * roiWidthBefore;
            float roiHeightAfter = std::exp(roiHeightLogScale) * roiHeightBefore;
            float xRoiCenterAfter = xRoiCenterBefore + xRoiCenterDelta;
            float yRoiCenterAfter = yRoiCenterBefore + yRoiCenterDelta;
            float roiAngleAfter = roiAngleBefore + angleDelta;

            if (rotated) {
                clipBoxesRotated(xRoiCenterAfter, yRoiCenterAfter, roiWidthAfter, roiHeightAfter,
                                 roiAngleAfter, angleBoundOn, angleBoundHigh, angleBoundLow,
                                 clipAngleThreshold, imageWidth, imageHeight, outPtr);
            } else {
                clipBoxesAxisAligned(xRoiCenterAfter, yRoiCenterAfter, roiWidthAfter,
                                     roiHeightAfter, imageWidth, imageHeight, outPtr);
            }

            if (applyScale) {
                outPtr[0] *= imageScale;
                outPtr[1] *= imageScale;
                outPtr[2] *= imageScale;
                outPtr[3] *= imageScale;
            }

            bboxDeltasBase += kRoiDim;
            outPtr += kRoiDim;
        }
    }

    return true;
}

inline bool bboxTransformFloat16(const _Float16* roiData, const Shape& roiShape,
                                 const _Float16* bboxDeltasData, const Shape& bboxDeltasShape,
                                 const _Float16* imageInfoData, const Shape& imageInfoDataShape,
                                 const _Float16* weightsData, const Shape& weightsDataShape,
                                 int32_t applyScale, bool rotated, bool angleBoundOn,
                                 int32_t angleBoundLow, int32_t angleBoundHigh,
                                 _Float16 clipAngleThreshold, _Float16* outputData,
                                 const Shape& outputShape, int32_t* batchSplitData,
                                 const Shape& batchSplitShape) {
    std::vector<float> roi_float32(getNumberOfElements(roiShape));
    convertFloat16ToFloat32(roiData, &roi_float32);
    std::vector<float> delta_float32(getNumberOfElements(bboxDeltasShape));
    convertFloat16ToFloat32(bboxDeltasData, &delta_float32);
    std::vector<float> imageInfo_float32(getNumberOfElements(imageInfoDataShape));
    convertFloat16ToFloat32(imageInfoData, &imageInfo_float32);
    std::vector<float> weights_float32(getNumberOfElements(weightsDataShape));
    convertFloat16ToFloat32(weightsData, &weights_float32);
    std::vector<float> output_float32(getNumberOfElements(outputShape));
    NN_RET_CHECK(bboxTransformFloat32(
            roi_float32.data(), roiShape, delta_float32.data(), bboxDeltasShape,
            imageInfo_float32.data(), imageInfoDataShape, weights_float32.data(), weightsDataShape,
            applyScale, rotated, angleBoundOn, angleBoundLow, angleBoundHigh, clipAngleThreshold,
            output_float32.data(), outputShape, batchSplitData, batchSplitShape));
    convertFloat32ToFloat16(output_float32, outputData);
    return true;
}

}  // namespace

namespace axis_aligned_bbox_transform {

constexpr char kOperationName[] = "AXIS_ALIGNED_BBOX_TRANSFORM";

constexpr uint32_t kNumInputs = 5;
constexpr uint32_t kRoiTensor = 0;
constexpr uint32_t kDeltaTensor = 1;
constexpr uint32_t kImageInfoTensor = 2;
constexpr uint32_t kWeightTensor = 3;
constexpr uint32_t kApplyScaleScalar = 4;

constexpr uint32_t kNumOutputs = 2;
constexpr uint32_t kOutputTensor = 0;
constexpr uint32_t kBatchSplitTensor = 1;

bool validate(const IOperationValidationContext* context) {
    NN_RET_CHECK_EQ(context->getNumInputs(), kNumInputs);
    NN_RET_CHECK_EQ(context->getNumOutputs(), kNumOutputs);
    auto inputType = context->getInputType(kRoiTensor);
    NN_RET_CHECK(inputType == OperandType::TENSOR_FLOAT16 ||
                 inputType == OperandType::TENSOR_FLOAT32)
            << "Unsupported tensor type for operation " << kOperationName;
    NN_RET_CHECK(validateInputTypes(
            context, {inputType, inputType, inputType, inputType, OperandType::BOOL}));
    NN_RET_CHECK(validateOutputTypes(context, {inputType, OperandType::TENSOR_INT32}));
    return validateHalVersion(context, HalVersion::V1_2);
}

bool prepare(IOperationExecutionContext* context) {
    Shape roiShape = context->getInputShape(kRoiTensor);
    Shape bboxDeltasShape = context->getInputShape(kDeltaTensor);
    Shape imageInfoShape = context->getInputShape(kImageInfoTensor);
    Shape weightsShape = context->getInputShape(kWeightTensor);
    bool applyScale = context->getInputValue<bool>(kApplyScaleScalar);
    Shape outputShape = context->getOutputShape(kOutputTensor);
    Shape batchSplitShape = context->getOutputShape(kBatchSplitTensor);
    NN_RET_CHECK(bboxTransformPrepare(roiShape, bboxDeltasShape, imageInfoShape, weightsShape,
                                      /*rotated=*/false, false, 0, 0, &outputShape,
                                      &batchSplitShape));
    NN_RET_CHECK(context->setOutputShape(kOutputTensor, outputShape));
    NN_RET_CHECK(context->setOutputShape(kBatchSplitTensor, batchSplitShape));
    return true;
}

bool execute(IOperationExecutionContext* context) {
    NNTRACE_TRANS("axisAlignedBBoxTransform");
    switch (context->getInputType(kRoiTensor)) {
        case OperandType::TENSOR_FLOAT16: {
            return bboxTransformFloat16(context->getInputBuffer<_Float16>(kRoiTensor),
                                        context->getInputShape(kRoiTensor),
                                        context->getInputBuffer<_Float16>(kDeltaTensor),
                                        context->getInputShape(kDeltaTensor),
                                        context->getInputBuffer<_Float16>(kImageInfoTensor),
                                        context->getInputShape(kImageInfoTensor),
                                        context->getInputBuffer<_Float16>(kWeightTensor),
                                        context->getInputShape(kWeightTensor),
                                        context->getInputValue<bool>(kApplyScaleScalar),
                                        /*rotated=*/false, false, 0, 0, 0,
                                        context->getOutputBuffer<_Float16>(kOutputTensor),
                                        context->getOutputShape(kOutputTensor),
                                        context->getOutputBuffer<int32_t>(kBatchSplitTensor),
                                        context->getOutputShape(kBatchSplitTensor));
        }
        case OperandType::TENSOR_FLOAT32: {
            return bboxTransformFloat32(
                    context->getInputBuffer<float>(kRoiTensor), context->getInputShape(kRoiTensor),
                    context->getInputBuffer<float>(kDeltaTensor),
                    context->getInputShape(kDeltaTensor),
                    context->getInputBuffer<float>(kImageInfoTensor),
                    context->getInputShape(kImageInfoTensor),
                    context->getInputBuffer<float>(kWeightTensor),
                    context->getInputShape(kWeightTensor),
                    context->getInputValue<bool>(kApplyScaleScalar), /*rotated=*/false, false, 0, 0,
                    0, context->getOutputBuffer<float>(kOutputTensor),
                    context->getOutputShape(kOutputTensor),
                    context->getOutputBuffer<int32_t>(kBatchSplitTensor),
                    context->getOutputShape(kBatchSplitTensor));
        }
        default:
            NN_RET_CHECK_FAIL() << "Unsupported tensor type for operation " << kOperationName;
    }
}

}  // namespace axis_aligned_bbox_transform

namespace rotated_bbox_transform {

constexpr char kOperationName[] = "ROTATED_BBOX_TRANSFORM";

constexpr uint32_t kNumInputs = 9;
constexpr uint32_t kRoiTensor = 0;
constexpr uint32_t kDeltaTensor = 1;
constexpr uint32_t kImageInfoTensor = 2;
constexpr uint32_t kWeightTensor = 3;
constexpr uint32_t kApplyScaleScalar = 4;
constexpr uint32_t kAngleBoundOnScalar = 5;
constexpr uint32_t kAngleBoundLowScalar = 6;
constexpr uint32_t kAngleBoundHighScalar = 7;
constexpr uint32_t kClipThresholdScalar = 8;

constexpr uint32_t kNumOutputs = 2;
constexpr uint32_t kOutputTensor = 0;
constexpr uint32_t kBatchSplitTensor = 1;

bool validate(const IOperationValidationContext* context) {
    NN_RET_CHECK_EQ(context->getNumInputs(), kNumInputs);
    NN_RET_CHECK_EQ(context->getNumOutputs(), kNumOutputs);
    std::vector<OperandType> inExpectedTypes;
    auto inputType = context->getInputType(kRoiTensor);
    if (inputType == OperandType::TENSOR_FLOAT32) {
        inExpectedTypes = {OperandType::TENSOR_FLOAT32, OperandType::TENSOR_FLOAT32,
                           OperandType::TENSOR_FLOAT32, OperandType::TENSOR_FLOAT32,
                           OperandType::BOOL,           OperandType::BOOL,
                           OperandType::INT32,          OperandType::INT32,
                           OperandType::FLOAT32};
    } else if (inputType == OperandType::TENSOR_FLOAT16) {
        inExpectedTypes = {OperandType::TENSOR_FLOAT16, OperandType::TENSOR_FLOAT16,
                           OperandType::TENSOR_FLOAT16, OperandType::TENSOR_FLOAT16,
                           OperandType::BOOL,           OperandType::BOOL,
                           OperandType::INT32,          OperandType::INT32,
                           OperandType::FLOAT16};
    } else {
        LOG(ERROR) << "Unsupported input tensor type for operation " << kOperationName;
        return false;
    }
    NN_RET_CHECK(validateInputTypes(context, inExpectedTypes));
    NN_RET_CHECK(validateOutputTypes(context, {inputType, OperandType::TENSOR_INT32}));
    return validateHalVersion(context, HalVersion::V1_2);
}

bool prepare(IOperationExecutionContext* context) {
    Shape roiShape = context->getInputShape(kRoiTensor);
    Shape bboxDeltasShape = context->getInputShape(kDeltaTensor);
    Shape imageInfoShape = context->getInputShape(kImageInfoTensor);
    Shape weightsShape = context->getInputShape(kWeightTensor);
    bool applyScale = context->getInputValue<bool>(kApplyScaleScalar);
    bool angleBoundOn = context->getInputValue<bool>(kAngleBoundOnScalar);
    int32_t angleBoundLow = context->getInputValue<int32_t>(kAngleBoundLowScalar);
    int32_t angleBoundHigh = context->getInputValue<int32_t>(kAngleBoundHighScalar);
    Shape outputShape = context->getOutputShape(kOutputTensor);
    Shape batchSplitShape = context->getOutputShape(kBatchSplitTensor);
    NN_RET_CHECK(bboxTransformPrepare(roiShape, bboxDeltasShape, imageInfoShape, weightsShape,
                                      /*rotated=*/true, angleBoundOn, angleBoundLow, angleBoundHigh,
                                      &outputShape, &batchSplitShape));
    NN_RET_CHECK(context->setOutputShape(kOutputTensor, outputShape));
    NN_RET_CHECK(context->setOutputShape(kBatchSplitTensor, batchSplitShape));
    return true;
}

bool execute(IOperationExecutionContext* context) {
    NNTRACE_TRANS("rotatedBBoxTransform");
    switch (context->getInputType(kRoiTensor)) {
        case OperandType::TENSOR_FLOAT16: {
            return bboxTransformFloat16(context->getInputBuffer<_Float16>(kRoiTensor),
                                        context->getInputShape(kRoiTensor),
                                        context->getInputBuffer<_Float16>(kDeltaTensor),
                                        context->getInputShape(kDeltaTensor),
                                        context->getInputBuffer<_Float16>(kImageInfoTensor),
                                        context->getInputShape(kImageInfoTensor),
                                        context->getInputBuffer<_Float16>(kWeightTensor),
                                        context->getInputShape(kWeightTensor),
                                        context->getInputValue<bool>(kApplyScaleScalar),
                                        /*rotated=*/true,
                                        context->getInputValue<bool>(kAngleBoundOnScalar),
                                        context->getInputValue<int32_t>(kAngleBoundLowScalar),
                                        context->getInputValue<int32_t>(kAngleBoundHighScalar),
                                        context->getInputValue<_Float16>(kClipThresholdScalar),
                                        context->getOutputBuffer<_Float16>(kOutputTensor),
                                        context->getOutputShape(kOutputTensor),
                                        context->getOutputBuffer<int32_t>(kBatchSplitTensor),
                                        context->getOutputShape(kBatchSplitTensor));
        }
        case OperandType::TENSOR_FLOAT32: {
            return bboxTransformFloat32(
                    context->getInputBuffer<float>(kRoiTensor), context->getInputShape(kRoiTensor),
                    context->getInputBuffer<float>(kDeltaTensor),
                    context->getInputShape(kDeltaTensor),
                    context->getInputBuffer<float>(kImageInfoTensor),
                    context->getInputShape(kImageInfoTensor),
                    context->getInputBuffer<float>(kWeightTensor),
                    context->getInputShape(kWeightTensor),
                    context->getInputValue<bool>(kApplyScaleScalar), /*rotated=*/true,
                    context->getInputValue<bool>(kAngleBoundOnScalar),
                    context->getInputValue<int32_t>(kAngleBoundLowScalar),
                    context->getInputValue<int32_t>(kAngleBoundHighScalar),
                    context->getInputValue<float>(kClipThresholdScalar),
                    context->getOutputBuffer<float>(kOutputTensor),
                    context->getOutputShape(kOutputTensor),
                    context->getOutputBuffer<int32_t>(kBatchSplitTensor),
                    context->getOutputShape(kBatchSplitTensor));
        }
        default:
            NN_RET_CHECK_FAIL() << "Unsupported tensor type for operation " << kOperationName;
    }
}

}  // namespace rotated_bbox_transform

}  // namespace generate_proposals

NN_REGISTER_OPERATION(AXIS_ALIGNED_BBOX_TRANSFORM,
                      generate_proposals::axis_aligned_bbox_transform::kOperationName,
                      generate_proposals::axis_aligned_bbox_transform::validate,
                      generate_proposals::axis_aligned_bbox_transform::prepare,
                      generate_proposals::axis_aligned_bbox_transform::execute);

NN_REGISTER_OPERATION(ROTATED_BBOX_TRANSFORM,
                      generate_proposals::rotated_bbox_transform::kOperationName,
                      generate_proposals::rotated_bbox_transform::validate,
                      generate_proposals::rotated_bbox_transform::prepare,
                      generate_proposals::rotated_bbox_transform::execute);

}  // namespace nn
}  // namespace android
