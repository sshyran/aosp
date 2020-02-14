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

#define LOG_TAG "ExecutionPlan"

#include "ExecutionPlan.h"

#include <cutils/native_handle.h>
#include <fcntl.h>
#include <openssl/sha.h>
#include <sys/stat.h>
#include <sys/types.h>

#include <algorithm>
#include <functional>
#include <map>
#include <memory>
#include <mutex>
#include <queue>
#include <set>
#include <string>
#include <type_traits>
#include <unordered_set>
#include <utility>
#include <vector>

#include "BurstBuilder.h"
#include "Callbacks.h"
#include "CompilationBuilder.h"
#include "ExecutionBuilder.h"
#include "ExecutionBurstController.h"
#include "GraphDump.h"
#include "Manager.h"
#include "MetaModel.h"
#include "ModelBuilder.h"
#include "OperationsUtils.h"
#include "TokenHasher.h"
#include "Tracing.h"
#include "TypeManager.h"
#include "Utils.h"

namespace android {
namespace nn {

namespace {

using namespace hal;

// Compiles the model on device.
// If compilation caching is available, depending on ExecutionPlan::mState, the token may only have
// been initialized by the user provided token (SIMPLE body), or is already re-hashed by the
// operation indices to be executed (COMPOUND body). The token will be re-hashed further by the
// device name, device version string, and the execution preference in this function.
int compile(const Device& device, const ModelBuilder& model, int executionPreference,
            int compilationPriority, const OptionalTimePoint& deadline, const std::string& cacheDir,
            TokenHasher* token, std::shared_ptr<PreparedModel>* preparedModel) {
    CHECK(token != nullptr);
    CHECK(preparedModel != nullptr);
    *preparedModel = nullptr;

    std::optional<CacheToken> cacheToken;
    if (device.isCachingSupported() && token->ok() &&
        token->updateFromString(device.getName().c_str()) &&
        token->updateFromString(device.getVersionString().c_str()) &&
        token->update(&executionPreference, sizeof(executionPreference)) &&
        token->update(&compilationPriority, sizeof(compilationPriority)) && token->finish()) {
        cacheToken.emplace(token->getCacheToken());
    }

    const ModelFactory makeModel = [&model] { return model.makeHidlModel(); };
    const ExecutionPreference preference = static_cast<ExecutionPreference>(executionPreference);
    const Priority priority = convertToHalPriority(compilationPriority);
    const auto [n, returnedPreparedModel] =
            device.prepareModel(makeModel, preference, priority, deadline, cacheDir, cacheToken);
    *preparedModel = returnedPreparedModel;
    return n;
}

typedef std::function<void(uint32_t)> OperationReadyCallback;

int copyOperandExtraParams(ModelBuilder& model, uint32_t toOperandIndex,
                           const Operand& fromOperand) {
    if (fromOperand.type == OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL &&
        fromOperand.extraParams.getDiscriminator() ==
                OperandExtraParams::hidl_discriminator::channelQuant) {
        auto& fromChannelQuant = fromOperand.extraParams.channelQuant();
        ANeuralNetworksSymmPerChannelQuantParams toChannelQuant = {
                .channelDim = fromChannelQuant.channelDim,
                .scaleCount = static_cast<uint32_t>(fromChannelQuant.scales.size()),
                .scales = fromChannelQuant.scales.data(),
        };
        return model.setOperandSymmPerChannelQuantParams(toOperandIndex, toChannelQuant);
    } else if (isExtensionOperandType(fromOperand.type) &&
               fromOperand.extraParams.getDiscriminator() ==
                       OperandExtraParams::hidl_discriminator::extension) {
        hidl_vec<uint8_t> extensionData = fromOperand.extraParams.extension();
        return model.setOperandExtensionData(toOperandIndex, extensionData.data(),
                                             extensionData.size());
    } else if (fromOperand.extraParams.getDiscriminator() !=
                       OperandExtraParams::hidl_discriminator::none ||
               fromOperand.type == OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL) {
        LOG(ERROR) << "Type " << toString(fromOperand.type)
                   << " has an unexpected extraParams discriminator: "
                   << static_cast<int>(fromOperand.extraParams.getDiscriminator());
        return ANEURALNETWORKS_BAD_DATA;
    } else {
        return ANEURALNETWORKS_NO_ERROR;
    }
}

// This class tracks whether we know the value of an operand as operations
// are processed.
class OperandTracker {
   public:
    // Creates the tracker for this model. Figure out which operations can be
    // executed right away and cb for each one of them.
    OperandTracker(const ModelBuilder* model, OperationReadyCallback cb);
    // Mark the specified operation as having been processed. The output
    // of the operation now being known, this may make new operations to be
    // able to run.  Call cb for each one of them.
    void markProcessed(uint32_t operationIndex, OperationReadyCallback cb);

