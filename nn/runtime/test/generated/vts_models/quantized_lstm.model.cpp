// clang-format off
// Generated file (from: quantized_lstm.mod.py). Do not edit
// Create the model
Model createTestModel() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 2},
            .numberOfConsumers = 1,
            .scale = 0.0078125f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 2},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 2},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 2},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 2},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 4},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 4},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 4},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 4},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 3.1876640625e-05f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 3.1876640625e-05f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 3.1876640625e-05f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 3.1876640625e-05f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT16_SYMM,
            .dimensions = {2, 4},
            .numberOfConsumers = 1,
            .scale = 0.00048828125f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 4},
            .numberOfConsumers = 1,
            .scale = 0.0078125f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT16_SYMM,
            .dimensions = {2, 4},
            .numberOfConsumers = 0,
            .scale = 0.00048828125f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 4},
            .numberOfConsumers = 0,
            .scale = 0.0078125f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::QUANTIZED_16BIT_LSTM,
            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14},
            .outputs = {15, 16},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    const std::vector<uint32_t> outputIndexes = {15, 16};
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

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_relaxed() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 2},
            .numberOfConsumers = 1,
            .scale = 0.0078125f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 2},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 2},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 2},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 2},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 4},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 4},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 4},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 4},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 3.1876640625e-05f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 3.1876640625e-05f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 3.1876640625e-05f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 3.1876640625e-05f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT16_SYMM,
            .dimensions = {2, 4},
            .numberOfConsumers = 1,
            .scale = 0.00048828125f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 4},
            .numberOfConsumers = 1,
            .scale = 0.0078125f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT16_SYMM,
            .dimensions = {2, 4},
            .numberOfConsumers = 0,
            .scale = 0.00048828125f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 4},
            .numberOfConsumers = 0,
            .scale = 0.0078125f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::QUANTIZED_16BIT_LSTM,
            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14},
            .outputs = {15, 16},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    const std::vector<uint32_t> outputIndexes = {15, 16};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_dynamic_output_shape() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 2},
            .numberOfConsumers = 1,
            .scale = 0.0078125f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 2},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 2},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 2},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 2},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 4},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 4},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 4},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 4},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 3.1876640625e-05f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 3.1876640625e-05f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 3.1876640625e-05f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 3.1876640625e-05f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT16_SYMM,
            .dimensions = {2, 4},
            .numberOfConsumers = 1,
            .scale = 0.00048828125f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 4},
            .numberOfConsumers = 1,
            .scale = 0.0078125f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT16_SYMM,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.00048828125f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0078125f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::QUANTIZED_16BIT_LSTM,
            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14},
            .outputs = {15, 16},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    const std::vector<uint32_t> outputIndexes = {15, 16};
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

inline bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_dynamic_output_shape_relaxed() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 2},
            .numberOfConsumers = 1,
            .scale = 0.0078125f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 2},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 2},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 2},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 2},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 4},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 4},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 4},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {4, 4},
            .numberOfConsumers = 1,
            .scale = 0.00408021f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 3.1876640625e-05f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 3.1876640625e-05f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 3.1876640625e-05f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {4},
            .numberOfConsumers = 1,
            .scale = 3.1876640625e-05f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT16_SYMM,
            .dimensions = {2, 4},
            .numberOfConsumers = 1,
            .scale = 0.00048828125f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 4},
            .numberOfConsumers = 1,
            .scale = 0.0078125f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT16_SYMM,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.00048828125f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0078125f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::QUANTIZED_16BIT_LSTM,
            .inputs = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14},
            .outputs = {15, 16},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    const std::vector<uint32_t> outputIndexes = {15, 16};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_dynamic_output_shape_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

