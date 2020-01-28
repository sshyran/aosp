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

#include <android-base/logging.h>
#include <android-base/mapped_file.h>
#include <android-base/unique_fd.h>
#include <android/sharedmem.h>
#include <ftw.h>
#include <gtest/gtest.h>
#include <unistd.h>

#include <algorithm>
#include <cassert>
#include <cmath>
#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <string>
#include <thread>
#include <utility>
#include <vector>

#include "TestHarness.h"
#include "TestNeuralNetworksWrapper.h"

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

#ifdef NNTEST_CTS
#define NNTEST_COMPUTE_MODE
#endif

namespace android::nn::generated_tests {
using namespace test_wrapper;
using namespace test_helper;

class GeneratedTests : public GeneratedTestBase {
   protected:
    void SetUp() override;
    void TearDown() override;

    std::optional<Compilation> compileModel(const Model& model);
    void executeWithCompilation(const Compilation& compilation, const TestModel& testModel);
    void executeOnce(const Model& model, const TestModel& testModel);
    void executeMultithreadedOwnCompilation(const Model& model, const TestModel& testModel);
    void executeMultithreadedSharedCompilation(const Model& model, const TestModel& testModel);
    // Test driver for those generated from ml/nn/runtime/test/spec
    void execute(const TestModel& testModel);

