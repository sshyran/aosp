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

#include <HalInterfaces.h>
#include <Utils.h>
#include <android-base/logging.h>
#include <hidl/LegacySupport.h>

#include <string>
#include <thread>
#include <vector>

#include "SampleDriverPartial.h"
#include "SampleDriverUtils.h"

namespace android {
namespace nn {
namespace sample_driver {

class SampleDriverFloatFast : public SampleDriverPartial {
   public:
    explicit SampleDriverFloatFast(const std::string& name) : SampleDriverPartial(name.c_str()) {}
    hardware::Return<void> getCapabilities_1_3(getCapabilities_1_3_cb cb) override;

   private:
    std::vector<bool> getSupportedOperationsImpl(const V1_3::Model& model) const override;
};

hardware::Return<void> SampleDriverFloatFast::getCapabilities_1_3(getCapabilities_1_3_cb cb) {
    android::nn::initVLogMask();
    VLOG(DRIVER) << "getCapabilities()";

    V1_3::Capabilities capabilities = {
            .relaxedFloat32toFloat16PerformanceScalar = {.execTime = 0.7f, .powerUsage = 1.1f},
            .relaxedFloat32toFloat16PerformanceTensor = {.execTime = 0.7f, .powerUsage = 1.1f},
            .operandPerformance = nonExtensionOperandPerformance<HalVersion::V1_3>({1.0f, 1.0f}),
            .ifPerformance = {.execTime = 1.0f, .powerUsage = 1.0f},
            .whilePerformance = {.execTime = 1.0f, .powerUsage = 1.0f}};
    update(&capabilities.operandPerformance, V1_3::OperandType::TENSOR_FLOAT32,
           {.execTime = 0.8f, .powerUsage = 1.2f});
    update(&capabilities.operandPerformance, V1_3::OperandType::FLOAT32,
           {.execTime = 0.8f, .powerUsage = 1.2f});

    cb(V1_3::ErrorStatus::NONE, capabilities);
    return hardware::Void();
}

std::vector<bool> SampleDriverFloatFast::getSupportedOperationsImpl(
        const V1_3::Model& model) const {
    const size_t count = model.main.operations.size();
    std::vector<bool> supported(count);
    for (size_t i = 0; i < count; i++) {
        const V1_3::Operation& operation = model.main.operations[i];
        if (!isExtensionOperationType(operation.type) && operation.inputs.size() > 0) {
            const V1_3::Operand& firstOperand = model.main.operands[operation.inputs[0]];
            supported[i] = firstOperand.type == V1_3::OperandType::TENSOR_FLOAT32;
        }
    }
    return supported;
}

class SampleDriverFloatSlow : public SampleDriverPartial {
   public:
    explicit SampleDriverFloatSlow(const std::string& name) : SampleDriverPartial(name.c_str()) {}
    hardware::Return<void> getCapabilities_1_3(getCapabilities_1_3_cb cb) override;

   private:
    std::vector<bool> getSupportedOperationsImpl(const V1_3::Model& model) const override;
};

hardware::Return<void> SampleDriverFloatSlow::getCapabilities_1_3(getCapabilities_1_3_cb cb) {
    android::nn::initVLogMask();
    VLOG(DRIVER) << "getCapabilities()";

    V1_3::Capabilities capabilities = {
            .relaxedFloat32toFloat16PerformanceScalar = {.execTime = 1.2f, .powerUsage = 0.6f},
            .relaxedFloat32toFloat16PerformanceTensor = {.execTime = 1.2f, .powerUsage = 0.6f},
            .operandPerformance = nonExtensionOperandPerformance<HalVersion::V1_3>({1.0f, 1.0f}),
            .ifPerformance = {.execTime = 1.0f, .powerUsage = 1.0f},
            .whilePerformance = {.execTime = 1.0f, .powerUsage = 1.0f}};
    update(&capabilities.operandPerformance, V1_3::OperandType::TENSOR_FLOAT32,
           {.execTime = 1.3f, .powerUsage = 0.7f});
    update(&capabilities.operandPerformance, V1_3::OperandType::FLOAT32,
           {.execTime = 1.3f, .powerUsage = 0.7f});

    cb(V1_3::ErrorStatus::NONE, capabilities);
    return hardware::Void();
}

std::vector<bool> SampleDriverFloatSlow::getSupportedOperationsImpl(
        const V1_3::Model& model) const {
    const size_t count = model.main.operations.size();
    std::vector<bool> supported(count);
    for (size_t i = 0; i < count; i++) {
        const V1_3::Operation& operation = model.main.operations[i];
        if (!isExtensionOperationType(operation.type) && operation.inputs.size() > 0) {
            const V1_3::Operand& firstOperand = model.main.operands[operation.inputs[0]];
            supported[i] = firstOperand.type == V1_3::OperandType::TENSOR_FLOAT32;
        }
    }
    return supported;
}

class SampleDriverMinimal : public SampleDriverPartial {
   public:
    explicit SampleDriverMinimal(const std::string& name) : SampleDriverPartial(name.c_str()) {}
    hardware::Return<void> getCapabilities_1_3(getCapabilities_1_3_cb cb) override;

