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

#include <thread>

#include "HalInterfaces.h"
#include "SampleDriver.h"

namespace android {
namespace nn {
namespace sample_driver {

void notify(const sp<hal::V1_0::IPreparedModelCallback>& callback, const hal::ErrorStatus& status,
            const sp<SamplePreparedModel>& preparedModel);

void notify(const sp<hal::V1_2::IPreparedModelCallback>& callback, const hal::ErrorStatus& status,
            const sp<SamplePreparedModel>& preparedModel);

void notify(const sp<hal::V1_3::IPreparedModelCallback>& callback, const hal::ErrorStatus& status,
            const sp<SamplePreparedModel>& preparedModel);

void notify(const sp<hal::V1_0::IExecutionCallback>& callback, const hal::ErrorStatus& status,
            const hal::hidl_vec<hal::OutputShape>&, hal::Timing);

void notify(const sp<hal::V1_2::IExecutionCallback>& callback, const hal::ErrorStatus& status,
            const hal::hidl_vec<hal::OutputShape>& outputShapes, hal::Timing timing);

template <typename T_Model, typename T_IPreparedModelCallback>
hal::Return<hal::ErrorStatus> prepareModelBase(const T_Model& model, const SampleDriver* driver,
                                               hal::ExecutionPreference preference,
                                               const sp<T_IPreparedModelCallback>& callback,
                                               bool isFullModelSupported = true) {
    if (callback.get() == nullptr) {
        LOG(ERROR) << "invalid callback passed to prepareModelBase";
        return hal::ErrorStatus::INVALID_ARGUMENT;
    }
    if (VLOG_IS_ON(DRIVER)) {
        VLOG(DRIVER) << "prepareModelBase";
        logModelToInfo(model);
    }
    if (!validateModel(model) || !validateExecutionPreference(preference)) {
        notify(callback, hal::ErrorStatus::INVALID_ARGUMENT, nullptr);
        return hal::ErrorStatus::INVALID_ARGUMENT;
    }
    if (!isFullModelSupported) {
        notify(callback, hal::ErrorStatus::INVALID_ARGUMENT, nullptr);
        return hal::ErrorStatus::NONE;
    }
    // asynchronously prepare the model from a new, detached thread
    std::thread([model, driver, preference, callback] {
        sp<SamplePreparedModel> preparedModel =
                new SamplePreparedModel(convertToV1_3(model), driver, preference);
        if (!preparedModel->initialize()) {
            notify(callback, hal::ErrorStatus::INVALID_ARGUMENT, nullptr);
            return;
        }
        notify(callback, hal::ErrorStatus::NONE, preparedModel);
    }).detach();

    return hal::ErrorStatus::NONE;
}

}  // namespace sample_driver
}  // namespace nn
}  // namespace android
