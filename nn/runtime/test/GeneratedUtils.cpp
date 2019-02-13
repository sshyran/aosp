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

#include "GeneratedUtils.h"

#include "TestHarness.h"

#include <gtest/gtest.h>

#include <cassert>
#include <cmath>
#include <fstream>
#include <iostream>
#include <map>
#include <thread>

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

namespace {
template <typename T>
void print(std::ostream& os, const std::map<int, std::vector<T>>& test) {
    // dump T-typed inputs
    for_each<T>(test, [&os](int idx, const std::vector<T>& f) {
        os << "    aliased_output" << idx << ": [";
        for (size_t i = 0; i < f.size(); ++i) {
            os << (i == 0 ? "" : ", ") << +f[i];
        }
        os << "],\n";
    });
}

// Specialized for _Float16 because it requires explicit conversion.
template <>
void print<_Float16>(std::ostream& os, const std::map<int, std::vector<_Float16>>& test) {
    for_each<_Float16>(test, [&os](int idx, const std::vector<_Float16>& f) {
        os << "    aliased_output" << idx << ": [";
        for (size_t i = 0; i < f.size(); ++i) {
            os << (i == 0 ? "" : ", ") << +static_cast<float>(f[i]);
        }
        os << "],\n";
    });
}
}  // namespace

static void printAll(std::ostream& os, const MixedTyped& test) {
    print(os, test.float32Operands);
    print(os, test.int32Operands);
    print(os, test.quant8AsymmOperands);
    print(os, test.quant16SymmOperands);
    print(os, test.float16Operands);
    print(os, test.bool8Operands);
    print(os, test.quant8ChannelOperands);
    print(os, test.quant16AsymmOperands);
    static_assert(8 == MixedTyped::kNumTypes,
                  "Number of types in MixedTyped changed, but printAll function wasn't updated");
}

Compilation createAndCompileModel(Model* model, std::function<void(Model*)> createModel) {
    NNTRACE_APP(NNTRACE_PHASE_PREPARATION, "createAndCompileModel");

    createModel(model);
    model->finish();

    NNTRACE_APP_SWITCH(NNTRACE_PHASE_COMPILATION, "createAndCompileModel");
    Compilation compilation(model);
    compilation.finish();

    return compilation;
}

void executeWithCompilation(Model* model, Compilation* compilation,
                            std::function<bool(int)> isIgnored,
                            std::vector<MixedTypedExample>& examples,
                            std::string dumpFile) {
    bool dumpToFile = !dumpFile.empty();
    std::ofstream s;
    if (dumpToFile) {
        s.open(dumpFile, std::ofstream::trunc);
        ASSERT_TRUE(s.is_open());
    }

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

        Result r = execution.compute();
        ASSERT_EQ(Result::NO_ERROR, r);
        {
            NNTRACE_APP(NNTRACE_PHASE_RESULTS, "executeWithCompilation example");

            // Get output dimensions
            for_each<uint32_t>(
                    test.operandDimensions, [&execution](int idx, std::vector<uint32_t>& t) {
                        ASSERT_EQ(Result::NO_ERROR, execution.getOutputOperandDimensions(idx, &t));
                    });

            // Dump all outputs for the slicing tool
            if (dumpToFile) {
                s << "output" << exampleNo << " = {\n";
                printAll(s, test);
                // all outputs are done
                s << "}\n";
            }

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

void executeOnce(std::function<void(Model*)> createModel,
                 std::function<bool(int)> isIgnored,
                 std::vector<MixedTypedExample>& examples,
                 std::string dumpFile) {
    NNTRACE_APP(NNTRACE_PHASE_OVERALL, "executeOnce");
    Model model;
    Compilation compilation = createAndCompileModel(&model, createModel);
    executeWithCompilation(&model, &compilation, isIgnored, examples, dumpFile);
}


void executeMultithreadedOwnCompilation(std::function<void(Model*)> createModel,
                                        std::function<bool(int)> isIgnored,
                                        std::vector<MixedTypedExample>& examples) {
    NNTRACE_APP(NNTRACE_PHASE_OVERALL, "executeMultithreadedOwnCompilation");
    SCOPED_TRACE("MultithreadedOwnCompilation");
    std::vector<std::thread> threads;
    for (int i = 0; i < 10; i++) {
        threads.push_back(
                std::thread([&]() { executeOnce(createModel, isIgnored, examples, ""); }));
    }
    std::for_each(threads.begin(), threads.end(), [](std::thread& t) {
        t.join();
    });
}

void executeMultithreadedSharedCompilation(std::function<void(Model*)> createModel,
                                           std::function<bool(int)> isIgnored,
                                           std::vector<MixedTypedExample>& examples) {
    NNTRACE_APP(NNTRACE_PHASE_OVERALL, "executeMultithreadedSharedCompilation");
    SCOPED_TRACE("MultithreadedSharedCompilation");
    Model model;
    Compilation compilation = createAndCompileModel(&model, createModel);
    std::vector<std::thread> threads;
    for (int i = 0; i < 10; i++) {
        threads.push_back(std::thread([&]() {
            executeWithCompilation(&model, &compilation, isIgnored, examples, "");
        }));
    }
    std::for_each(threads.begin(), threads.end(), [](std::thread& t) {
        t.join();
    });
}


// Test driver for those generated from ml/nn/runtime/test/spec
void execute(std::function<void(Model*)> createModel,
             std::function<bool(int)> isIgnored,
             std::vector<MixedTypedExample>& examples,
             [[maybe_unused]] std::string dumpFile) {
#ifndef NNTEST_MULTITHREADED
    executeOnce(createModel, isIgnored, examples, dumpFile);
#else  // defined(NNTEST_MULTITHREADED)
    executeMultithreadedOwnCompilation(createModel, isIgnored, examples);
    executeMultithreadedSharedCompilation(createModel, isIgnored, examples);
#endif  // !defined(NNTEST_MULTITHREADED)
}

}  // namespace generated_tests
