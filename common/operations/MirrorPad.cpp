/*
 * Copyright (C) 2021 The Android Open Source Project
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

#include "OperationResolver.h"
#include "OperationsUtils.h"

#ifdef NN_INCLUDE_CPU_IMPLEMENTATION
#include <limits>
#include <vector>

#include "CpuOperationUtils.h"
#endif  // NN_INCLUDE_CPU_IMPLEMENTATION

namespace android {
namespace nn {
namespace mirror_pad_op {

constexpr char kOperationName[] = "MIRROR_PAD";

// inputs consist of an n-D tensor to be padded, a 2-D tensor specifying the padding, and a scalar
// specifying the mode
constexpr uint32_t kNumInputs = 3;
constexpr uint32_t kInputTensor = 0;
constexpr uint32_t kInputPaddingTensor = 1;
constexpr uint32_t kInputModeScalar = 2;

constexpr uint32_t kNumOutputs = 1;
constexpr uint32_t kOutputTensor = 0;

[[maybe_unused]] constexpr int kModeReflect = 0;
[[maybe_unused]] constexpr int kModeSymmetric = 1;

Result<Version> validate(const IOperationValidationContext* context) {
    NN_RET_CHECK_EQ(context->getNumInputs(), kNumInputs);
    NN_RET_CHECK_EQ(context->getNumOutputs(), kNumOutputs);

    // Validate the input tensor.
    const OperandType inputTensorType = context->getInputType(kInputTensor);
    NN_RET_CHECK(inputTensorType == OperandType::TENSOR_FLOAT16 ||
                 inputTensorType == OperandType::TENSOR_FLOAT32 ||
                 inputTensorType == OperandType::TENSOR_QUANT8_ASYMM ||
                 inputTensorType == OperandType::TENSOR_QUANT8_ASYMM_SIGNED ||
                 inputTensorType == OperandType::TENSOR_INT32);

    // Validate the padding tensor.
    NN_RET_CHECK_EQ(context->getInputType(kInputPaddingTensor), OperandType::TENSOR_INT32);
    const Shape inputPaddingTensorShape = context->getInputShape(kInputPaddingTensor);
    if (hasKnownRank(inputPaddingTensorShape)) {
        NN_RET_CHECK_EQ(getNumberOfDimensions(inputPaddingTensorShape), 2U)
                << "Input tensor #" << kInputPaddingTensor << " must have 2 dimensions";
        auto dim1 = inputPaddingTensorShape.dimensions[1];
        NN_RET_CHECK(!dim1 || dim1 == 2) << "Input tensor #" << kInputPaddingTensor
                                         << " second dimension must be 2 but is " << dim1;
    }

    // Validate the mode scalar.
    NN_RET_CHECK_EQ(context->getInputType(kInputModeScalar), OperandType::INT32);

    // Validate the output tensor.
    NN_RET_CHECK_EQ(context->getOutputType(kOutputTensor), inputTensorType);

    // Consistency checks.
    const Shape inputTensorShape = context->getInputShape(kInputTensor);
    const Shape outputTensorShape = context->getOutputShape(kOutputTensor);
    if (inputTensorType == OperandType::TENSOR_QUANT8_ASYMM ||
        inputTensorType == OperandType::TENSOR_QUANT8_ASYMM_SIGNED) {
        NN_RET_CHECK_EQ(inputTensorShape.scale, outputTensorShape.scale)
                << "Input tensor #" << kInputTensor << " scale " << inputTensorShape.scale
                << " does not match output tensor scale " << outputTensorShape.scale;
        NN_RET_CHECK_EQ(inputTensorShape.offset, outputTensorShape.offset)
                << "Input tensor #" << kInputTensor << " offset " << inputTensorShape.offset
                << " does not match output tensor offset " << outputTensorShape.offset;
    }
    if (hasKnownRank(inputTensorShape)) {
        if (hasKnownRank(inputPaddingTensorShape)) {
            if (auto inputPaddingTensorDim0 = inputPaddingTensorShape.dimensions[0]) {
                auto inputTensorRank = getNumberOfDimensions(inputTensorShape);
                NN_RET_CHECK_EQ(inputTensorRank, inputPaddingTensorDim0)
                        << "Input tensor #" << kInputPaddingTensor << " first dimension "
                        << inputPaddingTensorDim0 << " does not match input tensor #"
                        << kInputTensor << " rank " << inputTensorRank;
            }
        }
        if (hasKnownRank(outputTensorShape)) {
            auto inputTensorRank = getNumberOfDimensions(inputTensorShape);
            auto outputTensorRank = getNumberOfDimensions(outputTensorShape);
            NN_RET_CHECK_EQ(inputTensorRank, outputTensorRank)
                    << "Input tensor #" << kInputTensor << " rank " << inputTensorRank
                    << " does not match "
                    << "output tensor rank " << outputTensorRank;
        }
    }

    return kVersionFeatureLevel7;
}

#ifdef NN_INCLUDE_CPU_IMPLEMENTATION
bool prepare(IOperationExecutionContext* context) {
    // Input tensor must be of positive rank.
    const Shape inputShape = context->getInputShape(kInputTensor);
    const auto inputRank = getNumberOfDimensions(inputShape);
    NN_RET_CHECK_GT(inputRank, 0U);

    // Check mode value.
    const int32_t mode = context->getInputValue<int32_t>(kInputModeScalar);
    NN_RET_CHECK(mode == kModeReflect || mode == kModeSymmetric);

    Shape outputShape = context->getOutputShape(kOutputTensor);
    NN_RET_CHECK(padPrepare(inputShape, context->getInputBuffer<int32_t>(kInputPaddingTensor),
                            context->getInputShape(kInputPaddingTensor), &outputShape));

    // Check padding values.
    // Note that the call to padPrepare() above verifies that the padding tensor
    // has the correct dimensions.
    {
        const int32_t* paddingValues = context->getInputBuffer<int32_t>(kInputPaddingTensor);
        for (uint32_t i = 0; i < inputRank; ++i) {
            const int32_t paddingMax = getSizeOfDimension(inputShape, i) - (mode == kModeReflect);
            const int32_t beforePadding = *(paddingValues++);
            NN_RET_CHECK_GE(beforePadding, 0);
            NN_RET_CHECK_LE(beforePadding, paddingMax);
            const int32_t afterPadding = *(paddingValues++);
            NN_RET_CHECK_GE(afterPadding, 0);
            NN_RET_CHECK_LE(afterPadding, paddingMax);
        }
    }

    return context->setOutputShape(kOutputTensor, outputShape);
}

/*-- begin execution ------------------------------------------------------------------*/

