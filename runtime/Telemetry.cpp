/*
 * Copyright (C) 2020 The Android Open Source Project
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

#define LOG_TAG "Telemetry"

#include "Telemetry.h"

#include <algorithm>
#include <limits>
#include <memory>
#include <string>
#include <utility>
#include <vector>

#include "FeatureLevel.h"
#include "Manager.h"

#ifndef NN_COMPATIBILITY_LIBRARY_BUILD
#include "AppInfoFetcher.h"
#endif  // NN_COMPATIBILITY_LIBRARY_BUILD

namespace android::nn::telemetry {
namespace {

constexpr uint64_t kNoTimeReported = std::numeric_limits<uint64_t>::max();

std::function<void(const DiagnosticCompilationInfo*)> gCompilationCallback;
std::function<void(const DiagnosticExecutionInfo*)> gExecutionCallback;
std::atomic_bool gLoggingCallbacksSet = false;

// Convert list of Device object into a single string with all
// identifiers, sorted by name in form of "name1=version1,name2=version2,..."
std::string makeDeviceId(const std::vector<std::shared_ptr<Device>>& devices) {
    // Sort device identifiers in alphabetical order
    std::vector<std::string> names;
    names.reserve(devices.size());
    size_t totalSize = 0;
    for (size_t i = 0; i < devices.size(); ++i) {
        if (!names.empty()) {
            totalSize++;
        }
        names.push_back(devices[i]->getName() + "=" + devices[i]->getVersionString());
        totalSize += names.back().size();
    }
    sort(names.begin(), names.end());

    // Concatenate them
    std::string result;
    result.reserve(totalSize);
    for (auto& name : names) {
        if (!result.empty()) {
            result += ',';
        }
        result += name;
    }
    return result;
}

// Generate logging session identifier based on millisecond timestamp and pid
int32_t generateSessionId() {
    auto now = std::chrono::system_clock::now();
    auto duration = now.time_since_epoch();
    // Taking millisecond timestamp and pid modulo a large prime to make the id less identifiable,
    // but still unique within the device scope.
    auto timestamp = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
    return (getpid() * 123 + timestamp) % 999983;
}

// Generate and store session identifier
int32_t getSessionId() {
    static int32_t ident = generateSessionId();
    return ident;
}

// Operand type to atom datatype
DataClass operandToDataClass(const OperandType& op) {
    switch (op) {
        case OperandType::TENSOR_FLOAT32:
            return DataClass::FLOAT32;
        case OperandType::TENSOR_FLOAT16:
            return DataClass::FLOAT16;
        case OperandType::TENSOR_QUANT8_ASYMM:
        case OperandType::TENSOR_QUANT16_SYMM:
        case OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL:
        case OperandType::TENSOR_QUANT16_ASYMM:
        case OperandType::TENSOR_QUANT8_SYMM:
        case OperandType::TENSOR_QUANT8_ASYMM_SIGNED:
            return DataClass::QUANT;
        default:
            // we ignore operand of other types
            return DataClass::OTHER;
    }
}

// Evaluate a coarse category of model inputs
DataClass evalInputDataClass(const ModelBuilder* m) {
    DataClass result = DataClass::UNKNOWN;
    for (size_t i = 0; i < m->inputCount(); i++) {
        result = evalDataClass(m->getInputOperand(i).type, result);
    }
    return result;
}

// Evaluate a coarse category of model outputs
DataClass evalOutputDataClass(const ModelBuilder* m) {
    DataClass result = DataClass::UNKNOWN;
    for (size_t i = 0; i < m->outputCount(); i++) {
        result = evalDataClass(m->getOutputOperand(i).type, result);
    }
    return result;
}

const char* getPackageName() {
#ifndef NN_COMPATIBILITY_LIBRARY_BUILD
    auto& appInfo = AppInfoFetcher::get()->getAppInfo();
    // If no package, return binary name
    return appInfo.appPackageName.empty() ? appInfo.binaryPath.c_str()
                                          : appInfo.appPackageName.c_str();
#else   // NN_COMPATIBILITY_LIBRARY_BUILD
    return "<package info not available>";
#endif  // NN_COMPATIBILITY_LIBRARY_BUILD
}

}  // namespace

// Infer a data class from an operand type. Call iteratievly on operands set, previousDataClass is
// result of evalDataClass evaluation on previous operands or DataClass::UNKNOWN value if called on
// first operand
DataClass evalDataClass(const OperandType& op, DataClass previousDataClass) {
    DataClass operandClass = operandToDataClass(op);
    if (operandClass == DataClass::OTHER) {
        if (previousDataClass == DataClass::UNKNOWN) {
            return operandClass;
        }
        return previousDataClass;
    }

    if (previousDataClass == DataClass::UNKNOWN || previousDataClass == DataClass::OTHER) {
        return operandClass;
    } else if (operandClass != previousDataClass) {
        return DataClass::MIXED;
    }
    return operandClass;
}

void onCompilationFinish(CompilationBuilder* c, int resultCode) {
    // Allow to emit even only if compilation was finished
    if (!c->isFinished()) {
        LOG(ERROR) << "telemetry::onCompilationFinish called on unfinished compilation";
        return;
    }

    if (!gLoggingCallbacksSet) {
        return;
    }

    const std::array<uint8_t, 32> hashPlaceholder{};
    const std::string deviceId = makeDeviceId(c->getDevices());

    const DiagnosticCompilationInfo info{
            .sessionId = getSessionId(),
            .packageName = getPackageName(),
            .versionNnapiModule = kNnapiApexVersion,
            // TODO(b/191366627): Generate model hash when model is generated
            .modelArchHash = hashPlaceholder.data(),  // TODO(b/191366627): Fetch this
            .deviceCount = static_cast<int32_t>(c->getDevices().size()),
            .deviceId = deviceId.c_str(),
            .errorCode = resultCode,
            .inputDataClass = evalInputDataClass(c->getModel()),
            .outputDataClass = evalOutputDataClass(c->getModel()),
            .compilationTimeNanos = kNoTimeReported,  // TODO(b/191366627): Measure this
            .fallbackToCpuFromError = false,          // TODO(b/191366627): Measure this
            .introspectionEnabled = c->createdWithExplicitDeviceList(),
            .cacheEnabled = c->isCacheInfoProvided(),
            .hasControlFlow = c->getModel()->hasControlFlow(),
            .hasDynamicTemporaries = c->hasDynamicTemporaries(),
    };

    gCompilationCallback(&info);
}

void onExecutionFinish(ExecutionBuilder* e, ExecutionMode executionMode, int resultCode) {
    // Allow to emit even only if compilation was finished
    if (!e->completed()) {
        LOG(ERROR) << "telemetry::onExecutionFinish called on unfinished execution";
        return;
    }

    if (!gLoggingCallbacksSet) {
        return;
    }

    auto compilation = e->getCompilation();

    const std::array<uint8_t, 32> hashPlaceholder{};
    const std::string deviceId = makeDeviceId(compilation->getDevices());

    const DiagnosticExecutionInfo info{
            .sessionId = getSessionId(),
            .packageName = getPackageName(),
            .versionNnapiModule = kNnapiApexVersion,
            .modelArchHash = hashPlaceholder.data(),  // TODO(b/191366627): Fetch this
            .deviceCount = static_cast<int32_t>(compilation->getDevices().size()),
            .deviceId = deviceId.c_str(),
            .executionMode = executionMode,
            .inputDataClass = evalInputDataClass(e->getModel()),
            .outputDataClass = evalOutputDataClass(e->getModel()),
            .errorCode = resultCode,
            .durationRuntimeNanos = kNoTimeReported,   // TODO(b/191366627): Measure this
            .durationDriverNanos = kNoTimeReported,    // TODO(b/191366627): Measure this
            .durationHardwareNanos = kNoTimeReported,  // TODO(b/191366627): Measure this
            .introspectionEnabled = compilation->createdWithExplicitDeviceList(),
            .cacheEnabled = compilation->isCacheInfoProvided(),
            .hasControlFlow = compilation->getModel()->hasControlFlow(),
            .hasDynamicTemporaries = compilation->hasDynamicTemporaries(),
    };

    gExecutionCallback(&info);
}

void registerTelemetryCallbacks(std::function<void(const DiagnosticCompilationInfo*)> compilation,
                                std::function<void(const DiagnosticExecutionInfo*)> execution) {
    gCompilationCallback = std::move(compilation);
    gExecutionCallback = std::move(execution);
    gLoggingCallbacksSet = true;
}

void clearTelemetryCallbacks() {
    gLoggingCallbacksSet = false;
}

}  // namespace android::nn::telemetry
