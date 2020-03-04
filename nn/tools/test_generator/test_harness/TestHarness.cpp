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

#include "TestHarness.h"

#include <android-base/logging.h>
#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <cmath>
#include <functional>
#include <limits>
#include <map>
#include <numeric>
#include <string>
#include <vector>

namespace test_helper {

namespace {

template <typename T>
constexpr bool nnIsFloat = std::is_floating_point_v<T> || std::is_same_v<T, _Float16>;

constexpr uint32_t kMaxNumberOfPrintedErrors = 10;

// TODO(b/139442217): Allow passing accuracy criteria from spec.
// Currently we only need relaxed accuracy criteria on mobilenet tests, so we return the quant8
// tolerance simply based on the current test name.
int getQuant8AllowedError() {
    const ::testing::TestInfo* const testInfo =
            ::testing::UnitTest::GetInstance()->current_test_info();
    const std::string testCaseName = testInfo->test_case_name();
    const std::string testName = testInfo->name();
    // We relax the quant8 precision for all tests with mobilenet:
    // - CTS/VTS GeneratedTest and DynamicOutputShapeTest with mobilenet
    // - VTS CompilationCachingTest and CompilationCachingSecurityTest except for TOCTOU tests
    if (testName.find("mobilenet") != std::string::npos ||
        (testCaseName.find("CompilationCaching") != std::string::npos &&
         testName.find("TOCTOU") == std::string::npos)) {
        return 3;
    } else {
        return 1;
    }
}

uint32_t getNumberOfElements(const TestOperand& op) {
    return std::reduce(op.dimensions.begin(), op.dimensions.end(), 1u, std::multiplies<uint32_t>());
}

// Check if the actual results meet the accuracy criterion.
template <typename T>
void expectNear(const TestOperand& op, const TestBuffer& result,
                const AccuracyCriterion& criterion) {
    constexpr uint32_t kMinNumberOfElementsToTestBiasMSE = 10;
    const T* actualBuffer = result.get<T>();
    const T* expectedBuffer = op.data.get<T>();
    uint32_t len = getNumberOfElements(op), numErrors = 0, numSkip = 0;
    double bias = 0.0f, mse = 0.0f;
    for (uint32_t i = 0; i < len; i++) {
        // Compare all data types in double for precision and signed arithmetic.
        double actual = static_cast<double>(actualBuffer[i]);
        double expected = static_cast<double>(expectedBuffer[i]);
        double tolerableRange = criterion.atol + criterion.rtol * std::fabs(expected);

        // Skip invalid floating point values.
        if (std::isnan(expected) || std::isinf(expected) || std::fabs(expected) > 1e3) {
            numSkip++;
            continue;
        }

        // Accumulate bias and MSE. Use relative bias and MSE for floating point values.
        double diff = actual - expected;
        if constexpr (nnIsFloat<T>) {
            diff /= std::max(1.0, std::abs(expected));
        }
        bias += diff;
        mse += diff * diff;

        // Print at most kMaxNumberOfPrintedErrors errors by EXPECT_NEAR.
        if (numErrors < kMaxNumberOfPrintedErrors) {
            EXPECT_NEAR(expected, actual, tolerableRange) << "When comparing element " << i;
        }
        if (std::fabs(actual - expected) > tolerableRange) numErrors++;
    }
    EXPECT_EQ(numErrors, 0u);

    // Test bias and MSE.
    if (len < numSkip + kMinNumberOfElementsToTestBiasMSE) return;
    bias /= static_cast<double>(len - numSkip);
    mse /= static_cast<double>(len - numSkip);
    EXPECT_LE(std::fabs(bias), criterion.bias);
    EXPECT_LE(mse, criterion.mse);
}

// For boolean values, we expect the number of mismatches does not exceed a certain ratio.
void expectBooleanNearlyEqual(const TestOperand& op, const TestBuffer& result,
                              float allowedErrorRatio) {
    const bool8* actualBuffer = result.get<bool8>();
    const bool8* expectedBuffer = op.data.get<bool8>();
    uint32_t len = getNumberOfElements(op), numErrors = 0;
    std::stringstream errorMsg;
    for (uint32_t i = 0; i < len; i++) {
        if (expectedBuffer[i] != actualBuffer[i]) {
            if (numErrors < kMaxNumberOfPrintedErrors)
                errorMsg << "    Expected: " << expectedBuffer[i] << ", actual: " << actualBuffer[i]
                         << ", when comparing element " << i << "\n";
            numErrors++;
        }
    }
    // When |len| is small, the allowedErrorCount will intentionally ceil at 1, which allows for
    // greater tolerance.
    uint32_t allowedErrorCount = static_cast<uint32_t>(std::ceil(allowedErrorRatio * len));
    EXPECT_LE(numErrors, allowedErrorCount) << errorMsg.str();
}

// Calculates the expected probability from the unnormalized log-probability of
// each class in the input and compares it to the actual occurrence of that class
// in the output.
void expectMultinomialDistributionWithinTolerance(const TestModel& model,
                                                  const std::vector<TestBuffer>& buffers) {
    // This function is only for RANDOM_MULTINOMIAL single-operation test.
    CHECK_EQ(model.referenced.size(), 0u) << "Subgraphs not supported";
    ASSERT_EQ(model.main.operations.size(), 1u);
    ASSERT_EQ(model.main.operations[0].type, TestOperationType::RANDOM_MULTINOMIAL);
    ASSERT_EQ(model.main.inputIndexes.size(), 1u);
    ASSERT_EQ(model.main.outputIndexes.size(), 1u);
    ASSERT_EQ(buffers.size(), 1u);

    const auto& inputOperand = model.main.operands[model.main.inputIndexes[0]];
    const auto& outputOperand = model.main.operands[model.main.outputIndexes[0]];
    ASSERT_EQ(inputOperand.dimensions.size(), 2u);
    ASSERT_EQ(outputOperand.dimensions.size(), 2u);

    const int kBatchSize = inputOperand.dimensions[0];
    const int kNumClasses = inputOperand.dimensions[1];
    const int kNumSamples = outputOperand.dimensions[1];

    const uint32_t outputLength = getNumberOfElements(outputOperand);
    const int32_t* outputData = buffers[0].get<int32_t>();
    std::vector<int> classCounts(kNumClasses);
    for (uint32_t i = 0; i < outputLength; i++) {
        classCounts[outputData[i]]++;
    }

    const uint32_t inputLength = getNumberOfElements(inputOperand);
    std::vector<float> inputData(inputLength);
    if (inputOperand.type == TestOperandType::TENSOR_FLOAT32) {
        const float* inputRaw = inputOperand.data.get<float>();
        std::copy(inputRaw, inputRaw + inputLength, inputData.begin());
    } else if (inputOperand.type == TestOperandType::TENSOR_FLOAT16) {
        const _Float16* inputRaw = inputOperand.data.get<_Float16>();
        std::transform(inputRaw, inputRaw + inputLength, inputData.begin(),
                       [](_Float16 fp16) { return static_cast<float>(fp16); });
    } else {
        FAIL() << "Unknown input operand type for RANDOM_MULTINOMIAL.";
    }

    for (int b = 0; b < kBatchSize; ++b) {
        float probabilitySum = 0;
        const int batchIndex = kBatchSize * b;
        for (int i = 0; i < kNumClasses; ++i) {
            probabilitySum += expf(inputData[batchIndex + i]);
        }
        for (int i = 0; i < kNumClasses; ++i) {
            float probability =
                    static_cast<float>(classCounts[i]) / static_cast<float>(kNumSamples);
            float probabilityExpected = expf(inputData[batchIndex + i]) / probabilitySum;
            EXPECT_THAT(probability,
                        ::testing::FloatNear(probabilityExpected,
                                             model.expectedMultinomialDistributionTolerance));
        }
    }
}

}  // namespace

void checkResults(const TestModel& model, const std::vector<TestBuffer>& buffers,
                  const AccuracyCriteria& criteria) {
    ASSERT_EQ(model.main.outputIndexes.size(), buffers.size());
    for (uint32_t i = 0; i < model.main.outputIndexes.size(); i++) {
        SCOPED_TRACE(testing::Message() << "When comparing output " << i);
        const auto& operand = model.main.operands[model.main.outputIndexes[i]];
        const auto& result = buffers[i];
        if (operand.isIgnored) continue;

        switch (operand.type) {
            case TestOperandType::TENSOR_FLOAT32:
                expectNear<float>(operand, result, criteria.float32);
                break;
            case TestOperandType::TENSOR_FLOAT16:
                expectNear<_Float16>(operand, result, criteria.float16);
                break;
            case TestOperandType::TENSOR_INT32:
            case TestOperandType::INT32:
                expectNear<int32_t>(operand, result, criteria.int32);
                break;
            case TestOperandType::TENSOR_QUANT8_ASYMM:
                expectNear<uint8_t>(operand, result, criteria.quant8Asymm);
                break;
            case TestOperandType::TENSOR_QUANT8_SYMM:
                expectNear<int8_t>(operand, result, criteria.quant8Symm);
                break;
            case TestOperandType::TENSOR_QUANT16_ASYMM:
                expectNear<uint16_t>(operand, result, criteria.quant16Asymm);
                break;
            case TestOperandType::TENSOR_QUANT16_SYMM:
                expectNear<int16_t>(operand, result, criteria.quant16Symm);
                break;
            case TestOperandType::TENSOR_BOOL8:
                expectBooleanNearlyEqual(operand, result, criteria.bool8AllowedErrorRatio);
                break;
            case TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED:
                expectNear<int8_t>(operand, result, criteria.quant8AsymmSigned);
                break;
            default:
                FAIL() << "Data type not supported.";
        }
    }
}

void checkResults(const TestModel& model, const std::vector<TestBuffer>& buffers) {
    // For RANDOM_MULTINOMIAL test only.
    if (model.expectedMultinomialDistributionTolerance > 0.0f) {
        expectMultinomialDistributionWithinTolerance(model, buffers);
        return;
    }

    // Decide the default tolerable range.
    //
    // For floating-point models, we use the relaxed precision if either
    // - relaxed computation flag is set
    // - the model has at least one TENSOR_FLOAT16 operand
    //
    // The bias and MSE criteria are implicitly set to the maximum -- we do not enforce these
    // criteria in normal generated tests.
    //
    // TODO: Adjust the error limit based on testing.
    //
    AccuracyCriteria criteria = {
            // The relative tolerance is 5ULP of FP32.
            .float32 = {.atol = 1e-5, .rtol = 5.0f * 1.1920928955078125e-7},
            // Both the absolute and relative tolerance are 5ULP of FP16.
            .float16 = {.atol = 5.0f * 0.0009765625, .rtol = 5.0f * 0.0009765625},
            .int32 = {.atol = 1},
            .quant8Asymm = {.atol = 1},
            .quant8Symm = {.atol = 1},
            .quant16Asymm = {.atol = 1},
            .quant16Symm = {.atol = 1},
            .bool8AllowedErrorRatio = 0.0f,
    };
    bool hasFloat16Inputs = false;
    model.forEachSubgraph([&hasFloat16Inputs](const TestSubgraph& subgraph) {
        if (!hasFloat16Inputs) {
            hasFloat16Inputs = std::any_of(subgraph.operands.begin(), subgraph.operands.end(),
                                           [](const TestOperand& op) {
                                               return op.type == TestOperandType::TENSOR_FLOAT16;
                                           });
        }
    });
    if (model.isRelaxed || hasFloat16Inputs) {
        criteria.float32 = criteria.float16;
    }
    const double quant8AllowedError = getQuant8AllowedError();
    criteria.quant8Asymm.atol = quant8AllowedError;
    criteria.quant8AsymmSigned.atol = quant8AllowedError;
    criteria.quant8Symm.atol = quant8AllowedError;

    checkResults(model, buffers, criteria);
}

TestModel convertQuant8AsymmOperandsToSigned(const TestModel& testModel) {
    CHECK_EQ(testModel.referenced.size(), 0u) << "Subgraphs not supported";
    TestModel converted(testModel.copy());
    for (TestOperand& operand : converted.main.operands) {
        if (operand.type == test_helper::TestOperandType::TENSOR_QUANT8_ASYMM) {
            operand.type = test_helper::TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED;
            operand.zeroPoint -= 128;
            const uint8_t* inputOperandData = operand.data.get<uint8_t>();
            int8_t* outputOperandData = operand.data.getMutable<int8_t>();
            for (size_t i = 0; i < operand.data.size(); ++i) {
                outputOperandData[i] =
                        static_cast<int8_t>(static_cast<int32_t>(inputOperandData[i]) - 128);
            }
        }
    }
    return converted;
}

}  // namespace test_helper