// Based on
// http://cs/android/external/tensorflow/tensorflow/lite/kernels/mirror_pad.cc;l=163;rcl=84f01780a69b5900cfddf2b44d696f92e0aac331

// The structure of that code is largely preserved, for simplicity of comparison.

// The TFLite implementation is multithreaded.  The NNAPI implementation is not.

namespace {

// In adapting the TFLite implementation to NNAPI, we introduce conversions from
// conventional NNAPI types (typically uint32_t) to int, which is the
// conventional TFLite type.  This function checks that such a conversion is
// value-preserving.
template <typename T>
bool checkAsInt(T) {
    // Making the assertion expression dependent on the template type (via
    // incorportation of "&& sizeof(T)") ensures that the static_assert will
    // only be evaluated if this function body is instantiated (we expect only
    // the explicit specializations to be used).  Alternatively, we could omit
    // the body entirely, in which case an unexpected choice of T would result
    // in a link-time failure rather than a compile-time failure.
    static_assert(false && sizeof(T), "Unimplemented");
    return false;
}
template <>
bool checkAsInt(uint32_t val) {
    static_assert(sizeof(int) <= sizeof(uint32_t));
    NN_RET_CHECK_LE(val, uint32_t(std::numeric_limits<int>::max()))
            << kOperationName << " cannot represent value as int";
    return true;
}

// Wrapper for data computed by the eval function.
template <typename T>
struct EvalData {
    EvalData(const int* thePaddingTensor, Shape theInputTensorShape,
             std::vector<int> theOutputDimsNumElements, std::vector<int> theInputDimsNumElements,
             const T* theInputData, int theOffset, T* theOutputData, int theNumDims)
        : paddingTensor(thePaddingTensor),
          inputTensorShape(std::move(theInputTensorShape)),
          outputDimsNumElements(std::move(theOutputDimsNumElements)),
          inputDimsNumElements(std::move(theInputDimsNumElements)),
          inputData(theInputData),
          offset(theOffset),
          outputData(theOutputData),
          numDims(theNumDims) {}
    const int32_t* paddingTensor = nullptr;
    Shape inputTensorShape;
    // Holds number of elements at the nth dimension.
    // value at last dimension = 1, at second to last = sizeof last dimension.
    std::vector<int> outputDimsNumElements;
    std::vector<int> inputDimsNumElements;
    const T* inputData = nullptr;

