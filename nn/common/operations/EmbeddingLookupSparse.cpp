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

#include "HalInterfaces.h"
#include "OperationResolver.h"
#include "OperationsUtils.h"

#include <cmath>

namespace android {
namespace nn {
namespace embedding_lookup_sparse {

constexpr uint32_t kNumInputs = 6;
constexpr uint32_t kInputLookupIds = 0;
constexpr uint32_t kInputIndices = 1;
constexpr uint32_t kInputDenseShape = 2;
constexpr uint32_t kInputWeights = 3;
constexpr uint32_t kInputCombiner = 4;
constexpr uint32_t kInputValues = 5;

constexpr uint32_t kNumOutputs = 1;
constexpr uint32_t kOutputTensor = 0;

namespace {
enum CombinerType {
    COMBINER_TYPE_SUM = 0,
    COMBINER_TYPE_MEAN = 1,
    COMBINER_TYPE_SQRTN = 2,
};

template <typename T>
void FinalizeAggregation(int32_t combinerType, int numElements, float currentTotalWeight,
                         float currentSquaresWeight, int embeddingSize, T* output) {
    if (combinerType != COMBINER_TYPE_SUM && numElements > 0) {
        T multiplier = 1.0;
        switch (combinerType) {
            case COMBINER_TYPE_MEAN:
                multiplier = currentTotalWeight;
                break;
            case COMBINER_TYPE_SQRTN:
                multiplier = std::sqrt(currentSquaresWeight);
                break;
            default:
                break;
        }
        for (int k = 0; k < embeddingSize; ++k) {
            output[k] /= multiplier;
        }
    }
}

template <typename T>
bool compute(const int32_t* lookupIdsData, const Shape& lookupIdsShape, const int32_t* indicesData,
             const Shape& indicesShape, const int32_t* denseShapeData, const Shape& denseShapeShape,
             const T* weightsData, const Shape& weightsShape, int32_t combiner, const T* valuesData,
             const Shape& valuesShape, T* outputData, const Shape& outputShape) {
    NN_RET_CHECK(combiner == COMBINER_TYPE_SUM || combiner == COMBINER_TYPE_MEAN ||
                 combiner == COMBINER_TYPE_SQRTN)
            << "Unsupported combiner mode for EMBEDDING_LOOKUP_SPARSE";

    // Initialize output with zeroes
    const int outputElementsNum = getNumberOfElements(outputShape);
    for (int i = 0; i < outputElementsNum; ++i) {
        outputData[i] = 0;
    }

    const int valuesRank = getNumberOfDimensions(valuesShape);
    int embeddingSize = 1;
    for (int i = 1; i < valuesRank; ++i) {
        embeddingSize *= getSizeOfDimension(valuesShape, i);
    }

    const int numLookups = getSizeOfDimension(indicesShape, 0);
    const int indexRank = getSizeOfDimension(indicesShape, 1);
    const int numValues = getSizeOfDimension(valuesShape, 0);

    // Keep track of the current bucket for aggregation.
    int numElements = 0;
    int currentOutputOffset = 0;
    T currentTotalWeight = 0.0;
    T currentSquaresWeight = 0.0;

    for (int i = 0; i < numLookups; ++i) {
        int currentId = lookupIdsData[i];
        NN_RET_CHECK(currentId >= 0 && currentId < numValues);

        const int indexOffset = i * indexRank;

        // Calculate where current embeddings need to be added
        int outputBucket = 0;
        int stride = 1;
        for (int k = (indexRank - 1) - 1; k >= 0; --k) {
            outputBucket += indicesData[indexOffset + k] * stride;
            stride *= denseShapeData[k];
        }
        const int outputOffset = outputBucket * embeddingSize;

        // If we are in a new aggregation bucket, finalize aggregation for
        // previous bucket first and then reset the trackers.
        if (outputOffset != currentOutputOffset) {
            FinalizeAggregation(combiner, numElements, currentTotalWeight, currentSquaresWeight,
                                embeddingSize, &outputData[currentOutputOffset]);

            numElements = 0;
            currentOutputOffset = outputOffset;
            currentTotalWeight = 0;
            currentSquaresWeight = 0;
        }

        // Add new element to the bucket
        ++numElements;
        const int currentEmbeddingOffset = currentId * embeddingSize;
        const T w = weightsData[i];
        currentTotalWeight += w;
        currentSquaresWeight += w * w;
        for (int k = 0; k < embeddingSize; ++k) {
            outputData[currentOutputOffset + k] += w * valuesData[currentEmbeddingOffset + k];
        }
    }

    // Finalize last bucket.
    FinalizeAggregation(combiner, numElements, currentTotalWeight, currentSquaresWeight,
                        embeddingSize, &outputData[currentOutputOffset]);

    return true;
}

}  // namespace

bool validate(const IOperationValidationContext* context) {
    NN_RET_CHECK_EQ(context->getNumInputs(), kNumInputs);
    NN_RET_CHECK_EQ(context->getNumOutputs(), kNumOutputs);
    OperandType inputType = context->getInputType(kInputValues);
    NN_RET_CHECK(inputType == OperandType::TENSOR_FLOAT16 ||
                 inputType == OperandType::TENSOR_FLOAT32)
            << "Unsupported input tensor type for operation EMBEDDING_LOOKUP_SPARSE";
    NN_RET_CHECK(validateInputTypes(
            context, {OperandType::TENSOR_INT32, OperandType::TENSOR_INT32,
                      OperandType::TENSOR_INT32, inputType, OperandType::INT32, inputType}));
    NN_RET_CHECK(validateOutputTypes(context, {inputType}));
    return validateHalVersion(context, HalVersion::V1_2);
}

bool prepare(IOperationExecutionContext* context) {
    Shape values = context->getInputShape(kInputValues);
    const int32_t valuesDimsNum = getNumberOfDimensions(values);
    NN_RET_CHECK_GE(valuesDimsNum, 2);

    Shape lookupIds = context->getInputShape(kInputLookupIds);
    NN_RET_CHECK_EQ(getNumberOfDimensions(lookupIds), 1);

    Shape indices = context->getInputShape(kInputIndices);
    NN_RET_CHECK_EQ(getNumberOfDimensions(indices), 2);

    Shape denseShape = context->getInputShape(kInputDenseShape);
    NN_RET_CHECK_EQ(getNumberOfDimensions(denseShape), 1);

    Shape weights = context->getInputShape(kInputWeights);
    NN_RET_CHECK_EQ(getNumberOfDimensions(weights), 1);

    NN_RET_CHECK_EQ(getSizeOfDimension(lookupIds, 0), getSizeOfDimension(indices, 0));
    NN_RET_CHECK_EQ(getSizeOfDimension(lookupIds, 0), getSizeOfDimension(weights, 0));
    NN_RET_CHECK_EQ(getSizeOfDimension(indices, 1), getSizeOfDimension(denseShape, 0));

    const int denseDimsNum = getSizeOfDimension(denseShape, 0);
    Shape outputShape = context->getOutputShape(kOutputTensor);
    outputShape.dimensions.clear();
    outputShape.dimensions.reserve(denseDimsNum + valuesDimsNum - 2);
    const int32_t* denseShapeData = context->getInputBuffer<int32_t>(kInputDenseShape);
    for (int32_t i = 0; i < denseDimsNum - 1; ++i) {
        outputShape.dimensions.push_back(denseShapeData[i]);
    }
    for (int32_t i = 1; i < valuesDimsNum; ++i) {
        outputShape.dimensions.push_back(values.dimensions[i]);
    }

    return context->setOutputShape(kOutputTensor, outputShape);
}

bool execute(IOperationExecutionContext* context) {
    switch (context->getInputType(kInputValues)) {
        case OperandType::TENSOR_FLOAT16:
            return compute(context->getInputBuffer<int32_t>(kInputLookupIds),
                           context->getInputShape(kInputLookupIds),
                           context->getInputBuffer<int32_t>(kInputIndices),
                           context->getInputShape(kInputIndices),
                           context->getInputBuffer<int32_t>(kInputDenseShape),
                           context->getInputShape(kInputDenseShape),
                           context->getInputBuffer<_Float16>(kInputWeights),
                           context->getInputShape(kInputWeights),
                           context->getInputValue<int32_t>(kInputCombiner),
                           context->getInputBuffer<_Float16>(kInputValues),
                           context->getInputShape(kInputValues),
                           context->getOutputBuffer<_Float16>(kOutputTensor),
                           context->getOutputShape(kOutputTensor));
        case OperandType::TENSOR_FLOAT32:
            return compute(context->getInputBuffer<int32_t>(kInputLookupIds),
                           context->getInputShape(kInputLookupIds),
                           context->getInputBuffer<int32_t>(kInputIndices),
                           context->getInputShape(kInputIndices),
                           context->getInputBuffer<int32_t>(kInputDenseShape),
                           context->getInputShape(kInputDenseShape),
                           context->getInputBuffer<float>(kInputWeights),
                           context->getInputShape(kInputWeights),
                           context->getInputValue<int32_t>(kInputCombiner),
                           context->getInputBuffer<float>(kInputValues),
                           context->getInputShape(kInputValues),
                           context->getOutputBuffer<float>(kOutputTensor),
                           context->getOutputShape(kOutputTensor));
        default:
            NN_RET_CHECK_FAIL() << "Unsupported tensor type for EMBEDDING_LOOKUP_SPARSE op.";
    }
}

}  // namespace embedding_lookup_sparse

NN_REGISTER_OPERATION(EMBEDDING_LOOKUP_SPARSE, "EMBEDDING_LOOKUP_SPARSE",
                      embedding_lookup_sparse::validate, embedding_lookup_sparse::prepare,
                      embedding_lookup_sparse::execute);

}  // namespace nn
}  // namespace android
