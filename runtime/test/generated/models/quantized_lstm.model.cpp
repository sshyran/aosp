// clang-format off
// Generated file (from: quantized_lstm.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.0078125f, 128);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type4(Type::TENSOR_QUANT16_SYMM, {2, 4}, 0.00048828125f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 4}, 0.0078125f, 128);
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto inputToInputWeights = model->addOperand(&type1);
  auto inputToForgetWeights = model->addOperand(&type1);
  auto inputToCellWeights = model->addOperand(&type1);
  auto inputToOutputWeights = model->addOperand(&type1);
  auto recurrentToInputWeights = model->addOperand(&type2);
  auto recurrentToForgetWeights = model->addOperand(&type2);
  auto recurrentToCellWeights = model->addOperand(&type2);
  auto recurrentToOutputWeights = model->addOperand(&type2);
  auto inputGateBias = model->addOperand(&type3);
  auto forgetGateBias = model->addOperand(&type3);
  auto cellGateBias = model->addOperand(&type3);
  auto outputGateBias = model->addOperand(&type3);
  auto prevCellState = model->addOperand(&type4);
  auto prevOutput = model->addOperand(&type5);
  auto cellStateOut = model->addOperand(&type4);
  auto output = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input, inputToInputWeights, inputToForgetWeights, inputToCellWeights, inputToOutputWeights, recurrentToInputWeights, recurrentToForgetWeights, recurrentToCellWeights, recurrentToOutputWeights, inputGateBias, forgetGateBias, cellGateBias, outputGateBias, prevCellState, prevOutput}, {cellStateOut, output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, inputToInputWeights, inputToForgetWeights, inputToCellWeights, inputToOutputWeights, recurrentToInputWeights, recurrentToForgetWeights, recurrentToCellWeights, recurrentToOutputWeights, inputGateBias, forgetGateBias, cellGateBias, outputGateBias, prevCellState, prevOutput},
    {cellStateOut, output});
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.0078125f, 128);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type4(Type::TENSOR_QUANT16_SYMM, {2, 4}, 0.00048828125f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 4}, 0.0078125f, 128);
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto inputToInputWeights = model->addOperand(&type1);
  auto inputToForgetWeights = model->addOperand(&type1);
  auto inputToCellWeights = model->addOperand(&type1);
  auto inputToOutputWeights = model->addOperand(&type1);
  auto recurrentToInputWeights = model->addOperand(&type2);
  auto recurrentToForgetWeights = model->addOperand(&type2);
  auto recurrentToCellWeights = model->addOperand(&type2);
  auto recurrentToOutputWeights = model->addOperand(&type2);
  auto inputGateBias = model->addOperand(&type3);
  auto forgetGateBias = model->addOperand(&type3);
  auto cellGateBias = model->addOperand(&type3);
  auto outputGateBias = model->addOperand(&type3);
  auto prevCellState = model->addOperand(&type4);
  auto prevOutput = model->addOperand(&type5);
  auto cellStateOut = model->addOperand(&type4);
  auto output = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input, inputToInputWeights, inputToForgetWeights, inputToCellWeights, inputToOutputWeights, recurrentToInputWeights, recurrentToForgetWeights, recurrentToCellWeights, recurrentToOutputWeights, inputGateBias, forgetGateBias, cellGateBias, outputGateBias, prevCellState, prevOutput}, {cellStateOut, output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, inputToInputWeights, inputToForgetWeights, inputToCellWeights, inputToOutputWeights, recurrentToInputWeights, recurrentToForgetWeights, recurrentToCellWeights, recurrentToOutputWeights, inputGateBias, forgetGateBias, cellGateBias, outputGateBias, prevCellState, prevOutput},
    {cellStateOut, output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

