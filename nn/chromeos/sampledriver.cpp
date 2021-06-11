// Copyright 2020 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "SampleDriverMinimal.h"
#include "SampleDriverFull.h"
#include "SampleDriverPartial.h"
#include "SampleDriverFloatXNNPACK.h"
#ifdef NNAPI_USE_XNNPACK_DRIVER
#include <xnnpack.h>
#endif

namespace android {
namespace hardware {
namespace neuralnetworks {
namespace V1_0 {

// static
// This registers the SampleDriverFull into the DeviceManager.
::android::sp<IDevice> IDevice::getService(const std::string& /*serviceName*/,
                                           bool /*dummy*/) {
#ifdef NNAPI_USE_MINIMAL_DRIVER
  LOG(INFO) << "Creating CPU Driver - Minimal";
  return new nn::sample_driver::SampleDriverMinimal();
#elif NNAPI_USE_XNNPACK_DRIVER
  LOG(INFO) << "Creating CPU Driver - XNNPACK";

  sp<nn::sample_driver::SampleDriverFloatXNNPACK> driver(new nn::sample_driver::SampleDriverFloatXNNPACK("ChromeSampleDriverXNNPACK"));
  xnn_status status = xnn_initialize(/*allocator=*/nullptr);
  if (status != xnn_status_success) {
      LOG(FATAL) << "xnn_initialize failed!";
  }

  return driver;
#else
  LOG(INFO) << "Creating CPU Driver - Full";
  return new nn::sample_driver::SampleDriverFull(
      "ChromeSampleDriverFull",
      // Lower is better, this will force the driver to be selected by the
      // ExecutionPlan
      {.execTime = 0.1f, .powerUsage = 0.1f}
    );
#endif
}

}  // namespace V1_0
}  // namespace neuralnetworks
}  // namespace hardware
}  // namespace android
