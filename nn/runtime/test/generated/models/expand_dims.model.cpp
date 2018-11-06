// clang-format off
// Generated file (from: expand_dims.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto param = model->addOperand(&type4);
  auto output = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EXPAND_DIMS, {input0, param}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output});
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto param = model->addOperand(&type4);
  auto output = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EXPAND_DIMS, {input0, param}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8(Model *model) {
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2}, 0.5f, 127);
  // Phase 1, operands
  auto input0 = model->addOperand(&type5);
  auto param = model->addOperand(&type4);
  auto output = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EXPAND_DIMS, {input0, param}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output});
  assert(model->isValid());
}

inline bool is_ignored_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_int32(Model *model) {
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_INT32, {2, 2});
  OperandType type8(Type::TENSOR_INT32, {1, 2, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type7);
  auto param = model->addOperand(&type4);
  auto output = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EXPAND_DIMS, {input0, param}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output});
  assert(model->isValid());
}

inline bool is_ignored_int32(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 1, 2});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto param1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EXPAND_DIMS, {input0, param1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output1});
  assert(model->isValid());
}

inline bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 1, 2});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto param1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EXPAND_DIMS, {input0, param1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_2(Model *model) {
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.5f, 127);
  // Phase 1, operands
  auto input0 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EXPAND_DIMS, {input0, param1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output1});
  assert(model->isValid());
}

inline bool is_ignored_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_int32_2(Model *model) {
  OperandType type10(Type::TENSOR_INT32, {2, 1, 2});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_INT32, {2, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type7);
  auto param1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param1_init[] = {1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EXPAND_DIMS, {input0, param1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output1});
  assert(model->isValid());
}

inline bool is_ignored_int32_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 2, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto param2 = model->addOperand(&type4);
  auto output2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EXPAND_DIMS, {input0, param2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output2});
  assert(model->isValid());
}

inline bool is_ignored_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 2, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto param2 = model->addOperand(&type4);
  auto output2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EXPAND_DIMS, {input0, param2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_3(Model *model) {
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 1}, 0.5f, 127);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  // Phase 1, operands
  auto input0 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type4);
  auto output2 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EXPAND_DIMS, {input0, param2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_int32_3(Model *model) {
  OperandType type12(Type::TENSOR_INT32, {2, 2, 1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_INT32, {2, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto output2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EXPAND_DIMS, {input0, param2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output2});
  assert(model->isValid());
}

inline bool is_ignored_int32_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 2, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto param3 = model->addOperand(&type4);
  auto output2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EXPAND_DIMS, {input0, param3}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output2});
  assert(model->isValid());
}

inline bool is_ignored_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 2, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto param3 = model->addOperand(&type4);
  auto output2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EXPAND_DIMS, {input0, param3}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_4(Model *model) {
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {2, 2, 1}, 0.5f, 127);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  // Phase 1, operands
  auto input0 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type4);
  auto output2 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EXPAND_DIMS, {input0, param3}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output2});
  assert(model->isValid());
}

inline bool is_ignored_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_int32_4(Model *model) {
  OperandType type12(Type::TENSOR_INT32, {2, 2, 1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_INT32, {2, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type4);
  auto output2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_EXPAND_DIMS, {input0, param3}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output2});
  assert(model->isValid());
}

inline bool is_ignored_int32_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

