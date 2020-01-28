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

// Classes used to plan how to execute a model across multiple devices.

#ifndef ANDROID_FRAMEWORKS_ML_NN_RUNTIME_EXECUTION_PLAN_H
#define ANDROID_FRAMEWORKS_ML_NN_RUNTIME_EXECUTION_PLAN_H

#include <android-base/logging.h>
#include <openssl/sha.h>

#include <map>
#include <memory>
#include <ostream>
#include <set>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

#include "HalInterfaces.h"
#include "Memory.h"
#include "ModelBuilder.h"
#include "NeuralNetworks.h"
#include "TokenHasher.h"
#include "Utils.h"

namespace android {
namespace nn {

class BurstBuilder;
class CompilationBuilder;
class Device;
class ExecutionBuilder;
class ExecutionPlan;
class ExecutionBurstController;
class Memory;
class PreparedModel;
class StepExecutor;

// NNAPI Control Flow will introduce the ability to refer to an NNAPI model
// inside another NNAPI model using OperandType::MODEL. For example, a model
// with an IF condition will refer to two other models corresponding to then
// and else branches.
//
// The following terms are used:
// - The main model is the top-level model being compiled (not referenced by any
//   OperandType::MODEL operand within the compilation).
// - A referenced model is a non-top-level model being compiled (referenced by
//   at least one OperandType::MODEL operand within the set of models being
//   compiled).
// - A source model is either the main model or a referenced model.
// - A step model is a model excerpted from a source model during the
//   partitioning process.

class ExecutionStep {
   public:
    typedef std::vector<std::pair<uint32_t, uint32_t>> RemapVectorType;
    typedef std::set<std::pair<uint32_t, uint32_t>> StepModelOutputSetType;

    enum OperandKind { INPUT, OUTPUT };

    ExecutionStep(ExecutionPlan* plan, uint32_t stepIndex, std::shared_ptr<Device> device);

    // For a given ExecutionStep, the sourceModel passed to every method must be
    // the same.
    int addOperation(int operationIndex, const ModelBuilder& sourceModel);
    int addOperand(uint32_t sourceOperandIndex, uint32_t* toOperandIndex,
                   const ModelBuilder& sourceModel, OperandKind kind);

    // Each container entry is of the form (source model operand index, step model operand index)
    const RemapVectorType& getModelInputs() const { return mModelInputs; }
    const RemapVectorType& getModelOutputs() const { return mModelOutputs; }
    const RemapVectorType& getTempsAsStepModelInputs() const { return mTempsAsStepModelInputs; }
    const StepModelOutputSetType& getTempsAsStepModelOutputs() const {
        return mTempsAsStepModelOutputs;
    }
    const RemapVectorType& getOutputsAsStepModelInputs() const { return mOutputsAsStepModelInputs; }
    const std::vector<uint32_t>& getInputIndexStepModelToMainModel() const {
        return mInputIndexStepModelToMainModel;
    }
    const std::vector<uint32_t>& getOutputIndexStepModelToMainModel() const {
        return mOutputIndexStepModelToMainModel;
    }
    const std::vector<uint32_t>& getOutputsAsStepModelInputsIndexToMainModel() const {
        return mOutputsAsStepModelInputsIndexToMainModel;
    }

    void recordTempAsStepModelOutput(uint32_t sourceOperandIndex);

    // If this step has a step model output of unknown size, sets
    // *hasOutputOfUnknownSize to true; otherwise, leaves it
    // unchanged.
    int finishStepModel(const ModelBuilder* mainModel, bool* hasOutputOfUnknownSize,
                        int32_t executionPreference);

    const ModelBuilder* getStepModel() const { return &mStepModel; }
    std::shared_ptr<Device> getDevice() const { return mDevice; }

    // only available after calling finishStepModel()
    std::shared_ptr<PreparedModel> getPreparedStepModel() const { return mPreparedStepModel; }

    // Map inputs and outputs from ExecutionBuilder to StepExecutor.
    void mapInputsAndOutputs(std::shared_ptr<StepExecutor> stepExecutor,
                             const Memory* temporaryMemory,
                             const std::map<uint32_t, uint32_t>& sourceOperandToOffsetOfTemporary,
                             const std::map<uint32_t, uint32_t>& sourceOperandToInputIndex,
                             const std::map<uint32_t, uint32_t>& sourceOperandToOutputIndex) const;

