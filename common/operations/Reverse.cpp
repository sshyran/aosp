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

#if 0
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wsign-compare"
#include <tensorflow/lite/kernels/internal/reference/reference_ops.h>
#pragma clang diagnostic pop
#endif

#include "CpuOperationUtils.h"
#endif  // NN_INCLUDE_CPU_IMPLEMENTATION

namespace android {
namespace nn {
namespace reverse_op {

constexpr char kOperationName[] = "REVERSE";

// inputs consist of tensor to be reversed and a shape [1] axis tensor
constexpr uint32_t kNumInputs = 2;
constexpr uint32_t kInputTensor = 0;
constexpr uint32_t kInputAxisTensor = 1;

constexpr uint32_t kNumOutputs = 1;
constexpr uint32_t kOutputTensor = 0;

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

    // Validate the axis tensor.
    NN_RET_CHECK_EQ(context->getInputType(kInputAxisTensor), OperandType::TENSOR_INT32);
    const Shape inputAxisTensorShape = context->getInputShape(kInputAxisTensor);
    if (hasKnownRank(inputAxisTensorShape)) {
        NN_RET_CHECK_EQ(getNumberOfDimensions(inputAxisTensorShape), 1U)
                << "Input tensor #" << kInputAxisTensor << " must have 1 dimension";
        auto dim0 = inputAxisTensorShape.dimensions[0];
        NN_RET_CHECK(!dim0 || dim0 == 1)
                << "Input tensor #" << kInputAxisTensor << " dimension must be 1 but is " << dim0;
    }

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
    auto inputTensorRank = getNumberOfDimensions(inputTensorShape);
    auto outputTensorRank = getNumberOfDimensions(outputTensorShape);
    NN_RET_CHECK(!inputTensorRank || !outputTensorRank || inputTensorRank == outputTensorRank)
            << "Input tensor #" << kInputTensor << " rank " << inputTensorRank << " does not match "
            << "output tensor rank " << outputTensorRank;

    return kVersionFeatureLevel7;
}

#ifdef NN_INCLUDE_CPU_IMPLEMENTATION
bool prepare(IOperationExecutionContext* /*context*/) {
    return false;
}

bool execute(IOperationExecutionContext* /*context*/) {
    return false;
}
#endif  // NN_INCLUDE_CPU_IMPLEMENTATION

}  // namespace reverse_op

NN_REGISTER_OPERATION(REVERSE, reverse_op::kOperationName, reverse_op::validate,
                      reverse_op::prepare, reverse_op::execute);

}  // namespace nn
}  // namespace android