   private:
    const ModelBuilder* mModel;
    std::multimap<uint32_t, uint32_t> mOperandToOperations;
    std::vector<uint32_t> mUnknownInputCount;  // For each operation
};

OperandTracker::OperandTracker(const ModelBuilder* model, OperationReadyCallback cb)
    : mModel(model) {
    const auto& operations = mModel->getOperations();
    mUnknownInputCount.resize(operations.size());
    for (uint32_t operationIndex = 0; operationIndex < operations.size(); operationIndex++) {
        const Operation& operation = operations[operationIndex];
        uint32_t count = 0;
        for (uint32_t operandIndex : operation.inputs) {
            auto lifetime = mModel->getOperand(operandIndex).lifetime;
            if (lifetime == OperandLifeTime::TEMPORARY_VARIABLE ||
                lifetime == OperandLifeTime::SUBGRAPH_OUTPUT) {
                count++;
                mOperandToOperations.emplace(operandIndex, operationIndex);
            }
        }
        if (count == 0) {
            cb(operationIndex);
        }
        mUnknownInputCount[operationIndex] = count;
    }
}

void OperandTracker::markProcessed(uint32_t operationIndex, OperationReadyCallback cb) {
    // Mark all its outputs as known.
    const Operation& operation = mModel->getOperations()[operationIndex];
    for (uint32_t operandIndex : operation.outputs) {
        auto range = mOperandToOperations.equal_range(operandIndex);
        for (auto i = range.first; i != range.second; i++) {
            uint32_t& count = mUnknownInputCount[i->second];
            if (--count == 0) {
                cb(i->second);
            }
        }
    }
}

}  // namespace

ExecutionStep::ExecutionStep(ExecutionPlan* plan, uint32_t stepIndex,
                             std::shared_ptr<Device> device)
    : mPlan(plan),
      mIndex(stepIndex),
      mStepModel(),
      mDevice(device),
      mToken(plan->getCacheToken()) {}

// Adds an operand if it has not been added already.
// Sets the index in the step model for the corresponding operand.
int ExecutionStep::addOperand(uint32_t sourceOperandIndex, uint32_t* toOperandIndex,
                              const ModelBuilder& sourceModel, OperandKind kind) {
    // Have we added this operand already?
    auto i = mOperandMap.find(sourceOperandIndex);
    if (i != mOperandMap.end()) {
        CHECK(kind == INPUT);
        *toOperandIndex = i->second;
        return ANEURALNETWORKS_NO_ERROR;
    }

    // First time we add this operand.
    *toOperandIndex = mStepModel.operandCount();
    mOperandMap.emplace(sourceOperandIndex, *toOperandIndex);

    // Add the operand to the step model.
    const Operand& operand = sourceModel.getOperand(sourceOperandIndex);
    ANeuralNetworksOperandType type = {
            .type = static_cast<int32_t>(operand.type),
            .dimensionCount = static_cast<uint32_t>(operand.dimensions.size()),
            .dimensions = operand.dimensions.size() > 0 ? operand.dimensions.data() : nullptr,
            .scale = operand.scale,
            .zeroPoint = operand.zeroPoint,
    };

    int n = mStepModel.addOperand(type);
    if (n != ANEURALNETWORKS_NO_ERROR) {
        LOG(ERROR) << "Previous error occurred when partitioning the graph";
        return n;
    }

    n = copyOperandExtraParams(mStepModel, *toOperandIndex, operand);
    if (n != ANEURALNETWORKS_NO_ERROR) {
        LOG(ERROR) << "Error when copying extra parameters to the operand";
        return n;
    }

    // Sets its value.
    switch (operand.lifetime) {
        case OperandLifeTime::CONSTANT_COPY: {
            const uint8_t* data = sourceModel.getPointerToOperandValue(operand.location.offset);
            n = mStepModel.setOperandValue(*toOperandIndex, data, operand.location.length);
            if (n != ANEURALNETWORKS_NO_ERROR) {
                LOG(ERROR) << "Previous error occurred when partitioning the graph";
                return n;
            }
        } break;
        case OperandLifeTime::CONSTANT_REFERENCE: {
            const Memory* memory = sourceModel.getMemories()[operand.location.poolIndex];
            n = mStepModel.setOperandValueFromMemory(
                    *toOperandIndex, memory, operand.location.offset, operand.location.length);
            if (n != ANEURALNETWORKS_NO_ERROR) {
                LOG(ERROR) << "Previous error occurred when partitioning the graph";
                return n;
            }
        } break;
        case OperandLifeTime::NO_VALUE: {
            n = mStepModel.setOperandValue(*toOperandIndex, nullptr, 0);
            if (n != ANEURALNETWORKS_NO_ERROR) {
                LOG(ERROR) << "Previous error occurred when partitioning the graph";
                return n;
            }
        } break;
        case OperandLifeTime::TEMPORARY_VARIABLE:  // handled similarly to SUBGRAPH_OUTPUT
            if (kind == INPUT) {
                // The first time we've seen this operand is as an
                // input.  That means it must be defined by a
                // different partition, and is an input to this one.
                mTempsAsStepModelInputs.emplace_back(sourceOperandIndex, *toOperandIndex);
            } else {
                // The first time we've seen this operand is as an
                // output.  It may be an input to a different
                // partition, so keep track of it.
                mPlan->recordTemporaryDef(sourceOperandIndex, mIndex);
            }
            break;
        case OperandLifeTime::SUBGRAPH_INPUT:
            mModelInputs.emplace_back(sourceOperandIndex, *toOperandIndex);
            break;
        case OperandLifeTime::SUBGRAPH_OUTPUT:  // handled similarly to TEMPORARY_VARIABLE
            if (kind == INPUT) {
                // The first time we've seen this operand is as an
                // input.  That means it must be defined by a
                // different partition, and is an input to this one.
                mOutputsAsStepModelInputs.emplace_back(sourceOperandIndex, *toOperandIndex);
            } else {
                // The first time we've seen this operand is as an
                // output.
                mModelOutputs.emplace_back(sourceOperandIndex, *toOperandIndex);
            }
            break;
        default:
            CHECK(false);
            break;
    }

    return ANEURALNETWORKS_NO_ERROR;
}

int ExecutionStep::addOperation(int operationIndex, const ModelBuilder& sourceModel) {
    const Operation& operation = sourceModel.getOperation(operationIndex);
    if (mToken.ok()) {
        mToken.update(&operationIndex, sizeof(operationIndex));
    }

    // Convert the input and output operand indexes.
    //
    // We expect operations to be added in topological order.  Therefore:
    //
    // - We may not have seen an input if it is a model input, a
    //   constant, or an operand written by a different partition.
    //
    // - We should not have seen any outputs.
    const uint32_t inputCount = static_cast<uint32_t>(operation.inputs.size());
    const uint32_t outputCount = static_cast<uint32_t>(operation.outputs.size());
    std::vector<uint32_t> inputs(inputCount);
    std::vector<uint32_t> outputs(outputCount);

    auto addOperands = [this, &sourceModel](const hidl_vec<uint32_t>& globalOperands,
                                            std::vector<uint32_t>& localOperands,
                                            OperandKind kind) -> int {
        const uint32_t operandCount = static_cast<uint32_t>(globalOperands.size());
        for (uint32_t i = 0; i < operandCount; i++) {
            uint32_t localOperand = ~0U;
            int n = addOperand(globalOperands[i], &localOperand, sourceModel, kind);
            if (n != ANEURALNETWORKS_NO_ERROR) return n;
            localOperands[i] = localOperand;
        }
        return ANEURALNETWORKS_NO_ERROR;
    };

    int n;
    if ((n = addOperands(operation.inputs, inputs, INPUT)) != ANEURALNETWORKS_NO_ERROR ||
        (n = addOperands(operation.outputs, outputs, OUTPUT)) != ANEURALNETWORKS_NO_ERROR) {
        return n;
    }

    return mStepModel.addOperation(static_cast<uint32_t>(operation.type), inputCount, inputs.data(),
                                   outputCount, outputs.data());
}

void ExecutionStep::mapInputsAndOutputs(
        std::shared_ptr<StepExecutor> executor, const Memory* temporaryMemory,
        const std::map<uint32_t, uint32_t>& sourceOperandToOffsetOfTemporary,
        const std::map<uint32_t, uint32_t>& sourceOperandToInputIndex,
        const std::map<uint32_t, uint32_t>& sourceOperandToOutputIndex) const {
    auto mapInput = [&](uint32_t sourceOperandIndex, uint32_t stepInputIndex) {
        if (auto it = sourceOperandToOffsetOfTemporary.find(sourceOperandIndex);
            it != sourceOperandToOffsetOfTemporary.end()) {
            executor->setInputFromTemporaryMemory(stepInputIndex, temporaryMemory, it->second);
        } else if (auto it = sourceOperandToInputIndex.find(sourceOperandIndex);
                   it != sourceOperandToInputIndex.end()) {
            executor->mapInput(it->second, stepInputIndex);
        } else if (auto it = sourceOperandToOutputIndex.find(sourceOperandIndex);
                   it != sourceOperandToOutputIndex.end()) {
            executor->mapOutputToInput(it->second, stepInputIndex);
        } else {
            CHECK(false) << "Cannot map step input " << stepInputIndex << " from operand "
                         << sourceOperandIndex;
        }
    };
    auto mapOutput = [&](uint32_t sourceOperandIndex, uint32_t stepOutputIndex) {
        if (auto it = sourceOperandToOffsetOfTemporary.find(sourceOperandIndex);
            it != sourceOperandToOffsetOfTemporary.end()) {
            executor->setOutputFromTemporaryMemory(stepOutputIndex, temporaryMemory, it->second);
        } else if (auto it = sourceOperandToOutputIndex.find(sourceOperandIndex);
                   it != sourceOperandToOutputIndex.end()) {
            executor->mapOutput(it->second, stepOutputIndex);
        } else {
            CHECK(false) << "Cannot map step output " << stepOutputIndex << " from operand "
                         << sourceOperandIndex;
        }
    };
    for (uint32_t i = 0, n = mStepModelInputs.size(); i < n; ++i) {
        mapInput(mStepModelInputs[i].first, i);
    }
    for (uint32_t i = 0, n = mStepModelOutputs.size(); i < n; ++i) {
        mapOutput(mStepModelOutputs[i].first, i);
    }
}

void ExecutionPlan::CompoundBody::findTempsAsStepModelOutputs() {
    for (const auto& step : mSteps) {
        for (const auto& input : step->getTempsAsStepModelInputs()) {
            const uint32_t sourceOperandIndex = input.first;
            const auto it = mTemporaryToDefiningStep.find(sourceOperandIndex);
            nnAssert(it != mTemporaryToDefiningStep.end());
            const uint32_t stepIndex = it->second;
            nnAssert(stepIndex < mSteps.size());
            mSteps[stepIndex]->recordTempAsStepModelOutput(sourceOperandIndex);
        }
    }
}

void ExecutionStep::recordTempAsStepModelOutput(uint32_t sourceOperandIndex) {
    const auto it = mOperandMap.find(sourceOperandIndex);
    CHECK(it != mOperandMap.end());
    mTempsAsStepModelOutputs.emplace(sourceOperandIndex, it->second);
}

void ExecutionStep::logStepModel() const {
    VLOG(COMPILATION) << "ExecutionStep::finishStepModel, step " << mIndex;

    auto logRemapEntry = [](std::string& toLog, const std::pair<uint32_t, uint32_t>& e) {
        if (!toLog.empty()) {
            toLog += ", ";
        }
        toLog += "(";
        toLog += std::to_string(e.first);
        toLog += "->";
        toLog += std::to_string(e.second);
        toLog += ")";
    };

    auto logRemapVector = [&logRemapEntry](const char* name, const RemapVectorType& map) {
        std::string toLog;
        for (const auto& e : map) {
            logRemapEntry(toLog, e);
        }
        VLOG(COMPILATION) << name << ": " << toLog;
    };
    auto logRemapSet = [&logRemapEntry](const char* name, const StepModelOutputSetType& set) {
        std::string toLog;
        for (const auto& e : set) {
            logRemapEntry(toLog, e);
        }
        VLOG(COMPILATION) << name << ": " << toLog;
    };

    logRemapVector("step model inputs", mStepModelInputs);
    logRemapVector("step model outputs", mStepModelOutputs);
    logRemapVector("model inputs", mModelInputs);
    logRemapVector("model outputs", mModelOutputs);
    logRemapVector("temps as step model inputs", mTempsAsStepModelInputs);
    logRemapSet("temps as step model outputs", mTempsAsStepModelOutputs);
    logRemapVector("outputs as step model inputs", mOutputsAsStepModelInputs);
}

int ExecutionStep::finishStepModel(const ModelBuilder* mainModel, bool* hasOutputOfUnknownSize,
                                   int32_t executionPreference, int32_t priority) {
    CHECK(mDevice != nullptr);

    for (const auto& stepModelOutput : mTempsAsStepModelOutputs) {
        const Operand& operand = mStepModel.getOperand(stepModelOutput.second);
        if (operand.dimensions.size() == 0) {
            *hasOutputOfUnknownSize = true;
        } else {
            for (uint32_t dimension : operand.dimensions) {
                if (dimension == 0) {
                    *hasOutputOfUnknownSize = true;
                    break;
                }
            }
        }
        if (*hasOutputOfUnknownSize) {
            VLOG(COMPILATION) << "StepModelOutput (operand#" << stepModelOutput.first
                              << " of source graph) has unknown size: " << toString(operand);
        }
    }

    mStepModel.relaxComputationFloat32toFloat16(mainModel->isComputationFloat32RelaxedToFloat16());

    mStepModelInputs.insert(mStepModelInputs.end(), mModelInputs.begin(), mModelInputs.end());
    mStepModelInputs.insert(mStepModelInputs.end(), mTempsAsStepModelInputs.begin(),
                            mTempsAsStepModelInputs.end());
    mStepModelInputs.insert(mStepModelInputs.end(), mOutputsAsStepModelInputs.begin(),
                            mOutputsAsStepModelInputs.end());

    mStepModelOutputs.insert(mStepModelOutputs.end(), mModelOutputs.begin(), mModelOutputs.end());
    mStepModelOutputs.insert(mStepModelOutputs.end(), mTempsAsStepModelOutputs.begin(),
                             mTempsAsStepModelOutputs.end());

    std::map<uint32_t, uint32_t> mainModelOperandToInputIndex;
    for (uint32_t i = 0, n = mainModel->inputCount(); i < n; ++i) {
        mainModelOperandToInputIndex[mainModel->getInputOperandIndex(i)] = i;
    }
    std::map<uint32_t, uint32_t> mainModelOperandToOutputIndex;
    for (uint32_t i = 0, n = mainModel->outputCount(); i < n; ++i) {
        mainModelOperandToOutputIndex[mainModel->getOutputOperandIndex(i)] = i;
    }

    // mInputIndexStepModelToMainModel is ordered by step model input index and relies on
    // mModelInputs being the first inputs, as specified by mStepModelInputs.
    mInputIndexStepModelToMainModel.resize(mModelInputs.size());
    std::transform(mModelInputs.begin(), mModelInputs.end(),
                   mInputIndexStepModelToMainModel.begin(),
                   [&mainModelOperandToInputIndex](auto& e) {
                       uint32_t sourceOperandIndex = e.first;
                       return mainModelOperandToInputIndex[sourceOperandIndex];
                   });

    // mOutputIndexStepModelToMainModel is ordered by step model output index and relies on
    // mModelOutputs being the first outputs, as specified by mStepModelOutputs.
    mOutputIndexStepModelToMainModel.resize(mModelOutputs.size());
    std::transform(mModelOutputs.begin(), mModelOutputs.end(),
                   mOutputIndexStepModelToMainModel.begin(),
                   [&mainModelOperandToOutputIndex](auto& e) {
                       uint32_t sourceOperandIndex = e.first;
                       return mainModelOperandToOutputIndex[sourceOperandIndex];
                   });

    // mOutputsAsStepModelInputsIndexToMainModel is ordered by step model input index and relies on
    // mOutputsAsStepModelInputs being the first outputs.
    mOutputsAsStepModelInputsIndexToMainModel.resize(mOutputsAsStepModelInputs.size());
    std::transform(mOutputsAsStepModelInputs.begin(), mOutputsAsStepModelInputs.end(),
                   mOutputsAsStepModelInputsIndexToMainModel.begin(),
                   [&mainModelOperandToOutputIndex](auto& e) {
                       uint32_t sourceOperandIndex = e.first;
                       return mainModelOperandToOutputIndex[sourceOperandIndex];
                   });

    if (VLOG_IS_ON(COMPILATION)) {
        logStepModel();
    }

    std::vector<uint32_t> inputs(mStepModelInputs.size());
    std::vector<uint32_t> outputs(mStepModelOutputs.size());
    std::transform(mStepModelInputs.begin(), mStepModelInputs.end(), inputs.begin(),
                   [](auto& e) { return e.second; });
    std::transform(mStepModelOutputs.begin(), mStepModelOutputs.end(), outputs.begin(),
                   [](auto& e) { return e.second; });
    NN_RETURN_IF_ERROR(mStepModel.identifyInputsAndOutputs(inputs.size(), inputs.data(),
                                                           outputs.size(), outputs.data()));
    NN_RETURN_IF_ERROR(mStepModel.finish());

    // TODO: Move compilation elsewhere?
    VLOG(COMPILATION) << "ExecutionStep::finishStepModel, compilation on " << mDevice->getName();
    return compile(*mDevice, mStepModel, executionPreference, priority, {}, *mPlan->getCacheDir(),
                   &mToken, &mPreparedStepModel);
}

void ExecutionStep::dump() const {
    if (VLOG_IS_ON(COMPILATION)) {
        VLOG(COMPILATION) << "ExecutionStep#" << mIndex << " for " << mDevice->getName();
        logModelToInfo(mStepModel.makeHidlModel());
    }
}

int ExecutionPlan::CompoundBody::finish(const ModelBuilder* mainModel, int32_t executionPreference,
                                        int32_t priority, const OptionalTimePoint& deadline) {
    CHECK(deadline.getDiscriminator() == OptionalTimePoint::hidl_discriminator::none);
    findTempsAsStepModelOutputs();
    for (const auto& step : mSteps) {
        int n = step->finishStepModel(mainModel, &mHasStepModelOutputOfUnknownSize,
                                      executionPreference, priority);
        if (n != ANEURALNETWORKS_NO_ERROR) {
            VLOG(COMPILATION) << "ExecutionPlan::CompoundBody::finish -- finishStepModel failed";
            return n;
        }
    }
    if (mHasStepModelOutputOfUnknownSize) {
        VLOG(COMPILATION)
                << "ExecutionPlan::CompoundBody::finish -- mHasStepModelOutputOfUnknownSize";
        return ANEURALNETWORKS_OP_FAILED;
    }

    for (uint32_t i = 0, n = mainModel->inputCount(); i < n; ++i) {
        mSourceOperandToInputIndex[mainModel->getInputOperandIndex(i)] = i;
    }
    for (uint32_t i = 0, n = mainModel->outputCount(); i < n; ++i) {
        mSourceOperandToOutputIndex[mainModel->getOutputOperandIndex(i)] = i;
    }

    mSuccessfulFinish = true;
    return ANEURALNETWORKS_NO_ERROR;
}

int ExecutionPlan::SimpleBody::finish(const ModelBuilder*, int32_t executionPreference,
                                      int32_t priority, const OptionalTimePoint& deadline) {
    CHECK(mDevice != nullptr);
    VLOG(COMPILATION) << "ExecutionPlan::SimpleBody::finish, compilation";
    const int n = compile(*mDevice, *mModel, executionPreference, priority, deadline, *mCacheDir,
                          &mToken, &mPreparedModel);
    mSuccessfulFinish = (n == ANEURALNETWORKS_NO_ERROR);
    return n;
}

int ExecutionPlan::finish(const ModelBuilder* mainModel, int32_t executionPreference,
                          int32_t priority, const OptionalTimePoint& deadline) {
    CHECK(mBody != nullptr);
    return mBody->finish(mainModel, executionPreference, priority, deadline);
}

ExecutionPlan::Controller::Controller(const ExecutionPlan* plan, ExecutionBuilder* executionBuilder,
                                      const BurstBuilder* burstBuilder,
                                      std::map<uint32_t, uint32_t> sourceOperandToOffsetOfTemporary,
                                      uint32_t totalSizeOfTemporaries)
    : mPlan(plan),
      mExecutionBuilder(executionBuilder),
      mBurstBuilder(burstBuilder),
      mSourceOperandToOffsetOfTemporary(std::move(sourceOperandToOffsetOfTemporary)),
      mNextStepIndex(0),
      mLastStepIndex(kBadStepIndex) {
    if (totalSizeOfTemporaries) {
        int n;
        std::tie(n, mTemporaries) = MemoryAshmem::create(totalSizeOfTemporaries);
        if (n != ANEURALNETWORKS_NO_ERROR) {
            LOG(ERROR) << "ExecutionPlan::Controller failed to allocate temporaries";
            mNextStepIndex = kBadStepIndex;
        }
    }
}

// Attempt to create a burst object for each PreparedModel/Partition. If the
// burst controller object cannot be made, return a nullptr in its place to
// indicate the regular execution path should be used. This can occur either
// because PreparedModel was nullptr (cpu was best choice), or because the
// IPreparedModel was of insufficient version or failed to configure the burst.
std::vector<std::shared_ptr<ExecutionBurstController>> ExecutionPlan::makeBursts(
        int preference) const {
    switch (mState) {
        // burst object for each partition in the compound case
        case COMPOUND: {
            std::vector<std::shared_ptr<ExecutionBurstController>> bursts;
            bursts.reserve(compound()->mSteps.size());
            for (const auto& step : compound()->mSteps) {
                if (const auto preparedModel = step->getPreparedStepModel()) {
                    const bool preferPowerOverLatency =
                            (preference == ANEURALNETWORKS_PREFER_LOW_POWER);
                    bursts.push_back(
                            preparedModel->configureExecutionBurst(preferPowerOverLatency));
                } else {
                    bursts.push_back(nullptr);
                }
            }
            return bursts;
        }
        // single burst object for the simple case
        case SIMPLE: {
            std::vector<std::shared_ptr<ExecutionBurstController>> burst;
            auto simpleBody = simple();
            if (const auto preparedModel = simpleBody->mPreparedModel) {
                const bool preferPowerOverLatency =
                        (preference == ANEURALNETWORKS_PREFER_LOW_POWER);
                burst.push_back(preparedModel->configureExecutionBurst(preferPowerOverLatency));
            } else {
                burst.push_back(nullptr);
            }
            return burst;
        }
        // no burst objects made
        default:
            return {};
    }
}

std::shared_ptr<ExecutionPlan::Controller> ExecutionPlan::makeController(
        ExecutionBuilder* executionBuilder, const BurstBuilder* burstBuilder) const {
    CHECK(isValid());
    // Create the layout for a Memory object big enough for to hold
    // every TEMPORARY in the source model that is live across
    // partition boundaries.
    //
    // TODO: Rethink this approach for managing temporaries.  Some
    // alternatives:
    //
    // 1) Adopt a memory layout scheme analogous to stack allocation,
    // where objects of non-overlapping lifetime can occupy the same
    // storage.  We would still have a single Memory object in this
    // case.
    //
    // 2) Do something like what CpuExecutor does, and do allocations
    // and deallocations on the fly (during execution) before first
    // reference and after last reference, respectively.  This would
    // mean having one Memory object per TEMPORARY; or, in a more
    // complicated implementation, one Memory object per set of
    // temporaries that have the same lifetime.  Note that the Android
    // system limits the number of shared memory objects, which are
    // what our Memory objects represent.
    //
    uint32_t totalSizeOfTemporaries = 0;
    std::map<uint32_t, uint32_t> sourceOperandToOffsetOfTemporary;
    if (mState == COMPOUND) {
        const ModelBuilder* mainModel = executionBuilder->getModel();
        for (const auto& step : compound()->mSteps) {
            for (const auto& output : step->getTempsAsStepModelOutputs()) {
                const uint32_t mainModelOperandIndex = output.first;
                const Operand& mainModelOperand = mainModel->getOperand(mainModelOperandIndex);
                const uint32_t size = TypeManager::get()->getSizeOfData(mainModelOperand);
                totalSizeOfTemporaries += alignBytesNeeded(totalSizeOfTemporaries, size);
                sourceOperandToOffsetOfTemporary.emplace(mainModelOperandIndex,
                                                         totalSizeOfTemporaries);
                totalSizeOfTemporaries += size;
            }
        }
        if (VLOG_IS_ON(EXECUTION)) {
            for (const auto& io : sourceOperandToOffsetOfTemporary) {
                VLOG(EXECUTION) << "temp: source operand index = " << io.first
                                << ", offset = " << io.second;
            }
        }
    }
    return std::shared_ptr<Controller>(new Controller(this, executionBuilder, burstBuilder,
                                                      std::move(sourceOperandToOffsetOfTemporary),
                                                      totalSizeOfTemporaries));
}

// TODO: Find a better way to provide this functionality.
int ExecutionPlan::fallback(std::shared_ptr<Controller> controller,
                            std::shared_ptr<StepExecutor>* executor) const {
    *executor = nullptr;

    VLOG(EXECUTION) << "ExecutionPlan::fallback(" << controller << ", " << executor
                    << "): mNextStepIndex = " << controller->mNextStepIndex;

    if (controller->mLastStepIndex == Controller::kBadStepIndex) {
        // We haven't called next().
        return ANEURALNETWORKS_OP_FAILED;
    }

    if (controller->mNextStepIndex == Controller::kBadStepIndex) {
        // The last call to next() did not produce an executor.
        return ANEURALNETWORKS_OP_FAILED;
    }

    controller->mNextStepIndex = controller->mLastStepIndex;
    return next(controller, executor);
}

int ExecutionPlan::next(std::shared_ptr<Controller> controller,
                        std::shared_ptr<StepExecutor>* executor,
                        std::shared_ptr<ExecutionBurstController>* burstController) const {
    controller->mLastStepIndex = controller->mNextStepIndex;
    *executor = nullptr;
    if (burstController != nullptr) {
        *burstController = nullptr;
    }

    VLOG(EXECUTION) << "ExecutionPlan::next(" << SHOW_IF_DEBUG(controller << ", " << executor)
                    << "): mNextStepIndex = " << controller->mNextStepIndex;

    if (controller->mNextStepIndex == Controller::kBadStepIndex) {
        return ANEURALNETWORKS_OP_FAILED;
    }

    if (mState == EMPTY) {
        nnAssert(controller->mNextStepIndex == 0);  // end
        controller->mNextStepIndex = Controller::kBadStepIndex;
        return ANEURALNETWORKS_NO_ERROR;
    }

    if (mState == SIMPLE) {
        if (controller->mNextStepIndex == 0) {
            // First (and only) step.
            auto simpleBody = simple();
            *executor = std::make_shared<StepExecutor>(controller->mExecutionBuilder,
                                                       simpleBody->mModel, simpleBody->mDevice,
                                                       simpleBody->mPreparedModel);
            (*executor)->mapInputsAndOutputsTrivially();
            if (burstController != nullptr && controller->mBurstBuilder != nullptr) {
                *burstController = controller->mBurstBuilder->getControllerAt(0);
            }
            controller->mNextStepIndex = 1;
            return ANEURALNETWORKS_NO_ERROR;
        }

        nnAssert(controller->mNextStepIndex == 1);  // end
        controller->mNextStepIndex = Controller::kBadStepIndex;
        return ANEURALNETWORKS_NO_ERROR;
    }

    auto compoundBody = compound();

    if (controller->mNextStepIndex == compoundBody->mSteps.size()) {
        // end
        controller->mNextStepIndex = Controller::kBadStepIndex;
        return ANEURALNETWORKS_NO_ERROR;
    }

    const auto step = compoundBody->mSteps[controller->mNextStepIndex];
    *executor = std::make_shared<StepExecutor>(controller->mExecutionBuilder, step->getStepModel(),
                                               step->getDevice(), step->getPreparedStepModel());
    (*executor)->setExecutionStep(step);
    step->mapInputsAndOutputs(*executor, controller->mTemporaries.get(),
                              controller->mSourceOperandToOffsetOfTemporary,
                              compoundBody->mSourceOperandToInputIndex,
                              compoundBody->mSourceOperandToOutputIndex);
    if (burstController != nullptr && controller->mBurstBuilder != nullptr) {
        *burstController = controller->mBurstBuilder->getControllerAt(controller->mNextStepIndex);
    }

    controller->mNextStepIndex++;
    return ANEURALNETWORKS_NO_ERROR;
}

std::shared_ptr<ExecutionStep> ExecutionPlan::createNewStep(const std::shared_ptr<Device> device) {
    nnAssert(mState != SIMPLE);
    if (mState == EMPTY) {
        mBody = new CompoundBody();
        mState = COMPOUND;
    }
    auto& steps = compound()->mSteps;
    auto step = std::make_shared<ExecutionStep>(this, steps.size(), device);
    steps.push_back(step);
    return step;
}

void ExecutionPlan::becomeSingleStep(const std::shared_ptr<Device> device,
                                     const ModelBuilder* model) {
    nnAssert(mState == EMPTY);
    mBody = new SimpleBody(device, model, mCacheDir, mToken);
    mState = SIMPLE;
}

void ExecutionPlan::recordTemporaryDef(uint32_t sourceOperandIndex, uint32_t stepIndex) {
    auto [it, isNew] = compound()->mTemporaryToDefiningStep.emplace(sourceOperandIndex, stepIndex);
    CHECK(isNew) << "Step " << stepIndex << " redefines temporary operand "
                 << toString(sourceOperandIndex) << " already defined by step " << it->second;
}

void ExecutionPlan::dump() const {
    if (mBody) {
        mBody->dump();
    } else {
        VLOG(COMPILATION) << "EMPTY";
    }
}

void ExecutionPlan::reset() {
    if (mBody) {
        delete mBody;
        mBody = nullptr;
    }
    mState = EMPTY;
}

bool ExecutionPlan::isSimpleCpu() const {
    return isSimple() && simple()->mDevice == DeviceManager::getCpuDevice();
}

ExecutionPlan::Kind ExecutionPlan::forTest_getKind() const {
    switch (mState) {
        case EMPTY:
            return Kind::EMPTY;
        case SIMPLE:
            nnAssert(mBody);
            return mBody->mSuccessfulFinish ? Kind::SIMPLE : Kind::ERROR;
        case COMPOUND:
            nnAssert(mBody);
            return mBody->mSuccessfulFinish ? Kind::COMPOUND : Kind::ERROR;
        default:
            nnAssert(!"unexpected state");
            return Kind::ERROR;
    }
}

std::shared_ptr<const Device> ExecutionPlan::forTest_simpleGetDevice() const {
    return simple()->mDevice;
}

const std::vector<std::shared_ptr<ExecutionStep>>& ExecutionPlan::forTest_compoundGetSteps() const {
    return compound()->mSteps;
}

bool ExecutionPlan::forTest_hasStepModelOutputsOfUnknownSize() const {
    return mBody->hasStepModelOutputsOfUnknownSize();
}

const uint8_t* ExecutionPlan::forTest_simpleGetCacheToken() const {
    return simple()->mToken.getCacheToken();
}

void ExecutionPlan::SimpleBody::dump() const {
    VLOG(COMPILATION) << "SIMPLE for " << mDevice->getName();
}

void ExecutionPlan::CompoundBody::dump() const {
    for (const auto& step : mSteps) {
        step->dump();
    }
}

void ExecutionPlan::SimpleBody::forEachStepRoleOfInput(uint32_t index,
                                                       const StepRoleCallback& callback) const {
    callback(mPreparedModel.get(), IOType::INPUT, index);
}

void ExecutionPlan::SimpleBody::forEachStepRoleOfOutput(uint32_t index,
                                                        const StepRoleCallback& callback) const {
    callback(mPreparedModel.get(), IOType::OUTPUT, index);
}

// Map an input role of the parent model to the input/output roles in the step models:
// - An input role of the parent model may be used as an input of multiple step-models.
// - An input role of the parent model should not be used as an output of any step-model.
void ExecutionPlan::CompoundBody::forEachStepRoleOfInput(uint32_t index,
                                                         const StepRoleCallback& callback) const {
    for (const auto& step : mSteps) {
        // Model input as step-model input.
        const auto& inputMapping = step->getInputIndexStepModelToMainModel();
        for (uint32_t i = 0; i < inputMapping.size(); i++) {
            if (inputMapping[i] == index) {
                callback(step->getPreparedStepModel().get(), IOType::INPUT, i);
            }
        }
    }
}

// Map an output role of the parent model to the input/output roles in the step models:
// - An output role of the parent model may only be used as one output of one single step-model.
// - An output role of the parent model may be used as an input of multiple step-models.
void ExecutionPlan::CompoundBody::forEachStepRoleOfOutput(uint32_t index,
                                                          const StepRoleCallback& callback) const {
    bool found = false;
    for (const auto& step : mSteps) {
        // Model output as step-model output.
        if (!found) {
            const auto& outputMapping = step->getOutputIndexStepModelToMainModel();
            for (uint32_t i = 0; i < outputMapping.size(); i++) {
                if (outputMapping[i] == index) {
                    callback(step->getPreparedStepModel().get(), IOType::OUTPUT, i);
                    found = true;
                    break;
                }
            }
        }
        // Model output as step-model input.
        const auto& inputToOutputMapping = step->getOutputsAsStepModelInputsIndexToMainModel();
        for (uint32_t i = 0; i < inputToOutputMapping.size(); i++) {
            if (inputToOutputMapping[i] == index) {
                callback(step->getPreparedStepModel().get(), IOType::INPUT, i);
            }
        }
    }
}

int ModelBuilder::partitionTheWork(const std::vector<std::shared_ptr<Device>>& devices,
                                   uint32_t preference, uint32_t priority,
                                   const OptionalTimePoint& deadline, ExecutionPlan* plan) const {
    // This function uses a heuristic approach to partitioning the graph.
    // It should be good enough for the first release.

    const size_t deviceCount = devices.size();
    const size_t operationCount = mOperations.size();

    VLOG(COMPILATION) << "ModelBuilder::partitionTheWork: deviceCount = " << deviceCount
                      << ", operationCount = " << operationCount;

    // Figure out where each operation will best execute.
    // The value of the vector is the index in the devices vector.
    std::vector<int> bestDeviceForOperation(operationCount);
    NN_RETURN_IF_ERROR(
            findBestDeviceForEachOperation(preference, devices, &bestDeviceForOperation));

    // If one device will run all the operations, we don't need to split the work.
    if (std::adjacent_find(bestDeviceForOperation.begin(), bestDeviceForOperation.end(),
                           std::not_equal_to<int>()) == bestDeviceForOperation.end()) {
        const int bestDeviceIndex = bestDeviceForOperation[0];
        VLOG(COMPILATION) << "ModelBuilder::partitionTheWork: only one best device: "
                          << bestDeviceIndex << " = " << devices[bestDeviceIndex]->getName();
        plan->becomeSingleStep(devices[bestDeviceIndex], this);
        return plan->finish(this, preference, priority, deadline);
    }

    // No easy solution, we need to split the work.

    // We keep track of the operations that are ready to run for each device.
    std::vector<std::queue<uint32_t>> perDeviceQueue(deviceCount);

    // This helper function enqueues the operation on the appropriate queue.
    auto enqueueOnAppropriateDevice = [&](uint32_t operationIndex) {
        int deviceIndex = bestDeviceForOperation[operationIndex];
        perDeviceQueue[deviceIndex].push(operationIndex);
        VLOG(COMPILATION) << "enqueueOnAppropriateDevice " << operationIndex << " onto "
                          << deviceIndex;
    };

    // This helper function finds a device that has operations ready to process.
    // We start by looking at the CPU. We do this to try to maximize the
    // size of the graph we'll send to non-CPU devices. If the CPU runs first,
    // it will have the chance to prepare more of the inputs required by the
    // other devices. This function returns -1 if all queues are empty.
    auto findNextDeviceToProcess = [&]() -> int {
        for (int i = deviceCount - 1; i >= 0; i--) {
            if (!perDeviceQueue[i].empty()) {
                return i;
            }
        }
        return -1;
    };

    OperandTracker tracker(this, enqueueOnAppropriateDevice);
    // For each iteration of this loop, we'll create an execution step.
    while (true) {
        // Find the device we'll do this step for.
        int deviceIndex = findNextDeviceToProcess();
        VLOG(COMPILATION) << "findNextDeviceToProcess: " << deviceIndex;
        if (deviceIndex < 0) {
            break;
        }

        // Assign as much as possible to this device.
        std::shared_ptr<ExecutionStep> step = plan->createNewStep(devices[deviceIndex]);
        auto& queue = perDeviceQueue[deviceIndex];
        while (!queue.empty()) {
            uint32_t operationIndex = queue.front();
            queue.pop();
            int n = step->addOperation(operationIndex, *this);
            if (n != ANEURALNETWORKS_NO_ERROR) {
                LOG(ERROR) << "failed to add operation " << operationIndex << " to step";
                return n;
            }
            tracker.markProcessed(operationIndex, enqueueOnAppropriateDevice);
        }
    }

    int n = plan->finish(this, preference, priority, deadline);
    if (VLOG_IS_ON(COMPILATION)) {
        VLOG(COMPILATION) << "ModelBuilder::partitionTheWork: source model: ";
        logModelToInfo(makeHidlModel());
        plan->dump();
    }
    return n;
}

PerformanceInfo ModelBuilder::getPerformanceInfo(const std::shared_ptr<Device> device,
                                                 uint32_t operationIndex) const {
    const Operation& operation = getOperation(operationIndex);
    // TODO This assumes that the type is dictated by the first operand. This is
    // currently the case but is not a safe assumption to make in the long term.
    const uint32_t operandIndex = operation.inputs[0];
    const OperandType operandType = mOperands[operandIndex].type;
    switch (operandType) {
        case OperandType::FLOAT32:
            if (mRelaxComputationFloat32toFloat16) {
                return device->getRelaxedFloat32toFloat16PerformanceScalar();
            }
            break;
        case OperandType::TENSOR_FLOAT32:
            if (mRelaxComputationFloat32toFloat16) {
                return device->getRelaxedFloat32toFloat16PerformanceTensor();
            }
            break;
        default:
            break;
    }

    return device->getPerformance(operandType);
}

namespace {

// This class determines whether a given device can execute a given operation
class CanDo {
   public:
    CanDo() {}

