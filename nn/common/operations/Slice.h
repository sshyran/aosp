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

#ifndef FRAMEWORKS_ML_NN_SLICE_H
#define FRAMEWORKS_ML_NN_SLICE_H

#include "CpuOperationUtils.h"

namespace android {
namespace nn {
namespace slice {

bool prepare(const Shape& input, const void* beginData, const Shape& beginShape,
             const void* sizeData, const Shape& sizeShape, Shape* outputShape);

bool eval(const void* inputData, const Shape& inputShape, const void* beginData,
          const Shape& beginShape, const void* sizeData, const Shape& sizeShape, void* outputData,
          const Shape& outputShape);

}  // namespace slice
}  // namespace nn
}  // namespace android

#endif  // FRAMEWORKS_ML_NN_SLICE_H
