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

inline void get4DShape(const Shape& shapeIn, uint32_t* shapeOut) {
    const int32_t kNumDims = 4;
    int32_t numDims = static_cast<int32_t>(getNumberOfDimensions(shapeIn));
    for (int32_t i = 0; i < numDims; i++) {
        shapeOut[i + kNumDims - numDims] = getSizeOfDimension(shapeIn, i);
    }
    for (int32_t i = 0; i < kNumDims - numDims; i++) {
        shapeOut[i] = 1;
    }
}

inline void getBroadcastStrides(const Shape& shapeIn, uint32_t* stridesOut) {
    const int32_t kNumDims = 4;
    uint32_t dims[kNumDims];
    get4DShape(shapeIn, dims);
    stridesOut[kNumDims - 1] = 1;
    for (int32_t i = kNumDims - 2; i >= 0; i--) {
        stridesOut[i] = stridesOut[i + 1] * dims[i + 1];
    }
    for (int32_t i = kNumDims - 1; i >= 0; i--) {
        if (dims[i] == 1) {
            stridesOut[i] = 0;
        }
    }
}

template <typename T>
inline bool broadcastOpBase(const T* in1, const Shape& shape1, const T* in2, const Shape& shape2,
                            T* out, const Shape& shapeOut,
                            std::function<T(const T&, const T&)> mathKernel) {
    // extend to 4D
    uint32_t outputDims[4], in1Strides[4], in2Strides[4];
    get4DShape(shapeOut, outputDims);
    getBroadcastStrides(shape1, in1Strides);
    getBroadcastStrides(shape2, in2Strides);

    T* outPtr = out;
    for (uint32_t b = 0; b < outputDims[0]; b++) {
        for (uint32_t h = 0; h < outputDims[1]; h++) {
            for (uint32_t w = 0; w < outputDims[2]; w++) {
                for (uint32_t c = 0; c < outputDims[3]; c++) {
                    T in1Val = in1[b * in1Strides[0] + h * in1Strides[1] + w * in1Strides[2] +
                                   c * in1Strides[3]];
                    T in2Val = in2[b * in2Strides[0] + h * in2Strides[1] + w * in2Strides[2] +
                                   c * in2Strides[3]];
                    *outPtr++ = mathKernel(in1Val, in2Val);
                }
            }
        }
    }
    return true;
}

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

