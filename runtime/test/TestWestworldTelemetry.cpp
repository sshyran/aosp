/*
 * Copyright (C) 2021 The Android Open Source Project
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

#include <gtest/gtest.h>

#include <algorithm>
#include <numeric>

#include "Telemetry.h"
#include "TelemetryWestworld.h"

namespace android::nn::telemetry {

constexpr auto kNoTiming = std::numeric_limits<uint64_t>::max();
constexpr auto kNoAggregateTiming = AtomValue::AccumulatedTiming{};
constexpr ModelArchHash kExampleModelArchHash = {1, 2, 3};
constexpr const char* kExampleDeviceId = "driver1=version1,driver2=version2";

const AtomKey kExampleKey = {
        .isExecution = true,
        .modelArchHash = kExampleModelArchHash,
        .deviceId = kExampleDeviceId,
        .executionMode = ExecutionMode::SYNC,
        .errorCode = ANEURALNETWORKS_NO_ERROR,
        .inputDataClass = DataClass::FLOAT32,
        .outputDataClass = DataClass::FLOAT32,
        .fallbackToCpuFromError = false,
        .introspectionEnabled = false,
        .cacheEnabled = false,
        .hasControlFlow = false,
        .hasDynamicTemporaries = false,
};

bool operator==(const AtomValue::AccumulatedTiming& lhs, const AtomValue::AccumulatedTiming& rhs) {
    constexpr auto toTuple = [](const AtomValue::AccumulatedTiming& v) {
        return std::tie(v.sumTime, v.minTime, v.maxTime, v.sumSquaredTime, v.count);
    };
    return toTuple(lhs) == toTuple(rhs);
}

bool operator==(const AtomValue& lhs, const AtomValue& rhs) {
    constexpr auto toTuple = [](const AtomValue& v) {
        return std::tie(v.count, v.compilationTimeMillis, v.durationRuntimeMicros,
                        v.durationDriverMicros, v.durationHardwareMicros);
    };
    return toTuple(lhs) == toTuple(rhs);
}

AtomValue::AccumulatedTiming accumulatedTimingsFrom(std::initializer_list<int64_t> values) {
    CHECK_GT(values.size(), 0u);
    const int64_t sumTime = std::accumulate(values.begin(), values.end(), 0, std::plus<>{});
    const int64_t sumSquaredTime = std::accumulate(
            values.begin(), values.end(), 0, [](int64_t acc, int64_t v) { return acc + v * v; });
    const auto [minIt, maxIt] = std::minmax_element(values.begin(), values.end());
    return {
            .sumTime = sumTime,
            .minTime = *minIt,
            .maxTime = *maxIt,
            .sumSquaredTime = sumSquaredTime,
            .count = static_cast<int32_t>(values.size()),
    };
}

TEST(WestworldTelemetryTest, AtomKeyEquality) {
    EXPECT_EQ(kExampleKey, kExampleKey);
}

TEST(WestworldTelemetryTest, AtomKeyLessThan) {
    const auto key1 = kExampleKey;
    auto key2 = key1;
    key2.errorCode = ANEURALNETWORKS_DEAD_OBJECT;
    EXPECT_LT(key1, key2);
}

TEST(WestworldTelemetryTest, CombineAtomValues) {
    AtomValue value1 = {
            .count = 3,
            .compilationTimeMillis = accumulatedTimingsFrom({50, 100, 150}),
    };
    const AtomValue value2 = {
            .count = 1,
            .compilationTimeMillis = accumulatedTimingsFrom({75}),
    };
    const AtomValue valueResult = {
            .count = 4,
            .compilationTimeMillis = accumulatedTimingsFrom({50, 75, 100, 150}),
    };

    combineAtomValues(&value1, value2);
    EXPECT_EQ(value1, valueResult);
}

TEST(WestworldTelemetryTest, CombineAtomValueWithLeftIdentity) {
    AtomValue value1 = {};
    const AtomValue value2 = {
            .count = 1,
            .compilationTimeMillis = accumulatedTimingsFrom({75}),
    };
    const AtomValue valueResult = value2;

    combineAtomValues(&value1, value2);
    EXPECT_EQ(value1, valueResult);
}

TEST(WestworldTelemetryTest, CombineAtomValueWithRightIdentity) {
    AtomValue value1 = {
            .count = 3,
            .compilationTimeMillis = accumulatedTimingsFrom({50, 100, 150}),
    };
    const AtomValue value2 = {};
    const AtomValue valueResult = value1;

    combineAtomValues(&value1, value2);
    EXPECT_EQ(value1, valueResult);
}

TEST(WestworldTelemetryTest, AtomAggregatorStartEmpty) {
    AtomAggregator aggregator;
    EXPECT_TRUE(aggregator.empty());
}

TEST(WestworldTelemetryTest, AtomAggregatorNotEmptyAfterPush) {
    AtomAggregator aggregator;
    aggregator.push({kExampleKey, {}});
    EXPECT_FALSE(aggregator.empty());
}

TEST(WestworldTelemetryTest, AtomAggregatorEmptyAfterPop) {
    AtomAggregator aggregator;
    aggregator.push({kExampleKey, {}});
    const auto [k, v] = aggregator.pop();
    EXPECT_TRUE(aggregator.empty());
    EXPECT_EQ(k, kExampleKey);
}

TEST(WestworldTelemetryTest, AtomAggregatorTwoDifferentKeys) {
    const auto key1 = kExampleKey;
    auto key2 = key1;
    key2.executionMode = ExecutionMode::ASYNC;
    const auto value1 = AtomValue{.count = 2};
    const auto value2 = AtomValue{.count = 3};

    AtomAggregator aggregator;
    aggregator.push({key1, value1});
    aggregator.push({key2, value2});

    const auto [resultKey, resultValue] = aggregator.pop();

    EXPECT_EQ(resultKey, key1);
    EXPECT_EQ(resultValue, value1);
    EXPECT_FALSE(aggregator.empty());
}

TEST(WestworldTelemetryTest, AtomAggregatorTwoSameKeys) {
    const auto key1 = kExampleKey;
    const auto value1 = AtomValue{.count = 2};
    const auto value2 = AtomValue{.count = 3};

    AtomAggregator aggregator;
    aggregator.push({key1, value1});
    aggregator.push({key1, value2});

    const auto [resultKey, resultValue] = aggregator.pop();

    EXPECT_EQ(resultKey, key1);
    EXPECT_EQ(resultValue, AtomValue{.count = 5});
    EXPECT_TRUE(aggregator.empty());
}

TEST(WestworldTelemetryTest, AtomAggregatorPush) {
    const AtomKey key1 = kExampleKey;
    AtomKey key2 = key1;
    key2.executionMode = ExecutionMode::ASYNC;
    const auto value1 = AtomValue{.count = 2};
    const auto value2 = AtomValue{.count = 3};
    const auto value3 = AtomValue{.count = 6};

    AtomAggregator aggregator;
    aggregator.push({key1, value1});
    aggregator.push({key2, value2});
    aggregator.push({key1, value3});

    const auto [resultKey1, resultValue1] = aggregator.pop();
    const auto [resultKey2, resultValue2] = aggregator.pop();

    EXPECT_EQ(resultKey1, key1);
    EXPECT_EQ(resultKey2, key2);
    EXPECT_EQ(resultValue1, AtomValue{.count = 8});
    EXPECT_EQ(resultValue2, AtomValue{.count = 3});
    EXPECT_TRUE(aggregator.empty());
}

TEST(WestworldTelemetryTest, LoggerWithQuietPeriodFastLog) {
    Atom example{};
    auto fn = [example](Atom&& atom) { EXPECT_EQ(atom, example); };
    LoggerWithQuietPeriod logger(std::chrono::nanoseconds(0), fn);
    logger.write(std::move(example));
}

TEST(WestworldTelemetryTest, LoggerWithQuietPeriodStoreAndReturn) {
    Atom example{};
    auto fn = [](Atom&& /*atom*/) { ADD_FAILURE() << "Logger not expected to be called"; };
    LoggerWithQuietPeriod logger(std::chrono::nanoseconds(0), fn, {}, TimePoint::max());
    logger.write(std::move(example));
}

