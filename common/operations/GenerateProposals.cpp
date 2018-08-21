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
#include "Operations.h"

#include <cfloat>
#include <cmath>

#include "Tracing.h"

namespace android {
namespace nn {

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

inline bool bboxTransform(const float* roiData, const Shape& roiShape, const float* bboxDeltasData,
                          const Shape& bboxDeltasShape, const float* imageInfoData,
                          const Shape& imageInfoDataShape, const float* weightsData,
                          const Shape& weightsDataShape, int32_t applyScale, bool rotated,
                          bool angleBoundOn, int32_t angleBoundLow, int32_t angleBoundHigh,
                          float clipAngleThreshold, float* outputData, const Shape& outputShape,
                          int32_t* batchSplitData, const Shape& batchSplitShape) {
    const uint32_t kRoiDim = rotated ? 5 : 4;

    uint32_t numRois = getSizeOfDimension(roiShape, 0);
    uint32_t roiInfoLength = getSizeOfDimension(roiShape, 1);
    uint32_t numClasses = getSizeOfDimension(bboxDeltasShape, 1) / kRoiDim;
    uint32_t imageInfoLength = getSizeOfDimension(imageInfoDataShape, 1);

    memset(batchSplitData, 0, getNumberOfElements(batchSplitShape) * sizeof(float));

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

bool axisAlignedBBoxTransform(const float* roiData, const Shape& roiShape,
                              const float* bboxDeltasData, const Shape& bboxDeltasShape,
                              const float* imageInfoData, const Shape& imageInfoDataShape,
                              const float* weightsData, const Shape& weightsDataShape,
                              bool applyScale, float* outputData, const Shape& outputShape,
                              int32_t* batchSplitData, const Shape& batchSplitShape) {
    NNTRACE_TRANS("axisAlignedBBoxTransform");
    return bboxTransform(roiData, roiShape, bboxDeltasData, bboxDeltasShape, imageInfoData,
                         imageInfoDataShape, weightsData, weightsDataShape, applyScale, 0, 0, 0, 0,
                         false,  // rotated = false
                         outputData, outputShape, batchSplitData, batchSplitShape);
}

bool rotatedBBoxTransform(const float* roiData, const Shape& roiShape, const float* bboxDeltasData,
                          const Shape& bboxDeltasShape, const float* imageInfoData,
                          const Shape& imageInfoDataShape, const float* weightsData,
                          const Shape& weightsDataShape, bool applyScale, bool angleBoundOn,
                          int32_t angleBoundLow, int32_t angleBoundHigh, float clipAngleThreshold,
                          float* outputData, const Shape& outputShape, int32_t* batchSplitData,
                          const Shape& batchSplitShape) {
    NNTRACE_TRANS("rotatedBBoxTransform");
    return bboxTransform(roiData, roiShape, bboxDeltasData, bboxDeltasShape, imageInfoData,
                         imageInfoDataShape, weightsData, weightsDataShape, applyScale,
                         true,  // rotated = true
                         angleBoundOn, angleBoundLow, angleBoundHigh, clipAngleThreshold,
                         outputData, outputShape, batchSplitData, batchSplitShape);
}
}  // namespace nn
}  // namespace android