bool quantizeFloat32ToQuant8(const float* inputData, uint8_t* outputData,
                             const Shape& outputShape) {
    NNTRACE_COMP("quantizeFloat32ToQuant8");
    uint32_t size = getNumberOfElements(outputShape);
    for (uint32_t i = 0; i < size; ++i) {
        outputData[i] = static_cast<uint8_t>(std::max<float>(
                0, std::min<float>(255, outputShape.offset +
                                                std::round(inputData[i] / outputShape.scale))));
    }
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

bool subQuant8(const uint8_t* in1, const Shape& shape1, const uint8_t* in2, const Shape& shape2,
               int32_t activation, uint8_t* out, const Shape& shapeOut) {
    NNTRACE_TRANS("subQuant8");

    const int32_t input1_offset = -shape1.offset;
    const int32_t input2_offset = -shape2.offset;
    const int32_t output_offset = shapeOut.offset;
    const int left_shift = 20;
    const double twice_max_input_scale = 2 * std::max(shape1.scale, shape2.scale);
    const double real_input1_multiplier = shape1.scale / twice_max_input_scale;
    const double real_input2_multiplier = shape2.scale / twice_max_input_scale;
    const double real_output_multiplier =
            twice_max_input_scale / ((1 << left_shift) * shapeOut.scale);

    int32_t input1_multiplier;
    int32_t input1_shift;
    if (!QuantizeMultiplierSmallerThanOne(real_input1_multiplier, &input1_multiplier,
                                          &input1_shift)) {
        return false;
    }
    int32_t input2_multiplier;
    int32_t input2_shift;
    if (!QuantizeMultiplierSmallerThanOne(real_input2_multiplier, &input2_multiplier,
                                          &input2_shift)) {
        return false;
    }
    input2_multiplier *= -1;
    int32_t output_multiplier;
    int32_t output_shift;
    if (!QuantizeMultiplierSmallerThanOne(real_output_multiplier, &output_multiplier,
                                          &output_shift)) {
        return false;
    }
    int32_t output_activation_min;
    int32_t output_activation_max;
    CalculateActivationRangeUint8(activation, shapeOut, &output_activation_min,
                                  &output_activation_max);

    // We are using tflite::optimized_ops::BroadcastAdd unconditionally here
    // because tflite::optimized_ops::Add fails to pass some of the
    // sub_quantized_different_scales tests.
    NNTRACE_COMP_SWITCH("optimized_ops::BroadcastAdd");
#define ANDROID_NN_BROADCAST_ADD(activation)                                                     \
    tflite::optimized_ops::BroadcastAdd<tflite::FusedActivationFunctionType::activation>(        \
            left_shift, in1, convertShapeToDims(shape1), input1_offset, input1_multiplier,       \
            input1_shift, in2, convertShapeToDims(shape2), input2_offset, input2_multiplier,     \
            input2_shift, output_offset, output_multiplier, output_shift, output_activation_min, \
            output_activation_max, out, convertShapeToDims(shapeOut))

    ANDROID_NN_MACRO_DISPATCH(ANDROID_NN_BROADCAST_ADD)
#undef ANDROID_NN_BROADCAST_ADD

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

bool pReluGeneric(const uint8_t* inputData, const Shape& inputShape, const uint8_t* alphaData,
                  const Shape& alphaShape, uint8_t* outputData, const Shape& outputShape) {
    NNTRACE_TRANS("pReluGeneric");
    if (inputShape.type == OperandType::TENSOR_FLOAT32) {
        return broadcastOpBase<float>(reinterpret_cast<const float*>(inputData), inputShape,
                                      reinterpret_cast<const float*>(alphaData), alphaShape,
                                      reinterpret_cast<float*>(outputData), outputShape,
                                      [](const float& val1, const float& val2) {
                                          return val1 >= 0.0f ? val1 : val1 * val2;
                                      });
    } else if (inputShape.type == OperandType::TENSOR_QUANT8_ASYMM) {
        const int32_t input_offset = -inputShape.offset;
        const int32_t alpha_offset = -alphaShape.offset;
        const int32_t output_offset = outputShape.offset;
        const double input_product_scale = inputShape.scale * alphaShape.scale;
        const double real_multiplier_pos = inputShape.scale / outputShape.scale;
        const double real_multiplier_neg = input_product_scale / outputShape.scale;
        int32_t output_multiplier_pos, output_shift_pos;
        int32_t output_multiplier_neg, output_shift_neg;
        if (!QuantizeMultiplierSmallerThanOne(real_multiplier_pos, &output_multiplier_pos,
                                              &output_shift_pos)) {
            return false;
        }
        if (!QuantizeMultiplierSmallerThanOne(real_multiplier_neg, &output_multiplier_neg,
                                              &output_shift_neg)) {
            return false;
        }
        return broadcastOpBase<uint8_t>(
                reinterpret_cast<const uint8_t*>(inputData), inputShape,
                reinterpret_cast<const uint8_t*>(alphaData), alphaShape,
                reinterpret_cast<uint8_t*>(outputData), outputShape,
                [&](const uint8_t& val1, const uint8_t& val2) {
                    const int32_t input = input_offset + static_cast<int32_t>(val1);
                    int32_t output_val;
                    if (input >= 0) {
                        output_val = output_offset +
                                     tflite::MultiplyByQuantizedMultiplierSmallerThanOneExp(
                                             input, output_multiplier_pos, -output_shift_pos);
                    } else {
                        const int32_t alpha = alpha_offset + static_cast<int32_t>(val2);
                        output_val =
                                output_offset +
                                tflite::MultiplyByQuantizedMultiplierSmallerThanOneExp(
                                        input * alpha, output_multiplier_neg, -output_shift_neg);
                    }
                    return static_cast<uint8_t>(output_val);
                });
    } else {
        LOG(ERROR) << "Unsupported data type";
        return false;
    }
}
} // namespace nn
} // namespace android
