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

#ifndef ANDROID_ML_NN_COMMON_OPERATION_RESOLVER_H
#define ANDROID_ML_NN_COMMON_OPERATION_RESOLVER_H

#include "HalInterfaces.h"
#include "OperationsUtils.h"

namespace android {
namespace nn {

// Encapsulates an operation implementation.
struct OperationRegistration {
    OperationType type;
    const char* name;

    // Validates operand types, shapes, and any values known during graph creation.
    std::function<bool(const IOperationValidationContext*)> validate;

    // prepare is called when the inputs this operation depends on have been
    // computed. Typically, prepare does any remaining validation and sets
    // output shapes via context->setOutputShape(...).
    std::function<bool(IOperationExecutionContext*)> prepare;

    // Executes the operation, reading from context->getInputBuffer(...)
    // and writing to context->getOutputBuffer(...).
    std::function<bool(IOperationExecutionContext*)> execute;
};

// A global singleton used to register operation implementations.
//
// Usage:
//   const OperationRegistration* operationRegistration =
//           OperationResolver::get()->findOperation(operationType);
//   NN_RET_CHECK(operationRegistration != nullptr);
//   NN_RET_CHECK(operationRegistration->validate != nullptr);
//   NN_RET_CHECK(operationRegistration->validate(&context));
//
class OperationResolver {
    DISALLOW_COPY_AND_ASSIGN(OperationResolver);

   public:
    static const OperationResolver* get() {
        static OperationResolver instance;
        return &instance;
    }

    const OperationRegistration* findOperation(OperationType operationType) const;

   private:
    OperationResolver();

    void registerOperation(const OperationRegistration* operationRegistration);

    const OperationRegistration* mRegistrations[kNumberOfOperationTypes] = {};
};

// NN_REGISTER_OPERATION creates OperationRegistration for consumption by
// OperationResolver.
//
// Usage:
//   namespace android {
//   namespace nn {
//   namespace gather {
//   ...
//   }  // namespace gather
//
//   NN_REGISTER_OPERATION(GATHER, gather::kOperationName, gather::validate,
//                         gather::prepare, gather::execute);
//   }  // namespace nn
//   }  // namespace android
//
#ifdef NN_INCLUDE_CPU_IMPLEMENTATION
#define NN_REGISTER_OPERATION(identifier, operationName, validate, prepare, execute)           \
    const OperationRegistration* register_##identifier() {                                     \
        static OperationRegistration registration = {OperationType::identifier, operationName, \
                                                     validate, prepare, execute};              \
        return &registration;                                                                  \
    }
#else
// This version ignores CPU execution logic (prepare and execute).
// The compiler is supposed to omit that code so that only validation logic
// makes it into libneuralnetworks_utils.
#define NN_REGISTER_OPERATION(identifier, operationName, validate, unused_prepare, unused_execute) \
    const OperationRegistration* register_##identifier() {                                         \
        static OperationRegistration registration = {OperationType::identifier, operationName,     \
                                                     validate, nullptr, nullptr};                  \
        return &registration;                                                                      \
    }
#endif

}  // namespace nn
}  // namespace android

#endif  // ANDROID_ML_NN_COMMON_OPERATION_RESOLVER_H