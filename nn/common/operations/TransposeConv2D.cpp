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

#include "CpuOperationUtils.h"
#include "Operations.h"

#include <cfloat>
#include <cmath>

#include "Tracing.h"
#include "tensorflow/contrib/lite/kernels/internal/common.h"

namespace android {
namespace nn {

// If possible we will use this static buffer for the tensor.
static constexpr size_t kStaticBufferSize = 1605632;
static char static_scratch_buffer[kStaticBufferSize];

// executionMutex is used to protect concurrent access of the static_scratch_buffer.
// std::mutex is safe for pthreads on Android.
static std::mutex executionMutex;

#define ANDROID_NN_TRANSPOSE_CONV_PARAMETERS                    \
    uint32_t numBatches = getSizeOfDimension(inputShape, 0);    \
    uint32_t inputHeight = getSizeOfDimension(inputShape, 1);   \
    uint32_t inputWidth = getSizeOfDimension(inputShape, 2);    \
    uint32_t inputDepth = getSizeOfDimension(inputShape, 3);    \
    uint32_t filterHeight = getSizeOfDimension(filterShape, 1); \
    uint32_t filterWidth = getSizeOfDimension(filterShape, 2);  \
    uint32_t outputHeight = getSizeOfDimension(outputShape, 1); \
    uint32_t outputWidth = getSizeOfDimension(outputShape, 2);  \
    uint32_t outputDepth = getSizeOfDimension(outputShape, 3);

bool transposeConvFloat32(const float* inputData, const Shape& inputShape, const float* filterData,
                          const Shape& filterShape, const float* biasData, const Shape& biasShape,
                          int32_t padding_left, int32_t padding_right, int32_t padding_top,
                          int32_t padding_bottom, int32_t stride_width, int32_t stride_height,
                          int32_t activation, float* outputData, const Shape& outputShape) {
    NNTRACE_TRANS("transposeConvFloat32");
    ANDROID_NN_TRANSPOSE_CONV_PARAMETERS

    float output_activation_min = 0.0f, output_activation_max = 0.0f;
    CalculateActivationRangeFloat(activation, &output_activation_min, &output_activation_max);

    memset(outputData, 0, getNumberOfElements(outputShape) * sizeof(float));

    const float* inputBase = inputData;
    float* outputBase = outputData;
    for (uint32_t b = 0; b < numBatches; b++) {
        for (uint32_t h = 0; h < inputHeight; h++) {
            for (uint32_t w = 0; w < inputWidth; w++) {
                int32_t wOutputOrigin = static_cast<int32_t>(w) * stride_width - padding_left;
                int32_t hOutputOrigin = static_cast<int32_t>(h) * stride_height - padding_top;

                const float* filterBase = filterData;
                for (uint32_t k = 0; k < outputDepth; k++) {
                    for (uint32_t i = 0; i < filterHeight; i++) {
                        for (uint32_t j = 0; j < filterWidth; j++, filterBase += inputDepth) {
                            int32_t hOutput = hOutputOrigin + static_cast<int32_t>(i);
                            int32_t wOutput = wOutputOrigin + static_cast<int32_t>(j);
                            if (hOutput >= 0 && hOutput < static_cast<int32_t>(outputHeight) &&
                                wOutput >= 0 && wOutput < static_cast<int32_t>(outputWidth)) {
                                for (uint32_t d = 0; d < inputDepth; d++) {
                                    uint32_t outputIndex = hOutput * outputWidth * outputDepth +
                                                           wOutput * outputDepth + k;
                                    outputBase[outputIndex] += inputBase[d] * filterBase[d];
                                }
                            }
                        }
                    }
                }

                inputBase += inputDepth;
            }
        }
        outputBase += outputHeight * outputWidth * outputDepth;
    }

    const uint32_t outerSize = numBatches * outputHeight * outputWidth;
    float* outPtr = outputData;
    for (uint32_t i = 0; i < outerSize; i++) {
        for (uint32_t d = 0; d < outputDepth; d++, outPtr++) {
            *outPtr += biasData[d];
            *outPtr = std::max(std::min(*outPtr, output_activation_max), output_activation_min);
        }
    }

    return true;
}

bool transposeConvQuant8(const uint8_t* inputData, const Shape& inputShape,
                         const uint8_t* filterData, const Shape& filterShape,
                         const int32_t* biasData, const Shape& biasShape, int32_t padding_left,
                         int32_t padding_right, int32_t padding_top, int32_t padding_bottom,
                         int32_t stride_width, int32_t stride_height, int32_t activation,
                         uint8_t* outputData, const Shape& outputShape) {
    NNTRACE_TRANS("transposeConvQuant8");
    ANDROID_NN_TRANSPOSE_CONV_PARAMETERS

    int32_t* tempBuffer = nullptr;
    std::unique_ptr<int32_t[]> bufferGuard;
    uint32_t tempBufferByteSize = getNumberOfElements(outputShape) * sizeof(int32_t);
    if (tempBufferByteSize <= kStaticBufferSize) {
        tempBuffer = reinterpret_cast<int32_t*>(static_scratch_buffer);
    } else {
        tempBuffer = new (std::nothrow) int32_t[tempBufferByteSize / sizeof(int32_t)];
        if (tempBuffer == nullptr) {
            LOG(ERROR) << "ConvTranspose size is too large, not enough memory";
            return false;
        }
        bufferGuard.reset(tempBuffer);
    }

    int32_t inputOffset = -inputShape.offset;
    int32_t filterOffset = -filterShape.offset;
    int32_t outputOffset = outputShape.offset;

    float realMultiplier = 0.0;
    int32_t outputMultiplier = 0;
    int32_t outputShift = 0;
    if (!GetQuantizedConvolutionMultipler(inputShape, filterShape, biasShape, outputShape,
                                          &realMultiplier) ||
        !QuantizeMultiplierSmallerThanOne(realMultiplier, &outputMultiplier, &outputShift)) {
        return false;
    }

    int32_t output_activation_min = 0, output_activation_max = 0;
    CalculateActivationRangeUint8(activation, outputShape, &output_activation_min,
                                  &output_activation_max);

    // Prevent concurrent executions that may access the scratch buffer
    std::unique_lock<std::mutex> lock(executionMutex);
    memset(tempBuffer, 0, tempBufferByteSize);

    const uint8_t* inputPtr = inputData;
    int32_t* outputBase = tempBuffer;
    for (uint32_t b = 0; b < numBatches; b++) {
        for (uint32_t h = 0; h < inputHeight; h++) {
            for (uint32_t w = 0; w < inputWidth; w++) {
                for (uint32_t d = 0; d < inputDepth; d++) {
                    int32_t wOutputOrigin = static_cast<int32_t>(w) * stride_width - padding_left;
                    int32_t hOutputOrigin = static_cast<int32_t>(h) * stride_height - padding_top;

                    for (uint32_t i = 0; i < filterHeight; i++) {
                        for (uint32_t j = 0; j < filterWidth; j++) {
                            for (uint32_t k = 0; k < outputDepth; k++) {
                                int32_t hOutput = hOutputOrigin + static_cast<int32_t>(i);
                                int32_t wOutput = wOutputOrigin + static_cast<int32_t>(j);
                                if (hOutput >= 0 && hOutput < static_cast<int32_t>(outputHeight) &&
                                    wOutput >= 0 && wOutput < static_cast<int32_t>(outputWidth)) {
                                    uint32_t filterIndex =
                                            k * filterHeight * filterWidth * inputDepth +
                                            i * filterWidth * inputDepth + j * inputDepth + d;
                                    uint32_t outputIndex = hOutput * outputWidth * outputDepth +
                                                           wOutput * outputDepth + k;
                                    outputBase[outputIndex] +=
                                            (static_cast<int32_t>(*inputPtr) + inputOffset) *
                                            (static_cast<int32_t>(filterData[filterIndex]) +
                                             filterOffset);
                                }
                            }
                        }
                    }

                    inputPtr++;
                }
            }
        }
        outputBase += outputHeight * outputWidth * outputDepth;
    }

    const uint32_t outerSize = numBatches * outputHeight * outputWidth;
    int32_t* bufferPtr = tempBuffer;
    uint8_t* outPtr = outputData;
    for (uint32_t i = 0; i < outerSize; i++) {
        for (uint32_t d = 0; d < outputDepth; d++, bufferPtr++, outPtr++) {
            int32_t outVal = *bufferPtr + biasData[d];
            outVal = tflite::MultiplyByQuantizedMultiplier(outVal, outputMultiplier, -outputShift);
            outVal += outputOffset;
            outVal = std::max(std::min(outVal, output_activation_max), output_activation_min);
            *outPtr = static_cast<uint8_t>(outVal);
        }
    }

    return true;
}

#undef ANDROID_NN_TRANSPOSE_CONV_PARAMETERS
}  // namespace nn
}  // namespace android
