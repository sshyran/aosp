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

#include "NeuralNetworksOEM.h"
#include "NeuralNetworksWrapper.h"
#ifndef NNTEST_ONLY_PUBLIC_API
#include "Utils.h"
#endif

#include <gtest/gtest.h>

namespace {

using namespace android::nn::wrapper;

class OperandExtraParamsTest : public ::testing::Test {
   protected:
    virtual void SetUp() {
        ::testing::Test::SetUp();
        ASSERT_EQ(ANeuralNetworksModel_create(&mModel), ANEURALNETWORKS_NO_ERROR);
    }
    virtual void TearDown() {
        ANeuralNetworksModel_free(mModel);
        ::testing::Test::TearDown();
    }

    static const uint32_t CHANNEL_DIM_SIZE = 4;

    ANeuralNetworksOperandType createOperandWithExt(int32_t dataType,
                                                    ANeuralNetworksOperandType::ExtraParams ext) {
        static uint32_t dims[4] = {1, 2, 3, CHANNEL_DIM_SIZE};
        switch (dataType) {
            case ANEURALNETWORKS_FLOAT32:
            case ANEURALNETWORKS_INT32:
            case ANEURALNETWORKS_UINT32:
            case ANEURALNETWORKS_BOOL:
            case ANEURALNETWORKS_OEM_SCALAR:
                return {.type = dataType,
                        .dimensionCount = 0,
                        .dimensions = nullptr,
                        .scale = 0.0f,
                        .zeroPoint = 0,
                        .extraParams = ext};
            case ANEURALNETWORKS_TENSOR_OEM_BYTE:
            case ANEURALNETWORKS_TENSOR_FLOAT32:
            case ANEURALNETWORKS_TENSOR_FLOAT16:
            case ANEURALNETWORKS_TENSOR_INT32:
            case ANEURALNETWORKS_TENSOR_QUANT8_SYMM_PER_CHANNEL:
                return {.type = dataType,
                        .dimensionCount = 4,
                        .dimensions = dims,
                        .scale = 0.0f,
                        .zeroPoint = 0,
                        .extraParams = ext};
            case ANEURALNETWORKS_TENSOR_QUANT8_ASYMM:
                return {.type = dataType,
                        .dimensionCount = 4,
                        .dimensions = dims,
                        .scale = 1.0,
                        .zeroPoint = 128,
                        .extraParams = ext};
            case ANEURALNETWORKS_TENSOR_QUANT16_SYMM:
                return {.type = dataType,
                        .dimensionCount = 4,
                        .dimensions = dims,
                        .scale = 1.0,
                        .zeroPoint = 0,
                        .extraParams = ext};
            default:
                ADD_FAILURE();
                return {};
        }
    }

    ANeuralNetworksOperandType::ExtraParams createExtNone() { return {.none = nullptr}; }

    ANeuralNetworksOperandType::ExtraParams createExtChannelQuant() {
        static float scales[CHANNEL_DIM_SIZE] = {1.0, 2.0, 3.0, 4.0};
        return {.channelQuant = {
                        .scales = scales,
                        .scaleCount = CHANNEL_DIM_SIZE,
                        .channelDim = 3,
                }};
    }

    void testAddingOperand(int32_t dataType, ANeuralNetworksOperandType::ExtraParams ext,
                           bool expectSuccess) {
        ANeuralNetworksOperandType operandType = createOperandWithExt(dataType, ext);
        if (expectSuccess) {
            EXPECT_EQ(ANeuralNetworksModel_addOperand(mModel, &operandType),
                      ANEURALNETWORKS_NO_ERROR);
        } else {
            EXPECT_EQ(ANeuralNetworksModel_addOperand(mModel, &operandType),
                      ANEURALNETWORKS_BAD_DATA);
        }
    }

