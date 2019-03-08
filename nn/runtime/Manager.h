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

#ifndef ANDROID_ML_NN_RUNTIME_MANAGER_H
#define ANDROID_ML_NN_RUNTIME_MANAGER_H

#include "HalInterfaces.h"
#include "Utils.h"
#include "VersionedInterfaces.h"

#include <android-base/macros.h>
#include <map>
#include <unordered_set>
#include <vector>

namespace android {
namespace nn {

// A unified interface for actual driver devices as well as the CPU
class Device {
   public:
    virtual ~Device() {}

    // Get the handle of underlying VersionedIDevice, if any
    virtual VersionedIDevice* getInterface() = 0;

    // Introspection methods returning device information
    virtual const char* getName() const = 0;
    virtual const char* getVersionString() const = 0;
    virtual int64_t getFeatureLevel() = 0;
    virtual int32_t getType() const = 0;
    virtual hidl_vec<Extension> getSupportedExtensions() const = 0;
    virtual void getSupportedOperations(const Model& hidlModel,
                                        hidl_vec<bool>* supportedOperations) = 0;
    virtual PerformanceInfo getFloat32Performance() const = 0;
    virtual PerformanceInfo getQuantized8Performance() const = 0;
    virtual PerformanceInfo getRelaxedFloat32toFloat16Performance() const = 0;
    virtual bool isCachingSupported() const = 0;

    virtual int prepareModel(const Model& hidlModel, ExecutionPreference executionPreference,
                             std::shared_ptr<VersionedIPreparedModel>* preparedModel) = 0;
    virtual int prepareModelFromCache(
            const hidl_handle& modelCache, const hidl_handle& dataCache,
            const hidl_array<uint8_t, ANEURALNETWORKS_BYTE_SIZE_OF_CACHE_TOKEN>& token,
            std::shared_ptr<VersionedIPreparedModel>* preparedModel) = 0;
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

    // Returns the singleton manager.
    static DeviceManager* get();

    // Returns the singleton Cpu device.
    static std::shared_ptr<Device> getCpuDevice();

    // These functions are solely intended for use by unit tests of
    // the introspection and control API.
    //
    // Register a test device.
    void forTest_registerDevice(const char* name, const sp<V1_0::IDevice>& device) {
        registerDevice(name, device);
    }
    // Re-initialize the list of available devices.
    void forTest_reInitializeDeviceList() {
        mDevices.clear();
        findAvailableDevices();
    }
    // Make a test device
    static std::shared_ptr<Device> forTest_makeDriverDevice(const std::string& name,
                                                            const sp<V1_0::IDevice>& device);

   private:
    // Builds the list of available drivers and queries their capabilities.
    DeviceManager();

    // Adds a device for the manager to use.
    void registerDevice(const char* name, const sp<V1_0::IDevice>& device);

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
    bool mSyncExecCpu = false;
    bool mSyncExecHal = true;         // Call executeSynchronously() when available on device.
    bool mSyncExecHalSetter = false;  // Has mSyncExecHal been set by setSyncExecHal()?
                                      // If so, don't allow the setting to be overridden
                                      //     by system property debug.nn.syncexec-hal
    bool mSyncExecRuntime = false;

    static const uint32_t kPartitioningDefault = kPartitioningWithFallback;
    uint32_t mPartitioning = kPartitioningDefault;
};

} // namespace nn
} // namespace android

#endif // ANDROID_ML_NN_RUNTIME_MANAGER_H
