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

#define LOG_TAG "Manager"

#include "Manager.h"

#include <android/hidl/manager/1.2/IServiceManager.h>
#include <build/version.h>
#include <hidl/HidlTransportSupport.h>
#include <hidl/ServiceManagement.h>

#include <algorithm>
#include <functional>
#include <memory>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

#include "Callbacks.h"
#include "CpuExecutor.h"
#include "ExecutionBurstController.h"
#include "HalInterfaces.h"
#include "Memory.h"
#include "MetaModel.h"
#include "ModelArgumentInfo.h"
#include "Tracing.h"
#include "Utils.h"
#include "VersionedInterfaces.h"

namespace android {
namespace nn {

using namespace hal;

const Timing kNoTiming = {.timeOnDevice = UINT64_MAX, .timeInDriver = UINT64_MAX};

bool Device::isCachingSupported() const {
    auto pair = getNumberOfCacheFilesNeeded();
    // Caching is supported if either of numModelCache or numDataCache is greater than 0.
    return pair.first > 0 || pair.second > 0;
}

// A Device with actual underlying driver
class DriverDevice : public Device {
   public:
    DriverDevice(std::string name, const sp<V1_0::IDevice>& device);

    // Returns true if succesfully initialized.
    bool initialize();

    const char* getName() const override { return mName.c_str(); }
    const char* getVersionString() const override { return mVersionString.c_str(); }
    int64_t getFeatureLevel() const override { return mInterface->getFeatureLevel(); }
    int32_t getType() const override { return mInterface->getType(); }
    hidl_vec<Extension> getSupportedExtensions() const override;
    void getSupportedOperations(const MetaModel& metaModel,
                                hidl_vec<bool>* supportedOperations) const override;
    PerformanceInfo getPerformance(OperandType type) const override;
    PerformanceInfo getRelaxedFloat32toFloat16PerformanceScalar() const override {
        return mCapabilities.relaxedFloat32toFloat16PerformanceScalar;
    }
    PerformanceInfo getRelaxedFloat32toFloat16PerformanceTensor() const override {
        return mCapabilities.relaxedFloat32toFloat16PerformanceTensor;
    }
    std::pair<uint32_t, uint32_t> getNumberOfCacheFilesNeeded() const override {
        return mNumCacheFiles;
    }

    std::pair<int, std::shared_ptr<PreparedModel>> prepareModel(
            const Model& hidlModel, ExecutionPreference executionPreference,
            const hidl_vec<hidl_handle>& modelCache, const hidl_vec<hidl_handle>& dataCache,
            const CacheToken& token) const override;
    std::pair<int, std::shared_ptr<PreparedModel>> prepareModelFromCache(
            const hidl_vec<hidl_handle>& modelCache, const hidl_vec<hidl_handle>& dataCache,
            const CacheToken& token) const override;

   private:
    std::string mName;
    std::string mVersionString;
    const std::shared_ptr<VersionedIDevice> mInterface;
    Capabilities mCapabilities;
    hidl_vec<Extension> mSupportedExtensions;
    std::pair<uint32_t, uint32_t> mNumCacheFiles;

#ifdef NN_DEBUGGABLE
    // For debugging: behavior of IDevice::getSupportedOperations for SampleDriver.
    // 0 - all operations reported by IDevice::getSupportedOperations() supported
    // 1 - some operations reported by IDevice::getSupportedOperations() supported
    uint32_t mSupported = 0;
#endif  // NN_DEBUGGABLE
};

// A PreparedModel with underlying IPreparedModel instance return by actual driver.
class DriverPreparedModel : public PreparedModel {
   public:
    DriverPreparedModel(const std::shared_ptr<VersionedIPreparedModel>& preparedModel)
        : mPreparedModel(preparedModel) {}

    std::tuple<int, std::vector<OutputShape>, Timing> execute(
            const std::vector<ModelArgumentInfo>& inputs,
            const std::vector<ModelArgumentInfo>& outputs, const MemoryTracker& memories,
            const std::shared_ptr<ExecutionBurstController>& burstController,
            MeasureTiming measure) const override;