TEST(WestworldTelemetryTest, LoggerWithQuietPeriodStoreAndLog) {
    const auto key = kExampleKey;
    const auto value1 = AtomValue{.count = 2};
    const auto value2 = AtomValue{.count = 3};
    const auto result = Atom{key, AtomValue{.count = 5}};

    AtomAggregator aggregator;
    aggregator.push({key, value1});

    const auto fn = [&result](Atom&& atom) { EXPECT_EQ(atom, result); };
    LoggerWithQuietPeriod logger(std::chrono::nanoseconds(0), fn, std::move(aggregator));
    logger.write({key, value2});
}

TEST(WestworldTelemetryTest, LoggerWithQuietPeriodOnlyStoreOnce) {
    const auto key = kExampleKey;
    const auto value1 = AtomValue{.count = 2};
    const auto value2 = AtomValue{.count = 3};

    uint32_t count = 0;
    const auto fn = [&count](Atom&& /*atom*/) mutable { ++count; };
    LoggerWithQuietPeriod logger(std::chrono::seconds(60 * 60 * 24), fn);

    EXPECT_EQ(count, 0u);
    logger.write({key, value1});
    EXPECT_EQ(count, 1u);
    logger.write({key, value2});
    EXPECT_EQ(count, 1u);
}

TEST(WestworldTelemetryTest, createAtomFromCompilationInfoWhenNoError) {
    const DiagnosticCompilationInfo info{
            .modelArchHash = kExampleModelArchHash.data(),
            .deviceId = kExampleDeviceId,
            .errorCode = ANEURALNETWORKS_NO_ERROR,
            .inputDataClass = DataClass::FLOAT32,
            .outputDataClass = DataClass::QUANT,
            .compilationTimeNanos = 10'000'000u,
            .fallbackToCpuFromError = false,
            .introspectionEnabled = true,
            .hasControlFlow = false,
            .hasDynamicTemporaries = true,
    };

    const auto [key, value] = createAtomFrom(&info);

    EXPECT_FALSE(key.isExecution);
    EXPECT_EQ(key.modelArchHash, kExampleModelArchHash);
    EXPECT_EQ(key.deviceId, kExampleDeviceId);
    EXPECT_EQ(key.executionMode, ExecutionMode::SYNC);
    EXPECT_EQ(key.errorCode, info.errorCode);
    EXPECT_EQ(key.inputDataClass, info.inputDataClass);
    EXPECT_EQ(key.outputDataClass, info.outputDataClass);
    EXPECT_EQ(key.fallbackToCpuFromError, info.fallbackToCpuFromError);
    EXPECT_EQ(key.introspectionEnabled, info.introspectionEnabled);
    EXPECT_EQ(key.cacheEnabled, info.cacheEnabled);
    EXPECT_EQ(key.hasControlFlow, info.hasControlFlow);
    EXPECT_EQ(key.hasDynamicTemporaries, info.hasDynamicTemporaries);

    EXPECT_EQ(value.count, 1);

    const auto compilationTimeMillis =
            accumulatedTimingsFrom({static_cast<int64_t>(info.compilationTimeNanos / 1'000'000u)});
    EXPECT_EQ(value.compilationTimeMillis, compilationTimeMillis);

    EXPECT_EQ(value.durationRuntimeMicros, kNoAggregateTiming);
    EXPECT_EQ(value.durationDriverMicros, kNoAggregateTiming);
    EXPECT_EQ(value.durationHardwareMicros, kNoAggregateTiming);
}

