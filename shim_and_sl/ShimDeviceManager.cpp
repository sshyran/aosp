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

#define LOG_TAG "ShimDeviceManager"

#include "ShimDeviceManager.h"

#include <android-base/logging.h>
#include <android/binder_process.h>

#include <algorithm>
#include <memory>
#include <string>
#include <string_view>
#include <vector>

#include "NeuralNetworksShim.h"
#include "ShimDevice.h"
#include "ShimUtils.h"
#include "SupportLibrary.h"

namespace android::neuralnetworks::shim {

using aidl::android::hardware::neuralnetworks::ShimDevice;
using aidl::android::hardware::neuralnetworks::ShimDeviceInfo;

ANeuralNetworksShimResultCode registerDevices(
        NnApiSLDriverImpl* nnapiSLImpl,
        const std::vector<aidl::android::hardware::neuralnetworks::ShimDeviceInfo>&
                devicesToRegister,
        uint32_t /*numberOfListenerThreads*/, bool /*registerAsLazyService*/,
        bool /*fallbackToInvalidDevice*/) {
    if (nnapiSLImpl == nullptr) {
        LOG(ERROR) << "Invalid arguments, nnapiSLImpl == nullptr ";
        return ANNSHIM_INVALID_ARGUMENT;
    }
    if (devicesToRegister.empty()) {
        LOG(ERROR) << "Invalid arguments, devicesToRegister is empty";
        return ANNSHIM_INVALID_ARGUMENT;
    }

    if (nnapiSLImpl->implFeatureLevel < ANEURALNETWORKS_FEATURE_LEVEL_5) {
        LOG(ERROR) << "Invalid implStructFeatureLevel if NnApiSLDriverImpl, has to be at least "
                      "ANEURALNETWORKS_FEATURE_LEVEL_5";
        return ANNSHIM_FAILED_TO_LOAD_SL;
    }

    if (nnapiSLImpl->implFeatureLevel > ANEURALNETWORKS_FEATURE_LEVEL_5) {
        LOG(ERROR) << "Invalid implStructFeatureLevel if NnApiSLDriverImpl, latest supported "
                      "version is ANEURALNETWORKS_FEATURE_LEVEL_5";
        return ANNSHIM_FAILED_TO_LOAD_SL;
    }

    const std::shared_ptr<const NnApiSupportLibrary> nnapi =
            std::make_shared<const NnApiSupportLibrary>(
                    *reinterpret_cast<NnApiSLDriverImplFL5*>(nnapiSLImpl), nullptr);

    uint32_t numDevices;
    if (nnapi->ANeuralNetworks_getDeviceCount(&numDevices) != ANEURALNETWORKS_NO_ERROR) {
        LOG(ERROR) << "Failed ANeuralNetworks_getDeviceCount";
        return ANNSHIM_GENERAL_ERROR;
    }

    std::vector<std::shared_ptr<ShimDevice>> devices;
    int expectedDeviceCount = devicesToRegister.size();
    devices.reserve(expectedDeviceCount);

    // The default is 15, use more only if there's more devices exposed.
    ABinderProcess_setThreadPoolMaxThreadCount(std::max(15, 4 * expectedDeviceCount));

    // Set of devices is small enough that vector is sufficient.
    std::vector<size_t> registeredDevicesIndexes;
    registeredDevicesIndexes.reserve(expectedDeviceCount);

    for (uint32_t i = 0; i < numDevices; ++i) {
        ANeuralNetworksDevice* device;
        if (nnapi->ANeuralNetworks_getDevice(i, &device) != ANEURALNETWORKS_NO_ERROR) {
            LOG(ERROR) << "Failed ANeuralNetworks_getDevice";
            return ANNSHIM_GENERAL_ERROR;
        }

        const char* name = nullptr;
        if (nnapi->ANeuralNetworksDevice_getName(device, &name) != ANEURALNETWORKS_NO_ERROR) {
            LOG(ERROR) << "Failed ANeuralNetworks_getName";
            return ANNSHIM_GENERAL_ERROR;
        }

        const ShimDeviceInfo* toRegister = nullptr;
        for (int j = 0; j < devicesToRegister.size(); j++) {
            if (std::find(registeredDevicesIndexes.begin(), registeredDevicesIndexes.end(), j) !=
                registeredDevicesIndexes.end()) {
                continue;
            }

            const ShimDeviceInfo* info = &devicesToRegister[j];
            if (std::string_view(info->deviceName) == std::string_view(name)) {
                toRegister = info;
                registeredDevicesIndexes.push_back(j);
                break;
            }
        }
        if (!toRegister) {
            LOG(INFO) << "NNAPI Device " << name << " not listed for registration, skipping";
            continue;
        }

        const auto shimDevice = ndk::SharedRefBase::make<ShimDevice>(nnapi, device, *toRegister);
        int registrationResult = shimDevice->registerService();
        if (registrationResult == ANNSHIM_NO_ERROR) {
            devices.push_back(shimDevice);
        } else {
            return ANNSHIM_FAILED_TO_REGISTER_SERVICE;
        }
    }
    if (devices.empty()) {
        LOG(INFO) << "No devices registered, returning error";
        return ANNSHIM_FAILED_TO_REGISTER_SERVICE;
    }
    if (registeredDevicesIndexes.size() < devicesToRegister.size()) {
        LOG(INFO) << "Some NNAPI devices listed for registration not found in SL Driver";
        for (int j = 0; j < devicesToRegister.size(); ++j) {
            if (std::find(registeredDevicesIndexes.begin(), registeredDevicesIndexes.end(), j) !=
                registeredDevicesIndexes.end()) {
                LOG(INFO) << "Failed to register NNAPI Device: " << devicesToRegister[j].deviceName;
            }
        }
        return ANNSHIM_FAILED_TO_REGISTER_SERVICE;
    }
    LOG(INFO) << devices.size() << " NNAPI Devices/services registered, blocking";

    ABinderProcess_joinThreadPool();
    // Shouldn't reach here.
    return ANNSHIM_GENERAL_ERROR;
}

}  // namespace android::neuralnetworks::shim
