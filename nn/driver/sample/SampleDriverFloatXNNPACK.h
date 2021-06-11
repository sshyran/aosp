
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
    Return<void> getCapabilities_1_3(getCapabilities_1_3_cb cb) override;
    Return<V1_0::ErrorStatus> prepareModel(
            const V1_0::Model& model, const sp<V1_0::IPreparedModelCallback>& callback) override;
    Return<V1_0::ErrorStatus> prepareModel_1_1(
            const V1_1::Model& model, ExecutionPreference preference,
            const sp<V1_0::IPreparedModelCallback>& callback) override;
    Return<V1_0::ErrorStatus> prepareModel_1_2(
            const V1_2::Model& model, ExecutionPreference preference,
            const hidl_vec<hidl_handle>& modelCache, const hidl_vec<hidl_handle>& dataCache,
            const CacheToken& token, const sp<V1_2::IPreparedModelCallback>& callback) override;
    Return<ErrorStatus> prepareModel_1_3(const Model& model, ExecutionPreference preference,
                                         Priority priority, const OptionalTimePoint& deadline,
                                         const hidl_vec<hidl_handle>& modelCache,
                                         const hidl_vec<hidl_handle>& dataCache,
                                         const CacheToken& token,
                                         const sp<IPreparedModelCallback>& callback) override;
    Return<void> allocate(const V1_3::BufferDesc& desc,
                          const hidl_vec<sp<V1_3::IPreparedModel>>& preparedModels,
                          const hidl_vec<V1_3::BufferRole>& inputRoles,
                          const hidl_vec<V1_3::BufferRole>& outputRoles, allocate_cb cb) override;
   private:
    std::vector<bool> getSupportedOperationsImpl(const Model& model) const override;
};
}
}
}
#endif  // ANDROID_FRAMEWORKS_ML_NN_DRIVER_SAMPLE_SAMPLE_DRIVER_FLOATXNNPACK_H
