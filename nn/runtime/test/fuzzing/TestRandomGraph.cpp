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

#include "fuzzing/OperationManager.h"
#include "fuzzing/RandomGraphGenerator.h"
#include "fuzzing/RandomGraphGeneratorUtils.h"

#include "TestNeuralNetworksWrapper.h"

#include <algorithm>
#include <string>

#include <android-base/properties.h>
#include <gtest/gtest.h>

namespace android {
namespace nn {
namespace fuzzing_test {

using test_wrapper::Result;

// NN API fuzzer logging setting comes from system property debug.nn.fuzzer.log and
// debug.nn.fuzzer.dumpspec.
// * setprop debug.nn.fuzzer.log 1 : enable logging.
// * setprop debug.nn.fuzzer.log 0 : silence logging.
// * setprop debug.nn.fuzzer.dumpspec 1 : dump the randomly generated graph to a spec file.
// * setprop debug.nn.fuzzer.dumpspec 0 : do not dump the graph.
//
// Logs and spec files are dumped to /data/local/tmp/${testname}.{log,mod.py},
// e.g. for test case TestRandomGraph/RandomGraphTest/Large/0,
//      log : /data/local/tmp/TestRandomGraph_RandomGraphTest_Large_0.log
//      spec: /data/local/tmp/TestRandomGraph_RandomGraphTest_Large_0.mod.py
class RandomGraphTest : public ::testing::TestWithParam<uint32_t> {
   public:
    static void SetUpTestCase() {
        mEnableLog = ::android::base::GetProperty("debug.nn.fuzzer.log", "") == "1";
        mDumpSpec = ::android::base::GetProperty("debug.nn.fuzzer.dumpspec", "") == "1";
    }

   protected:
    virtual void SetUp() override {
        const ::testing::TestInfo* const testInfo =
                ::testing::UnitTest::GetInstance()->current_test_info();
        mTestName = mTestName + testInfo->test_case_name() + "_" + testInfo->name();
        std::replace(mTestName.begin(), mTestName.end(), '/', '_');
        if (mEnableLog) NN_FUZZER_LOG_INIT("/data/local/tmp/" + mTestName + ".log");
    }

    virtual void TearDown() override { NN_FUZZER_LOG_CLOSE; }

    // Main test entrance.
    void testRandomGraph(uint32_t numOperations, uint32_t dimensionRange) {
        // Generate a random graph.
        OperationManager manager;
        RandomGraph graph(&manager);
        EXPECT_TRUE(graph.generate(kSeed, numOperations, dimensionRange));

        // Create a model from the random graph.
        test_wrapper::Model model;
        graph.createModel(&model);
        EXPECT_TRUE(model.isValid());
        EXPECT_EQ(model.finish(), Result::NO_ERROR);

        // Compile the model.
        test_wrapper::Compilation compilation(&model);
        EXPECT_EQ(compilation.finish(), Result::NO_ERROR);

        // Create request.
        test_wrapper::Execution execution(&compilation);
        graph.createRequest(&execution);

        // Compute reference result.
        EXPECT_EQ(execution.compute(), Result::NO_ERROR);

        // Dump spec file.
        if (mDumpSpec) {
            graph.dumpSpecFile("/data/local/tmp/" + mTestName + ".mod.py", mTestName);
        }
    }

    enum GraphSize : uint32_t { SINGLE = 1, SMALL = 5, LARGE = 40 };
    enum DimensionRange : uint32_t { NARROW = 10, WIDE = 1000 };

    static bool mEnableLog;
    static bool mDumpSpec;

    const uint32_t kSeed = GetParam();
    std::string mTestName;
};

bool RandomGraphTest::mEnableLog = false;
bool RandomGraphTest::mDumpSpec = false;

// Single-op graph with dimensions in range [1, 1000].
TEST_P(RandomGraphTest, Single) {
    testRandomGraph(GraphSize::SINGLE, DimensionRange::WIDE);
}

// 5-op graph with dimensions in range [1, 1000].
TEST_P(RandomGraphTest, Small) {
    testRandomGraph(GraphSize::SMALL, DimensionRange::WIDE);
}

// 40-op graph with dimensions in range [1, 10].
TEST_P(RandomGraphTest, Large) {
    testRandomGraph(GraphSize::LARGE, DimensionRange::NARROW);
}

constexpr uint32_t kFirstSeed = 0;
constexpr uint32_t kNumTestCases = 1000;

INSTANTIATE_TEST_CASE_P(TestRandomGraph, RandomGraphTest,
                        ::testing::Range(kFirstSeed, kFirstSeed + kNumTestCases));

}  // namespace fuzzing_test
}  // namespace nn
}  // namespace android
