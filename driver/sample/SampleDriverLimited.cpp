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

#define LOG_TAG "SampleDriverLimited"

#include <android-base/logging.h>
#include <android/hardware/neuralnetworks/1.3/IDevice.h>
#include <hidl/HidlTransportSupport.h>
#include <nnapi/Types.h>
#include <nnapi/hal/Adapter.h>

#include <algorithm>
#include <memory>
#include <string>
#include <utility>
#include <vector>

#include "CanonicalDevice.h"
#include "LimitedSupportDevice.h"

namespace android::nn::sample {
namespace {

std::vector<Capabilities::OperandPerformance> makeOperandPerformance(
        const Capabilities::PerformanceInfo& perfInfo) {
    static constexpr OperandType kOperandTypes[] = {
            OperandType::FLOAT32,
            OperandType::INT32,
            OperandType::UINT32,
            OperandType::TENSOR_FLOAT32,
            OperandType::TENSOR_INT32,
            OperandType::TENSOR_QUANT8_ASYMM,
            OperandType::BOOL,
            OperandType::TENSOR_QUANT16_SYMM,
            OperandType::TENSOR_FLOAT16,
            OperandType::TENSOR_BOOL8,
            OperandType::FLOAT16,
            OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL,
            OperandType::TENSOR_QUANT16_ASYMM,
            OperandType::TENSOR_QUANT8_SYMM,
            OperandType::TENSOR_QUANT8_ASYMM_SIGNED,
            // OperandType::SUBGRAPH, OperandType::OEM, and OperandType::TENSOR_OEM_BYTE
            // intentionally omitted.
    };

    std::vector<Capabilities::OperandPerformance> operandPerformance;
    operandPerformance.reserve(std::size(kOperandTypes));
    std::transform(std::begin(kOperandTypes), std::end(kOperandTypes),
                   std::back_inserter(operandPerformance), [&perfInfo](OperandType op) {
                       return Capabilities::OperandPerformance{.type = op, .info = perfInfo};
                   });
    return operandPerformance;
}

void update(std::vector<Capabilities::OperandPerformance>* operandPerformance, OperandType type,
            const Capabilities::PerformanceInfo& info) {
    CHECK(operandPerformance != nullptr);
    auto it = std::lower_bound(operandPerformance->begin(), operandPerformance->end(), type,
                               [](const Capabilities::OperandPerformance& perf, OperandType type) {
                                   return perf.type < type;
                               });
    CHECK(it != operandPerformance->end());
    CHECK_EQ(it->type, type);
    it->info = info;
}

Capabilities makeCapabilities(const Capabilities::PerformanceInfo& defaultInfo,
                              const Capabilities::PerformanceInfo& float32Info,
                              const Capabilities::PerformanceInfo& relaxedInfo) {
    auto operandPerformance = makeOperandPerformance(defaultInfo);
    update(&operandPerformance, OperandType::TENSOR_FLOAT32, float32Info);
    update(&operandPerformance, OperandType::FLOAT32, float32Info);
    auto table =
            Capabilities::OperandPerformanceTable::create(std::move(operandPerformance)).value();

    return {.relaxedFloat32toFloat16PerformanceScalar = relaxedInfo,
            .relaxedFloat32toFloat16PerformanceTensor = relaxedInfo,
            .operandPerformance = std::move(table),
            .ifPerformance = defaultInfo,
            .whilePerformance = defaultInfo};
}

Capabilities makeCapabilitiesFloatFast() {
    const Capabilities::PerformanceInfo defaultInfo = {.execTime = 1.0f, .powerUsage = 1.0f};
    const Capabilities::PerformanceInfo float32Info = {.execTime = 0.8f, .powerUsage = 1.2f};
    const Capabilities::PerformanceInfo relaxedInfo = {.execTime = 0.7f, .powerUsage = 1.1f};
    return makeCapabilities(defaultInfo, float32Info, relaxedInfo);
}

Capabilities makeCapabilitiesFloatSlow() {
    const Capabilities::PerformanceInfo defaultInfo = {.execTime = 1.0f, .powerUsage = 1.0f};
    const Capabilities::PerformanceInfo float32Info = {.execTime = 1.3f, .powerUsage = 0.7f};
    const Capabilities::PerformanceInfo relaxedInfo = {.execTime = 1.2f, .powerUsage = 0.6f};
    return makeCapabilities(defaultInfo, float32Info, relaxedInfo);
}

Capabilities makeCapabilitiesMinimal() {
    const Capabilities::PerformanceInfo defaultInfo = {.execTime = 1.0f, .powerUsage = 1.0f};
    const Capabilities::PerformanceInfo float32Info = {.execTime = 0.4f, .powerUsage = 0.5f};
    const Capabilities::PerformanceInfo relaxedInfo = {.execTime = 0.4f, .powerUsage = 0.5f};
    return makeCapabilities(defaultInfo, float32Info, relaxedInfo);
}

Capabilities makeCapabilitiesQuant() {
    const Capabilities::PerformanceInfo info = {.execTime = 50.0f, .powerUsage = 1.0f};
    return makeCapabilities(info, info, info);
}

GeneralResult<std::vector<bool>> getSupportedOperationsFloat(const Model& model) {
    const size_t count = model.main.operations.size();
    std::vector<bool> supported(count);
    for (size_t i = 0; i < count; i++) {
        const Operation& operation = model.main.operations[i];
        if (!isExtension(operation.type) && !operation.inputs.empty()) {
            const Operand& firstOperand = model.main.operands[operation.inputs[0]];
            supported[i] = firstOperand.type == OperandType::TENSOR_FLOAT32;
        }
    }
    return supported;
}

GeneralResult<std::vector<bool>> getSupportedOperationsMinimal(const Model& model) {
    const size_t count = model.main.operations.size();
    std::vector<bool> supported(count);
    // Simulate supporting just a few ops
    for (size_t i = 0; i < count; i++) {
        supported[i] = false;
        const Operation& operation = model.main.operations[i];
        switch (operation.type) {
            case OperationType::ADD:
            case OperationType::CONCATENATION:
            case OperationType::CONV_2D: {
                const Operand& firstOperand = model.main.operands[operation.inputs[0]];
                if (firstOperand.type == OperandType::TENSOR_FLOAT32) {
                    supported[i] = true;
                }
                break;
            }
            default:
                break;
        }
    }
    return supported;
}

bool isQuantized(OperandType opType) {
    return opType == OperandType::TENSOR_QUANT8_ASYMM ||
           opType == OperandType::TENSOR_QUANT8_ASYMM_SIGNED;
}

GeneralResult<std::vector<bool>> getSupportedOperationsQuant(const Model& model) {
    const size_t count = model.main.operations.size();
    std::vector<bool> supported(count);
    for (size_t i = 0; i < count; i++) {
        const Operation& operation = model.main.operations[i];
        if (!isExtension(operation.type) && !operation.inputs.empty()) {
            const Operand& firstOperand = model.main.operands[operation.inputs[0]];
            supported[i] = isQuantized(firstOperand.type);
            if (operation.type == OperationType::SELECT) {
                const Operand& secondOperand = model.main.operands[operation.inputs[1]];
                supported[i] = isQuantized(secondOperand.type);
            }
        }
    }
    return supported;
}

SharedDevice makeDevice(std::string name, Capabilities capabilities,
                        LimitedSupportDevice::SupportedOperationsFunction getSupportedOperations) {
    auto device = std::make_shared<const Device>(std::move(name));
    auto limitedDevice = std::make_shared<const LimitedSupportDevice>(
            std::move(device), std::move(capabilities), std::move(getSupportedOperations));
    return limitedDevice;
}

std::vector<SharedDevice> getDevices() {
    SharedDevice device;
    std::vector<SharedDevice> devices;
    devices.reserve(4);

    device = makeDevice("nnapi-sample_float_fast", makeCapabilitiesFloatFast(),
                        getSupportedOperationsFloat);
    devices.push_back(std::move(device));

    device = makeDevice("nnapi-sample_float_slow", makeCapabilitiesFloatSlow(),
                        getSupportedOperationsFloat);
    devices.push_back(std::move(device));

    device = makeDevice("nnapi-sample_minimal", makeCapabilitiesMinimal(),
                        getSupportedOperationsMinimal);
    devices.push_back(std::move(device));

    device = makeDevice("nnapi-sample_quant", makeCapabilitiesQuant(), getSupportedOperationsQuant);
    devices.push_back(std::move(device));

    return devices;
}

int main() {
    constexpr size_t kNumberOfThreads = 4;
    hardware::configureRpcThreadpool(kNumberOfThreads, true);

    // Get the canonical interface objects.
    const auto devices = getDevices();

    // Adapt all canonical interface objects to HIDL interface objects.
    std::vector<sp<hardware::neuralnetworks::V1_3::IDevice>> hidlDevices;
    hidlDevices.reserve(devices.size());
    std::transform(
            devices.begin(), devices.end(), std::back_inserter(hidlDevices),
            [](const auto& device) { return hardware::neuralnetworks::adapter::adapt(device); });

    // Register all HIDL interface objects.
    CHECK_EQ(devices.size(), hidlDevices.size());
    for (size_t i = 0; i < hidlDevices.size(); ++i) {
        if (hidlDevices[i]->registerAsService(devices[i]->getName()) != android::OK) {
            LOG(ERROR) << "Could not register service " << devices[i]->getName();
            return 1;
        }
    }

    hardware::joinRpcThreadpool();
    LOG(ERROR) << "Service exited!";
    return 1;
}

}  // namespace
}  // namespace android::nn::sample

int main() {
    return android::nn::sample::main();
}
