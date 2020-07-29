// Copyright 2020 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "HalInterfaces.h"

namespace android {
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
