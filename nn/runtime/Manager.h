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

#ifndef ANDROID_FRAMEWORKS_ML_NN_RUNTIME_MANAGER_H
#define ANDROID_FRAMEWORKS_ML_NN_RUNTIME_MANAGER_H

#include <android-base/macros.h>

#include <map>
#include <memory>
#include <string>
#include <unordered_set>
#include <utility>
#include <vector>

#include "Callbacks.h"
#include "HalInterfaces.h"
#include "Memory.h"
#include "Utils.h"

namespace android {
namespace nn {

// Forward declaration
class MetaModel;
class ExecutionBurstController;
struct ModelArgumentInfo;

// A unified interface for actual driver prepared model as well as the CPU.
class PreparedModel {
    DISALLOW_COPY_AND_ASSIGN(PreparedModel);

   public:
    PreparedModel() = default;
    virtual ~PreparedModel() = default;

    // Start computation with given input/output argument info and memory pools.
    //
    // When executed on an actual driver device, this method may append new memory pools to
    // "memories" for inputs and outputs specified via pointers, and the data location for
    // "inputs" and "outputs" may get updated.
    virtual int execute(const std::shared_ptr<ExecutionBurstController>& burstController,
                        hal::MeasureTiming measure, std::vector<ModelArgumentInfo>* inputs,
                        std::vector<ModelArgumentInfo>* outputs, MemoryTracker* memories,
                        sp<ExecutionCallback>* synchronizationCallback) const = 0;

    virtual std::shared_ptr<ExecutionBurstController> configureExecutionBurst(
            bool blocking) const = 0;
};

// A unified interface for actual driver devices as well as the CPU
class Device {
    DISALLOW_COPY_AND_ASSIGN(Device);

   public:
    Device() = default;
    virtual ~Device() = default;

    // Introspection methods returning device information
    virtual const char* getName() const = 0;
    virtual const char* getVersionString() const = 0;
    virtual int64_t getFeatureLevel() const = 0;
    virtual int32_t getType() const = 0;
    virtual hal::hidl_vec<hal::Extension> getSupportedExtensions() const = 0;

    // See the MetaModel class in MetaModel.h for more details.
    virtual void getSupportedOperations(const MetaModel& metaModel,
                                        hal::hidl_vec<bool>* supportedOperations) const = 0;

    virtual hal::PerformanceInfo getPerformance(hal::OperandType type) const = 0;
    virtual hal::PerformanceInfo getRelaxedFloat32toFloat16PerformanceScalar() const = 0;
    virtual hal::PerformanceInfo getRelaxedFloat32toFloat16PerformanceTensor() const = 0;
    virtual std::pair<uint32_t, uint32_t> getNumberOfCacheFilesNeeded() const = 0;
    bool isCachingSupported() const;

    virtual int prepareModel(
            const hal::Model& hidlModel, hal::ExecutionPreference executionPreference,
            const hal::hidl_vec<hal::hidl_handle>& modelCache,
            const hal::hidl_vec<hal::hidl_handle>& dataCache,
            const hal::hidl_array<uint8_t, ANEURALNETWORKS_BYTE_SIZE_OF_CACHE_TOKEN>& token,
            std::shared_ptr<PreparedModel>* preparedModel) const = 0;
    virtual int prepareModelFromCache(
            const hal::hidl_vec<hal::hidl_handle>& modelCache,
            const hal::hidl_vec<hal::hidl_handle>& dataCache,
            const hal::hidl_array<uint8_t, ANEURALNETWORKS_BYTE_SIZE_OF_CACHE_TOKEN>& token,
            std::shared_ptr<PreparedModel>* preparedModel) const = 0;
};

// Manages the NN HAL devices.  Only one instance of this class will exist.
// Use get() to retrieve it.
class DeviceManager {
   public:
    const std::vector<std::shared_ptr<Device>>& getDrivers() const {
        if (mSetCpuOnly || mDebugNNCpuOnly) {
            return mDevicesCpuOnly;
        }
        return mDevices;
    }

