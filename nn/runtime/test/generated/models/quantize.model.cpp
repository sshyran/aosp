// clang-format off
// Generated file (from: quantize.mod.py). Do not edit
void CreateModel_quant8(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {300}, 1.0f, 0);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

inline bool is_ignored_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {300}, 1.0f, 1);
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto output01 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

inline bool is_ignored_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {300}, 0.01f, 120);
  // Phase 1, operands
  auto input02 = model->addOperand(&type0);
  auto output02 = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input02}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

inline bool is_ignored_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {300}, 10.0f, 120);
  // Phase 1, operands
  auto input03 = model->addOperand(&type0);
  auto output03 = model->addOperand(&type4);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input03}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

inline bool is_ignored_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

