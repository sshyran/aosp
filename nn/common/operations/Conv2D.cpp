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

#include "CpuOperationUtils.h"
#include "Operations.h"

#include "tensorflow/lite/kernels/internal/optimized/legacy_optimized_ops.h"

#include "Tracing.h"

namespace android {
namespace nn {

// If possible we will use this static buffer for the tensor.
static constexpr size_t kStaticBufferSize = 1605632;
static char static_scratch_buffer[kStaticBufferSize];

// executionMutex is used to protect concurrent access of the static_scratch_buffer
// and other non-threadsafe resources like gemmlowp::GemmContext.
// std::mutex is safe for pthreads on Android.
static std::mutex executionMutex;

#define ANDROID_NN_CONV_PARAMETERS(Type)                                        \
    uint32_t height       = getSizeOfDimension(inputShape, 1);                  \
    uint32_t width        = getSizeOfDimension(inputShape, 2);                  \
    uint32_t filterHeight = getSizeOfDimension(filterShape, 1);                 \
    uint32_t filterWidth  = getSizeOfDimension(filterShape, 2);                 \
    uint32_t outHeight    = getSizeOfDimension(outputShape, 1);                 \
    uint32_t outWidth     = getSizeOfDimension(outputShape, 2);                 \
    uint32_t inDepth      = getSizeOfDimension(inputShape, 3);                  \
                                                                                \
    uint32_t paddingHeight = (uint32_t)padding_top;                             \
    uint32_t paddingWidth = (uint32_t)padding_left;                             \
                                                                                \
    tflite::Dims<4> im2colDim;                                                  \
    im2colDim.sizes[3] = (int)getSizeOfDimension(outputShape, 0);               \
    im2colDim.sizes[2] = (int)getSizeOfDimension(outputShape, 1);               \
    im2colDim.sizes[1] = (int)getSizeOfDimension(outputShape, 2);               \
    im2colDim.sizes[0] = (int)inDepth * filterHeight * filterWidth;             \
                                                                                \
    im2colDim.strides[0] = 1;                                                   \
    for (int i=1; i<4; i++) {                                                   \
        im2colDim.strides[i] = im2colDim.strides[i-1] * im2colDim.sizes[i-1];   \
    }                                                                           \
                                                                                \
    Type* im2colData = nullptr;                                                 \
    uint64_t im2colByteSize = sizeof(Type);                                     \
    std::unique_ptr<Type[]> im2colGuard;                                        \
    for (int i=0; i<4; i++) {                                                   \
        im2colByteSize *= im2colDim.sizes[i];                                   \
    }                                                                           \
    /* http://b/77982879, tflite::optimized_ops::Conv uses int for offsets */   \
    if (im2colByteSize >= 0x7fffffff)  {                                        \
        LOG(ERROR) << "Conv size is too large, not enough memory";              \
        return false;                                                           \
    }                                                                           \
    if (im2colByteSize <= kStaticBufferSize) {                                  \
        im2colData = reinterpret_cast<Type *>(static_scratch_buffer);           \
    } else {                                                                    \
        im2colData = new (std::nothrow) Type[im2colByteSize / sizeof(Type)];    \
        if (im2colData == nullptr) {                                            \
            LOG(ERROR) << "Conv size is too large, not enough memory";          \
            return false;                                                       \
        }                                                                       \
        im2colGuard.reset(im2colData);                                          \
    }

bool convFloat32(const float* inputData, const Shape& inputShape, const float* filterData,
                 const Shape& filterShape, const float* biasData, const Shape& biasShape,
                 int32_t padding_left, int32_t padding_right, int32_t padding_top,
                 int32_t padding_bottom, int32_t stride_width, int32_t stride_height,
                 int32_t dilation_width_factor, int32_t dilation_height_factor, int32_t activation,
                 float* outputData, const Shape& outputShape) {
    NNTRACE_TRANS("convFloat32");

    ANDROID_NN_CONV_PARAMETERS(float)

    float output_activation_min, output_activation_max;
    CalculateActivationRangeFloat(activation, &output_activation_min, &output_activation_max);

    // Prevent concurrent executions that may access the scratch buffer.
    std::unique_lock<std::mutex> lock(executionMutex);
    NNTRACE_COMP_SWITCH("optimized_ops::Conv");
    tflite::optimized_ops::Conv(inputData, convertShapeToDims(inputShape), filterData,
                                convertShapeToDims(filterShape), biasData,
                                convertShapeToDims(biasShape), stride_width, stride_height,
                                dilation_width_factor, dilation_height_factor, paddingWidth,
                                paddingHeight, output_activation_min, output_activation_max,
                                outputData, convertShapeToDims(outputShape), im2colData, im2colDim);
    return true;
}

bool convQuant8(const uint8_t* inputData, const Shape& inputShape, const uint8_t* filterData,
                const Shape& filterShape, const int32_t* biasData, const Shape& biasShape,
                int32_t padding_left, int32_t padding_right, int32_t padding_top,
                int32_t padding_bottom, int32_t stride_width, int32_t stride_height,
                int32_t dilation_width_factor, int32_t dilation_height_factor, int32_t activation,
                uint8_t* outputData, const Shape& outputShape) {
    NNTRACE_TRANS("convQuant8");

    ANDROID_NN_CONV_PARAMETERS(uint8_t)

    int32_t inputOffset = -inputShape.offset;
    int32_t filterOffset = -filterShape.offset;
    int32_t outputOffset = outputShape.offset;

    float real_multiplier = 0.0;
    int32_t output_multiplier = 0;
    int32_t output_shift = 0;
    int32_t output_activation_min = 0;
    int32_t output_activation_max = 0;

    if (!GetQuantizedConvolutionMultipler(inputShape, filterShape, biasShape, outputShape,
                                          &real_multiplier) ||
        !QuantizeMultiplierSmallerThanOne(real_multiplier, &output_multiplier, &output_shift)) {
        return false;
    }
    CalculateActivationRangeUint8(activation, outputShape, &output_activation_min,
                                  &output_activation_max);

    static gemmlowp::GemmContext gemm_context;

    // Prevent concurrent executions that may access the scratch buffer and
    // gemm_context.
    std::unique_lock<std::mutex> lock(executionMutex);
    // Alow gemmlowp automatically decide how many threads to use.
    gemm_context.set_max_num_threads(0);

    NNTRACE_COMP_SWITCH("optimized_ops::Conv");
    tflite::optimized_ops::Conv(
            inputData, convertShapeToDims(inputShape), inputOffset, filterData,
            convertShapeToDims(filterShape), filterOffset, biasData, convertShapeToDims(biasShape),
            stride_width, stride_height, dilation_width_factor, dilation_height_factor,
            paddingWidth, paddingHeight, outputOffset, output_multiplier, output_shift,
            output_activation_min, output_activation_max, outputData,
            convertShapeToDims(outputShape), im2colData, im2colDim, &gemm_context);
    return true;
}

bool convFloat16(const _Float16* inputData, const Shape& inputShape, const _Float16* filterData,
                 const Shape& filterShape, const _Float16* biasData, const Shape& biasShape,
                 int32_t padding_left, int32_t padding_right, int32_t padding_top,
                 int32_t padding_bottom, int32_t stride_width, int32_t stride_height,
                 int32_t dilation_width_factor, int32_t dilation_height_factor, int32_t activation,
                 _Float16* outputData, const Shape& outputShape) {
    NNTRACE_TRANS("convFloat16");

    std::vector<float> inputData_float32(getNumberOfElements(inputShape));
    std::vector<float> filterData_float32(getNumberOfElements(filterShape));
    std::vector<float> biasData_float32(getNumberOfElements(biasShape));
    std::vector<float> outputData_float32(getNumberOfElements(outputShape));

    convertFloat16ToFloat32(inputData, &inputData_float32);
    convertFloat16ToFloat32(filterData, &filterData_float32);
    convertFloat16ToFloat32(biasData, &biasData_float32);

    convFloat32(inputData_float32.data(), inputShape, filterData_float32.data(), filterShape,
                biasData_float32.data(), biasShape, padding_left, padding_right, padding_top,
                padding_bottom, stride_width, stride_height, dilation_width_factor,
                dilation_height_factor, activation, outputData_float32.data(), outputShape);
    convertFloat32ToFloat16(outputData_float32, outputData);

    return true;
}

bool convQuant8PerChannel(const uint8_t* inputData, const Shape& inputShape,
                          const int8_t* filterData, const Shape& filterShape,
                          const float* filterScales, const int32_t* biasData,
                          const Shape& biasShape, int32_t paddingLeft, int32_t paddingRight,
                          int32_t paddingTop, int32_t paddingBottom, int32_t strideWidth,
                          int32_t strideHeight, int32_t dilationWidthFactor,
                          int32_t dilationHeightFactor, int32_t activation, uint8_t* outputData,
                          const Shape& outputShape) {
    NNTRACE_TRANS("convQuant8PerChannel");

    uint32_t numBatches = getSizeOfDimension(inputShape, 0);
    uint32_t inputHeight = getSizeOfDimension(inputShape, 1);
    uint32_t inputWidth = getSizeOfDimension(inputShape, 2);
    uint32_t inputDepth = getSizeOfDimension(inputShape, 3);
    uint32_t filterHeight = getSizeOfDimension(filterShape, 1);
    uint32_t filterWidth = getSizeOfDimension(filterShape, 2);
    uint32_t filterDepth = getSizeOfDimension(filterShape, 3);
    uint32_t outputHeight = getSizeOfDimension(outputShape, 1);
    uint32_t outputWidth = getSizeOfDimension(outputShape, 2);
    uint32_t outputDepth = getSizeOfDimension(outputShape, 3);

    int32_t inputOffset = -inputShape.offset;
    int32_t outputOffset = outputShape.offset;

    auto realMultiplier = std::vector<float>(outputDepth, .0f);
    auto outputMultiplier = std::vector<int32_t>(outputDepth, 0);
    auto outputShift = std::vector<int32_t>(outputDepth, .0f);

    for (int i = 0; i < outputDepth; ++i) {
        Shape filterChannelShape = filterShape;
        filterChannelShape.scale = filterScales[i];
        Shape biasChannelShape = biasShape;
        biasChannelShape.scale = filterScales[i] * inputShape.scale;

        if (!GetQuantizedConvolutionMultipler(inputShape, filterChannelShape, biasChannelShape,
                                              outputShape, &realMultiplier[i]) ||
            !QuantizeMultiplierSmallerThanOne(realMultiplier[i], &outputMultiplier[i],
                                              &outputShift[i])) {
            return false;
        }
    }

    int32_t output_activation_min = 0, output_activation_max = 0;
    CalculateActivationRangeUint8(activation, outputShape, &output_activation_min,
                                  &output_activation_max);
    const uint8_t* inputBase = inputData;
    uint8_t* outPtr = outputData;
    for (uint32_t b = 0; b < numBatches; b++) {
        for (uint32_t h = 0; h < outputHeight; h++) {
            for (uint32_t w = 0; w < outputWidth; w++) {
                const int8_t* filterBase = filterData;

                for (uint32_t d = 0; d < outputDepth; d++) {
                    int32_t wInputOrigin = static_cast<int32_t>(w) * strideWidth - paddingLeft;
                    int32_t hInputOrigin = static_cast<int32_t>(h) * strideHeight - paddingTop;
                    int32_t sum = 0.0f;

                    for (uint32_t i = 0; i < filterHeight; i++) {
                        for (uint32_t j = 0; j < filterWidth; j++) {
                            for (uint32_t k = 0; k < filterDepth; k++) {
                                int32_t hInput = hInputOrigin +
                                                 dilationHeightFactor * static_cast<int32_t>(i);
                                int32_t wInput = wInputOrigin +
                                                 dilationWidthFactor * static_cast<int32_t>(j);
                                uint32_t dInput = k;
                                if (hInput >= 0 && hInput < static_cast<int32_t>(inputHeight) &&
                                    wInput >= 0 && wInput < static_cast<int32_t>(inputWidth)) {
                                    uint32_t filterIndex =
                                            i * filterWidth * filterDepth + j * filterDepth + k;
                                    uint32_t inputIndex = hInput * inputWidth * inputDepth +
                                                          wInput * inputDepth + dInput;
                                    sum += (static_cast<int32_t>(filterBase[filterIndex])) *
                                           (static_cast<int32_t>(inputBase[inputIndex]) +
                                            inputOffset);
                                }
                            }
                        }
                    }
                    sum += biasData[d];
                    sum = tflite::MultiplyByQuantizedMultiplier(sum, outputMultiplier[d],
                                                                -outputShift[d]);
                    sum += outputOffset;
                    sum = std::max(std::min(sum, output_activation_max), output_activation_min);
                    outPtr[d] = static_cast<uint8_t>(sum);
                    filterBase += filterHeight * filterWidth * filterDepth;
                }
                outPtr += outputDepth;
            }
        }
        inputBase += inputHeight * inputWidth * inputDepth;
    }

    return true;
}

#undef ANDROID_NN_CONV_PARAMETERS
}  // namespace nn
}  // namespace android