    ANeuralNetworksModel* mModel = nullptr;
};

const uint32_t kOperandCodeIgnoringExt[]{
        ANEURALNETWORKS_FLOAT32,
        ANEURALNETWORKS_FLOAT16,
        ANEURALNETWORKS_INT32,
        ANEURALNETWORKS_UINT32,
        ANEURALNETWORKS_BOOL,
        ANEURALNETWORKS_OEM_SCALAR,
        ANEURALNETWORKS_TENSOR_OEM_BYTE,
        ANEURALNETWORKS_TENSOR_FLOAT32,
        ANEURALNETWORKS_TENSOR_INT32,
        ANEURALNETWORKS_TENSOR_QUANT8_ASYMM,
        ANEURALNETWORKS_TENSOR_QUANT16_SYMM,
        ANEURALNETWORKS_TENSOR_FLOAT16,
        ANEURALNETWORKS_TENSOR_BOOL8,
};

#ifndef NNTEST_ONLY_PUBLIC_API
// android::nn::k* consts are defined in private headers
static_assert(sizeof(kOperandCodeIgnoringExt) / sizeof(kOperandCodeIgnoringExt[0]) ==
                      android::nn::kNumberOfDataTypes + android::nn::kNumberOfDataTypesOEM - 1,
              "New type added, OperandExtraParamsTest needs an update");
#endif

const uint32_t kOperandCodeChannelQuant[]{
        ANEURALNETWORKS_TENSOR_QUANT8_SYMM_PER_CHANNEL,
};

TEST_F(OperandExtraParamsTest, TestIgnoring) {
    // Test for operands that are expected to ignore extensions
    for (uint32_t dataType : kOperandCodeIgnoringExt) {
        testAddingOperand(dataType, createExtNone(), true);
        testAddingOperand(dataType, createExtChannelQuant(), true);
    }
}

TEST_F(OperandExtraParamsTest, TestChannelQuant) {
    // Test for operands that are expected to see ChannelQuant extension
    for (uint32_t dataType : kOperandCodeChannelQuant) {
        testAddingOperand(dataType, createExtNone(), false);
        testAddingOperand(dataType, createExtChannelQuant(), true);
    }
}

TEST_F(OperandExtraParamsTest, TestChannelQuantValuesBadDim) {
    // Bad .channelDim value
    static float scales[4] = {1.0, 2.0, 3.0, 4.0};
    ANeuralNetworksOperandType::ExtraParams ext{.channelQuant = {
                                                        .channelDim = 7,
                                                        .scales = scales,
                                                        .scaleCount = 4,
                                                }};
    for (uint32_t dataType : kOperandCodeChannelQuant) {
        testAddingOperand(dataType, ext, false);
    }
}

TEST_F(OperandExtraParamsTest, TestChannelQuantValuesBadScalesCount) {
    // Bad .scaleCount value
    static float scales[4] = {1.0, 2.0, 3.0, 4.0};
    ANeuralNetworksOperandType::ExtraParams lowScaleCountExt{.channelQuant = {
                                                                     .channelDim = 3,
                                                                     .scales = scales,
                                                                     .scaleCount = 3,
                                                             }};
    ANeuralNetworksOperandType::ExtraParams highScaleCountExt{.channelQuant = {
                                                                      .channelDim = 3,
                                                                      .scales = scales,
                                                                      .scaleCount = 10,
                                                              }};

    for (uint32_t dataType : kOperandCodeChannelQuant) {
        testAddingOperand(dataType, lowScaleCountExt, false);
        testAddingOperand(dataType, highScaleCountExt, false);
    }
}

TEST_F(OperandExtraParamsTest, TestChannelQuantValuesBadScalesNegative) {
    // Bad .scales value
    static float scales[4] = {1.0, 2.0, -3.0, 4.0};
    ANeuralNetworksOperandType::ExtraParams ext{.channelQuant = {
                                                        .channelDim = 3,
                                                        .scales = scales,
                                                        .scaleCount = 4,
                                                }};
    for (uint32_t dataType : kOperandCodeChannelQuant) {
        testAddingOperand(dataType, ext, false);
    }
}

TEST_F(OperandExtraParamsTest, TestChannelQuantValuesNullScales) {
    // .scales == nullptr value
    ANeuralNetworksOperandType::ExtraParams ext{.channelQuant = {
                                                        .channelDim = 3,
                                                        .scales = nullptr,
                                                        .scaleCount = 4,
                                                }};
    for (uint32_t dataType : kOperandCodeChannelQuant) {
        testAddingOperand(dataType, ext, false);
    }
}

TEST_F(OperandExtraParamsTest, TestChannelQuantValuesOperandScale) {
    ANeuralNetworksOperandType::ExtraParams ext = createExtChannelQuant();

    for (uint32_t dataType : kOperandCodeChannelQuant) {
        ANeuralNetworksOperandType operandType = createOperandWithExt(dataType, ext);
        operandType.scale = 1.0f;
        EXPECT_EQ(ANeuralNetworksModel_addOperand(mModel, &operandType), ANEURALNETWORKS_BAD_DATA);
    }
}

TEST_F(OperandExtraParamsTest, TestChannelQuantValuesOperandZeroPoint) {
    ANeuralNetworksOperandType::ExtraParams ext = createExtChannelQuant();

    for (uint32_t dataType : kOperandCodeChannelQuant) {
        ANeuralNetworksOperandType operandType = createOperandWithExt(dataType, ext);
        operandType.zeroPoint = 1;
        EXPECT_EQ(ANeuralNetworksModel_addOperand(mModel, &operandType), ANEURALNETWORKS_BAD_DATA);
    }
}

}  // namespace