    void initialize(const MetaModel& metaModel, std::shared_ptr<Device> device) {
        mSupportsOperationByIndex = device->getSupportedOperations(metaModel);
    }

    bool check(size_t operationIndex) const { return mSupportsOperationByIndex[operationIndex]; }

   private:
    std::vector<bool> mSupportsOperationByIndex;
};

}  // anonymous namespace

int ModelBuilder::findBestDeviceForEachOperation(
        uint32_t preference, const std::vector<std::shared_ptr<Device>>& devices,
        std::vector<int>* bestDeviceForOperation) const {
    const MetaModel metaModel(makeHidlModel(), DeviceManager::get()->strictSlicing());

    const size_t deviceCount = devices.size();
    std::vector<CanDo> canDo(deviceCount);
    for (size_t deviceIndex = 0; deviceIndex < deviceCount; deviceIndex++) {
        canDo[deviceIndex].initialize(metaModel, devices[deviceIndex]);
    }

    // Figure out the best driver for each operation.
    const size_t operationCount = mOperations.size();
    for (size_t operationIndex = 0; operationIndex < operationCount; operationIndex++) {
        // Find which device, including CPU fallback, gives the best performance for this operation.
        int bestChoice = -1;
        float bestPerfVal = 0.0;  // Do not check bestPerfVal if bestChoice < 0.
        for (size_t deviceIndex = 0; deviceIndex < deviceCount; deviceIndex++) {
            const auto& device = devices[deviceIndex];
            if (canDo[deviceIndex].check(operationIndex)) {
                const PerformanceInfo perf = getPerformanceInfo(device, operationIndex);
                const float perfVal =
                        (preference == ANEURALNETWORKS_PREFER_LOW_POWER ? perf.powerUsage
                                                                        : perf.execTime);
                if (bestChoice < 0 || perfVal < bestPerfVal ||
                    (perfVal == bestPerfVal && device == DeviceManager::getCpuDevice())) {
                    bestChoice = deviceIndex;
                    bestPerfVal = perfVal;
                }
            } else {
                // Somewhat noisy logging, but only place where the user of
                // NNAPI can get feedback on why an operation was not run on a
                // specific device.
                // Logs O(operationCount * deviceCount) times, but
                // typically deviceCount is very small.
                VLOG(COMPILATION) << "Device " << device->getName() << " can't do operation "
                                  << toString(getOperation(operationIndex).type);
            }
        }
        if (bestChoice < 0) {
            LOG(ERROR) << "No driver can do the op";
            return ANEURALNETWORKS_BAD_DATA;
        }

        (*bestDeviceForOperation)[operationIndex] = bestChoice;
        VLOG(COMPILATION) << "ModelBuilder::findBestDeviceForEachOperation("
                          << toString(getOperation(operationIndex).type) << ") = " << bestChoice
                          << " (" << devices[bestChoice]->getName() << ")";
    }
    return ANEURALNETWORKS_NO_ERROR;
}

}  // namespace nn
}  // namespace android
