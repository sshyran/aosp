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

#ifndef ANDROID_FRAMEWORKS_ML_NN_DRIVER_SAMPLE_SAMPLE_DRIVER_H
#define ANDROID_FRAMEWORKS_ML_NN_DRIVER_SAMPLE_SAMPLE_DRIVER_H

#include <string>
#include <vector>

#include "CpuExecutor.h"
#include "HalInterfaces.h"
#include "NeuralNetworks.h"

namespace android {
namespace nn {
namespace sample_driver {

using hardware::MQDescriptorSync;

// Base class used to create sample drivers for the NN HAL.  This class
// provides some implementation of the more common functions.
//
// Since these drivers simulate hardware, they must run the computations
// on the CPU.  An actual driver would not do that.
class SampleDriver : public hal::IDevice {
   public:
    SampleDriver(const char* name,
                 const IOperationResolver* operationResolver = BuiltinOperationResolver::get())
        : mName(name), mOperationResolver(operationResolver) {
        android::nn::initVLogMask();
    }
    ~SampleDriver() override {}
    hal::Return<void> getCapabilities(getCapabilities_cb cb) override;
    hal::Return<void> getCapabilities_1_1(getCapabilities_1_1_cb cb) override;
    hal::Return<void> getCapabilities_1_2(getCapabilities_1_2_cb cb) override;
    hal::Return<void> getVersionString(getVersionString_cb cb) override;
    hal::Return<void> getType(getType_cb cb) override;
    hal::Return<void> getSupportedExtensions(getSupportedExtensions_cb) override;
    hal::Return<void> getSupportedOperations(const hal::V1_0::Model& model,
                                             getSupportedOperations_cb cb) override;
    hal::Return<void> getSupportedOperations_1_1(const hal::V1_1::Model& model,
                                                 getSupportedOperations_1_1_cb cb) override;
    hal::Return<void> getSupportedOperations_1_2(const hal::V1_2::Model& model,
                                                 getSupportedOperations_1_2_cb cb) override;
    hal::Return<void> getNumberOfCacheFilesNeeded(getNumberOfCacheFilesNeeded_cb cb) override;
    hal::Return<hal::ErrorStatus> prepareModel(
            const hal::V1_0::Model& model,
            const sp<hal::V1_0::IPreparedModelCallback>& callback) override;
    hal::Return<hal::ErrorStatus> prepareModel_1_1(
            const hal::V1_1::Model& model, hal::ExecutionPreference preference,
            const sp<hal::V1_0::IPreparedModelCallback>& callback) override;
    hal::Return<hal::ErrorStatus> prepareModel_1_2(
            const hal::V1_2::Model& model, hal::ExecutionPreference preference,
            const hal::hidl_vec<hal::hidl_handle>& modelCache,
            const hal::hidl_vec<hal::hidl_handle>& dataCache, const hal::CacheToken& token,
            const sp<hal::V1_2::IPreparedModelCallback>& callback) override;
    hal::Return<hal::ErrorStatus> prepareModel_1_3(
            const hal::V1_3::Model& model, hal::ExecutionPreference preference,
            const hal::hidl_vec<hal::hidl_handle>& modelCache,
            const hal::hidl_vec<hal::hidl_handle>& dataCache, const hal::CacheToken& token,
            const sp<hal::V1_2::IPreparedModelCallback>& callback) override;
    hal::Return<hal::ErrorStatus> prepareModelFromCache(
            const hal::hidl_vec<hal::hidl_handle>& modelCache,
            const hal::hidl_vec<hal::hidl_handle>& dataCache, const hal::CacheToken& token,
            const sp<hal::V1_2::IPreparedModelCallback>& callback) override;
    hal::Return<hal::DeviceStatus> getStatus() override;

    // Starts and runs the driver service.  Typically called from main().
    // This will return only once the service shuts down.
    int run();

    CpuExecutor getExecutor() const { return CpuExecutor(mOperationResolver); }

   protected:
    std::string mName;
    const IOperationResolver* mOperationResolver;
};

class SamplePreparedModel : public hal::IPreparedModel {
   public:
    SamplePreparedModel(const hal::Model& model, const SampleDriver* driver,
                        hal::ExecutionPreference preference)
        : mModel(model), mDriver(driver), kPreference(preference) {}
    ~SamplePreparedModel() override {}
    bool initialize();
    hal::Return<hal::ErrorStatus> execute(
            const hal::Request& request,
            const sp<hal::V1_0::IExecutionCallback>& callback) override;
    hal::Return<hal::ErrorStatus> execute_1_2(
            const hal::Request& request, hal::MeasureTiming measure,
            const sp<hal::V1_2::IExecutionCallback>& callback) override;
    hal::Return<void> executeSynchronously(const hal::Request& request, hal::MeasureTiming measure,
                                           executeSynchronously_cb cb) override;
    hal::Return<void> configureExecutionBurst(
            const sp<hal::V1_2::IBurstCallback>& callback,
            const MQDescriptorSync<hal::V1_2::FmqRequestDatum>& requestChannel,
            const MQDescriptorSync<hal::V1_2::FmqResultDatum>& resultChannel,
            configureExecutionBurst_cb cb) override;

   private:
    hal::Model mModel;
    const SampleDriver* mDriver;
    std::vector<RunTimePoolInfo> mPoolInfos;
    const hal::ExecutionPreference kPreference;
};

}  // namespace sample_driver
}  // namespace nn
}  // namespace android

#endif  // ANDROID_FRAMEWORKS_ML_NN_DRIVER_SAMPLE_SAMPLE_DRIVER_H
