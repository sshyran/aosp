/*
 * Copyright (C) 2018 The Android Open Source Project
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

#include "HalInterfaces.h"
#include "Manager.h"
#include "NeuralNetworks.h"
#include "NeuralNetworksOEM.h"
#include "SampleDriver.h"
#include "TestNeuralNetworksWrapper.h"
#include "Utils.h"
#include "ValidateHal.h"

#include <gtest/gtest.h>

#include <map>
#include <queue>

namespace {

using Device = ::android::nn::Device;
using DeviceManager = ::android::nn::DeviceManager;
using ExecutePreference = ::android::nn::test_wrapper::ExecutePreference;
using HidlModel = ::android::hardware::neuralnetworks::V1_2::Model;
using Result = ::android::nn::test_wrapper::Result;
using SampleDriver = ::android::nn::sample_driver::SampleDriver;
using WrapperModel = ::android::nn::test_wrapper::Model;
using WrapperOperandType = ::android::nn::test_wrapper::OperandType;
using WrapperType = ::android::nn::test_wrapper::Type;

template <typename T>
using sp = ::android::sp<T>;

// This is an IDevice for testing purposes. The test driver has customized
// getCapabilities_1_1 and getSupportedOperations_1_2.
class TestDriver : public SampleDriver {
   public:
    TestDriver(const char* name, Capabilities capabilities, const std::vector<bool>& supportedOps)
        : SampleDriver(name), mCapabilities(capabilities), mSupportedOps(supportedOps) {}
    ~TestDriver() override {}

    Return<void> getCapabilities_1_1(getCapabilities_1_1_cb cb) override {
        cb(ErrorStatus::NONE, mCapabilities);
        return Void();
    }

    Return<void> getSupportedOperations_1_2(const Model& model,
                                            getSupportedOperations_cb cb) override {
        if (!android::nn::validateModel(model)) {
            cb(ErrorStatus::INVALID_ARGUMENT, std::vector<bool>());
            return Void();
        }
        const size_t count = model.operations.size();
        std::vector<bool> supported(count);
        std::transform(
                model.operations.begin(), model.operations.end(), supported.begin(),
                [this](Operation op) { return mSupportedOps[static_cast<int32_t>(op.type)]; });
        cb(ErrorStatus::NONE, supported);
        return Void();
    }

   private:
    Capabilities mCapabilities;
    std::vector<bool> mSupportedOps;
};

class IntrospectionControlTest : public ::testing::Test {
   protected:
    virtual void SetUp() {}
    virtual void TearDown() {
        if (mEvent) {
            ANeuralNetworksEvent_free(mEvent);
        }
        if (mExecution) {
            ANeuralNetworksExecution_free(mExecution);
        }
        if (mCompilation) {
            ANeuralNetworksCompilation_free(mCompilation);
        }
        DeviceManager::get()->forTest_reInitializeDeviceList();
    }

    struct DeviceSpecification {
        DeviceSpecification(const std::string& name, Capabilities capabilities,
                            std::vector<bool>& supportedOps)
            : mName(name), mCapabilities(capabilities), mSupportedOps(supportedOps) {}
        std::string mName;
        Capabilities mCapabilities;
        std::vector<bool> mSupportedOps;
    };

    // From a vector of DeviceSpecification, register new Devices.
    void registerDevices(std::vector<DeviceSpecification> specifications) {
        for (const auto& specification : specifications) {
            DeviceManager::get()->forTest_registerDevice(
                    specification.mName.c_str(),
                    new TestDriver(specification.mName.c_str(), specification.mCapabilities,
                                   specification.mSupportedOps));
        }
    }

    bool selectDeviceByName(const std::string& name) {
        uint32_t numDevices = 0;
        EXPECT_EQ(ANeuralNetworks_getDeviceCount(&numDevices), ANEURALNETWORKS_NO_ERROR);
        EXPECT_GE(numDevices, (uint32_t)1);

        for (uint32_t i = 0; i < numDevices; i++) {
            ANeuralNetworksDevice* device = nullptr;
            EXPECT_EQ(ANeuralNetworks_getDevice(i, &device), ANEURALNETWORKS_NO_ERROR);
            const char* buffer = nullptr;
            int result = ANeuralNetworksDevice_getName(device, &buffer);
            if (result == ANEURALNETWORKS_NO_ERROR && name.compare(buffer) == 0) {
                mDevices.push_back(device);
                return true;
            }
        }
        return false;
    }

    bool isSupportedOpListExpected(const std::vector<bool>& expected) {
        const uint32_t kMaxNumberOperations = 256;
        EXPECT_LE(expected.size(), kMaxNumberOperations);
        ANeuralNetworksModel* modelHandle = mModel.getHandle();
        bool supported[kMaxNumberOperations] = {false};
        EXPECT_EQ(ANeuralNetworksModel_getSupportedOperationsForDevices(
                          modelHandle, mDevices.data(), mDevices.size(), supported),
                  ANEURALNETWORKS_NO_ERROR);
        return std::equal(expected.begin(), expected.end(), supported);
    }

    int prepareForExecution() {
        ANeuralNetworksModel* modelHandle = mModel.getHandle();
        int result = ANeuralNetworksCompilation_createForDevices(modelHandle, mDevices.data(),
                                                                 mDevices.size(), &mCompilation);
        if (result != ANEURALNETWORKS_NO_ERROR) {
            return result;
        }
        EXPECT_EQ(ANeuralNetworksCompilation_finish(mCompilation), ANEURALNETWORKS_NO_ERROR);
        EXPECT_EQ(ANeuralNetworksExecution_create(mCompilation, &mExecution),
                  ANEURALNETWORKS_NO_ERROR);
        return ANEURALNETWORKS_NO_ERROR;
    }

    std::vector<ANeuralNetworksDevice*> mDevices;
    ANeuralNetworksEvent* mEvent = nullptr;
    ANeuralNetworksExecution* mExecution = nullptr;
    ANeuralNetworksCompilation* mCompilation = nullptr;
    WrapperModel mModel;
};

void createSimpleAddModel(WrapperModel* model) {
    WrapperOperandType type0(WrapperType::TENSOR_FLOAT32, {2});
    WrapperOperandType type1(WrapperType::INT32, {});
    // Phase 1, operands
    auto op1 = model->addOperand(&type0);
    auto op2 = model->addOperand(&type0);
    auto act = model->addOperand(&type1);
    auto op3 = model->addOperand(&type0);
    // Phase 2, operations
    static int32_t act_init[] = {0};
    model->setOperandValue(act, act_init, sizeof(act_init));
    model->addOperation(ANEURALNETWORKS_ADD, {op1, op2, act}, {op3});
    // Phase 3, inputs and outputs
    model->identifyInputsAndOutputs({op1, op2}, {op3});
    model->finish();
    ASSERT_TRUE(model->isValid());
}

// TODO(b/117983761): update the test to make sure the model is actually running on the test device.
// This test verifies that a simple ADD model is able to run on a single device that claims being
// able to handle all operations.
TEST_F(IntrospectionControlTest, SimpleAddModel) {
    // This is needed before we have the CPU fallback path being treated as a Device.
    // TODO(miaowang): remove once b/72506261 is fixed.
    if (DeviceManager::get()->getUseCpuOnly()) {
        return;
    }

    createSimpleAddModel(&mModel);

    std::string driverName = "test-all";
    std::vector<bool> ops(android::nn::kNumberOfOperationTypes, true);
    registerDevices({{
            driverName,
            {.float32Performance = {.execTime = 0.9, .powerUsage = 0.9},
             .quantized8Performance = {.execTime = 0.9, .powerUsage = 0.9},
             .relaxedFloat32toFloat16Performance = {.execTime = 0.9, .powerUsage = 0.9}},
            ops,
    }});

    EXPECT_TRUE(selectDeviceByName(driverName));
    EXPECT_TRUE(isSupportedOpListExpected({true}));
    EXPECT_EQ(prepareForExecution(), ANEURALNETWORKS_NO_ERROR);

    float input1[2] = {1.0f, 2.0f};
    float input2[2] = {3.0f, 4.0f};
    float output[2];
    EXPECT_EQ(ANeuralNetworksExecution_setInput(mExecution, 0, nullptr, input1, sizeof(input1)),
              ANEURALNETWORKS_NO_ERROR);
    EXPECT_EQ(ANeuralNetworksExecution_setInput(mExecution, 1, nullptr, input2, sizeof(input2)),
              ANEURALNETWORKS_NO_ERROR);
    EXPECT_EQ(ANeuralNetworksExecution_setOutput(mExecution, 0, nullptr, output, sizeof(output)),
              ANEURALNETWORKS_NO_ERROR);

    EXPECT_EQ(ANeuralNetworksExecution_startCompute(mExecution, &mEvent), ANEURALNETWORKS_NO_ERROR);
    EXPECT_EQ(ANeuralNetworksEvent_wait(mEvent), ANEURALNETWORKS_NO_ERROR);
    EXPECT_EQ(output[0], input1[0] + input2[0]);
    EXPECT_EQ(output[1], input1[1] + input2[1]);
}

const float kSimpleMultiplier = 2.0f;

void createAddMulModel(WrapperModel* model, bool reverseOrder) {
    WrapperOperandType type0(WrapperType::TENSOR_FLOAT32, {2});
    WrapperOperandType type1(WrapperType::INT32, {});
    // Phase 1, operands
    auto op1 = model->addOperand(&type0);
    auto op2 = model->addOperand(&type0);
    auto act = model->addOperand(&type1);
    auto op3 = model->addOperand(&type0);
    auto op4 = model->addOperand(&type0);
    auto op5 = model->addOperand(&type0);
    // Phase 2, operations
    static int32_t act_init[] = {0};
    model->setOperandValue(act, act_init, sizeof(act_init));
    static float multiplier[] = {kSimpleMultiplier, kSimpleMultiplier};
    model->setOperandValue(op4, multiplier, sizeof(multiplier));
    if (reverseOrder) {
        // In this case, add MUL first, but the execution order is still ADD -> MUL.
        model->addOperation(ANEURALNETWORKS_MUL, {op3, op4, act}, {op5});
        model->addOperation(ANEURALNETWORKS_ADD, {op1, op2, act}, {op3});
    } else {
        model->addOperation(ANEURALNETWORKS_ADD, {op1, op2, act}, {op3});
        model->addOperation(ANEURALNETWORKS_MUL, {op3, op4, act}, {op5});
    }
    // Phase 3, inputs and outputs
    model->identifyInputsAndOutputs({op1, op2}, {op5});
    model->finish();
    ASSERT_TRUE(model->isValid());
}

// This test verifies that a device that could only handle ADD would correctly report that an
// ADD->MUL model could not be fully supported.
TEST_F(IntrospectionControlTest, PartialModelNotSupported) {
    // This is needed before we have the CPU fallback path being treated as a Device.
    // TODO(miaowang): remove once b/72506261 is fixed.
    if (DeviceManager::get()->getUseCpuOnly()) {
        return;
    }

    createAddMulModel(&mModel, false);

    Capabilities capabilities = {
            .float32Performance = {.execTime = 0.9, .powerUsage = 0.9},
            .quantized8Performance = {.execTime = 0.9, .powerUsage = 0.9},
            .relaxedFloat32toFloat16Performance = {.execTime = 0.9, .powerUsage = 0.9}};
    std::string addOnlyDriver = "test-onlyAdd";
    std::vector<bool> addOnlyOp(android::nn::kNumberOfOperationTypes, false);
    addOnlyOp[ANEURALNETWORKS_ADD] = true;

    registerDevices({{addOnlyDriver, capabilities, addOnlyOp}});

    EXPECT_TRUE(selectDeviceByName(addOnlyDriver));
    EXPECT_TRUE(isSupportedOpListExpected({true, false}));
}

// This test verifies that a device that could only handle ADD would correctly report that an
// ADD->MUL model could not be fully supported. Also verifies that the indices of returned
// supported op list correctly map to the order of operations being added by the user.
TEST_F(IntrospectionControlTest, PartialModelNotSupportedOrder) {
    // This is needed before we have the CPU fallback path being treated as a Device.
    // TODO(miaowang): remove once b/72506261 is fixed.
    if (DeviceManager::get()->getUseCpuOnly()) {
        return;
    }

    createAddMulModel(&mModel, true);

    Capabilities capabilities = {
            .float32Performance = {.execTime = 0.9, .powerUsage = 0.9},
            .quantized8Performance = {.execTime = 0.9, .powerUsage = 0.9},
            .relaxedFloat32toFloat16Performance = {.execTime = 0.9, .powerUsage = 0.9}};
    std::string addOnlyDriver = "test-onlyAdd";
    std::vector<bool> addOnlyOp(android::nn::kNumberOfOperationTypes, false);
    addOnlyOp[ANEURALNETWORKS_ADD] = true;

    registerDevices({{addOnlyDriver, capabilities, addOnlyOp}});

    EXPECT_TRUE(selectDeviceByName(addOnlyDriver));
    EXPECT_TRUE(isSupportedOpListExpected({false, true}));
}

// TODO(miaowang): update the test to make sure the model is actually running on the test devices.
// This test verifies that an ADD->MUL model is able to run on two selected devices that together
// can handle all operations.
TEST_F(IntrospectionControlTest, ModelNeedTwoDevices) {
    // This is needed before we have the CPU fallback path being treated as a Device.
    // TODO(miaowang): remove once b/72506261 is fixed.
    if (DeviceManager::get()->getUseCpuOnly()) {
        return;
    }

    createAddMulModel(&mModel, false);

    Capabilities capabilities = {
            .float32Performance = {.execTime = 0.9, .powerUsage = 0.9},
            .quantized8Performance = {.execTime = 0.9, .powerUsage = 0.9},
            .relaxedFloat32toFloat16Performance = {.execTime = 0.9, .powerUsage = 0.9}};
    std::string addOnlyDriver = "test-onlyAdd";
    std::vector<bool> addOnlyOp(android::nn::kNumberOfOperationTypes, false);
    addOnlyOp[ANEURALNETWORKS_ADD] = true;

    std::string mulOnlyDriver = "test-onlyMul";
    std::vector<bool> mulOnlyOp(android::nn::kNumberOfOperationTypes, false);
    mulOnlyOp[ANEURALNETWORKS_MUL] = true;

    registerDevices({
            {addOnlyDriver, capabilities, addOnlyOp},
            {mulOnlyDriver, capabilities, mulOnlyOp},
    });

    EXPECT_TRUE(selectDeviceByName(addOnlyDriver));
    EXPECT_TRUE(selectDeviceByName(mulOnlyDriver));
    EXPECT_TRUE(isSupportedOpListExpected({true, true}));
    EXPECT_EQ(prepareForExecution(), ANEURALNETWORKS_NO_ERROR);

    float input1[2] = {1.0f, 2.0f};
    float input2[2] = {3.0f, 4.0f};
    float output[2];
    EXPECT_EQ(ANeuralNetworksExecution_setInput(mExecution, 0, nullptr, input1, sizeof(input1)),
              ANEURALNETWORKS_NO_ERROR);
    EXPECT_EQ(ANeuralNetworksExecution_setInput(mExecution, 1, nullptr, input2, sizeof(input2)),
              ANEURALNETWORKS_NO_ERROR);
    EXPECT_EQ(ANeuralNetworksExecution_setOutput(mExecution, 0, nullptr, output, sizeof(output)),
              ANEURALNETWORKS_NO_ERROR);

    EXPECT_EQ(ANeuralNetworksExecution_startCompute(mExecution, &mEvent), ANEURALNETWORKS_NO_ERROR);
    EXPECT_EQ(ANeuralNetworksEvent_wait(mEvent), ANEURALNETWORKS_NO_ERROR);
    EXPECT_EQ(output[0], kSimpleMultiplier * (input1[0] + input2[0]));
    EXPECT_EQ(output[1], kSimpleMultiplier * (input1[1] + input2[1]));
}

}  // namespace
