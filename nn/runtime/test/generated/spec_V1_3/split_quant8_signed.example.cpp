// Generated from split_quant8_signed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"
using namespace test_helper;

namespace generated_tests::split_quant8_signed {

const TestModel& get_test_model() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_3,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126, -125, -124, -123, -122}),
                .dimensions = {6},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
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
                .data = TestBuffer::createFromVector<int32_t>({3}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126}),
                .dimensions = {2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-125, -124}),
                .dimensions = {2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-123, -122}),
                .dimensions = {2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3, 4, 5},
                .type = TestOperationType::SPLIT
            }},
        .outputIndexes = {3, 4, 5}
    };
    return model;
}

const auto dummy_test_model = TestModelManager::get().add("split_quant8_signed", get_test_model());

}  // namespace generated_tests::split_quant8_signed

namespace generated_tests::split_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {6},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_3,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({}),
                .dimensions = {6},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
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
                .data = TestBuffer::createFromVector<int32_t>({3}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126}),
                .dimensions = {2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-125, -124}),
                .dimensions = {2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-123, -122}),
                .dimensions = {2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126, -125, -124, -123, -122}),
                .dimensions = {6},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-128}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
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
                .inputs = {6, 7, 8},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3, 4, 5},
                .type = TestOperationType::SPLIT
            }},
        .outputIndexes = {3, 4, 5}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal = TestModelManager::get().add("split_quant8_signed_all_inputs_as_internal", get_test_model_all_inputs_as_internal());

}  // namespace generated_tests::split_quant8_signed

namespace generated_tests::split_quant8_signed {

const TestModel& get_test_model_relaxed() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126, -125, -124, -123, -122}),
                .dimensions = {6},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
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
                .data = TestBuffer::createFromVector<int32_t>({3}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126}),
                .dimensions = {2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-125, -124}),
                .dimensions = {2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-123, -122}),
                .dimensions = {2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3, 4, 5},
                .type = TestOperationType::SPLIT
            }},
        .outputIndexes = {3, 4, 5}
    };
    return model;
}

const auto dummy_test_model_relaxed = TestModelManager::get().add("split_quant8_signed_relaxed", get_test_model_relaxed());

}  // namespace generated_tests::split_quant8_signed

namespace generated_tests::split_quant8_signed {

const TestModel& get_test_model_relaxed_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {6},
        .isRelaxed = true,
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({}),
                .dimensions = {6},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
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
                .data = TestBuffer::createFromVector<int32_t>({3}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126}),
                .dimensions = {2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-125, -124}),
                .dimensions = {2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-123, -122}),
                .dimensions = {2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126, -125, -124, -123, -122}),
                .dimensions = {6},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-128}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
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
                .inputs = {6, 7, 8},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3, 4, 5},
                .type = TestOperationType::SPLIT
            }},
        .outputIndexes = {3, 4, 5}
    };
    return model;
}

const auto dummy_test_model_relaxed_all_inputs_as_internal = TestModelManager::get().add("split_quant8_signed_relaxed_all_inputs_as_internal", get_test_model_relaxed_all_inputs_as_internal());

}  // namespace generated_tests::split_quant8_signed

namespace generated_tests::split_quant8_signed {

const TestModel& get_test_model_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_3,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126, -125, -124, -123, -122}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                .numberOfConsumers = 1,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
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
                .data = TestBuffer::createFromVector<int32_t>({2}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126, -125}),
                .dimensions = {1, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-124, -123, -122}),
                .dimensions = {1, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3, 4},
                .type = TestOperationType::SPLIT
            }},
        .outputIndexes = {3, 4}
    };
    return model;
}

const auto dummy_test_model_2 = TestModelManager::get().add("split_quant8_signed_2", get_test_model_2());

}  // namespace generated_tests::split_quant8_signed

namespace generated_tests::split_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {5},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_3,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
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
                .data = TestBuffer::createFromVector<int32_t>({2}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126, -125}),
                .dimensions = {1, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-124, -123, -122}),
                .dimensions = {1, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126, -125, -124, -123, -122}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                .numberOfConsumers = 1,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-125}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
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
                .inputs = {5, 6, 7},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3, 4},
                .type = TestOperationType::SPLIT
            }},
        .outputIndexes = {3, 4}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_2 = TestModelManager::get().add("split_quant8_signed_all_inputs_as_internal_2", get_test_model_all_inputs_as_internal_2());

}  // namespace generated_tests::split_quant8_signed

