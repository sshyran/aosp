// clang-format off
// Generated file (from: pad_v2_1_float_relaxed.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 3, 1});
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 4, 7, 1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto pad_value = model->addOperand(&type2);
  auto output0 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t paddings_init[] = {0, 0, 0, 2, 1, 3, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 8);
  static float pad_value_init[] = {9.3f};
  model->setOperandValue(pad_value, pad_value_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_PAD_V2, {input0, paddings, pad_value}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

