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

struct BoxEncodingCorner {
    float x1, y1, x2, y2;
};
struct BoxEncodingCenter {
    float w, h, x, y;
};
BoxEncodingCorner toBoxEncodingCorner(const BoxEncodingCenter& ctr) {
    return {.x1 = ctr.x - ctr.w / 2,
            .y1 = ctr.y - ctr.h / 2,
            .x2 = ctr.x + ctr.w / 2,
            .y2 = ctr.y + ctr.h / 2};
}
BoxEncodingCenter toBoxEncodingCenter(const BoxEncodingCorner& cnr) {
    return {.w = cnr.x2 - cnr.x1,
            .h = cnr.y2 - cnr.y1,
            .x = (cnr.x1 + cnr.x2) / 2,
            .y = (cnr.y1 + cnr.y2) / 2};
}

inline bool bboxTransformFloat32(const float* roiData, const Shape& roiShape,
                                 const float* bboxDeltasData, const Shape& bboxDeltasShape,
                                 const int32_t* batchSplitData, const Shape& batchSplitShape,
                                 const float* imageInfoData, const Shape& imageInfoDataShape,
                                 float* outputData, const Shape& outputShape) {
    const uint32_t roiLength = 4;
    const uint32_t imageLength = 3;

    uint32_t numClasses = getSizeOfDimension(bboxDeltasShape, 1) / roiLength;
    uint32_t numBatches = getSizeOfDimension(batchSplitShape, 0);

    const float* roiDataEnd = roiData + getNumberOfElements(roiShape);
    const float* deltas = bboxDeltasData;
    float* outPtr = outputData;
    uint32_t batchIndex = 0, roiIndex = 0;
    for (const float* roiBase = roiData; roiBase < roiDataEnd; roiBase += roiLength, roiIndex++) {
        while (roiIndex >= batchSplitData[batchIndex]) {
            batchIndex++;
            roiIndex = 0;
        }

        // Check for malformed data
        // 1. invalid batch id
        // 2. Invalid region: x2 <= x1 || y2 <= y1
        NN_RET_CHECK_GE(batchIndex, 0);
        NN_RET_CHECK_LT(batchIndex, numBatches);
        NN_RET_CHECK_LT(roiBase[0], roiBase[2]);
        NN_RET_CHECK_LT(roiBase[1], roiBase[3]);

        const float* imageInfoBase = imageInfoData + batchIndex * imageLength;
        float imageHeight = imageInfoBase[0];
        float imageWidth = imageInfoBase[1];
        float imageScale = imageInfoBase[2];
        auto roiBefore = toBoxEncodingCenter(
                {.x1 = roiBase[0], .y1 = roiBase[1], .x2 = roiBase[2], .y2 = roiBase[3]});

        LOG(ERROR) << roiBefore.x << " " << roiBefore.y << " " << roiBefore.w << " " << roiBefore.h;

        for (uint32_t i = 0; i < numClasses; i++) {
            auto roiAfter = toBoxEncodingCorner({.w = std::exp(deltas[2]) * roiBefore.w,
                                                 .h = std::exp(deltas[3]) * roiBefore.h,
                                                 .x = roiBefore.x + deltas[0] * roiBefore.w,
                                                 .y = roiBefore.y + deltas[1] * roiBefore.h});
            LOG(ERROR) << roiAfter.x1 << " " << roiAfter.x2 << " " << roiAfter.y1 << " "
                       << roiAfter.y2;
            BoxEncodingCorner cliped = {.x1 = std::min(std::max(roiAfter.x1, 0.0f), imageWidth),
                                        .y1 = std::min(std::max(roiAfter.y1, 0.0f), imageHeight),
                                        .x2 = std::min(std::max(roiAfter.x2, 0.0f), imageWidth),
                                        .y2 = std::min(std::max(roiAfter.y2, 0.0f), imageHeight)};
            outPtr[0] = cliped.x1 * imageScale;
            outPtr[1] = cliped.y1 * imageScale;
            outPtr[2] = cliped.x2 * imageScale;
            outPtr[3] = cliped.y2 * imageScale;
            deltas += roiLength;
            outPtr += roiLength;
        }
    }
    return true;
}

inline bool bboxTransformFloat16(const _Float16* roiData, const Shape& roiShape,
                                 const _Float16* bboxDeltasData, const Shape& bboxDeltasShape,
                                 const int32_t* batchSplitData, const Shape& batchSplitShape,
                                 const _Float16* imageInfoData, const Shape& imageInfoDataShape,
                                 _Float16* outputData, const Shape& outputShape) {
    std::vector<float> roi_float32(getNumberOfElements(roiShape));
    convertFloat16ToFloat32(roiData, &roi_float32);
    std::vector<float> delta_float32(getNumberOfElements(bboxDeltasShape));
    convertFloat16ToFloat32(bboxDeltasData, &delta_float32);
    std::vector<float> imageInfo_float32(getNumberOfElements(imageInfoDataShape));
    convertFloat16ToFloat32(imageInfoData, &imageInfo_float32);
    std::vector<float> output_float32(getNumberOfElements(outputShape));
    NN_RET_CHECK(bboxTransformFloat32(roi_float32.data(), roiShape, delta_float32.data(),
                                      bboxDeltasShape, batchSplitData, batchSplitShape,
                                      imageInfo_float32.data(), imageInfoDataShape,
                                      output_float32.data(), outputShape));
    convertFloat32ToFloat16(output_float32, outputData);
    return true;
}

}  // namespace

