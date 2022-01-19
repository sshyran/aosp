// Copyright 2020 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <android-base/logging.h>

#include <string>
#include <unordered_map>
#include <utility>
#include <sstream>
#include <vector>

#include "HalInterfaces.h"
#include "sampledriver_util.h"

// type of function pointer
typedef void* (*get_driver_func)();

std::unordered_map<std::string, std::string> driverToLibFallback = {
  {"cros-default", "libfull-driver.so"},
  {"default", "libfull-driver.so"},
  {"xnnpack", "libxnn-driver.so"},
  {"full", "libfull-driver.so"},
  {"minimal", "libminimal-driver.so"}
};
std::unordered_map<std::string, std::string> driverToLib;
std::string funcName = "get_driver";

template <typename T>
T getDriverInstance(std::string serviceName) {
    // dynamically construct map via conf file; responsive to any config change during execution time
    std::string content = "";
    std::string filePath = "/etc/env.d/drivers";
    bool readStatus = ReadFileTo(filePath, &content);
    bool parseStatus = false;
    if (readStatus) {
      parseStatus = ParseConfigTo(content, driverToLib, filePath);
    }

    // will use default config if parse or read failed
    if (!readStatus || !parseStatus) {
      LOG(ERROR) << "Will use fallback config";
      driverToLib = driverToLibFallback;
    }

    // if does not register any config use fallback one
    if (driverToLib.size() == 0) {
      LOG(ERROR) << "Got empty config!" << " ;Will use fallback config";
      driverToLib = driverToLibFallback;
    }

    if (driverToLib.find(serviceName) == driverToLib.end()) {
      LOG(ERROR) << "Cannot find " << serviceName << " in available driver list.";
      return nullptr;
    }

    void *driverHandle = GetFunctionFrom(driverToLib[serviceName], funcName);

    LOG(INFO) << "Loading " << serviceName << " from " << driverToLib[serviceName];
    if (driverHandle == nullptr) {
      LOG(ERROR) << driverToLib[serviceName] << " can not be loaded!";
      return nullptr;
    }
    auto getDriverFunc = reinterpret_cast<get_driver_func>(driverHandle);

    auto sampleDriverInsance = static_cast<T>(getDriverFunc());
    if (sampleDriverInsance == nullptr) {
      LOG(FATAL) << "Cannot create driver from " << driverToLib[serviceName];
    }

    return sampleDriverInsance;
}

namespace android {
namespace hardware {
namespace neuralnetworks {
namespace V1_0 {

// static
// This registers the SampleDriverFull into the DeviceManager.
::android::sp<IDevice> IDevice::getService(const std::string& serviceName,
                                           bool /*dummy*/) {
    LOG(INFO) << "Creating " << serviceName << " driver";

    auto sampleDriverInsance = getDriverInstance<IDevice*>(serviceName);

    return sampleDriverInsance;
}

}  // namespace V1_0
}  // namespace neuralnetworks
}  // namespace hardware
}  // namespace android
