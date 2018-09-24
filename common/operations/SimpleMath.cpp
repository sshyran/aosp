/*
 * Copyright (C) 2017 The Android Open Source Project
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

// Contains the implementation of the operations.

#define LOG_TAG "Operations"

#include "Operations.h"
#include "CpuOperationUtils.h"

#include "tensorflow/contrib/lite/kernels/internal/optimized/legacy_optimized_ops.h"
#include "tensorflow/contrib/lite/kernels/internal/reference/legacy_reference_ops.h"

#include "Tracing.h"

namespace android {
namespace nn {

#define ANDROID_NN_MACRO_DISPATCH(macro)                                    \
    switch (activation) {                                                   \
        case (int32_t) FusedActivationFunc::NONE:                           \
            macro(kNone);                                                   \
            break;                                                          \
        case (int32_t) FusedActivationFunc::RELU:                           \
            macro(kRelu);                                                   \
            break;                                                          \
        case (int32_t) FusedActivationFunc::RELU1:                          \
            macro(kRelu1);                                                  \
            break;                                                          \
        case (int32_t) FusedActivationFunc::RELU6:                          \
            macro(kRelu6);                                                  \
            break;                                                          \
        default:                                                            \
            LOG(ERROR) << "Unsupported fused activation function type";     \
            return false;                                                   \
    }

bool addFloat32(const float* in1, const Shape& shape1,
                const float* in2, const Shape& shape2,
                int32_t activation,
                float* out, const Shape& shapeOut) {
    NNTRACE_TRANS("addFloat32");
    bool needBroadcast = !SameShape(shape1, shape2);

    if (needBroadcast) {
        NNTRACE_COMP_SWITCH("optimized_ops::BroadcastAdd");
        #define ANDROID_NN_BROADCAST_ADD(activation)                                              \
            tflite::optimized_ops::BroadcastAdd<tflite::FusedActivationFunctionType::activation>( \
                    in1, convertShapeToDims(shape1),                                              \
                    in2, convertShapeToDims(shape2),                                              \
                    out, convertShapeToDims(shapeOut))

        ANDROID_NN_MACRO_DISPATCH(ANDROID_NN_BROADCAST_ADD)
        #undef ANDROID_NN_BROADCAST_ADD
    } else {
        NNTRACE_COMP_SWITCH("optimized_ops::Add");
        #define ANDROID_NN_ADD(activation)                                               \
            tflite::optimized_ops::Add<tflite::FusedActivationFunctionType::activation>( \
                    in1, convertShapeToDims(shape1),                                     \
                    in2, convertShapeToDims(shape2),                                     \
                    out, convertShapeToDims(shapeOut))

        ANDROID_NN_MACRO_DISPATCH(ANDROID_NN_ADD)
        #undef ANDROID_NN_ADD
    }

    return true;
}

bool addQuant8(const uint8_t* in1, const Shape& shape1,
               const uint8_t* in2, const Shape& shape2,
               int32_t activation,
               uint8_t* out, const Shape& shapeOut) {
    NNTRACE_TRANS("addQuant8");
    bool needBroadcast = !SameShape(shape1, shape2);

    const int32_t input1_offset = -shape1.offset;
    const int32_t input2_offset = -shape2.offset;
    const int32_t output_offset = shapeOut.offset;
    const int left_shift = 20;
    const double twice_max_input_scale = 2 * std::max(shape1.scale, shape2.scale);
    const double real_input1_multiplier = shape1.scale / twice_max_input_scale;
    const double real_input2_multiplier = shape2.scale / twice_max_input_scale;
    const double real_output_multiplier =
            twice_max_input_scale /
            ((1 << left_shift) * shapeOut.scale);

    int32_t input1_multiplier;
    int32_t input1_shift;
    if (!QuantizeMultiplierSmallerThanOne(real_input1_multiplier,
                                          &input1_multiplier, &input1_shift)) {
        return false;
    }
    int32_t input2_multiplier;
    int32_t input2_shift;
    if (!QuantizeMultiplierSmallerThanOne(real_input2_multiplier,
                                          &input2_multiplier, &input2_shift)) {
        return false;
    }
    int32_t output_multiplier;
    int32_t output_shift;
    if (!QuantizeMultiplierSmallerThanOne(real_output_multiplier,
                                          &output_multiplier, &output_shift)) {
        return false;
    }
    int32_t output_activation_min;
    int32_t output_activation_max;
    CalculateActivationRangeUint8(activation, shapeOut,
                                  &output_activation_min,
                                  &output_activation_max);

    if (needBroadcast) {
        NNTRACE_COMP_SWITCH("optimized_ops::BroadcastAdd");
        #define ANDROID_NN_BROADCAST_ADD(activation)                                              \
            tflite::optimized_ops::BroadcastAdd<tflite::FusedActivationFunctionType::activation>( \
                    left_shift,                                                                   \
                    in1, convertShapeToDims(shape1),                                              \
                    input1_offset, input1_multiplier, input1_shift,                               \
                    in2, convertShapeToDims(shape2),                                              \
                    input2_offset, input2_multiplier, input2_shift,                               \
                    output_offset, output_multiplier, output_shift,                               \
                    output_activation_min, output_activation_max,                                 \
                    out, convertShapeToDims(shapeOut))

        ANDROID_NN_MACRO_DISPATCH(ANDROID_NN_BROADCAST_ADD)
        #undef ANDROID_NN_BROADCAST_ADD
    } else {
        NNTRACE_COMP_SWITCH("optimized_ops::Add");
        #define ANDROID_NN_NORMAL_ADD(activation)                                        \
            tflite::optimized_ops::Add<tflite::FusedActivationFunctionType::activation>( \
                    left_shift,                                                          \
                    in1, convertShapeToDims(shape1),                                     \
                    input1_offset, input1_multiplier, input1_shift,                      \
                    in2, convertShapeToDims(shape2),                                     \
                    input2_offset, input2_multiplier, input2_shift,                      \
                    output_offset, output_multiplier, output_shift,                      \
                    output_activation_min, output_activation_max,                        \
                    out, convertShapeToDims(shapeOut))

        ANDROID_NN_MACRO_DISPATCH(ANDROID_NN_NORMAL_ADD)
        #undef ANDROID_NN_NORMAL_ADD
    }

    return true;
}

bool mulFloat32(const float* in1, const Shape& shape1,
                const float* in2, const Shape& shape2,
                int32_t activation,
                float* out, const Shape& shapeOut) {
    NNTRACE_TRANS("mulFloat32");
    bool needBroadcast = !SameShape(shape1, shape2);

    if (needBroadcast) {
        NNTRACE_COMP_SWITCH("optimized_ops::BroadcastMul");
        #define ANDROID_NN_BROADCAST_MUL(activation)                                          \
        tflite::optimized_ops::BroadcastMul<tflite::FusedActivationFunctionType::activation>( \
                in1, convertShapeToDims(shape1),                                              \
                in2, convertShapeToDims(shape2),                                              \
                out, convertShapeToDims(shapeOut))

        ANDROID_NN_MACRO_DISPATCH(ANDROID_NN_BROADCAST_MUL)
        #undef ANDROID_NN_BROADCAST_MUL
    } else {
        float output_activation_min, output_activation_max;
        CalculateActivationRangeFloat(activation, &output_activation_min,
                                      &output_activation_max);

        NNTRACE_COMP_SWITCH("optimized_ops::Mul");
        tflite::optimized_ops::Mul(
                in1, convertShapeToDims(shape1),
                in2, convertShapeToDims(shape2),
                output_activation_min, output_activation_max,
                out, convertShapeToDims(shapeOut));
    }

    return true;
}

bool mulQuant8(const uint8_t* in1, const Shape& shape1,
               const uint8_t* in2, const Shape& shape2,
               int32_t activation,
               uint8_t* out, const Shape& shapeOut) {
    NNTRACE_TRANS("mulQuant8");
    const int32_t input1_offset = -shape1.offset;
    const int32_t input2_offset = -shape2.offset;
    const int32_t output_offset = shapeOut.offset;
    const double input_product_scale = shape1.scale * shape2.scale;
    const double real_multiplier = input_product_scale / shapeOut.scale;
    int32 output_multiplier;
    int output_shift;
    if (!QuantizeMultiplierSmallerThanOne(real_multiplier, &output_multiplier,
                                          &output_shift)) {
        return false;
    }
    int32_t output_activation_min;
    int32_t output_activation_max;
    CalculateActivationRangeUint8(activation, shapeOut,
                                  &output_activation_min,
                                  &output_activation_max);

    // Use BROADCAST version to handle the normal case.
    NNTRACE_COMP_SWITCH("optimized_ops::BroadcastMul");
    tflite::optimized_ops::BroadcastMul(
                in1, convertShapeToDims(shape1), input1_offset,
                in2, convertShapeToDims(shape2), input2_offset,
                output_offset, output_multiplier, output_shift,
                output_activation_min, output_activation_max,
                out, convertShapeToDims(shapeOut));

    return true;
}

bool floorFloat32(const float* inputData,
                  float* outputData,
                  const Shape& shape) {
    NNTRACE_TRANS("floorFloat32");
    tflite::Dims<4> dim = convertShapeToDims(shape);
    NNTRACE_COMP_SWITCH("optimized_ops::Floor");
    tflite::optimized_ops::Floor(inputData, dim, outputData, dim);
    return true;
}

bool dequantizeQuant8ToFloat32(const uint8_t* inputData,
                               float* outputData,
                               const Shape& shape) {
    NNTRACE_TRANS("dequantizeQuant8ToFloat32");
    tflite::Dims<4> dim = convertShapeToDims(shape);
    NNTRACE_COMP_SWITCH("optimized_ops::Dequantize");
    tflite::optimized_ops::Dequantize(inputData, dim,
                                      shape.offset, shape.scale,
                                      outputData, dim);
    return true;
}

bool subFloat32(const float* in1, const Shape& shape1,
                const float* in2, const Shape& shape2,
                int32_t activation,
                float* out, const Shape& shapeOut) {
    NNTRACE_TRANS("subFloat32");
    NNTRACE_COMP_SWITCH("optimized_ops::Sub");
    tflite::optimized_ops::Sub(
            in1, convertShapeToDims(shape1),
            in2, convertShapeToDims(shape2),
            out, convertShapeToDims(shapeOut));
    return true;
}

bool divFloat32(const float* in1, const Shape& shape1,
                const float* in2, const Shape& shape2,
                int32_t activation,
                float* out, const Shape& shapeOut) {
    NNTRACE_TRANS("divFloat32");
    float output_activation_min, output_activation_max;
    CalculateActivationRangeFloat(activation, &output_activation_min,
                                  &output_activation_max);

    bool needBroadcast = !SameShape(shape1, shape2);
    if (needBroadcast) {
        NNTRACE_COMP_SWITCH("optimized_ops::BroadcastDiv");
        tflite::optimized_ops::BroadcastDiv(
                in1, convertShapeToDims(shape1),
                in2, convertShapeToDims(shape2),
                output_activation_min, output_activation_max,
                out, convertShapeToDims(shapeOut));
    } else {
        NNTRACE_COMP_SWITCH("optimized_ops::Div");
        tflite::optimized_ops::Div(
                in1, convertShapeToDims(shape1),
                in2, convertShapeToDims(shape2),
                output_activation_min, output_activation_max,
                out, convertShapeToDims(shapeOut));
    }
    return true;
}

bool meanGeneric(const uint8_t* inputData, const Shape& inputShape,
                 const int32_t* axis, const Shape& axisShape, bool keepDims,
                 uint8_t* outputData, const Shape& outputShape) {
    NNTRACE_TRANS("meanGeneric");
    // Creates a temp index to iterate through input data.
    int32_t* scratchBuffer = new int32_t[getNumberOfDimensions(inputShape)];

    // Creates a temp tensor to store resolved axis given input data.
    int32_t axisSize = static_cast<int32_t>(getSizeOfDimension(axisShape, 0));
    int32_t* resolvedAxis = new int32_t[axisSize];

    bool result = true;
    if (inputShape.type == OperandType::TENSOR_FLOAT32) {
        float* tempSumBuffer = new (std::nothrow) float[getNumberOfElements(outputShape)];
        if (!tempSumBuffer) {
            LOG(ERROR) << "Failed to allocate tempSumBuffer for MEAN";
            result = false;
        } else {
            NNTRACE_COMP_SWITCH("optimized_ops::Mean");
            tflite::reference_ops::Mean<float, float>(
                    const_cast<float*>(reinterpret_cast<const float*>(inputData)),
                    reinterpret_cast<const int*>(inputShape.dimensions.data()),
                    getNumberOfDimensions(inputShape),
                    reinterpret_cast<float*>(outputData),
                    reinterpret_cast<const int*>(outputShape.dimensions.data()),
                    getNumberOfDimensions(outputShape),
                    axis, axisSize, keepDims, scratchBuffer, resolvedAxis,
                    tempSumBuffer);
            delete[] tempSumBuffer;
        }
    } else if (inputShape.type == OperandType::TENSOR_QUANT8_ASYMM) {
        int32_t* tempSumBuffer = new (std::nothrow) int32_t[getNumberOfElements(outputShape)];
        if (!tempSumBuffer) {
            LOG(ERROR) << "Failed to allocate tempSumBuffer for MEAN";
            result = false;
        } else {
            NNTRACE_COMP_SWITCH("optimized_ops::Mean");
            tflite::reference_ops::Mean<uint8_t, int32_t>(
                    const_cast<uint8_t*>(inputData),
                    reinterpret_cast<const int*>(inputShape.dimensions.data()),
                    getNumberOfDimensions(inputShape),
                    outputData,
                    reinterpret_cast<const int*>(outputShape.dimensions.data()),
                    getNumberOfDimensions(outputShape),
                    axis, axisSize, keepDims, scratchBuffer, resolvedAxis,
                    tempSumBuffer);
            delete[] tempSumBuffer;
        }
    } else {
        LOG(ERROR) << "Unsupported data type";
        result = false;
    }
    delete[] scratchBuffer;
    delete[] resolvedAxis;
    return result;
}
} // namespace nn
} // namespace android