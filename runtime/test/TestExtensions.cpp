/*
 * Copyright (C) 2019 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <gtest/gtest.h>

#include "HalInterfaces.h"
#include "Manager.h"
#include "NeuralNetworks.h"
#include "NeuralNetworksExtensions.h"
#include "SampleDriver.h"
#include "TypeManager.h"

namespace {

using DeviceManager = ::android::nn::DeviceManager;
using SampleDriver = ::android::nn::sample_driver::SampleDriver;
using TypeManager = ::android::nn::TypeManager;

const char* kTestDriverName = "extensions-test-driver";
const char* kTestExtension1 = "vendor.test.one";
const char* kTestExtension2 = "vendor.test.two";
const char* kTestExtension3 = "vendor.test.three";

class TestDriver : public SampleDriver {
   public:
    TestDriver() : SampleDriver(kTestDriverName) {}
    ~TestDriver() override {}

    Return<void> getSupportedExtensions(getSupportedExtensions_cb cb) override {
        cb(ErrorStatus::NONE, {
                                      {.name = kTestExtension1},
                                      {.name = kTestExtension2},
                                      {.name = kTestExtension3},
                              });
        return Void();
    }

    Return<void> getCapabilities_1_2(getCapabilities_1_2_cb cb) override {
        cb(ErrorStatus::NONE, {/* Dummy zero-filled capabilities. */});
        return Void();
    }

    Return<void> getSupportedOperations_1_2(const Model&, getSupportedOperations_cb) override {
        CHECK(false) << "not implemented";
        return Void();
    }
};

class ExtensionsTest : public ::testing::Test {
   protected:
    virtual void SetUp() {
        // This is needed before we have the CPU fallback path being treated as a Device.
        // TODO(miaowang): remove once b/72506261 is fixed.
        if (DeviceManager::get()->getUseCpuOnly()) {
            GTEST_SKIP();
        }

        DeviceManager::get()->forTest_registerDevice(kTestDriverName, new TestDriver());
        // Discover extensions provided by registered devices.
        TypeManager::get()->forTest_reset();
        mDevice = getDeviceByName(kTestDriverName);
        ASSERT_NE(mDevice, nullptr);
    }

    virtual void TearDown() {
        DeviceManager::get()->forTest_reInitializeDeviceList();
        TypeManager::get()->forTest_reset();
    }

    ANeuralNetworksDevice* getDeviceByName(const std::string& name) {
        ANeuralNetworksDevice* result = nullptr;
        uint32_t numDevices = 0;
        EXPECT_EQ(ANeuralNetworks_getDeviceCount(&numDevices), ANEURALNETWORKS_NO_ERROR);
        EXPECT_GE(numDevices, 1u);
        for (uint32_t i = 0; i < numDevices; i++) {
            ANeuralNetworksDevice* device = nullptr;
            EXPECT_EQ(ANeuralNetworks_getDevice(i, &device), ANEURALNETWORKS_NO_ERROR);
            const char* buffer = nullptr;
            EXPECT_EQ(ANeuralNetworksDevice_getName(device, &buffer), ANEURALNETWORKS_NO_ERROR);
            if (name.compare(buffer) == 0) {
                EXPECT_EQ(result, nullptr) << "multiple devices named " << name;
                result = device;
            }
        }
        return result;
    }

    bool testDriverSupportsExtension(const char* extensionName) {
        bool result;
        EXPECT_EQ(ANeuralNetworksDevice_getExtensionSupport(mDevice, extensionName, &result),
                  ANEURALNETWORKS_NO_ERROR);
        return result;
    }

   private:
    ANeuralNetworksDevice* mDevice;
};

TEST_F(ExtensionsTest, DeviceReportsSupportedExtensions) {
    EXPECT_TRUE(testDriverSupportsExtension(kTestExtension1));
    EXPECT_FALSE(testDriverSupportsExtension("vendor.test.unknown"));
    EXPECT_FALSE(testDriverSupportsExtension("asdfasdfas"));
    EXPECT_TRUE(testDriverSupportsExtension(kTestExtension2));
    EXPECT_TRUE(testDriverSupportsExtension(kTestExtension3));
}

