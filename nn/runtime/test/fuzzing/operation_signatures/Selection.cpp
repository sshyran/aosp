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

static void embeddingLookupConstructor(Type, uint32_t rank, RandomOperation* op) {
    setFreeDimensions(op->inputs[0], /*rank=*/1);
    setFreeDimensions(op->inputs[1], rank);
    op->outputs[0]->dimensions.resize(rank);
    op->outputs[0]->dimensions[0] = op->inputs[0]->dimensions[0];
    for (uint32_t i = 1; i < rank; i++) {
        op->outputs[0]->dimensions[i] = op->inputs[1]->dimensions[i];
    }
    setSameQuantization(op->outputs[0], op->inputs[1]);
}

static void embeddingLookupFinalizer(RandomOperation* op) {
    uint32_t dimValue = op->inputs[1]->dimensions[0].getValue();
    uint32_t numElements = op->inputs[0]->getNumberOfElements();
    for (uint32_t i = 0; i < numElements; i++) {
        // The index values must be in the range of [0, input1_dim0).
        op->inputs[0]->value<int32_t>(i) = getUniform<int32_t>(0, dimValue - 1);
    }
}

DEFINE_OPERATION_SIGNATURE(EMBEDDING_LOOKUP_V1_0){
        .opType = ANEURALNETWORKS_EMBEDDING_LOOKUP,
        .supportedDataTypes = {Type::TENSOR_FLOAT32, Type::TENSOR_INT32, Type::TENSOR_QUANT8_ASYMM},
        .supportedRanks = {2, 3, 4},
        .version = HalVersion::V1_0,
        .inputs = {PARAMETER_NONE(Type::TENSOR_INT32), INPUT_DEFAULT},
        .outputs = {OUTPUT_DEFAULT},
        .constructor = embeddingLookupConstructor,
        .finalizer = embeddingLookupFinalizer};

static void hashtableLookupConstructor(Type, uint32_t rank, RandomOperation* op) {
    op->inputs[0]->dimensions = {RandomVariableType::FREE};
    op->inputs[1]->dimensions = {RandomVariableType::FREE};
    op->inputs[2]->dimensions.resize(rank);
    op->outputs[0]->dimensions.resize(rank);
    op->inputs[2]->dimensions[0] = op->inputs[1]->dimensions[0];
    op->outputs[0]->dimensions[0] = op->inputs[0]->dimensions[0];
    for (uint32_t i = 1; i < rank; i++) {
        op->inputs[2]->dimensions[i] = RandomVariableType::FREE;
        op->outputs[0]->dimensions[i] = op->inputs[2]->dimensions[i];
    }
    setSameQuantization(op->outputs[0], op->inputs[2]);
    op->outputs[1]->dimensions = {op->inputs[0]->dimensions[0]};
}

static void hashtableLookupFinalizer(RandomOperation* op) {
    // Generate values for keys. The keys tensor must be sorted in ascending order.
    uint32_t n = op->inputs[1]->getNumberOfElements();
    int32_t val = 0;
    for (uint32_t i = 0; i < n; i++) {
        op->inputs[1]->value<int32_t>(i) = val;
        val += getUniform<int32_t>(1, 2);
    }
    // Generate values for lookups.
    uint32_t k = op->inputs[0]->getNumberOfElements();
    for (uint32_t i = 0; i < k; i++) {
        op->inputs[0]->value<int32_t>(i) = getUniform<int32_t>(0, val);
    }
}

// The hits tensor in HASHTABLE_LOOKUP.
static const OperandSignature hitsTensor_HASHTABLE_LOOKUP = {
        .type = RandomOperandType::OUTPUT, .constructor = [](Type, uint32_t, RandomOperand* op) {
            op->dataType = Type::TENSOR_QUANT8_ASYMM;
            op->scale = 1.0f;
            op->zeroPoint = 0;
        }};

DEFINE_OPERATION_SIGNATURE(HASHTABLE_LOOKUP_V1_0){
        .opType = ANEURALNETWORKS_HASHTABLE_LOOKUP,
        .supportedDataTypes = {Type::TENSOR_FLOAT32, Type::TENSOR_INT32, Type::TENSOR_QUANT8_ASYMM},
        .supportedRanks = {2, 3, 4},
        .version = HalVersion::V1_0,
        .inputs = {PARAMETER_NONE(Type::TENSOR_INT32), PARAMETER_NONE(Type::TENSOR_INT32),
                   INPUT_DEFAULT},
        .outputs = {OUTPUT_DEFAULT, hitsTensor_HASHTABLE_LOOKUP},
        .constructor = hashtableLookupConstructor,
        .finalizer = hashtableLookupFinalizer};

}  // namespace fuzzing_test
}  // namespace nn
}  // namespace android
