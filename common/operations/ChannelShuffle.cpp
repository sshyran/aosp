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

#include "Tracing.h"

namespace android {
namespace nn {

template <typename T>
inline bool channelShuffleGeneric(const T* inputData, const Shape& inputShape, int32_t numGroups,
                                  T* outputData, const Shape& outputShape) {
    uint32_t numDimensions = getNumberOfDimensions(inputShape);
    uint32_t inDepth = getSizeOfDimension(inputShape, numDimensions - 1);
    uint32_t groupSize = inDepth / numGroups;

    const T* inputDataEnd = inputData + getNumberOfElements(inputShape);
    T* outPtr = outputData;
    for (const T* inputBase = inputData; inputBase < inputDataEnd; inputBase += inDepth) {
        for (uint32_t j = 0; j < groupSize; j++) {
            for (uint32_t k = 0; k < numGroups; k++) {
                *outPtr = inputBase[j + k * groupSize];
                outPtr++;
            }
        }
    }

    return true;
}

bool channelShuffleGeneric(const uint8_t* inputData, const Shape& inputShape, int32_t numGroups,
                           uint8_t* outputData, const Shape& outputShape) {
    NNTRACE_TRANS("channelShuffleGeneric");
    if (inputShape.type == OperandType::TENSOR_FLOAT32) {
        return channelShuffleGeneric<float>(reinterpret_cast<const float*>(inputData), inputShape,
                                            numGroups, reinterpret_cast<float*>(outputData),
                                            outputShape);
    } else if (inputShape.type == OperandType::TENSOR_QUANT8_ASYMM) {
        return channelShuffleGeneric<uint8_t>(reinterpret_cast<const uint8_t*>(inputData),
                                              inputShape, numGroups,
                                              reinterpret_cast<uint8_t*>(outputData), outputShape);
    } else {
        LOG(ERROR) << "Unsupported data type";
        return false;
    }
}
}  // namespace nn
}  // namespace android
