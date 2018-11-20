// clang-format off
// Generated file (from: sub_float16.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type1(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, param}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto output0 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, param}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

