/*
 * Copyright (C) 2020 The Android Open Source Project
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

#ifndef ANDROID_FRAMEWORKS_ML_NN_COMMON_NNAPI_OPERAND_TYPES_H
#define ANDROID_FRAMEWORKS_ML_NN_COMMON_NNAPI_OPERAND_TYPES_H

namespace android::nn {

enum class OperandType {
    FLOAT32 = 0,
    INT32 = 1,
    UINT32 = 2,
    TENSOR_FLOAT32 = 3,
    TENSOR_INT32 = 4,
    TENSOR_QUANT8_ASYMM = 5,
    BOOL = 6,
    TENSOR_QUANT16_SYMM = 7,
    TENSOR_FLOAT16 = 8,
    TENSOR_BOOL8 = 9,
    FLOAT16 = 10,
    TENSOR_QUANT8_SYMM_PER_CHANNEL = 11,
    TENSOR_QUANT16_ASYMM = 12,
    TENSOR_QUANT8_SYMM = 13,
    TENSOR_QUANT8_ASYMM_SIGNED = 14,
    SUBGRAPH = 15,
    OEM = 10000,
    TENSOR_OEM_BYTE = 10001,
};

}  // namespace android::nn

#endif  // ANDROID_FRAMEWORKS_ML_NN_COMMON_NNAPI_OPERAND_TYPES_H
