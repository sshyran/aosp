// Copyright 2020 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "SampleDriverMinimal.h"
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
#ifndef NNAPI_USE_MINIMAL_DRIVER
  return new nn::sample_driver::SampleDriverFull(
      "ChromeSampleDriverFull",
      // Lower is better, this will force the driver to be selected by the
      // ExecutionPlan
      {.execTime = 0.1f, .powerUsage = 0.1f}
    );
#else
  return new nn::sample_driver::SampleDriverMinimal();
#endif
}

}  // namespace V1_0
}  // namespace neuralnetworks
}  // namespace hardware
}  // namespace android