    std::shared_ptr<ExecutionBurstController> configureExecutionBurst(
            bool blocking) const override {
        return mPreparedModel->configureExecutionBurst(blocking);
    }

   private:
    const std::shared_ptr<VersionedIPreparedModel> mPreparedModel;
};

DriverDevice::DriverDevice(std::string name, const sp<V1_0::IDevice>& device)
    : mName(std::move(name)), mInterface(VersionedIDevice::create(mName, device)) {}

// TODO: handle errors from initialize correctly
bool DriverDevice::initialize() {
#ifdef NN_DEBUGGABLE
    static const char samplePrefix[] = "sample";

    mSupported = (mName.substr(0, sizeof(samplePrefix) - 1) == samplePrefix)
                         ? getProp("debug.nn.sample.supported")
                         : 0;
#endif  // NN_DEBUGGABLE

    ErrorStatus status = ErrorStatus::GENERAL_FAILURE;

    if (mInterface == nullptr) {
        LOG(ERROR) << "DriverDevice contains invalid interface object.";
        return false;
    }

    std::tie(status, mCapabilities) = mInterface->getCapabilities();
    if (status != ErrorStatus::NONE) {
        LOG(ERROR) << "IDevice::getCapabilities returned the error " << toString(status);
        return false;
    }
    VLOG(MANAGER) << "Capab " << toString(mCapabilities);

    std::tie(status, mVersionString) = mInterface->getVersionString();
    // TODO(miaowang): add a validation test case for in case of error.
    if (status != ErrorStatus::NONE) {
        LOG(ERROR) << "IDevice::getVersionString returned the error " << toString(status);
        return false;
    }

    std::tie(status, mSupportedExtensions) = mInterface->getSupportedExtensions();
    if (status != ErrorStatus::NONE) {
        LOG(ERROR) << "IDevice::getSupportedExtensions returned the error " << toString(status);
        return false;
    }

    std::tie(status, mNumCacheFiles.first, mNumCacheFiles.second) =
            mInterface->getNumberOfCacheFilesNeeded();
    if (status != ErrorStatus::NONE) {
        LOG(WARNING) << "IDevice::getNumberOfCacheFilesNeeded returned the error "
                     << toString(status);
        mNumCacheFiles = {0, 0};
    }
    if (mNumCacheFiles.first > static_cast<uint32_t>(Constant::MAX_NUMBER_OF_CACHE_FILES) ||
        mNumCacheFiles.second > static_cast<uint32_t>(Constant::MAX_NUMBER_OF_CACHE_FILES)) {
        LOG(WARNING)
                << "IDevice::getNumberOfCacheFilesNeeded returned invalid number of cache files "
                   "numModelCache = "
                << mNumCacheFiles.first << ", numDataCache = " << mNumCacheFiles.second;
        mNumCacheFiles = {0, 0};
    }
    return true;
}

hidl_vec<Extension> DriverDevice::getSupportedExtensions() const {
    return mSupportedExtensions;
}

void DriverDevice::getSupportedOperations(const MetaModel& metaModel,
                                          hidl_vec<bool>* outSupportedOperations) const {
    // Query the driver for what it can do.
    ErrorStatus status = ErrorStatus::GENERAL_FAILURE;
    hidl_vec<bool> supportedOperations;
    std::tie(status, supportedOperations) = mInterface->getSupportedOperations(metaModel);

    const Model& hidlModel = metaModel.getModel();
    if (status != ErrorStatus::NONE) {
        LOG(ERROR) << "IDevice::getSupportedOperations returned the error " << toString(status);
        // Set the supported operation vectors to all false, so we won't use this driver.
        outSupportedOperations->resize(hidlModel.operations.size());
        std::fill(outSupportedOperations->begin(), outSupportedOperations->end(), false);
        return;
    }
    if (supportedOperations.size() != hidlModel.operations.size()) {
        LOG(ERROR) << "IDevice::getSupportedOperations returned a vector of length "
                   << supportedOperations.size() << " when expecting "
                   << hidlModel.operations.size();
        // Set the supported operation vectors to all false, so we won't use this driver.
        outSupportedOperations->resize(hidlModel.operations.size());
        std::fill(outSupportedOperations->begin(), outSupportedOperations->end(), false);
        return;
    }

    *outSupportedOperations = std::move(supportedOperations);

#ifdef NN_DEBUGGABLE
    if (mSupported != 1) {
        return;
    }

    const uint32_t baseAccumulator = std::hash<std::string>{}(mName);
    for (size_t operationIndex = 0; operationIndex < outSupportedOperations->size();
         operationIndex++) {
        if (!(*outSupportedOperations)[operationIndex]) {
            continue;
        }

        uint32_t accumulator = baseAccumulator;
        const Operation& operation = hidlModel.operations[operationIndex];
        accumulator ^= static_cast<uint32_t>(operation.type);
        auto accumulateOperands = [&hidlModel, &accumulator](const hidl_vec<uint32_t>& operands) {
            for (uint32_t operandIndex : operands) {
                const Operand& operand = hidlModel.operands[operandIndex];
                accumulator ^= static_cast<uint32_t>(operand.type);
                accumulator ^= operand.dimensions.size();
                for (uint32_t dimension : operand.dimensions) {
                    accumulator ^= dimension;
                    if (operand.lifetime == OperandLifeTime::CONSTANT_COPY ||
                        operand.lifetime == OperandLifeTime::CONSTANT_REFERENCE) {
                        accumulator ^= 1;
                    }
                }
            }
        };
        accumulateOperands(operation.inputs);
        accumulateOperands(operation.outputs);
        if (accumulator & 1) {
            (*outSupportedOperations)[operationIndex] = false;
        }
    }
#endif  // NN_DEBUGGABLE
}

PerformanceInfo DriverDevice::getPerformance(OperandType type) const {
    return lookup(mCapabilities.operandPerformance, type);
}

static std::pair<int, std::shared_ptr<PreparedModel>> prepareModelCheck(
        ErrorStatus status, const std::shared_ptr<VersionedIPreparedModel>& preparedModel,
        const char* prepareName, const char* serviceName) {
    if (status != ErrorStatus::NONE) {
        LOG(ERROR) << prepareName << " on " << serviceName << " failed: "
                   << "prepareReturnStatus=" << toString(status);
        return {ANEURALNETWORKS_OP_FAILED, nullptr};
    }
    if (preparedModel == nullptr) {
        LOG(ERROR) << prepareName << " on " << serviceName << " failed: preparedModel is nullptr";
        return {ANEURALNETWORKS_OP_FAILED, nullptr};
    }

    return {ANEURALNETWORKS_NO_ERROR, std::make_shared<DriverPreparedModel>(preparedModel)};
}

std::pair<int, std::shared_ptr<PreparedModel>> DriverDevice::prepareModel(
        const Model& hidlModel, ExecutionPreference executionPreference,
        const hidl_vec<hidl_handle>& modelCache, const hidl_vec<hidl_handle>& dataCache,
        const CacheToken& token) const {
    // Note that some work within VersionedIDevice will be subtracted from the IPC layer
    NNTRACE_FULL(NNTRACE_LAYER_IPC, NNTRACE_PHASE_COMPILATION, "prepareModel");

    const auto [status, preparedModel] =
            mInterface->prepareModel(hidlModel, executionPreference, modelCache, dataCache, token);

    return prepareModelCheck(status, preparedModel, "prepareModel", getName());
}

std::pair<int, std::shared_ptr<PreparedModel>> DriverDevice::prepareModelFromCache(
        const hidl_vec<hidl_handle>& modelCache, const hidl_vec<hidl_handle>& dataCache,
        const CacheToken& token) const {
    // Note that some work within VersionedIDevice will be subtracted from the IPC layer
    NNTRACE_FULL(NNTRACE_LAYER_IPC, NNTRACE_PHASE_COMPILATION, "prepareModelFromCache");

    const auto [status, preparedModel] =
            mInterface->prepareModelFromCache(modelCache, dataCache, token);

    return prepareModelCheck(status, preparedModel, "prepareModelFromCache", getName());
}

// Convert ModelArgumentInfo to HIDL RequestArgument. For pointer arguments, use the location
// information in ptrArgsLocations.
static void setRequestArgumentArray(const std::vector<ModelArgumentInfo>& argumentInfos,
                                    const std::vector<DataLocation>& ptrArgsLocations,
                                    hidl_vec<RequestArgument>* ioInfos) {
    size_t count = argumentInfos.size();
    ioInfos->resize(count);
    uint32_t ptrArgsIndex = 0;
    for (size_t i = 0; i < count; i++) {
        const auto& info = argumentInfos[i];
        (*ioInfos)[i] = {
                .hasNoValue = info.state == ModelArgumentInfo::HAS_NO_VALUE,
                .location = info.state == ModelArgumentInfo::POINTER
                                    ? ptrArgsLocations[ptrArgsIndex++]
                                    : info.locationAndLength,
                .dimensions = info.dimensions,
        };
    }
}

// Figures out how to place each of the input or outputs in a buffer. This just
// does the layout and memory allocation, it does not copy data.  Aligns each
// input a bit.
static std::tuple<int, std::unique_ptr<MemoryAshmem>, std::vector<DataLocation>>
allocatePointerArgumentsToPool(const std::vector<ModelArgumentInfo>& args,
                               MemoryTracker* memories) {
    CHECK(memories != nullptr);
    std::vector<DataLocation> ptrArgsLocations;
    const uint32_t nextPoolIndex = memories->size();
    int64_t total = 0;
    for (const auto& info : args) {
        if (info.state == ModelArgumentInfo::POINTER) {
            const DataLocation& loc = info.locationAndLength;
            // TODO Good enough alignment?
            total += alignBytesNeeded(static_cast<uint32_t>(total), loc.length);
            ptrArgsLocations.push_back({.poolIndex = nextPoolIndex,
                                        .offset = static_cast<uint32_t>(total),
                                        .length = loc.length});
            total += loc.length;
        }
    };
    if (total > 0xFFFFFFFF) {
        LOG(ERROR) << "allocatePointerArgumentsToPool: ANeuralNetworksExecution: Size of all "
                      "inputs or outputs exceeds 2^32.";
        return {ANEURALNETWORKS_BAD_DATA, nullptr, std::vector<DataLocation>{}};
    }
    if (total <= 0) {
        return {ANEURALNETWORKS_NO_ERROR, nullptr, std::vector<DataLocation>{}};
    }
    auto [n, memory] = MemoryAshmem::create(total);
    if (n != ANEURALNETWORKS_NO_ERROR) {
        return {n, nullptr, std::vector<DataLocation>{}};
    }
    memories->add(memory.get());
    return {ANEURALNETWORKS_NO_ERROR, std::move(memory), std::move(ptrArgsLocations)};
}

// Perform computation on an actual HIDL driver.
//
// Because HIDL cannot take raw pointers, two separate memory pools will be allocated for inputs and
// outputs specified by pointers. The input pointer data will be copied to the input pool prior to
// execution, and the output pointer data will be copied out from the output pool after the
// execution.
//
// The HIDL invocation will choose between sync/async execution according to
// DeviceManager::mSyncExecHal.
std::tuple<int, std::vector<OutputShape>, Timing> DriverPreparedModel::execute(
        const std::vector<ModelArgumentInfo>& inputs, const std::vector<ModelArgumentInfo>& outputs,
        const MemoryTracker& memories,
        const std::shared_ptr<ExecutionBurstController>& burstController,
        MeasureTiming measure) const {
    NNTRACE_RT(NNTRACE_PHASE_INPUTS_AND_OUTPUTS, "DriverPreparedModel::execute");

    // Make a copy of the memory tracker as we will append memory pools for pointer arguments.
    MemoryTracker localMemories = memories;

    // We separate the input & output pools so accelerators only need to copy
    // the contents of the input pools. We could also use it to set protection
    // on read only memory but that's not currently done.

    // Layout the input and output data
    const auto [n1, inputPtrArgsMemory, inputPtrArgsLocations] =
            allocatePointerArgumentsToPool(inputs, &localMemories);
    if (n1 != ANEURALNETWORKS_NO_ERROR) {
        return {n1, {}, kNoTiming};
    }
    const auto [n2, outputPtrArgsMemory, outputPtrArgsLocations] =
            allocatePointerArgumentsToPool(outputs, &localMemories);
    if (n2 != ANEURALNETWORKS_NO_ERROR) {
        return {n2, {}, kNoTiming};
    }

    // Copy the input data that was specified via a pointer.
    if (inputPtrArgsMemory != nullptr) {
        uint32_t ptrInputIndex = 0;
        for (const auto& info : inputs) {
            if (info.state == ModelArgumentInfo::POINTER) {
                const DataLocation& loc = inputPtrArgsLocations[ptrInputIndex++];
                uint8_t* const data = inputPtrArgsMemory->getPointer();
                memcpy(data + loc.offset, info.buffer, loc.length);
            }
        }
    }

    Request request;
    setRequestArgumentArray(inputs, inputPtrArgsLocations, &request.inputs);
    setRequestArgumentArray(outputs, outputPtrArgsLocations, &request.outputs);
    uint32_t count = localMemories.size();
    request.pools.resize(count);
    for (uint32_t i = 0; i < count; i++) {
        request.pools[i] = localMemories[i]->getHidlMemory();
    }

    NNTRACE_FULL_SWITCH(NNTRACE_LAYER_IPC, NNTRACE_PHASE_EXECUTION,
                        "DriverPreparedModel::execute::execute");

    int n = ANEURALNETWORKS_OP_FAILED;
    std::vector<OutputShape> outputShapes;
    Timing timing = kNoTiming;

    // compute using burst if present
    const bool burstCompute = (burstController != nullptr);
    bool burstFallback = false;
    if (burstCompute) {
        std::vector<intptr_t> memoryIds;
        memoryIds.reserve(localMemories.size());
        for (const Memory* memory : localMemories) {
            memory->usedBy(burstController);
            memoryIds.push_back(memory->getKey());
        }

        VLOG(EXECUTION) << "Before ExecutionBurstController->tryCompute() "
                        << SHOW_IF_DEBUG(toString(request));
        std::tie(n, outputShapes, timing, burstFallback) =
                burstController->tryCompute(request, measure, memoryIds);
    }

    // compute from IPreparedModel if either:
    // (1) burst was not supplied, or
    // (2) the burst execution failed and requested a fallback execution
    if (!burstCompute || burstFallback) {
        const bool preferSynchronous = DeviceManager::get()->syncExecHal();
        std::tie(n, outputShapes, timing) =
                mPreparedModel->execute(request, measure, preferSynchronous);
    }

    if (n != ANEURALNETWORKS_NO_ERROR) {
        VLOG(EXECUTION) << "**Execution failed**";
        return {n, std::move(outputShapes), timing};
    }

    // Copy the output data from shared memory to the output buffers.
    NNTRACE_RT_SWITCH(NNTRACE_PHASE_RESULTS, "DriverPreparedModel::execute");
    if (outputPtrArgsMemory != nullptr) {
        uint32_t ptrOutputIndex = 0;
        for (const auto& info : outputs) {
            if (info.state == ModelArgumentInfo::POINTER) {
                const DataLocation& loc = outputPtrArgsLocations[ptrOutputIndex++];
                const uint8_t* const data = outputPtrArgsMemory->getPointer();
                memcpy(info.buffer, data + loc.offset, loc.length);
            }
        }
    }

    VLOG(EXECUTION) << "DriverPreparedModel::execute completed";
    return {ANEURALNETWORKS_NO_ERROR, std::move(outputShapes), timing};
}

// A special abstracted device for the CPU. Only one instance of this class will exist.
// Use get() to retrieve it.
class CpuDevice : public Device {
   public:
    // Returns the singleton CPU fallback device.
    static std::shared_ptr<CpuDevice> get() {
        static std::shared_ptr<CpuDevice> instance(new CpuDevice);
        return instance;
    }

