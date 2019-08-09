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

#include "TestGenerated.h"
#include "TestHarness.h"

#include <gtest/gtest.h>

#include <ftw.h>
#include <unistd.h>
#include <cassert>
#include <cmath>
#include <fstream>
#include <iostream>
#include <map>
#include <thread>
#include <vector>

// Systrace is not available from CTS tests due to platform layering
// constraints. We reuse the NNTEST_ONLY_PUBLIC_API flag, as that should also be
// the case for CTS (public APIs only).
#ifndef NNTEST_ONLY_PUBLIC_API
#include "Tracing.h"
#else
#define NNTRACE_FULL_RAW(...)
#define NNTRACE_APP(...)
#define NNTRACE_APP_SWITCH(...)
#endif

namespace generated_tests {
using namespace android::nn::test_wrapper;
using namespace test_helper;

std::optional<Compilation> GeneratedTests::compileModel(const Model* model) {
    NNTRACE_APP(NNTRACE_PHASE_COMPILATION, "compileModel");
    if (mTestCompilationCaching) {
        // Compile the model twice with the same token, so that compilation caching will be
        // exercised if supported by the driver.
        // No invalid model will be passed to this branch.
        EXPECT_FALSE(mExpectFailure);
        Compilation compilation1(model);
        EXPECT_EQ(compilation1.setCaching(mCacheDir, mToken), Result::NO_ERROR);
        EXPECT_EQ(compilation1.finish(), Result::NO_ERROR);
        Compilation compilation2(model);
        EXPECT_EQ(compilation2.setCaching(mCacheDir, mToken), Result::NO_ERROR);
        EXPECT_EQ(compilation2.finish(), Result::NO_ERROR);
        return compilation2;
    } else {
        Compilation compilation(model);
        Result result = compilation.finish();

        // For valid model, we check the compilation result == NO_ERROR.
        // For invalid model, the driver may fail at compilation or execution, so any result code is
        // permitted at this point.
        if (mExpectFailure && result != Result::NO_ERROR) return std::nullopt;
        EXPECT_EQ(result, Result::NO_ERROR);
        return compilation;
    }
}

void GeneratedTests::executeWithCompilation(const Model* model, Compilation* compilation,
                                            std::function<bool(int)> isIgnored,
                                            std::vector<MixedTypedExample>& examples) {
    int exampleNo = 0;
    float fpAtol = 1e-5f;
    float fpRtol = 5.0f * 1.1920928955078125e-7f;
    for (auto& example : examples) {
        NNTRACE_APP(NNTRACE_PHASE_EXECUTION, "executeWithCompilation example");
        SCOPED_TRACE(exampleNo);
        // TODO: We leave it as a copy here.
        // Should verify if the input gets modified by the test later.
        MixedTyped inputs = example.operands.first;
        const MixedTyped& golden = example.operands.second;

        const bool hasFloat16Inputs = !inputs.float16Operands.empty();
        if (model->isRelaxed() || hasFloat16Inputs) {
            // TODO: Adjust the error limit based on testing.
            // If in relaxed mode, set the absolute tolerance to be 5ULP of FP16.
            fpAtol = 5.0f * 0.0009765625f;
            // Set the relative tolerance to be 5ULP of the corresponding FP precision.
            fpRtol = 5.0f * 0.0009765625f;
        }

        Execution execution(compilation);
        MixedTyped test;
        {
            NNTRACE_APP(NNTRACE_PHASE_INPUTS_AND_OUTPUTS, "executeWithCompilation example");
            // Set all inputs
            for_all(inputs, [&execution](int idx, const void* p, size_t s) {
                const void* buffer = s == 0 ? nullptr : p;
                ASSERT_EQ(Result::NO_ERROR, execution.setInput(idx, buffer, s));
            });

            // Go through all typed outputs
            resize_accordingly(golden, test);
            for_all(test, [&execution](int idx, void* p, size_t s) {
                void* buffer = s == 0 ? nullptr : p;
                ASSERT_EQ(Result::NO_ERROR, execution.setOutput(idx, buffer, s));
            });
        }

        Result result = execution.compute();
        if (mExpectFailure) {
            ASSERT_NE(result, Result::NO_ERROR);
            continue;
        } else {
            ASSERT_EQ(result, Result::NO_ERROR);
        }

        {
            NNTRACE_APP(NNTRACE_PHASE_RESULTS, "executeWithCompilation example");

            // Get output dimensions
            for_each<uint32_t>(
                    test.operandDimensions, [&execution](int idx, std::vector<uint32_t>& t) {
                        ASSERT_EQ(Result::NO_ERROR, execution.getOutputOperandDimensions(idx, &t));
                    });

            // Filter out don't cares
            MixedTyped filteredGolden = filter(golden, isIgnored);
            MixedTyped filteredTest = filter(test, isIgnored);
            // We want "close-enough" results for float

            compare(filteredGolden, filteredTest, fpAtol, fpRtol);
        }
        exampleNo++;

        if (example.expectedMultinomialDistributionTolerance > 0) {
            expectMultinomialDistributionWithinTolerance(test, example);
        }
    }
}

void GeneratedTests::executeOnce(const Model* model, std::function<bool(int)> isIgnored,
                                 std::vector<MixedTypedExample>& examples) {
    NNTRACE_APP(NNTRACE_PHASE_OVERALL, "executeOnce");
    std::optional<Compilation> compilation = compileModel(model);
    // Early return if compilation fails. The compilation result code is checked in compileModel.
    if (!compilation) return;
    executeWithCompilation(model, &compilation.value(), isIgnored, examples);
}

void GeneratedTests::executeMultithreadedOwnCompilation(const Model* model,
                                                        std::function<bool(int)> isIgnored,
                                                        std::vector<MixedTypedExample>& examples) {
    NNTRACE_APP(NNTRACE_PHASE_OVERALL, "executeMultithreadedOwnCompilation");
    SCOPED_TRACE("MultithreadedOwnCompilation");
    std::vector<std::thread> threads;
    for (int i = 0; i < 10; i++) {
        threads.push_back(std::thread([&]() { executeOnce(model, isIgnored, examples); }));
    }
    std::for_each(threads.begin(), threads.end(), [](std::thread& t) { t.join(); });
}

void GeneratedTests::executeMultithreadedSharedCompilation(
        const Model* model, std::function<bool(int)> isIgnored,
        std::vector<MixedTypedExample>& examples) {
    NNTRACE_APP(NNTRACE_PHASE_OVERALL, "executeMultithreadedSharedCompilation");
    SCOPED_TRACE("MultithreadedSharedCompilation");
    std::optional<Compilation> compilation = compileModel(model);
    // Early return if compilation fails. The ompilation result code is checked in compileModel.
    if (!compilation) return;
    std::vector<std::thread> threads;
    for (int i = 0; i < 10; i++) {
        threads.push_back(std::thread([&]() {
            executeWithCompilation(model, &compilation.value(), isIgnored, examples);
        }));
    }
    std::for_each(threads.begin(), threads.end(), [](std::thread& t) { t.join(); });
}

// Test driver for those generated from ml/nn/runtime/test/spec
void GeneratedTests::execute(std::function<void(Model*)> createModel,
                             std::function<bool(int)> isIgnored,
                             std::vector<MixedTypedExample>& examples) {
    NNTRACE_APP(NNTRACE_PHASE_OVERALL, "execute");
    Model model;
    createModel(&model);
    model.finish();
    auto executeInternal = [&model, &isIgnored, &examples, this]() {
        SCOPED_TRACE("TestCompilationCaching = " + std::to_string(mTestCompilationCaching));
#ifndef NNTEST_MULTITHREADED
        executeOnce(&model, isIgnored, examples);
#else   // defined(NNTEST_MULTITHREADED)
        executeMultithreadedOwnCompilation(&model, isIgnored, examples);
        executeMultithreadedSharedCompilation(&model, isIgnored, examples);
#endif  // !defined(NNTEST_MULTITHREADED)
    };
    mTestCompilationCaching = false;
    executeInternal();
    if (!mExpectFailure) {
        mTestCompilationCaching = true;
        executeInternal();
    }
}

void GeneratedTests::SetUp() {
#ifdef NNTEST_COMPUTE_MODE
    mOldComputeMode = Execution::setComputeMode(GetParam());
#endif
    char cacheDirTemp[] = "/data/local/tmp/TestCompilationCachingXXXXXX";
    char* cacheDir = mkdtemp(cacheDirTemp);
    ASSERT_NE(cacheDir, nullptr);
    mCacheDir = cacheDir;
    mToken = std::vector<uint8_t>(ANEURALNETWORKS_BYTE_SIZE_OF_CACHE_TOKEN, 0);
}

void GeneratedTests::TearDown() {
#ifdef NNTEST_COMPUTE_MODE
    Execution::setComputeMode(mOldComputeMode);
#endif
    if (!::testing::Test::HasFailure()) {
        // TODO: Switch to std::filesystem::remove_all once libc++fs is made available in CTS.
        // Remove the cache directory specified by path recursively.
        auto callback = [](const char* child, const struct stat*, int, struct FTW*) {
            return remove(child);
        };
        nftw(mCacheDir.c_str(), callback, 128, FTW_DEPTH | FTW_MOUNT | FTW_PHYS);
    }
}

#ifdef NNTEST_COMPUTE_MODE
INSTANTIATE_TEST_SUITE_P(ComputeMode, GeneratedTests,
                         testing::Values(Execution::ComputeMode::SYNC,
                                         Execution::ComputeMode::ASYNC,
                                         Execution::ComputeMode::BURST));
#endif

}  // namespace generated_tests
