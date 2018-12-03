/*
 * Copyright (C) 2017 The Android Open Source Project
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

#include "TestNeuralNetworksWrapper.h"

#ifndef NNTEST_ONLY_PUBLIC_API
#include "Manager.h"
#include "Utils.h"
#endif

#include <android-base/logging.h>
#include <gtest/gtest.h>
#include <iostream>

using namespace android::nn::test_wrapper;

// DeviceManager::setUseCpuOnly() and Execution::setComputeUsesSynchronousAPI()
// according to arguments, and return RUN_ALL_TESTS().  It is unspecified what
// values those settings have when this function returns.
//
// EXCEPTION: If NNTEST_ONLY_PUBLIC_API is defined, then we cannot call
// non-public DeviceManager::setUseCpuOnly(); we assume the setting is always
// false, and if we are asked to set it to true, we return 0 ("success") without
// running tests.
static int test(bool useCpuOnly, bool computeUsesSynchronousAPI) {
#ifdef NNTEST_ONLY_PUBLIC_API
    if (useCpuOnly) {
        return 0;
    }
#else
    android::nn::DeviceManager::get()->setUseCpuOnly(useCpuOnly);
#endif

    Execution::setComputeUsesSynchronousAPI(computeUsesSynchronousAPI);

    LOG(INFO) << "test(useCpuOnly = " << useCpuOnly
              << ", computeUsesSynchronousAPI = " << computeUsesSynchronousAPI << ")";
    std::cout << "[**********] useCpuOnly = " << useCpuOnly
              << ", computeUsesSynchronousAPI = " << computeUsesSynchronousAPI << std::endl;
    return RUN_ALL_TESTS();
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);

#ifndef NNTEST_ONLY_PUBLIC_API
    android::nn::initVLogMask();
#endif

    return test(false, false) | test(false, true) | test(true, false) | test(true, true);
}
