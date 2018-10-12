// clang-format off
// Generated file (from: channel_shuffle.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 6});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 6});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 6});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 6}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type3);
  auto param = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

inline bool is_ignored_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 6});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 6}, 0.25f, 128);
  // Phase 1, operands
  auto op11 = model->addOperand(&type2);
  auto param1 = model->addOperand(&type1);
  auto op21 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op11, param1}, {op21});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op21});
  assert(model->isValid());
}

inline bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 6});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 6}, 0.25f, 128);
  // Phase 1, operands
  auto op11 = model->addOperand(&type2);
  auto param1 = model->addOperand(&type1);
  auto op21 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op11, param1}, {op21});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op21});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 6});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 6}, 0.25f, 128);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  // Phase 1, operands
  auto op11 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type1);
  auto op21 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op11, param1}, {op21});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op21});
  assert(model->isValid());
}

inline bool is_ignored_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