    const char* getName() const override { return kName.c_str(); }
    const char* getVersionString() const override { return kVersionString.c_str(); }
    int64_t getFeatureLevel() const override { return kFeatureLevel; }
    int32_t getType() const override { return ANEURALNETWORKS_DEVICE_CPU; }
    hidl_vec<Extension> getSupportedExtensions() const override { return {/* No extensions. */}; }
    void getSupportedOperations(const MetaModel& metaModel,
                                hidl_vec<bool>* supportedOperations) const override;
    PerformanceInfo getPerformance(OperandType) const override { return kPerformance; }
    PerformanceInfo getRelaxedFloat32toFloat16PerformanceScalar() const override {
        return kPerformance;
    }
    PerformanceInfo getRelaxedFloat32toFloat16PerformanceTensor() const override {
        return kPerformance;
    }
    std::pair<uint32_t, uint32_t> getNumberOfCacheFilesNeeded() const override {
        return kNumCacheFiles;
    }

    std::pair<int, std::shared_ptr<PreparedModel>> prepareModel(
            const Model& hidlModel, ExecutionPreference executionPreference,
            const hidl_vec<hidl_handle>& modelCache, const hidl_vec<hidl_handle>& dataCache,
            const CacheToken&) const override;
    std::pair<int, std::shared_ptr<PreparedModel>> prepareModelFromCache(
            const hidl_vec<hidl_handle>&, const hidl_vec<hidl_handle>&,
            const CacheToken&) const override {
        CHECK(false) << "Should never call prepareModelFromCache on CpuDevice";
        return {ANEURALNETWORKS_OP_FAILED, nullptr};
    }

