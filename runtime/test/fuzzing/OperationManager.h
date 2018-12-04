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

#ifndef ANDROID_FRAMEWORK_ML_NN_RUNTIME_TEST_FUZZING_OPERATION_MANAGER_H
#define ANDROID_FRAMEWORK_ML_NN_RUNTIME_TEST_FUZZING_OPERATION_MANAGER_H

#include "fuzzing/RandomGraphGenerator.h"
#include "fuzzing/RandomVariable.h"

#include "TestNeuralNetworksWrapper.h"

#include <functional>
#include <vector>

namespace android {
namespace nn {
namespace fuzzing_test {

using test_wrapper::Type;

struct OperandSignature {
    // Possible values are [INPUT | CONST | OUTPUT].
    // If CONST, the generator will avoid feeding the operand with another operation’s output.
    RandomOperandType type;

    // The OperandType, e.g. Type::TENSOR_FLOAT32.
    Type dataType;

    float scale = 0.0f;
    uint8_t zeroPoint = 0;
    std::function<void(RandomOperand*)> constructor = nullptr;
    std::function<void(RandomOperand*)> finalizer = nullptr;
};

struct OperationSignature {
    ANeuralNetworksOperationType opType;
    std::vector<OperandSignature> inputs;
    std::vector<OperandSignature> outputs;
    std::function<void(RandomOperation*)> constructor = nullptr;
    std::function<void(RandomOperation*)> finalizer = nullptr;
};

// A manager manages all available OperationSignatures.
class OperationManager {
   public:
    OperationManager();
    virtual ~OperationManager() = default;
    // Randomly returns a valid OperationSignature. RandomGraphGenerator uses this method to
    // generate a random list of operations in the graph.
    virtual const OperationSignature& getRandomOperation() const;

   protected:
    std::vector<const OperationSignature> mOperationSignatures;
};

}  // namespace fuzzing_test
}  // namespace nn
}  // namespace android

#endif  // ANDROID_FRAMEWORK_ML_NN_RUNTIME_TEST_FUZZING_OPERATION_MANAGER_H
