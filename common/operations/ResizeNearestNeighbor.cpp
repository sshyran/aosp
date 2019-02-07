/*
 * Copyright (C) 2019 The Android Open Source Project
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

#include "CpuOperationUtils.h"
#include "HalInterfaces.h"
#include "OperationResolver.h"
#include "Tracing.h"

#include "tensorflow/lite/kernels/internal/reference/reference_ops.h"

namespace android {
namespace nn {
namespace resize_nearest_neighbor {

constexpr char kOperationName[] = "RESIZE_NEAREST_NEIGHBOR";

constexpr uint32_t kNumInputs = 4;
constexpr uint32_t kInputTensor = 0;
constexpr uint32_t kOutputHeightScalar = 1;
constexpr uint32_t kOutputWidthScalar = 2;
constexpr uint32_t kLayoutScalar = 3;

constexpr uint32_t kNumOutputs = 1;
constexpr uint32_t kOutputTensor = 0;

namespace {

template <typename T>
bool resizeNearestNeighborNhwc(const T* inputData, const Shape& inputShape, T* outputData,
                               const Shape& outputShape) {
    NNTRACE_TRANS("resizeNearestNeighborNhwc");
    int32_t height = static_cast<int32_t>(getSizeOfDimension(outputShape, 1));
    int32_t width = static_cast<int32_t>(getSizeOfDimension(outputShape, 2));

    int32_t outDimData[2] = {height, width};
    // We have to fake a tensor here, to satisfy ResizeNearestNeighbor().
    Shape outDimShape;
    outDimShape.dimensions = {2};

    // Align corners = true is not supported.
    tflite::ResizeNearestNeighborParams params = {.align_corners = false};

    NNTRACE_COMP_SWITCH("optimized_ops::ResizeNearestNeighbor");
    tflite::reference_ops::ResizeNearestNeighbor(params, convertShapeToTflshape(inputShape),
                                                 inputData, convertShapeToTflshape(outDimShape),
                                                 outDimData, convertShapeToTflshape(outputShape),
                                                 outputData);
    return true;
}

template <>
bool resizeNearestNeighborNhwc<_Float16>(const _Float16* inputData, const Shape& inputShape,
                                         _Float16* outputData, const Shape& outputShape) {
    NNTRACE_TRANS("resizeNearestNeighborNhwcFloat16");
    std::vector<float> inputData_float32(getNumberOfElements(inputShape));
    convertFloat16ToFloat32(inputData, &inputData_float32);
    std::vector<float> outputData_float32(getNumberOfElements(outputShape));
    NN_RET_CHECK(resizeNearestNeighborNhwc(inputData_float32.data(), inputShape,
                                           outputData_float32.data(), outputShape));
    convertFloat32ToFloat16(outputData_float32, outputData);
    return true;
}

template <typename T>
bool resizeNearestNeighbor(const T* inputData, const Shape& inputShape, bool useNchw, T* outputData,
                           const Shape& outputShape) {
    InputWithLayout<T> input(useNchw);
    OutputWithLayout<T> output(useNchw);
    NN_RET_CHECK(input.initialize(inputData, inputShape));
    NN_RET_CHECK(output.initialize(outputData, outputShape));
    NN_RET_CHECK(resizeNearestNeighborNhwc(input.getNhwcBuffer(), input.getNhwcShape(),
                                           output.getNhwcBuffer(), output.getNhwcShape()));
    NN_RET_CHECK(output.commit());
    return true;
}

}  // namespace

bool validate(const IOperationValidationContext* context) {
    NN_RET_CHECK_EQ(context->getNumInputs(), kNumInputs);
    NN_RET_CHECK_EQ(context->getNumOutputs(), kNumOutputs);
    auto inputType = context->getInputType(kInputTensor);
    NN_RET_CHECK(inputType == OperandType::TENSOR_FLOAT16 ||
                 inputType == OperandType::TENSOR_FLOAT32 ||
                 inputType == OperandType::TENSOR_QUANT8_ASYMM)
            << "Unsupported tensor type for operation " << kOperationName;
    NN_RET_CHECK(validateInputTypes(
            context, {inputType, OperandType::INT32, OperandType::INT32, OperandType::BOOL}));
    NN_RET_CHECK(validateOutputTypes(context, {inputType}));
    return validateHalVersion(context, HalVersion::V1_2);
}

bool prepare(IOperationExecutionContext* context) {
    Shape input = context->getInputShape(kInputTensor);
    int32_t height = context->getInputValue<int32_t>(kOutputHeightScalar);
    int32_t width = context->getInputValue<int32_t>(kOutputWidthScalar);
    bool useNchw = context->getInputValue<bool>(kLayoutScalar);

    NN_RET_CHECK_EQ(getNumberOfDimensions(input), 4);
    NN_RET_CHECK_GT(height, 0);
    NN_RET_CHECK_GT(width, 0);
    uint32_t batches = getSizeOfDimension(input, 0);
    uint32_t channels = getSizeOfDimension(input, useNchw ? 1 : 3);

    Shape output = context->getOutputShape(kOutputTensor);
    output.type = input.type;
    output.scale = input.scale;
    output.offset = input.offset;
    if (useNchw) {
        output.dimensions = {batches, channels, (uint32_t)height, (uint32_t)width};
    } else {
        output.dimensions = {batches, (uint32_t)height, (uint32_t)width, channels};
    }
    return context->setOutputShape(kOutputTensor, output);
}

bool execute(IOperationExecutionContext* context) {
    switch (context->getInputType(kInputTensor)) {
        case OperandType::TENSOR_FLOAT16:
            return resizeNearestNeighbor(context->getInputBuffer<_Float16>(kInputTensor),
                                         context->getInputShape(kInputTensor),
                                         context->getInputValue<bool>(kLayoutScalar),
                                         context->getOutputBuffer<_Float16>(kOutputTensor),
                                         context->getOutputShape(kOutputTensor));
        case OperandType::TENSOR_FLOAT32:
            return resizeNearestNeighbor(context->getInputBuffer<float>(kInputTensor),
                                         context->getInputShape(kInputTensor),
                                         context->getInputValue<bool>(kLayoutScalar),
                                         context->getOutputBuffer<float>(kOutputTensor),
                                         context->getOutputShape(kOutputTensor));
        case OperandType::TENSOR_QUANT8_ASYMM:
            return resizeNearestNeighbor(context->getInputBuffer<uint8_t>(kInputTensor),
                                         context->getInputShape(kInputTensor),
                                         context->getInputValue<bool>(kLayoutScalar),
                                         context->getOutputBuffer<uint8_t>(kOutputTensor),
                                         context->getOutputShape(kOutputTensor));
        default:
            NN_RET_CHECK_FAIL() << "Unsupported tensor type for operation " << kOperationName;
    }
}

}  // namespace resize_nearest_neighbor

NN_REGISTER_OPERATION(RESIZE_NEAREST_NEIGHBOR, resize_nearest_neighbor::kOperationName,
                      resize_nearest_neighbor::validate, resize_nearest_neighbor::prepare,
                      resize_nearest_neighbor::execute);

}  // namespace nn
}  // namespace android
