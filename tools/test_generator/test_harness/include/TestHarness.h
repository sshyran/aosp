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

// This header file defines an unified structure for a model under test, and provides helper
// functions checking test results. Multiple instances of the test model structure will be
// generated from the model specification files under nn/runtime/test/specs directory.
// Both CTS and VTS will consume this test structure and convert into their own model and
// request format.

#ifndef ANDROID_FRAMEWORKS_ML_NN_TOOLS_TEST_GENERATOR_TEST_HARNESS_TEST_HARNESS_H
#define ANDROID_FRAMEWORKS_ML_NN_TOOLS_TEST_GENERATOR_TEST_HARNESS_TEST_HARNESS_H

#include <cstdlib>
#include <cstring>
#include <functional>
#include <map>
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace test_helper {

// This class is a workaround for two issues our code relies on:
// 1. sizeof(bool) is implementation defined.
// 2. vector<bool> does not allow direct pointer access via the data() method.
class bool8 {
   public:
    bool8() : mValue() {}
    /* implicit */ bool8(bool value) : mValue(value) {}
    inline operator bool() const { return mValue != 0; }

   private:
    uint8_t mValue;
};

static_assert(sizeof(bool8) == 1, "size of bool8 must be 8 bits");

// We need the following enum classes since the test harness can neither depend on NDK nor HIDL
// definitions.

enum class TestOperandType {
    FLOAT32 = 0,
    INT32 = 1,
    UINT32 = 2,
    TENSOR_FLOAT32 = 3,
    TENSOR_INT32 = 4,
    TENSOR_QUANT8_ASYMM = 5,
    BOOL = 6,
    TENSOR_QUANT16_SYMM = 7,
    TENSOR_FLOAT16 = 8,
    TENSOR_BOOL8 = 9,
    FLOAT16 = 10,
    TENSOR_QUANT8_SYMM_PER_CHANNEL = 11,
    TENSOR_QUANT16_ASYMM = 12,
    TENSOR_QUANT8_SYMM = 13,
    TENSOR_QUANT8_ASYMM_SIGNED = 14,
};

enum class TestOperandLifeTime {
    TEMPORARY_VARIABLE = 0,
    MODEL_INPUT = 1,
    MODEL_OUTPUT = 2,
    CONSTANT_COPY = 3,
    CONSTANT_REFERENCE = 4,
    NO_VALUE = 5,
};

enum class TestOperationType {
    ADD = 0,
    AVERAGE_POOL_2D = 1,
    CONCATENATION = 2,
    CONV_2D = 3,
    DEPTHWISE_CONV_2D = 4,
    DEPTH_TO_SPACE = 5,
    DEQUANTIZE = 6,
    EMBEDDING_LOOKUP = 7,
    FLOOR = 8,
    FULLY_CONNECTED = 9,
    HASHTABLE_LOOKUP = 10,
    L2_NORMALIZATION = 11,
    L2_POOL_2D = 12,
    LOCAL_RESPONSE_NORMALIZATION = 13,
    LOGISTIC = 14,
    LSH_PROJECTION = 15,
    LSTM = 16,
    MAX_POOL_2D = 17,
    MUL = 18,
    RELU = 19,
    RELU1 = 20,
    RELU6 = 21,
    RESHAPE = 22,
    RESIZE_BILINEAR = 23,
    RNN = 24,
    SOFTMAX = 25,
    SPACE_TO_DEPTH = 26,
    SVDF = 27,
    TANH = 28,
    BATCH_TO_SPACE_ND = 29,
    DIV = 30,
    MEAN = 31,
    PAD = 32,
    SPACE_TO_BATCH_ND = 33,
    SQUEEZE = 34,
    STRIDED_SLICE = 35,
    SUB = 36,
    TRANSPOSE = 37,
    ABS = 38,
    ARGMAX = 39,
    ARGMIN = 40,
    AXIS_ALIGNED_BBOX_TRANSFORM = 41,
    BIDIRECTIONAL_SEQUENCE_LSTM = 42,
    BIDIRECTIONAL_SEQUENCE_RNN = 43,
    BOX_WITH_NMS_LIMIT = 44,
    CAST = 45,
    CHANNEL_SHUFFLE = 46,
    DETECTION_POSTPROCESSING = 47,
    EQUAL = 48,
    EXP = 49,
    EXPAND_DIMS = 50,
    GATHER = 51,
    GENERATE_PROPOSALS = 52,
    GREATER = 53,
    GREATER_EQUAL = 54,
    GROUPED_CONV_2D = 55,
    HEATMAP_MAX_KEYPOINT = 56,
    INSTANCE_NORMALIZATION = 57,
    LESS = 58,
    LESS_EQUAL = 59,
    LOG = 60,
    LOGICAL_AND = 61,
    LOGICAL_NOT = 62,
    LOGICAL_OR = 63,
    LOG_SOFTMAX = 64,
    MAXIMUM = 65,
    MINIMUM = 66,
    NEG = 67,
    NOT_EQUAL = 68,
    PAD_V2 = 69,
    POW = 70,
    PRELU = 71,
    QUANTIZE = 72,
    QUANTIZED_16BIT_LSTM = 73,
    RANDOM_MULTINOMIAL = 74,
    REDUCE_ALL = 75,
    REDUCE_ANY = 76,
    REDUCE_MAX = 77,
    REDUCE_MIN = 78,
    REDUCE_PROD = 79,
    REDUCE_SUM = 80,
    ROI_ALIGN = 81,
    ROI_POOLING = 82,
    RSQRT = 83,
    SELECT = 84,
    SIN = 85,
    SLICE = 86,
    SPLIT = 87,
    SQRT = 88,
    TILE = 89,
    TOPK_V2 = 90,
    TRANSPOSE_CONV_2D = 91,
    UNIDIRECTIONAL_SEQUENCE_LSTM = 92,
    UNIDIRECTIONAL_SEQUENCE_RNN = 93,
    RESIZE_NEAREST_NEIGHBOR = 94,
};

enum class TestHalVersion { UNKNOWN, V1_0, V1_1, V1_2, V1_3 };

// Manages the data buffer for a test operand.
class TestBuffer {
   public:
    // The buffer must be aligned on a boundary of a byte size that is a multiple of the element
    // type byte size. In NNAPI, 4-byte boundary should be sufficient for all current data types.
    static constexpr size_t kAlignment = 4;

    // Create the buffer of a given size and initialize from data.
    // If data is nullptr, the allocated memory stays uninitialized.
    TestBuffer(size_t size = 0, const void* data = nullptr) : mSize(size) {
        if (size > 0) {
            // The size for aligned_alloc must be an integral multiple of alignment.
            mBuffer.reset(aligned_alloc(kAlignment, alignedSize()), free);
            if (data) memcpy(mBuffer.get(), data, size);
        }
    }

    // Explicitly create a deep copy.
    TestBuffer copy() const { return TestBuffer(mSize, mBuffer.get()); }

    // Factory method creating the buffer from a typed vector.
    template <typename T>
    static TestBuffer createFromVector(const std::vector<T>& vec) {
        return TestBuffer(vec.size() * sizeof(T), vec.data());
    }

    template <typename T>
    const T* get() const {
        return reinterpret_cast<const T*>(mBuffer.get());
    }

    template <typename T>
    T* getMutable() {
        return reinterpret_cast<T*>(mBuffer.get());
    }

    // Returns the byte size of the buffer.
    size_t size() const { return mSize; }

    // Returns the byte size that is aligned to kAlignment.
    size_t alignedSize() const { return ((mSize + kAlignment - 1) / kAlignment) * kAlignment; }

    bool operator==(nullptr_t) const { return mBuffer == nullptr; }
    bool operator!=(nullptr_t) const { return mBuffer != nullptr; }

   private:
    std::shared_ptr<void> mBuffer;
    size_t mSize = 0;
};

struct TestSymmPerChannelQuantParams {
    std::vector<float> scales;
    uint32_t channelDim = 0;
};

struct TestOperand {
    TestOperandType type;
    std::vector<uint32_t> dimensions;
    uint32_t numberOfConsumers;
    float scale = 0.0f;
    int32_t zeroPoint = 0;
    TestOperandLifeTime lifetime;
    TestSymmPerChannelQuantParams channelQuant;

    // For MODEL_OUTPUT only. Set to true to skip the accuracy check on this operand.
    bool isIgnored = false;

    // For CONSTANT_COPY/REFERENCE and MODEL_INPUT, this is the data set in model and request.
    // For MODEL_OUTPUT, this is the expected results.
    // For TEMPORARY_VARIABLE and NO_VALUE, this is nullptr.
    TestBuffer data;
};

struct TestOperation {
    TestOperationType type;
    std::vector<uint32_t> inputs;
    std::vector<uint32_t> outputs;
};

struct TestModel {
    std::vector<TestOperand> operands;
    std::vector<TestOperation> operations;
    std::vector<uint32_t> inputIndexes;
    std::vector<uint32_t> outputIndexes;
    bool isRelaxed = false;

    // Additional testing information and flags associated with the TestModel.

    // Specifies the RANDOM_MULTINOMIAL distribution tolerance.
    // If set to greater than zero, the input is compared as log-probabilities
    // to the output and must be within this tolerance to pass.
    float expectedMultinomialDistributionTolerance = 0.0f;

    // If set to true, the TestModel specifies a validation test that is expected to fail during
    // compilation or execution.
    bool expectFailure = false;

    // The minimum supported HAL version.
    TestHalVersion minSupportedVersion = TestHalVersion::UNKNOWN;
};

// Manages all generated test models.
class TestModelManager {
   public:
    // Returns the singleton manager.
    static TestModelManager& get() {
        static TestModelManager instance;
        return instance;
    }

    // Registers a TestModel to the manager. Returns a dummy integer for global variable
    // initialization.
    int add(std::string name, const TestModel& testModel) {
        mTestModels.emplace(std::move(name), &testModel);
        return 0;
    }

    // Returns a vector of selected TestModels for which the given "filter" returns true.
    using TestParam = std::pair<std::string, const TestModel*>;
    std::vector<TestParam> getTestModels(std::function<bool(const TestModel&)> filter) {
        std::vector<TestParam> testModels;
        testModels.reserve(mTestModels.size());
        std::copy_if(mTestModels.begin(), mTestModels.end(), std::back_inserter(testModels),
                     [filter](const auto& nameTestPair) { return filter(*nameTestPair.second); });
        return testModels;
    }

   private:
    TestModelManager() = default;
    TestModelManager(const TestModelManager&) = delete;
    TestModelManager& operator=(const TestModelManager&) = delete;

    // Contains all TestModels generated from nn/runtime/test/specs directory.
    // The TestModels are sorted by name to ensure a predictable order.
    std::map<std::string, const TestModel*> mTestModels;
};

// Check the output results against the expected values in test model by calling
// GTEST_ASSERT/EXPECT. The index of the results corresponds to the index in model.outputIndexes.
// E.g., results[i] corresponds to model.outputIndexes[i].
void checkResults(const TestModel& model, const std::vector<TestBuffer>& results);

}  // namespace test_helper

#endif  // ANDROID_FRAMEWORKS_ML_NN_TOOLS_TEST_GENERATOR_TEST_HARNESS_TEST_HARNESS_H
