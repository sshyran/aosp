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

#define LOG_TAG "Operations"

#include "Gather.h"
#include "Tracing.h"

namespace android {
namespace nn {
namespace gather {

namespace {

template <typename T>
inline bool gatherImpl(const T* inputData, const Shape& inputShape, int32_t axis,
                       const int32_t* indicesData, const Shape& indicesShape, T* outputData,
                       const Shape& outputShape) {
    const auto outerSize = getNumberOfElements(inputShape, 0, axis);
    const auto axisSize = getSizeOfDimension(inputShape, axis);
    const auto innerSize =
            getNumberOfElements(inputShape, axis + 1, getNumberOfDimensions(inputShape));
    const auto indicesCount = getNumberOfElements(indicesShape);
    for (int outer = 0; outer < outerSize; ++outer) {
        for (int i = 0; i < indicesCount; ++i) {
            NN_OPS_CHECK(0 <= indicesData[i] && indicesData[i] < axisSize);
            std::memcpy(outputData + (outer * indicesCount + i) * innerSize,
                        inputData + (outer * axisSize + indicesData[i]) * innerSize,
                        sizeof(T) * innerSize);
        }
    }
    return true;
}

}  // namespace

bool prepare(const Shape& input, int32_t axis, const Shape& indices, Shape* output) {
    NN_CHECK(handleNegativeAxis(input, &axis));
    output->dimensions.clear();
    output->dimensions.reserve(getNumberOfDimensions(input) + getNumberOfDimensions(indices) - 1);
    output->dimensions.insert(output->dimensions.end(), input.dimensions.begin(),
                              input.dimensions.begin() + axis);
    output->dimensions.insert(output->dimensions.end(), indices.dimensions.begin(),
                              indices.dimensions.end());
    output->dimensions.insert(output->dimensions.end(), input.dimensions.begin() + axis + 1,
                              input.dimensions.end());
    return true;
}

bool compute(const uint8_t* inputData, const Shape& inputShape, int32_t axis,
             const int32_t* indicesData, const Shape& indicesShape, uint8_t* outputData,
             const Shape& outputShape) {
    NNTRACE_TRANS("gather::compute");
    NN_CHECK(handleNegativeAxis(inputShape, &axis));

#define ANDROID_NN_GATHER(operandType, dataType)                                                \
    case operandType: {                                                                         \
        NNTRACE_TRANS("gatherImpl::" #dataType);                                                \
        gatherImpl(reinterpret_cast<const dataType*>(inputData), inputShape, axis, indicesData, \
                   indicesShape, reinterpret_cast<dataType*>(outputData), outputShape);         \
        return true;                                                                            \
    }

    switch (inputShape.type) {
        ANDROID_NN_GATHER(OperandType::TENSOR_FLOAT32, float);
        ANDROID_NN_GATHER(OperandType::TENSOR_INT32, int32_t);
        ANDROID_NN_GATHER(OperandType::TENSOR_QUANT8_ASYMM, uint8_t);
        default:
            LOG(ERROR) << "Unsupported GATHER output type";
            return false;
    }
#undef ANDROID_NN_GATHER
}

}  // namespace gather
}  // namespace nn
}  // namespace android
