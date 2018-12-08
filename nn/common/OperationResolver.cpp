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

#define LOG_TAG "OperationResolver"

#include "OperationResolver.h"

#include "NeuralNetworks.h"

namespace android {
namespace nn {

// TODO(b/119608412): Find a way to not reference every operation here.
const OperationRegistration* register_ABS();
const OperationRegistration* register_CHANNEL_SHUFFLE();
const OperationRegistration* register_EQUAL();
const OperationRegistration* register_GATHER();
const OperationRegistration* register_GREATER();
const OperationRegistration* register_GREATER_EQUAL();
const OperationRegistration* register_HEATMAP_MAX_KEYPOINT();
const OperationRegistration* register_LESS();
const OperationRegistration* register_LESS_EQUAL();
const OperationRegistration* register_LOGICAL_AND();
const OperationRegistration* register_LOGICAL_NOT();
const OperationRegistration* register_LOGICAL_OR();
const OperationRegistration* register_LOG_SOFTMAX();
const OperationRegistration* register_NOT_EQUAL();
const OperationRegistration* register_PRELU();

OperationResolver::OperationResolver() {
    registerOperation(register_ABS());
    registerOperation(register_CHANNEL_SHUFFLE());
    registerOperation(register_EQUAL());
    registerOperation(register_GATHER());
    registerOperation(register_GREATER());
    registerOperation(register_GREATER_EQUAL());
    registerOperation(register_HEATMAP_MAX_KEYPOINT());
    registerOperation(register_LESS());
    registerOperation(register_LESS_EQUAL());
    registerOperation(register_LOGICAL_AND());
    registerOperation(register_LOGICAL_NOT());
    registerOperation(register_LOGICAL_OR());
    registerOperation(register_LOG_SOFTMAX());
    registerOperation(register_NOT_EQUAL());
    registerOperation(register_PRELU());
}

const OperationRegistration* OperationResolver::findOperation(OperationType operationType) const {
    auto index = static_cast<int32_t>(operationType);
    if (index < 0 || index >= kNumberOfOperationTypes) {
        return nullptr;
    }
    return mRegistrations[index];
}

void OperationResolver::registerOperation(const OperationRegistration* operationRegistration) {
    CHECK(operationRegistration != nullptr);
    auto index = static_cast<int32_t>(operationRegistration->type);
    CHECK_LE(0, index);
    CHECK_LT(index, kNumberOfOperationTypes);
    CHECK(mRegistrations[index] == nullptr);
    mRegistrations[index] = operationRegistration;
}

}  // namespace nn
}  // namespace android