namespace generated_tests::split_quant8_signed {

const TestModel& get_test_model_relaxed_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126, -125, -124, -123, -122}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                .numberOfConsumers = 1,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
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
                .data = TestBuffer::createFromVector<int32_t>({2}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126, -125}),
                .dimensions = {1, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-124, -123, -122}),
                .dimensions = {1, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3, 4},
                .type = TestOperationType::SPLIT
            }},
        .outputIndexes = {3, 4}
    };
    return model;
}

const auto dummy_test_model_relaxed_2 = TestModelManager::get().add("split_quant8_signed_relaxed_2", get_test_model_relaxed_2());

}  // namespace generated_tests::split_quant8_signed

namespace generated_tests::split_quant8_signed {

const TestModel& get_test_model_relaxed_all_inputs_as_internal_2() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {5},
        .isRelaxed = true,
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
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
                .data = TestBuffer::createFromVector<int32_t>({2}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126, -125}),
                .dimensions = {1, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-124, -123, -122}),
                .dimensions = {1, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126, -125, -124, -123, -122}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                .numberOfConsumers = 1,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-125}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
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
                .inputs = {5, 6, 7},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3, 4},
                .type = TestOperationType::SPLIT
            }},
        .outputIndexes = {3, 4}
    };
    return model;
}

const auto dummy_test_model_relaxed_all_inputs_as_internal_2 = TestModelManager::get().add("split_quant8_signed_relaxed_all_inputs_as_internal_2", get_test_model_relaxed_all_inputs_as_internal_2());

}  // namespace generated_tests::split_quant8_signed

namespace generated_tests::split_quant8_signed {

const TestModel& get_test_model_3() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_3,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126, -125, -124, -123, -122}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                .numberOfConsumers = 1,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({1}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({3}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -124}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-126, -123}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-125, -122}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3, 4, 5},
                .type = TestOperationType::SPLIT
            }},
        .outputIndexes = {3, 4, 5}
    };
    return model;
}

const auto dummy_test_model_3 = TestModelManager::get().add("split_quant8_signed_3", get_test_model_3());

}  // namespace generated_tests::split_quant8_signed

namespace generated_tests::split_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_3() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {6},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_3,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({1}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({3}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -124}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-126, -123}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-125, -122}),
                .dimensions = {2, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126, -125, -124, -123, -122}),
                .dimensions = {2, 3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                .numberOfConsumers = 1,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-125}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -125
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
                .inputs = {6, 7, 8},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3, 4, 5},
                .type = TestOperationType::SPLIT
            }},
        .outputIndexes = {3, 4, 5}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_3 = TestModelManager::get().add("split_quant8_signed_all_inputs_as_internal_3", get_test_model_all_inputs_as_internal_3());

}  // namespace generated_tests::split_quant8_signed

namespace generated_tests::split_quant8_signed {

const TestModel& get_test_model_4() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_3,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126, -125, -124, -123, -122, -121, -120}),
                .dimensions = {2, 2, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({1}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({2}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126, -123, -122}),
                .dimensions = {2, 1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-125, -124, -121, -120}),
                .dimensions = {2, 1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3, 4},
                .type = TestOperationType::SPLIT
            }},
        .outputIndexes = {3, 4}
    };
    return model;
}

const auto dummy_test_model_4 = TestModelManager::get().add("split_quant8_signed_4", get_test_model_4());

}  // namespace generated_tests::split_quant8_signed

namespace generated_tests::split_quant8_signed {

const TestModel& get_test_model_all_inputs_as_internal_4() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {5},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_3,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({}),
                .dimensions = {2, 2, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({1}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({2}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126, -123, -122}),
                .dimensions = {2, 1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-125, -124, -121, -120}),
                .dimensions = {2, 1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-127, -126, -125, -124, -123, -122, -121, -120}),
                .dimensions = {2, 2, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-128}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -128
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
                .inputs = {5, 6, 7},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1, 2},
                .outputs = {3, 4},
                .type = TestOperationType::SPLIT
            }},
        .outputIndexes = {3, 4}
    };
    return model;
}

const auto dummy_test_model_all_inputs_as_internal_4 = TestModelManager::get().add("split_quant8_signed_all_inputs_as_internal_4", get_test_model_all_inputs_as_internal_4());

}  // namespace generated_tests::split_quant8_signed
