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

#include "Manager.h"
#include "SampleDriver.h"
#include "TestNeuralNetworksWrapper.h"

#include <gtest/gtest.h>
#include <cstdlib>
#include <numeric>

using namespace android::nn;
using Result = test_wrapper::Result;
using Type = test_wrapper::Type;
using HidlToken = hidl_array<uint8_t, ANEURALNETWORKS_BYTE_SIZE_OF_CACHE_TOKEN>;
const Timing kBadTiming = {.timeOnDevice = UINT64_MAX, .timeInDriver = UINT64_MAX};
template <typename T>
using MQDescriptorSync = ::android::hardware::MQDescriptorSync<T>;

namespace {

enum class IsCachingSupportedReturn { TRUE, FALSE, ERROR };

// This is an IDevice for testing purposes which overrides several methods from sample driver:
// - supports all the operations and is faster than cpu fallback.
// - overrides isCachingSupported to report true/false according to mIsCachingSupported.
// - overrides prepareModelFromCache to return error status according to
//   mErrorStatusPrepareFromCache.
// - produces CachingPreparedModel on prepareModel and prepareModelFromCache.
//
// The cache entry is written by CachingPreparedModel::saveToCache and is checked later by
// CachingDriver::prepareModelFromCache.
//
// The CachingDriver has 2 flags mHasPreparedFromCache and mHasSavedToCache to check if the
// correct methods are invoked by the runtime.
class CachingDriver : public sample_driver::SampleDriver {
   private:
    static constexpr size_t kCacheSize = 256;

    class CachingPreparedModel : public IPreparedModel {
       public:
        CachingPreparedModel(CachingDriver* driver) : mDriver(driver) {}

        Return<ErrorStatus> execute(const Request&, const sp<V1_0::IExecutionCallback>&) override {
            return ErrorStatus::DEVICE_UNAVAILABLE;
        }
        Return<ErrorStatus> execute_1_2(const Request&, MeasureTiming,
                                        const sp<V1_2::IExecutionCallback>&) override {
            return ErrorStatus::DEVICE_UNAVAILABLE;
        }
        Return<void> executeSynchronously(const Request&, MeasureTiming,
                                          executeSynchronously_cb cb) override {
            cb(ErrorStatus::DEVICE_UNAVAILABLE, {}, kBadTiming);
            return Void();
        }
        Return<void> configureExecutionBurst(const sp<V1_2::IBurstCallback>&,
                                             const MQDescriptorSync<V1_2::FmqRequestDatum>&,
                                             const MQDescriptorSync<V1_2::FmqResultDatum>&,
                                             configureExecutionBurst_cb cb) override {
            cb(ErrorStatus::DEVICE_UNAVAILABLE, nullptr);
            return Void();
        }

        // Writes the cache entry as provided by CachingDriver and sets mHasSavedToCache in
        // CachingDriver.
        Return<ErrorStatus> saveToCache(const hidl_handle& cache1Handle,
                                        const hidl_handle& cache2Handle,
                                        const HidlToken&) override {
            writeToCache(cache1Handle->data[0], mDriver->getCache1Data());
            writeToCache(cache2Handle->data[0], mDriver->getCache2Data());
            mDriver->savedToCache();
            return ErrorStatus::NONE;
        }

       private:
        void writeToCache(int fd, const std::vector<uint8_t>& cache) {
            EXPECT_EQ(write(fd, cache.data(), kCacheSize), static_cast<ssize_t>(kCacheSize));
        }

        CachingDriver* mDriver;
    };

   public:
    CachingDriver(const char* name, IsCachingSupportedReturn supported, ErrorStatus error)
        : SampleDriver(name), mIsCachingSupported(supported), mErrorStatusPrepareFromCache(error) {
        mCache1Data.resize(kCacheSize);
        std::iota(mCache1Data.begin(), mCache1Data.end(), 0);
        mCache2Data.resize(kCacheSize);
        std::iota(mCache2Data.begin(), mCache2Data.end(), 1);
    }
    ~CachingDriver() override {}

    // Generates CachingPreparedModel.
    Return<ErrorStatus> prepareModel_1_2(const Model&, ExecutionPreference,
                                         const sp<IPreparedModelCallback>& cb) override {
        ErrorStatus status = ErrorStatus::NONE;
        cb->notify_1_2(status, new CachingPreparedModel(this));
        return status;
    }

    // Reports faster than cpu.
    Return<void> getCapabilities_1_2(getCapabilities_1_2_cb cb) override {
        android::nn::initVLogMask();
        const PerformanceInfo kPerf = {.execTime = 0.1, .powerUsage = 0.1};
        Capabilities capabilities = {
                .relaxedFloat32toFloat16PerformanceScalar = kPerf,
                .relaxedFloat32toFloat16PerformanceTensor = kPerf,
                .operandPerformance = android::nn::nonExtensionOperandPerformance(kPerf)};
        cb(ErrorStatus::NONE, capabilities);
        return Void();
    }

