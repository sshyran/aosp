// clang-format off
// Generated file (from: quantized_lstm.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.0078125f, 128);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {2, 4}, 0.0078125f, 128);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {16, 6}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {16}, 3.1876640625e-05f, 0);
  OperandType type4(Type::TENSOR_QUANT16_SYMM, {2, 4}, 0.00048828125f, 0);
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto prevOutput = model->addOperand(&type1);
  auto weights = model->addOperand(&type2);
  auto bias = model->addOperand(&type3);
  auto prevCellState = model->addOperand(&type4);
  auto cellStateOut = model->addOperand(&type4);
  auto output = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input, prevOutput, weights, bias, prevCellState}, {cellStateOut, output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, prevOutput, weights, bias, prevCellState},
    {cellStateOut, output});
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

