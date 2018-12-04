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

#ifndef ANDROID_FRAMEWORK_ML_NN_RUNTIME_TEST_FUZZING_RANDOM_GRAPH_GENERATOR_H
#define ANDROID_FRAMEWORK_ML_NN_RUNTIME_TEST_FUZZING_RANDOM_GRAPH_GENERATOR_H

#include "fuzzing/RandomVariable.h"

#include "TestNeuralNetworksWrapper.h"

#include <string>
#include <vector>

namespace android {
namespace nn {
namespace fuzzing_test {

using test_wrapper::Type;

struct OperandSignature;
struct OperationSignature;
class OperationManager;

enum class RandomOperandType { INPUT = 0, OUTPUT = 1, INTERNAL = 2, CONST = 3 };

struct RandomOperand {
    RandomOperandType type;
    Type dataType;
    float scale;
    uint8_t zeroPoint;
    std::vector<RandomVariable> dimensions;
    std::vector<uint8_t> buffer;
    std::vector<RandomVariable> randomBuffer;

    // The finalizer will be invoked after RandomVariableNetwork::freeze().
    // Operand buffer will be set during this step (if not set before).
    std::function<void(RandomOperand*)> finalizer = nullptr;

    // The index of the operand in the model as returned from model->addOperand(...).
    int32_t opIndex = -1;
    // The index of the input/output as specified in model->identifyInputsAndOutputs(...).
    int32_t ioIndex = -1;

    RandomOperand(const OperandSignature& op);

    // Get the operand value as the specified type. The caller is reponsible for making sure that
    // the index is not out of range.
    template <typename T>
    T& getValue(uint32_t index = 0) {
        return reinterpret_cast<T*>(buffer.data())[index];
    }
    template <>
    RandomVariable& getValue<RandomVariable>(uint32_t index) {
        return randomBuffer[index];
    }

    // Check if a directed edge between [other -> this] is valid. If yes, add the edge.
    // Where "this" must be of type INPUT and "other" must be of type OUTPUT.
    bool createEdgeIfValid(const RandomOperand& other) const;

    // The followings are only intended to be used after RandomVariableNetwork::freeze().
    std::vector<uint32_t> getDimensions() const;
    uint32_t getNumberOfElements() const;
    size_t getBufferSize() const;
};

struct RandomOperation {
    ANeuralNetworksOperationType opType;
    std::vector<std::shared_ptr<RandomOperand>> inputs;
    std::vector<std::shared_ptr<RandomOperand>> outputs;
    std::function<void(RandomOperation*)> finalizer = nullptr;
    RandomOperation(const OperationSignature& operation);
};

// The main interface of the random graph generator.
class RandomGraph {
   public:
    RandomGraph(const OperationManager* manager) : mManager(manager) {}

    // Generate a random graph with numOperations and dimensionRange from a seed.
    bool generate(uint32_t seed, uint32_t numOperations, uint32_t dimensionRange);

    // Create a NDK model from the random graph.
    void createModel(test_wrapper::Model* model);

    // Set the input/output buffers.
    void createRequest(test_wrapper::Execution* execution);

    // Dump the generated random graph to a spec file for debugging and visualization purpose.
    void dumpSpecFile(std::string filename, std::string testname);

   private:
    // Generate the graph structure.
    bool generateGraph(uint32_t numOperations);

    // Fill in random values for dimensions, constants, and inputs.
    bool generateValue();

    std::vector<RandomOperation> mOperations;
    std::vector<std::shared_ptr<RandomOperand>> mOperands;
    const OperationManager* mManager;
};

}  // namespace fuzzing_test
}  // namespace nn
}  // namespace android

#endif  // ANDROID_FRAMEWORK_ML_NN_RUNTIME_TEST_FUZZING_RANDOM_GRAPH_GENERATOR_H
