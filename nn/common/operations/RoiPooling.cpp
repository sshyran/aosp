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

template <typename T_Input>
bool roiPoolingImpl(const T_Input* inputData, const Shape& inputShape, const float* roiData,
                    const Shape& roiShape, float spatialScale, T_Input* outputData,
                    const Shape& outputShape) {
    NNTRACE_TRANS("RoiPooling");

    const uint32_t kRoiDim = 4;

    uint32_t inHeight = getSizeOfDimension(inputShape, 1);
    uint32_t inWidth = getSizeOfDimension(inputShape, 2);
    uint32_t inDepth = getSizeOfDimension(inputShape, 3);
    uint32_t outHeight = getSizeOfDimension(outputShape, 1);
    uint32_t outWidth = getSizeOfDimension(outputShape, 2);
    uint32_t numRois = getSizeOfDimension(roiShape, 0);
    uint32_t roiInfoLength = getSizeOfDimension(roiShape, 1);

    T_Input* outPtr = outputData;
    const float* roiDataEnd = roiData + numRois * roiInfoLength;
    for (const float* roiInfo = roiData; roiInfo < roiDataEnd; roiInfo += kRoiDim) {
        uint32_t batchId = 0;
        // get optional batch id
        if (roiInfoLength == kRoiDim + 1) {
            batchId = std::round(roiInfo[0]);
            roiInfo++;
        }
        const T_Input* batchBase = inputData + batchId * inHeight * inWidth * inDepth;

        int32_t wRoiStart = std::round(roiInfo[0] * spatialScale);
        int32_t hRoiStart = std::round(roiInfo[1] * spatialScale);
        int32_t wRoiEnd = std::round(roiInfo[2] * spatialScale);
        int32_t hRoiEnd = std::round(roiInfo[3] * spatialScale);

        // Rois with width/height < 1 are considered malformed and are forced to be 1
        float roiWidth = static_cast<float>(std::max(wRoiEnd - wRoiStart + 1, 1));
        float roiHeight = static_cast<float>(std::max(hRoiEnd - hRoiStart + 1, 1));
        float wStepSize = roiWidth / static_cast<float>(outWidth);
        float hStepSize = roiHeight / static_cast<float>(outHeight);

        for (uint32_t i = 0; i < outHeight; i++) {
            for (uint32_t j = 0; j < outWidth; j++) {
                // Take floor on start, ceil on end, start included, end excluded, i.e. [start, end)
                // end is guaranteed to larger than start by at least 1
                uint32_t wStart = std::floor(wStepSize * j + wRoiStart);
                uint32_t wEnd = std::ceil(wStepSize * (j + 1) + wRoiStart);
                uint32_t hStart = std::floor(hStepSize * i + hRoiStart);
                uint32_t hEnd = std::ceil(hStepSize * (i + 1) + hRoiStart);

                wStart = std::min(wStart, inWidth);
                wEnd = std::min(wEnd, inWidth);
                hStart = std::min(hStart, inHeight);
                hEnd = std::min(hEnd, inHeight);

                for (uint32_t k = 0; k < inDepth; k++) {
                    T_Input maxValue;
                    bool first = true;
                    for (uint32_t h = hStart; h < hEnd; h++) {
                        for (uint32_t w = wStart; w < wEnd; w++) {
                            T_Input inputValue = batchBase[h * inWidth * inDepth + w * inDepth + k];
                            if (first || inputValue > maxValue) {
                                maxValue = inputValue;
                                first = false;
                            }
                        }
                    }
                    outPtr[k] = maxValue;
                }
                outPtr += inDepth;
            }
        }
    }
    return true;
}

bool roiPoolingGeneric(const uint8_t* inputData, const Shape& inputShape, const uint8_t* roiData,
                       const Shape& roiShape, float spatialScale, uint8_t* outputData,
                       const Shape& outputShape) {
    NNTRACE_TRANS("roiPoolingGeneric");
    if (inputShape.type == OperandType::TENSOR_FLOAT32) {
        return roiPoolingImpl<float>(reinterpret_cast<const float*>(inputData), inputShape,
                                     reinterpret_cast<const float*>(roiData), roiShape,
                                     spatialScale, reinterpret_cast<float*>(outputData),
                                     outputShape);
    } else if (inputShape.type == OperandType::TENSOR_QUANT8_ASYMM) {
        return roiPoolingImpl<uint8_t>(reinterpret_cast<const uint8_t*>(inputData), inputShape,
                                       reinterpret_cast<const float*>(roiData), roiShape,
                                       spatialScale, reinterpret_cast<uint8_t*>(outputData),
                                       outputShape);
    } else {
        LOG(ERROR) << "Unsupported data type";
        return false;
    }
}

}  // namespace nn
}  // namespace android
