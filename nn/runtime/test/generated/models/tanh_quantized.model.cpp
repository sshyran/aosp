// clang-format off
// Generated file (from: tanh_quantized.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {256}, 0.05f, 100);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {256}, 0.0078125f, 128);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type1);
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

