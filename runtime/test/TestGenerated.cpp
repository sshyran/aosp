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

static OperandType getOperandType(const TestOperand& op) {
    if (op.type == TestOperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL) {
        return OperandType(
                static_cast<Type>(op.type), op.dimensions,
                SymmPerChannelQuantParams(op.channelQuant.scales, op.channelQuant.channelDim));
    } else {
        return OperandType(static_cast<Type>(op.type), op.dimensions, op.scale, op.zeroPoint);
    }
}

void createModel(const TestModel& testModel, Model* model) {
    // Operands.
    for (const auto& operand : testModel.operands) {
        auto type = getOperandType(operand);
        auto index = model->addOperand(&type);

        switch (operand.lifetime) {
            case TestOperandLifeTime::CONSTANT_COPY:
            case TestOperandLifeTime::CONSTANT_REFERENCE:
                model->setOperandValue(index, operand.data.get<void>(), operand.data.size());
                break;
            case TestOperandLifeTime::NO_VALUE:
                model->setOperandValue(index, nullptr, 0);
                break;
            case TestOperandLifeTime::MODEL_INPUT:
            case TestOperandLifeTime::MODEL_OUTPUT:
            case TestOperandLifeTime::TEMPORARY_VARIABLE:
                // Nothing to do here.
                break;
        }
    }

    // Operations.
    for (const auto& operation : testModel.operations) {
        model->addOperation(static_cast<int>(operation.type), operation.inputs, operation.outputs);
    }

    // Inputs and outputs.
    model->identifyInputsAndOutputs(testModel.inputIndexes, testModel.outputIndexes);

    // Relaxed computation.
    if (testModel.isRelaxed) model->relaxComputationFloat32toFloat16(true);

    ASSERT_TRUE(model->isValid());
}

static void createRequest(const TestModel& testModel, Execution* execution,
                          std::vector<TestBuffer>* inputs, std::vector<TestBuffer>* outputs) {
    // Model inputs.
    for (uint32_t i = 0; i < testModel.inputIndexes.size(); i++) {
        const auto& operand = testModel.operands[testModel.inputIndexes[i]];
        inputs->push_back(operand.data.copy());
        ASSERT_EQ(Result::NO_ERROR,
                  execution->setInput(i, inputs->back().get<void>(), operand.data.size()));
    }

    // Model outputs.
    for (uint32_t i = 0; i < testModel.outputIndexes.size(); i++) {
        const auto& operand = testModel.operands[testModel.outputIndexes[i]];
        outputs->emplace_back(operand.data.size());
        ASSERT_EQ(Result::NO_ERROR,
                  execution->setOutput(i, outputs->back().getMutable<void>(), operand.data.size()));
    }
}

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

void GeneratedTests::executeWithCompilation(const Compilation* compilation,
                                            const TestModel& testModel) {
    NNTRACE_APP(NNTRACE_PHASE_EXECUTION, "executeWithCompilation example");

    Execution execution(compilation);
    std::vector<TestBuffer> inputs;
    std::vector<TestBuffer> outputs;
    {
        NNTRACE_APP(NNTRACE_PHASE_INPUTS_AND_OUTPUTS, "executeWithCompilation example");
        // TODO: Do not copy the input buffers once b/138797596 is fixed.
        createRequest(testModel, &execution, &inputs, &outputs);
    }

    Result result = execution.compute();
    if (mExpectFailure) {
        ASSERT_NE(result, Result::NO_ERROR);
        return;
    } else {
        ASSERT_EQ(result, Result::NO_ERROR);
    }

    {
        NNTRACE_APP(NNTRACE_PHASE_RESULTS, "executeWithCompilation example");

        // Check output dimensions.
        for (uint32_t i = 0; i < testModel.outputIndexes.size(); i++) {
            const auto& output = testModel.operands[testModel.outputIndexes[i]];
            if (output.isIgnored) continue;
            std::vector<uint32_t> actualDimensions;
            ASSERT_EQ(Result::NO_ERROR, execution.getOutputOperandDimensions(i, &actualDimensions));
            ASSERT_EQ(output.dimensions, actualDimensions);
        }

        checkResults(testModel, outputs);
    }
}

void GeneratedTests::executeOnce(const Model* model, const TestModel& testModel) {
    NNTRACE_APP(NNTRACE_PHASE_OVERALL, "executeOnce");
    std::optional<Compilation> compilation = compileModel(model);
    // Early return if compilation fails. The compilation result code is checked in compileModel.
    if (!compilation) return;
    executeWithCompilation(&compilation.value(), testModel);
}

void GeneratedTests::executeMultithreadedOwnCompilation(const Model* model,
                                                        const TestModel& testModel) {
    NNTRACE_APP(NNTRACE_PHASE_OVERALL, "executeMultithreadedOwnCompilation");
    SCOPED_TRACE("MultithreadedOwnCompilation");
    std::vector<std::thread> threads;
    for (int i = 0; i < 10; i++) {
        threads.push_back(std::thread([&]() { executeOnce(model, testModel); }));
    }
    std::for_each(threads.begin(), threads.end(), [](std::thread& t) { t.join(); });
}

void GeneratedTests::executeMultithreadedSharedCompilation(const Model* model,
                                                           const TestModel& testModel) {
    NNTRACE_APP(NNTRACE_PHASE_OVERALL, "executeMultithreadedSharedCompilation");
    SCOPED_TRACE("MultithreadedSharedCompilation");
    std::optional<Compilation> compilation = compileModel(model);
    // Early return if compilation fails. The ompilation result code is checked in compileModel.
    if (!compilation) return;
    std::vector<std::thread> threads;
    for (int i = 0; i < 10; i++) {
        threads.push_back(
                std::thread([&]() { executeWithCompilation(&compilation.value(), testModel); }));
    }
    std::for_each(threads.begin(), threads.end(), [](std::thread& t) { t.join(); });
}

// Test driver for those generated from ml/nn/runtime/test/spec
void GeneratedTests::execute(const TestModel& testModel) {
    NNTRACE_APP(NNTRACE_PHASE_OVERALL, "execute");
    Model model;
    createModel(testModel, &model);
    model.finish();
    auto executeInternal = [&testModel, &model, this]() {
        SCOPED_TRACE("TestCompilationCaching = " + std::to_string(mTestCompilationCaching));
#ifndef NNTEST_MULTITHREADED
        executeOnce(&model, testModel);
#else   // defined(NNTEST_MULTITHREADED)
        executeMultithreadedOwnCompilation(&model, testModel);
        executeMultithreadedSharedCompilation(&model, testModel);
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
