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

/* Header-only library for various helpers of test harness
 * See frameworks/ml/nn/runtime/test/TestGenerated.cpp for how this is used.
 */
#ifndef ANDROID_ML_NN_TOOLS_TEST_GENERATOR_TEST_HARNESS_H
#define ANDROID_ML_NN_TOOLS_TEST_GENERATOR_TEST_HARNESS_H

#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

#include <cmath>
#include <functional>
#include <map>
#include <tuple>
#include <vector>

namespace test_helper {

constexpr const size_t gMaximumNumberOfErrorMessages = 10;

typedef std::map<int, std::vector<float>> Float32Operands;
typedef std::map<int, std::vector<int32_t>> Int32Operands;
typedef std::map<int, std::vector<uint8_t>> Quant8Operands;
typedef std::map<int, std::vector<int16_t>> Quant16Operands;
typedef std::tuple<Float32Operands,  // ANEURALNETWORKS_TENSOR_FLOAT32
                   Int32Operands,    // ANEURALNETWORKS_TENSOR_INT32
                   Quant8Operands,   // ANEURALNETWORKS_TENSOR_QUANT8_ASYMM
                   Quant16Operands   // ANEURALNETWORKS_TENSOR_QUANT16_ASYMM
                   >
        MixedTyped;
typedef std::pair<MixedTyped, MixedTyped> MixedTypedExampleType;

// Mixed-typed examples
typedef struct {
    MixedTypedExampleType operands;
    // Specifies the RANDOM_MULTINOMIAL distribution tolerance.
    // If set to greater than zero, the input is compared as log-probabilities
    // to the output and must be within this tolerance to pass.
    float expectedMultinomialDistributionTolerance = 0.0;
} MixedTypedExample;

template <typename T>
struct MixedTypedIndex {};

template <>
struct MixedTypedIndex<float> {
    static constexpr size_t index = 0;
};
template <>
struct MixedTypedIndex<int32_t> {
    static constexpr size_t index = 1;
};
template <>
struct MixedTypedIndex<uint8_t> {
    static constexpr size_t index = 2;
};
template <>
struct MixedTypedIndex<int16_t> {
    static constexpr size_t index = 3;
};

template <size_t Index>
struct MixedTypedTypes {
    typedef typename std::tuple_element<Index, MixedTyped>::type::mapped_type VectorType;
    typedef typename VectorType::value_type ValueType;
};

// Go through all index-value pairs of a given input type
template <typename T>
inline void for_each(const MixedTyped& idx_and_data,
                     std::function<void(int, const std::vector<T>&)> execute) {
    for (auto& i : std::get<MixedTypedIndex<T>::index>(idx_and_data)) {
        execute(i.first, i.second);
    }
}

// non-const variant of for_each
template <typename T>
inline void for_each(MixedTyped& idx_and_data,
                     std::function<void(int, std::vector<T>&)> execute) {
    for (auto& i : std::get<MixedTypedIndex<T>::index>(idx_and_data)) {
        execute(i.first, i.second);
    }
}

// internal helper for for_all
template <typename T>
inline void for_all_internal(
        MixedTyped& idx_and_data,
        std::function<void(int, void*, size_t)> execute_this) {
    for_each<T>(idx_and_data, [&execute_this](int idx, std::vector<T>& m) {
        execute_this(idx, static_cast<void*>(m.data()), m.size() * sizeof(T));
    });
}

// Go through all index-value pairs of all input types
// expects a functor that takes (int index, void *raw data, size_t sz)
inline void for_all(MixedTyped& idx_and_data,
                    std::function<void(int, void*, size_t)> execute_this) {
    for_all_internal<float>(idx_and_data, execute_this);
    for_all_internal<int32_t>(idx_and_data, execute_this);
    for_all_internal<uint8_t>(idx_and_data, execute_this);
    for_all_internal<int16_t>(idx_and_data, execute_this);
    static_assert(4 == std::tuple_size<MixedTyped>::value,
                  "Number of types in MixedTyped changed, but for_all function wasn't updated");
}

// Const variant of internal helper for for_all
template <typename T>
inline void for_all_internal(
        const MixedTyped& idx_and_data,
        std::function<void(int, const void*, size_t)> execute_this) {
    for_each<T>(idx_and_data, [&execute_this](int idx, const std::vector<T>& m) {
        execute_this(idx, static_cast<const void*>(m.data()), m.size() * sizeof(T));
    });
}

// Go through all index-value pairs (const variant)
// expects a functor that takes (int index, const void *raw data, size_t sz)
inline void for_all(const MixedTyped& idx_and_data,
                    std::function<void(int, const void*, size_t)> execute_this) {
    for_all_internal<float>(idx_and_data, execute_this);
    for_all_internal<int32_t>(idx_and_data, execute_this);
    for_all_internal<uint8_t>(idx_and_data, execute_this);
    for_all_internal<int16_t>(idx_and_data, execute_this);
    static_assert(
            4 == std::tuple_size<MixedTyped>::value,
            "Number of types in MixedTyped changed, but const for_all function wasn't updated");
}

// Helper template - resize test output per golden
template <typename ty, size_t tuple_index>
void resize_accordingly_(const MixedTyped& golden, MixedTyped& test) {
    std::function<void(int, const std::vector<ty>&)> execute =
            [&test](int index, const std::vector<ty>& m) {
                auto& t = std::get<tuple_index>(test);
                t[index].resize(m.size());
            };
    for_each<ty>(golden, execute);
}

inline void resize_accordingly(const MixedTyped& golden, MixedTyped& test) {
    resize_accordingly_<float, 0>(golden, test);
    resize_accordingly_<int32_t, 1>(golden, test);
    resize_accordingly_<uint8_t, 2>(golden, test);
    resize_accordingly_<int16_t, 3>(golden, test);
    static_assert(4 == std::tuple_size<MixedTyped>::value,
                  "Number of types in MixedTyped changed, but resize_accordingly function wasn't "
                  "updated");
}

template <typename ty, size_t tuple_index>
void filter_internal(const MixedTyped& golden, MixedTyped* filtered,
                     std::function<bool(int)> is_ignored) {
    for_each<ty>(golden,
                 [filtered, &is_ignored](int index, const std::vector<ty>& m) {
                     auto& g = std::get<tuple_index>(*filtered);
                     if (!is_ignored(index)) g[index] = m;
                 });
}

inline MixedTyped filter(const MixedTyped& golden,
                         std::function<bool(int)> is_ignored) {
    MixedTyped filtered;
    filter_internal<float, 0>(golden, &filtered, is_ignored);
    filter_internal<int32_t, 1>(golden, &filtered, is_ignored);
    filter_internal<uint8_t, 2>(golden, &filtered, is_ignored);
    filter_internal<int16_t, 3>(golden, &filtered, is_ignored);
    static_assert(4 == std::tuple_size<MixedTyped>::value,
                  "Number of types in MixedTyped changed, but filter function wasn't updated");
    return filtered;
}

// Compare results
// clang-format off
template <size_t I>
void compare_(const MixedTyped& golden, const MixedTyped& test,
              std::function<void(typename MixedTypedTypes<I>::ValueType,
                                 typename MixedTypedTypes<I>::ValueType)> cmp) {
    for_each<typename MixedTypedTypes<I>::ValueType>(
            golden, [&test, &cmp](int index, const typename MixedTypedTypes<I>::VectorType& m) {
                const auto& test_operands = std::get<I>(test);
                const auto& test_ty = test_operands.find(index);
                ASSERT_NE(test_ty, test_operands.end());
                for (unsigned int i = 0; i < m.size(); i++) {
                    SCOPED_TRACE(testing::Message() << "When comparing element " << i);
                    cmp(m[i], test_ty->second[i]);
                }
            });
}
// clang-format on

inline void compare(const MixedTyped& golden, const MixedTyped& test,
                    float fpAtol = 1e-5f, float fpRtol = 1e-5f) {
    size_t totalNumberOfErrors = 0;
    compare_<0>(golden, test, [&totalNumberOfErrors, fpAtol, fpRtol](float expected, float actual) {
        // Compute the range based on both absolute tolerance and relative tolerance
        float fpRange = fpAtol + fpRtol * std::abs(expected);
        if (totalNumberOfErrors < gMaximumNumberOfErrorMessages) {
            EXPECT_NEAR(expected, actual, fpRange);
        }
        if (std::abs(expected - actual) > fpRange) {
            totalNumberOfErrors++;
        }
    });
    compare_<1>(golden, test, [&totalNumberOfErrors](int32_t expected, int32_t actual) {
        if (totalNumberOfErrors < gMaximumNumberOfErrorMessages) {
            EXPECT_EQ(expected, actual);
        }
        if (expected != actual) {
            totalNumberOfErrors++;
        }
    });
    compare_<2>(golden, test, [&totalNumberOfErrors](uint8_t expected, uint8_t actual) {
        if (totalNumberOfErrors < gMaximumNumberOfErrorMessages) {
            EXPECT_NEAR(expected, actual, 1);
        }
        if (std::abs(expected - actual) > 1) {
            totalNumberOfErrors++;
        }
    });
    compare_<3>(golden, test, [&totalNumberOfErrors](int16_t expected, int16_t actual) {
        if (totalNumberOfErrors < gMaximumNumberOfErrorMessages) {
            EXPECT_NEAR(expected, actual, 1);
        }
        if (std::abs(expected - actual) > 1) {
            totalNumberOfErrors++;
        }
    });
    static_assert(4 == std::tuple_size<MixedTyped>::value,
                  "Number of types in MixedTyped changed, but compare function wasn't updated");
    EXPECT_EQ(size_t{0}, totalNumberOfErrors);
}

// Calculates the expected probability from the unnormalized log-probability of
// each class in the input and compares it to the actual ocurrence of that class
// in the output.
inline void expectMultinomialDistributionWithinTolerance(const MixedTyped& test,
                                                         const MixedTypedExample& example) {
    // TODO: These should be parameters but aren't currently preserved in the example.
    const int kBatchSize = 1;
    const int kNumClasses = 1024;
    const int kNumSamples = 128;

    std::vector<int32_t> output = std::get<1>(test).at(0);
    std::vector<int> class_counts;
    class_counts.resize(kNumClasses);
    for (int index : output) {
        class_counts[index]++;
    }
    std::vector<float> input = std::get<0>(example.operands.first).at(0);
    for (int b = 0; b < kBatchSize; ++b) {
        float probability_sum = 0;
        const int batch_index = kBatchSize * b;
        for (int i = 0; i < kNumClasses; ++i) {
            probability_sum += expf(input[batch_index + i]);
        }
        for (int i = 0; i < kNumClasses; ++i) {
            float probability =
                    static_cast<float>(class_counts[i]) / static_cast<float>(kNumSamples);
            float probability_expected = expf(input[batch_index + i]) / probability_sum;
            EXPECT_THAT(probability,
                        ::testing::FloatNear(probability_expected,
                                             example.expectedMultinomialDistributionTolerance));
        }
    }
}

};  // namespace test_helper

#endif  // ANDROID_ML_NN_TOOLS_TEST_GENERATOR_TEST_HARNESS_H