namespace axis_aligned_bbox_transform {

constexpr char kOperationName[] = "AXIS_ALIGNED_BBOX_TRANSFORM";

constexpr uint32_t kNumInputs = 4;
constexpr uint32_t kRoiTensor = 0;
constexpr uint32_t kDeltaTensor = 1;
constexpr uint32_t kBatchSplitTensor = 2;
constexpr uint32_t kImageInfoTensor = 3;

constexpr uint32_t kNumOutputs = 1;
constexpr uint32_t kOutputTensor = 0;

bool validate(const IOperationValidationContext* context) {
    NN_RET_CHECK_EQ(context->getNumInputs(), kNumInputs);
    NN_RET_CHECK_EQ(context->getNumOutputs(), kNumOutputs);
    auto inputType = context->getInputType(kRoiTensor);
    NN_RET_CHECK(inputType == OperandType::TENSOR_FLOAT16 ||
                 inputType == OperandType::TENSOR_FLOAT32)
            << "Unsupported tensor type for operation " << kOperationName;
    NN_RET_CHECK(validateInputTypes(context,
                                    {inputType, inputType, OperandType::TENSOR_INT32, inputType}));
    NN_RET_CHECK(validateOutputTypes(context, {inputType}));
    return validateHalVersion(context, HalVersion::V1_2);
}

bool prepare(IOperationExecutionContext* context) {
    Shape roiShape = context->getInputShape(kRoiTensor);
    Shape bboxDeltasShape = context->getInputShape(kDeltaTensor);
    Shape batchSplitShape = context->getInputShape(kBatchSplitTensor);
    Shape imageInfoShape = context->getInputShape(kImageInfoTensor);
    Shape outputShape = context->getOutputShape(kOutputTensor);

    NN_OPS_CHECK(getNumberOfDimensions(roiShape) == 2);
    NN_OPS_CHECK(getNumberOfDimensions(bboxDeltasShape) == 2);
    NN_OPS_CHECK(getNumberOfDimensions(batchSplitShape) == 1);
    NN_OPS_CHECK(getNumberOfDimensions(imageInfoShape) == 2);

    const uint32_t kRoiDim = 4;
    uint32_t numRois = getSizeOfDimension(roiShape, 0);
    uint32_t numClasses = getSizeOfDimension(bboxDeltasShape, 1) / kRoiDim;
    uint32_t numBatches = getSizeOfDimension(batchSplitShape, 0);

    NN_OPS_CHECK(getSizeOfDimension(roiShape, 1) == kRoiDim);
    NN_OPS_CHECK(getSizeOfDimension(bboxDeltasShape, 0) == numRois);
    NN_OPS_CHECK(getSizeOfDimension(bboxDeltasShape, 1) == kRoiDim * numClasses);
    NN_OPS_CHECK(getSizeOfDimension(imageInfoShape, 0) == numBatches);
    NN_OPS_CHECK(getSizeOfDimension(imageInfoShape, 1) == 3);

    outputShape.type = roiShape.type;
    outputShape.dimensions = {numRois, numClasses * kRoiDim};
    NN_RET_CHECK(context->setOutputShape(kOutputTensor, outputShape));
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
                                        context->getInputBuffer<int32_t>(kBatchSplitTensor),
                                        context->getInputShape(kBatchSplitTensor),
                                        context->getInputBuffer<_Float16>(kImageInfoTensor),
                                        context->getInputShape(kImageInfoTensor),
                                        context->getOutputBuffer<_Float16>(kOutputTensor),
                                        context->getOutputShape(kOutputTensor));
        }
        case OperandType::TENSOR_FLOAT32: {
            return bboxTransformFloat32(context->getInputBuffer<float>(kRoiTensor),
                                        context->getInputShape(kRoiTensor),
                                        context->getInputBuffer<float>(kDeltaTensor),
                                        context->getInputShape(kDeltaTensor),
                                        context->getInputBuffer<int32_t>(kBatchSplitTensor),
                                        context->getInputShape(kBatchSplitTensor),
                                        context->getInputBuffer<float>(kImageInfoTensor),
                                        context->getInputShape(kImageInfoTensor),
                                        context->getOutputBuffer<float>(kOutputTensor),
                                        context->getOutputShape(kOutputTensor));
        }
        default:
            NN_RET_CHECK_FAIL() << "Unsupported tensor type for operation " << kOperationName;
    }
}

}  // namespace axis_aligned_bbox_transform
}  // namespace generate_proposals

NN_REGISTER_OPERATION(AXIS_ALIGNED_BBOX_TRANSFORM,
                      generate_proposals::axis_aligned_bbox_transform::kOperationName,
                      generate_proposals::axis_aligned_bbox_transform::validate,
                      generate_proposals::axis_aligned_bbox_transform::prepare,
                      generate_proposals::axis_aligned_bbox_transform::execute);
}  // namespace nn
}  // namespace android
