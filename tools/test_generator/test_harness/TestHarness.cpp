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

#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <cmath>
#include <functional>
#include <numeric>
#include <string>
#include <vector>

namespace test_helper {

namespace {

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
void expectNear(const TestOperand& op, const TestBuffer& result, double atol, double rtol) {
    const T* actualBuffer = result.get<T>();
    const T* expectedBuffer = op.data.get<T>();
    uint32_t len = getNumberOfElements(op), numErrors = 0;
    for (uint32_t i = 0; i < len; i++) {
        // Compare all data types in double for precision and signed arithmetic.
        double actual = static_cast<double>(actualBuffer[i]);
        double expected = static_cast<double>(expectedBuffer[i]);
        double tolerableRange = atol + rtol * std::fabs(expected);

        // Print at most kMaxNumberOfPrintedErrors errors by EXPECT_NEAR.
        if (numErrors < kMaxNumberOfPrintedErrors) {
            EXPECT_NEAR(expected, actual, tolerableRange) << "When comparing element " << i;
        }
        if (std::fabs(actual - expected) > tolerableRange) numErrors++;
    }
    EXPECT_EQ(numErrors, 0u);
}

// For boolean values, we expect exact match.
void expectBooleanEqual(const TestOperand& op, const TestBuffer& result) {
    const bool8* actualBuffer = result.get<bool8>();
    const bool8* expectedBuffer = op.data.get<bool8>();
    uint32_t len = getNumberOfElements(op), numErrors = 0;
    for (uint32_t i = 0; i < len; i++) {
        bool actual = static_cast<bool>(actualBuffer[i]);
        bool expected = static_cast<bool>(expectedBuffer[i]);

        // Print at most kMaxNumberOfPrintedErrors errors by EXPECT_NEAR.
        if (numErrors < kMaxNumberOfPrintedErrors) {
            EXPECT_EQ(expected, actual) << "When comparing element " << i;
        }
        if (expected != actual) numErrors++;
    }
    EXPECT_EQ(numErrors, 0u);
}

// Calculates the expected probability from the unnormalized log-probability of
// each class in the input and compares it to the actual occurrence of that class
// in the output.
void expectMultinomialDistributionWithinTolerance(const TestModel& model,
                                                  const std::vector<TestBuffer>& buffers) {
    // This function is only for RANDOM_MULTINOMIAL single-operation test.
    ASSERT_EQ(model.operations.size(), 1u);
    ASSERT_EQ(model.operations[0].type, TestOperationType::RANDOM_MULTINOMIAL);
    ASSERT_EQ(model.inputIndexes.size(), 1u);
    ASSERT_EQ(model.outputIndexes.size(), 1u);
    ASSERT_EQ(buffers.size(), 1u);

    const auto& inputOperand = model.operands[model.inputIndexes[0]];
    const auto& outputOperand = model.operands[model.outputIndexes[0]];
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

void checkResults(const TestModel& model, const std::vector<TestBuffer>& buffers) {
    // For RANDOM_MULTINOMIAL test only.
    if (model.expectedMultinomialDistributionTolerance > 0.0f) {
        expectMultinomialDistributionWithinTolerance(model, buffers);
        return;
    }

    // Decide the tolerable range.
    //
    // For floating-point models, we use the relaxed precision if either
    // - relaxed computation flag is set
    // - the model has at least one TENSOR_FLOAT16 operand
    double fpAtol = 1e-5;
    double fpRtol = 5.0f * 1.1920928955078125e-7;
    const bool hasFloat16Inputs = std::any_of(
            model.operands.begin(), model.operands.end(),
            [](const TestOperand& op) { return op.type == TestOperandType::TENSOR_FLOAT16; });
    if (model.isRelaxed || hasFloat16Inputs) {
        // TODO: Adjust the error limit based on testing.
        // If in relaxed mode, set the absolute tolerance to be 5ULP of FP16.
        fpAtol = 5.0f * 0.0009765625;
        // Set the relative tolerance to be 5ULP of the corresponding FP precision.
        fpRtol = 5.0f * 0.0009765625;
    }
    const double quant8AllowedError = getQuant8AllowedError();

    ASSERT_EQ(model.outputIndexes.size(), buffers.size());
    for (uint32_t i = 0; i < model.outputIndexes.size(); i++) {
        SCOPED_TRACE(testing::Message() << "When comparing output " << i);
        const auto& operand = model.operands[model.outputIndexes[i]];
        const auto& result = buffers[i];
        if (operand.isIgnored) continue;

        switch (operand.type) {
            case TestOperandType::TENSOR_FLOAT32:
                expectNear<float>(operand, result, fpAtol, fpRtol);
                break;
            case TestOperandType::TENSOR_FLOAT16:
                expectNear<_Float16>(operand, result, fpAtol, fpRtol);
                break;
            case TestOperandType::TENSOR_INT32:
                expectNear<int32_t>(operand, result, 0, 0);
                break;
            case TestOperandType::TENSOR_QUANT8_ASYMM:
                expectNear<uint8_t>(operand, result, quant8AllowedError, 0);
                break;
            case TestOperandType::TENSOR_QUANT8_SYMM:
                expectNear<int8_t>(operand, result, quant8AllowedError, 0);
                break;
            case TestOperandType::TENSOR_QUANT16_ASYMM:
                expectNear<uint16_t>(operand, result, 1, 0);
                break;
            case TestOperandType::TENSOR_QUANT16_SYMM:
                expectNear<int16_t>(operand, result, 1, 0);
                break;
            case TestOperandType::TENSOR_BOOL8:
                expectBooleanEqual(operand, result);
                break;
            default:
                FAIL() << "Data type not supported.";
        }
    }
}

}  // namespace test_helper
