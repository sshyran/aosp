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

#define LOG_TAG "SampleDriver"

#include "SampleDriver.h"

#include "CpuExecutor.h"
#include "HalInterfaces.h"
#include "Tracing.h"
#include "ValidateHal.h"

#include <android-base/logging.h>
#include <hidl/LegacySupport.h>
#include <thread>

namespace android {
namespace nn {
namespace sample_driver {

Return<void> SampleDriver::getCapabilities(getCapabilities_cb cb) {
    NNTRACE_FULL(NNTRACE_LAYER_DRIVER, NNTRACE_PHASE_INITIALIZATION,
                 "SampleDriver::getCapabilities");
    return getCapabilities_1_1(
        [&](ErrorStatus error, const V1_1::Capabilities& capabilities) {
            // TODO(dgross): Do we need to check compliantWithV1_0(capabilities)?
            cb(error, convertToV1_0(capabilities));
        });
}

Return<void> SampleDriver::getVersionString(getVersionString_cb cb) {
    NNTRACE_FULL(NNTRACE_LAYER_DRIVER, NNTRACE_PHASE_INITIALIZATION,
                 "SampleDriver::getVersionString");
    cb(ErrorStatus::NONE, "JUST_AN_EXAMPLE");
    return Void();
}

Return<void> SampleDriver::getType(getType_cb cb) {
    NNTRACE_FULL(NNTRACE_LAYER_DRIVER, NNTRACE_PHASE_INITIALIZATION, "SampleDriver::getType");
    cb(ErrorStatus::NONE, V1_2::DeviceType::CPU);
    return Void();
}

Return<void> SampleDriver::getSupportedOperations(const V1_0::Model& model,
                                                  getSupportedOperations_cb cb) {
    NNTRACE_FULL(NNTRACE_LAYER_DRIVER, NNTRACE_PHASE_COMPILATION,
                 "SampleDriver::getSupportedOperations");
    if (!validateModel(model)) {
        VLOG(DRIVER) << "getSupportedOperations";
        std::vector<bool> supported;
        cb(ErrorStatus::INVALID_ARGUMENT, supported);
        return Void();
    }
    return getSupportedOperations_1_2(convertToV1_2(model), cb);
}

Return<void> SampleDriver::getSupportedOperations_1_1(const V1_1::Model& model,
                                                      getSupportedOperations_1_1_cb cb) {
    NNTRACE_FULL(NNTRACE_LAYER_DRIVER, NNTRACE_PHASE_COMPILATION,
                 "SampleDriver::getSupportedOperations_1_1");
    if (!validateModel(model)) {
        VLOG(DRIVER) << "getSupportedOperations_1_1";
        std::vector<bool> supported;
        cb(ErrorStatus::INVALID_ARGUMENT, supported);
        return Void();
    }
    return getSupportedOperations_1_2(convertToV1_2(model), cb);
}

static void notify(const sp<V1_0::IPreparedModelCallback>& callback, const ErrorStatus& status,
                   const sp<SamplePreparedModel>& preparedModel) {
    callback->notify(status, preparedModel);
}

static void notify(const sp<V1_2::IPreparedModelCallback>& callback, const ErrorStatus& status,
                   const sp<SamplePreparedModel>& preparedModel) {
    callback->notify_1_2(status, preparedModel);
}

template <typename T_Model, typename T_IPreparedModelCallback>
Return<ErrorStatus> prepareModelBase(const T_Model& model, ExecutionPreference preference,
                                     const sp<T_IPreparedModelCallback>& callback) {
    if (callback.get() == nullptr) {
        LOG(ERROR) << "invalid callback passed to prepareModelBase";
        return ErrorStatus::INVALID_ARGUMENT;
    }
    if (VLOG_IS_ON(DRIVER)) {
        VLOG(DRIVER) << "prepareModelBase";
        logModelToInfo(model);
    }
    if (!validateModel(model) || !validateExecutionPreference(preference)) {
        notify(callback, ErrorStatus::INVALID_ARGUMENT, nullptr);
        return ErrorStatus::INVALID_ARGUMENT;
    }

    // TODO: make asynchronous later
    sp<SamplePreparedModel> preparedModel = new SamplePreparedModel(convertToV1_2(model));
    if (!preparedModel->initialize()) {
        notify(callback, ErrorStatus::INVALID_ARGUMENT, nullptr);
        return ErrorStatus::INVALID_ARGUMENT;
    }
    notify(callback, ErrorStatus::NONE, preparedModel);
    return ErrorStatus::NONE;
}

Return<ErrorStatus> SampleDriver::prepareModel(const V1_0::Model& model,
                                               const sp<V1_0::IPreparedModelCallback>& callback) {
    NNTRACE_FULL(NNTRACE_LAYER_DRIVER, NNTRACE_PHASE_COMPILATION, "SampleDriver::prepareModel");
    return prepareModelBase(model, ExecutionPreference::FAST_SINGLE_ANSWER, callback);
}

Return<ErrorStatus> SampleDriver::prepareModel_1_1(
        const V1_1::Model& model, ExecutionPreference preference,
        const sp<V1_0::IPreparedModelCallback>& callback) {
    NNTRACE_FULL(NNTRACE_LAYER_DRIVER, NNTRACE_PHASE_COMPILATION, "SampleDriver::prepareModel_1_1");
    return prepareModelBase(model, preference, callback);
}

Return<ErrorStatus> SampleDriver::prepareModel_1_2(
        const V1_2::Model& model, ExecutionPreference preference,
        const sp<V1_2::IPreparedModelCallback>& callback) {
    NNTRACE_FULL(NNTRACE_LAYER_DRIVER, NNTRACE_PHASE_COMPILATION, "SampleDriver::prepareModel_1_2");
    return prepareModelBase(model, preference, callback);
}

Return<DeviceStatus> SampleDriver::getStatus() {
    NNTRACE_FULL(NNTRACE_LAYER_DRIVER, NNTRACE_PHASE_UNSPECIFIED,
                 "SampleDriver::getStatus");
    VLOG(DRIVER) << "getStatus()";
    return DeviceStatus::AVAILABLE;
}

int SampleDriver::run() {
    android::hardware::configureRpcThreadpool(4, true);
    if (registerAsService(mName) != android::OK) {
        LOG(ERROR) << "Could not register service";
        return 1;
    }
    android::hardware::joinRpcThreadpool();
    LOG(ERROR) << "Service exited!";
    return 1;
}

bool SamplePreparedModel::initialize() {
    return setRunTimePoolInfosFromHidlMemories(&mPoolInfos, mModel.pools);
}

static Return<void> notify(const sp<V1_0::IExecutionCallback>& callback, const ErrorStatus& status,
                           const hidl_vec<OutputShape>&) {
    return callback->notify(status);
}

static Return<void> notify(const sp<V1_2::IExecutionCallback>& callback, const ErrorStatus& status,
                           const hidl_vec<OutputShape>& outputShapes) {
    return callback->notify_1_2(status, outputShapes);
}

// TODO(xusongw): Let callback notify actual output shape once dynamic output shape
//                is supported in CpuExecutor.
template <typename T_IExecutionCallback>
void asyncExecute(const Request& request, const Model& model,
                  const std::vector<RunTimePoolInfo>& poolInfos,
                  const sp<T_IExecutionCallback>& callback) {
    NNTRACE_FULL(NNTRACE_LAYER_DRIVER, NNTRACE_PHASE_INPUTS_AND_OUTPUTS,
                 "SampleDriver::asyncExecute");
    std::vector<RunTimePoolInfo> requestPoolInfos;
    if (!setRunTimePoolInfosFromHidlMemories(&requestPoolInfos, request.pools)) {
        notify(callback, ErrorStatus::GENERAL_FAILURE, {});
        return;
    }

    NNTRACE_FULL_SWITCH(NNTRACE_LAYER_DRIVER, NNTRACE_PHASE_EXECUTION,
                        "SampleDriver::asyncExecute");
    CpuExecutor executor;
    int n = executor.run(model, request, poolInfos, requestPoolInfos);
    VLOG(DRIVER) << "executor.run returned " << n;
    ErrorStatus executionStatus =
            n == ANEURALNETWORKS_NO_ERROR ? ErrorStatus::NONE : ErrorStatus::GENERAL_FAILURE;
    Return<void> returned = notify(callback, executionStatus, {});
    if (!returned.isOk()) {
        LOG(ERROR) << " hidl callback failed to return properly: " << returned.description();
    }
}

template <typename T_IExecutionCallback>
Return<ErrorStatus> executeBase(const Request& request, const Model& model,
                                const std::vector<RunTimePoolInfo>& poolInfos,
                                const sp<T_IExecutionCallback>& callback) {
    NNTRACE_FULL(NNTRACE_LAYER_DRIVER, NNTRACE_PHASE_EXECUTION, "SampleDriver::executeBase");
    VLOG(DRIVER) << "executeBase(" << SHOW_IF_DEBUG(toString(request)) << ")";
    if (callback.get() == nullptr) {
        LOG(ERROR) << "invalid callback passed to executeBase";
        return ErrorStatus::INVALID_ARGUMENT;
    }
    if (!validateRequest(request, model)) {
        notify(callback, ErrorStatus::INVALID_ARGUMENT, {});
        return ErrorStatus::INVALID_ARGUMENT;
    }

    // This thread is intentionally detached because the sample driver service
    // is expected to live forever.
    std::thread([&model, &poolInfos, request, callback] {
        asyncExecute(request, model, poolInfos, callback);
    }).detach();

    return ErrorStatus::NONE;
}

Return<ErrorStatus> SamplePreparedModel::execute(const Request& request,
                                                 const sp<V1_0::IExecutionCallback>& callback) {
    return executeBase(request, mModel, mPoolInfos, callback);
}

Return<ErrorStatus> SamplePreparedModel::execute_1_2(const Request& request,
                                                     const sp<V1_2::IExecutionCallback>& callback) {
    return executeBase(request, mModel, mPoolInfos, callback);
}

Return<void> SamplePreparedModel::executeSynchronously(const Request& request,
                                                       executeSynchronously_cb cb) {
    NNTRACE_FULL(NNTRACE_LAYER_DRIVER, NNTRACE_PHASE_EXECUTION,
                 "SampleDriver::executeSynchronously");
    VLOG(DRIVER) << "executeSynchronously(" << SHOW_IF_DEBUG(toString(request)) << ")";
    if (!validateRequest(request, mModel)) {
        cb(ErrorStatus::INVALID_ARGUMENT, {});
        return Void();
    }

    NNTRACE_FULL_SWITCH(NNTRACE_LAYER_DRIVER, NNTRACE_PHASE_INPUTS_AND_OUTPUTS,
                        "SampleDriver::executeSynchronously");
    std::vector<RunTimePoolInfo> requestPoolInfos;
    if (!setRunTimePoolInfosFromHidlMemories(&requestPoolInfos, request.pools)) {
        cb(ErrorStatus::GENERAL_FAILURE, {});
        return Void();
    }

    NNTRACE_FULL_SWITCH(NNTRACE_LAYER_DRIVER, NNTRACE_PHASE_EXECUTION,
                        "SampleDriver::executeSynchronously");
    CpuExecutor executor;
    int n = executor.run(mModel, request, mPoolInfos, requestPoolInfos);
    VLOG(DRIVER) << "executor.run returned " << n;
    cb(n == ANEURALNETWORKS_NO_ERROR ? ErrorStatus::NONE : ErrorStatus::GENERAL_FAILURE, {});
    return Void();
}

} // namespace sample_driver
} // namespace nn
} // namespace android
