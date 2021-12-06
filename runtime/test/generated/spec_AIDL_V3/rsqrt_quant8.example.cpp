// Generated from rsqrt_quant8.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"
using namespace test_helper;

namespace generated_tests::rsqrt_quant8 {

const TestModel& get_test_model_25h_0_25h_0() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // input0
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({1, 4, 16, 64}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 0
                        }, { // output0
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({8, 4, 2, 1}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0},
                            .outputs = {1},
                            .type = TestOperationType::RSQRT
                        }},
                .outputIndexes = {1}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_25h_0_25h_0 = TestModelManager::get().add("rsqrt_quant8_25h_0_25h_0", get_test_model_25h_0_25h_0());

}  // namespace generated_tests::rsqrt_quant8

namespace generated_tests::rsqrt_quant8 {

const TestModel& get_test_model_25h_0_25h_0_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {2},
                .operands = {{ // input0
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 0
                        }, { // output0
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({8, 4, 2, 1}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 0
                        }, { // input0_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({1, 4, 16, 64}),
                            .dimensions = {4},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 0
                        }, { // placeholder
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({0}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
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
                        }},
                .operations = {{
                            .inputs = {2, 3, 4},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0},
                            .outputs = {1},
                            .type = TestOperationType::RSQRT
                        }},
                .outputIndexes = {1}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_25h_0_25h_0_all_inputs_as_internal = TestModelManager::get().add("rsqrt_quant8_25h_0_25h_0_all_inputs_as_internal", get_test_model_25h_0_25h_0_all_inputs_as_internal());

}  // namespace generated_tests::rsqrt_quant8

namespace generated_tests::rsqrt_quant8 {

const TestModel& get_test_model_25h_0_1h_75() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // input01
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({16, 64}),
                            .dimensions = {2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 0
                        }, { // output01
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({125, 100}),
                            .dimensions = {2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 75
                        }},
                .operations = {{
                            .inputs = {0},
                            .outputs = {1},
                            .type = TestOperationType::RSQRT
                        }},
                .outputIndexes = {1}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_25h_0_1h_75 = TestModelManager::get().add("rsqrt_quant8_25h_0_1h_75", get_test_model_25h_0_1h_75());

}  // namespace generated_tests::rsqrt_quant8

namespace generated_tests::rsqrt_quant8 {

const TestModel& get_test_model_25h_0_1h_75_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {2},
                .operands = {{ // input01
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({}),
                            .dimensions = {2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 0
                        }, { // output01
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({125, 100}),
                            .dimensions = {2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 75
                        }, { // input01_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({16, 64}),
                            .dimensions = {2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 0
                        }, { // placeholder1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({0}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
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
                        }},
                .operations = {{
                            .inputs = {2, 3, 4},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0},
                            .outputs = {1},
                            .type = TestOperationType::RSQRT
                        }},
                .outputIndexes = {1}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_25h_0_1h_75_all_inputs_as_internal = TestModelManager::get().add("rsqrt_quant8_25h_0_1h_75_all_inputs_as_internal", get_test_model_25h_0_1h_75_all_inputs_as_internal());

}  // namespace generated_tests::rsqrt_quant8

namespace generated_tests::rsqrt_quant8 {

const TestModel& get_test_model_125t_10_25h_0() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // input02
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({12, 18, 42}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.125f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 10
                        }, { // output02
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({8, 4, 2}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0},
                            .outputs = {1},
                            .type = TestOperationType::RSQRT
                        }},
                .outputIndexes = {1}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_125t_10_25h_0 = TestModelManager::get().add("rsqrt_quant8_125t_10_25h_0", get_test_model_125t_10_25h_0());

}  // namespace generated_tests::rsqrt_quant8

namespace generated_tests::rsqrt_quant8 {

const TestModel& get_test_model_125t_10_25h_0_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {2},
                .operands = {{ // input02
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.125f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 10
                        }, { // output02
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({8, 4, 2}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 0
                        }, { // input02_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({12, 18, 42}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.125f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 10
                        }, { // placeholder2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({10}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.125f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 10
                        }, { // param2
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
                            .inputs = {2, 3, 4},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0},
                            .outputs = {1},
                            .type = TestOperationType::RSQRT
                        }},
                .outputIndexes = {1}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_125t_10_25h_0_all_inputs_as_internal = TestModelManager::get().add("rsqrt_quant8_125t_10_25h_0_all_inputs_as_internal", get_test_model_125t_10_25h_0_all_inputs_as_internal());

}  // namespace generated_tests::rsqrt_quant8

namespace generated_tests::rsqrt_quant8 {

const TestModel& get_test_model_125t_10_1h_75() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // input03
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({42}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.125f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 10
                        }, { // output03
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({125}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 75
                        }},
                .operations = {{
                            .inputs = {0},
                            .outputs = {1},
                            .type = TestOperationType::RSQRT
                        }},
                .outputIndexes = {1}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_125t_10_1h_75 = TestModelManager::get().add("rsqrt_quant8_125t_10_1h_75", get_test_model_125t_10_1h_75());

}  // namespace generated_tests::rsqrt_quant8

namespace generated_tests::rsqrt_quant8 {

const TestModel& get_test_model_125t_10_1h_75_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {2},
                .operands = {{ // input03
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.125f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 10
                        }, { // output03
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({125}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.01f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 75
                        }, { // input03_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({42}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.125f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 10
                        }, { // placeholder3
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({10}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.125f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 10
                        }, { // param3
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
                            .inputs = {2, 3, 4},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0},
                            .outputs = {1},
                            .type = TestOperationType::RSQRT
                        }},
                .outputIndexes = {1}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_125t_10_1h_75_all_inputs_as_internal = TestModelManager::get().add("rsqrt_quant8_125t_10_1h_75_all_inputs_as_internal", get_test_model_125t_10_1h_75_all_inputs_as_internal());

}  // namespace generated_tests::rsqrt_quant8