TEST_F(ExtensionsTest, TestAllowedNativeBinaries) {
    std::vector<std::string> whitelist = {"/data/foo",    "/vendor/foo",         "/odm/foo",
                                          "/product/foo", "/system/whitelisted", "/foobar/foo"};

    auto native_info =
            [&](const std::string& binaryPath) -> android::nn::TypeManager::AppPackageInfo {
        return {.binaryPath = binaryPath,
                .appPackageName = "",
                .appIsSystemApp = false,
                .appIsOnVendorImage = false,
                .appIsOnProductImage = false};
    };

    // No binary info
    EXPECT_FALSE(TypeManager::isExtensionsUseAllowed(native_info(""),
                                                     /* useOnProductImageEnabled = */ false,
                                                     whitelist));
    // Non-approved top-level dir
    EXPECT_FALSE(TypeManager::isExtensionsUseAllowed(native_info("/foobar/foo"),
                                                     /* useOnProductImageEnabled = */ false,
                                                     whitelist));
    // Whitelisted /data binary
    EXPECT_TRUE(TypeManager::isExtensionsUseAllowed(native_info("/data/foo"),
                                                    /* useOnProductImageEnabled = */ false,
                                                    whitelist));
    // Whitelisted /vendor binary
    EXPECT_TRUE(TypeManager::isExtensionsUseAllowed(native_info("/vendor/foo"),
                                                    /* useOnProductImageEnabled = */ false,
                                                    whitelist));
    // Whitelisted /odm binary
    EXPECT_TRUE(TypeManager::isExtensionsUseAllowed(native_info("/odm/foo"),
                                                    /* useOnProductImageEnabled = */ false,
                                                    whitelist));
    // Non-whitelisted /system binary
    EXPECT_FALSE(TypeManager::isExtensionsUseAllowed(native_info("/system/foo"),
                                                     /* useOnProductImageEnabled = */ false,
                                                     whitelist));
    // whitelisted /system binary (can't be whitelisted)
    EXPECT_FALSE(TypeManager::isExtensionsUseAllowed(native_info("/system/whitelisted"),
                                                     /* useOnProductImageEnabled = */ false,
                                                     whitelist));
    // Whitelisted /product binary, product disabled
    EXPECT_FALSE(TypeManager::isExtensionsUseAllowed(native_info("/product/foo"),
                                                     /* useOnProductImageEnabled = */ false,
                                                     whitelist));
    // Whitelisted /product binary, product enabled
    EXPECT_TRUE(TypeManager::isExtensionsUseAllowed(native_info("/product/foo"),
                                                    /* useOnProductImageEnabled = */ true,
                                                    whitelist));
    // Non-whitelisted /product binary, product enabled
    EXPECT_FALSE(TypeManager::isExtensionsUseAllowed(native_info("/product/foo_not_whitelisted"),
                                                     /* useOnProductImageEnabled = */ true,
                                                     whitelist));
    // Non-whitelisted /odm binary
    EXPECT_FALSE(TypeManager::isExtensionsUseAllowed(native_info("/odm/foo_not_whitelisted"),
                                                     /* useOnProductImageEnabled = */ false,
                                                     whitelist));
    // Non-whitelisted /vendor binary
    EXPECT_FALSE(TypeManager::isExtensionsUseAllowed(native_info("/vendor/foo_not_whitelisted"),
                                                     /* useOnProductImageEnabled = */ false,
                                                     whitelist));
    // Non-whitelisted /data binary
    EXPECT_FALSE(TypeManager::isExtensionsUseAllowed(native_info("/data/foo_not_whitelisted"),
                                                     /* useOnProductImageEnabled = */ false,
                                                     whitelist));
}

