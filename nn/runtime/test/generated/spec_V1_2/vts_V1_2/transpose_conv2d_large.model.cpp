// Generated from transpose_conv2d_large.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_quant8() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {16, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 16},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {16},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 64},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 80, .length = 16},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 96, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 100, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 104, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 108, .length = 4},
        },
        {
            .type = OperandType::BOOL,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 112, .length = 1},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 32, 32, 16},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::TRANSPOSE_CONV_2D,
            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8},
            .outputs = {9},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {9};
    std::vector<uint8_t> operandValues = {
      2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 16, 0, 0, 0, 1, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large
namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_quant8_dynamic_output_shape() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {16, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 16},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {16},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 64},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 80, .length = 16},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 96, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 100, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 104, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 108, .length = 4},
        },
        {
            .type = OperandType::BOOL,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 112, .length = 1},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::TRANSPOSE_CONV_2D,
            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8},
            .outputs = {9},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {9};
    std::vector<uint8_t> operandValues = {
      2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 16, 0, 0, 0, 1, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large
namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_quant8_all_inputs_as_internal() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {16, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 16},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {16},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 64},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 80, .length = 16},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 96, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 100, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 104, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 108, .length = 4},
        },
        {
            .type = OperandType::BOOL,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 112, .length = 1},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 32, 32, 16},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
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
            .location = {.poolIndex = 0, .offset = 113, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 114, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {10, 11, 12},
            .outputs = {0},
        },
        {
            .type = OperationType::TRANSPOSE_CONV_2D,
            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8},
            .outputs = {9},
        }
    };

    const std::vector<uint32_t> inputIndexes = {10};
    const std::vector<uint32_t> outputIndexes = {9};
    std::vector<uint8_t> operandValues = {
      2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 16, 0, 0, 0, 1, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large
namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {16, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 16},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {16},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 64},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 80, .length = 16},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 96, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 100, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 104, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 108, .length = 4},
        },
        {
            .type = OperandType::BOOL,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 112, .length = 1},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
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
            .location = {.poolIndex = 0, .offset = 113, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 114, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {10, 11, 12},
            .outputs = {0},
        },
        {
            .type = OperationType::TRANSPOSE_CONV_2D,
            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8},
            .outputs = {9},
        }
    };

    const std::vector<uint32_t> inputIndexes = {10};
    const std::vector<uint32_t> outputIndexes = {9};
    std::vector<uint8_t> operandValues = {
      2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 16, 0, 0, 0, 1, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large
namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_quant8_all_tensors_as_inputs() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {16, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {16},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 16},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 20, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 24, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 28, .length = 4},
        },
        {
            .type = OperandType::BOOL,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 32, .length = 1},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 32, 32, 16},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::TRANSPOSE_CONV_2D,
            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8},
            .outputs = {9},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1, 2};
    const std::vector<uint32_t> outputIndexes = {9};
    std::vector<uint8_t> operandValues = {
      25, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 16, 0, 0, 0, 1, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_quant8_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large
namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_quant8_all_tensors_as_inputs_dynamic_output_shape() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {16, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {16},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 16},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 20, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 24, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 28, .length = 4},
        },
        {
            .type = OperandType::BOOL,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 32, .length = 1},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::TRANSPOSE_CONV_2D,
            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8},
            .outputs = {9},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1, 2};
    const std::vector<uint32_t> outputIndexes = {9};
    std::vector<uint8_t> operandValues = {
      25, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 16, 0, 0, 0, 1, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large
namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {16, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {16},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 16},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 20, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 24, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 28, .length = 4},
        },
        {
            .type = OperandType::BOOL,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 32, .length = 1},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 32, 32, 16},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
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
            .location = {.poolIndex = 0, .offset = 33, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 34, .length = 4},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {16, 1, 1, 1},
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
            .location = {.poolIndex = 0, .offset = 38, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 39, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {10, 11, 12},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {13, 14, 15},
            .outputs = {1},
        },
        {
            .type = OperationType::TRANSPOSE_CONV_2D,
            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8},
            .outputs = {9},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2, 10, 13};
    const std::vector<uint32_t> outputIndexes = {9};
    std::vector<uint8_t> operandValues = {
      25, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 16, 0, 0, 0, 1, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large
namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {16, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {16},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 16},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 20, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 24, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 28, .length = 4},
        },
        {
            .type = OperandType::BOOL,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 32, .length = 1},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
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
            .location = {.poolIndex = 0, .offset = 33, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 34, .length = 4},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {16, 1, 1, 1},
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
            .location = {.poolIndex = 0, .offset = 38, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 39, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {10, 11, 12},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {13, 14, 15},
            .outputs = {1},
        },
        {
            .type = OperationType::TRANSPOSE_CONV_2D,
            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8},
            .outputs = {9},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2, 10, 13};
    const std::vector<uint32_t> outputIndexes = {9};
    std::vector<uint8_t> operandValues = {
      25, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 16, 0, 0, 0, 1, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large
namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_channelQuant8() {
    Operand::ExtraParams extraParams1;
    extraParams1.channelQuant(SymmPerChannelQuantParams{.scales={0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f}, .channelDim=0});
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL,
            .dimensions = {16, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 16},
            .extraParams = std::move(extraParams1),
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {16},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 64},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 80, .length = 16},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 96, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 100, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 104, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 108, .length = 4},
        },
        {
            .type = OperandType::BOOL,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 112, .length = 1},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 32, 32, 16},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 80,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::TRANSPOSE_CONV_2D,
            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8},
            .outputs = {9},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {9};
    std::vector<uint8_t> operandValues = {
      2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 16, 0, 0, 0, 1, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_channelQuant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large
namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_channelQuant8_dynamic_output_shape() {
    Operand::ExtraParams extraParams1;
    extraParams1.channelQuant(SymmPerChannelQuantParams{.scales={0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f}, .channelDim=0});
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL,
            .dimensions = {16, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 16},
            .extraParams = std::move(extraParams1),
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {16},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 64},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 80, .length = 16},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 96, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 100, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 104, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 108, .length = 4},
        },
        {
            .type = OperandType::BOOL,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 112, .length = 1},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 80,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::TRANSPOSE_CONV_2D,
            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8},
            .outputs = {9},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {9};
    std::vector<uint8_t> operandValues = {
      2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 16, 0, 0, 0, 1, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_channelQuant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large
namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_channelQuant8_all_inputs_as_internal() {
    Operand::ExtraParams extraParams1;
    extraParams1.channelQuant(SymmPerChannelQuantParams{.scales={0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f}, .channelDim=0});
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL,
            .dimensions = {16, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 16},
            .extraParams = std::move(extraParams1),
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {16},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 64},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 80, .length = 16},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 96, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 100, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 104, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 108, .length = 4},
        },
        {
            .type = OperandType::BOOL,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 112, .length = 1},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 32, 32, 16},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 80,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 113, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 114, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {10, 11, 12},
            .outputs = {0},
        },
        {
            .type = OperationType::TRANSPOSE_CONV_2D,
            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8},
            .outputs = {9},
        }
    };

    const std::vector<uint32_t> inputIndexes = {10};
    const std::vector<uint32_t> outputIndexes = {9};
    std::vector<uint8_t> operandValues = {
      2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 16, 0, 0, 0, 1, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0
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

bool is_ignored_channelQuant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large
namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_channelQuant8_all_inputs_as_internal_dynamic_output_shape() {
    Operand::ExtraParams extraParams1;
    extraParams1.channelQuant(SymmPerChannelQuantParams{.scales={0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f}, .channelDim=0});
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL,
            .dimensions = {16, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 16},
            .extraParams = std::move(extraParams1),
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {16},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 64},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 80, .length = 16},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 96, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 100, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 104, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 108, .length = 4},
        },
        {
            .type = OperandType::BOOL,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 112, .length = 1},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 80,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 113, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 114, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {10, 11, 12},
            .outputs = {0},
        },
        {
            .type = OperationType::TRANSPOSE_CONV_2D,
            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8},
            .outputs = {9},
        }
    };

    const std::vector<uint32_t> inputIndexes = {10};
    const std::vector<uint32_t> outputIndexes = {9};
    std::vector<uint8_t> operandValues = {
      2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 16, 0, 0, 0, 1, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0
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

bool is_ignored_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large
namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_channelQuant8_all_tensors_as_inputs() {
    Operand::ExtraParams extraParams1;
    extraParams1.channelQuant(SymmPerChannelQuantParams{.scales={0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f}, .channelDim=0});
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL,
            .dimensions = {16, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
            .extraParams = std::move(extraParams1),
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {16},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 16},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 20, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 24, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 28, .length = 4},
        },
        {
            .type = OperandType::BOOL,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 32, .length = 1},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 32, 32, 16},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 80,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::TRANSPOSE_CONV_2D,
            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8},
            .outputs = {9},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1, 2};
    const std::vector<uint32_t> outputIndexes = {9};
    std::vector<uint8_t> operandValues = {
      25, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 16, 0, 0, 0, 1, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_channelQuant8_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large
namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_channelQuant8_all_tensors_as_inputs_dynamic_output_shape() {
    Operand::ExtraParams extraParams1;
    extraParams1.channelQuant(SymmPerChannelQuantParams{.scales={0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f}, .channelDim=0});
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL,
            .dimensions = {16, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
            .extraParams = std::move(extraParams1),
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {16},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 16},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 20, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 24, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 28, .length = 4},
        },
        {
            .type = OperandType::BOOL,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 32, .length = 1},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 80,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::TRANSPOSE_CONV_2D,
            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8},
            .outputs = {9},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1, 2};
    const std::vector<uint32_t> outputIndexes = {9};
    std::vector<uint8_t> operandValues = {
      25, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 16, 0, 0, 0, 1, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large
namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal() {
    Operand::ExtraParams extraParams1;
    extraParams1.channelQuant(SymmPerChannelQuantParams{.scales={0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f}, .channelDim=0});
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL,
            .dimensions = {16, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
            .extraParams = std::move(extraParams1),
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {16},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 16},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 20, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 24, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 28, .length = 4},
        },
        {
            .type = OperandType::BOOL,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 32, .length = 1},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 32, 32, 16},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 80,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 33, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 34, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {10, 11, 12},
            .outputs = {0},
        },
        {
            .type = OperationType::TRANSPOSE_CONV_2D,
            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8},
            .outputs = {9},
        }
    };

    const std::vector<uint32_t> inputIndexes = {1, 2, 10};
    const std::vector<uint32_t> outputIndexes = {9};
    std::vector<uint8_t> operandValues = {
      25, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 16, 0, 0, 0, 1, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0
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

bool is_ignored_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large
namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape() {
    Operand::ExtraParams extraParams1;
    extraParams1.channelQuant(SymmPerChannelQuantParams{.scales={0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f}, .channelDim=0});
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_SYMM_PER_CHANNEL,
            .dimensions = {16, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
            .extraParams = std::move(extraParams1),
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {16},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 16},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 20, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 24, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 28, .length = 4},
        },
        {
            .type = OperandType::BOOL,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 32, .length = 1},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 80,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {25, 1, 1, 1},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 33, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 34, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {10, 11, 12},
            .outputs = {0},
        },
        {
            .type = OperationType::TRANSPOSE_CONV_2D,
            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8},
            .outputs = {9},
        }
    };

    const std::vector<uint32_t> inputIndexes = {1, 2, 10};
    const std::vector<uint32_t> outputIndexes = {9};
    std::vector<uint8_t> operandValues = {
      25, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 16, 0, 0, 0, 1, 0, 0, 0, 32, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0
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

bool is_ignored_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large