    std::string mCacheDir;
    std::vector<uint8_t> mToken;
    bool mTestCompilationCaching = false;
    bool mTestDynamicOutputShape = false;
    bool mExpectFailure = false;
    bool mTestQuantizationCoupling = false;
    bool mTestDeviceMemory = false;
};

// Tag for the dynamic output shape tests
class DynamicOutputShapeTest : public GeneratedTests {
   protected:
    DynamicOutputShapeTest() { mTestDynamicOutputShape = true; }
};

// Tag for the generated validation tests
class GeneratedValidationTests : public GeneratedTests {
   protected:
    GeneratedValidationTests() { mExpectFailure = true; }
};

class QuantizationCouplingTest : public GeneratedTests {
   protected:
    QuantizationCouplingTest() { mTestQuantizationCoupling = true; }
};

class DeviceMemoryTest : public GeneratedTests {
   protected:
    DeviceMemoryTest() { mTestDeviceMemory = true; }
};

static OperandType getOperandType(const TestOperand& op, bool testDynamicOutputShape) {
    auto dims = op.dimensions;
    if (testDynamicOutputShape && op.lifetime == TestOperandLifeTime::SUBGRAPH_OUTPUT) {
        dims.assign(dims.size(), 0);
    }
    if (op.type == TestOperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL) {
        return OperandType(
                static_cast<Type>(op.type), dims,
                SymmPerChannelQuantParams(op.channelQuant.scales, op.channelQuant.channelDim));
    } else {
        return OperandType(static_cast<Type>(op.type), dims, op.scale, op.zeroPoint);
    }
}

void createModel(const TestModel& testModel, bool testDynamicOutputShape, Model* model) {
    ASSERT_NE(nullptr, model);

    // Operands.
    for (const auto& operand : testModel.operands) {
        auto type = getOperandType(operand, testDynamicOutputShape);
        auto index = model->addOperand(&type);

        switch (operand.lifetime) {
            case TestOperandLifeTime::CONSTANT_COPY:
            case TestOperandLifeTime::CONSTANT_REFERENCE:
                model->setOperandValue(index, operand.data.get<void>(), operand.data.size());
                break;
            case TestOperandLifeTime::NO_VALUE:
                model->setOperandValue(index, nullptr, 0);
                break;
            case TestOperandLifeTime::SUBGRAPH_INPUT:
            case TestOperandLifeTime::SUBGRAPH_OUTPUT:
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
    model->relaxComputationFloat32toFloat16(testModel.isRelaxed);

    ASSERT_TRUE(model->isValid());
}

static void createRequest(const TestModel& testModel, Execution* execution,
                          std::vector<TestBuffer>* outputs) {
    ASSERT_NE(nullptr, execution);
    ASSERT_NE(nullptr, outputs);

    // Model inputs.
    for (uint32_t i = 0; i < testModel.inputIndexes.size(); i++) {
        const auto& operand = testModel.operands[testModel.inputIndexes[i]];
        ASSERT_EQ(Result::NO_ERROR,
                  execution->setInput(i, operand.data.get<void>(), operand.data.size()));
    }

    // Model outputs.
    for (uint32_t i = 0; i < testModel.outputIndexes.size(); i++) {
        const auto& operand = testModel.operands[testModel.outputIndexes[i]];

        // In the case of zero-sized output, we should at least provide a one-byte buffer.
        // This is because zero-sized tensors are only supported internally to the runtime, or
        // reported in output shapes. It is illegal for the client to pre-specify a zero-sized
        // tensor as model output. Otherwise, we will have two semantic conflicts:
        // - "Zero dimension" conflicts with "unspecified dimension".
        // - "Omitted operand buffer" conflicts with "zero-sized operand buffer".
        const size_t bufferSize = std::max<size_t>(operand.data.size(), 1);

        outputs->emplace_back(bufferSize);
        ASSERT_EQ(Result::NO_ERROR,
                  execution->setOutput(i, outputs->back().getMutable<void>(), bufferSize));
    }
}

std::optional<Compilation> GeneratedTests::compileModel(const Model& model) {
    NNTRACE_APP(NNTRACE_PHASE_COMPILATION, "compileModel");
    if (mTestCompilationCaching) {
        // Compile the model twice with the same token, so that compilation caching will be
        // exercised if supported by the driver.
        // No invalid model will be passed to this branch.
        EXPECT_FALSE(mExpectFailure);
        Compilation compilation1(&model);
        EXPECT_EQ(compilation1.setCaching(mCacheDir, mToken), Result::NO_ERROR);
        EXPECT_EQ(compilation1.finish(), Result::NO_ERROR);
        Compilation compilation2(&model);
        EXPECT_EQ(compilation2.setCaching(mCacheDir, mToken), Result::NO_ERROR);
        EXPECT_EQ(compilation2.finish(), Result::NO_ERROR);
        return compilation2;
    } else {
        Compilation compilation(&model);
        Result result = compilation.finish();

        // For valid model, we check the compilation result == NO_ERROR.
        // For invalid model, the driver may fail at compilation or execution, so any result code is
        // permitted at this point.
        if (mExpectFailure && result != Result::NO_ERROR) return std::nullopt;
        EXPECT_EQ(result, Result::NO_ERROR);
        return compilation;
    }
}

static void computeWithPtrs(const TestModel& testModel, Execution* execution, Result* result,
                            std::vector<TestBuffer>* outputs) {
    {
        NNTRACE_APP(NNTRACE_PHASE_INPUTS_AND_OUTPUTS, "computeWithPtrs example");
        createRequest(testModel, execution, outputs);
    }
    *result = execution->compute();
}

// Convenience class to manage the file, mapping, and memory object.
class TestAshmem {
   public:
    TestAshmem(::android::base::unique_fd fd, std::unique_ptr<::android::base::MappedFile> mapped,
               Memory memory)
        : mFd(std::move(fd)), mMapped(std::move(mapped)), mMemory(std::move(memory)) {}

    // Factory function for TestAshmem; prefer this over the raw constructor
    static std::unique_ptr<TestAshmem> createFrom(const TestBuffer& buffer) {
        // Create ashmem-based fd.
        int fd = ASharedMemory_create(nullptr, buffer.size());
        if (fd <= 0) return nullptr;
        ::android::base::unique_fd managedFd(fd);

        // Map and populate ashmem.
        auto mappedFile =
                ::android::base::MappedFile::FromFd(fd, 0, buffer.size(), PROT_READ | PROT_WRITE);
        if (!mappedFile) return nullptr;
        memcpy(mappedFile->data(), buffer.get<void>(), buffer.size());

        // Create NNAPI memory object.
        Memory memory(buffer.size(), PROT_READ | PROT_WRITE, fd, 0);
        if (!memory.isValid()) return nullptr;

        // Store everything in managing class.
        return std::make_unique<TestAshmem>(std::move(managedFd), std::move(mappedFile),
                                            std::move(memory));
    }

    size_t size() { return mMapped->size(); }
    Memory* get() { return &mMemory; }

    template <typename Type>
    Type* dataAs() {
        return static_cast<Type*>(static_cast<void*>(mMapped->data()));
    }

   private:
    ::android::base::unique_fd mFd;
    std::unique_ptr<::android::base::MappedFile> mMapped;
    Memory mMemory;
};

static ANeuralNetworksMemory* createDeviceMemoryForInput(const Compilation& compilation,
                                                         uint32_t index) {
    ANeuralNetworksMemoryDesc* desc = nullptr;
    EXPECT_EQ(ANeuralNetworksMemoryDesc_create(&desc), ANEURALNETWORKS_NO_ERROR);
    EXPECT_EQ(ANeuralNetworksMemoryDesc_addInputRole(desc, compilation.getHandle(), index, 1.0f),
              ANEURALNETWORKS_NO_ERROR);
    EXPECT_EQ(ANeuralNetworksMemoryDesc_finish(desc), ANEURALNETWORKS_NO_ERROR);
    ANeuralNetworksMemory* memory = nullptr;
    ANeuralNetworksMemory_createFromDesc(desc, &memory);
    ANeuralNetworksMemoryDesc_free(desc);
    return memory;
}

static ANeuralNetworksMemory* createDeviceMemoryForOutput(const Compilation& compilation,
                                                          uint32_t index) {
    ANeuralNetworksMemoryDesc* desc = nullptr;
    EXPECT_EQ(ANeuralNetworksMemoryDesc_create(&desc), ANEURALNETWORKS_NO_ERROR);
    EXPECT_EQ(ANeuralNetworksMemoryDesc_addOutputRole(desc, compilation.getHandle(), index, 1.0f),
              ANEURALNETWORKS_NO_ERROR);
    EXPECT_EQ(ANeuralNetworksMemoryDesc_finish(desc), ANEURALNETWORKS_NO_ERROR);
    ANeuralNetworksMemory* memory = nullptr;
    ANeuralNetworksMemory_createFromDesc(desc, &memory);
    ANeuralNetworksMemoryDesc_free(desc);
    return memory;
}

// Set result = Result::NO_ERROR and outputs = {} if the test should be skipped.
static void computeWithDeviceMemories(const Compilation& compilation, const TestModel& testModel,
                                      Execution* execution, Result* result,
                                      std::vector<TestBuffer>* outputs) {
    ASSERT_NE(execution, nullptr);
    ASSERT_NE(result, nullptr);
    ASSERT_NE(outputs, nullptr);
    outputs->clear();
    std::vector<Memory> inputMemories, outputMemories;

    {
        NNTRACE_APP(NNTRACE_PHASE_INPUTS_AND_OUTPUTS, "computeWithDeviceMemories example");
        // Model inputs.
        for (uint32_t i = 0; i < testModel.inputIndexes.size(); i++) {
            SCOPED_TRACE("Input index: " + std::to_string(i));
            const auto& operand = testModel.operands[testModel.inputIndexes[i]];
            // Omitted input.
            if (operand.data.size() == 0) {
                ASSERT_EQ(Result::NO_ERROR, execution->setInput(i, nullptr, 0));
                continue;
            }

            // Create device memory.
            ANeuralNetworksMemory* memory = createDeviceMemoryForInput(compilation, i);
            ASSERT_NE(memory, nullptr);
            auto& wrapperMemory = inputMemories.emplace_back(memory);

            // Copy data from TestBuffer to device memory.
            auto ashmem = TestAshmem::createFrom(operand.data);
            ASSERT_NE(ashmem, nullptr);
            ASSERT_EQ(ANeuralNetworksMemory_copy(ashmem->get()->get(), memory),
                      ANEURALNETWORKS_NO_ERROR);
            ASSERT_EQ(Result::NO_ERROR, execution->setInputFromMemory(i, &wrapperMemory, 0, 0));
        }

        // Model outputs.
        for (uint32_t i = 0; i < testModel.outputIndexes.size(); i++) {
            SCOPED_TRACE("Output index: " + std::to_string(i));
            ANeuralNetworksMemory* memory = createDeviceMemoryForOutput(compilation, i);
            ASSERT_NE(memory, nullptr);
            auto& wrapperMemory = outputMemories.emplace_back(memory);
            ASSERT_EQ(Result::NO_ERROR, execution->setOutputFromMemory(i, &wrapperMemory, 0, 0));
        }
    }

    *result = execution->compute();

    // Copy out output results.
    for (uint32_t i = 0; i < testModel.outputIndexes.size(); i++) {
        SCOPED_TRACE("Output index: " + std::to_string(i));
        const auto& operand = testModel.operands[testModel.outputIndexes[i]];
        const size_t bufferSize = operand.data.size();
        auto& output = outputs->emplace_back(bufferSize);

        auto ashmem = TestAshmem::createFrom(output);
        ASSERT_NE(ashmem, nullptr);
        ASSERT_EQ(ANeuralNetworksMemory_copy(outputMemories[i].get(), ashmem->get()->get()),
                  ANEURALNETWORKS_NO_ERROR);
        std::copy(ashmem->dataAs<uint8_t>(), ashmem->dataAs<uint8_t>() + bufferSize,
                  output.getMutable<uint8_t>());
    }
}

void GeneratedTests::executeWithCompilation(const Compilation& compilation,
                                            const TestModel& testModel) {
    NNTRACE_APP(NNTRACE_PHASE_EXECUTION, "executeWithCompilation example");

    Execution execution(&compilation);
    Result result;
    std::vector<TestBuffer> outputs;

    if (mTestDeviceMemory) {
        computeWithDeviceMemories(compilation, testModel, &execution, &result, &outputs);
    } else {
        computeWithPtrs(testModel, &execution, &result, &outputs);
    }

    if (result == Result::NO_ERROR && outputs.empty()) {
        return;
    }

    {
        NNTRACE_APP(NNTRACE_PHASE_RESULTS, "executeWithCompilation example");
        if (mExpectFailure) {
            ASSERT_NE(result, Result::NO_ERROR);
            return;
        } else {
            ASSERT_EQ(result, Result::NO_ERROR);
        }

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

void GeneratedTests::executeOnce(const Model& model, const TestModel& testModel) {
    NNTRACE_APP(NNTRACE_PHASE_OVERALL, "executeOnce");
    std::optional<Compilation> compilation = compileModel(model);
    // Early return if compilation fails. The compilation result code is checked in compileModel.
    if (!compilation) return;
    executeWithCompilation(compilation.value(), testModel);
}

void GeneratedTests::executeMultithreadedOwnCompilation(const Model& model,
                                                        const TestModel& testModel) {
    NNTRACE_APP(NNTRACE_PHASE_OVERALL, "executeMultithreadedOwnCompilation");
    SCOPED_TRACE("MultithreadedOwnCompilation");
    std::vector<std::thread> threads;
    for (int i = 0; i < 10; i++) {
        threads.push_back(std::thread([&]() { executeOnce(model, testModel); }));
    }
    std::for_each(threads.begin(), threads.end(), [](std::thread& t) { t.join(); });
}

void GeneratedTests::executeMultithreadedSharedCompilation(const Model& model,
                                                           const TestModel& testModel) {
    NNTRACE_APP(NNTRACE_PHASE_OVERALL, "executeMultithreadedSharedCompilation");
    SCOPED_TRACE("MultithreadedSharedCompilation");
    std::optional<Compilation> compilation = compileModel(model);
    // Early return if compilation fails. The ompilation result code is checked in compileModel.
    if (!compilation) return;
    std::vector<std::thread> threads;
    for (int i = 0; i < 10; i++) {
        threads.push_back(
                std::thread([&]() { executeWithCompilation(compilation.value(), testModel); }));
    }
    std::for_each(threads.begin(), threads.end(), [](std::thread& t) { t.join(); });
}

// Test driver for those generated from ml/nn/runtime/test/spec
void GeneratedTests::execute(const TestModel& testModel) {
    NNTRACE_APP(NNTRACE_PHASE_OVERALL, "execute");
    Model model;
    createModel(testModel, mTestDynamicOutputShape, &model);
    model.finish();
    auto executeInternal = [&testModel, &model, this]() {
        SCOPED_TRACE("TestCompilationCaching = " + std::to_string(mTestCompilationCaching));
#ifndef NNTEST_MULTITHREADED
        executeOnce(model, testModel);
#else   // defined(NNTEST_MULTITHREADED)
        executeMultithreadedOwnCompilation(model, testModel);
        executeMultithreadedSharedCompilation(model, testModel);
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
    GeneratedTestBase::SetUp();
    char cacheDirTemp[] = "/data/local/tmp/TestCompilationCachingXXXXXX";
    char* cacheDir = mkdtemp(cacheDirTemp);
    ASSERT_NE(cacheDir, nullptr);
    mCacheDir = cacheDir;
    mToken = std::vector<uint8_t>(ANEURALNETWORKS_BYTE_SIZE_OF_CACHE_TOKEN, 0);
}

void GeneratedTests::TearDown() {
    if (!::testing::Test::HasFailure()) {
        // TODO: Switch to std::filesystem::remove_all once libc++fs is made available in CTS.
        // Remove the cache directory specified by path recursively.
        auto callback = [](const char* child, const struct stat*, int, struct FTW*) {
            return remove(child);
        };
        nftw(mCacheDir.c_str(), callback, 128, FTW_DEPTH | FTW_MOUNT | FTW_PHYS);
    }
    GeneratedTestBase::TearDown();
}

#ifdef NNTEST_COMPUTE_MODE
TEST_P(GeneratedTests, Sync) {
    const auto oldComputeMode = Execution::setComputeMode(Execution::ComputeMode::SYNC);
    execute(testModel);
    Execution::setComputeMode(oldComputeMode);
}

TEST_P(GeneratedTests, Async) {
    const auto oldComputeMode = Execution::setComputeMode(Execution::ComputeMode::ASYNC);
    execute(testModel);
    Execution::setComputeMode(oldComputeMode);
}

TEST_P(GeneratedTests, Burst) {
    const auto oldComputeMode = Execution::setComputeMode(Execution::ComputeMode::BURST);
    execute(testModel);
    Execution::setComputeMode(oldComputeMode);
}
#else
TEST_P(GeneratedTests, Test) {
    execute(testModel);
}
#endif

TEST_P(DynamicOutputShapeTest, Test) {
    execute(testModel);
}

TEST_P(GeneratedValidationTests, Test) {
    execute(testModel);
}

TEST_P(QuantizationCouplingTest, Test) {
    execute(testModel);
    execute(convertQuant8AsymmOperandsToSigned(testModel));
}

TEST_P(DeviceMemoryTest, Test) {
    execute(testModel);
}

INSTANTIATE_GENERATED_TEST(GeneratedTests,
                           [](const TestModel& testModel) { return !testModel.expectFailure; });

INSTANTIATE_GENERATED_TEST(DynamicOutputShapeTest,
                           [](const TestModel& testModel) { return !testModel.expectFailure; });

INSTANTIATE_GENERATED_TEST(GeneratedValidationTests,
                           [](const TestModel& testModel) { return testModel.expectFailure; });

INSTANTIATE_GENERATED_TEST(QuantizationCouplingTest, [](const TestModel& testModel) {
    return testModel.operations.size() == 1 && testModel.hasQuant8CoupledOperands();
});

INSTANTIATE_GENERATED_TEST(DeviceMemoryTest, [](const TestModel& testModel) {
    return !testModel.expectFailure &&
           std::all_of(testModel.outputIndexes.begin(), testModel.outputIndexes.end(),
                       [&testModel](uint32_t index) {
                           return testModel.operands[index].data.size() > 0;
                       });
});

}  // namespace android::nn::generated_tests
