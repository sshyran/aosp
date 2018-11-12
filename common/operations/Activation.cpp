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

#include "Operations.h"
#include "CpuOperationUtils.h"

#include "tensorflow/contrib/lite/kernels/internal/optimized/legacy_optimized_ops.h"
#include "tensorflow/contrib/lite/kernels/internal/optimized/optimized_ops.h"

#include "Tracing.h"

namespace android {
namespace nn {

bool reluFloat32(const float* inputData, const Shape& inputShape,
                 float* outputData, const Shape& outputShape) {
    NNTRACE_COMP("reluFloat32");
    int numElements = getNumberOfElements(inputShape);
    for (int i=0; i<numElements; i++, inputData++, outputData++) {
        *outputData = std::max(0.f, *inputData);
    }
    return true;
}

bool relu1Float32(const float* inputData, const Shape& inputShape,
                  float* outputData, const Shape& outputShape) {
    NNTRACE_COMP("relu1Float32");
    int numElements = getNumberOfElements(inputShape);
    for (int i=0; i<numElements; i++, inputData++, outputData++) {
        *outputData = std::min(std::max(-1.f, *inputData), 1.f);
    }
    return true;
}

bool relu6Float32(const float* inputData, const Shape& inputShape,
                  float* outputData, const Shape& outputShape) {
    NNTRACE_COMP("relu6Float32");
    int numElements = getNumberOfElements(inputShape);
    for (int i=0; i<numElements; i++, inputData++, outputData++) {
        *outputData = std::min(std::max(0.f, *inputData), 6.f);
    }
    return true;
}

bool tanhFloat32(const float* inputData, const Shape& inputShape,
                 float* outputData, const Shape& outputShape) {
    NNTRACE_COMP("tanhFloat32");
    int numElements = getNumberOfElements(inputShape);
    for (int i=0; i<numElements; i++, inputData++, outputData++) {
        *outputData = std::tanh(*inputData);
    }
    return true;
}

bool logisticFloat32(const float* inputData, const Shape& inputShape,
                     float* outputData, const Shape& outputShape) {
    NNTRACE_COMP("logisticFloat32");
    int numElements = getNumberOfElements(inputShape);
    for (int i=0; i<numElements; i++, inputData++, outputData++) {
        *outputData = 1.f / (1.f + std::exp(-*inputData));
    }
    return true;
}

inline bool softmaxFloat32Impl(const float* inputData, const Shape& inputShape, const float beta,
                               int32_t axis, float* outputData, const Shape& outputShape) {
    NNTRACE_TRANS("softmaxFloat32");
    const uint32_t outerSize = getNumberOfElements(inputShape, 0, axis);
    const uint32_t axisSize = getSizeOfDimension(inputShape, axis);
    const uint32_t innerSize =
            getNumberOfElements(inputShape, axis + 1, getNumberOfDimensions(inputShape));
    for (uint32_t outer = 0; outer < outerSize; ++outer) {
        const float* inputBeg = inputData + outer * axisSize * innerSize;
        const float* inputEnd = inputBeg + axisSize * innerSize;
        float* outputBeg = outputData + outer * axisSize * innerSize;
        for (uint32_t inner = 0; inner < innerSize; ++inner, ++inputBeg, ++inputEnd, ++outputBeg) {
            // Find max
            float maxValue = -FLT_MAX;
            for (const float* p = inputBeg; p < inputEnd; p += innerSize) {
                maxValue = std::max(maxValue, *p);
            }
            // Compute sum
            float sum = 0.0f;
            for (const float* p = inputBeg; p < inputEnd; p += innerSize) {
                sum += std::exp((*p - maxValue) * beta);
            }
            // Compute result
            float* pOut = outputBeg;
            for (const float* p = inputBeg; p < inputEnd; p += innerSize, pOut += innerSize) {
                *pOut = std::exp((*p - maxValue) * beta) / sum;
            }
        }
    }
    return true;
}

bool softmaxFloat32(const float* inputData, const Shape& inputShape, const float beta, int32_t axis,
                    float* outputData, const Shape& outputShape) {
    int32_t ndim = getNumberOfDimensions(inputShape);
    NN_CHECK(handleNegativeAxis(inputShape, &axis));
    // TFLite optimized implementation only supports computation along the last axis
    if (axis == ndim - 1) {
        NNTRACE_COMP("optimized_ops::Softmax::float");
        tflite::SoftmaxParams param = {.beta = beta};
        tflite::optimized_ops::Softmax(param, convertShapeToTflshape(inputShape), inputData,
                                       convertShapeToTflshape(outputShape), outputData);
        return true;
    } else {
        return softmaxFloat32Impl(inputData, inputShape, beta, axis, outputData, outputShape);
    }
}

#define ANDROID_NN_RELUX_QUANT8(activation)                             \
    int numElements = getNumberOfElements(inputShape);                  \
    int32_t output_activation_min = 0;                                  \
    int32_t output_activation_max = 0;                                  \
                                                                        \
    CalculateActivationRangeUint8(activation, inputShape,               \
                                  &output_activation_min,               \
                                  &output_activation_max);              \
                                                                        \
    for (int i=0; i<numElements; i++, inputData++, outputData++) {      \
        *outputData = std::min((uint8_t)output_activation_max,          \
                std::max((uint8_t)output_activation_min, *inputData));  \
    }


bool reluQuant8(const uint8_t* inputData, const Shape& inputShape,
                uint8_t* outputData, const Shape& outputShape) {
    NNTRACE_COMP("reluQuant8");
    ANDROID_NN_RELUX_QUANT8(kActivationRelu)
    return true;
}

bool relu1Quant8(const uint8_t* inputData, const Shape& inputShape,
                 uint8_t* outputData, const Shape& outputShape) {
    NNTRACE_COMP("relu1Quant8");
    ANDROID_NN_RELUX_QUANT8(kActivationRelu1)
    return true;
}

bool relu6Quant8(const uint8_t* inputData, const Shape& inputShape,
                 uint8_t* outputData, const Shape& outputShape) {
    NNTRACE_COMP("relu6Quant8");
    ANDROID_NN_RELUX_QUANT8(kActivationRelu6)
    return true;
}

#undef ANDROID_NN_RELUX_QUANT8

bool tanhQuant8(const uint8_t* inputData, const Shape& inputShape, uint8_t* outputData,
                const Shape& outputShape) {
    NNTRACE_TRANS("tanhQuant8");
    if (outputShape.offset != 128 || outputShape.scale != 1.f / 128) {
        LOG(ERROR) << "incorrect scale or offset for TANH output";
        return false;
    }

    int numElements = getNumberOfElements(inputShape);
    static constexpr int kInputIntegerBits = 4;

    const double input_real_multiplier =
            inputShape.scale * static_cast<double>(1 << (31 - kInputIntegerBits));

    int32_t input_multiplier = 0;
    int32_t input_left_shift = 0;
    if (!QuantizeMultiplierGreaterThanOne(input_real_multiplier, &input_multiplier,
                                          &input_left_shift)) {
        return false;
    }
    int32_t input_range_radius = CalculateInputRadius(kInputIntegerBits, input_left_shift);

    NNTRACE_COMP_SWITCH("optimized_ops::Tanh");
    tflite::optimized_ops::Tanh(inputData, convertShapeToTflshape(inputShape), inputShape.offset,
                                input_range_radius, input_multiplier, input_left_shift, outputData,
                                convertShapeToTflshape(outputShape));

    return true;
}

bool logisticQuant8(const uint8_t* inputData, const Shape& inputShape,
                    uint8_t* outputData, const Shape& outputShape) {
    NNTRACE_TRANS("logisticQuant8");
    if (outputShape.offset != 0 || outputShape.scale != 1.f / 256) {
        LOG(ERROR) << "incorrect scale / offset for output";
        return false;
    }

    int numElements = getNumberOfElements(inputShape);
    static constexpr int kInputIntegerBits = 4;

    const double input_real_multiplier =
            inputShape.scale *
            static_cast<double>(1 << (31 - kInputIntegerBits));

    int32_t input_multiplier = 0;
    int32_t input_left_shift = 0;
    if (!QuantizeMultiplierGreaterThanOne(input_real_multiplier,
                                          &input_multiplier,
                                          &input_left_shift)) {
        return false;
    }
    int32_t input_range_radius =
            CalculateInputRadius(kInputIntegerBits, input_left_shift);

    NNTRACE_COMP_SWITCH("optimized_ops::Logistic");
    tflite::optimized_ops::Logistic(
            inputData, convertShapeToTflshape(inputShape),
            inputShape.offset, input_range_radius,
            input_multiplier, input_left_shift,
            outputData, convertShapeToTflshape(outputShape));

    return true;
}

bool softmaxQuant8Impl(const uint8_t* inputData, const Shape& inputShape, const float beta,
                       int32_t axis, int32_t inputMultiplier, int32_t inputLeftShift, float diffMin,
                       uint8_t* outputData, const Shape& outputShape) {
    NNTRACE_TRANS("softmaxQuant8");
    // The representation chosen for the input to the exp() function is Q5.26.
    // We need to leave extra space since values that we skip might be as large as
    // -32 before multiplying by input_beta_multiplier, and therefore as large as
    // -16 afterwards.  Note that exp(-8) is definitely not insignificant to
    // accumulation, but exp(-16) definitely is.
    static const int32_t kScaledDiffIntegerBits = 5;
    static const int kAccumulationIntegerBits = 12;
    using FixedPointScaledDiff = gemmlowp::FixedPoint<int32_t, kScaledDiffIntegerBits>;
    using FixedPointAccum = gemmlowp::FixedPoint<int32_t, kAccumulationIntegerBits>;
    using FixedPoint0 = gemmlowp::FixedPoint<int32_t, 0>;

    const uint32_t outerSize = getNumberOfElements(inputShape, 0, axis);
    const uint32_t axisSize = getSizeOfDimension(inputShape, axis);
    const uint32_t innerSize =
            getNumberOfElements(inputShape, axis + 1, getNumberOfDimensions(inputShape));
    for (uint32_t outer = 0; outer < outerSize; ++outer) {
        const uint8_t* inputBeg = inputData + outer * axisSize * innerSize;
        const uint8_t* inputEnd = inputBeg + axisSize * innerSize;
        uint8_t* outputBeg = outputData + outer * axisSize * innerSize;
        for (uint32_t inner = 0; inner < innerSize; ++inner, ++inputBeg, ++inputEnd, ++outputBeg) {
            // Find max
            uint8_t maxValue = 0;
            for (const uint8_t* p = inputBeg; p < inputEnd; p += innerSize) {
                maxValue = std::max(maxValue, *p);
            }

            // Compute sum
            FixedPointAccum sum_of_exps = FixedPointAccum::Zero();
            for (const uint8_t* p = inputBeg; p < inputEnd; p += innerSize) {
                int32_t input_diff = static_cast<int32_t>(*p) - maxValue;
                if (input_diff >= diffMin) {
                    const int32_t input_diff_rescaled =
                            tflite::MultiplyByQuantizedMultiplierGreaterThanOne(
                                    input_diff, inputMultiplier, inputLeftShift);
                    const auto scaled_diff_f8 = FixedPointScaledDiff::FromRaw(input_diff_rescaled);
                    sum_of_exps = sum_of_exps + gemmlowp::Rescale<kAccumulationIntegerBits>(
                                                        exp_on_negative_values(scaled_diff_f8));
                }
            }

            uint32_t fixed_sum_of_exps = static_cast<uint32_t>(sum_of_exps.raw());
            int32_t headroom_plus_one = tflite::CountLeadingZeros(fixed_sum_of_exps);
            // This is the number of bits to the left of the binary point above 1.0.
            // Consider fixed_sum_of_exps=1.25.  In that case shifted_scale=0.8 and
            // no later adjustment will be needed.
            int32_t num_bits_over_unit = kAccumulationIntegerBits - headroom_plus_one;
            int32_t shifted_sum_minus_one = static_cast<int32_t>(
                    (fixed_sum_of_exps << headroom_plus_one) - (static_cast<uint32_t>(1) << 31));

            FixedPoint0 shifted_scale = gemmlowp::one_over_one_plus_x_for_x_in_0_1(
                    FixedPoint0::FromRaw(shifted_sum_minus_one));

            // Compute result
            uint8_t* pOut = outputBeg;
            for (const uint8_t* p = inputBeg; p < inputEnd; p += innerSize, pOut += innerSize) {
                int32_t input_diff = static_cast<int32_t>(*p) - maxValue;
                if (input_diff >= diffMin) {
                    const int32_t input_diff_rescaled =
                            tflite::MultiplyByQuantizedMultiplierGreaterThanOne(
                                    input_diff, inputMultiplier, inputLeftShift);
                    const auto scaled_diff_f8 = FixedPointScaledDiff::FromRaw(input_diff_rescaled);

                    FixedPoint0 exp_in_0 = exp_on_negative_values(scaled_diff_f8);
                    int32_t unsat_output = gemmlowp::RoundingDivideByPOT(
                            (shifted_scale * exp_in_0).raw(), num_bits_over_unit + 31 - 8);

                    *pOut = static_cast<uint8_t>(
                            std::max(std::min(unsat_output, static_cast<int32_t>(255)), 0));

                } else {
                    *pOut = 0;
                }
            }
        }
    }
    return true;
}

bool softmaxQuant8(const uint8_t* inputData, const Shape& inputShape, const float beta,
                   int32_t axis, uint8_t* outputData, const Shape& outputShape) {
    int32_t ndim = getNumberOfDimensions(inputShape);
    NN_CHECK(handleNegativeAxis(inputShape, &axis));

    if (outputShape.offset != 0 || outputShape.scale != 1.f / 256) {
        LOG(ERROR) << "incorrect scale / offset for output";
        return false;
    }

    static const int32_t kScaledDiffIntegerBits = 5;
    const double input_beta_real_multiplier =
            std::min(1.0 * beta * inputShape.scale * (1 << (31 - kScaledDiffIntegerBits)),
                     (1ll << 31) - 1.0);

    int32_t inputMultiplier = 0, inputLeftShift = 0;
    if (!QuantizeMultiplierGreaterThanOne(input_beta_real_multiplier, &inputMultiplier,
                                          &inputLeftShift)) {
        return false;
    }
    int32_t diffMin = -CalculateInputRadius(kScaledDiffIntegerBits, inputLeftShift);

    // TFLite optimized implementation only supports computation along the last axis
    if (axis == ndim - 1) {
        NNTRACE_COMP("optimized_ops::Softmax::uint8");
        tflite::SoftmaxParams param = {.beta = beta,
                                       .input_multiplier = inputMultiplier,
                                       .input_left_shift = inputLeftShift,
                                       .diff_min = diffMin};
        tflite::optimized_ops::Softmax(param, convertShapeToTflshape(inputShape), inputData,
                                       convertShapeToTflshape(outputShape), outputData);
        return true;
    } else {
        return softmaxQuant8Impl(inputData, inputShape, beta, axis, inputMultiplier, inputLeftShift,
                                 diffMin, outputData, outputShape);
    }
}

}  // namespace nn
}  // namespace android
