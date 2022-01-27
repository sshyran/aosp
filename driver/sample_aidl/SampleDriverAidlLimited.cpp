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

#define LOG_TAG "SampleDriverAidlLimited"

#include <android-base/logging.h>
#include <android/binder_auto_utils.h>
#include <hidl/LegacySupport.h>
#include <nnapi/hal/aidl/Conversions.h>
#include <nnapi/hal/aidl/HalUtils.h>

#include <memory>
#include <thread>
#include <vector>

#include "SampleDriverAidlPartial.h"
#include "SampleDriverAidlUtils.h"

namespace android {
namespace nn {
namespace sample_driver_aidl {

class SampleDriverFloatFast : public SampleDriverPartial {
   public:
    explicit SampleDriverFloatFast(const std::string& name) : SampleDriverPartial(name.c_str()) {}
    ndk::ScopedAStatus getCapabilities(aidl_hal::Capabilities* capabilities) override;

   private:
    std::vector<bool> getSupportedOperationsImpl(const Model& model) const override;
};

ndk::ScopedAStatus SampleDriverFloatFast::getCapabilities(aidl_hal::Capabilities* capabilities) {
    android::nn::initVLogMask();
    VLOG(DRIVER) << "getCapabilities()";

    *capabilities = {
            .relaxedFloat32toFloat16PerformanceScalar = {.execTime = 0.7f, .powerUsage = 1.1f},
            .relaxedFloat32toFloat16PerformanceTensor = {.execTime = 0.7f, .powerUsage = 1.1f},
            .operandPerformance = nonExtensionOperandPerformance({1.0f, 1.0f}),
            .ifPerformance = {.execTime = 1.0f, .powerUsage = 1.0f},
            .whilePerformance = {.execTime = 1.0f, .powerUsage = 1.0f}};
    update(&capabilities->operandPerformance, aidl_hal::OperandType::TENSOR_FLOAT32,
           {.execTime = 0.8f, .powerUsage = 1.2f});
    update(&capabilities->operandPerformance, aidl_hal::OperandType::FLOAT32,
           {.execTime = 0.8f, .powerUsage = 1.2f});

    return ndk::ScopedAStatus::ok();
}

std::vector<bool> SampleDriverFloatFast::getSupportedOperationsImpl(const Model& model) const {
    const size_t count = model.main.operations.size();
    std::vector<bool> supported(count);
    for (size_t i = 0; i < count; i++) {
        const Operation& operation = model.main.operations[i];
        if (!isExtensionOperationType(operation.type) && operation.inputs.size() > 0) {
            const Operand& firstOperand = model.main.operands[operation.inputs[0]];
            supported[i] = firstOperand.type == OperandType::TENSOR_FLOAT32;
        }
    }
    return supported;
}

class SampleDriverFloatSlow : public SampleDriverPartial {
   public:
    explicit SampleDriverFloatSlow(const std::string& name) : SampleDriverPartial(name.c_str()) {}
    ndk::ScopedAStatus getCapabilities(aidl_hal::Capabilities* capabilities) override;

   private:
    std::vector<bool> getSupportedOperationsImpl(const Model& model) const override;
};

ndk::ScopedAStatus SampleDriverFloatSlow::getCapabilities(aidl_hal::Capabilities* capabilities) {
    android::nn::initVLogMask();
    VLOG(DRIVER) << "getCapabilities()";

    *capabilities = {
            .relaxedFloat32toFloat16PerformanceScalar = {.execTime = 1.2f, .powerUsage = 0.6f},
            .relaxedFloat32toFloat16PerformanceTensor = {.execTime = 1.2f, .powerUsage = 0.6f},
            .operandPerformance = nonExtensionOperandPerformance({1.0f, 1.0f}),
            .ifPerformance = {.execTime = 1.0f, .powerUsage = 1.0f},
            .whilePerformance = {.execTime = 1.0f, .powerUsage = 1.0f}};
    update(&capabilities->operandPerformance, aidl_hal::OperandType::TENSOR_FLOAT32,
           {.execTime = 1.3f, .powerUsage = 0.7f});
    update(&capabilities->operandPerformance, aidl_hal::OperandType::FLOAT32,
           {.execTime = 1.3f, .powerUsage = 0.7f});

    return ndk::ScopedAStatus::ok();
}

std::vector<bool> SampleDriverFloatSlow::getSupportedOperationsImpl(const Model& model) const {
    const size_t count = model.main.operations.size();
    std::vector<bool> supported(count);
    for (size_t i = 0; i < count; i++) {
        const Operation& operation = model.main.operations[i];
        if (!isExtensionOperationType(operation.type) && operation.inputs.size() > 0) {
            const Operand& firstOperand = model.main.operands[operation.inputs[0]];
            supported[i] = firstOperand.type == OperandType::TENSOR_FLOAT32;
        }
    }
    return supported;
}

class SampleDriverMinimal : public SampleDriverPartial {
   public:
    explicit SampleDriverMinimal(const std::string& name) : SampleDriverPartial(name.c_str()) {}
    ndk::ScopedAStatus getCapabilities(aidl_hal::Capabilities* capabilities) override;

