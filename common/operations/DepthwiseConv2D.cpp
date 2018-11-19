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

#include "tensorflow/contrib/lite/kernels/internal/optimized/depthwiseconv_float.h"
#include "tensorflow/contrib/lite/kernels/internal/optimized/depthwiseconv_uint8.h"

#include "Tracing.h"

namespace android {
namespace nn {

bool depthwiseConvFloat16(const _Float16* inputData, const Shape& inputShape,
                          const _Float16* filterData, const Shape& filterShape,
                          const _Float16* biasData, const Shape& biasShape, int32_t paddingLeft,
                          int32_t paddingRight, int32_t paddingTop, int32_t paddingBottom,
                          int32_t strideWidth, int32_t strideHeight, int32_t depthMultiplier,
                          int32_t activation, _Float16* outputData, const Shape& outputShape) {
    NNTRACE_TRANS("depthwiseConvFloat16");
    std::vector<float> inputDataFloat32(getNumberOfElements(inputShape));
    convertFloat16ToFloat32(inputData, &inputDataFloat32);
    std::vector<float> filterDataFloat32(getNumberOfElements(filterShape));
    convertFloat16ToFloat32(filterData, &filterDataFloat32);
    std::vector<float> biasDataFloat32(getNumberOfElements(biasShape));
    convertFloat16ToFloat32(biasData, &biasDataFloat32);

    std::vector<float> outputDataFloat32(getNumberOfElements(outputShape));
    depthwiseConvFloat32(inputDataFloat32.data(), inputShape, filterDataFloat32.data(), filterShape,
                         biasDataFloat32.data(), biasShape, paddingLeft, paddingRight, paddingTop,
                         paddingBottom, strideWidth, strideHeight, depthMultiplier, activation,
                         outputDataFloat32.data(), outputShape);

    convertFloat32ToFloat16(outputDataFloat32, outputData);
    return true;
}

#define ANDROID_NN_DEPTHWISE_CONV_PARAMETERS                    \
    uint32_t height = getSizeOfDimension(inputShape, 1);        \
    uint32_t width = getSizeOfDimension(inputShape, 2);         \
    uint32_t filterHeight = getSizeOfDimension(filterShape, 1); \
    uint32_t filterWidth = getSizeOfDimension(filterShape, 2);  \
    uint32_t outHeight = getSizeOfDimension(outputShape, 1);    \
    uint32_t outWidth = getSizeOfDimension(outputShape, 2);     \
                                                                \
    uint32_t paddingHeight = (uint32_t)paddingTop;              \
    uint32_t paddingWidth = (uint32_t)paddingLeft;

bool depthwiseConvFloat32(const float* inputData, const Shape& inputShape, const float* filterData,
                          const Shape& filterShape, const float* biasData, const Shape& biasShape,
                          int32_t paddingLeft, int32_t paddingRight, int32_t paddingTop,
                          int32_t paddingBottom, int32_t strideWidth, int32_t strideHeight,
                          int32_t depthMultiplier, int32_t activation, float* outputData,
                          const Shape& outputShape) {
    NNTRACE_TRANS("depthwiseConvFloat32");

    ANDROID_NN_DEPTHWISE_CONV_PARAMETERS

    float output_activation_min, output_activation_max;
    CalculateActivationRangeFloat(activation, &output_activation_min, &output_activation_max);

    NNTRACE_COMP_SWITCH("optimized_ops::DepthwiseConv");
    tflite::optimized_ops::DepthwiseConv(
            inputData, convertShapeToDims(inputShape), filterData, convertShapeToDims(filterShape),
            biasData, convertShapeToDims(biasShape), strideWidth, strideHeight, paddingWidth,
            paddingHeight, depthMultiplier, output_activation_min, output_activation_max,
            outputData, convertShapeToDims(outputShape));

    return true;
}

bool depthwiseConvQuant8(const uint8_t* inputData, const Shape& inputShape,
                         const uint8_t* filterData, const Shape& filterShape,
                         const int32_t* biasData, const Shape& biasShape, int32_t paddingLeft,
                         int32_t paddingRight, int32_t paddingTop, int32_t paddingBottom,
                         int32_t strideWidth, int32_t strideHeight, int32_t depthMultiplier,
                         int32_t activation, uint8_t* outputData, const Shape& outputShape) {
    NNTRACE_TRANS("depthwiseConvQuant8");

    ANDROID_NN_DEPTHWISE_CONV_PARAMETERS

    float real_multiplier = 0.0;
    int32_t output_multiplier = 0;
    int32_t output_shift = 0;
    int32_t output_activation_min = 0;
    int32_t output_activation_max = 0;


    if (!GetQuantizedConvolutionMultipler(inputShape, filterShape, biasShape,
                                          outputShape, &real_multiplier) ||
            !QuantizeMultiplierSmallerThanOne(real_multiplier, &output_multiplier,
                                              &output_shift)) {
        return false;
    }
    CalculateActivationRangeUint8(activation, outputShape,
                                  &output_activation_min,
                                  &output_activation_max);

    uint32_t inputOffset = -inputShape.offset;
    uint32_t filterOffset = -filterShape.offset;
    uint32_t outputOffset = outputShape.offset;

    NNTRACE_COMP_SWITCH("optimized_ops::DepthwiseConv");
    tflite::optimized_ops::DepthwiseConv(
            inputData, convertShapeToDims(inputShape), inputOffset, filterData,
            convertShapeToDims(filterShape), filterOffset, biasData, convertShapeToDims(biasShape),
            strideWidth, strideHeight, paddingWidth, paddingHeight, depthMultiplier, outputOffset,
            output_multiplier, output_shift, output_activation_min, output_activation_max,
            outputData, convertShapeToDims(outputShape));

    return true;
}

#undef ANDROID_NN_DEPTHWISE_CONV_PARAMETERS
}  // namespace nn
}  // namespace android
