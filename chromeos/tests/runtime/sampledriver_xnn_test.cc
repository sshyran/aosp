// Copyright 2021 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
#ifdef NNAPI_USE_XNNPACK_DRIVER
#include <android-base/logging.h>
#include <gtest/gtest.h>
#include <log/log.h>

#include "HalInterfaces.h"

#include "SampleDriverFloatXNNPACK.h"

template<typename Base, typename T>
bool instanceof(const T *ptr) {
    return dynamic_cast<const Base*>(ptr) != nullptr;
}

TEST(ChromeSampleDriver, RegistrationXNNPACK) {
  auto device = android::nn::V1_0::IDevice::getService("xnnpack");
  EXPECT_EQ(device->getStatus(),
            ::android::hardware::neuralnetworks::V1_0::DeviceStatus::AVAILABLE);

  // Should return an instance of XNNPACK driver
  auto isInstanceofXNNPACK = instanceof<android::nn::sample_driver::SampleDriverFloatXNNPACK>(device.get());
  EXPECT_TRUE(isInstanceofXNNPACK);
}
#endif