    void dump() const;

    // For test only, get the transformed cache token.
    const uint8_t* forTest_getCacheToken() const { return mToken.getCacheToken(); }

   private:
    void logStepModel() const;

    // TODO: Some of the data is working state information that
    // shouldn't be needed after we've constructed but not executed
    // the step.

    ExecutionPlan* mPlan;
    uint32_t mIndex;  // index of step within plan
    ModelBuilder mStepModel;
    std::shared_ptr<Device> mDevice;
    std::shared_ptr<PreparedModel> mPreparedStepModel;

    // All inputs of this step model:
    //     (source model operand index, step model operand index)
    //
    // Depending on whether the source operand is an input or output of the main
    // model, the memory should be mapped using
    // ExecutionPlan::CompoundBody::mSourceOperandToInputIndex,
    // ExecutionPlan::Controller::mSourceOperandToOffsetOfTemporary, or
    // ExecutionPlan::CompoundBody::mSourceOperandToOutputIndex.
    RemapVectorType mStepModelInputs;
    // All outputs of this step model:
    //     (source model operand index, step model operand index)
    //
    // Depending on whether the source operand is an output of the main model,
    // the memory should be mapped using
    // ExecutionPlan::CompoundBody::mSourceOperandToOutputIndex or
    // ExecutionPlan::Controller::mSourceOperandToOffsetOfTemporary.
    //
    // mOutputIndexStepModelToMainModel relies on mModelOutputs being a prefix of
    // mStepModelOutputs.
    RemapVectorType mStepModelOutputs;
    // Inputs of main model that are also inputs of this step model:
    //     (main model operand index, step model operand index)
    RemapVectorType mModelInputs;
    // Outputs of main model that are also outputs of this step model:
    //     (main model operand index, step model operand index)
    RemapVectorType mModelOutputs;
    // Temporaries of source model that are inputs of this step model:
    //     (source model operand index, step model operand index)
    RemapVectorType mTempsAsStepModelInputs;
    // Temporaries of source model that are outputs of this step model:
    //     (source model operand index, step model operand index)
    StepModelOutputSetType mTempsAsStepModelOutputs;
    // Outputs of main model that are inputs of this step model:
    //     (main model operand index, step model operand index)
    RemapVectorType mOutputsAsStepModelInputs;
    // Converts operand indexes from the source model to the step model.
    std::unordered_map<uint32_t, uint32_t> mOperandMap;
    // Converts input indexes from the step model to the main model
    // (these are input indexes, not operand indexes).  This vector
    // only describes inputs of the step model that are also inputs of
    // the main model -- that is, mModelInputs but not mTempsAsStepModelInputs.
    std::vector<uint32_t> mInputIndexStepModelToMainModel;
    // Converts output indexes from the step model to the main model
    // (these are output indexes, not operand indexes).  This vector
    // only describes outputs of the step model that are also outputs of
    // the main model -- that is, mModelOutputs but not
    // mTempsAsStepModelOutputs.
    std::vector<uint32_t> mOutputIndexStepModelToMainModel;
    // Converts indexes into mOutputsAsStepModelInputs to indexes into
    // main model outputs (these are input and output indexes, not
    // operand indexes).  To be specific, if the main model outputs
    // are mainModelOutputs,
    //
    //     mOutputsAsStepModelInputsIndexToMainModel.size() ==
    //     mOutputsAsStepModelInputs.size()
    //
    // and when (0 <= i < mOutputsAsStepModelInputs.size()),
    //
    //     mainModelOutputs[mOutputsAsStepModelInputsIndexToMainModel[i]] ==
    //     mOutputsAsStepModelInputs[i].first
    std::vector<uint32_t> mOutputsAsStepModelInputsIndexToMainModel;

    // The compilation caching token.
    TokenHasher mToken;
};

class ExecutionPlan {
   public:
    ExecutionPlan(const ExecutionPlan&) = delete;
    ExecutionPlan& operator=(const ExecutionPlan&) = delete;

    ExecutionPlan() {}
    ~ExecutionPlan() { delete mBody; }

