// Generated from mirror_pad_tensorflow.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"
using namespace test_helper;

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_summary() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // t
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // paddings
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 1, 2, 2}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({2.0f, 1.0f, 1.0f, 2.0f, 3.0f, 3.0f, 2.0f, 2.0f, 1.0f, 1.0f, 2.0f, 3.0f, 3.0f, 2.0f, 5.0f, 4.0f, 4.0f, 5.0f, 6.0f, 6.0f, 5.0f, 5.0f, 4.0f, 4.0f, 5.0f, 6.0f, 6.0f, 5.0f}),
                            .dimensions = {4, 7},
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
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_summary = TestModelManager::get().add("mirror_pad_tensorflow_summary", get_test_model_summary());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_summary_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4},
                .operands = {{ // t
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // paddings
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 1, 2, 2}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({2.0f, 1.0f, 1.0f, 2.0f, 3.0f, 3.0f, 2.0f, 2.0f, 1.0f, 1.0f, 2.0f, 3.0f, 3.0f, 2.0f, 5.0f, 4.0f, 4.0f, 5.0f, 6.0f, 6.0f, 5.0f, 5.0f, 4.0f, 4.0f, 5.0f, 6.0f, 6.0f, 5.0f}),
                            .dimensions = {4, 7},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // t_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // placeholder
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
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
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_summary_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_summary_all_inputs_as_internal", get_test_model_summary_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_summary_all_tensors_as_inputs() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{ // t
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // paddings
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 1, 2, 2}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({2.0f, 1.0f, 1.0f, 2.0f, 3.0f, 3.0f, 2.0f, 2.0f, 1.0f, 1.0f, 2.0f, 3.0f, 3.0f, 2.0f, 5.0f, 4.0f, 4.0f, 5.0f, 6.0f, 6.0f, 5.0f, 5.0f, 4.0f, 4.0f, 5.0f, 6.0f, 6.0f, 5.0f}),
                            .dimensions = {4, 7},
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
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_summary_all_tensors_as_inputs = TestModelManager::get().add("mirror_pad_tensorflow_summary_all_tensors_as_inputs", get_test_model_summary_all_tensors_as_inputs());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_summary_all_tensors_as_inputs_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {1, 4},
                .operands = {{ // t
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // paddings
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 1, 2, 2}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({2.0f, 1.0f, 1.0f, 2.0f, 3.0f, 3.0f, 2.0f, 2.0f, 1.0f, 1.0f, 2.0f, 3.0f, 3.0f, 2.0f, 5.0f, 4.0f, 4.0f, 5.0f, 6.0f, 6.0f, 5.0f, 5.0f, 4.0f, 4.0f, 5.0f, 6.0f, 6.0f, 5.0f}),
                            .dimensions = {4, 7},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // t_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // placeholder1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
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
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_summary_all_tensors_as_inputs_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_summary_all_tensors_as_inputs_all_inputs_as_internal", get_test_model_summary_all_tensors_as_inputs_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_summary_float16() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // t
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // paddings
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 1, 2, 2}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({2.0f, 1.0f, 1.0f, 2.0f, 3.0f, 3.0f, 2.0f, 2.0f, 1.0f, 1.0f, 2.0f, 3.0f, 3.0f, 2.0f, 5.0f, 4.0f, 4.0f, 5.0f, 6.0f, 6.0f, 5.0f, 5.0f, 4.0f, 4.0f, 5.0f, 6.0f, 6.0f, 5.0f}),
                            .dimensions = {4, 7},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_summary_float16 = TestModelManager::get().add("mirror_pad_tensorflow_summary_float16", get_test_model_summary_float16());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_summary_float16_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4},
                .operands = {{ // t
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // paddings
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 1, 2, 2}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({2.0f, 1.0f, 1.0f, 2.0f, 3.0f, 3.0f, 2.0f, 2.0f, 1.0f, 1.0f, 2.0f, 3.0f, 3.0f, 2.0f, 5.0f, 4.0f, 4.0f, 5.0f, 6.0f, 6.0f, 5.0f, 5.0f, 4.0f, 4.0f, 5.0f, 6.0f, 6.0f, 5.0f}),
                            .dimensions = {4, 7},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // t_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // placeholder2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
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
                        }},
                .operations = {{
                            .inputs = {4, 5, 6},
                            .outputs = {0},
                            .type = TestOperationType::ADD
                        }, {
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_summary_float16_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_summary_float16_all_inputs_as_internal", get_test_model_summary_float16_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_summary_float16_all_tensors_as_inputs() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{ // t
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // paddings
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 1, 2, 2}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({2.0f, 1.0f, 1.0f, 2.0f, 3.0f, 3.0f, 2.0f, 2.0f, 1.0f, 1.0f, 2.0f, 3.0f, 3.0f, 2.0f, 5.0f, 4.0f, 4.0f, 5.0f, 6.0f, 6.0f, 5.0f, 5.0f, 4.0f, 4.0f, 5.0f, 6.0f, 6.0f, 5.0f}),
                            .dimensions = {4, 7},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_summary_float16_all_tensors_as_inputs = TestModelManager::get().add("mirror_pad_tensorflow_summary_float16_all_tensors_as_inputs", get_test_model_summary_float16_all_tensors_as_inputs());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_summary_float16_all_tensors_as_inputs_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {1, 4},
                .operands = {{ // t
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // paddings
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 1, 2, 2}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({2.0f, 1.0f, 1.0f, 2.0f, 3.0f, 3.0f, 2.0f, 2.0f, 1.0f, 1.0f, 2.0f, 3.0f, 3.0f, 2.0f, 5.0f, 4.0f, 4.0f, 5.0f, 6.0f, 6.0f, 5.0f, 5.0f, 4.0f, 4.0f, 5.0f, 6.0f, 6.0f, 5.0f}),
                            .dimensions = {4, 7},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // t_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // placeholder3
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // param6
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
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_summary_float16_all_tensors_as_inputs_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_summary_float16_all_tensors_as_inputs_all_inputs_as_internal", get_test_model_summary_float16_all_tensors_as_inputs_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_summary_quant8_asymm() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // t
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({6, 8, 10, 12, 14, 16}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // paddings
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 1, 2, 2}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({8, 6, 6, 8, 10, 10, 8, 8, 6, 6, 8, 10, 10, 8, 14, 12, 12, 14, 16, 16, 14, 14, 12, 12, 14, 16, 16, 14}),
                            .dimensions = {4, 7},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_summary_quant8_asymm = TestModelManager::get().add("mirror_pad_tensorflow_summary_quant8_asymm", get_test_model_summary_quant8_asymm());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_summary_quant8_asymm_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4},
                .operands = {{ // t
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // paddings
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 1, 2, 2}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({8, 6, 6, 8, 10, 10, 8, 8, 6, 6, 8, 10, 10, 8, 14, 12, 12, 14, 16, 16, 14, 14, 12, 12, 14, 16, 16, 14}),
                            .dimensions = {4, 7},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // t_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({6, 8, 10, 12, 14, 16}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // placeholder4
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({4}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // param7
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
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_summary_quant8_asymm_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_summary_quant8_asymm_all_inputs_as_internal", get_test_model_summary_quant8_asymm_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_summary_quant8_asymm_all_tensors_as_inputs() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{ // t
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({6, 8, 10, 12, 14, 16}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // paddings
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 1, 2, 2}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({8, 6, 6, 8, 10, 10, 8, 8, 6, 6, 8, 10, 10, 8, 14, 12, 12, 14, 16, 16, 14, 14, 12, 12, 14, 16, 16, 14}),
                            .dimensions = {4, 7},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_summary_quant8_asymm_all_tensors_as_inputs = TestModelManager::get().add("mirror_pad_tensorflow_summary_quant8_asymm_all_tensors_as_inputs", get_test_model_summary_quant8_asymm_all_tensors_as_inputs());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_summary_quant8_asymm_all_tensors_as_inputs_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {1, 4},
                .operands = {{ // t
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // paddings
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 1, 2, 2}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({8, 6, 6, 8, 10, 10, 8, 8, 6, 6, 8, 10, 10, 8, 14, 12, 12, 14, 16, 16, 14, 14, 12, 12, 14, 16, 16, 14}),
                            .dimensions = {4, 7},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // t_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({6, 8, 10, 12, 14, 16}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // placeholder5
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({4}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // param8
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
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_summary_quant8_asymm_all_tensors_as_inputs_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_summary_quant8_asymm_all_tensors_as_inputs_all_inputs_as_internal", get_test_model_summary_quant8_asymm_all_tensors_as_inputs_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_summary_quant8_asymm_signed() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // t
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-5, -1, 3, 7, 11, 15}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // paddings
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 1, 2, 2}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-1, -5, -5, -1, 3, 3, -1, -1, -5, -5, -1, 3, 3, -1, 11, 7, 7, 11, 15, 15, 11, 11, 7, 7, 11, 15, 15, 11}),
                            .dimensions = {4, 7},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_summary_quant8_asymm_signed = TestModelManager::get().add("mirror_pad_tensorflow_summary_quant8_asymm_signed", get_test_model_summary_quant8_asymm_signed());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_summary_quant8_asymm_signed_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4},
                .operands = {{ // t
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // paddings
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 1, 2, 2}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-1, -5, -5, -1, 3, 3, -1, -1, -5, -5, -1, 3, 3, -1, 11, 7, 7, 11, 15, 15, 11, 11, 7, 7, 11, 15, 15, 11}),
                            .dimensions = {4, 7},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // t_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-5, -1, 3, 7, 11, 15}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // placeholder6
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-9}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // param9
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
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_summary_quant8_asymm_signed_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_summary_quant8_asymm_signed_all_inputs_as_internal", get_test_model_summary_quant8_asymm_signed_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_summary_quant8_asymm_signed_all_tensors_as_inputs() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{ // t
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-5, -1, 3, 7, 11, 15}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // paddings
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 1, 2, 2}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-1, -5, -5, -1, 3, 3, -1, -1, -5, -5, -1, 3, 3, -1, 11, 7, 7, 11, 15, 15, 11, 11, 7, 7, 11, 15, 15, 11}),
                            .dimensions = {4, 7},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_summary_quant8_asymm_signed_all_tensors_as_inputs = TestModelManager::get().add("mirror_pad_tensorflow_summary_quant8_asymm_signed_all_tensors_as_inputs", get_test_model_summary_quant8_asymm_signed_all_tensors_as_inputs());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_summary_quant8_asymm_signed_all_tensors_as_inputs_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {1, 4},
                .operands = {{ // t
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // paddings
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 1, 2, 2}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-1, -5, -5, -1, 3, 3, -1, -1, -5, -5, -1, 3, 3, -1, 11, 7, 7, 11, 15, 15, 11, 11, 7, 7, 11, 15, 15, 11}),
                            .dimensions = {4, 7},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // t_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-5, -1, 3, 7, 11, 15}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // placeholder7
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-9}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // param10
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
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_summary_quant8_asymm_signed_all_tensors_as_inputs_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_summary_quant8_asymm_signed_all_tensors_as_inputs_all_inputs_as_internal", get_test_model_summary_quant8_asymm_signed_all_tensors_as_inputs_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_summary_int32() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // t
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 2, 3, 4, 5, 6}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // paddings
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 1, 2, 2}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({2, 1, 1, 2, 3, 3, 2, 2, 1, 1, 2, 3, 3, 2, 5, 4, 4, 5, 6, 6, 5, 5, 4, 4, 5, 6, 6, 5}),
                            .dimensions = {4, 7},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_summary_int32 = TestModelManager::get().add("mirror_pad_tensorflow_summary_int32", get_test_model_summary_int32());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_summary_int32_all_tensors_as_inputs() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{ // t
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 2, 3, 4, 5, 6}),
                            .dimensions = {2, 3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // paddings
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 1, 2, 2}),
                            .dimensions = {2, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({2, 1, 1, 2, 3, 3, 2, 2, 1, 1, 2, 3, 3, 2, 5, 4, 4, 5, 6, 6, 5, 5, 4, 4, 5, 6, 6, 5}),
                            .dimensions = {4, 7},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_summary_int32_all_tensors_as_inputs = TestModelManager::get().add("mirror_pad_tensorflow_summary_int32_all_tensors_as_inputs", get_test_model_summary_int32_all_tensors_as_inputs());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_reflect() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // t1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // paddings1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
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
                        }, { // output1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f, 2.0f, 1.0f}),
                            .dimensions = {5},
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
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_reflect = TestModelManager::get().add("mirror_pad_tensorflow_mode_reflect", get_test_model_mode_reflect());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_reflect_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4},
                .operands = {{ // t1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // paddings1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
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
                        }, { // output1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f, 2.0f, 1.0f}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // t1_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // placeholder8
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param11
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
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_reflect_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_mode_reflect_all_inputs_as_internal", get_test_model_mode_reflect_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_reflect_all_tensors_as_inputs() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{ // t1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // paddings1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
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
                        }, { // output1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f, 2.0f, 1.0f}),
                            .dimensions = {5},
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
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_reflect_all_tensors_as_inputs = TestModelManager::get().add("mirror_pad_tensorflow_mode_reflect_all_tensors_as_inputs", get_test_model_mode_reflect_all_tensors_as_inputs());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_reflect_all_tensors_as_inputs_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {1, 4},
                .operands = {{ // t1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // paddings1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
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
                        }, { // output1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f, 2.0f, 1.0f}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // t1_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // placeholder9
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param12
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
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_reflect_all_tensors_as_inputs_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_mode_reflect_all_tensors_as_inputs_all_inputs_as_internal", get_test_model_mode_reflect_all_tensors_as_inputs_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_reflect_float16() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // t1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f, 2.0f, 3.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // paddings1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
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
                        }, { // output1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f, 2.0f, 3.0f, 2.0f, 1.0f}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_reflect_float16 = TestModelManager::get().add("mirror_pad_tensorflow_mode_reflect_float16", get_test_model_mode_reflect_float16());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_reflect_float16_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4},
                .operands = {{ // t1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // paddings1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
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
                        }, { // output1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f, 2.0f, 3.0f, 2.0f, 1.0f}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // t1_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f, 2.0f, 3.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // placeholder10
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // param13
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
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_reflect_float16_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_mode_reflect_float16_all_inputs_as_internal", get_test_model_mode_reflect_float16_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_reflect_float16_all_tensors_as_inputs() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{ // t1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f, 2.0f, 3.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // paddings1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
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
                        }, { // output1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f, 2.0f, 3.0f, 2.0f, 1.0f}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_reflect_float16_all_tensors_as_inputs = TestModelManager::get().add("mirror_pad_tensorflow_mode_reflect_float16_all_tensors_as_inputs", get_test_model_mode_reflect_float16_all_tensors_as_inputs());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_reflect_float16_all_tensors_as_inputs_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {1, 4},
                .operands = {{ // t1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // paddings1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
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
                        }, { // output1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f, 2.0f, 3.0f, 2.0f, 1.0f}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // t1_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f, 2.0f, 3.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // placeholder11
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // param14
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
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_reflect_float16_all_tensors_as_inputs_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_mode_reflect_float16_all_tensors_as_inputs_all_inputs_as_internal", get_test_model_mode_reflect_float16_all_tensors_as_inputs_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_reflect_quant8_asymm() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // t1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({6, 8, 10}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // paddings1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
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
                        }, { // output1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({6, 8, 10, 8, 6}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_reflect_quant8_asymm = TestModelManager::get().add("mirror_pad_tensorflow_mode_reflect_quant8_asymm", get_test_model_mode_reflect_quant8_asymm());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_reflect_quant8_asymm_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4},
                .operands = {{ // t1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // paddings1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
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
                        }, { // output1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({6, 8, 10, 8, 6}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // t1_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({6, 8, 10}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // placeholder12
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({4}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // param15
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
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_reflect_quant8_asymm_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_mode_reflect_quant8_asymm_all_inputs_as_internal", get_test_model_mode_reflect_quant8_asymm_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_reflect_quant8_asymm_all_tensors_as_inputs() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{ // t1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({6, 8, 10}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // paddings1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
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
                        }, { // output1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({6, 8, 10, 8, 6}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_reflect_quant8_asymm_all_tensors_as_inputs = TestModelManager::get().add("mirror_pad_tensorflow_mode_reflect_quant8_asymm_all_tensors_as_inputs", get_test_model_mode_reflect_quant8_asymm_all_tensors_as_inputs());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_reflect_quant8_asymm_all_tensors_as_inputs_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {1, 4},
                .operands = {{ // t1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // paddings1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
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
                        }, { // output1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({6, 8, 10, 8, 6}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // t1_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({6, 8, 10}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // placeholder13
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({4}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // param16
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
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_reflect_quant8_asymm_all_tensors_as_inputs_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_mode_reflect_quant8_asymm_all_tensors_as_inputs_all_inputs_as_internal", get_test_model_mode_reflect_quant8_asymm_all_tensors_as_inputs_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_reflect_quant8_asymm_signed() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // t1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-5, -1, 3}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // paddings1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
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
                        }, { // output1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-5, -1, 3, -1, -5}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_reflect_quant8_asymm_signed = TestModelManager::get().add("mirror_pad_tensorflow_mode_reflect_quant8_asymm_signed", get_test_model_mode_reflect_quant8_asymm_signed());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_reflect_quant8_asymm_signed_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4},
                .operands = {{ // t1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // paddings1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
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
                        }, { // output1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-5, -1, 3, -1, -5}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // t1_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-5, -1, 3}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // placeholder14
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-9}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // param17
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
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_reflect_quant8_asymm_signed_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_mode_reflect_quant8_asymm_signed_all_inputs_as_internal", get_test_model_mode_reflect_quant8_asymm_signed_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_reflect_quant8_asymm_signed_all_tensors_as_inputs() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{ // t1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-5, -1, 3}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // paddings1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
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
                        }, { // output1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-5, -1, 3, -1, -5}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_reflect_quant8_asymm_signed_all_tensors_as_inputs = TestModelManager::get().add("mirror_pad_tensorflow_mode_reflect_quant8_asymm_signed_all_tensors_as_inputs", get_test_model_mode_reflect_quant8_asymm_signed_all_tensors_as_inputs());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_reflect_quant8_asymm_signed_all_tensors_as_inputs_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {1, 4},
                .operands = {{ // t1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // paddings1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
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
                        }, { // output1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-5, -1, 3, -1, -5}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // t1_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-5, -1, 3}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // placeholder15
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-9}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // param18
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
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_reflect_quant8_asymm_signed_all_tensors_as_inputs_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_mode_reflect_quant8_asymm_signed_all_tensors_as_inputs_all_inputs_as_internal", get_test_model_mode_reflect_quant8_asymm_signed_all_tensors_as_inputs_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_reflect_int32() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // t1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 2, 3}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // paddings1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
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
                        }, { // output1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 2, 3, 2, 1}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_reflect_int32 = TestModelManager::get().add("mirror_pad_tensorflow_mode_reflect_int32", get_test_model_mode_reflect_int32());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_reflect_int32_all_tensors_as_inputs() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{ // t1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 2, 3}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // paddings1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
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
                        }, { // output1
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 2, 3, 2, 1}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_reflect_int32_all_tensors_as_inputs = TestModelManager::get().add("mirror_pad_tensorflow_mode_reflect_int32_all_tensors_as_inputs", get_test_model_mode_reflect_int32_all_tensors_as_inputs());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_symmetric() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // t2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // paddings2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f, 3.0f, 2.0f}),
                            .dimensions = {5},
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
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_symmetric = TestModelManager::get().add("mirror_pad_tensorflow_mode_symmetric", get_test_model_mode_symmetric());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_symmetric_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4},
                .operands = {{ // t2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // paddings2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f, 3.0f, 2.0f}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // t2_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // placeholder16
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param19
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
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_symmetric_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_mode_symmetric_all_inputs_as_internal", get_test_model_mode_symmetric_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_symmetric_all_tensors_as_inputs() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{ // t2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // paddings2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f, 3.0f, 2.0f}),
                            .dimensions = {5},
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
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_symmetric_all_tensors_as_inputs = TestModelManager::get().add("mirror_pad_tensorflow_mode_symmetric_all_tensors_as_inputs", get_test_model_mode_symmetric_all_tensors_as_inputs());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_symmetric_all_tensors_as_inputs_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {1, 4},
                .operands = {{ // t2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // paddings2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f, 3.0f, 2.0f}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // t2_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({1.0f, 2.0f, 3.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // placeholder17
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // param20
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
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_symmetric_all_tensors_as_inputs_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_mode_symmetric_all_tensors_as_inputs_all_inputs_as_internal", get_test_model_mode_symmetric_all_tensors_as_inputs_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_symmetric_float16() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // t2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f, 2.0f, 3.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // paddings2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f, 2.0f, 3.0f, 3.0f, 2.0f}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_symmetric_float16 = TestModelManager::get().add("mirror_pad_tensorflow_mode_symmetric_float16", get_test_model_mode_symmetric_float16());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_symmetric_float16_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4},
                .operands = {{ // t2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // paddings2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f, 2.0f, 3.0f, 3.0f, 2.0f}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // t2_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f, 2.0f, 3.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // placeholder18
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // param21
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
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_symmetric_float16_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_mode_symmetric_float16_all_inputs_as_internal", get_test_model_mode_symmetric_float16_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_symmetric_float16_all_tensors_as_inputs() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{ // t2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f, 2.0f, 3.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // paddings2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f, 2.0f, 3.0f, 3.0f, 2.0f}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_symmetric_float16_all_tensors_as_inputs = TestModelManager::get().add("mirror_pad_tensorflow_mode_symmetric_float16_all_tensors_as_inputs", get_test_model_mode_symmetric_float16_all_tensors_as_inputs());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_symmetric_float16_all_tensors_as_inputs_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {1, 4},
                .operands = {{ // t2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // paddings2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f, 2.0f, 3.0f, 3.0f, 2.0f}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // t2_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({1.0f, 2.0f, 3.0f}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // placeholder19
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.0f}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, { // param22
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
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_symmetric_float16_all_tensors_as_inputs_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_mode_symmetric_float16_all_tensors_as_inputs_all_inputs_as_internal", get_test_model_mode_symmetric_float16_all_tensors_as_inputs_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_symmetric_quant8_asymm() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // t2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({6, 8, 10}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // paddings2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({6, 8, 10, 10, 8}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_symmetric_quant8_asymm = TestModelManager::get().add("mirror_pad_tensorflow_mode_symmetric_quant8_asymm", get_test_model_mode_symmetric_quant8_asymm());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_symmetric_quant8_asymm_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4},
                .operands = {{ // t2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // paddings2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({6, 8, 10, 10, 8}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // t2_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({6, 8, 10}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // placeholder20
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({4}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // param23
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
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_symmetric_quant8_asymm_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_mode_symmetric_quant8_asymm_all_inputs_as_internal", get_test_model_mode_symmetric_quant8_asymm_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_symmetric_quant8_asymm_all_tensors_as_inputs() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{ // t2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({6, 8, 10}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // paddings2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({6, 8, 10, 10, 8}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_symmetric_quant8_asymm_all_tensors_as_inputs = TestModelManager::get().add("mirror_pad_tensorflow_mode_symmetric_quant8_asymm_all_tensors_as_inputs", get_test_model_mode_symmetric_quant8_asymm_all_tensors_as_inputs());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_symmetric_quant8_asymm_all_tensors_as_inputs_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {1, 4},
                .operands = {{ // t2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // paddings2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({6, 8, 10, 10, 8}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // t2_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({6, 8, 10}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // placeholder21
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<uint8_t>({4}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.5f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM,
                            .zeroPoint = 4
                        }, { // param24
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
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_symmetric_quant8_asymm_all_tensors_as_inputs_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_mode_symmetric_quant8_asymm_all_tensors_as_inputs_all_inputs_as_internal", get_test_model_mode_symmetric_quant8_asymm_all_tensors_as_inputs_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_symmetric_quant8_asymm_signed() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // t2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-5, -1, 3}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // paddings2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-5, -1, 3, 3, -1}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_symmetric_quant8_asymm_signed = TestModelManager::get().add("mirror_pad_tensorflow_mode_symmetric_quant8_asymm_signed", get_test_model_mode_symmetric_quant8_asymm_signed());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_symmetric_quant8_asymm_signed_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {4},
                .operands = {{ // t2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // paddings2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-5, -1, 3, 3, -1}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // t2_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-5, -1, 3}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // placeholder22
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-9}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // param25
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
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_symmetric_quant8_asymm_signed_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_mode_symmetric_quant8_asymm_signed_all_inputs_as_internal", get_test_model_mode_symmetric_quant8_asymm_signed_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_symmetric_quant8_asymm_signed_all_tensors_as_inputs() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{ // t2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-5, -1, 3}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // paddings2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-5, -1, 3, 3, -1}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_symmetric_quant8_asymm_signed_all_tensors_as_inputs = TestModelManager::get().add("mirror_pad_tensorflow_mode_symmetric_quant8_asymm_signed_all_tensors_as_inputs", get_test_model_mode_symmetric_quant8_asymm_signed_all_tensors_as_inputs());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_symmetric_quant8_asymm_signed_all_tensors_as_inputs_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {1, 4},
                .operands = {{ // t2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // paddings2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-5, -1, 3, 3, -1}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // t2_new
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-5, -1, 3}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // placeholder23
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int8_t>({-9}),
                            .dimensions = {1},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.25f,
                            .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                            .zeroPoint = -9
                        }, { // param26
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
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_symmetric_quant8_asymm_signed_all_tensors_as_inputs_all_inputs_as_internal = TestModelManager::get().add("mirror_pad_tensorflow_mode_symmetric_quant8_asymm_signed_all_tensors_as_inputs_all_inputs_as_internal", get_test_model_mode_symmetric_quant8_asymm_signed_all_tensors_as_inputs_all_inputs_as_internal());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_symmetric_int32() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // t2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 2, 3}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // paddings2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 2, 3, 3, 2}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_symmetric_int32 = TestModelManager::get().add("mirror_pad_tensorflow_mode_symmetric_int32", get_test_model_mode_symmetric_int32());

}  // namespace generated_tests::mirror_pad_tensorflow

namespace generated_tests::mirror_pad_tensorflow {

const TestModel& get_test_model_mode_symmetric_int32_all_tensors_as_inputs() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0, 1},
                .operands = {{ // t2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 2, 3}),
                            .dimensions = {3},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // paddings2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 2}),
                            .dimensions = {1, 2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // param2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // output2
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({1, 2, 3, 3, 2}),
                            .dimensions = {5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::MIRROR_PAD
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::AIDL_V3,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_mode_symmetric_int32_all_tensors_as_inputs = TestModelManager::get().add("mirror_pad_tensorflow_mode_symmetric_int32_all_tensors_as_inputs", get_test_model_mode_symmetric_int32_all_tensors_as_inputs());

}  // namespace generated_tests::mirror_pad_tensorflow

