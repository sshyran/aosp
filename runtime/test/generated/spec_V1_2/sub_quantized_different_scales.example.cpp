// Generated from sub_quantized_different_scales.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"

using namespace test_helper;

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 250, 249, 248, 247, 246, 245, 0, 0, 0, 0, 0, 0, 251, 250, 249, 248, 247, 246, 1, 0, 0, 0, 0, 0, 252, 251, 250, 249, 248, 247, 2, 1, 0, 0, 0, 0, 253, 252, 251, 250, 249, 248, 3, 2, 1, 0, 0, 0, 254, 253, 252, 251, 250, 249, 4, 3, 2, 1, 0, 0, 255, 254, 253, 252, 251, 250, 5, 4, 3, 2, 1, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 250, 249, 248, 247, 246, 245, 0, 0, 0, 0, 0, 0, 251, 250, 249, 248, 247, 246, 1, 0, 0, 0, 0, 0, 252, 251, 250, 249, 248, 247, 2, 1, 0, 0, 0, 0, 253, 252, 251, 250, 249, 248, 3, 2, 1, 0, 0, 0, 254, 253, 252, 251, 250, 249, 4, 3, 2, 1, 0, 0, 255, 254, 253, 252, 251, 250, 5, 4, 3, 2, 1, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_2() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 251, 250, 249, 248, 247, 246, 1, 0, 0, 0, 0, 0, 252, 251, 250, 249, 248, 247, 2, 1, 0, 0, 0, 0, 253, 252, 251, 250, 249, 248, 3, 2, 1, 0, 0, 0, 254, 253, 252, 251, 250, 249, 4, 3, 2, 1, 0, 0, 255, 254, 253, 252, 251, 250, 5, 4, 3, 2, 1, 0, 255, 255, 254, 253, 252, 251, 6, 5, 4, 3, 2, 1}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_2() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 251, 250, 249, 248, 247, 246, 1, 0, 0, 0, 0, 0, 252, 251, 250, 249, 248, 247, 2, 1, 0, 0, 0, 0, 253, 252, 251, 250, 249, 248, 3, 2, 1, 0, 0, 0, 254, 253, 252, 251, 250, 249, 4, 3, 2, 1, 0, 0, 255, 254, 253, 252, 251, 250, 5, 4, 3, 2, 1, 0, 255, 255, 254, 253, 252, 251, 6, 5, 4, 3, 2, 1}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_3() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 220, 120, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 120, 20, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_3() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 220, 120, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 120, 20, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_4() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 94, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 96, 95, 95, 95, 95, 95, 145, 145, 145, 145, 145, 144, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 146, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_4() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 94, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 96, 95, 95, 95, 95, 95, 145, 145, 145, 145, 145, 144, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 146, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_5() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 251, 250, 249, 248, 247, 246, 1, 0, 0, 0, 0, 0, 252, 251, 250, 249, 248, 247, 2, 1, 0, 0, 0, 0, 253, 252, 251, 250, 249, 248, 3, 2, 1, 0, 0, 0, 254, 253, 252, 251, 250, 249, 4, 3, 2, 1, 0, 0, 255, 254, 253, 252, 251, 250, 5, 4, 3, 2, 1, 0, 255, 255, 254, 253, 252, 251, 6, 5, 4, 3, 2, 1}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_5() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 251, 250, 249, 248, 247, 246, 1, 0, 0, 0, 0, 0, 252, 251, 250, 249, 248, 247, 2, 1, 0, 0, 0, 0, 253, 252, 251, 250, 249, 248, 3, 2, 1, 0, 0, 0, 254, 253, 252, 251, 250, 249, 4, 3, 2, 1, 0, 0, 255, 254, 253, 252, 251, 250, 5, 4, 3, 2, 1, 0, 255, 255, 254, 253, 252, 251, 6, 5, 4, 3, 2, 1}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_6() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 7, 6, 5, 4, 3, 2, 0, 0, 0, 0, 0, 0, 252, 251, 250, 249, 248, 247, 2, 1, 0, 0, 0, 0, 253, 252, 251, 250, 249, 248, 3, 2, 1, 0, 0, 0, 254, 253, 252, 251, 250, 249, 4, 3, 2, 1, 0, 0, 255, 254, 253, 252, 251, 250, 5, 4, 3, 2, 1, 0, 255, 255, 254, 253, 252, 251, 6, 5, 4, 3, 2, 1, 255, 255, 255, 254, 253, 252, 7, 6, 5, 4, 3, 2}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_6() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 7, 6, 5, 4, 3, 2, 0, 0, 0, 0, 0, 0, 252, 251, 250, 249, 248, 247, 2, 1, 0, 0, 0, 0, 253, 252, 251, 250, 249, 248, 3, 2, 1, 0, 0, 0, 254, 253, 252, 251, 250, 249, 4, 3, 2, 1, 0, 0, 255, 254, 253, 252, 251, 250, 5, 4, 3, 2, 1, 0, 255, 255, 254, 253, 252, 251, 6, 5, 4, 3, 2, 1, 255, 255, 255, 254, 253, 252, 7, 6, 5, 4, 3, 2}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_7() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 220, 120, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 220, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 220}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_7() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 220, 120, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 220, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 220}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_8() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 96, 95, 95, 95, 95, 95, 121, 120, 120, 120, 120, 120, 96, 96, 95, 95, 95, 95, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 146, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 146, 146, 145, 145, 145, 145, 121, 120, 120, 120, 120, 120}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_8() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 96, 95, 95, 95, 95, 95, 121, 120, 120, 120, 120, 120, 96, 96, 95, 95, 95, 95, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 146, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 146, 146, 145, 145, 145, 145, 121, 120, 120, 120, 120, 120}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_9() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 2, 2, 2, 2, 2, 2, 5, 5, 5, 5, 5, 5, 3, 3, 3, 3, 3, 3, 6, 6, 6, 6, 6, 6, 4, 4, 4, 4, 4, 4, 251, 251, 251, 251, 251, 251, 249, 249, 249, 249, 249, 249, 252, 252, 252, 252, 252, 252, 250, 250, 250, 250, 250, 250, 253, 253, 253, 253, 253, 253, 251, 251, 251, 251, 251, 251, 254, 254, 254, 254, 254, 254, 252, 252, 252, 252, 252, 252, 255, 255, 255, 255, 255, 255, 253, 253, 253, 253, 253, 253, 255, 255, 255, 255, 255, 255, 254, 254, 254, 254, 254, 254}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_9() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 2, 2, 2, 2, 2, 2, 5, 5, 5, 5, 5, 5, 3, 3, 3, 3, 3, 3, 6, 6, 6, 6, 6, 6, 4, 4, 4, 4, 4, 4, 251, 251, 251, 251, 251, 251, 249, 249, 249, 249, 249, 249, 252, 252, 252, 252, 252, 252, 250, 250, 250, 250, 250, 250, 253, 253, 253, 253, 253, 253, 251, 251, 251, 251, 251, 251, 254, 254, 254, 254, 254, 254, 252, 252, 252, 252, 252, 252, 255, 255, 255, 255, 255, 255, 253, 253, 253, 253, 253, 253, 255, 255, 255, 255, 255, 255, 254, 254, 254, 254, 254, 254}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_10() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 2, 2, 2, 2, 2, 2, 5, 5, 5, 5, 5, 5, 3, 3, 3, 3, 3, 3, 6, 6, 6, 6, 6, 6, 4, 4, 4, 4, 4, 4, 7, 7, 7, 7, 7, 7, 5, 5, 5, 5, 5, 5, 252, 252, 252, 252, 252, 252, 250, 250, 250, 250, 250, 250, 253, 253, 253, 253, 253, 253, 251, 251, 251, 251, 251, 251, 254, 254, 254, 254, 254, 254, 252, 252, 252, 252, 252, 252, 255, 255, 255, 255, 255, 255, 253, 253, 253, 253, 253, 253, 255, 255, 255, 255, 255, 255, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_10() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 2, 2, 2, 2, 2, 2, 5, 5, 5, 5, 5, 5, 3, 3, 3, 3, 3, 3, 6, 6, 6, 6, 6, 6, 4, 4, 4, 4, 4, 4, 7, 7, 7, 7, 7, 7, 5, 5, 5, 5, 5, 5, 252, 252, 252, 252, 252, 252, 250, 250, 250, 250, 250, 250, 253, 253, 253, 253, 253, 253, 251, 251, 251, 251, 251, 251, 254, 254, 254, 254, 254, 254, 252, 252, 252, 252, 252, 252, 255, 255, 255, 255, 255, 255, 253, 253, 253, 253, 253, 253, 255, 255, 255, 255, 255, 255, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_11() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 90, 89, 88, 87, 86, 85, 255, 255, 255, 255, 255, 255, 190, 189, 188, 187, 186, 185, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_11() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 90, 89, 88, 87, 86, 85, 255, 255, 255, 255, 255, 255, 190, 189, 188, 187, 186, 185, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_12() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 121, 121, 121, 121, 121, 121, 120, 120, 120, 120, 120, 120, 121, 121, 121, 121, 121, 121, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 146, 146, 146, 146, 146, 146, 145, 145, 145, 145, 145, 145, 146, 146, 146, 146, 146, 146, 145, 145, 145, 145, 145, 145}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_12() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 121, 121, 121, 121, 121, 121, 120, 120, 120, 120, 120, 120, 121, 121, 121, 121, 121, 121, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 146, 146, 146, 146, 146, 146, 145, 145, 145, 145, 145, 145, 146, 146, 146, 146, 146, 146, 145, 145, 145, 145, 145, 145}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_13() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_13() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_14() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_14() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_15() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_15() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_16() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 240, 238, 238, 236, 236, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10, 255, 255, 255, 255, 255, 255, 16, 14, 14, 12, 12, 10}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_16() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 240, 238, 238, 236, 236, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10, 255, 255, 255, 255, 255, 255, 16, 14, 14, 12, 12, 10}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_17() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 249, 248, 247, 246, 245, 244, 0, 0, 0, 0, 0, 0, 250, 249, 248, 247, 246, 245, 0, 0, 0, 0, 0, 0, 251, 250, 249, 248, 247, 246, 1, 0, 0, 0, 0, 0, 252, 251, 250, 249, 248, 247, 2, 1, 0, 0, 0, 0, 253, 252, 251, 250, 249, 248, 3, 2, 1, 0, 0, 0, 254, 253, 252, 251, 250, 249, 4, 3, 2, 1, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_17() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 249, 248, 247, 246, 245, 244, 0, 0, 0, 0, 0, 0, 250, 249, 248, 247, 246, 245, 0, 0, 0, 0, 0, 0, 251, 250, 249, 248, 247, 246, 1, 0, 0, 0, 0, 0, 252, 251, 250, 249, 248, 247, 2, 1, 0, 0, 0, 0, 253, 252, 251, 250, 249, 248, 3, 2, 1, 0, 0, 0, 254, 253, 252, 251, 250, 249, 4, 3, 2, 1, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_18() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 250, 249, 248, 247, 246, 245, 0, 0, 0, 0, 0, 0, 251, 250, 249, 248, 247, 246, 1, 0, 0, 0, 0, 0, 252, 251, 250, 249, 248, 247, 2, 1, 0, 0, 0, 0, 253, 252, 251, 250, 249, 248, 3, 2, 1, 0, 0, 0, 254, 253, 252, 251, 250, 249, 4, 3, 2, 1, 0, 0, 255, 254, 253, 252, 251, 250, 5, 4, 3, 2, 1, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_18() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 250, 249, 248, 247, 246, 245, 0, 0, 0, 0, 0, 0, 251, 250, 249, 248, 247, 246, 1, 0, 0, 0, 0, 0, 252, 251, 250, 249, 248, 247, 2, 1, 0, 0, 0, 0, 253, 252, 251, 250, 249, 248, 3, 2, 1, 0, 0, 0, 254, 253, 252, 251, 250, 249, 4, 3, 2, 1, 0, 0, 255, 254, 253, 252, 251, 250, 5, 4, 3, 2, 1, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_19() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 20, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 120, 20, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_19() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 20, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 120, 20, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_20() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 120, 120, 120, 120, 119, 95, 95, 95, 95, 94, 94, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 94, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 145, 145, 145, 145, 144, 144, 120, 120, 120, 120, 120, 119, 145, 145, 145, 145, 145, 144, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_20() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 120, 120, 120, 120, 119, 95, 95, 95, 95, 94, 94, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 94, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 145, 145, 145, 145, 144, 144, 120, 120, 120, 120, 120, 119, 145, 145, 145, 145, 145, 144, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_21() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 250, 249, 248, 247, 246, 245, 0, 0, 0, 0, 0, 0, 251, 250, 249, 248, 247, 246, 1, 0, 0, 0, 0, 0, 252, 251, 250, 249, 248, 247, 2, 1, 0, 0, 0, 0, 253, 252, 251, 250, 249, 248, 3, 2, 1, 0, 0, 0, 254, 253, 252, 251, 250, 249, 4, 3, 2, 1, 0, 0, 255, 254, 253, 252, 251, 250, 5, 4, 3, 2, 1, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_21() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 250, 249, 248, 247, 246, 245, 0, 0, 0, 0, 0, 0, 251, 250, 249, 248, 247, 246, 1, 0, 0, 0, 0, 0, 252, 251, 250, 249, 248, 247, 2, 1, 0, 0, 0, 0, 253, 252, 251, 250, 249, 248, 3, 2, 1, 0, 0, 0, 254, 253, 252, 251, 250, 249, 4, 3, 2, 1, 0, 0, 255, 254, 253, 252, 251, 250, 5, 4, 3, 2, 1, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_22() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 251, 250, 249, 248, 247, 246, 1, 0, 0, 0, 0, 0, 252, 251, 250, 249, 248, 247, 2, 1, 0, 0, 0, 0, 253, 252, 251, 250, 249, 248, 3, 2, 1, 0, 0, 0, 254, 253, 252, 251, 250, 249, 4, 3, 2, 1, 0, 0, 255, 254, 253, 252, 251, 250, 5, 4, 3, 2, 1, 0, 255, 255, 254, 253, 252, 251, 6, 5, 4, 3, 2, 1}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_22() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 6, 5, 4, 3, 2, 1, 0, 0, 0, 0, 0, 0, 251, 250, 249, 248, 247, 246, 1, 0, 0, 0, 0, 0, 252, 251, 250, 249, 248, 247, 2, 1, 0, 0, 0, 0, 253, 252, 251, 250, 249, 248, 3, 2, 1, 0, 0, 0, 254, 253, 252, 251, 250, 249, 4, 3, 2, 1, 0, 0, 255, 254, 253, 252, 251, 250, 5, 4, 3, 2, 1, 0, 255, 255, 254, 253, 252, 251, 6, 5, 4, 3, 2, 1}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_23() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 220, 120, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 120, 20, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_23() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 220, 120, 20, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 220, 120, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 120, 20, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120, 20, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 220, 120}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_24() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 94, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 96, 95, 95, 95, 95, 95, 145, 145, 145, 145, 145, 144, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 146, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_24() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 94, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 96, 95, 95, 95, 95, 95, 145, 145, 145, 145, 145, 144, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120, 146, 145, 145, 145, 145, 145, 120, 120, 120, 120, 120, 120}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_25() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 2, 2, 2, 2, 2, 2, 5, 5, 5, 5, 5, 5, 3, 3, 3, 3, 3, 3, 250, 250, 250, 250, 250, 250, 248, 248, 248, 248, 248, 248, 251, 251, 251, 251, 251, 251, 249, 249, 249, 249, 249, 249, 252, 252, 252, 252, 252, 252, 250, 250, 250, 250, 250, 250, 253, 253, 253, 253, 253, 253, 251, 251, 251, 251, 251, 251, 254, 254, 254, 254, 254, 254, 252, 252, 252, 252, 252, 252, 255, 255, 255, 255, 255, 255, 253, 253, 253, 253, 253, 253}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_25() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 2, 2, 2, 2, 2, 2, 5, 5, 5, 5, 5, 5, 3, 3, 3, 3, 3, 3, 250, 250, 250, 250, 250, 250, 248, 248, 248, 248, 248, 248, 251, 251, 251, 251, 251, 251, 249, 249, 249, 249, 249, 249, 252, 252, 252, 252, 252, 252, 250, 250, 250, 250, 250, 250, 253, 253, 253, 253, 253, 253, 251, 251, 251, 251, 251, 251, 254, 254, 254, 254, 254, 254, 252, 252, 252, 252, 252, 252, 255, 255, 255, 255, 255, 255, 253, 253, 253, 253, 253, 253}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_26() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 2, 2, 2, 2, 2, 2, 5, 5, 5, 5, 5, 5, 3, 3, 3, 3, 3, 3, 6, 6, 6, 6, 6, 6, 4, 4, 4, 4, 4, 4, 251, 251, 251, 251, 251, 251, 249, 249, 249, 249, 249, 249, 252, 252, 252, 252, 252, 252, 250, 250, 250, 250, 250, 250, 253, 253, 253, 253, 253, 253, 251, 251, 251, 251, 251, 251, 254, 254, 254, 254, 254, 254, 252, 252, 252, 252, 252, 252, 255, 255, 255, 255, 255, 255, 253, 253, 253, 253, 253, 253, 255, 255, 255, 255, 255, 255, 254, 254, 254, 254, 254, 254}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_26() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 2, 2, 2, 2, 2, 2, 5, 5, 5, 5, 5, 5, 3, 3, 3, 3, 3, 3, 6, 6, 6, 6, 6, 6, 4, 4, 4, 4, 4, 4, 251, 251, 251, 251, 251, 251, 249, 249, 249, 249, 249, 249, 252, 252, 252, 252, 252, 252, 250, 250, 250, 250, 250, 250, 253, 253, 253, 253, 253, 253, 251, 251, 251, 251, 251, 251, 254, 254, 254, 254, 254, 254, 252, 252, 252, 252, 252, 252, 255, 255, 255, 255, 255, 255, 253, 253, 253, 253, 253, 253, 255, 255, 255, 255, 255, 255, 254, 254, 254, 254, 254, 254}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_27() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({140, 139, 138, 137, 136, 135, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 90, 89, 88, 87, 86, 85, 255, 255, 255, 255, 255, 255, 190, 189, 188, 187, 186, 185, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_27() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({140, 139, 138, 137, 136, 135, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 90, 89, 88, 87, 86, 85, 255, 255, 255, 255, 255, 255, 190, 189, 188, 187, 186, 185, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_28() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 121, 121, 121, 121, 121, 121, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 146, 146, 146, 146, 146, 146, 145, 145, 145, 145, 145, 145}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_28() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 121, 121, 121, 121, 121, 121, 120, 120, 120, 120, 120, 120, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 145, 146, 146, 146, 146, 146, 146, 145, 145, 145, 145, 145, 145}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_29() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_29() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_30() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_30() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_31() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_31() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_32() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_32() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10, 255, 255, 255, 255, 255, 255, 15, 14, 13, 12, 11, 10}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_33() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_33() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_34() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_34() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_35() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 150, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 151, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 152, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 153, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 154, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 155, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_35() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 150, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 151, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 152, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 153, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 154, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 155, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_36() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 120, 120, 120, 119, 119, 95, 95, 95, 95, 94, 94, 120, 120, 120, 120, 119, 119, 95, 95, 95, 95, 94, 94, 120, 120, 120, 120, 119, 119, 95, 95, 95, 95, 94, 94, 120, 120, 120, 120, 119, 119, 95, 95, 95, 95, 94, 94, 120, 120, 120, 120, 119, 119, 95, 95, 95, 95, 94, 94, 120, 120, 120, 120, 119, 119, 95, 95, 95, 95, 94, 94, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_36() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 120, 120, 120, 119, 119, 95, 95, 95, 95, 94, 94, 120, 120, 120, 120, 119, 119, 95, 95, 95, 95, 94, 94, 120, 120, 120, 120, 119, 119, 95, 95, 95, 95, 94, 94, 120, 120, 120, 120, 119, 119, 95, 95, 95, 95, 94, 94, 120, 120, 120, 120, 119, 119, 95, 95, 95, 95, 94, 94, 120, 120, 120, 120, 119, 119, 95, 95, 95, 95, 94, 94, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_37() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_37() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_38() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_38() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_39() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 250, 150, 50, 0, 0, 0, 0, 0, 0, 0, 0, 255, 251, 151, 51, 0, 0, 0, 0, 0, 0, 0, 0, 255, 252, 152, 52, 0, 0, 0, 0, 0, 0, 0, 0, 255, 253, 153, 53, 0, 0, 0, 0, 0, 0, 0, 0, 255, 254, 154, 54, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 155, 55, 0, 0, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_39() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 250, 150, 50, 0, 0, 0, 0, 0, 0, 0, 0, 255, 251, 151, 51, 0, 0, 0, 0, 0, 0, 0, 0, 255, 252, 152, 52, 0, 0, 0, 0, 0, 0, 0, 0, 255, 253, 153, 53, 0, 0, 0, 0, 0, 0, 0, 0, 255, 254, 154, 54, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 155, 55, 0, 0, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_40() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 120, 120, 120, 120, 119, 95, 95, 95, 95, 95, 94, 120, 120, 120, 120, 120, 119, 95, 95, 95, 95, 95, 94, 120, 120, 120, 120, 120, 119, 95, 95, 95, 95, 95, 94, 120, 120, 120, 120, 120, 119, 95, 95, 95, 95, 95, 94, 120, 120, 120, 120, 120, 119, 95, 95, 95, 95, 95, 94, 120, 120, 120, 120, 120, 119, 95, 95, 95, 95, 95, 94, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_40() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 120, 120, 120, 120, 119, 95, 95, 95, 95, 95, 94, 120, 120, 120, 120, 120, 119, 95, 95, 95, 95, 95, 94, 120, 120, 120, 120, 120, 119, 95, 95, 95, 95, 95, 94, 120, 120, 120, 120, 120, 119, 95, 95, 95, 95, 95, 94, 120, 120, 120, 120, 120, 119, 95, 95, 95, 95, 95, 94, 120, 120, 120, 120, 120, 119, 95, 95, 95, 95, 95, 94, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95, 120, 120, 120, 120, 120, 120, 95, 95, 95, 95, 95, 95}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_41() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 3, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 3, 3, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 3, 3, 3, 2, 2, 2, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 2, 2, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 2, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_41() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 3, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 3, 3, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 3, 3, 3, 2, 2, 2, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 2, 2, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 2, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_42() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 4, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 4, 4, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 4, 4, 4, 3, 3, 3, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 3, 3, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 3, 1, 1, 1, 1, 1, 1}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_42() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 4, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 4, 4, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 4, 4, 4, 3, 3, 3, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 3, 3, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 3, 1, 1, 1, 1, 1, 1}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_43() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 119, 118, 117, 116, 115, 0, 0, 0, 0, 0, 0, 121, 120, 119, 118, 117, 116, 0, 0, 0, 0, 0, 0, 122, 121, 120, 119, 118, 117, 0, 0, 0, 0, 0, 0, 123, 122, 121, 120, 119, 118, 0, 0, 0, 0, 0, 0, 124, 123, 122, 121, 120, 119, 0, 0, 0, 0, 0, 0, 125, 124, 123, 122, 121, 120, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 120, 119, 118, 117, 116, 115, 255, 255, 255, 255, 255, 255, 121, 120, 119, 118, 117, 116, 255, 255, 255, 255, 255, 255, 122, 121, 120, 119, 118, 117, 255, 255, 255, 255, 255, 255, 123, 122, 121, 120, 119, 118, 255, 255, 255, 255, 255, 255, 124, 123, 122, 121, 120, 119, 255, 255, 255, 255, 255, 255, 125, 124, 123, 122, 121, 120}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_43() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 119, 118, 117, 116, 115, 0, 0, 0, 0, 0, 0, 121, 120, 119, 118, 117, 116, 0, 0, 0, 0, 0, 0, 122, 121, 120, 119, 118, 117, 0, 0, 0, 0, 0, 0, 123, 122, 121, 120, 119, 118, 0, 0, 0, 0, 0, 0, 124, 123, 122, 121, 120, 119, 0, 0, 0, 0, 0, 0, 125, 124, 123, 122, 121, 120, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 120, 119, 118, 117, 116, 115, 255, 255, 255, 255, 255, 255, 121, 120, 119, 118, 117, 116, 255, 255, 255, 255, 255, 255, 122, 121, 120, 119, 118, 117, 255, 255, 255, 255, 255, 255, 123, 122, 121, 120, 119, 118, 255, 255, 255, 255, 255, 255, 124, 123, 122, 121, 120, 119, 255, 255, 255, 255, 255, 255, 125, 124, 123, 122, 121, 120}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_44() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_44() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120, 120}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_45() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_45() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_46() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_46() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_47() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_47() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_48() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_48() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0, 240, 239, 238, 237, 236, 235, 0, 0, 0, 0, 0, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_49() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_49() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_50() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_50() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_51() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_51() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_52() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 2, 0, 0, 0, 0, 0, 0, 4, 4, 4, 4, 4, 4, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 4, 0, 0, 0, 0, 0, 0, 250, 250, 250, 250, 250, 250, 225, 225, 225, 225, 225, 224, 251, 251, 251, 251, 251, 250, 226, 226, 226, 226, 226, 226, 252, 252, 252, 252, 252, 252, 227, 227, 227, 227, 227, 226, 253, 253, 253, 253, 253, 252, 228, 228, 228, 228, 228, 228, 254, 254, 254, 254, 254, 254, 229, 229, 229, 229, 229, 228, 255, 255, 255, 255, 255, 254, 230, 230, 230, 230, 230, 230}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_52() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 2, 0, 0, 0, 0, 0, 0, 4, 4, 4, 4, 4, 4, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 4, 0, 0, 0, 0, 0, 0, 250, 250, 250, 250, 250, 250, 225, 225, 225, 225, 225, 224, 251, 251, 251, 251, 251, 250, 226, 226, 226, 226, 226, 226, 252, 252, 252, 252, 252, 252, 227, 227, 227, 227, 227, 226, 253, 253, 253, 253, 253, 252, 228, 228, 228, 228, 228, 228, 254, 254, 254, 254, 254, 254, 229, 229, 229, 229, 229, 228, 255, 255, 255, 255, 255, 254, 230, 230, 230, 230, 230, 230}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_53() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_53() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_54() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_54() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_55() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_55() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_56() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 4, 4, 4, 4, 4, 4, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 250, 250, 250, 250, 250, 250, 225, 225, 225, 225, 225, 225, 251, 251, 251, 251, 251, 251, 226, 226, 226, 226, 226, 226, 252, 252, 252, 252, 252, 252, 227, 227, 227, 227, 227, 227, 253, 253, 253, 253, 253, 253, 228, 228, 228, 228, 228, 228, 254, 254, 254, 254, 254, 254, 229, 229, 229, 229, 229, 229, 255, 255, 255, 255, 255, 255, 230, 230, 230, 230, 230, 230}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_56() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 4, 4, 4, 4, 4, 4, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 250, 250, 250, 250, 250, 250, 225, 225, 225, 225, 225, 225, 251, 251, 251, 251, 251, 251, 226, 226, 226, 226, 226, 226, 252, 252, 252, 252, 252, 252, 227, 227, 227, 227, 227, 227, 253, 253, 253, 253, 253, 253, 228, 228, 228, 228, 228, 228, 254, 254, 254, 254, 254, 254, 229, 229, 229, 229, 229, 229, 255, 255, 255, 255, 255, 255, 230, 230, 230, 230, 230, 230}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_57() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_57() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_58() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_58() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_59() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_59() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_60() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_60() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_61() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 20, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 30, 20, 10, 0, 0, 0, 0, 0, 0, 0, 0, 50, 40, 30, 20, 10, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 10, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 20, 10, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 30, 20, 10, 0, 0, 0, 255, 255, 255, 255, 255, 255, 40, 30, 20, 10, 0, 0, 255, 255, 255, 255, 255, 255, 50, 40, 30, 20, 10, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_61() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 20, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 30, 20, 10, 0, 0, 0, 0, 0, 0, 0, 0, 50, 40, 30, 20, 10, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 10, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 20, 10, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 30, 20, 10, 0, 0, 0, 255, 255, 255, 255, 255, 255, 40, 30, 20, 10, 0, 0, 255, 255, 255, 255, 255, 255, 50, 40, 30, 20, 10, 0}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_62() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 11, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 21, 11, 1, 0, 0, 0, 0, 0, 0, 0, 0, 41, 31, 21, 11, 1, 0, 0, 0, 0, 0, 0, 0, 51, 41, 31, 21, 11, 1, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 1, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 11, 1, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 21, 11, 1, 0, 0, 0, 255, 255, 255, 255, 255, 255, 31, 21, 11, 1, 0, 0, 255, 255, 255, 255, 255, 255, 41, 31, 21, 11, 1, 0, 255, 255, 255, 255, 255, 255, 51, 41, 31, 21, 11, 1}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_62() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 11, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 21, 11, 1, 0, 0, 0, 0, 0, 0, 0, 0, 41, 31, 21, 11, 1, 0, 0, 0, 0, 0, 0, 0, 51, 41, 31, 21, 11, 1, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 1, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 11, 1, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 21, 11, 1, 0, 0, 0, 255, 255, 255, 255, 255, 255, 31, 21, 11, 1, 0, 0, 255, 255, 255, 255, 255, 255, 41, 31, 21, 11, 1, 0, 255, 255, 255, 255, 255, 255, 51, 41, 31, 21, 11, 1}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_63() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 120, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 120, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 120, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 120, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 120, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 120, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 120, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 120, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 120}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_63() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 120, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 120, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 120, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 120, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 120, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 120, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 120, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 120, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 120}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.01f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_64() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 119, 118, 117, 116, 115, 0, 0, 0, 0, 0, 0, 121, 120, 119, 118, 117, 116, 0, 0, 0, 0, 0, 0, 122, 121, 120, 119, 118, 117, 0, 0, 0, 0, 0, 0, 123, 122, 121, 120, 119, 118, 0, 0, 0, 0, 0, 0, 124, 123, 122, 121, 120, 119, 0, 0, 0, 0, 0, 0, 125, 124, 123, 122, 121, 120, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 120, 119, 118, 117, 116, 115, 255, 255, 255, 255, 255, 255, 121, 120, 119, 118, 117, 116, 255, 255, 255, 255, 255, 255, 122, 121, 120, 119, 118, 117, 255, 255, 255, 255, 255, 255, 123, 122, 121, 120, 119, 118, 255, 255, 255, 255, 255, 255, 124, 123, 122, 121, 120, 119, 255, 255, 255, 255, 255, 255, 125, 124, 123, 122, 121, 120}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