   private:
    CpuDevice() = default;
    const int64_t kFeatureLevel = __ANDROID_API__;
    const std::string kName = "nnapi-reference";
    const std::string kVersionString = build::GetBuildNumber();
    // Since the performance is a ratio compared to the CPU performance,
    // by definition the performance of the CPU is 1.0.
    const PerformanceInfo kPerformance = {.execTime = 1.0f, .powerUsage = 1.0f};
    // CPU device does not support compilation caching.
    const std::pair<uint32_t, uint32_t> kNumCacheFiles = {/*numModelCache=*/0,
                                                          /*numDataCache=*/0};
};

// A special abstracted PreparedModel for the CPU, constructed by CpuDevice.
class CpuPreparedModel : public PreparedModel {
   public:
    // Factory method for CpuPreparedModel. Returns ANEURALNETWORKS_NO_ERROR and
    // a prepared model object if successfully created. Returns an error code
    // and nullptr otherwise.
    static std::pair<int, std::shared_ptr<PreparedModel>> create(Model hidlModel);

    std::tuple<int, std::vector<OutputShape>, Timing> execute(
            const std::vector<ModelArgumentInfo>& inputs,
            const std::vector<ModelArgumentInfo>& outputs, const MemoryTracker& memories,
            const std::shared_ptr<ExecutionBurstController>& burstController,
            MeasureTiming measure) const override;

