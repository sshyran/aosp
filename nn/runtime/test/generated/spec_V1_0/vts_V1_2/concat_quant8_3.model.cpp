// Generated from concat_quant8_3.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_quant8_3 {

Model createTestModel() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {400, 60},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {400, 30},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {400, 90},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CONCATENATION,
            .inputs = {0, 1, 2},
            .outputs = {3},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {3};
    std::vector<uint8_t> operandValues = {
      1, 0, 0, 0
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

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_quant8_3
namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_quant8_3 {

Model createTestModel_dynamic_output_shape() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {400, 60},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {400, 30},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CONCATENATION,
            .inputs = {0, 1, 2},
            .outputs = {3},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {3};
    std::vector<uint8_t> operandValues = {
      1, 0, 0, 0
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

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_quant8_3
namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_quant8_3 {

Model createTestModel_all_inputs_as_internal() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {400, 60},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {400, 30},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {400, 90},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {400, 60},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 5, .length = 4},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {400, 30},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 9, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 10, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {4, 5, 6},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {7, 8, 9},
            .outputs = {1},
        },
        {
            .type = OperationType::CONCATENATION,
            .inputs = {0, 1, 2},
            .outputs = {3},
        }
    };

    const std::vector<uint32_t> inputIndexes = {4, 7};
    const std::vector<uint32_t> outputIndexes = {3};
    std::vector<uint8_t> operandValues = {
      1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_quant8_3
namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_quant8_3 {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {400, 60},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {400, 30},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {400, 60},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 5, .length = 4},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {400, 30},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 9, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 10, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {4, 5, 6},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {7, 8, 9},
            .outputs = {1},
        },
        {
            .type = OperationType::CONCATENATION,
            .inputs = {0, 1, 2},
            .outputs = {3},
        }
    };

    const std::vector<uint32_t> inputIndexes = {4, 7};
    const std::vector<uint32_t> outputIndexes = {3};
    std::vector<uint8_t> operandValues = {
      1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_quant8_3