    // Controller is part of the interface to a mechanism for
    // performing an execution in N steps.
    //
    // Usage pattern:
    // - Instantiate Controller with ExecutionPlan::makeController().
    // - Call ExecutionPlan::next() on Controller N+1 times.  The first N times,
    //   *executor is set to point to a new StepExecutor corresponding
    //   to that step.  The N+1st time, *executor is set to nullptr,
    //   signifying there are no more steps.
    // - If ExecutionPlan::next() returns anything other than ANEURALNETWORKS_NO_ERROR,
    //   a problem has occurred.
    class Controller {
        friend class ExecutionPlan;

       private:
        Controller(const Controller&) = delete;
        Controller& operator=(const Controller&) = delete;

        static const size_t kBadStepIndex = ~size_t(0);

        Controller(const ExecutionPlan* plan, ExecutionBuilder* executionBuilder,
                   const BurstBuilder* burstBuilder,
                   std::map<uint32_t, uint32_t> sourceOperandToOffsetOfTemporary,
                   uint32_t totalSizeOfTemporaries);

        const ExecutionPlan* mPlan;
        ExecutionBuilder* mExecutionBuilder;
        const BurstBuilder* mBurstBuilder;
        // Map from source operand index to an offset into mTemporaries used
        // to represent that operand as an inter-partition input or output.
        const std::map<uint32_t, uint32_t> mSourceOperandToOffsetOfTemporary;
        std::unique_ptr<MemoryAshmem> mTemporaries;
        size_t mNextStepIndex;
        size_t mLastStepIndex;  // For fallback.
    };

    std::vector<std::shared_ptr<ExecutionBurstController>> makeBursts(int preference) const;

    std::shared_ptr<Controller> makeController(ExecutionBuilder* executionBuilder,
                                               const BurstBuilder* burstBuilder) const;

    int next(std::shared_ptr<Controller> controller, std::shared_ptr<StepExecutor>* executor,
             std::shared_ptr<ExecutionBurstController>* burstController = nullptr) const;

    // Create the same executor as the last one created by next().
    int fallback(std::shared_ptr<Controller> controller,
                 std::shared_ptr<StepExecutor>* executor) const;

    std::shared_ptr<ExecutionStep> createNewStep(const std::shared_ptr<Device> device);

    void becomeSingleStep(const std::shared_ptr<Device> device, const ModelBuilder* model);

    int finish(const ModelBuilder* mainModel, int32_t executionPreference);

    void recordTemporaryDef(uint32_t sourceOperandIndex, uint32_t stepIndex);

    void dump() const;

    void reset();

    bool isValid() const { return mState != EMPTY && mBody != nullptr && mBody->mSuccessfulFinish; }
    bool isSimple() const { return mState == SIMPLE; }
    bool isSimpleCpu() const;

    void setCaching(const std::string* cacheDir, const uint8_t* token) {
        mCacheDir = cacheDir;
        mToken = token;
    }
    const std::string* getCacheDir() const { return mCacheDir; }
    const uint8_t* getCacheToken() const { return mToken; }

    // The caller is responsible for making sure the index is not out of range.
    void forEachStepRoleOfInput(uint32_t index, const StepRoleCallback& callback) const {
        CHECK(mBody != nullptr);
        mBody->forEachStepRoleOfInput(index, callback);
    }
    void forEachStepRoleOfOutput(uint32_t index, const StepRoleCallback& callback) const {
        CHECK(mBody != nullptr);
        mBody->forEachStepRoleOfOutput(index, callback);
    }

    // These functions are solely intended for use by unit tests of
    // the partitioning algorithm.
    enum class Kind {
        ERROR,
        EMPTY,
        SIMPLE,
        COMPOUND
    };  // See operator<< defined outside this class
    Kind forTest_getKind() const;
    std::shared_ptr<const Device> forTest_simpleGetDevice() const;
    const std::vector<std::shared_ptr<ExecutionStep>>& forTest_compoundGetSteps() const;
    bool forTest_hasStepModelOutputsOfUnknownSize() const;
    const uint8_t* forTest_simpleGetCacheToken() const;

   private:
    void findTempsAsStepModelOutputs();

