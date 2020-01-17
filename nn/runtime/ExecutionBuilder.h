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

#ifndef ANDROID_FRAMEWORKS_ML_NN_RUNTIME_EXECUTION_BUILDER_H
#define ANDROID_FRAMEWORKS_ML_NN_RUNTIME_EXECUTION_BUILDER_H

#include <atomic>
#include <memory>
#include <tuple>
#include <vector>

#include "Callbacks.h"
#include "HalInterfaces.h"
#include "Memory.h"
#include "ModelArgumentInfo.h"
#include "ModelBuilder.h"
#include "NeuralNetworks.h"

namespace android {
namespace nn {

class BurstBuilder;
class CompilationBuilder;
class Device;
class ExecutionBurstController;
class ExecutionPlan;
class ExecutionStep;
class Memory;
class ModelBuilder;
class PreparedModel;
class StepExecutor;

class ExecutionBuilder {
    friend class StepExecutor;

   public:
    ExecutionBuilder(const CompilationBuilder* compilation);

    int setInput(uint32_t index, const ANeuralNetworksOperandType* type, const void* buffer,
                 size_t length);
    int setInputFromMemory(uint32_t index, const ANeuralNetworksOperandType* type,
                           const Memory* memory, size_t offset, size_t length);
    int setOutput(uint32_t index, const ANeuralNetworksOperandType* type, void* buffer,
                  size_t length);
    int setOutputFromMemory(uint32_t index, const ANeuralNetworksOperandType* type,
                            const Memory* memory, size_t offset, size_t length);

    int setMeasureTiming(bool measure);

    int getDuration(int32_t durationCode, uint64_t* duration) const;

    int computeAsynchronously(sp<ExecutionCallback>* synchronizationCallback) {
        CHECK(synchronizationCallback != nullptr);
        return compute(synchronizationCallback);
    }
    int computeSynchronously() { return compute(nullptr); }
    int burstCompute(BurstBuilder* burst) { return compute(nullptr, burst); }

    // Initialize output dimensional information from ModelArgumentInfo.
    std::vector<hal::OutputShape> getInitialOutputShapes() const;

    int getOutputOperandDimensions(uint32_t index, uint32_t* dimensions);
    int getOutputOperandRank(uint32_t index, uint32_t* rank);

    // Handshake with lower-level execution support
    bool measureTiming() const { return mMeasureTiming; }
    void reportTiming(hal::Timing timing) { mTiming = timing; }

    const CompilationBuilder* getCompilation() const { return mCompilation; }
    const ModelBuilder* getModel() const { return mModel; }

    hal::ErrorStatus finish(hal::ErrorStatus error,
                            const std::vector<hal::OutputShape>& outputShapes);

    bool inFlight() const { return mStarted && !mFinished; }

   private:
    // If a callback is provided, then this is asynchronous. If a callback is
    // not provided (i.e., is nullptr), then this is synchronous.
    //
    // If burst is provided, then the burst path will be used. If a burst is not
    // provided (i.e., is nullptr), then a synchronous execution will occur.
    //
    // Providing both synchronizationCallback and burstBuilder is an error.
    int compute(sp<ExecutionCallback>* synchronizationCallback,
                BurstBuilder* burstBuilder = nullptr);

    const CompilationBuilder* mCompilation;

    // Update output dimensional information from OutputShape to ModelArgumentInfo.
    bool updateOutputShapes(const std::vector<hal::OutputShape>& outputShapes);

    bool updateMemories();

    const ModelBuilder* mModel;
    const ExecutionPlan* mPlan;

    // This is a DeviceManager::kPartitioning* value captured from
    // CompilationBuilder when the ExecutionBuilder is constructed.
    uint32_t mPartitioning;

    // The information we'll send to the driver about the inputs and outputs.
    // Note that we build this in two steps:
    // 1. As the arguments are specified, set the corresponding mInputs or mOutputs element.
    //    If set from a pointer, don't set the location in the RequestArgument but store it
    //    instead in mInputBuffers or mOutputBuffers.
    // 2. Once we have all the inputs and outputs, if needed, allocate shared memory for
    //    the m*Buffers entries.  Copy the input values into the shared memory.
    // We do this to avoid creating a lot of shared memory objects if we have a lot of
    // parameters specified via pointers.  We also avoid copying in the case where
    // some of the nodes will interpreted on the CPU anyway.
    std::vector<ModelArgumentInfo> mInputs;
    std::vector<ModelArgumentInfo> mOutputs;
    MemoryTracker mMemories;

    // Do we ask the driver to measure timing?
    bool mMeasureTiming = false;

    // Timing reported from the driver
    hal::Timing mTiming = {};

    // Properties cannot be set once the execution has started.
    std::atomic_bool mStarted = false;

