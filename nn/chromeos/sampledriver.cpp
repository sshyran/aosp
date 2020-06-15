// Copyright 2020 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "SampleDriverFull.h"

namespace android {
namespace hardware {
namespace neuralnetworks {
namespace V1_0 {

// static
// This registers the SampleDriverFull into the DeviceManager.
::android::sp<IDevice> IDevice::getService(const std::string& /*serviceName*/,
                                           bool /*dummy*/) {
  // TODO: Make this more dynamic so we can easily change the
  //       driver.
  return new nn::sample_driver::SampleDriverFull(
      "ChromeSampleDriverFull", {.execTime = 1.0f, .powerUsage = 1.0f});
}

}  // namespace V1_0
}  // namespace neuralnetworks
}  // namespace hardware
}  // namespace android
