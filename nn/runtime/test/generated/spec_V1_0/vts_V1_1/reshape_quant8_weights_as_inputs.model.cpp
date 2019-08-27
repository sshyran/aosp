// Generated from reshape_quant8_weights_as_inputs.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace android::hardware::neuralnetworks::V1_1::generated_tests::reshape_quant8_weights_as_inputs {

Model createTestModel() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1, 1, 3, 3},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {9},
            .numberOfConsumers = 0,
            .scale = 1.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::RESHAPE,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::reshape_quant8_weights_as_inputs
namespace android::hardware::neuralnetworks::V1_1::generated_tests::reshape_quant8_weights_as_inputs {

Model createTestModel_all_inputs_as_internal() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1, 1, 3, 3},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {9},
            .numberOfConsumers = 0,
            .scale = 1.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1, 1, 3, 3},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 1, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {3, 4, 5},
            .outputs = {0},
        },
        {
            .type = OperationType::RESHAPE,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {1, 3};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::reshape_quant8_weights_as_inputs
