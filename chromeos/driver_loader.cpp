// Copyright 2020 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "HalInterfaces.h"
#include <Utils.h>
#include <nnapi/hal/1.3/Device.h>
#include <utils/StrongPointer.h>

namespace android {
namespace nn {

bool getDriversFrom(char* content, std::vector<std::string>& serviceNames) {
    if (content) {
        std::string contentStr(content);
        int idx = 0;
        int len = 0;
        int contentLength = contentStr.size();
        while (idx < contentLength) {
            while (idx+len < contentLength && contentStr[idx+len] != ':') len += 1;
            if (len) serviceNames.push_back(contentStr.substr(idx, len));
            idx = len + idx + 1;
            len = 0;
        }
    } else {
        // should return if nothing comes in
        return false;
    }
    return true;
}

std::vector<SharedDevice> getDevices() {
    std::vector<std::string> serviceNames;
    char* content = std::getenv("DRIVERS");
    bool getStatus = getDriversFrom(content, serviceNames);
    if (serviceNames.size() == 0 || !getStatus) {
        serviceNames = {"default"};
    }

    std::vector<SharedDevice> devices;

    for (auto serviceName : serviceNames) {
        VLOG(MANAGER) << "Loading service " << serviceName;
        auto driver = V1_3::IDevice::getService(serviceName);
        GeneralResult<SharedDevice> result = V1_3::utils::Device::create(serviceName, std::move(driver));
        if (!result.has_value()) {
            LOG(ERROR) << "Failed to create Device (" << result.error().code
                        << "): " << result.error().message;
        }
        else {
            LOG(INFO) << "Creating SharedDevice for " << serviceName;
            devices.push_back(std::move(result).value());
        }
    }

    return devices;
}

} //namespace nn

namespace hardware {
namespace neuralnetworks {

// We're currently getting our driver implementation in the runtime from
// V1_0::IDevice::getService, but if the same call is being made from another
// version (such as in VTS), we can cast it up. This is outside of
// sampledriver.cpp so that it will work with a vendor hal.

namespace V1_1 {
::android::sp<IDevice> IDevice::getService(const std::string& serviceName,
                                           bool getStub) {
  return IDevice::castFrom(V1_0::IDevice::getService(serviceName, getStub));
}
}  // namespace V1_1

namespace V1_2 {
::android::sp<IDevice> IDevice::getService(const std::string& serviceName,
                                           bool getStub) {
  return IDevice::castFrom(V1_0::IDevice::getService(serviceName, getStub));
}
}  // namespace V1_2

namespace V1_3 {
::android::sp<IDevice> IDevice::getService(const std::string& serviceName,
                                           bool getStub) {
  return IDevice::castFrom(V1_0::IDevice::getService(serviceName, getStub));
}
}  // namespace V1_3
}  // namespace neuralnetworks
}  // namespace hardware
}  // namespace android
