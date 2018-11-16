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
#include "Slice.h"

#include "IndexedShapeWrapper.h"
#include "OperationsUtils.h"

#include <vector>

namespace android {
namespace nn {
namespace slice {

namespace {

template <typename T>
void addVectors(const std::vector<T>& a, const std::vector<T>& b, std::vector<T>* res) {
    for (int i = 0; i < res->size(); ++i) {
        res->at(i) = a[i] + b[i];
    }
}

template <typename T>
bool evalGeneric(const T* inputData, const Shape& inputShape, const int32_t* beginData,
                 const Shape& beginShape, const int32_t* sizeData, const Shape& sizeShape,
                 T* outputData, const Shape& outputShape) {
    const int outputSize = getNumberOfElements(outputShape);
    const IndexedShapeWrapper indexedOutput = IndexedShapeWrapper(outputShape);
    const IndexedShapeWrapper indexedInput = IndexedShapeWrapper(inputShape);
    std::vector<uint32_t> outputIndex(getNumberOfDimensions(outputShape), 0);
    std::vector<uint32_t> beginIndex(getSizeOfDimension(beginShape, 0));
    std::vector<uint32_t> inputIndex(getNumberOfDimensions(inputShape));

    for (int i = 0; i < beginIndex.size(); ++i) {
        beginIndex[i] = static_cast<uint32_t>(beginData[i]);
    }

    bool lastIndex = false;
    uint32_t outputOffset;
    uint32_t inputOffset;

    do {
        addVectors(outputIndex, beginIndex, &inputIndex);

        NN_RET_CHECK(indexedOutput.indexToFlatIndex(outputIndex, &outputOffset));
        NN_RET_CHECK(indexedInput.indexToFlatIndex(inputIndex, &inputOffset));

        outputData[outputOffset] = inputData[inputOffset];
        NN_RET_CHECK(indexedOutput.nextIndexInplace(&outputIndex, &lastIndex));
    } while (!lastIndex);
    return true;
}

}  // namespace

bool prepare(const Shape& inputShape, const void* untypedBeginData, const Shape& beginShape,
             const void* untypedSizeData, const Shape& sizeShape, Shape* outputShape) {
    const int32_t n_dims = getNumberOfDimensions(inputShape);
    NN_RET_CHECK(n_dims > 0);

    NN_RET_CHECK_EQ(getNumberOfDimensions(beginShape), 1);
    NN_RET_CHECK_EQ(getSizeOfDimension(beginShape, 0), n_dims);

    NN_RET_CHECK_EQ(getNumberOfDimensions(sizeShape), 1);
    NN_RET_CHECK_EQ(getSizeOfDimension(sizeShape, 0), n_dims);

    const int32_t* beginData = reinterpret_cast<const int32_t*>(untypedBeginData);
    const int32_t* sizeData = reinterpret_cast<const int32_t*>(untypedSizeData);

    outputShape->dimensions.resize(n_dims);
    for (int i = 0; i < n_dims; ++i) {
        const int32_t sliceBegin = beginData[i];
        int32_t sliceSize = sizeData[i];
        NN_RET_CHECK_LT(beginData[i], getSizeOfDimension(inputShape, i));
        NN_RET_CHECK(sliceSize > 0 || sliceSize == -1);
        if (sliceSize == -1) {
            sliceSize = getSizeOfDimension(inputShape, i) - sliceBegin;
        }
        NN_RET_CHECK_LE(sliceBegin + sliceSize, getSizeOfDimension(inputShape, i));
        outputShape->dimensions[i] = sliceSize;
    }
    return true;
}

bool eval(const void* inputData, const Shape& inputShape, const void* untypedBeginData,
          const Shape& beginShape, const void* untypedSizeData, const Shape& sizeShape,
          void* outputData, const Shape& outputShape) {
    const int32_t* beginData = reinterpret_cast<const int32_t*>(untypedBeginData);
    const int32_t* sizeData = reinterpret_cast<const int32_t*>(untypedSizeData);
    switch (inputShape.type) {
        case OperandType::TENSOR_FLOAT16: {
            return evalGeneric(reinterpret_cast<const _Float16*>(inputData), inputShape, beginData,
                               beginShape, sizeData, sizeShape,
                               reinterpret_cast<_Float16*>(outputData), outputShape);
        } break;
        case OperandType::TENSOR_FLOAT32: {
            return evalGeneric(reinterpret_cast<const float*>(inputData), inputShape, beginData,
                               beginShape, sizeData, sizeShape,
                               reinterpret_cast<float*>(outputData), outputShape);
        } break;
        case OperandType::TENSOR_INT32: {
            return evalGeneric(reinterpret_cast<const int32_t*>(inputData), inputShape, beginData,
                               beginShape, sizeData, sizeShape,
                               reinterpret_cast<int32_t*>(outputData), outputShape);
        } break;
        case OperandType::TENSOR_QUANT8_ASYMM: {
            return evalGeneric(reinterpret_cast<const uint8_t*>(inputData), inputShape, beginData,
                               beginShape, sizeData, sizeShape,
                               reinterpret_cast<uint8_t*>(outputData), outputShape);
        } break;
        default: {
            LOG(ERROR) << "Unsupported data type: " << toString(inputShape.type);
            return false;
        }
    }
}

}  // namespace slice
}  // namespace nn
}  // namespace android
