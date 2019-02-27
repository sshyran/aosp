// clang-format off
// Generated file (from: dequantize_1_2.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {10}, 0.5f, 127);
  OperandType type1(Type::TENSOR_FLOAT32, {10});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {10}, 0.5f, 127);
  OperandType type1(Type::TENSOR_FLOAT32, {10});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_float16(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {10}, 0.5f, 127);
  OperandType type11(Type::TENSOR_FLOAT16, {10});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type11);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

inline bool is_ignored_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {10}, 0.5f, 127);
  OperandType type12(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {10}, 0.5f, 127);
  OperandType type12(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_float16(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {10}, 0.5f, 127);
  OperandType type13(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_2(Model *model) {
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.5f, 127);
  OperandType type3(Type::TENSOR_FLOAT32, {2, 5});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

inline bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_2(Model *model) {
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.5f, 127);
  OperandType type3(Type::TENSOR_FLOAT32, {2, 5});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_float16_2(Model *model) {
  OperandType type14(Type::TENSOR_FLOAT16, {2, 5});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.5f, 127);
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type14);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

inline bool is_ignored_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_2(Model *model) {
  OperandType type15(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.5f, 127);
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type15);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_2(Model *model) {
  OperandType type15(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.5f, 127);
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type15);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_float16_2(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.5f, 127);
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type16);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_3(Model *model) {
  OperandType type4(Type::TENSOR_QUANT8_SYMM, {2, 2, 2}, 0.5f, 0);
  OperandType type5(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input02}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

inline bool is_ignored_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_3(Model *model) {
  OperandType type4(Type::TENSOR_QUANT8_SYMM, {2, 2, 2}, 0.5f, 0);
  OperandType type5(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input02}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_float16_3(Model *model) {
  OperandType type17(Type::TENSOR_FLOAT16, {2, 2, 2});
  OperandType type4(Type::TENSOR_QUANT8_SYMM, {2, 2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type17);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input02}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

inline bool is_ignored_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_3(Model *model) {
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type4(Type::TENSOR_QUANT8_SYMM, {2, 2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type18);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input02}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_3(Model *model) {
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type4(Type::TENSOR_QUANT8_SYMM, {2, 2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type18);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input02}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_float16_3(Model *model) {
  OperandType type19(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type4(Type::TENSOR_QUANT8_SYMM, {2, 2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type19);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input02}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_4(Model *model) {
  OperandType type6(Type::TENSOR_QUANT8_SYMM, {2, 1, 2, 2}, 0.5f, 0);
  OperandType type7(Type::TENSOR_FLOAT32, {2, 1, 2, 2});
  // Phase 1, operands
  auto input03 = model->addOperand(&type6);
  auto output03 = model->addOperand(&type7);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input03}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

inline bool is_ignored_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_4(Model *model) {
  OperandType type6(Type::TENSOR_QUANT8_SYMM, {2, 1, 2, 2}, 0.5f, 0);
  OperandType type7(Type::TENSOR_FLOAT32, {2, 1, 2, 2});
  // Phase 1, operands
  auto input03 = model->addOperand(&type6);
  auto output03 = model->addOperand(&type7);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input03}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_float16_4(Model *model) {
  OperandType type20(Type::TENSOR_FLOAT16, {2, 1, 2, 2});
  OperandType type6(Type::TENSOR_QUANT8_SYMM, {2, 1, 2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto input03 = model->addOperand(&type6);
  auto output03 = model->addOperand(&type20);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input03}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

inline bool is_ignored_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_4(Model *model) {
  OperandType type21(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type6(Type::TENSOR_QUANT8_SYMM, {2, 1, 2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto input03 = model->addOperand(&type6);
  auto output03 = model->addOperand(&type21);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input03}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_4(Model *model) {
  OperandType type21(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type6(Type::TENSOR_QUANT8_SYMM, {2, 1, 2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto input03 = model->addOperand(&type6);
  auto output03 = model->addOperand(&type21);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input03}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_float16_4(Model *model) {
  OperandType type22(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type6(Type::TENSOR_QUANT8_SYMM, {2, 1, 2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto input03 = model->addOperand(&type6);
  auto output03 = model->addOperand(&type22);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input03}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_5(Model *model) {
  OperandType type8(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, 0.0f, 0, SymmPerChannelQuantParams({2.0f, 0.5f},0));
  OperandType type9(Type::TENSOR_FLOAT32, {2, 3, 4});
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto output04 = model->addOperand(&type9);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input04}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  assert(model->isValid());
}

inline bool is_ignored_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_5(Model *model) {
  OperandType type8(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, 0.0f, 0, SymmPerChannelQuantParams({2.0f, 0.5f},0));
  OperandType type9(Type::TENSOR_FLOAT32, {2, 3, 4});
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto output04 = model->addOperand(&type9);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input04}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_float16_5(Model *model) {
  OperandType type23(Type::TENSOR_FLOAT16, {2, 3, 4});
  OperandType type8(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, 0.0f, 0, SymmPerChannelQuantParams({2.0f, 0.5f},0));
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto output04 = model->addOperand(&type23);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input04}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  assert(model->isValid());
}

inline bool is_ignored_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_5(Model *model) {
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type8(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, 0.0f, 0, SymmPerChannelQuantParams({2.0f, 0.5f},0));
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto output04 = model->addOperand(&type18);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input04}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_5(Model *model) {
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type8(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, 0.0f, 0, SymmPerChannelQuantParams({2.0f, 0.5f},0));
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto output04 = model->addOperand(&type18);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input04}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_float16_5(Model *model) {
  OperandType type19(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type8(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, 0.0f, 0, SymmPerChannelQuantParams({2.0f, 0.5f},0));
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto output04 = model->addOperand(&type19);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input04}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_6(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, 0.0f, 0, SymmPerChannelQuantParams({2.0f, 1.0f, 0.5f},1));
  OperandType type9(Type::TENSOR_FLOAT32, {2, 3, 4});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto output05 = model->addOperand(&type9);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  assert(model->isValid());
}

inline bool is_ignored_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_6(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, 0.0f, 0, SymmPerChannelQuantParams({2.0f, 1.0f, 0.5f},1));
  OperandType type9(Type::TENSOR_FLOAT32, {2, 3, 4});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto output05 = model->addOperand(&type9);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_float16_6(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, 0.0f, 0, SymmPerChannelQuantParams({2.0f, 1.0f, 0.5f},1));
  OperandType type23(Type::TENSOR_FLOAT16, {2, 3, 4});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto output05 = model->addOperand(&type23);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  assert(model->isValid());
}

inline bool is_ignored_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_6(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, 0.0f, 0, SymmPerChannelQuantParams({2.0f, 1.0f, 0.5f},1));
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto output05 = model->addOperand(&type18);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed_6(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, 0.0f, 0, SymmPerChannelQuantParams({2.0f, 1.0f, 0.5f},1));
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto output05 = model->addOperand(&type18);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_float16_6(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, 0.0f, 0, SymmPerChannelQuantParams({2.0f, 1.0f, 0.5f},1));
  OperandType type19(Type::TENSOR_FLOAT16, {0, 0, 0});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto output05 = model->addOperand(&type19);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