    // For testing only:
    void setUseCpuOnly(bool useCpuOnly) { mSetCpuOnly = useCpuOnly; }
    bool getUseCpuOnly() const { return mSetCpuOnly; }
    void setSyncExecHal(bool val) {
        mSyncExecHal = val;
        mSyncExecHalSetter = true;
    }

    bool syncExecCpu() const { return mSyncExecCpu; }
    bool syncExecHal() const { return mSyncExecHal; }
    bool syncExecRuntime() const { return mSyncExecRuntime; }

    // How to handle graph partitioning?
    // 0 - Don't do graph partitioning.
    // 1 - Do graph partitioning; but fall back to non-partitioned
    //     execution if there is a partitioning failure.
    // 2 - Do graph partitioning, and rely on it; there is no fallback.
    enum {
        kPartitioningNo              = 0,
        kPartitioningWithFallback    = 1,
        kPartitioningWithoutFallback = 2
    };
    uint32_t getPartitioning() const { return mPartitioning; }
    static bool partitioningAllowsFallback(uint32_t partitioning) {
        return partitioning == kPartitioningWithFallback;
    }

    bool strictSlicing() const { return mStrictSlicing; }

    // Returns the singleton manager.
    static DeviceManager* get();

    // Returns the singleton Cpu device.
    static std::shared_ptr<Device> getCpuDevice();

    // The forTest_* functions below are solely intended for use by unit tests.

    // Returns all devices (ignores the cpu-only flags).
    std::vector<std::shared_ptr<Device>> forTest_getDevices() const { return mDevices; }

    // Sets the device list (does not affect cpu-only queries).
    void forTest_setDevices(std::vector<std::shared_ptr<Device>> devices) {
        mDevices = std::move(devices);
    }

    // Register a test device.
    void forTest_registerDevice(const char* name, const sp<hal::V1_0::IDevice>& device) {
        registerDevice(name, device);
    }

    // Re-initialize the list of available devices.
    void forTest_reInitializeDeviceList() {
        mDevices.clear();
        mDevicesCpuOnly.clear();
        findAvailableDevices();
    }

    // Make a test device
    static std::shared_ptr<Device> forTest_makeDriverDevice(const std::string& name,
                                                            const sp<hal::V1_0::IDevice>& device);

    bool forTest_isCpuDevice(const ANeuralNetworksDevice* device) const {
        return reinterpret_cast<const Device*>(device) == getCpuDevice().get();
    }

   private:
    // Builds the list of available drivers and queries their capabilities.
    DeviceManager();

    // Adds a device for the manager to use.
    void registerDevice(const char* name, const sp<hal::V1_0::IDevice>& device);

    void findAvailableDevices();

    // List of all the devices we discovered (including CpuDevice).
    std::vector<std::shared_ptr<Device>> mDevices;

    // We set this one to have CpuDevice only. To be used when m*CpuOnly is true.
    std::vector<std::shared_ptr<Device>> mDevicesCpuOnly;

    // If either of these is true, we'll ignore the drivers that are
    // on the device and run everything on the CPU.
    bool mSetCpuOnly = false;      // set by setUseCpuOnly()
    bool mDebugNNCpuOnly = false;  // derived from system property debug.nn.cpuonly

    // synchronous execution
    bool mSyncExecCpu = true;
    bool mSyncExecHal = true;         // Call executeSynchronously() when available on device.
    bool mSyncExecHalSetter = false;  // Has mSyncExecHal been set by setSyncExecHal()?
                                      // If so, don't allow the setting to be overridden
                                      //     by system property debug.nn.syncexec-hal
    bool mSyncExecRuntime = false;

    static const uint32_t kPartitioningDefault = kPartitioningWithFallback;
    uint32_t mPartitioning = kPartitioningDefault;

    bool mStrictSlicing = false;
};

} // namespace nn
} // namespace android

#endif  // ANDROID_FRAMEWORKS_ML_NN_RUNTIME_MANAGER_H