    std::shared_ptr<ExecutionBurstController> configureExecutionBurst(bool) const override {
        return nullptr;
    }

    // Prefer to use CpuPreparedModel::create.
    CpuPreparedModel(Model model, std::vector<RunTimePoolInfo> poolInfos)
        : mModel(std::move(model)), mModelPoolInfos(std::move(poolInfos)) {}

   private:
    const Model mModel;
    const std::vector<RunTimePoolInfo> mModelPoolInfos;
};

void CpuDevice::getSupportedOperations(const MetaModel& metaModel,
                                       hidl_vec<bool>* supportedOperations) const {
    const Model& hidlModel = metaModel.getModel();
    const size_t count = hidlModel.operations.size();
    hidl_vec<bool> result(count);
    for (size_t i = 0; i < count; i++) {
        // TODO(b/119870033): Decide whether and how post-P operations would be supported on CPU.
        //                    We may want to use the slicer for CpuDevice just as we do for
        //                    DriverDevice.
        OperationType operationType = hidlModel.operations[i].type;
        result[i] = !isExtensionOperationType(operationType) &&
                    operationType != OperationType::OEM_OPERATION;
    }
    *supportedOperations = std::move(result);
}

std::pair<int, std::shared_ptr<PreparedModel>> CpuDevice::prepareModel(
        const Model& hidlModel, ExecutionPreference executionPreference,
        const hidl_vec<hidl_handle>& modelCache, const hidl_vec<hidl_handle>& dataCache,
        const CacheToken&) const {
    CHECK(modelCache.size() == 0 && dataCache.size() == 0)
            << "Should never call prepareModel with cache information on CpuDevice";

    if (!validateModel(hidlModel) || !validateExecutionPreference(executionPreference)) {
        return {ANEURALNETWORKS_OP_FAILED, nullptr};
    }

    return CpuPreparedModel::create(hidlModel);
}

std::pair<int, std::shared_ptr<PreparedModel>> CpuPreparedModel::create(Model hidlModel) {
    std::vector<RunTimePoolInfo> poolInfos;
    if (!setRunTimePoolInfosFromHidlMemories(&poolInfos, hidlModel.pools)) {
        return {ANEURALNETWORKS_UNMAPPABLE, nullptr};
    }

    std::shared_ptr<PreparedModel> preparedModel =
            std::make_shared<CpuPreparedModel>(std::move(hidlModel), std::move(poolInfos));
    return {ANEURALNETWORKS_NO_ERROR, std::move(preparedModel)};
}

static std::tuple<int, std::vector<OutputShape>, Timing> computeOnCpu(
        const Model& model, const Request& request,
        const std::vector<RunTimePoolInfo>& modelPoolInfos,
        const std::vector<RunTimePoolInfo>& requestPoolInfos) {
    NNTRACE_RT(NNTRACE_PHASE_EXECUTION, "computeOnCpu");
    CpuExecutor executor;
    int err = executor.run(model, request, modelPoolInfos, requestPoolInfos);
    const auto& outputShapes = executor.getOutputShapes();
    return {err, outputShapes, kNoTiming};
}

// Perform computation on NNAPI CPU reference implementation.
//
// Contrary to DriverPreparedModel::execute, the NNAPI CPU reference executor lives in the
// same process as the NNAPI runtime and can take raw pointers. We will create as many pools as
// there are input/output in this method to avoid data copying.
//
// Will choose between sync/async execution according to DeviceManager::mSyncExecCpu.
std::tuple<int, std::vector<OutputShape>, Timing> CpuPreparedModel::execute(
        const std::vector<ModelArgumentInfo>& inputs, const std::vector<ModelArgumentInfo>& outputs,
        const MemoryTracker& memories,
        const std::shared_ptr<ExecutionBurstController>& /*burstController*/,
        MeasureTiming /*measure*/) const {
    std::vector<RunTimePoolInfo> requestPoolInfos;
    requestPoolInfos.reserve(memories.size());
    for (const Memory* mem : memories) {
        if (std::optional<RunTimePoolInfo> poolInfo =
                    RunTimePoolInfo::createFromHidlMemory(mem->getHidlMemory())) {
            requestPoolInfos.emplace_back(*poolInfo);
        } else {
            return {ANEURALNETWORKS_UNMAPPABLE, {}, kNoTiming};
        }
    }
    // Create as many pools as there are input / output.
    auto fixPointerArguments =
            [&requestPoolInfos](const std::vector<ModelArgumentInfo>& argumentInfos) {
                std::vector<DataLocation> ptrArgsLocations;
                for (const ModelArgumentInfo& argumentInfo : argumentInfos) {
                    if (argumentInfo.state == ModelArgumentInfo::POINTER) {
                        ptrArgsLocations.push_back(
                                {.poolIndex = static_cast<uint32_t>(requestPoolInfos.size()),
                                 .offset = 0,
                                 .length = argumentInfo.locationAndLength.length});
                        requestPoolInfos.emplace_back(RunTimePoolInfo::createFromExistingBuffer(
                                static_cast<uint8_t*>(argumentInfo.buffer)));
                    }
                }
                return ptrArgsLocations;
            };
    const std::vector<DataLocation> inputPtrArgsLocations = fixPointerArguments(inputs);
    const std::vector<DataLocation> outputPtrArgsLocations = fixPointerArguments(outputs);

    Request request;
    setRequestArgumentArray(inputs, inputPtrArgsLocations, &request.inputs);
    setRequestArgumentArray(outputs, outputPtrArgsLocations, &request.outputs);

    if (!DeviceManager::get()->syncExecCpu()) {
        // TODO: use a thread pool
        // TODO(mikie): this could have NNTRACE so we could measure the overhead
        //              of spinning up a new thread.
        std::tuple<int, std::vector<OutputShape>, Timing> result = {};
        std::thread([this, &request, &requestPoolInfos, &result] {
            result = computeOnCpu(mModel, request, mModelPoolInfos, requestPoolInfos);
        }).join();
        return result;
    }

    return computeOnCpu(mModel, request, mModelPoolInfos, requestPoolInfos);
}

DeviceManager* DeviceManager::get() {
    static DeviceManager manager;
    return &manager;
}

std::shared_ptr<Device> DeviceManager::getCpuDevice() {
    return CpuDevice::get();
}

std::shared_ptr<Device> DeviceManager::forTest_makeDriverDevice(const std::string& name,
                                                                const sp<V1_0::IDevice>& device) {
    auto driverDevice = std::make_shared<DriverDevice>(name, device);
    CHECK(driverDevice->initialize());
    return driverDevice;
}

void DeviceManager::findAvailableDevices() {
    using ::android::hidl::manager::V1_2::IServiceManager;
    VLOG(MANAGER) << "findAvailableDevices";

    sp<IServiceManager> manager = hardware::defaultServiceManager1_2();
    if (manager == nullptr) {
        LOG(ERROR) << "Unable to open defaultServiceManager";
        return;
    }

    manager->listManifestByInterface(
            V1_0::IDevice::descriptor, [this](const hidl_vec<hidl_string>& names) {
                for (const auto& name : names) {
                    VLOG(MANAGER) << "Found interface " << name.c_str();
                    sp<V1_0::IDevice> device = V1_0::IDevice::getService(name);
                    if (device == nullptr) {
                        LOG(ERROR) << "Got a null IDEVICE for " << name.c_str();
                        continue;
                    }
                    registerDevice(name.c_str(), device);
                }
            });

    // register CPU fallback device
    mDevices.push_back(CpuDevice::get());
    mDevicesCpuOnly.push_back(CpuDevice::get());
}

void DeviceManager::registerDevice(const char* name, const sp<V1_0::IDevice>& device) {
    auto d = std::make_shared<DriverDevice>(name, device);
    if (d->initialize()) {
        mDevices.push_back(d);
    }
}

DeviceManager::DeviceManager() {
    VLOG(MANAGER) << "DeviceManager::DeviceManager";
    findAvailableDevices();
#ifdef NN_DEBUGGABLE
    mStrictSlicing = (getProp("debug.nn.strict-slicing") != 0);
    mPartitioning = getProp("debug.nn.partition", kPartitioningDefault);
    mDebugNNCpuOnly = (getProp("debug.nn.cpuonly") != 0);
    mSyncExecCpu = (getProp("debug.nn.syncexec-cpu", 1) != 0);
    if (!mSyncExecHalSetter) {
        mSyncExecHal = (getProp("debug.nn.syncexec-hal", 1) != 0);
    }
    mSyncExecRuntime = (getProp("debug.nn.syncexec-runtime") != 0);
#endif  // NN_DEBUGGABLE
}

}  // namespace nn
}  // namespace android