   private:
    std::vector<bool> getSupportedOperationsImpl(const Model& model) const override;
};

ndk::ScopedAStatus SampleDriverMinimal::getCapabilities(aidl_hal::Capabilities* capabilities) {
    android::nn::initVLogMask();
    VLOG(DRIVER) << "getCapabilities()";

    *capabilities = {
            .relaxedFloat32toFloat16PerformanceScalar = {.execTime = 0.4f, .powerUsage = 0.5f},
            .relaxedFloat32toFloat16PerformanceTensor = {.execTime = 0.4f, .powerUsage = 0.5f},
            .operandPerformance = nonExtensionOperandPerformance({1.0f, 1.0f}),
            .ifPerformance = {.execTime = 1.0f, .powerUsage = 1.0f},
            .whilePerformance = {.execTime = 1.0f, .powerUsage = 1.0f}};
    update(&capabilities->operandPerformance, aidl_hal::OperandType::TENSOR_FLOAT32,
           {.execTime = 0.4f, .powerUsage = 0.5f});
    update(&capabilities->operandPerformance, aidl_hal::OperandType::FLOAT32,
           {.execTime = 0.4f, .powerUsage = 0.5f});

    return ndk::ScopedAStatus::ok();
}

std::vector<bool> SampleDriverMinimal::getSupportedOperationsImpl(const Model& model) const {
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

class SampleDriverQuant : public SampleDriverPartial {
   public:
    explicit SampleDriverQuant(const std::string& name) : SampleDriverPartial(name.c_str()) {}
    ndk::ScopedAStatus getCapabilities(aidl_hal::Capabilities* capabilities) override;

   private:
    std::vector<bool> getSupportedOperationsImpl(const Model& model) const override;
};

ndk::ScopedAStatus SampleDriverQuant::getCapabilities(aidl_hal::Capabilities* capabilities) {
    android::nn::initVLogMask();
    VLOG(DRIVER) << "getCapabilities()";

    *capabilities = {
            .relaxedFloat32toFloat16PerformanceScalar = {.execTime = 50.0f, .powerUsage = 1.0f},
            .relaxedFloat32toFloat16PerformanceTensor = {.execTime = 50.0f, .powerUsage = 1.0f},
            .operandPerformance = nonExtensionOperandPerformance({50.0f, 1.0f}),
            .ifPerformance = {.execTime = 50.0f, .powerUsage = 1.0f},
            .whilePerformance = {.execTime = 50.0f, .powerUsage = 1.0f}};

    return ndk::ScopedAStatus::ok();
}

static bool isQuantized(OperandType opType) {
    return opType == OperandType::TENSOR_QUANT8_ASYMM ||
           opType == OperandType::TENSOR_QUANT8_ASYMM_SIGNED;
}

std::vector<bool> SampleDriverQuant::getSupportedOperationsImpl(const Model& model) const {
    const size_t count = model.main.operations.size();
    std::vector<bool> supported(count);
    for (size_t i = 0; i < count; i++) {
        const Operation& operation = model.main.operations[i];
        if (!isExtensionOperationType(operation.type) && operation.inputs.size() > 0) {
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

}  // namespace sample_driver_aidl
}  // namespace nn
}  // namespace android

using android::nn::sample_driver_aidl::runAll;
using android::nn::sample_driver_aidl::SampleDriverFloatFast;
using android::nn::sample_driver_aidl::SampleDriverFloatSlow;
using android::nn::sample_driver_aidl::SampleDriverMinimal;
using android::nn::sample_driver_aidl::SampleDriverQuant;

int main() {
    const std::string nameFloatFast = "nnapi-sample_float_fast";
    const auto driverFloatFast = ndk::SharedRefBase::make<SampleDriverFloatFast>(nameFloatFast);

    const std::string nameFloatSlow = "nnapi-sample_float_slow";
    const auto driverFloatSlow = ndk::SharedRefBase::make<SampleDriverFloatSlow>(nameFloatSlow);

    const std::string nameMinimal = "nnapi-sample_minimal";
    const auto driverMinimal = ndk::SharedRefBase::make<SampleDriverMinimal>(nameMinimal);

    const std::string nameQuant = "nnapi-sample_quant";
    const auto driverQuant = ndk::SharedRefBase::make<SampleDriverQuant>(nameQuant);

    return runAll({{driverFloatFast, nameFloatFast},
                   {driverFloatSlow, nameFloatSlow},
                   {driverMinimal, nameMinimal},
                   {driverQuant, nameQuant}});
}