TEST(WestworldTelemetryTest, createAtomFromCompilationInfoWhenError) {
    const DiagnosticCompilationInfo info{
            .modelArchHash = kExampleModelArchHash.data(),
            .deviceId = kExampleDeviceId,
            .errorCode = ANEURALNETWORKS_OP_FAILED,
            .inputDataClass = DataClass::FLOAT32,
            .outputDataClass = DataClass::QUANT,
            .compilationTimeNanos = kNoTiming,
            .fallbackToCpuFromError = true,
            .introspectionEnabled = false,
            .hasControlFlow = true,
            .hasDynamicTemporaries = false,
    };

    const auto [key, value] = createAtomFrom(&info);

    EXPECT_FALSE(key.isExecution);
    EXPECT_EQ(key.modelArchHash, kExampleModelArchHash);
    EXPECT_EQ(key.deviceId, kExampleDeviceId);
    EXPECT_EQ(key.executionMode, ExecutionMode::SYNC);
    EXPECT_EQ(key.errorCode, info.errorCode);
    EXPECT_EQ(key.inputDataClass, info.inputDataClass);
    EXPECT_EQ(key.outputDataClass, info.outputDataClass);
    EXPECT_EQ(key.fallbackToCpuFromError, info.fallbackToCpuFromError);
    EXPECT_EQ(key.introspectionEnabled, info.introspectionEnabled);
    EXPECT_EQ(key.cacheEnabled, info.cacheEnabled);
    EXPECT_EQ(key.hasControlFlow, info.hasControlFlow);
    EXPECT_EQ(key.hasDynamicTemporaries, info.hasDynamicTemporaries);

    EXPECT_EQ(value.count, 1);

    EXPECT_EQ(value.compilationTimeMillis, kNoAggregateTiming);
    EXPECT_EQ(value.durationRuntimeMicros, kNoAggregateTiming);
    EXPECT_EQ(value.durationDriverMicros, kNoAggregateTiming);
    EXPECT_EQ(value.durationHardwareMicros, kNoAggregateTiming);
}