    // Reports supporting all operations.
    Return<void> getSupportedOperations_1_2(const Model& model,
                                            getSupportedOperations_cb cb) override {
        std::vector<bool> supported(model.operations.size(), true);
        cb(ErrorStatus::NONE, supported);
        return Void();
    }

    // Reports according to mIsCachingSupported.
    Return<void> isCachingSupported(isCachingSupported_cb cb) override {
        switch (mIsCachingSupported) {
            case IsCachingSupportedReturn::TRUE:
                cb(ErrorStatus::NONE, true);
                break;
            case IsCachingSupportedReturn::FALSE:
                cb(ErrorStatus::NONE, false);
                break;
            case IsCachingSupportedReturn::ERROR:
                cb(ErrorStatus::DEVICE_UNAVAILABLE, true);
                break;
        }
        return Void();
    }

    // Checks if the cache entry is correct, notifies error status according to
    // mErrorStatusPrepareFromCache, sets mHasPreparedFromCache.
    Return<ErrorStatus> prepareModelFromCache(
            const hidl_handle& cache1Handle, const hidl_handle& cache2Handle, const HidlToken&,
            const sp<V1_2::IPreparedModelCallback>& callback) override {
        readFromCache(cache1Handle->data[0], mCache1Data);
        readFromCache(cache2Handle->data[0], mCache2Data);
        mHasPreparedFromCache = true;
        if (mErrorStatusPrepareFromCache == ErrorStatus::NONE) {
            callback->notify_1_2(mErrorStatusPrepareFromCache, new CachingPreparedModel(this));
        } else {
            callback->notify_1_2(mErrorStatusPrepareFromCache, nullptr);
        }
        return ErrorStatus::NONE;
    };

    bool hasPreparedFromCache() const { return mHasPreparedFromCache; }
    bool hasSavedToCache() const { return mHasSavedToCache; }

   private:
    void savedToCache() { mHasSavedToCache = true; }

    const std::vector<uint8_t>& getCache1Data() const { return mCache1Data; }
    const std::vector<uint8_t>& getCache2Data() const { return mCache2Data; }

    void readFromCache(int fd, const std::vector<uint8_t>& expected) {
        std::vector<uint8_t> actual(kCacheSize);
        EXPECT_EQ(read(fd, actual.data(), kCacheSize), static_cast<ssize_t>(kCacheSize));
        EXPECT_EQ(actual, expected);
    }

    std::vector<uint8_t> mCache1Data;
    std::vector<uint8_t> mCache2Data;

    IsCachingSupportedReturn mIsCachingSupported;
    ErrorStatus mErrorStatusPrepareFromCache;

    bool mHasPreparedFromCache = false;
    bool mHasSavedToCache = false;
};

void CreateBroadcastAddModel(test_wrapper::Model* model) {
    test_wrapper::OperandType matrixType(Type::TENSOR_FLOAT32, {2, 2});
    test_wrapper::OperandType vectorType(Type::TENSOR_FLOAT32, {2});
    test_wrapper::OperandType scalarType(Type::INT32, {});
    int32_t activation(ANEURALNETWORKS_FUSED_NONE);
    auto a = model->addOperand(&matrixType);
    auto b = model->addOperand(&vectorType);
    auto c = model->addOperand(&matrixType);
    auto d = model->addOperand(&scalarType);
    model->setOperandValue(d, &activation, sizeof(activation));
    model->addOperation(ANEURALNETWORKS_ADD, {a, b, d}, {c});
    model->identifyInputsAndOutputs({a, b}, {c});
    ASSERT_TRUE(model->isValid());
    ASSERT_EQ(model->finish(), Result::NO_ERROR);
}

class CompilationCachingTest : public ::testing::TestWithParam<ErrorStatus> {
   protected:
    virtual void SetUp() override {
        char cacheDirTemp[] = "/data/local/tmp/TestCompilationCachingXXXXXX";
        char* cacheDir = mkdtemp(cacheDirTemp);
        ASSERT_NE(cacheDir, nullptr);
        mCacheDir = cacheDir;
        CreateBroadcastAddModel(&mModel);
        mToken = std::vector<uint8_t>(ANEURALNETWORKS_BYTE_SIZE_OF_CACHE_TOKEN, 0);
    }

