// clang-format off
// Generated file (from: tanh_float16.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_TANH, {input0}, {output0});
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

