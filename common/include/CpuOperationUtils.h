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

#ifndef ANDROID_ML_NN_COMMON_CPU_OPERATION_UTILS_H
#define ANDROID_ML_NN_COMMON_CPU_OPERATION_UTILS_H

#include "OperationsUtils.h"

#include "tensorflow/contrib/lite/kernels/internal/types.h"

namespace android {
namespace nn {

// The implementations in tflite/kernels/internal/ take a Dims<4> object
// even if the original tensors were not 4D.
inline tflite::Dims<4> convertShapeToDims(const Shape& shape) {
  nnAssert(shape.dimensions.size() <= 4);
  tflite::Dims<4> dims;

  // The dimensions are reversed in Dims<4>.
  for (int i = 0; i < 4; ++i) {
    int src = static_cast<int>(shape.dimensions.size()) - i - 1;
    if (src >= 0) {
      dims.sizes[i] = static_cast<int>(getSizeOfDimension(shape, src));
    } else {
      dims.sizes[i] = 1;
    }
  }

  dims.strides[0] = 1;
  for (int i = 1; i<4; i++) {
    dims.strides[i] = dims.strides[i-1] * dims.sizes[i-1];
  }
  return dims;
}

inline tflite::RuntimeShape convertShapeToTflshape(const Shape& shape) {
  nnAssert(shape.dimensions.size() <= 4);

  std::vector<int32_t> tflShapeDim(shape.dimensions.begin(), shape.dimensions.end());
  return tflite::RuntimeShape(tflShapeDim.size(), tflShapeDim.data());
}

inline void convertFloat16ToFloat32(const _Float16* input, std::vector<float>* output) {
    CHECK(input != nullptr);
    CHECK(output != nullptr);
    for (int i = 0; i < output->size(); ++i) {
        (*output)[i] = static_cast<float>(input[i]);
    }
}

inline void convertFloat32ToFloat16(const std::vector<float>& input, _Float16* output) {
    CHECK(output != nullptr);
    for (int i = 0; i < input.size(); ++i) {
        output[i] = input[i];
    }
}

template <typename T>
inline bool convertNchwToNhwc(const T* nchw, const Shape& nchwShape, std::vector<T>* nhwc,
                              Shape* nhwcShape) {
    NN_RET_CHECK_EQ(getNumberOfDimensions(nchwShape), 4)
            << "Error converting a non-4-D tensor to NHWC layout";
    *nhwcShape = nchwShape;
    const auto& fromDim = nchwShape.dimensions;
    nhwcShape->dimensions = {fromDim[0], fromDim[2], fromDim[3], fromDim[1]};
    nhwc->resize(getNumberOfElements(nchwShape));
    auto to = nhwc->data();
    uint32_t spatialSize = fromDim[2] * fromDim[3];
    for (uint32_t n = 0; n < fromDim[0]; n++) {
        for (uint32_t hw = 0; hw < spatialSize; hw++) {
            for (uint32_t c = 0; c < fromDim[1]; c++) {
                uint32_t fromIndex = n * fromDim[1] * spatialSize + c * spatialSize + hw;
                *to++ = nchw[fromIndex];
            }
        }
    }
    return true;
}

} // nn
} // android

#endif // ANDROID_ML_NN_COMMON_CPU_OPERATION_UTILS_H