    int offset = -1;
    T* outputData = nullptr;
    int numDims = 0;
};

// Helper function that obtains the left and right padding amounts.
void getPadding(const int32_t* paddingTensor, int dimension, int32_t* leftPad, int32_t* rightPad) {
    *leftPad = *(paddingTensor + dimension * 2);
    *rightPad = *(paddingTensor + dimension * 2 + 1);
}

// Given dimension index and the left/right padding amounts.
// Returns the corresponding dimension in the input array.
int getInputDimension(int paddedDimension, const int leftPad, const int /* rightPad */,
                      const int inputDimSize, const int offset) {
    if (paddedDimension < leftPad) {
        const int originalInd = leftPad + offset - 1;
        return originalInd - (std::min(paddedDimension, originalInd - offset));
    }
    paddedDimension -= leftPad;
    if (paddedDimension >= inputDimSize) {
        paddedDimension -= inputDimSize;
        const int originalInd = inputDimSize - (1 + offset);
        return originalInd - std::min(paddedDimension, originalInd);
    }
    return paddedDimension;
}

// Given an index in output array, returns the index of the value in input
// array.
template <typename T>
int getFlatIndex(int index, const EvalData<T>& evalData) {
    int flatIndex = 0;
    for (int i = 0, nD = evalData.numDims; i < nD; ++i) {
        int32_t leftPad, rightPad;
        getPadding(evalData.paddingTensor, i, &leftPad, &rightPad);
        const int dimensionIndex = index / evalData.outputDimsNumElements[i];
        // getSizeOfDimension() undergoes checkAsInt() in eval().
        const int indexInInput = getInputDimension(
                dimensionIndex, leftPad, rightPad,
                int(getSizeOfDimension(evalData.inputTensorShape, i)), evalData.offset);
        flatIndex += indexInInput * evalData.inputDimsNumElements[i];
        index %= evalData.outputDimsNumElements[i];
    }
    return flatIndex;
}

template <typename T>
void run(const EvalData<T>& evalData, const int outputSize) {
    // See MirrorPadWorkerTask::Run().
    const auto* inputData = evalData.inputData;
    auto* outputData = evalData.outputData;
    for (int i = 0; i < outputSize; ++i) {
        outputData[i] = inputData[getFlatIndex(i, evalData)];
    }
}
}  // namespace

bool eval(IOperationExecutionContext* context) {
    const Shape inputShape = context->getInputShape(kInputTensor);
    const int32_t* padding = context->getInputBuffer<int32_t>(kInputPaddingTensor);
    const int32_t mode = context->getInputValue<int32_t>(kInputModeScalar);
    const Shape outputShape = context->getOutputShape(kOutputTensor);
    const auto tensorType = context->getInputType(kInputTensor);

    const uint32_t inputDims = getNumberOfDimensions(inputShape);
    NN_RET_CHECK(checkAsInt(inputDims));
    const int numDims = int(inputDims);

    // checkAsInt() the individual dimensions here so we do not need to do so
    // elsewhere.
    for (int i = 0; i < numDims; ++i) {
        const auto inputDim = getSizeOfDimension(inputShape, i);
        NN_RET_CHECK(checkAsInt(inputDim));
        const auto outputDim = getSizeOfDimension(outputShape, i);
        NN_RET_CHECK(checkAsInt(outputDim));
    }

    std::vector<int> outputDimsNumElements(inputDims, 1);
    std::vector<int> inputDimsNumElements(inputDims, 1);
    for (int i = numDims - 2; i >= 0; i--) {
        outputDimsNumElements[i] =
                outputDimsNumElements[i + 1] * int(getSizeOfDimension(outputShape, i + 1));
        inputDimsNumElements[i] =
                inputDimsNumElements[i + 1] * int(getSizeOfDimension(inputShape, i + 1));
    }

    const int32_t offset = mode != kModeReflect ? 0 : 1;

    const auto outputSize = getNumberOfElements(outputShape);

#define MIRROR_PAD_CASE(operandType, dataType)                                               \
    case OperandType::operandType: {                                                         \
        const EvalData evalData(padding, inputShape, std::move(outputDimsNumElements),       \
                                std::move(inputDimsNumElements),                             \
                                context->getInputBuffer<dataType>(kInputTensor), offset,     \
                                context->getOutputBuffer<dataType>(kOutputTensor), numDims); \
        NN_RET_CHECK(checkAsInt(outputSize));                                                \
        run(evalData, int(outputSize));                                                      \
        return true;                                                                         \
    }
    switch (tensorType) {
        MIRROR_PAD_CASE(TENSOR_FLOAT16, _Float16)
        MIRROR_PAD_CASE(TENSOR_FLOAT32, float)
        MIRROR_PAD_CASE(TENSOR_QUANT8_ASYMM, uint8_t)
        MIRROR_PAD_CASE(TENSOR_QUANT8_ASYMM_SIGNED, int8_t)
        MIRROR_PAD_CASE(TENSOR_INT32, int32_t)
        default:
            NN_RET_CHECK_FAIL() << "Unsupported tensor type for operation " << kOperationName;
    }
}

/*-- end execution --------------------------------------------------------------------*/

#endif  // NN_INCLUDE_CPU_IMPLEMENTATION

}  // namespace mirror_pad_op

NN_REGISTER_OPERATION(MIRROR_PAD, mirror_pad_op::kOperationName, mirror_pad_op::validate,
                      mirror_pad_op::prepare, mirror_pad_op::eval);

}  // namespace nn
}  // namespace android