TEST_F(ExtensionsTest, TestAllowedApps) {
    std::string app_process32 = "/system/bin/app_process32";
    std::string app_process64 = "/system/bin/app_process64";
    std::string other_binary = "/system/bin/foo";

    std::string package = "com.foo";
    std::string package_non_whitelisted = "com.foo2";

    std::vector<std::string> whitelist = {"com.foo"};

    auto test_app_process = [&](const std::string& binary) {
        // /data app
        EXPECT_TRUE(TypeManager::isExtensionsUseAllowed({.binaryPath = binary,
                                                         .appPackageName = package,
                                                         .appIsSystemApp = false,
                                                         .appIsOnVendorImage = false,
                                                         .appIsOnProductImage = false},
                                                        /* useOnProductImageEnabled = */ false,
                                                        whitelist));

        // /system app
        EXPECT_FALSE(TypeManager::isExtensionsUseAllowed({.binaryPath = binary,
                                                          .appPackageName = package,
                                                          .appIsSystemApp = true,
                                                          .appIsOnVendorImage = false,
                                                          .appIsOnProductImage = false},
                                                         /* useOnProductImageEnabled = */ false,
                                                         whitelist));

        // /vendor || /odm app
        EXPECT_TRUE(TypeManager::isExtensionsUseAllowed({.binaryPath = binary,
                                                         .appPackageName = package,
                                                         .appIsSystemApp = true,
                                                         .appIsOnVendorImage = true,
                                                         .appIsOnProductImage = false},
                                                        /* useOnProductImageEnabled = */ false,
                                                        whitelist));

        // /product app, disabled
        EXPECT_FALSE(TypeManager::isExtensionsUseAllowed({.binaryPath = binary,
                                                          .appPackageName = package,
                                                          .appIsSystemApp = true,
                                                          .appIsOnVendorImage = false,
                                                          .appIsOnProductImage = true},
                                                         /* useOnProductImageEnabled = */ false,
                                                         whitelist));

        // /product app, enabled
        EXPECT_TRUE(TypeManager::isExtensionsUseAllowed({.binaryPath = binary,
                                                         .appPackageName = package,
                                                         .appIsSystemApp = true,
                                                         .appIsOnVendorImage = false,
                                                         .appIsOnProductImage = true},
                                                        /* useOnProductImageEnabled = */ true,
                                                        whitelist));

        // /product app, enabled, package name not on whitelist
        EXPECT_FALSE(TypeManager::isExtensionsUseAllowed({.binaryPath = binary,
                                                          .appPackageName = package_non_whitelisted,
                                                          .appIsSystemApp = true,
                                                          .appIsOnVendorImage = false,
                                                          .appIsOnProductImage = true},
                                                         /* useOnProductImageEnabled = */ true,
                                                         whitelist));

        // /data app, package name not on whitelist
        EXPECT_FALSE(TypeManager::isExtensionsUseAllowed({.binaryPath = binary,
                                                          .appPackageName = package_non_whitelisted,
                                                          .appIsSystemApp = false,
                                                          .appIsOnVendorImage = false,
                                                          .appIsOnProductImage = false},
                                                         /* useOnProductImageEnabled = */ false,
                                                         whitelist));

        // /vendor || /odm app, package name not on whitelist
        EXPECT_FALSE(TypeManager::isExtensionsUseAllowed({.binaryPath = binary,
                                                          .appPackageName = package_non_whitelisted,
                                                          .appIsSystemApp = true,
                                                          .appIsOnVendorImage = true,
                                                          .appIsOnProductImage = false},
                                                         /* useOnProductImageEnabled = */ false,
                                                         whitelist));
    };
    test_app_process(app_process64);
    test_app_process(app_process32);

    // Test all positive cases fail if binary is not app_process32|64
    EXPECT_FALSE(TypeManager::isExtensionsUseAllowed({.binaryPath = other_binary,
                                                      .appPackageName = package,
                                                      .appIsSystemApp = false,
                                                      .appIsOnVendorImage = false,
                                                      .appIsOnProductImage = false},
                                                     /* useOnProductImageEnabled = */ false,
                                                     whitelist));
    EXPECT_FALSE(TypeManager::isExtensionsUseAllowed({.binaryPath = other_binary,
                                                      .appPackageName = package,
                                                      .appIsSystemApp = true,
                                                      .appIsOnVendorImage = true,
                                                      .appIsOnProductImage = false},
                                                     /* useOnProductImageEnabled = */ false,
                                                     whitelist));

    EXPECT_FALSE(TypeManager::isExtensionsUseAllowed({.binaryPath = other_binary,
                                                      .appPackageName = package,
                                                      .appIsSystemApp = true,
                                                      .appIsOnVendorImage = false,
                                                      .appIsOnProductImage = true},
                                                     /* useOnProductImageEnabled = */ true,
                                                     whitelist));
}

}  // namespace
