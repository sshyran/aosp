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

#define LOG_TAG "SampleDriverMinimal"

#include <android-base/logging.h>

#include <thread>
#include <vector>

#include "HalInterfaces.h"
#include "NeuralNetworksOEM.h"
#include "SampleDriverMinimal.h"
#include "Utils.h"
#include "ValidateHal.h"
#include <brillo/brillo_export.h>

extern "C" BRILLO_EXPORT void* get_driver() {
    auto driver = new android::nn::sample_driver::SampleDriverMinimal();

    return static_cast<void*>(driver);
}

namespace android {
namespace nn {
namespace sample_driver {

using namespace hal;

Return<void> SampleDriverMinimal::getCapabilities_1_3(getCapabilities_1_3_cb cb) {
    android::nn::initVLogMask();
    VLOG(DRIVER) << "getCapabilities()";

    Capabilities capabilities = {
            .relaxedFloat32toFloat16PerformanceScalar = {.execTime = 0.8f, .powerUsage = 0.8f},
            .relaxedFloat32toFloat16PerformanceTensor = {.execTime = 0.8f, .powerUsage = 0.8f},
            .operandPerformance = nonExtensionOperandPerformance<HalVersion::V1_3>({0.8f, 0.8f}),
            .ifPerformance = {.execTime = 0.8f, .powerUsage = 0.8f},
            .whilePerformance = {.execTime = 0.8f, .powerUsage = 0.8f}};
    update(&capabilities.operandPerformance, OperandType::TENSOR_FLOAT32,
           {.execTime = 0.8f, .powerUsage = 0.8f});
    update(&capabilities.operandPerformance, OperandType::FLOAT32,
           {.execTime = 0.8f, .powerUsage = 0.8f});

    cb(ErrorStatus::NONE, capabilities);
    return Void();
}

std::vector<bool> SampleDriverMinimal::getSupportedOperationsImpl(const V1_3::Model& model) const {
    VLOG(DRIVER) << "getSupportedOperationsImpl()";
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

}  // namespace sample_driver
}  // namespace nn
}  // namespace android
