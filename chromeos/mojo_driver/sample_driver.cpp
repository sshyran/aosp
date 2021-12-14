// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "sample_driver.h"

#include "SampleDriverFull.h"

namespace android {
namespace nn {

V1_3::IDevice* GetSampleDriver() {
  return new android::nn::sample_driver::SampleDriverFull(
      "ChromeSampleDriverFull",
      // Lower is better, this will force the driver to be selected by the
      // ExecutionPlan
      {.execTime = .9f, .powerUsage = .9f});
}

}  // namespace nn
}  // namespace android