   private:
    std::vector<bool> getSupportedOperationsImpl(const V1_3::Model& model) const override;
};

hardware::Return<void> SampleDriverMinimal::getCapabilities_1_3(getCapabilities_1_3_cb cb) {
    android::nn::initVLogMask();
    VLOG(DRIVER) << "getCapabilities()";

    V1_3::Capabilities capabilities = {
            .relaxedFloat32toFloat16PerformanceScalar = {.execTime = 0.4f, .powerUsage = 0.5f},
            .relaxedFloat32toFloat16PerformanceTensor = {.execTime = 0.4f, .powerUsage = 0.5f},
            .operandPerformance = nonExtensionOperandPerformance<HalVersion::V1_3>({1.0f, 1.0f}),
            .ifPerformance = {.execTime = 1.0f, .powerUsage = 1.0f},
            .whilePerformance = {.execTime = 1.0f, .powerUsage = 1.0f}};
    update(&capabilities.operandPerformance, V1_3::OperandType::TENSOR_FLOAT32,
           {.execTime = 0.4f, .powerUsage = 0.5f});
    update(&capabilities.operandPerformance, V1_3::OperandType::FLOAT32,
           {.execTime = 0.4f, .powerUsage = 0.5f});

    cb(V1_3::ErrorStatus::NONE, capabilities);
    return hardware::Void();
}

std::vector<bool> SampleDriverMinimal::getSupportedOperationsImpl(const V1_3::Model& model) const {
    const size_t count = model.main.operations.size();
    std::vector<bool> supported(count);
    // Simulate supporting just a few ops
    for (size_t i = 0; i < count; i++) {
        supported[i] = false;
        const V1_3::Operation& operation = model.main.operations[i];
        switch (operation.type) {
            case V1_3::OperationType::ADD:
            case V1_3::OperationType::CONCATENATION:
            case V1_3::OperationType::CONV_2D: {
                const V1_3::Operand& firstOperand = model.main.operands[operation.inputs[0]];
                if (firstOperand.type == V1_3::OperandType::TENSOR_FLOAT32) {
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

class SampleDriverQuant : public SampleDriverPartial {
   public:
    explicit SampleDriverQuant(const std::string& name) : SampleDriverPartial(name.c_str()) {}
    hardware::Return<void> getCapabilities_1_3(getCapabilities_1_3_cb cb) override;

   private:
    std::vector<bool> getSupportedOperationsImpl(const V1_3::Model& model) const override;
};

hardware::Return<void> SampleDriverQuant::getCapabilities_1_3(getCapabilities_1_3_cb cb) {
    android::nn::initVLogMask();
    VLOG(DRIVER) << "getCapabilities()";

    V1_3::Capabilities capabilities = {
            .relaxedFloat32toFloat16PerformanceScalar = {.execTime = 50.0f, .powerUsage = 1.0f},
            .relaxedFloat32toFloat16PerformanceTensor = {.execTime = 50.0f, .powerUsage = 1.0f},
            .operandPerformance = nonExtensionOperandPerformance<HalVersion::V1_3>({50.0f, 1.0f}),
            .ifPerformance = {.execTime = 50.0f, .powerUsage = 1.0f},
            .whilePerformance = {.execTime = 50.0f, .powerUsage = 1.0f}};

    cb(V1_3::ErrorStatus::NONE, capabilities);
    return hardware::Void();
}

static bool isQuantized(V1_3::OperandType opType) {
    return opType == V1_3::OperandType::TENSOR_QUANT8_ASYMM ||
           opType == V1_3::OperandType::TENSOR_QUANT8_ASYMM_SIGNED;
}

std::vector<bool> SampleDriverQuant::getSupportedOperationsImpl(const V1_3::Model& model) const {
    const size_t count = model.main.operations.size();
    std::vector<bool> supported(count);
    for (size_t i = 0; i < count; i++) {
        const V1_3::Operation& operation = model.main.operations[i];
        if (!isExtensionOperationType(operation.type) && operation.inputs.size() > 0) {
            const V1_3::Operand& firstOperand = model.main.operands[operation.inputs[0]];
            supported[i] = isQuantized(firstOperand.type);
            if (operation.type == V1_3::OperationType::SELECT) {
                const V1_3::Operand& secondOperand = model.main.operands[operation.inputs[1]];
                supported[i] = isQuantized(secondOperand.type);
            }
        }
    }
    return supported;
}

}  // namespace sample_driver
}  // namespace nn
}  // namespace android

using android::sp;
using android::hardware::neuralnetworks::V1_0::PerformanceInfo;
using android::nn::sample_driver::runAll;
using android::nn::sample_driver::SampleDriverFloatFast;
using android::nn::sample_driver::SampleDriverFloatSlow;
using android::nn::sample_driver::SampleDriverMinimal;
using android::nn::sample_driver::SampleDriverQuant;

int main() {
    const std::string nameFloatFast = "nnapi-sample_float_fast";
    const auto driverFloatFast = sp<SampleDriverFloatFast>::make(nameFloatFast);

    const std::string nameFloatSlow = "nnapi-sample_float_slow";
    const auto driverFloatSlow = sp<SampleDriverFloatSlow>::make(nameFloatSlow);

    const std::string nameMinimal = "nnapi-sample_minimal";
    const auto driverMinimal = sp<SampleDriverMinimal>::make(nameMinimal);

    const std::string nameQuant = "nnapi-sample_quant";
    const auto driverQuant = sp<SampleDriverQuant>::make(nameQuant);

    return runAll({{driverFloatFast, nameFloatFast},
                   {driverFloatSlow, nameFloatSlow},
                   {driverMinimal, nameMinimal},
                   {driverQuant, nameQuant}});
}