    // Timing and output shapes can only be queried after the execution is
    // finished.
    std::atomic_bool mFinished = false;
};

// class StepExecutor is used to execute a single "step" in a
// potentially multiple step execution process.  The graph associated
// with that step is executed in its entirety on a single device (or
// on the CPU).
class StepExecutor {
   public:
    // executionBuilder
    //     Describes the full (possibly multiple-"step") execution.
    // model
    //     The model to be executed by the executor.  Possibly a single
    //     "step" model of a multiple-"step" executionBuilder.
    // driver, preparedModel
    //     The device on which to execute the "step", and the prepared
    //     model to execute on that device.  (Both are nullptr in the
    //     case of CPU.)
    StepExecutor(ExecutionBuilder* executionBuilder, const ModelBuilder* model,
                 std::shared_ptr<Device> device, std::shared_ptr<PreparedModel> preparedModel);

    // Map inputs and outputs from ExecutionBuilder to StepExecutor,
    // in the case where we have a single-"step" execution (i.e., the executor
    // is executing the entire model from the ExecutionBuilder).
    void mapInputsAndOutputsTrivially();

    // Update output shapes with shapes returned from execution.
    bool updateOutputShapes(const std::vector<hal::OutputShape>& from,
                            std::vector<hal::OutputShape>* to);

    // Map inputs and outputs from ExecutionBuilder to StepExecutor,
    // one at a time.  Note that these are input/output indexes, not
    // operand indexes.
    void mapInput(uint32_t builderIndex, uint32_t executorIndex) {
        mapInputOrOutput(mExecutionBuilder->mInputs[builderIndex], &mInputs[executorIndex]);
    }
    void mapOutput(uint32_t builderIndex, uint32_t executorIndex) {
        mapInputOrOutput(mExecutionBuilder->mOutputs[builderIndex], &mOutputs[executorIndex]);
    }
    void mapOutputToInput(uint32_t builderIndex, uint32_t executorIndex) {
        mapInputOrOutput(mExecutionBuilder->mOutputs[builderIndex], &mInputs[executorIndex]);
    }

    // The input or output is assumed to have the size of the
    // corresponding operand.
    int setInputFromTemporaryMemory(uint32_t inputIndex, const Memory* memory, uint32_t offset) {
        return setInputOrOutputFromTemporaryMemory(mModel->getInputOperand(inputIndex), memory,
                                                   offset, &mInputs.at(inputIndex));
    }
    int setOutputFromTemporaryMemory(uint32_t outputIndex, const Memory* memory, uint32_t offset) {
        return setInputOrOutputFromTemporaryMemory(mModel->getOutputOperand(outputIndex), memory,
                                                   offset, &mOutputs.at(outputIndex));
    }

    // Executes using the (driver, preparedModel) specified at construction time.
    std::tuple<int, std::vector<hal::OutputShape>, hal::Timing> compute(
            const std::shared_ptr<ExecutionBurstController>& burstController = nullptr);

    // Re-compiles and executes using the CPU, regardless of the (driver,
    // preparedModel) specified at construction time.
    std::tuple<int, std::vector<hal::OutputShape>, hal::Timing> computeOnCpuFallback();

    bool isCpu() const;

    // ExecutionStep has the index mapping between ExecutionBuilder and StepExecutor.
    void setExecutionStep(const std::shared_ptr<const ExecutionStep>& step) {
        mExecutionStep = step;
    }

   private:
    void mapInputOrOutput(const ModelArgumentInfo& builderInputOrOutput,
                          ModelArgumentInfo* executorInputOrOutput);

    int setInputOrOutputFromTemporaryMemory(const hal::Operand& inputOrOutputOperand,
                                            const Memory* memory, uint32_t offset,
                                            ModelArgumentInfo* inputOrOutputInfo);

    // describes the full (possibly multiple-"step") execution
    ExecutionBuilder* mExecutionBuilder;

    // describes the single execution step
    std::shared_ptr<const ExecutionStep> mExecutionStep = nullptr;

    // model to be executed on the executor, in both original and
    // compiled forms; and device on which to execute it
    const ModelBuilder* mModel;
    std::shared_ptr<Device> mDevice;
    std::shared_ptr<PreparedModel> mPreparedModel;

    // The information we'll send to the driver about the inputs and outputs.
    // Note that we build this in two steps:
    // 1. As the arguments are specified, set the corresponding mInputs or mOutputs element.
    //    If set from a pointer, don't set the location in the RequestArgument but store it
    //    instead in mInputBuffers or mOutputBuffers.
    // 2. Once we have all the inputs and outputs, if needed, allocate shared memory for
    //    the m*Buffers entries.  Copy the input values into the shared memory.
    // We do this to avoid creating a lot of shared memory objects if we have a lot of
    // parameters specified via pointers.  We also avoid copying in the case where
    // some of the nodes will interpreted on the CPU anyway.
    std::vector<ModelArgumentInfo> mInputs;
    std::vector<ModelArgumentInfo> mOutputs;
    MemoryTracker mMemories;
};

}  // namespace nn
}  // namespace android

#endif  // ANDROID_FRAMEWORKS_ML_NN_RUNTIME_EXECUTION_BUILDER_H