    struct Body {
        virtual ~Body() {}
        virtual void dump() const = 0;
        virtual int finish(const ModelBuilder* mainModel, int32_t executionPreference) = 0;
        virtual bool hasStepModelOutputsOfUnknownSize() const = 0;
        virtual void forEachStepRoleOfInput(uint32_t index,
                                            const StepRoleCallback& callback) const = 0;
        virtual void forEachStepRoleOfOutput(uint32_t index,
                                             const StepRoleCallback& callback) const = 0;
        bool mSuccessfulFinish = false;
    };

    struct SimpleBody : Body {
        SimpleBody(std::shared_ptr<Device> device, const ModelBuilder* model,
                   const std::string* cacheDir, const uint8_t* token)
            : mDevice(device), mModel(model), mCacheDir(cacheDir), mToken(token) {}

        void dump() const override;
        int finish(const ModelBuilder* mainModel, int32_t executionPreference) override;
        bool hasStepModelOutputsOfUnknownSize() const override { return false; }
        void forEachStepRoleOfInput(uint32_t index,
                                    const StepRoleCallback& callback) const override;
        void forEachStepRoleOfOutput(uint32_t index,
                                     const StepRoleCallback& callback) const override;

        std::shared_ptr<Device> mDevice;
        const ModelBuilder* mModel;
        std::shared_ptr<PreparedModel> mPreparedModel;

        const std::string* mCacheDir;
        TokenHasher mToken;
    };

    struct CompoundBody : Body {
        void dump() const override;
        int finish(const ModelBuilder* mainModel, int32_t executionPreference) override;
        bool hasStepModelOutputsOfUnknownSize() const override {
            return mHasStepModelOutputOfUnknownSize;
        }
        void forEachStepRoleOfInput(uint32_t index,
                                    const StepRoleCallback& callback) const override;
        void forEachStepRoleOfOutput(uint32_t index,
                                     const StepRoleCallback& callback) const override;

        // TODO: Some of the data is working state information that
        // shouldn't be needed after we've constructed but not
        // executed the plan.

        std::vector<std::shared_ptr<ExecutionStep>> mSteps;

        // Map from source operand index to defining step index.
        // Used for all (and only) TEMPORARY_VARIABLEs.
        std::unordered_map<uint32_t, uint32_t> mTemporaryToDefiningStep;

        // Map from source operand index to input index of the main model.
        // Used for all (and only) SUBGRAPH_INPUTs of the main model.
        std::map<uint32_t, uint32_t> mSourceOperandToInputIndex;

        // Map from source operand index to output index of the main model.
        // Used for all (and only) SUBGRAPH_OUTPUTs of the main model.
        std::map<uint32_t, uint32_t> mSourceOperandToOutputIndex;

        bool mHasStepModelOutputOfUnknownSize = false;

       private:
        void findTempsAsStepModelOutputs();
    };

    enum { EMPTY, SIMPLE, COMPOUND } mState = EMPTY;
    Body* mBody = nullptr;
    SimpleBody* simple() {
        CHECK(mState == SIMPLE);
        CHECK(mBody != nullptr);
        return static_cast<SimpleBody*>(mBody);
    }
    const SimpleBody* simple() const {
        CHECK(mState == SIMPLE);
        CHECK(mBody != nullptr);
        return static_cast<const SimpleBody*>(mBody);
    }
    CompoundBody* compound() {
        CHECK(mState == COMPOUND);
        CHECK(mBody != nullptr);
        return static_cast<CompoundBody*>(mBody);
    }
    const CompoundBody* compound() const {
        CHECK(mState == COMPOUND);
        CHECK(mBody != nullptr);
        return static_cast<const CompoundBody*>(mBody);
    }

    // Pointers to compilation caching information in CompilationBuilder.
    const std::string* mCacheDir = nullptr;
    const uint8_t* mToken = nullptr;
};

inline std::ostream& operator<<(std::ostream& out, ExecutionPlan::Kind kind) {
    const int intKind = static_cast<int>(kind);
    if (kind < ExecutionPlan::Kind::ERROR || kind > ExecutionPlan::Kind::COMPOUND) {
        return out << "<UNK(" << intKind << ")>";
    }
    static const char* name[] = {"ERROR", "EMPTY", "SIMPLE", "COMPOUND"};
    return out << name[intKind];
}

}  // namespace nn
}  // namespace android

#endif  // ANDROID_FRAMEWORKS_ML_NN_RUNTIME_EXECUTION_PLAN_H
