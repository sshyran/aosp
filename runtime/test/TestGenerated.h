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

#ifndef ANDROID_FRAMEWORK_ML_NN_RUNTIME_TEST_TESTGENERATED_H
#define ANDROID_FRAMEWORK_ML_NN_RUNTIME_TEST_TESTGENERATED_H

#include "TestHarness.h"
#include "TestNeuralNetworksWrapper.h"

#include <gtest/gtest.h>

using namespace android::nn::test_wrapper;
using namespace test_helper;

namespace generated_tests {

class GeneratedTests : public ::testing::Test {
   protected:
    virtual void SetUp() override;
    virtual void TearDown() override;

    Compilation compileModel(const Model* model);
    void executeWithCompilation(const Model* model, Compilation* compilation,
                                std::function<bool(int)> isIgnored,
                                std::vector<MixedTypedExample>& examples, std::string dumpFile);
    void executeOnce(const Model* model, std::function<bool(int)> isIgnored,
                     std::vector<MixedTypedExample>& examples, std::string dumpFile);
    void executeMultithreadedOwnCompilation(const Model* model, std::function<bool(int)> isIgnored,
                                            std::vector<MixedTypedExample>& examples);
    void executeMultithreadedSharedCompilation(const Model* model,
                                               std::function<bool(int)> isIgnored,
                                               std::vector<MixedTypedExample>& examples);
    // Test driver for those generated from ml/nn/runtime/test/spec
    void execute(std::function<void(Model*)> createModel, std::function<bool(int)> isIgnored,
                 std::vector<MixedTypedExample>& examples, std::string dumpFile = "");

    std::string mCacheDir;
    std::vector<uint8_t> mToken;
    bool mTestCompilationCaching;
};

// Tag for the dynamic output shape tests
class DynamicOutputShapeTest : public GeneratedTests {};

}  // namespace generated_tests

using namespace generated_tests;

#endif  // ANDROID_FRAMEWORK_ML_NN_RUNTIME_TEST_TESTGENERATED_H
