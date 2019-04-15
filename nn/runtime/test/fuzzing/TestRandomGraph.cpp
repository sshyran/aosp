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

#include <android-base/properties.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <string>

#include "TestNeuralNetworksWrapper.h"
#include "fuzzing/OperationManager.h"
#include "fuzzing/RandomGraphGenerator.h"
#include "fuzzing/RandomGraphGeneratorUtils.h"

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
        RandomGraph graph;
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
class SingleOperationTest : public RandomGraphTest {};
#define TEST_SINGLE_OPERATION(operation, halVersion)                        \
    TEST_P(SingleOperationTest, operation##_##halVersion) {                 \
        OperationFilter filter = {.opcodes = {ANEURALNETWORKS_##operation}, \
                                  .versions = {HalVersion::halVersion}};    \
        OperationManager::get()->applyFilter(filter);                       \
        testRandomGraph(GraphSize::SINGLE, DimensionRange::WIDE);           \
    }

/*-- NNAPI 1.0 Operations ---------------------------------------------------*/

// TODO: The following 1.0 operation signatures are currently not defined:
// - ANEURALNETWORKS_LSH_PROJECTION
// - ANEURALNETWORKS_LSTM
// - ANEURALNETWORKS_RNN
// - ANEURALNETWORKS_SVDF

TEST_SINGLE_OPERATION(ADD, V1_0);
TEST_SINGLE_OPERATION(MUL, V1_0);
TEST_SINGLE_OPERATION(FLOOR, V1_0);
TEST_SINGLE_OPERATION(LOGISTIC, V1_0);
TEST_SINGLE_OPERATION(RELU, V1_0);
TEST_SINGLE_OPERATION(RELU1, V1_0);
TEST_SINGLE_OPERATION(RELU6, V1_0);
TEST_SINGLE_OPERATION(TANH, V1_0);
TEST_SINGLE_OPERATION(SOFTMAX, V1_0);
TEST_SINGLE_OPERATION(L2_NORMALIZATION, V1_0);
TEST_SINGLE_OPERATION(LOCAL_RESPONSE_NORMALIZATION, V1_0);
TEST_SINGLE_OPERATION(AVERAGE_POOL_2D, V1_0);
TEST_SINGLE_OPERATION(L2_POOL_2D, V1_0);
TEST_SINGLE_OPERATION(MAX_POOL_2D, V1_0);
TEST_SINGLE_OPERATION(CONV_2D, V1_0);
TEST_SINGLE_OPERATION(DEPTHWISE_CONV_2D, V1_0);
TEST_SINGLE_OPERATION(CONCATENATION, V1_0);
TEST_SINGLE_OPERATION(RESIZE_BILINEAR, V1_0);
TEST_SINGLE_OPERATION(DEPTH_TO_SPACE, V1_0);
TEST_SINGLE_OPERATION(SPACE_TO_DEPTH, V1_0);
TEST_SINGLE_OPERATION(EMBEDDING_LOOKUP, V1_0);
TEST_SINGLE_OPERATION(HASHTABLE_LOOKUP, V1_0);
TEST_SINGLE_OPERATION(FULLY_CONNECTED, V1_0);
TEST_SINGLE_OPERATION(RESHAPE, V1_0);
TEST_SINGLE_OPERATION(DEQUANTIZE, V1_0);

/*-- NNAPI 1.1 Operations ---------------------------------------------------*/

TEST_SINGLE_OPERATION(SUB, V1_1);
TEST_SINGLE_OPERATION(DIV, V1_1);
TEST_SINGLE_OPERATION(BATCH_TO_SPACE_ND, V1_1);
TEST_SINGLE_OPERATION(SPACE_TO_BATCH_ND, V1_1);
TEST_SINGLE_OPERATION(MEAN, V1_1);
TEST_SINGLE_OPERATION(PAD, V1_1);
TEST_SINGLE_OPERATION(TRANSPOSE, V1_1);
TEST_SINGLE_OPERATION(SQUEEZE, V1_1);
TEST_SINGLE_OPERATION(STRIDED_SLICE, V1_1);

/*-- NNAPI 1.0 and 1.1 Operations with Extended Behavior in 1.2 -------------*/

TEST_SINGLE_OPERATION(ADD, V1_2);
TEST_SINGLE_OPERATION(MUL, V1_2);
TEST_SINGLE_OPERATION(SUB, V1_2);
TEST_SINGLE_OPERATION(DIV, V1_2);
TEST_SINGLE_OPERATION(FLOOR, V1_2);
TEST_SINGLE_OPERATION(LOGISTIC, V1_2);
TEST_SINGLE_OPERATION(RELU, V1_2);
TEST_SINGLE_OPERATION(RELU1, V1_2);
TEST_SINGLE_OPERATION(RELU6, V1_2);
TEST_SINGLE_OPERATION(TANH, V1_2);
TEST_SINGLE_OPERATION(CONCATENATION, V1_2);
TEST_SINGLE_OPERATION(DEPTH_TO_SPACE, V1_2);
TEST_SINGLE_OPERATION(SPACE_TO_DEPTH, V1_2);
TEST_SINGLE_OPERATION(BATCH_TO_SPACE_ND, V1_2);
TEST_SINGLE_OPERATION(SPACE_TO_BATCH_ND, V1_2);
TEST_SINGLE_OPERATION(FULLY_CONNECTED, V1_2);
TEST_SINGLE_OPERATION(RESHAPE, V1_2);
TEST_SINGLE_OPERATION(MEAN, V1_2);
TEST_SINGLE_OPERATION(PAD, V1_2);
TEST_SINGLE_OPERATION(TRANSPOSE, V1_2);
TEST_SINGLE_OPERATION(CONV_2D, V1_2);
TEST_SINGLE_OPERATION(DEPTHWISE_CONV_2D, V1_2);
TEST_SINGLE_OPERATION(AVERAGE_POOL_2D, V1_2);
TEST_SINGLE_OPERATION(L2_POOL_2D, V1_2);
TEST_SINGLE_OPERATION(MAX_POOL_2D, V1_2);
TEST_SINGLE_OPERATION(RESIZE_BILINEAR, V1_2);
TEST_SINGLE_OPERATION(SOFTMAX, V1_2);
TEST_SINGLE_OPERATION(L2_NORMALIZATION, V1_2);
TEST_SINGLE_OPERATION(LOCAL_RESPONSE_NORMALIZATION, V1_2);
TEST_SINGLE_OPERATION(DEQUANTIZE, V1_2);
TEST_SINGLE_OPERATION(SQUEEZE, V1_2);
TEST_SINGLE_OPERATION(STRIDED_SLICE, V1_2);

/*-- NNAPI 1.2 Operations ---------------------------------------------------*/

// TODO: The following 1.2 operation signatures are currently not defined:
// - ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM
// - ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_LSTM
// - ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN
// - ANEURALNETWORKS_BOX_WITH_NMS_LIMIT
// - ANEURALNETWORKS_DETECTION_POSTPROCESSING
// - ANEURALNETWORKS_GENERATE_PROPOSALS
// - ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT
// - ANEURALNETWORKS_QUANTIZED_16BIT_LSTM
// - ANEURALNETWORKS_RANDOM_MULTINOMIAL
// - ANEURALNETWORKS_ROI_ALIGN
// - ANEURALNETWORKS_ROI_POOLING
// - ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_LSTM
// - ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN

TEST_SINGLE_OPERATION(ABS, V1_2);
TEST_SINGLE_OPERATION(EXP, V1_2);
TEST_SINGLE_OPERATION(LOG, V1_2);
TEST_SINGLE_OPERATION(NEG, V1_2);
TEST_SINGLE_OPERATION(RSQRT, V1_2);
TEST_SINGLE_OPERATION(SIN, V1_2);
TEST_SINGLE_OPERATION(SQRT, V1_2);
TEST_SINGLE_OPERATION(ARGMAX, V1_2);
TEST_SINGLE_OPERATION(ARGMIN, V1_2);
TEST_SINGLE_OPERATION(EQUAL, V1_2);
TEST_SINGLE_OPERATION(GREATER, V1_2);
TEST_SINGLE_OPERATION(GREATER_EQUAL, V1_2);
TEST_SINGLE_OPERATION(LESS, V1_2);
TEST_SINGLE_OPERATION(LESS_EQUAL, V1_2);
TEST_SINGLE_OPERATION(LOGICAL_AND, V1_2);
TEST_SINGLE_OPERATION(LOGICAL_NOT, V1_2);
TEST_SINGLE_OPERATION(LOGICAL_OR, V1_2);
TEST_SINGLE_OPERATION(NOT_EQUAL, V1_2);
TEST_SINGLE_OPERATION(MAXIMUM, V1_2);
TEST_SINGLE_OPERATION(MINIMUM, V1_2);
TEST_SINGLE_OPERATION(POW, V1_2);
TEST_SINGLE_OPERATION(PRELU, V1_2);
TEST_SINGLE_OPERATION(REDUCE_ALL, V1_2);
TEST_SINGLE_OPERATION(REDUCE_ANY, V1_2);
TEST_SINGLE_OPERATION(REDUCE_MAX, V1_2);
TEST_SINGLE_OPERATION(REDUCE_MIN, V1_2);
TEST_SINGLE_OPERATION(REDUCE_PROD, V1_2);
TEST_SINGLE_OPERATION(REDUCE_SUM, V1_2);
TEST_SINGLE_OPERATION(CHANNEL_SHUFFLE, V1_2);
TEST_SINGLE_OPERATION(INSTANCE_NORMALIZATION, V1_2);
TEST_SINGLE_OPERATION(LOG_SOFTMAX, V1_2);
TEST_SINGLE_OPERATION(GROUPED_CONV_2D, V1_2);
TEST_SINGLE_OPERATION(TRANSPOSE_CONV_2D, V1_2);
TEST_SINGLE_OPERATION(RESIZE_NEAREST_NEIGHBOR, V1_2);
TEST_SINGLE_OPERATION(PAD_V2, V1_2);
TEST_SINGLE_OPERATION(QUANTIZE, V1_2);
TEST_SINGLE_OPERATION(CAST, V1_2);
TEST_SINGLE_OPERATION(EXPAND_DIMS, V1_2);
TEST_SINGLE_OPERATION(TILE, V1_2);
TEST_SINGLE_OPERATION(GATHER, V1_2);
TEST_SINGLE_OPERATION(SELECT, V1_2);
TEST_SINGLE_OPERATION(TOPK_V2, V1_2);
TEST_SINGLE_OPERATION(SLICE, V1_2);
TEST_SINGLE_OPERATION(SPLIT, V1_2);

// Due to the limitation of the random graph generator, graphs generated with mixed-type or
// mixed-rank operations are likely to result in a disconnected network. Thus, we filter the
// operation signatures by primary data type and rank first, then generate random graph tests for
// each combination.
//
// Two parameterized tests are created for each filter:
// * 5-op graph with dimensions in range [1, 1000].
// * 40-op graph with dimensions in range [1, 10].
//
#define TEST_RANDOM_GRAPH_WITH_DATA_TYPE_AND_RANK(dataType, rank)                  \
    TEST_P(RandomGraphTest, SmallGraph_##dataType##_Rank##rank) {                  \
        OperationFilter filter = {.dataTypes = {Type::dataType}, .ranks = {rank}}; \
        OperationManager::get()->applyFilter(filter);                              \
        testRandomGraph(GraphSize::SMALL, DimensionRange::WIDE);                   \
    }                                                                              \
    TEST_P(RandomGraphTest, LargeGraph_##dataType##_Rank##rank) {                  \
        OperationFilter filter = {.dataTypes = {Type::dataType}, .ranks = {rank}}; \
        OperationManager::get()->applyFilter(filter);                              \
        testRandomGraph(GraphSize::LARGE, DimensionRange::NARROW);                 \
    }

// Random graph test with TENSOR_QUANT8_ASYMM as the primary data type is currently not defined.
// The generated graph with TENSOR_QUANT8_ASYMM as the primary data type will likely to result in
// disconnected graphs due to the mismatch between quantized parameters.

TEST_RANDOM_GRAPH_WITH_DATA_TYPE_AND_RANK(TENSOR_FLOAT32, 4);
TEST_RANDOM_GRAPH_WITH_DATA_TYPE_AND_RANK(TENSOR_FLOAT32, 3);
TEST_RANDOM_GRAPH_WITH_DATA_TYPE_AND_RANK(TENSOR_FLOAT32, 2);
TEST_RANDOM_GRAPH_WITH_DATA_TYPE_AND_RANK(TENSOR_FLOAT32, 1);

TEST_RANDOM_GRAPH_WITH_DATA_TYPE_AND_RANK(TENSOR_FLOAT16, 4);
TEST_RANDOM_GRAPH_WITH_DATA_TYPE_AND_RANK(TENSOR_FLOAT16, 3);
TEST_RANDOM_GRAPH_WITH_DATA_TYPE_AND_RANK(TENSOR_FLOAT16, 2);
TEST_RANDOM_GRAPH_WITH_DATA_TYPE_AND_RANK(TENSOR_FLOAT16, 1);

TEST_RANDOM_GRAPH_WITH_DATA_TYPE_AND_RANK(TENSOR_INT32, 4);
TEST_RANDOM_GRAPH_WITH_DATA_TYPE_AND_RANK(TENSOR_INT32, 3);
TEST_RANDOM_GRAPH_WITH_DATA_TYPE_AND_RANK(TENSOR_INT32, 2);
TEST_RANDOM_GRAPH_WITH_DATA_TYPE_AND_RANK(TENSOR_INT32, 1);

TEST_RANDOM_GRAPH_WITH_DATA_TYPE_AND_RANK(TENSOR_BOOL8, 4);
TEST_RANDOM_GRAPH_WITH_DATA_TYPE_AND_RANK(TENSOR_BOOL8, 3);
TEST_RANDOM_GRAPH_WITH_DATA_TYPE_AND_RANK(TENSOR_BOOL8, 2);
TEST_RANDOM_GRAPH_WITH_DATA_TYPE_AND_RANK(TENSOR_BOOL8, 1);

constexpr uint32_t kFirstSeed = 0;
constexpr uint32_t kNumTestCases = 100;

INSTANTIATE_TEST_CASE_P(TestRandomGraph, SingleOperationTest,
                        ::testing::Range(kFirstSeed, kFirstSeed + kNumTestCases));

INSTANTIATE_TEST_CASE_P(TestRandomGraph, RandomGraphTest,
                        ::testing::Range(kFirstSeed, kFirstSeed + kNumTestCases));

}  // namespace fuzzing_test
}  // namespace nn
}  // namespace android
