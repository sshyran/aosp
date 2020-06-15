// Copyright 2020 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <android-base/logging.h>
#include <gtest/gtest.h>
#include <log/log.h>

#include "HalInterfaces.h"

TEST(ChromeSampleDriver, Registration) {
  auto device = android::nn::hal::V1_0::IDevice::getService("default");
  EXPECT_EQ(device->getStatus(),
            ::android::hardware::neuralnetworks::V1_0::DeviceStatus::AVAILABLE);
  // TODO: implement some tests against the returned device and check
  //       that it's the correct object.
}
