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
inline bool channelShuffleImpl(const T* inputData, const Shape& inputShape, int32_t numGroups,
                               int32_t axis, T* outputData, const Shape& outputShape) {
    const uint32_t outerSize = getNumberOfElements(inputShape, 0, axis);
    const uint32_t axisSize = getSizeOfDimension(inputShape, axis);
    const uint32_t innerSize =
            getNumberOfElements(inputShape, axis + 1, getNumberOfDimensions(inputShape));
    const uint32_t groupSize = axisSize / numGroups;
    for (uint32_t outer = 0; outer < outerSize; ++outer) {
        for (uint32_t inner = 0; inner < innerSize; ++inner) {
            const T* inputBase = inputData + outer * axisSize * innerSize + inner;
            T* outputBase = outputData + outer * axisSize * innerSize + inner;
            for (uint32_t i = 0; i < groupSize; i++) {
                for (uint32_t j = 0; j < numGroups; j++, outputBase += innerSize) {
                    *outputBase = inputBase[innerSize * (i + j * groupSize)];
                }
            }
        }
    }
    return true;
}

bool channelShuffleGeneric(const uint8_t* inputData, const Shape& inputShape, int32_t numGroups,
                           int32_t axis, uint8_t* outputData, const Shape& outputShape) {
    NNTRACE_TRANS("channelShuffleGeneric");
    NN_CHECK(handleNegativeAxis(inputShape, &axis));
    if (inputShape.type == OperandType::TENSOR_FLOAT32) {
        return channelShuffleImpl<float>(reinterpret_cast<const float*>(inputData), inputShape,
                                         numGroups, axis, reinterpret_cast<float*>(outputData),
                                         outputShape);
    } else if (inputShape.type == OperandType::TENSOR_QUANT8_ASYMM) {
        return channelShuffleImpl<uint8_t>(reinterpret_cast<const uint8_t*>(inputData), inputShape,
                                           numGroups, axis, reinterpret_cast<uint8_t*>(outputData),
                                           outputShape);
    } else {
        LOG(ERROR) << "Unsupported data type";
        return false;
    }
}
}  // namespace nn
}  // namespace android
