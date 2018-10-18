// clang-format off
// Generated file (from: pow.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto base = model->addOperand(&type0);
  auto exponent = model->addOperand(&type1);
  auto output = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_POW, {base, exponent}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {base, exponent},
    {output});
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto base = model->addOperand(&type0);
  auto exponent = model->addOperand(&type1);
  auto output = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_POW, {base, exponent}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {base, exponent},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2});
  // Phase 1, operands
  auto base = model->addOperand(&type0);
  auto exponent1 = model->addOperand(&type2);
  auto output1 = model->addOperand(&type4);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_POW, {base, exponent1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {base, exponent1},
    {output1});
  assert(model->isValid());
}

inline bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 2});
  // Phase 1, operands
  auto base = model->addOperand(&type0);
  auto exponent1 = model->addOperand(&type2);
  auto output1 = model->addOperand(&type4);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_POW, {base, exponent1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {base, exponent1},
    {output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {3, 1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {3, 2, 2});
  // Phase 1, operands
  auto base = model->addOperand(&type0);
  auto exponent2 = model->addOperand(&type3);
  auto output2 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_POW, {base, exponent2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {base, exponent2},
    {output2});
  assert(model->isValid());
}

inline bool is_ignored_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {3, 1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {3, 2, 2});
  // Phase 1, operands
  auto base = model->addOperand(&type0);
  auto exponent2 = model->addOperand(&type3);
  auto output2 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_POW, {base, exponent2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {base, exponent2},
    {output2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

