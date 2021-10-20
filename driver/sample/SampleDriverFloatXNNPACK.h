
/*
 * Copyright (C) 2021 The Android Open Source Project
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
#ifndef ANDROID_FRAMEWORKS_ML_NN_DRIVER_SAMPLE_SAMPLE_DRIVER_FLOATXNNPACK_H
#define ANDROID_FRAMEWORKS_ML_NN_DRIVER_SAMPLE_SAMPLE_DRIVER_FLOATXNNPACK_H
#include "SampleDriverPartial.h"

namespace android {
namespace nn {
namespace sample_driver {
class SampleDriverFloatXNNPACK : public SampleDriverPartial {
   public:
    SampleDriverFloatXNNPACK(const char* name) : SampleDriverPartial(name) {}
    hardware::Return<void> getCapabilities_1_3(getCapabilities_1_3_cb cb) override;
    hardware::Return<V1_0::ErrorStatus> prepareModel(
            const V1_0::Model& model, const sp<V1_0::IPreparedModelCallback>& callback) override;
    hardware::Return<V1_0::ErrorStatus> prepareModel_1_1(
            const V1_1::Model& model, V1_1::ExecutionPreference preference,
            const sp<V1_0::IPreparedModelCallback>& callback) override;
    hardware::Return<V1_0::ErrorStatus> prepareModel_1_2(
            const V1_2::Model& model, V1_1::ExecutionPreference preference,
            const hardware::hidl_vec<hardware::hidl_handle>& modelCache,
            const hardware::hidl_vec<hardware::hidl_handle>& dataCache, const HalCacheToken& token,
            const sp<V1_2::IPreparedModelCallback>& callback) override;
    hardware::Return<V1_3::ErrorStatus> prepareModel_1_3(
            const V1_3::Model& model, V1_1::ExecutionPreference preference, V1_3::Priority priority,
            const V1_3::OptionalTimePoint& deadline,
            const hardware::hidl_vec<hardware::hidl_handle>& modelCache,
            const hardware::hidl_vec<hardware::hidl_handle>& dataCache, const HalCacheToken& token,
            const sp<V1_3::IPreparedModelCallback>& callback) override;
    hardware::Return<void> allocate(
            const V1_3::BufferDesc& desc,
            const hardware::hidl_vec<sp<V1_3::IPreparedModel>>& preparedModels,
            const hardware::hidl_vec<V1_3::BufferRole>& inputRoles,
            const hardware::hidl_vec<V1_3::BufferRole>& outputRoles, allocate_cb cb) override;

   private:
    std::vector<bool> getSupportedOperationsImpl(const V1_3::Model& model) const override;
};
}
}
}
#endif  // ANDROID_FRAMEWORKS_ML_NN_DRIVER_SAMPLE_SAMPLE_DRIVER_FLOATXNNPACK_H