TEST(WestworldTelemetryTest, createAtomFromExecutionInfoWhenNoError) {
    const DiagnosticExecutionInfo info{
            .modelArchHash = kExampleModelArchHash.data(),
            .deviceId = kExampleDeviceId,
            .executionMode = ExecutionMode::SYNC,
            .inputDataClass = DataClass::FLOAT32,
            .outputDataClass = DataClass::QUANT,
            .errorCode = ANEURALNETWORKS_NO_ERROR,
            .durationRuntimeNanos = 350'000u,
            .durationDriverNanos = 350'000u,
            .durationHardwareNanos = 350'000u,
            .introspectionEnabled = false,
            .cacheEnabled = true,
            .hasControlFlow = false,
            .hasDynamicTemporaries = true,
    };

    const auto [key, value] = createAtomFrom(&info);

    EXPECT_TRUE(key.isExecution);
    EXPECT_EQ(key.modelArchHash, kExampleModelArchHash);
    EXPECT_EQ(key.deviceId, kExampleDeviceId);
    EXPECT_EQ(key.executionMode, info.executionMode);
    EXPECT_EQ(key.errorCode, info.errorCode);
    EXPECT_EQ(key.inputDataClass, info.inputDataClass);
    EXPECT_EQ(key.outputDataClass, info.outputDataClass);
    EXPECT_FALSE(key.fallbackToCpuFromError);
    EXPECT_EQ(key.introspectionEnabled, info.introspectionEnabled);
    EXPECT_EQ(key.cacheEnabled, info.cacheEnabled);
    EXPECT_EQ(key.hasControlFlow, info.hasControlFlow);
    EXPECT_EQ(key.hasDynamicTemporaries, info.hasDynamicTemporaries);

    EXPECT_EQ(value.count, 1);

    EXPECT_EQ(value.compilationTimeMillis, kNoAggregateTiming);

    const auto durationRuntimeMicros =
            accumulatedTimingsFrom({static_cast<int64_t>(info.durationRuntimeNanos / 1'000u)});
    const auto durationDriverMicros =
            accumulatedTimingsFrom({static_cast<int64_t>(info.durationDriverNanos / 1'000u)});
    const auto durationHardwareMicros =
            accumulatedTimingsFrom({static_cast<int64_t>(info.durationHardwareNanos / 1'000u)});

    EXPECT_EQ(value.durationRuntimeMicros, durationRuntimeMicros);
    EXPECT_EQ(value.durationDriverMicros, durationDriverMicros);
    EXPECT_EQ(value.durationHardwareMicros, durationHardwareMicros);
}

TEST(WestworldTelemetryTest, createAtomFromExecutionInfoWhenError) {
    const DiagnosticExecutionInfo info{
            .modelArchHash = kExampleModelArchHash.data(),
            .deviceId = kExampleDeviceId,
            .executionMode = ExecutionMode::SYNC,
            .inputDataClass = DataClass::FLOAT32,
            .outputDataClass = DataClass::QUANT,
            .errorCode = ANEURALNETWORKS_OP_FAILED,
            .durationRuntimeNanos = kNoTiming,
            .durationDriverNanos = kNoTiming,
            .durationHardwareNanos = kNoTiming,
            .introspectionEnabled = true,
            .cacheEnabled = false,
            .hasControlFlow = true,
            .hasDynamicTemporaries = false,
    };

    const auto [key, value] = createAtomFrom(&info);

    EXPECT_TRUE(key.isExecution);
    EXPECT_EQ(key.modelArchHash, kExampleModelArchHash);
    EXPECT_EQ(key.deviceId, kExampleDeviceId);
    EXPECT_EQ(key.executionMode, info.executionMode);
    EXPECT_EQ(key.errorCode, info.errorCode);
    EXPECT_EQ(key.inputDataClass, info.inputDataClass);
    EXPECT_EQ(key.outputDataClass, info.outputDataClass);
    EXPECT_FALSE(key.fallbackToCpuFromError);
    EXPECT_EQ(key.introspectionEnabled, info.introspectionEnabled);
    EXPECT_EQ(key.cacheEnabled, info.cacheEnabled);
    EXPECT_EQ(key.hasControlFlow, info.hasControlFlow);
    EXPECT_EQ(key.hasDynamicTemporaries, info.hasDynamicTemporaries);

    EXPECT_EQ(value.count, 1);

    EXPECT_EQ(value.compilationTimeMillis, kNoAggregateTiming);
    EXPECT_EQ(value.durationRuntimeMicros, kNoAggregateTiming);
    EXPECT_EQ(value.durationDriverMicros, kNoAggregateTiming);
    EXPECT_EQ(value.durationHardwareMicros, kNoAggregateTiming);
}

}  // namespace android::nn::telemetry
