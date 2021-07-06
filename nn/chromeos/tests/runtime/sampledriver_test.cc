// Copyright 2020 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <android-base/logging.h>
#include <gtest/gtest.h>
#include <log/log.h>

#include "HalInterfaces.h"
#include "SampleDriverFull.h"
#include "sampledriver_util.h"

#ifdef NNAPI_USE_MINIMAL_DRIVER
#include "SampleDriverMinimal.h"
#endif

template<typename Base, typename T>
bool instanceof(const T *ptr) {
    return dynamic_cast<const Base*>(ptr) != nullptr;
}

TEST(ChromeSampleDriver, RegistrationDefault) {
  auto device = android::nn::hal::V1_0::IDevice::getService("default");
  EXPECT_EQ(device->getStatus(),
            ::android::hardware::neuralnetworks::V1_0::DeviceStatus::AVAILABLE);

  // Should return an instance of fulldriver by default
  auto isInstanceofFull = instanceof<android::nn::sample_driver::SampleDriverFull>(device.get());
  EXPECT_EQ(isInstanceofFull, true);
}

TEST(ChromeSampleDriver, RegistrationFull) {
  auto device = android::nn::hal::V1_0::IDevice::getService("full");
  EXPECT_EQ(device->getStatus(),
            ::android::hardware::neuralnetworks::V1_0::DeviceStatus::AVAILABLE);
  // Should return an instance of fulldriver
  auto isInstanceofFull = instanceof<android::nn::sample_driver::SampleDriverFull>(device.get());
  EXPECT_TRUE(isInstanceofFull);
}

#ifdef NNAPI_USE_MINIMAL_DRIVER
TEST(ChromeSampleDriver, RegistrationMinimal) {
  auto device = android::nn::hal::V1_0::IDevice::getService("minimal");
  EXPECT_EQ(device->getStatus(),
            ::android::hardware::neuralnetworks::V1_0::DeviceStatus::AVAILABLE);
  // Should return an instance of minimal
  auto isInstanceofMinimal = instanceof<android::nn::sample_driver::SampleDriverMinimal>(device.get());
  EXPECT_TRUE(isInstanceofMinimal);
}
#endif

TEST(ChromeSampleDriver, RegistrationFailure) {
  // Should return null if service is not in the config file
  auto device = android::nn::hal::V1_0::IDevice::getService("Failure");
  EXPECT_EQ(device, nullptr);
}

TEST(ChromeSampleDriver, ReadStandardConfig) {
  std::unordered_map<std::string, std::string> driverToLib;
  std::unordered_map<std::string, std::string> expectedMap = {
    {"default", "libfull-driver.so"},
    {"xnnpack", "libxnn-driver.so"},
    {"full", "libfull-driver.so"}
  };
  std::string filePath = "file/path";
  std::string content = "default:libfull-driver.so\nxnnpack:libxnn-driver.so\nfull:libfull-driver.so";

  auto status = ParseConfigTo(content, driverToLib, filePath);
  EXPECT_TRUE(status);
  EXPECT_EQ(driverToLib, expectedMap);
}

TEST(ChromeSampleDriver, ReadEmptyConfig) {
  std::unordered_map<std::string, std::string> driverToLib;
  std::unordered_map<std::string, std::string> expectedMap = {};
  std::string filePath = "file/path";
  std::string content = "";

  auto status = ParseConfigTo(content, driverToLib, filePath);
  EXPECT_FALSE(status);
  EXPECT_EQ(driverToLib, expectedMap);
}

TEST(ChromeSampleDriver, ReadSuccessiveLineBreakConfig) {
  std::unordered_map<std::string, std::string> driverToLib;
  std::unordered_map<std::string, std::string> expectedMap = {
    {"default", "libfull-driver.so"},
    {"xnnpack", "libxnn-driver.so"},
    {"full", "libfull-driver.so"}
  };
  std::string filePath = "file/path";
  std::string content = "default:libfull-driver.so\n\n\nxnnpack:libxnn-driver.so\nfull:libfull-driver.so\n\n\n\n";

  auto status = ParseConfigTo(content, driverToLib, filePath);
  EXPECT_TRUE(status);
  EXPECT_EQ(driverToLib, expectedMap);
}

TEST(ChromeSampleDriver, ReadImcompleteConfigCase1) {
  std::unordered_map<std::string, std::string> driverToLib;
  std::unordered_map<std::string, std::string> expectedMap = {};
  std::string filePath = "file/path";
  std::string content = "default:\nxnnpack:libxnn-driver.so\nfull:libfull-driver.so\n";

  auto status = ParseConfigTo(content, driverToLib, filePath);
  EXPECT_FALSE(status);
  EXPECT_EQ(driverToLib, expectedMap);
}

TEST(ChromeSampleDriver, ReadImcompleteConfigCase2) {
  std::unordered_map<std::string, std::string> driverToLib;
  std::unordered_map<std::string, std::string> expectedMap = {};
  std::string filePath = "file/path";
  std::string content = "default:libfull-driver.so\nxnnpack:libxnn-driver.so\nfulllibfull-driver.so";

  auto status = ParseConfigTo(content, driverToLib, filePath);
  EXPECT_FALSE(status);
  EXPECT_EQ(driverToLib, expectedMap);
}
