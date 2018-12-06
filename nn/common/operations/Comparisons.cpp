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
namespace comparisons {

constexpr uint32_t kNumInputs = 2;
constexpr uint32_t kInputTensor1 = 0;
constexpr uint32_t kInputTensor2 = 1;

constexpr uint32_t kNumOutputs = 1;
constexpr uint32_t kOutputTensor = 0;

namespace {

typedef uint8_t bool8;

template <typename T>
bool compute(const std::function<bool(T, T)>& func, const T* aData, const Shape& aShape,
             const T* bData, const Shape& bShape, bool8* outputData, const Shape& outputShape) {
    IndexedShapeWrapper aShapeIndexed(aShape);
    IndexedShapeWrapper bShapeIndexed(bShape);
    IndexedShapeWrapper outputShapeIndexed(outputShape);
    std::vector<uint32_t> curIndex(outputShape.dimensions.size(), 0);
    bool lastIndex = false;
    do {
        uint32_t outputFlatIndex;
        NN_RET_CHECK(outputShapeIndexed.indexToFlatIndex(curIndex, &outputFlatIndex));
        uint32_t aFlatIndex;
        NN_RET_CHECK(aShapeIndexed.broadcastedIndexToFlatIndex(curIndex, &aFlatIndex));
        uint32_t bFlatIndex;
        NN_RET_CHECK(bShapeIndexed.broadcastedIndexToFlatIndex(curIndex, &bFlatIndex));

        if (aShape.type == OperandType::TENSOR_QUANT8_ASYMM &&
            !(aShape.offset == bShape.offset && aShape.scale == bShape.scale)) {
            const float realB = (bData[bFlatIndex] - bShape.offset) * bShape.scale;
            const uint8_t requintizedB = static_cast<uint8_t>(realB / aShape.scale + aShape.offset);
            outputData[outputFlatIndex] = func(aData[aFlatIndex], requintizedB);
        } else {
            outputData[outputFlatIndex] = func(aData[aFlatIndex], bData[bFlatIndex]);
        }

        NN_RET_CHECK(outputShapeIndexed.nextIndexInplace(&curIndex, &lastIndex));
    } while (!lastIndex);
    return true;
}

template <typename T>
bool executeLessTyped(IOperationExecutionContext* context) {
    return compute<T>(
            std::less<T>(), context->getInputBuffer<T>(kInputTensor1),
            context->getInputShape(kInputTensor1), context->getInputBuffer<T>(kInputTensor2),
            context->getInputShape(kInputTensor2), context->getOutputBuffer<bool8>(kOutputTensor),
            context->getOutputShape(kOutputTensor));
}

template <typename T>
bool executeLessEqualTyped(IOperationExecutionContext* context) {
    return compute<T>(
            std::less_equal<T>(), context->getInputBuffer<T>(kInputTensor1),
            context->getInputShape(kInputTensor1), context->getInputBuffer<T>(kInputTensor2),
            context->getInputShape(kInputTensor2), context->getOutputBuffer<bool8>(kOutputTensor),
            context->getOutputShape(kOutputTensor));
}

template <typename T>
bool executeEqualTyped(IOperationExecutionContext* context) {
    return compute<T>(
            std::equal_to<T>(), context->getInputBuffer<T>(kInputTensor1),
            context->getInputShape(kInputTensor1), context->getInputBuffer<T>(kInputTensor2),
            context->getInputShape(kInputTensor2), context->getOutputBuffer<bool8>(kOutputTensor),
            context->getOutputShape(kOutputTensor));
}

template <typename T>
bool executeNotEqualTyped(IOperationExecutionContext* context) {
    return compute<T>(
            std::not_equal_to<T>(), context->getInputBuffer<T>(kInputTensor1),
            context->getInputShape(kInputTensor1), context->getInputBuffer<T>(kInputTensor2),
            context->getInputShape(kInputTensor2), context->getOutputBuffer<bool8>(kOutputTensor),
            context->getOutputShape(kOutputTensor));
}

template <typename T>
bool executeGreaterEqualTyped(IOperationExecutionContext* context) {
    return compute<T>(
            std::greater_equal<T>(), context->getInputBuffer<T>(kInputTensor1),
            context->getInputShape(kInputTensor1), context->getInputBuffer<T>(kInputTensor2),
            context->getInputShape(kInputTensor2), context->getOutputBuffer<bool8>(kOutputTensor),
            context->getOutputShape(kOutputTensor));
}

template <typename T>
bool executeGreaterTyped(IOperationExecutionContext* context) {
    return compute<T>(
            std::greater<T>(), context->getInputBuffer<T>(kInputTensor1),
            context->getInputShape(kInputTensor1), context->getInputBuffer<T>(kInputTensor2),
            context->getInputShape(kInputTensor2), context->getOutputBuffer<bool8>(kOutputTensor),
            context->getOutputShape(kOutputTensor));
}

}  // namespace

bool validate(const IOperationValidationContext* context) {
    NN_RET_CHECK_EQ(context->getNumInputs(), kNumInputs);
    NN_RET_CHECK_EQ(context->getNumOutputs(), kNumOutputs);
    OperandType inputType = context->getInputType(kInputTensor1);
    NN_RET_CHECK(
            inputType == OperandType::TENSOR_BOOL8 || inputType == OperandType::TENSOR_FLOAT16 ||
            inputType == OperandType::TENSOR_FLOAT32 || inputType == OperandType::TENSOR_INT32 ||
            inputType == OperandType::TENSOR_QUANT8_ASYMM)
            << "Unsupported input operand type for comparison op: " << toString(inputType);
    NN_RET_CHECK(validateInputTypes(context, {inputType, inputType}));
    NN_RET_CHECK(validateOutputTypes(context, {OperandType::TENSOR_BOOL8}));
    return validateHalVersion(context, HalVersion::V1_2);
}

bool prepare(IOperationExecutionContext* context) {
    Shape input1 = context->getInputShape(kInputTensor1);
    Shape input2 = context->getInputShape(kInputTensor2);
    Shape output = context->getOutputShape(kOutputTensor);
    NN_RET_CHECK(calculateBroadcastedShape(input1, input2, &output));
    return context->setOutputShape(kOutputTensor, output);
}

bool executeLess(IOperationExecutionContext* context) {
    switch (context->getInputType(kInputTensor1)) {
        case OperandType::TENSOR_FLOAT16:
            return executeLessTyped<_Float16>(context);
        case OperandType::TENSOR_FLOAT32:
            return executeLessTyped<float>(context);
        case OperandType::TENSOR_INT32:
            return executeLessTyped<int32_t>(context);
        case OperandType::TENSOR_QUANT8_ASYMM:
            return executeLessTyped<uint8_t>(context);
        case OperandType::TENSOR_BOOL8:
            return executeLessTyped<bool8>(context);
        default:
            NN_RET_CHECK_FAIL() << "Unsupported tensor type for comparison";
    }
}

bool executeLessEqual(IOperationExecutionContext* context) {
    switch (context->getInputType(kInputTensor1)) {
        case OperandType::TENSOR_FLOAT16:
            return executeLessEqualTyped<_Float16>(context);
        case OperandType::TENSOR_FLOAT32:
            return executeLessEqualTyped<float>(context);
        case OperandType::TENSOR_INT32:
            return executeLessEqualTyped<int32_t>(context);
        case OperandType::TENSOR_QUANT8_ASYMM:
            return executeLessEqualTyped<uint8_t>(context);
        case OperandType::TENSOR_BOOL8:
            return executeLessEqualTyped<bool8>(context);
        default:
            NN_RET_CHECK_FAIL() << "Unsupported tensor type for comparison";
    }
}

bool executeEqual(IOperationExecutionContext* context) {
    switch (context->getInputType(kInputTensor1)) {
        case OperandType::TENSOR_FLOAT16:
            return executeEqualTyped<_Float16>(context);
        case OperandType::TENSOR_FLOAT32:
            return executeEqualTyped<float>(context);
        case OperandType::TENSOR_INT32:
            return executeEqualTyped<int32_t>(context);
        case OperandType::TENSOR_QUANT8_ASYMM:
            return executeEqualTyped<uint8_t>(context);
        case OperandType::TENSOR_BOOL8:
            return executeEqualTyped<bool8>(context);
        default:
            NN_RET_CHECK_FAIL() << "Unsupported tensor type for comparison";
    }
}

bool executeNotEqual(IOperationExecutionContext* context) {
    switch (context->getInputType(kInputTensor1)) {
        case OperandType::TENSOR_FLOAT16:
            return executeNotEqualTyped<_Float16>(context);
        case OperandType::TENSOR_FLOAT32:
            return executeNotEqualTyped<float>(context);
        case OperandType::TENSOR_INT32:
            return executeNotEqualTyped<int32_t>(context);
        case OperandType::TENSOR_QUANT8_ASYMM:
            return executeNotEqualTyped<uint8_t>(context);
        case OperandType::TENSOR_BOOL8:
            return executeNotEqualTyped<bool8>(context);
        default:
            NN_RET_CHECK_FAIL() << "Unsupported tensor type for comparison";
    }
}

bool executeGreaterEqual(IOperationExecutionContext* context) {
    switch (context->getInputType(kInputTensor1)) {
        case OperandType::TENSOR_FLOAT16:
            return executeGreaterEqualTyped<_Float16>(context);
        case OperandType::TENSOR_FLOAT32:
            return executeGreaterEqualTyped<float>(context);
        case OperandType::TENSOR_INT32:
            return executeGreaterEqualTyped<int32_t>(context);
        case OperandType::TENSOR_QUANT8_ASYMM:
            return executeGreaterEqualTyped<uint8_t>(context);
        case OperandType::TENSOR_BOOL8:
            return executeGreaterEqualTyped<bool8>(context);
        default:
            NN_RET_CHECK_FAIL() << "Unsupported tensor type for comparison";
    }
}

bool executeGreater(IOperationExecutionContext* context) {
    switch (context->getInputType(kInputTensor1)) {
        case OperandType::TENSOR_FLOAT16:
            return executeGreaterTyped<_Float16>(context);
        case OperandType::TENSOR_FLOAT32:
            return executeGreaterTyped<float>(context);
        case OperandType::TENSOR_INT32:
            return executeGreaterTyped<int32_t>(context);
        case OperandType::TENSOR_QUANT8_ASYMM:
            return executeGreaterTyped<uint8_t>(context);
        case OperandType::TENSOR_BOOL8:
            return executeGreaterTyped<bool8>(context);
        default:
            NN_RET_CHECK_FAIL() << "Unsupported tensor type for comparison";
    }
}

}  // namespace comparisons

NN_REGISTER_OPERATION(LESS, "LESS", comparisons::validate, comparisons::prepare,
                      comparisons::executeLess);
NN_REGISTER_OPERATION(LESS_EQUAL, "LESS_EQUAL", comparisons::validate, comparisons::prepare,
                      comparisons::executeLessEqual);
NN_REGISTER_OPERATION(EQUAL, "EQUAL", comparisons::validate, comparisons::prepare,
                      comparisons::executeEqual);
NN_REGISTER_OPERATION(NOT_EQUAL, "NOT_EQUAL", comparisons::validate, comparisons::prepare,
                      comparisons::executeNotEqual);
NN_REGISTER_OPERATION(GREATER_EQUAL, "GREATER_EQUAL", comparisons::validate, comparisons::prepare,
                      comparisons::executeGreaterEqual);
NN_REGISTER_OPERATION(GREATER, "GREATER", comparisons::validate, comparisons::prepare,
                      comparisons::executeGreater);

}  // namespace nn
}  // namespace android
