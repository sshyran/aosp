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
#include "IndexedShapeWrapper.h"
#include "OperationResolver.h"
#include "OperationsUtils.h"

namespace android {
namespace nn {
namespace sparse_to_dense {

constexpr uint32_t kNumInputs = 4;
constexpr uint32_t kInputIndices = 0;
constexpr uint32_t kOutputShape = 1;
constexpr uint32_t kInputValues = 2;
constexpr uint32_t kDefaultValue = 3;

constexpr uint32_t kNumOutputs = 1;
constexpr uint32_t kOutputTensor = 0;

namespace {

template <typename T>
bool compute(const int32_t* inputIndicesData, const Shape& inputIndicesShape,
             const T* inputValuesData, const Shape& inputValuesShape, const T& defaultValue,
             T* outputData, const Shape& outputShape) {
    // First fill in the tensor with default value provided
    const int denseSize = getNumberOfElements(outputShape);
    for (int i = 0; i < denseSize; ++i) {
        outputData[i] = defaultValue;
    }

    // Now transfer sparse values to the dense tensor
    IndexedShapeWrapper indexedOutputShape(outputShape);
    int outputRank = outputShape.dimensions.size();
    std::vector<uint32_t> outputIndex(outputRank);
    const uint32_t numOfSparseElements = getSizeOfDimension(inputIndicesShape, 0);
    for (int i = 0; i < numOfSparseElements; ++i) {
        for (int d = 0; d < outputRank; ++d) {
            outputIndex[d] = inputIndicesData[i * outputRank + d];
        }
        uint32_t outputFlatIndex;
        indexedOutputShape.indexToFlatIndex(outputIndex, &outputFlatIndex);
        outputData[outputFlatIndex] = inputValuesData[i];
    }
    return true;
}

template <typename T, typename S = T>
bool executeTyped(IOperationExecutionContext* context) {
    return compute<T>(
            context->getInputBuffer<int32_t>(kInputIndices), context->getInputShape(kInputIndices),
            context->getInputBuffer<T>(kInputValues), context->getInputShape(kInputValues),
            static_cast<T>(context->getInputValue<S>(kDefaultValue)),
            context->getOutputBuffer<T>(kOutputTensor), context->getOutputShape(kOutputTensor));
}

}  // namespace

bool validate(const IOperationValidationContext* context) {
    NN_RET_CHECK_EQ(context->getNumInputs(), kNumInputs);
    NN_RET_CHECK_EQ(context->getNumOutputs(), kNumOutputs);
    OperandType inputType = context->getInputType(kInputValues);
    OperandType inputScalarType;
    switch (inputType) {
        case OperandType::TENSOR_FLOAT16: {
            inputScalarType = OperandType::FLOAT16;
        } break;
        case OperandType::TENSOR_FLOAT32: {
            inputScalarType = OperandType::FLOAT32;
        } break;
        case OperandType::TENSOR_INT32: {
            inputScalarType = OperandType::INT32;
        } break;
        case OperandType::TENSOR_QUANT8_ASYMM: {
            inputScalarType = OperandType::INT32;
        } break;
        default: {
            LOG(ERROR) << "Unsupported input operand type for SPARSE_TO_DENSE op: "
                       << toString(inputType);
            return false;
        }
    }
    NN_RET_CHECK(validateInputTypes(context, {OperandType::TENSOR_INT32, OperandType::TENSOR_INT32,
                                              inputType, inputScalarType}));
    NN_RET_CHECK(validateOutputTypes(context, {inputType}));
    return validateHalVersion(context, HalVersion::V1_2);
}

bool prepare(IOperationExecutionContext* context) {
    Shape inputIndices = context->getInputShape(kInputIndices);
    Shape outputShape = context->getInputShape(kOutputShape);
    Shape inputValues = context->getInputShape(kInputValues);

    NN_RET_CHECK_GT(getNumberOfDimensions(inputIndices), 0);
    NN_RET_CHECK_LT(getNumberOfDimensions(inputIndices), 3);
    NN_RET_CHECK_EQ(getNumberOfDimensions(outputShape), 1);
    NN_RET_CHECK_EQ(getNumberOfDimensions(inputValues), 1);

    NN_RET_CHECK_EQ(getSizeOfDimension(inputIndices, 0), getSizeOfDimension(inputValues, 0));
    if (getNumberOfDimensions(inputIndices) == 2) {
        NN_RET_CHECK_EQ(getSizeOfDimension(inputIndices, 1), getSizeOfDimension(outputShape, 0));
    } else {
        NN_RET_CHECK_EQ(getSizeOfDimension(outputShape, 0), 1);
    }

    if (context->getInputType(kInputValues) == OperandType::TENSOR_QUANT8_ASYMM) {
        int32_t defaultValue = context->getInputValue<int32_t>(kDefaultValue);
        NN_RET_CHECK_GE(defaultValue, 0);
        NN_RET_CHECK_LT(defaultValue, 256);
    }

    Shape output = context->getOutputShape(kOutputTensor);
    const int32_t* outputShapeData = context->getInputBuffer<int32_t>(kOutputShape);
    output.dimensions.resize(outputShape.dimensions[0]);
    for (int i = 0; i < outputShape.dimensions[0]; ++i) {
        output.dimensions[i] = static_cast<uint32_t>(outputShapeData[i]);
    }

    NN_RET_CHECK_EQ(output.scale, inputValues.scale);
    NN_RET_CHECK_EQ(output.offset, inputValues.offset);

    return context->setOutputShape(kOutputTensor, output);
}

bool execute(IOperationExecutionContext* context) {
    switch (context->getInputType(kInputValues)) {
        case OperandType::TENSOR_FLOAT16:
            return executeTyped<_Float16>(context);
        case OperandType::TENSOR_FLOAT32:
            return executeTyped<float>(context);
        case OperandType::TENSOR_INT32:
            return executeTyped<int32_t>(context);
        case OperandType::TENSOR_QUANT8_ASYMM:
            return executeTyped<uint8_t, int32_t>(context);
        default:
            NN_RET_CHECK_FAIL() << "Unsupported tensor type for SPARSE_TO_DENSE op.";
    }
}

}  // namespace sparse_to_dense

NN_REGISTER_OPERATION(SPARSE_TO_DENSE, "SPARSE_TO_DENSE", sparse_to_dense::validate,
                      sparse_to_dense::prepare, sparse_to_dense::execute);

}  // namespace nn
}  // namespace android