    void compileModel(const sp<CachingDriver>& driver) {
        DeviceManager::get()->forTest_registerDevice(kDeviceName, driver);

        // Make device list including only a single driver device.
        uint32_t numDevices = 0;
        EXPECT_EQ(ANeuralNetworks_getDeviceCount(&numDevices), ANEURALNETWORKS_NO_ERROR);
        EXPECT_GE(numDevices, (uint32_t)1);
        std::vector<ANeuralNetworksDevice*> devices;
        for (uint32_t i = 0; i < numDevices; i++) {
            ANeuralNetworksDevice* device = nullptr;
            EXPECT_EQ(ANeuralNetworks_getDevice(i, &device), ANEURALNETWORKS_NO_ERROR);
            const char* buffer = nullptr;
            int result = ANeuralNetworksDevice_getName(device, &buffer);
            if (result == ANEURALNETWORKS_NO_ERROR && strcmp(buffer, kDeviceName) == 0) {
                devices.push_back(device);
                break;
            }
        }
        ASSERT_EQ(devices.size(), 1u);

        // Compile the model with the device.
        ANeuralNetworksCompilation* compilation = nullptr;
        ASSERT_EQ(ANeuralNetworksCompilation_createForDevices(mModel.getHandle(), devices.data(),
                                                              devices.size(), &compilation),
                  ANEURALNETWORKS_NO_ERROR);
        ASSERT_EQ(ANeuralNetworksCompilation_setCaching(compilation, mCacheDir.c_str(),
                                                        mToken.data()),
                  ANEURALNETWORKS_NO_ERROR);
        ASSERT_EQ(ANeuralNetworksCompilation_finish(compilation), ANEURALNETWORKS_NO_ERROR);

        DeviceManager::get()->forTest_reInitializeDeviceList();
    }

    void createCache() {
        sp<CachingDriver> driver =
                new CachingDriver(kDeviceName, IsCachingSupportedReturn::TRUE, ErrorStatus::NONE);
        compileModel(driver);
    }

    static constexpr char kDeviceName[] = "deviceTestCompilationCaching";
    const ErrorStatus kErrorStatusPrepareFromCache = GetParam();
    test_wrapper::Model mModel;
    std::string mCacheDir;
    std::vector<uint8_t> mToken;
};

// If caching is supported by the driver but the cache files do not exist,
// the runtime should call IPreparedModel::saveToCache to save the cache.
TEST_P(CompilationCachingTest, CacheNotExist) {
    if (DeviceManager::get()->getUseCpuOnly()) {
        return;
    }
    sp<CachingDriver> driver = new CachingDriver(kDeviceName, IsCachingSupportedReturn::TRUE,
                                                 kErrorStatusPrepareFromCache);
    compileModel(driver);
    EXPECT_FALSE(driver->hasPreparedFromCache());
    EXPECT_TRUE(driver->hasSavedToCache());
}

// If caching is not supported by the driver, the runtime should call neither
// IDevice::prepareModelFromCache nor IPreparedModel::saveToCache.
TEST_P(CompilationCachingTest, CacheNotSupported) {
    if (DeviceManager::get()->getUseCpuOnly()) {
        return;
    }
    createCache();
    sp<CachingDriver> driver = new CachingDriver(kDeviceName, IsCachingSupportedReturn::FALSE,
                                                 kErrorStatusPrepareFromCache);
    compileModel(driver);
    EXPECT_FALSE(driver->hasPreparedFromCache());
    EXPECT_FALSE(driver->hasSavedToCache());
}

// If the driver reports error on isCachingSupported, the runtime should recover from the error
// by setting the driver as caching not supported. The runtime should call neither
// IDevice::prepareModelFromCache nor IPreparedModel::saveToCache.
TEST_P(CompilationCachingTest, IsCachingSupportedError) {
    if (DeviceManager::get()->getUseCpuOnly()) {
        return;
    }
    createCache();
    sp<CachingDriver> driver = new CachingDriver(kDeviceName, IsCachingSupportedReturn::ERROR,
                                                 kErrorStatusPrepareFromCache);
    compileModel(driver);
    EXPECT_FALSE(driver->hasPreparedFromCache());
    EXPECT_FALSE(driver->hasSavedToCache());
}

// If caching is supported by the driver and the cache files exist, the runtime should call
// IDevice::prepareModelFromCache, and should call IPreparedModel::saveToCache only if
// IDevice::prepareModelFromCache fails.
TEST_P(CompilationCachingTest, CacheExistAndSupported) {
    if (DeviceManager::get()->getUseCpuOnly()) {
        return;
    }
    createCache();
    sp<CachingDriver> driver = new CachingDriver(kDeviceName, IsCachingSupportedReturn::TRUE,
                                                 kErrorStatusPrepareFromCache);
    compileModel(driver);
    EXPECT_TRUE(driver->hasPreparedFromCache());
    if (kErrorStatusPrepareFromCache == ErrorStatus::NONE) {
        EXPECT_FALSE(driver->hasSavedToCache());
    } else {
        EXPECT_TRUE(driver->hasSavedToCache());
    }
}

INSTANTIATE_TEST_CASE_P(TestCompilationCaching, CompilationCachingTest,
                        testing::Values(ErrorStatus::NONE, ErrorStatus::GENERAL_FAILURE,
                                        ErrorStatus::DEVICE_UNAVAILABLE,
                                        ErrorStatus::INVALID_ARGUMENT));

}  // end namespace
