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
#include "tensorflow/lite/kernels/internal/reference/legacy_reference_ops.h"

#include "Tracing.h"

namespace android {
namespace nn {

template <typename T>
bool concatenation(const std::vector<const T*>& inputDataPtrs,
                   const std::vector<Shape>& inputShapes, int32_t axis, T* outputData,
                   const Shape& outputShape) {
    NNTRACE_TRANS("concatenation");
    int num_inputs = inputShapes.size();
    std::vector<tflite::Dims<4>*> inputDimsPtr(num_inputs);
    std::vector<tflite::Dims<4> > inputDims(num_inputs);
    for (int i = 0; i < num_inputs; i++) {
        inputDims[i] = convertShapeToDims(inputShapes[i]);
        inputDimsPtr[i] = &inputDims[i];
    }
    NNTRACE_COMP_SWITCH("optimized_ops::Concatenation");
    tflite::optimized_ops::Concatenation<tflite::FusedActivationFunctionType::kNone, T>(
            getNumberOfDimensions(outputShape) - axis - 1, inputDataPtrs.data(),
            inputDimsPtr.data(), num_inputs, outputData, convertShapeToDims(outputShape));

    return true;
}

template bool concatenation<float>(const std::vector<const float*>& inputDataPtrs,
                                   const std::vector<Shape>& inputShapes, int32_t axis,
                                   float* outputData, const Shape& outputShape);
template bool concatenation<_Float16>(const std::vector<const _Float16*>& inputDataPtrs,
                                      const std::vector<Shape>& inputShapes, int32_t axis,
                                      _Float16* outputData, const Shape& outputShape);

template <>
bool concatenation<uint8_t>(const std::vector<const uint8_t*>& inputDataPtrs,
                            const std::vector<Shape>& inputShapes, int32_t axis,
                            uint8_t* outputData, const Shape& outputShape) {
    NNTRACE_TRANS("concatenationQuant8");
    int num_inputs = inputShapes.size();
    std::vector<float> inputScales(num_inputs);
    std::vector<int32> inputOffsets(num_inputs);
    std::vector<tflite::Dims<4>*> inputDimsPtr(num_inputs);
    std::vector<tflite::Dims<4> > inputDims(num_inputs);
    for (int i = 0; i < num_inputs; i++) {
        inputScales[i] = inputShapes[i].scale;
        inputOffsets[i] = inputShapes[i].offset;
        inputDims[i] = convertShapeToDims(inputShapes[i]);
        inputDimsPtr[i] = &inputDims[i];
    }

    NNTRACE_COMP_SWITCH("reference_ops::Concatenation");
    tflite::reference_ops::Concatenation(
            getNumberOfDimensions(outputShape) - axis - 1, inputDataPtrs.data(),
            inputDimsPtr.data(), inputOffsets.data(), inputScales.data(), num_inputs, outputData,
            convertShapeToDims(outputShape), outputShape.offset, outputShape.scale);

    return true;
}

}  // namespace nn
}  // namespace android
