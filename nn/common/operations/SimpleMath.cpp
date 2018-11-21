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

using binaryFunctionFloat32 = std::function<bool(
        const float* in1, const Shape& shape1, const float* in2, const Shape& shape2,
        int32_t activation, float* out, const Shape& shapeOut)>;

bool binaryOperationFloat16(const _Float16* in1, const Shape& shape1, const _Float16* in2,
                            const Shape& shape2, int32_t activation, _Float16* out,
                            const Shape& shapeOut, binaryFunctionFloat32 operationFloat32) {
    std::vector<float> in1_float32(getNumberOfElements(shape1));
    convertFloat16ToFloat32(in1, &in1_float32);
    std::vector<float> in2_float32(getNumberOfElements(shape2));
    convertFloat16ToFloat32(in2, &in2_float32);
    std::vector<float> out_float32(getNumberOfElements(shapeOut));

    operationFloat32(in1_float32.data(), shape1, in2_float32.data(), shape2, activation,
                     out_float32.data(), shapeOut);
    convertFloat32ToFloat16(out_float32, out);

    return true;
}

bool addFloat16(const _Float16* in1, const Shape& shape1, const _Float16* in2, const Shape& shape2,
                int32_t activation, _Float16* out, const Shape& shapeOut) {
    NNTRACE_TRANS("addFloat16");
    return binaryOperationFloat16(in1, shape1, in2, shape2, activation, out, shapeOut, &addFloat32);
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

bool mulFloat16(const _Float16* in1, const Shape& shape1, const _Float16* in2, const Shape& shape2,
                int32_t activation, _Float16* out, const Shape& shapeOut) {
    NNTRACE_TRANS("mulFloat16");
    return binaryOperationFloat16(in1, shape1, in2, shape2, activation, out, shapeOut, &mulFloat32);
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

bool floorFloat16(const _Float16* inputData, _Float16* outputData, const Shape& shape) {
    NNTRACE_TRANS("floorFloat16");
    std::vector<float> inputDataFloat32(getNumberOfElements(shape));
    convertFloat16ToFloat32(inputData, &inputDataFloat32);

    std::vector<float> outputDataFloat32(getNumberOfElements(shape));
    floorFloat32(inputDataFloat32.data(), outputDataFloat32.data(), shape);
    convertFloat32ToFloat16(outputDataFloat32, outputData);
    return true;
}

bool floorFloat32(const float* inputData, float* outputData, const Shape& shape) {
    NNTRACE_TRANS("floorFloat32");
    tflite::Dims<4> dim = convertShapeToDims(shape);
    NNTRACE_COMP_SWITCH("optimized_ops::Floor");
    tflite::optimized_ops::Floor(inputData, dim, outputData, dim);
    return true;
}

bool dequantizeQuant8ToFloat16(const uint8_t* inputData, _Float16* outputData, const Shape& shape) {
    NNTRACE_TRANS("dequantizeQuant8ToFloat16");
    std::vector<float> outputDataFloat32(getNumberOfElements(shape));
    dequantizeQuant8ToFloat32(inputData, outputDataFloat32.data(), shape);
    convertFloat32ToFloat16(outputDataFloat32, outputData);
    return true;
}

bool dequantizeQuant8ToFloat32(const uint8_t* inputData, float* outputData, const Shape& shape) {
    NNTRACE_TRANS("dequantizeQuant8ToFloat32");
    tflite::Dims<4> dim = convertShapeToDims(shape);
    NNTRACE_COMP_SWITCH("optimized_ops::Dequantize");
    tflite::optimized_ops::Dequantize(inputData, dim, shape.offset, shape.scale, outputData, dim);
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

bool subFloat16(const _Float16* in1, const Shape& shape1, const _Float16* in2, const Shape& shape2,
                int32_t activation, _Float16* out, const Shape& shapeOut) {
    NNTRACE_TRANS("subFloat16");
    return binaryOperationFloat16(in1, shape1, in2, shape2, activation, out, shapeOut, &subFloat32);
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

bool divFloat16(const _Float16* in1, const Shape& shape1, const _Float16* in2, const Shape& shape2,
                int32_t activation, _Float16* out, const Shape& shapeOut) {
    NNTRACE_TRANS("divFloat16");
    return binaryOperationFloat16(in1, shape1, in2, shape2, activation, out, shapeOut, &divFloat32);
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

bool meanFloat16(_Float16* inputData, const Shape& inputShape, const int32_t* axis,
                 const Shape& axisShape, bool keepDims, _Float16* outputData,
                 const Shape& outputShape) {
    NNTRACE_TRANS("meanFloat16");
    std::vector<float> inputDataFloat32(getNumberOfElements(inputShape));
    convertFloat16ToFloat32(inputData, &inputDataFloat32);

    std::vector<float> outputDataFloat32(getNumberOfElements(outputShape));
    meanGeneric<float, float>(inputDataFloat32.data(), inputShape, axis, axisShape, keepDims,
                              outputDataFloat32.data(), outputShape);
    convertFloat32ToFloat16(outputDataFloat32, outputData);
    return true;
}

template <typename T, typename U>
bool meanGeneric(T* inputData, const Shape& inputShape, const int32_t* axis, const Shape& axisShape,
                 bool keepDims, T* outputData, const Shape& outputShape) {
    NNTRACE_TRANS("meanGeneric");
    // Creates a temp index to iterate through input data.
    int32_t* scratchBuffer = new int32_t[getNumberOfDimensions(inputShape)];

    // Creates a temp tensor to store resolved axis given input data.
    int32_t axisSize = static_cast<int32_t>(getSizeOfDimension(axisShape, 0));
    int32_t* resolvedAxis = new int32_t[axisSize];

    bool result = true;
    U* tempSumBuffer = new (std::nothrow) U[getNumberOfElements(outputShape)];
    if (!tempSumBuffer) {
        LOG(ERROR) << "Failed to allocate tempSumBuffer for MEAN";
        result = false;
    } else {
        NNTRACE_COMP_SWITCH("optimized_ops::Mean");
        tflite::reference_ops::Mean<T, U>(
                inputData, reinterpret_cast<const int*>(inputShape.dimensions.data()),
                getNumberOfDimensions(inputShape), outputData,
                reinterpret_cast<const int*>(outputShape.dimensions.data()),
                getNumberOfDimensions(outputShape), axis, axisSize, keepDims, scratchBuffer,
                resolvedAxis, tempSumBuffer);
        delete[] tempSumBuffer;
    }
    delete[] scratchBuffer;
    delete[] resolvedAxis;
    return result;
}
template bool meanGeneric<float, float>(float* inputData, const Shape& inputShape,
                                        const int32_t* axis, const Shape& axisShape, bool keepDims,
                                        float* outputData, const Shape& outputShape);
template bool meanGeneric<uint8_t, int32_t>(uint8_t* inputData, const Shape& inputShape,
                                            const int32_t* axis, const Shape& axisShape,
                                            bool keepDims, uint8_t* outputData,
                                            const Shape& outputShape);

} // namespace nn
} // namespace android