const TestModel& get_test_model_all_inputs_as_internal_64() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {4, 7},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120, 119, 118, 117, 116, 115, 0, 0, 0, 0, 0, 0, 121, 120, 119, 118, 117, 116, 0, 0, 0, 0, 0, 0, 122, 121, 120, 119, 118, 117, 0, 0, 0, 0, 0, 0, 123, 122, 121, 120, 119, 118, 0, 0, 0, 0, 0, 0, 124, 123, 122, 121, 120, 119, 0, 0, 0, 0, 0, 0, 125, 124, 123, 122, 121, 120, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 120, 119, 118, 117, 116, 115, 255, 255, 255, 255, 255, 255, 121, 120, 119, 118, 117, 116, 255, 255, 255, 255, 255, 255, 122, 121, 120, 119, 118, 117, 255, 255, 255, 255, 255, 255, 123, 122, 121, 120, 119, 118, 255, 255, 255, 255, 255, 255, 124, 123, 122, 121, 120, 119, 255, 255, 255, 255, 255, 255, 125, 124, 123, 122, 121, 120}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 251, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 250, 251, 252, 253, 254, 255}),
                .dimensions = {144},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<uint8_t>({120}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 10.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                .zeroPoint = 120
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {4, 5, 6},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {7, 8, 9},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::SUB
            }},
        .outputIndexes = {3}
    };
    return model;
}

}  // namespace generated_tests::sub_quantized_different_scales

