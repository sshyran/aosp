/*
 * Copyright (C) 2019 The Android Open Source Project
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

#include "fuzzing/operation_signatures/OperationSignatureUtils.h"

namespace android {
namespace nn {
namespace fuzzing_test {

#define DEFINE_ELEMENTWISE_SIGNATURE(op, ver, ...)                              \
    DEFINE_OPERATION_SIGNATURE(op##_##ver){.opType = ANEURALNETWORKS_##op,      \
                                           .supportedDataTypes = {__VA_ARGS__}, \
                                           .supportedRanks = {1, 2, 3, 4},      \
                                           .version = HalVersion::ver,          \
                                           .inputs = {INPUT_DEFAULT},           \
                                           .outputs = {OUTPUT_DEFAULT},         \
                                           .constructor = sameShapeOpConstructor};

DEFINE_ELEMENTWISE_SIGNATURE(FLOOR, V1_0, Type::TENSOR_FLOAT32);
DEFINE_ELEMENTWISE_SIGNATURE(RELU, V1_0, Type::TENSOR_FLOAT32, Type::TENSOR_QUANT8_ASYMM);
DEFINE_ELEMENTWISE_SIGNATURE(RELU1, V1_0, Type::TENSOR_FLOAT32, Type::TENSOR_QUANT8_ASYMM);
DEFINE_ELEMENTWISE_SIGNATURE(RELU6, V1_0, Type::TENSOR_FLOAT32, Type::TENSOR_QUANT8_ASYMM);
DEFINE_ELEMENTWISE_SIGNATURE(TANH, V1_0, Type::TENSOR_FLOAT32);
DEFINE_ELEMENTWISE_SIGNATURE(FLOOR, V1_2, Type::TENSOR_FLOAT16);
DEFINE_ELEMENTWISE_SIGNATURE(LOGISTIC, V1_2, Type::TENSOR_FLOAT16);
DEFINE_ELEMENTWISE_SIGNATURE(RELU, V1_2, Type::TENSOR_FLOAT16);
DEFINE_ELEMENTWISE_SIGNATURE(RELU1, V1_2, Type::TENSOR_FLOAT16);
DEFINE_ELEMENTWISE_SIGNATURE(RELU6, V1_2, Type::TENSOR_FLOAT16);

#define DEFINE_ELEMENTWISE_SIGNATURE_WITH_RANK5(op, ver, ...)                   \
    DEFINE_OPERATION_SIGNATURE(op##_##ver){.opType = ANEURALNETWORKS_##op,      \
                                           .supportedDataTypes = {__VA_ARGS__}, \
                                           .supportedRanks = {1, 2, 3, 4, 5},   \
                                           .version = HalVersion::ver,          \
                                           .inputs = {INPUT_DEFAULT},           \
                                           .outputs = {OUTPUT_DEFAULT},         \
                                           .constructor = sameShapeOpConstructor};

DEFINE_ELEMENTWISE_SIGNATURE_WITH_RANK5(ABS, V1_2, Type::TENSOR_FLOAT32, Type::TENSOR_FLOAT16);
DEFINE_ELEMENTWISE_SIGNATURE_WITH_RANK5(EXP, V1_2, Type::TENSOR_FLOAT32, Type::TENSOR_FLOAT16);
DEFINE_ELEMENTWISE_SIGNATURE_WITH_RANK5(LOG, V1_2, Type::TENSOR_FLOAT32, Type::TENSOR_FLOAT16);
DEFINE_ELEMENTWISE_SIGNATURE_WITH_RANK5(NEG, V1_2, Type::TENSOR_FLOAT32, Type::TENSOR_FLOAT16,
                                        Type::TENSOR_INT32);
DEFINE_ELEMENTWISE_SIGNATURE_WITH_RANK5(RSQRT, V1_2, Type::TENSOR_FLOAT32, Type::TENSOR_FLOAT16);
DEFINE_ELEMENTWISE_SIGNATURE_WITH_RANK5(SIN, V1_2, Type::TENSOR_FLOAT32, Type::TENSOR_FLOAT16);
DEFINE_ELEMENTWISE_SIGNATURE_WITH_RANK5(SQRT, V1_2, Type::TENSOR_FLOAT32, Type::TENSOR_FLOAT16);
DEFINE_ELEMENTWISE_SIGNATURE_WITH_RANK5(LOGICAL_NOT, V1_2, Type::TENSOR_BOOL8);

// Quantized operations with special output quantization parameters.
#define DEFINE_ELEMENTWISE_WITH_QUANT_OUTPUT_SIGNATURE(op, ver, s, z, ...)      \
    DEFINE_OPERATION_SIGNATURE(op##_##ver){.opType = ANEURALNETWORKS_##op,      \
                                           .supportedDataTypes = {__VA_ARGS__}, \
                                           .supportedRanks = {1, 2, 3, 4},      \
                                           .version = HalVersion::ver,          \
                                           .inputs = {INPUT_DEFAULT},           \
                                           .outputs = {OUTPUT_QUANT((s), (z))}, \
                                           .constructor = sameDimensionOpConstructor};

DEFINE_ELEMENTWISE_WITH_QUANT_OUTPUT_SIGNATURE(LOGISTIC, V1_0, /*scale=*/1.f / 256, /*zeroPoint=*/0,
                                               Type::TENSOR_FLOAT32, Type::TENSOR_QUANT8_ASYMM);
DEFINE_ELEMENTWISE_WITH_QUANT_OUTPUT_SIGNATURE(TANH, V1_2, /*scale=*/1.f / 128, /*zeroPoint=*/128,
                                               Type::TENSOR_FLOAT16, Type::TENSOR_QUANT8_ASYMM);

}  // namespace fuzzing_test
}  // namespace nn
}  // namespace android
