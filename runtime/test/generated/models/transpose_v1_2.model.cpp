// clang-format off
// Generated file (from: transpose_v1_2.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::TENSOR_INT32, {0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto perms = model->addOperand(&type1);
  auto output = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_TRANSPOSE, {input, perms}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, perms},
    {output});
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::TENSOR_INT32, {0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto perms = model->addOperand(&type1);
  auto output = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_TRANSPOSE, {input, perms}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, perms},
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
  OperandType type1(Type::TENSOR_INT32, {0});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto input = model->addOperand(&type2);
  auto perms = model->addOperand(&type1);
  auto output = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_TRANSPOSE, {input, perms}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, perms},
    {output});
  assert(model->isValid());
}

inline bool is_ignored_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::TENSOR_INT32, {0});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto perms = model->addOperand(&type1);
  auto output = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_TRANSPOSE, {input, perms}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, perms},
    {output});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::TENSOR_INT32, {0});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto perms = model->addOperand(&type1);
  auto output = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_TRANSPOSE, {input, perms}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, perms},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape_quant8(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {0});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.5f, 0);
  // Phase 1, operands
  auto input = model->addOperand(&type2);
  auto perms = model->addOperand(&type1);
  auto output = model->addOperand(&type4);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_TRANSPOSE, {input, perms}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, perms},
    {output});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

