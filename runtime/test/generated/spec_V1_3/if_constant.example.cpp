// Generated from if_constant.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"
using namespace test_helper;

namespace generated_tests::if_constant {

const TestModel& get_test_model_copy_true() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {3, 4},
                .operands = {{ // cond
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<bool8>({true}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_BOOL8,
                            .zeroPoint = 0
                        }, { // param2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::SUBGRAPH,
                            .zeroPoint = 0
                        }, { // param3
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::SUBGRAPH,
                            .zeroPoint = 0
                        }, { // x
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // y
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({8.0f, 7.0f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f, 1.0f, 0.0f, -1.0f, -2.0f, -3.0f}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // z
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::IF
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {{ // param
                .inputIndexes = {0, 1},
                .operands = {{ // x1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // y1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // z1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::ADD
                        }},
                .outputIndexes = {3}
            }, { // param
                .inputIndexes = {0, 1},
                .operands = {{ // x2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // y2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // z2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            }}
    };
    return model;
}

const auto dummy_test_model_copy_true = TestModelManager::get().add("if_constant_copy_true", get_test_model_copy_true());

}  // namespace generated_tests::if_constant

namespace generated_tests::if_constant {

const TestModel& get_test_model_copy_false() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {3, 4},
                .operands = {{ // cond1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<bool8>({false}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_BOOL8,
                            .zeroPoint = 0
                        }, { // param6
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::SUBGRAPH,
                            .zeroPoint = 0
                        }, { // param7
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::SUBGRAPH,
                            .zeroPoint = 0
                        }, { // x3
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // y3
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({8.0f, 7.0f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f, 1.0f, 0.0f, -1.0f, -2.0f, -3.0f}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // z3
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-7.0f, -5.0f, -3.0f, -1.0f, 1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::IF
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {{ // param
                .inputIndexes = {0, 1},
                .operands = {{ // x4
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // y4
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param4
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // z4
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::ADD
                        }},
                .outputIndexes = {3}
            }, { // param
                .inputIndexes = {0, 1},
                .operands = {{ // x5
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // y5
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param5
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // z5
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            }}
    };
    return model;
}

const auto dummy_test_model_copy_false = TestModelManager::get().add("if_constant_copy_false", get_test_model_copy_false());

}  // namespace generated_tests::if_constant

namespace generated_tests::if_constant {

const TestModel& get_test_model_reference_true() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {3, 4},
                .operands = {{ // cond2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<bool8>({true}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_REFERENCE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_BOOL8,
                            .zeroPoint = 0
                        }, { // param10
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::SUBGRAPH,
                            .zeroPoint = 0
                        }, { // param11
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::SUBGRAPH,
                            .zeroPoint = 0
                        }, { // x6
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // y6
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({8.0f, 7.0f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f, 1.0f, 0.0f, -1.0f, -2.0f, -3.0f}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // z6
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::IF
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {{ // param
                .inputIndexes = {0, 1},
                .operands = {{ // x7
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // y7
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param8
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_REFERENCE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // z7
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::ADD
                        }},
                .outputIndexes = {3}
            }, { // param
                .inputIndexes = {0, 1},
                .operands = {{ // x8
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // y8
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param9
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_REFERENCE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // z8
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            }}
    };
    return model;
}

const auto dummy_test_model_reference_true = TestModelManager::get().add("if_constant_reference_true", get_test_model_reference_true());

}  // namespace generated_tests::if_constant

namespace generated_tests::if_constant {

const TestModel& get_test_model_reference_false() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {3, 4},
                .operands = {{ // cond3
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<bool8>({false}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_REFERENCE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_BOOL8,
                            .zeroPoint = 0
                        }, { // param14
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::SUBGRAPH,
                            .zeroPoint = 0
                        }, { // param15
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::SUBGRAPH,
                            .zeroPoint = 0
                        }, { // x9
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // y9
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({8.0f, 7.0f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f, 1.0f, 0.0f, -1.0f, -2.0f, -3.0f}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // z9
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-7.0f, -5.0f, -3.0f, -1.0f, 1.0f, 3.0f, 5.0f, 7.0f, 9.0f, 11.0f, 13.0f, 15.0f}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2, 3, 4},
                            .outputs = {5},
                            .type = TestOperationType::IF
                        }},
                .outputIndexes = {5}
            },
        .minSupportedVersion = TestHalVersion::V1_3,
        .referenced = {{ // param
                .inputIndexes = {0, 1},
                .operands = {{ // x10
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // y10
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param12
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_REFERENCE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // z10
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::ADD
                        }},
                .outputIndexes = {3}
            }, { // param
                .inputIndexes = {0, 1},
                .operands = {{ // x11
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // y11
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param13
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_REFERENCE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // z11
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3, 4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::SUB
                        }},
                .outputIndexes = {3}
            }}
    };
    return model;
}

const auto dummy_test_model_reference_false = TestModelManager::get().add("if_constant_reference_false", get_test_model_reference_false());

}  // namespace generated_tests::if_constant

