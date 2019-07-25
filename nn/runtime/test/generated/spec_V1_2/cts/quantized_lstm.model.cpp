// Generated from quantized_lstm.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::quantized_lstm {

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

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.0078125f, 128);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.0078125f, 128);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type4(Type::TENSOR_QUANT16_SYMM, {2, 4}, 0.00048828125f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 4}, 0.0078125f, 128);
  OperandType type9(Type::TENSOR_QUANT16_SYMM, {0, 0}, 0.00048828125f, 0);
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
  auto cellStateOut = model->addOperand(&type9);
  auto output = model->addOperand(&type10);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input, inputToInputWeights, inputToForgetWeights, inputToCellWeights, inputToOutputWeights, recurrentToInputWeights, recurrentToForgetWeights, recurrentToCellWeights, recurrentToOutputWeights, inputGateBias, forgetGateBias, cellGateBias, outputGateBias, prevCellState, prevOutput}, {cellStateOut, output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, inputToInputWeights, inputToForgetWeights, inputToCellWeights, inputToOutputWeights, recurrentToInputWeights, recurrentToForgetWeights, recurrentToCellWeights, recurrentToOutputWeights, inputGateBias, forgetGateBias, cellGateBias, outputGateBias, prevCellState, prevOutput},
    {cellStateOut, output});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.0078125f, 128);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.0078125f, 128);
  OperandType type12(Type::INT32, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.00408021f, 100);
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
  auto input_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type11);
  auto param = model->addOperand(&type12);
  auto inputToInputWeights_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type13);
  auto param1 = model->addOperand(&type12);
  auto inputToForgetWeights_tmp = model->addOperand(&type1);
  auto dummy2 = model->addOperand(&type13);
  auto param2 = model->addOperand(&type12);
  auto inputToCellWeights_tmp = model->addOperand(&type1);
  auto dummy3 = model->addOperand(&type13);
  auto param3 = model->addOperand(&type12);
  auto inputToOutputWeights_tmp = model->addOperand(&type1);
  auto dummy4 = model->addOperand(&type13);
  auto param4 = model->addOperand(&type12);
  auto recurrentToInputWeights_tmp = model->addOperand(&type2);
  auto dummy5 = model->addOperand(&type13);
  auto param5 = model->addOperand(&type12);
  auto recurrentToForgetWeights_tmp = model->addOperand(&type2);
  auto dummy6 = model->addOperand(&type13);
  auto param6 = model->addOperand(&type12);
  auto recurrentToCellWeights_tmp = model->addOperand(&type2);
  auto dummy7 = model->addOperand(&type13);
  auto param7 = model->addOperand(&type12);
  auto recurrentToOutputWeights_tmp = model->addOperand(&type2);
  auto dummy8 = model->addOperand(&type13);
  auto param8 = model->addOperand(&type12);
  auto prevOutput_tmp = model->addOperand(&type5);
  auto dummy9 = model->addOperand(&type11);
  auto param9 = model->addOperand(&type12);
  // Phase 2, operations
  static uint8_t dummy_init[] = {128};
  model->setOperandValue(dummy, dummy_init, sizeof(uint8_t) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static uint8_t dummy1_init[] = {100};
  model->setOperandValue(dummy1, dummy1_init, sizeof(uint8_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static uint8_t dummy2_init[] = {100};
  model->setOperandValue(dummy2, dummy2_init, sizeof(uint8_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static uint8_t dummy3_init[] = {100};
  model->setOperandValue(dummy3, dummy3_init, sizeof(uint8_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static uint8_t dummy4_init[] = {100};
  model->setOperandValue(dummy4, dummy4_init, sizeof(uint8_t) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static uint8_t dummy5_init[] = {100};
  model->setOperandValue(dummy5, dummy5_init, sizeof(uint8_t) * 1);
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static uint8_t dummy6_init[] = {100};
  model->setOperandValue(dummy6, dummy6_init, sizeof(uint8_t) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static uint8_t dummy7_init[] = {100};
  model->setOperandValue(dummy7, dummy7_init, sizeof(uint8_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static uint8_t dummy8_init[] = {100};
  model->setOperandValue(dummy8, dummy8_init, sizeof(uint8_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static uint8_t dummy9_init[] = {128};
  model->setOperandValue(dummy9, dummy9_init, sizeof(uint8_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy, param}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToInputWeights_tmp, dummy1, param1}, {inputToInputWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToForgetWeights_tmp, dummy2, param2}, {inputToForgetWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToCellWeights_tmp, dummy3, param3}, {inputToCellWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToOutputWeights_tmp, dummy4, param4}, {inputToOutputWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToInputWeights_tmp, dummy5, param5}, {recurrentToInputWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToForgetWeights_tmp, dummy6, param6}, {recurrentToForgetWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToCellWeights_tmp, dummy7, param7}, {recurrentToCellWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToOutputWeights_tmp, dummy8, param8}, {recurrentToOutputWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {prevOutput_tmp, dummy9, param9}, {prevOutput});
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input, inputToInputWeights, inputToForgetWeights, inputToCellWeights, inputToOutputWeights, recurrentToInputWeights, recurrentToForgetWeights, recurrentToCellWeights, recurrentToOutputWeights, inputGateBias, forgetGateBias, cellGateBias, outputGateBias, prevCellState, prevOutput}, {cellStateOut, output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {inputGateBias, forgetGateBias, cellGateBias, outputGateBias, prevCellState, input_tmp, inputToInputWeights_tmp, inputToForgetWeights_tmp, inputToCellWeights_tmp, inputToOutputWeights_tmp, recurrentToInputWeights_tmp, recurrentToForgetWeights_tmp, recurrentToCellWeights_tmp, recurrentToOutputWeights_tmp, prevOutput_tmp},
    {cellStateOut, output});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.0078125f, 128);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.0078125f, 128);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.0078125f, 128);
  OperandType type12(Type::INT32, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.00408021f, 100);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type4(Type::TENSOR_QUANT16_SYMM, {2, 4}, 0.00048828125f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 4}, 0.0078125f, 128);
  OperandType type9(Type::TENSOR_QUANT16_SYMM, {0, 0}, 0.00048828125f, 0);
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
  auto cellStateOut = model->addOperand(&type9);
  auto output = model->addOperand(&type10);
  auto input_tmp = model->addOperand(&type0);
  auto dummy10 = model->addOperand(&type11);
  auto param10 = model->addOperand(&type12);
  auto inputToInputWeights_tmp = model->addOperand(&type1);
  auto dummy11 = model->addOperand(&type13);
  auto param11 = model->addOperand(&type12);
  auto inputToForgetWeights_tmp = model->addOperand(&type1);
  auto dummy12 = model->addOperand(&type13);
  auto param12 = model->addOperand(&type12);
  auto inputToCellWeights_tmp = model->addOperand(&type1);
  auto dummy13 = model->addOperand(&type13);
  auto param13 = model->addOperand(&type12);
  auto inputToOutputWeights_tmp = model->addOperand(&type1);
  auto dummy14 = model->addOperand(&type13);
  auto param14 = model->addOperand(&type12);
  auto recurrentToInputWeights_tmp = model->addOperand(&type2);
  auto dummy15 = model->addOperand(&type13);
  auto param15 = model->addOperand(&type12);
  auto recurrentToForgetWeights_tmp = model->addOperand(&type2);
  auto dummy16 = model->addOperand(&type13);
  auto param16 = model->addOperand(&type12);
  auto recurrentToCellWeights_tmp = model->addOperand(&type2);
  auto dummy17 = model->addOperand(&type13);
  auto param17 = model->addOperand(&type12);
  auto recurrentToOutputWeights_tmp = model->addOperand(&type2);
  auto dummy18 = model->addOperand(&type13);
  auto param18 = model->addOperand(&type12);
  auto prevOutput_tmp = model->addOperand(&type5);
  auto dummy19 = model->addOperand(&type11);
  auto param19 = model->addOperand(&type12);
  // Phase 2, operations
  static uint8_t dummy10_init[] = {128};
  model->setOperandValue(dummy10, dummy10_init, sizeof(uint8_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static uint8_t dummy11_init[] = {100};
  model->setOperandValue(dummy11, dummy11_init, sizeof(uint8_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static uint8_t dummy12_init[] = {100};
  model->setOperandValue(dummy12, dummy12_init, sizeof(uint8_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static uint8_t dummy13_init[] = {100};
  model->setOperandValue(dummy13, dummy13_init, sizeof(uint8_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static uint8_t dummy14_init[] = {100};
  model->setOperandValue(dummy14, dummy14_init, sizeof(uint8_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static uint8_t dummy15_init[] = {100};
  model->setOperandValue(dummy15, dummy15_init, sizeof(uint8_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static uint8_t dummy16_init[] = {100};
  model->setOperandValue(dummy16, dummy16_init, sizeof(uint8_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static uint8_t dummy17_init[] = {100};
  model->setOperandValue(dummy17, dummy17_init, sizeof(uint8_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static uint8_t dummy18_init[] = {100};
  model->setOperandValue(dummy18, dummy18_init, sizeof(uint8_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static uint8_t dummy19_init[] = {128};
  model->setOperandValue(dummy19, dummy19_init, sizeof(uint8_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy10, param10}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToInputWeights_tmp, dummy11, param11}, {inputToInputWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToForgetWeights_tmp, dummy12, param12}, {inputToForgetWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToCellWeights_tmp, dummy13, param13}, {inputToCellWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToOutputWeights_tmp, dummy14, param14}, {inputToOutputWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToInputWeights_tmp, dummy15, param15}, {recurrentToInputWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToForgetWeights_tmp, dummy16, param16}, {recurrentToForgetWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToCellWeights_tmp, dummy17, param17}, {recurrentToCellWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToOutputWeights_tmp, dummy18, param18}, {recurrentToOutputWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {prevOutput_tmp, dummy19, param19}, {prevOutput});
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input, inputToInputWeights, inputToForgetWeights, inputToCellWeights, inputToOutputWeights, recurrentToInputWeights, recurrentToForgetWeights, recurrentToCellWeights, recurrentToOutputWeights, inputGateBias, forgetGateBias, cellGateBias, outputGateBias, prevCellState, prevOutput}, {cellStateOut, output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {inputGateBias, forgetGateBias, cellGateBias, outputGateBias, prevCellState, input_tmp, inputToInputWeights_tmp, inputToForgetWeights_tmp, inputToCellWeights_tmp, inputToOutputWeights_tmp, recurrentToInputWeights_tmp, recurrentToForgetWeights_tmp, recurrentToCellWeights_tmp, recurrentToOutputWeights_tmp, prevOutput_tmp},
    {cellStateOut, output});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

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

bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.0078125f, 128);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.0078125f, 128);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type4(Type::TENSOR_QUANT16_SYMM, {2, 4}, 0.00048828125f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 4}, 0.0078125f, 128);
  OperandType type9(Type::TENSOR_QUANT16_SYMM, {0, 0}, 0.00048828125f, 0);
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
  auto cellStateOut = model->addOperand(&type9);
  auto output = model->addOperand(&type10);
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

bool is_ignored_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.0078125f, 128);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.0078125f, 128);
  OperandType type12(Type::INT32, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.00408021f, 100);
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
  auto input_tmp = model->addOperand(&type0);
  auto dummy20 = model->addOperand(&type11);
  auto param20 = model->addOperand(&type12);
  auto inputToInputWeights_tmp = model->addOperand(&type1);
  auto dummy21 = model->addOperand(&type13);
  auto param21 = model->addOperand(&type12);
  auto inputToForgetWeights_tmp = model->addOperand(&type1);
  auto dummy22 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type12);
  auto inputToCellWeights_tmp = model->addOperand(&type1);
  auto dummy23 = model->addOperand(&type13);
  auto param23 = model->addOperand(&type12);
  auto inputToOutputWeights_tmp = model->addOperand(&type1);
  auto dummy24 = model->addOperand(&type13);
  auto param24 = model->addOperand(&type12);
  auto recurrentToInputWeights_tmp = model->addOperand(&type2);
  auto dummy25 = model->addOperand(&type13);
  auto param25 = model->addOperand(&type12);
  auto recurrentToForgetWeights_tmp = model->addOperand(&type2);
  auto dummy26 = model->addOperand(&type13);
  auto param26 = model->addOperand(&type12);
  auto recurrentToCellWeights_tmp = model->addOperand(&type2);
  auto dummy27 = model->addOperand(&type13);
  auto param27 = model->addOperand(&type12);
  auto recurrentToOutputWeights_tmp = model->addOperand(&type2);
  auto dummy28 = model->addOperand(&type13);
  auto param28 = model->addOperand(&type12);
  auto prevOutput_tmp = model->addOperand(&type5);
  auto dummy29 = model->addOperand(&type11);
  auto param29 = model->addOperand(&type12);
  // Phase 2, operations
  static uint8_t dummy20_init[] = {128};
  model->setOperandValue(dummy20, dummy20_init, sizeof(uint8_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static uint8_t dummy21_init[] = {100};
  model->setOperandValue(dummy21, dummy21_init, sizeof(uint8_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static uint8_t dummy22_init[] = {100};
  model->setOperandValue(dummy22, dummy22_init, sizeof(uint8_t) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static uint8_t dummy23_init[] = {100};
  model->setOperandValue(dummy23, dummy23_init, sizeof(uint8_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static uint8_t dummy24_init[] = {100};
  model->setOperandValue(dummy24, dummy24_init, sizeof(uint8_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static uint8_t dummy25_init[] = {100};
  model->setOperandValue(dummy25, dummy25_init, sizeof(uint8_t) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static uint8_t dummy26_init[] = {100};
  model->setOperandValue(dummy26, dummy26_init, sizeof(uint8_t) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static uint8_t dummy27_init[] = {100};
  model->setOperandValue(dummy27, dummy27_init, sizeof(uint8_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static uint8_t dummy28_init[] = {100};
  model->setOperandValue(dummy28, dummy28_init, sizeof(uint8_t) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static uint8_t dummy29_init[] = {128};
  model->setOperandValue(dummy29, dummy29_init, sizeof(uint8_t) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy20, param20}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToInputWeights_tmp, dummy21, param21}, {inputToInputWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToForgetWeights_tmp, dummy22, param22}, {inputToForgetWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToCellWeights_tmp, dummy23, param23}, {inputToCellWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToOutputWeights_tmp, dummy24, param24}, {inputToOutputWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToInputWeights_tmp, dummy25, param25}, {recurrentToInputWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToForgetWeights_tmp, dummy26, param26}, {recurrentToForgetWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToCellWeights_tmp, dummy27, param27}, {recurrentToCellWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToOutputWeights_tmp, dummy28, param28}, {recurrentToOutputWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {prevOutput_tmp, dummy29, param29}, {prevOutput});
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input, inputToInputWeights, inputToForgetWeights, inputToCellWeights, inputToOutputWeights, recurrentToInputWeights, recurrentToForgetWeights, recurrentToCellWeights, recurrentToOutputWeights, inputGateBias, forgetGateBias, cellGateBias, outputGateBias, prevCellState, prevOutput}, {cellStateOut, output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {inputGateBias, forgetGateBias, cellGateBias, outputGateBias, prevCellState, input_tmp, inputToInputWeights_tmp, inputToForgetWeights_tmp, inputToCellWeights_tmp, inputToOutputWeights_tmp, recurrentToInputWeights_tmp, recurrentToForgetWeights_tmp, recurrentToCellWeights_tmp, recurrentToOutputWeights_tmp, prevOutput_tmp},
    {cellStateOut, output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.0078125f, 128);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.0078125f, 128);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.0078125f, 128);
  OperandType type12(Type::INT32, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.00408021f, 100);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type4(Type::TENSOR_QUANT16_SYMM, {2, 4}, 0.00048828125f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 4}, 0.0078125f, 128);
  OperandType type9(Type::TENSOR_QUANT16_SYMM, {0, 0}, 0.00048828125f, 0);
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
  auto cellStateOut = model->addOperand(&type9);
  auto output = model->addOperand(&type10);
  auto input_tmp = model->addOperand(&type0);
  auto dummy30 = model->addOperand(&type11);
  auto param30 = model->addOperand(&type12);
  auto inputToInputWeights_tmp = model->addOperand(&type1);
  auto dummy31 = model->addOperand(&type13);
  auto param31 = model->addOperand(&type12);
  auto inputToForgetWeights_tmp = model->addOperand(&type1);
  auto dummy32 = model->addOperand(&type13);
  auto param32 = model->addOperand(&type12);
  auto inputToCellWeights_tmp = model->addOperand(&type1);
  auto dummy33 = model->addOperand(&type13);
  auto param33 = model->addOperand(&type12);
  auto inputToOutputWeights_tmp = model->addOperand(&type1);
  auto dummy34 = model->addOperand(&type13);
  auto param34 = model->addOperand(&type12);
  auto recurrentToInputWeights_tmp = model->addOperand(&type2);
  auto dummy35 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type12);
  auto recurrentToForgetWeights_tmp = model->addOperand(&type2);
  auto dummy36 = model->addOperand(&type13);
  auto param36 = model->addOperand(&type12);
  auto recurrentToCellWeights_tmp = model->addOperand(&type2);
  auto dummy37 = model->addOperand(&type13);
  auto param37 = model->addOperand(&type12);
  auto recurrentToOutputWeights_tmp = model->addOperand(&type2);
  auto dummy38 = model->addOperand(&type13);
  auto param38 = model->addOperand(&type12);
  auto prevOutput_tmp = model->addOperand(&type5);
  auto dummy39 = model->addOperand(&type11);
  auto param39 = model->addOperand(&type12);
  // Phase 2, operations
  static uint8_t dummy30_init[] = {128};
  model->setOperandValue(dummy30, dummy30_init, sizeof(uint8_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static uint8_t dummy31_init[] = {100};
  model->setOperandValue(dummy31, dummy31_init, sizeof(uint8_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static uint8_t dummy32_init[] = {100};
  model->setOperandValue(dummy32, dummy32_init, sizeof(uint8_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static uint8_t dummy33_init[] = {100};
  model->setOperandValue(dummy33, dummy33_init, sizeof(uint8_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static uint8_t dummy34_init[] = {100};
  model->setOperandValue(dummy34, dummy34_init, sizeof(uint8_t) * 1);
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static uint8_t dummy35_init[] = {100};
  model->setOperandValue(dummy35, dummy35_init, sizeof(uint8_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static uint8_t dummy36_init[] = {100};
  model->setOperandValue(dummy36, dummy36_init, sizeof(uint8_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static uint8_t dummy37_init[] = {100};
  model->setOperandValue(dummy37, dummy37_init, sizeof(uint8_t) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static uint8_t dummy38_init[] = {100};
  model->setOperandValue(dummy38, dummy38_init, sizeof(uint8_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static uint8_t dummy39_init[] = {128};
  model->setOperandValue(dummy39, dummy39_init, sizeof(uint8_t) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy30, param30}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToInputWeights_tmp, dummy31, param31}, {inputToInputWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToForgetWeights_tmp, dummy32, param32}, {inputToForgetWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToCellWeights_tmp, dummy33, param33}, {inputToCellWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToOutputWeights_tmp, dummy34, param34}, {inputToOutputWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToInputWeights_tmp, dummy35, param35}, {recurrentToInputWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToForgetWeights_tmp, dummy36, param36}, {recurrentToForgetWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToCellWeights_tmp, dummy37, param37}, {recurrentToCellWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToOutputWeights_tmp, dummy38, param38}, {recurrentToOutputWeights});
  model->addOperation(ANEURALNETWORKS_ADD, {prevOutput_tmp, dummy39, param39}, {prevOutput});
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input, inputToInputWeights, inputToForgetWeights, inputToCellWeights, inputToOutputWeights, recurrentToInputWeights, recurrentToForgetWeights, recurrentToCellWeights, recurrentToOutputWeights, inputGateBias, forgetGateBias, cellGateBias, outputGateBias, prevCellState, prevOutput}, {cellStateOut, output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {inputGateBias, forgetGateBias, cellGateBias, outputGateBias, prevCellState, input_tmp, inputToInputWeights_tmp, inputToForgetWeights_tmp, inputToCellWeights_tmp, inputToOutputWeights_tmp, recurrentToInputWeights_tmp, recurrentToForgetWeights_tmp, recurrentToCellWeights_tmp, recurrentToOutputWeights_tmp, prevOutput_tmp},
    {cellStateOut, output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_2(Model *model) {
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.0078125f, 128);
  OperandType type7(Type::TENSOR_QUANT16_SYMM, {1, 4}, 0.00048828125f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 4}, 0.0078125f, 128);
  // Phase 1, operands
  auto input1 = model->addOperand(&type6);
  auto inputToInputWeights1 = model->addOperand(&type1);
  auto inputToForgetWeights1 = model->addOperand(&type1);
  auto inputToCellWeights1 = model->addOperand(&type1);
  auto inputToOutputWeights1 = model->addOperand(&type1);
  auto recurrentToInputWeights1 = model->addOperand(&type2);
  auto recurrentToForgetWeights1 = model->addOperand(&type2);
  auto recurrentToCellWeights1 = model->addOperand(&type2);
  auto recurrentToOutputWeights1 = model->addOperand(&type2);
  auto inputGateBias1 = model->addOperand(&type3);
  auto forgetGateBias1 = model->addOperand(&type3);
  auto cellGateBias1 = model->addOperand(&type3);
  auto outputGateBias1 = model->addOperand(&type3);
  auto prevCellState1 = model->addOperand(&type7);
  auto prevOutput1 = model->addOperand(&type8);
  auto cellStateOut1 = model->addOperand(&type7);
  auto output1 = model->addOperand(&type8);
  // Phase 2, operations
  static uint8_t inputToInputWeights1_init[] = {146, 250, 235, 171, 10, 218, 171, 108};
  model->setOperandValue(inputToInputWeights1, inputToInputWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToForgetWeights1_init[] = {24, 50, 132, 179, 158, 110, 3, 169};
  model->setOperandValue(inputToForgetWeights1, inputToForgetWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToCellWeights1_init[] = {133, 34, 29, 49, 206, 109, 54, 183};
  model->setOperandValue(inputToCellWeights1, inputToCellWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToOutputWeights1_init[] = {195, 187, 11, 99, 109, 10, 218, 48};
  model->setOperandValue(inputToOutputWeights1, inputToOutputWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t recurrentToInputWeights1_init[] = {254, 206, 77, 168, 71, 20, 215, 6, 223, 7, 118, 225, 59, 130, 174, 26};
  model->setOperandValue(recurrentToInputWeights1, recurrentToInputWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToForgetWeights1_init[] = {137, 240, 103, 52, 68, 51, 237, 112, 0, 220, 89, 23, 69, 4, 207, 253};
  model->setOperandValue(recurrentToForgetWeights1, recurrentToForgetWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToCellWeights1_init[] = {172, 60, 205, 65, 14, 0, 140, 168, 240, 223, 133, 56, 142, 64, 246, 216};
  model->setOperandValue(recurrentToCellWeights1, recurrentToCellWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToOutputWeights1_init[] = {106, 214, 67, 23, 59, 158, 45, 3, 119, 132, 49, 205, 129, 218, 11, 98};
  model->setOperandValue(recurrentToOutputWeights1, recurrentToOutputWeights1_init, sizeof(uint8_t) * 16);
  static int32_t inputGateBias1_init[] = {-7876, 13488, -726, 32839};
  model->setOperandValue(inputGateBias1, inputGateBias1_init, sizeof(int32_t) * 4);
  static int32_t forgetGateBias1_init[] = {9206, -46884, -11693, -38724};
  model->setOperandValue(forgetGateBias1, forgetGateBias1_init, sizeof(int32_t) * 4);
  static int32_t cellGateBias1_init[] = {39481, 48624, 48976, -21419};
  model->setOperandValue(cellGateBias1, cellGateBias1_init, sizeof(int32_t) * 4);
  static int32_t outputGateBias1_init[] = {-58999, -17050, -41852, -40538};
  model->setOperandValue(outputGateBias1, outputGateBias1_init, sizeof(int32_t) * 4);
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input1, inputToInputWeights1, inputToForgetWeights1, inputToCellWeights1, inputToOutputWeights1, recurrentToInputWeights1, recurrentToForgetWeights1, recurrentToCellWeights1, recurrentToOutputWeights1, inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, prevOutput1}, {cellStateOut1, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, prevCellState1, prevOutput1},
    {cellStateOut1, output1});
  assert(model->isValid());
}

bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.0078125f, 128);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.0078125f, 128);
  OperandType type7(Type::TENSOR_QUANT16_SYMM, {1, 4}, 0.00048828125f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 4}, 0.0078125f, 128);
  OperandType type9(Type::TENSOR_QUANT16_SYMM, {0, 0}, 0.00048828125f, 0);
  // Phase 1, operands
  auto input1 = model->addOperand(&type6);
  auto inputToInputWeights1 = model->addOperand(&type1);
  auto inputToForgetWeights1 = model->addOperand(&type1);
  auto inputToCellWeights1 = model->addOperand(&type1);
  auto inputToOutputWeights1 = model->addOperand(&type1);
  auto recurrentToInputWeights1 = model->addOperand(&type2);
  auto recurrentToForgetWeights1 = model->addOperand(&type2);
  auto recurrentToCellWeights1 = model->addOperand(&type2);
  auto recurrentToOutputWeights1 = model->addOperand(&type2);
  auto inputGateBias1 = model->addOperand(&type3);
  auto forgetGateBias1 = model->addOperand(&type3);
  auto cellGateBias1 = model->addOperand(&type3);
  auto outputGateBias1 = model->addOperand(&type3);
  auto prevCellState1 = model->addOperand(&type7);
  auto prevOutput1 = model->addOperand(&type8);
  auto cellStateOut1 = model->addOperand(&type9);
  auto output1 = model->addOperand(&type10);
  // Phase 2, operations
  static uint8_t inputToInputWeights1_init[] = {146, 250, 235, 171, 10, 218, 171, 108};
  model->setOperandValue(inputToInputWeights1, inputToInputWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToForgetWeights1_init[] = {24, 50, 132, 179, 158, 110, 3, 169};
  model->setOperandValue(inputToForgetWeights1, inputToForgetWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToCellWeights1_init[] = {133, 34, 29, 49, 206, 109, 54, 183};
  model->setOperandValue(inputToCellWeights1, inputToCellWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToOutputWeights1_init[] = {195, 187, 11, 99, 109, 10, 218, 48};
  model->setOperandValue(inputToOutputWeights1, inputToOutputWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t recurrentToInputWeights1_init[] = {254, 206, 77, 168, 71, 20, 215, 6, 223, 7, 118, 225, 59, 130, 174, 26};
  model->setOperandValue(recurrentToInputWeights1, recurrentToInputWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToForgetWeights1_init[] = {137, 240, 103, 52, 68, 51, 237, 112, 0, 220, 89, 23, 69, 4, 207, 253};
  model->setOperandValue(recurrentToForgetWeights1, recurrentToForgetWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToCellWeights1_init[] = {172, 60, 205, 65, 14, 0, 140, 168, 240, 223, 133, 56, 142, 64, 246, 216};
  model->setOperandValue(recurrentToCellWeights1, recurrentToCellWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToOutputWeights1_init[] = {106, 214, 67, 23, 59, 158, 45, 3, 119, 132, 49, 205, 129, 218, 11, 98};
  model->setOperandValue(recurrentToOutputWeights1, recurrentToOutputWeights1_init, sizeof(uint8_t) * 16);
  static int32_t inputGateBias1_init[] = {-7876, 13488, -726, 32839};
  model->setOperandValue(inputGateBias1, inputGateBias1_init, sizeof(int32_t) * 4);
  static int32_t forgetGateBias1_init[] = {9206, -46884, -11693, -38724};
  model->setOperandValue(forgetGateBias1, forgetGateBias1_init, sizeof(int32_t) * 4);
  static int32_t cellGateBias1_init[] = {39481, 48624, 48976, -21419};
  model->setOperandValue(cellGateBias1, cellGateBias1_init, sizeof(int32_t) * 4);
  static int32_t outputGateBias1_init[] = {-58999, -17050, -41852, -40538};
  model->setOperandValue(outputGateBias1, outputGateBias1_init, sizeof(int32_t) * 4);
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input1, inputToInputWeights1, inputToForgetWeights1, inputToCellWeights1, inputToOutputWeights1, recurrentToInputWeights1, recurrentToForgetWeights1, recurrentToCellWeights1, recurrentToOutputWeights1, inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, prevOutput1}, {cellStateOut1, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, prevCellState1, prevOutput1},
    {cellStateOut1, output1});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_all_inputs_as_internal_2(Model *model) {
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.0078125f, 128);
  OperandType type12(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.0078125f, 128);
  OperandType type7(Type::TENSOR_QUANT16_SYMM, {1, 4}, 0.00048828125f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 4}, 0.0078125f, 128);
  // Phase 1, operands
  auto input1 = model->addOperand(&type6);
  auto inputToInputWeights1 = model->addOperand(&type1);
  auto inputToForgetWeights1 = model->addOperand(&type1);
  auto inputToCellWeights1 = model->addOperand(&type1);
  auto inputToOutputWeights1 = model->addOperand(&type1);
  auto recurrentToInputWeights1 = model->addOperand(&type2);
  auto recurrentToForgetWeights1 = model->addOperand(&type2);
  auto recurrentToCellWeights1 = model->addOperand(&type2);
  auto recurrentToOutputWeights1 = model->addOperand(&type2);
  auto inputGateBias1 = model->addOperand(&type3);
  auto forgetGateBias1 = model->addOperand(&type3);
  auto cellGateBias1 = model->addOperand(&type3);
  auto outputGateBias1 = model->addOperand(&type3);
  auto prevCellState1 = model->addOperand(&type7);
  auto prevOutput1 = model->addOperand(&type8);
  auto cellStateOut1 = model->addOperand(&type7);
  auto output1 = model->addOperand(&type8);
  auto input1_tmp = model->addOperand(&type6);
  auto dummy40 = model->addOperand(&type11);
  auto param40 = model->addOperand(&type12);
  auto prevOutput1_tmp = model->addOperand(&type8);
  auto dummy41 = model->addOperand(&type11);
  auto param41 = model->addOperand(&type12);
  // Phase 2, operations
  static uint8_t inputToInputWeights1_init[] = {146, 250, 235, 171, 10, 218, 171, 108};
  model->setOperandValue(inputToInputWeights1, inputToInputWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToForgetWeights1_init[] = {24, 50, 132, 179, 158, 110, 3, 169};
  model->setOperandValue(inputToForgetWeights1, inputToForgetWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToCellWeights1_init[] = {133, 34, 29, 49, 206, 109, 54, 183};
  model->setOperandValue(inputToCellWeights1, inputToCellWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToOutputWeights1_init[] = {195, 187, 11, 99, 109, 10, 218, 48};
  model->setOperandValue(inputToOutputWeights1, inputToOutputWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t recurrentToInputWeights1_init[] = {254, 206, 77, 168, 71, 20, 215, 6, 223, 7, 118, 225, 59, 130, 174, 26};
  model->setOperandValue(recurrentToInputWeights1, recurrentToInputWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToForgetWeights1_init[] = {137, 240, 103, 52, 68, 51, 237, 112, 0, 220, 89, 23, 69, 4, 207, 253};
  model->setOperandValue(recurrentToForgetWeights1, recurrentToForgetWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToCellWeights1_init[] = {172, 60, 205, 65, 14, 0, 140, 168, 240, 223, 133, 56, 142, 64, 246, 216};
  model->setOperandValue(recurrentToCellWeights1, recurrentToCellWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToOutputWeights1_init[] = {106, 214, 67, 23, 59, 158, 45, 3, 119, 132, 49, 205, 129, 218, 11, 98};
  model->setOperandValue(recurrentToOutputWeights1, recurrentToOutputWeights1_init, sizeof(uint8_t) * 16);
  static int32_t inputGateBias1_init[] = {-7876, 13488, -726, 32839};
  model->setOperandValue(inputGateBias1, inputGateBias1_init, sizeof(int32_t) * 4);
  static int32_t forgetGateBias1_init[] = {9206, -46884, -11693, -38724};
  model->setOperandValue(forgetGateBias1, forgetGateBias1_init, sizeof(int32_t) * 4);
  static int32_t cellGateBias1_init[] = {39481, 48624, 48976, -21419};
  model->setOperandValue(cellGateBias1, cellGateBias1_init, sizeof(int32_t) * 4);
  static int32_t outputGateBias1_init[] = {-58999, -17050, -41852, -40538};
  model->setOperandValue(outputGateBias1, outputGateBias1_init, sizeof(int32_t) * 4);
  static uint8_t dummy40_init[] = {128};
  model->setOperandValue(dummy40, dummy40_init, sizeof(uint8_t) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static uint8_t dummy41_init[] = {128};
  model->setOperandValue(dummy41, dummy41_init, sizeof(uint8_t) * 1);
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy40, param40}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {prevOutput1_tmp, dummy41, param41}, {prevOutput1});
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input1, inputToInputWeights1, inputToForgetWeights1, inputToCellWeights1, inputToOutputWeights1, recurrentToInputWeights1, recurrentToForgetWeights1, recurrentToCellWeights1, recurrentToOutputWeights1, inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, prevOutput1}, {cellStateOut1, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {prevCellState1, input1_tmp, prevOutput1_tmp},
    {cellStateOut1, output1});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.0078125f, 128);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.0078125f, 128);
  OperandType type12(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.0078125f, 128);
  OperandType type7(Type::TENSOR_QUANT16_SYMM, {1, 4}, 0.00048828125f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 4}, 0.0078125f, 128);
  OperandType type9(Type::TENSOR_QUANT16_SYMM, {0, 0}, 0.00048828125f, 0);
  // Phase 1, operands
  auto input1 = model->addOperand(&type6);
  auto inputToInputWeights1 = model->addOperand(&type1);
  auto inputToForgetWeights1 = model->addOperand(&type1);
  auto inputToCellWeights1 = model->addOperand(&type1);
  auto inputToOutputWeights1 = model->addOperand(&type1);
  auto recurrentToInputWeights1 = model->addOperand(&type2);
  auto recurrentToForgetWeights1 = model->addOperand(&type2);
  auto recurrentToCellWeights1 = model->addOperand(&type2);
  auto recurrentToOutputWeights1 = model->addOperand(&type2);
  auto inputGateBias1 = model->addOperand(&type3);
  auto forgetGateBias1 = model->addOperand(&type3);
  auto cellGateBias1 = model->addOperand(&type3);
  auto outputGateBias1 = model->addOperand(&type3);
  auto prevCellState1 = model->addOperand(&type7);
  auto prevOutput1 = model->addOperand(&type8);
  auto cellStateOut1 = model->addOperand(&type9);
  auto output1 = model->addOperand(&type10);
  auto input1_tmp = model->addOperand(&type6);
  auto dummy42 = model->addOperand(&type11);
  auto param42 = model->addOperand(&type12);
  auto prevOutput1_tmp = model->addOperand(&type8);
  auto dummy43 = model->addOperand(&type11);
  auto param43 = model->addOperand(&type12);
  // Phase 2, operations
  static uint8_t inputToInputWeights1_init[] = {146, 250, 235, 171, 10, 218, 171, 108};
  model->setOperandValue(inputToInputWeights1, inputToInputWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToForgetWeights1_init[] = {24, 50, 132, 179, 158, 110, 3, 169};
  model->setOperandValue(inputToForgetWeights1, inputToForgetWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToCellWeights1_init[] = {133, 34, 29, 49, 206, 109, 54, 183};
  model->setOperandValue(inputToCellWeights1, inputToCellWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToOutputWeights1_init[] = {195, 187, 11, 99, 109, 10, 218, 48};
  model->setOperandValue(inputToOutputWeights1, inputToOutputWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t recurrentToInputWeights1_init[] = {254, 206, 77, 168, 71, 20, 215, 6, 223, 7, 118, 225, 59, 130, 174, 26};
  model->setOperandValue(recurrentToInputWeights1, recurrentToInputWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToForgetWeights1_init[] = {137, 240, 103, 52, 68, 51, 237, 112, 0, 220, 89, 23, 69, 4, 207, 253};
  model->setOperandValue(recurrentToForgetWeights1, recurrentToForgetWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToCellWeights1_init[] = {172, 60, 205, 65, 14, 0, 140, 168, 240, 223, 133, 56, 142, 64, 246, 216};
  model->setOperandValue(recurrentToCellWeights1, recurrentToCellWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToOutputWeights1_init[] = {106, 214, 67, 23, 59, 158, 45, 3, 119, 132, 49, 205, 129, 218, 11, 98};
  model->setOperandValue(recurrentToOutputWeights1, recurrentToOutputWeights1_init, sizeof(uint8_t) * 16);
  static int32_t inputGateBias1_init[] = {-7876, 13488, -726, 32839};
  model->setOperandValue(inputGateBias1, inputGateBias1_init, sizeof(int32_t) * 4);
  static int32_t forgetGateBias1_init[] = {9206, -46884, -11693, -38724};
  model->setOperandValue(forgetGateBias1, forgetGateBias1_init, sizeof(int32_t) * 4);
  static int32_t cellGateBias1_init[] = {39481, 48624, 48976, -21419};
  model->setOperandValue(cellGateBias1, cellGateBias1_init, sizeof(int32_t) * 4);
  static int32_t outputGateBias1_init[] = {-58999, -17050, -41852, -40538};
  model->setOperandValue(outputGateBias1, outputGateBias1_init, sizeof(int32_t) * 4);
  static uint8_t dummy42_init[] = {128};
  model->setOperandValue(dummy42, dummy42_init, sizeof(uint8_t) * 1);
  static int32_t param42_init[] = {0};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static uint8_t dummy43_init[] = {128};
  model->setOperandValue(dummy43, dummy43_init, sizeof(uint8_t) * 1);
  static int32_t param43_init[] = {0};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy42, param42}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {prevOutput1_tmp, dummy43, param43}, {prevOutput1});
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input1, inputToInputWeights1, inputToForgetWeights1, inputToCellWeights1, inputToOutputWeights1, recurrentToInputWeights1, recurrentToForgetWeights1, recurrentToCellWeights1, recurrentToOutputWeights1, inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, prevOutput1}, {cellStateOut1, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {prevCellState1, input1_tmp, prevOutput1_tmp},
    {cellStateOut1, output1});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_all_tensors_as_inputs(Model *model) {
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.0078125f, 128);
  OperandType type7(Type::TENSOR_QUANT16_SYMM, {1, 4}, 0.00048828125f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 4}, 0.0078125f, 128);
  // Phase 1, operands
  auto input1 = model->addOperand(&type6);
  auto inputToInputWeights1 = model->addOperand(&type1);
  auto inputToForgetWeights1 = model->addOperand(&type1);
  auto inputToCellWeights1 = model->addOperand(&type1);
  auto inputToOutputWeights1 = model->addOperand(&type1);
  auto recurrentToInputWeights1 = model->addOperand(&type2);
  auto recurrentToForgetWeights1 = model->addOperand(&type2);
  auto recurrentToCellWeights1 = model->addOperand(&type2);
  auto recurrentToOutputWeights1 = model->addOperand(&type2);
  auto inputGateBias1 = model->addOperand(&type3);
  auto forgetGateBias1 = model->addOperand(&type3);
  auto cellGateBias1 = model->addOperand(&type3);
  auto outputGateBias1 = model->addOperand(&type3);
  auto prevCellState1 = model->addOperand(&type7);
  auto prevOutput1 = model->addOperand(&type8);
  auto cellStateOut1 = model->addOperand(&type7);
  auto output1 = model->addOperand(&type8);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input1, inputToInputWeights1, inputToForgetWeights1, inputToCellWeights1, inputToOutputWeights1, recurrentToInputWeights1, recurrentToForgetWeights1, recurrentToCellWeights1, recurrentToOutputWeights1, inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, prevOutput1}, {cellStateOut1, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, inputToInputWeights1, inputToForgetWeights1, inputToCellWeights1, inputToOutputWeights1, recurrentToInputWeights1, recurrentToForgetWeights1, recurrentToCellWeights1, recurrentToOutputWeights1, inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, prevOutput1},
    {cellStateOut1, output1});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.0078125f, 128);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.0078125f, 128);
  OperandType type7(Type::TENSOR_QUANT16_SYMM, {1, 4}, 0.00048828125f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 4}, 0.0078125f, 128);
  OperandType type9(Type::TENSOR_QUANT16_SYMM, {0, 0}, 0.00048828125f, 0);
  // Phase 1, operands
  auto input1 = model->addOperand(&type6);
  auto inputToInputWeights1 = model->addOperand(&type1);
  auto inputToForgetWeights1 = model->addOperand(&type1);
  auto inputToCellWeights1 = model->addOperand(&type1);
  auto inputToOutputWeights1 = model->addOperand(&type1);
  auto recurrentToInputWeights1 = model->addOperand(&type2);
  auto recurrentToForgetWeights1 = model->addOperand(&type2);
  auto recurrentToCellWeights1 = model->addOperand(&type2);
  auto recurrentToOutputWeights1 = model->addOperand(&type2);
  auto inputGateBias1 = model->addOperand(&type3);
  auto forgetGateBias1 = model->addOperand(&type3);
  auto cellGateBias1 = model->addOperand(&type3);
  auto outputGateBias1 = model->addOperand(&type3);
  auto prevCellState1 = model->addOperand(&type7);
  auto prevOutput1 = model->addOperand(&type8);
  auto cellStateOut1 = model->addOperand(&type9);
  auto output1 = model->addOperand(&type10);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input1, inputToInputWeights1, inputToForgetWeights1, inputToCellWeights1, inputToOutputWeights1, recurrentToInputWeights1, recurrentToForgetWeights1, recurrentToCellWeights1, recurrentToOutputWeights1, inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, prevOutput1}, {cellStateOut1, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, inputToInputWeights1, inputToForgetWeights1, inputToCellWeights1, inputToOutputWeights1, recurrentToInputWeights1, recurrentToForgetWeights1, recurrentToCellWeights1, recurrentToOutputWeights1, inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, prevOutput1},
    {cellStateOut1, output1});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.0078125f, 128);
  OperandType type12(Type::INT32, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.00408021f, 100);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.0078125f, 128);
  OperandType type7(Type::TENSOR_QUANT16_SYMM, {1, 4}, 0.00048828125f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 4}, 0.0078125f, 128);
  // Phase 1, operands
  auto input1 = model->addOperand(&type6);
  auto inputToInputWeights1 = model->addOperand(&type1);
  auto inputToForgetWeights1 = model->addOperand(&type1);
  auto inputToCellWeights1 = model->addOperand(&type1);
  auto inputToOutputWeights1 = model->addOperand(&type1);
  auto recurrentToInputWeights1 = model->addOperand(&type2);
  auto recurrentToForgetWeights1 = model->addOperand(&type2);
  auto recurrentToCellWeights1 = model->addOperand(&type2);
  auto recurrentToOutputWeights1 = model->addOperand(&type2);
  auto inputGateBias1 = model->addOperand(&type3);
  auto forgetGateBias1 = model->addOperand(&type3);
  auto cellGateBias1 = model->addOperand(&type3);
  auto outputGateBias1 = model->addOperand(&type3);
  auto prevCellState1 = model->addOperand(&type7);
  auto prevOutput1 = model->addOperand(&type8);
  auto cellStateOut1 = model->addOperand(&type7);
  auto output1 = model->addOperand(&type8);
  auto input1_tmp = model->addOperand(&type6);
  auto dummy44 = model->addOperand(&type11);
  auto param44 = model->addOperand(&type12);
  auto inputToInputWeights1_tmp = model->addOperand(&type1);
  auto dummy45 = model->addOperand(&type13);
  auto param45 = model->addOperand(&type12);
  auto inputToForgetWeights1_tmp = model->addOperand(&type1);
  auto dummy46 = model->addOperand(&type13);
  auto param46 = model->addOperand(&type12);
  auto inputToCellWeights1_tmp = model->addOperand(&type1);
  auto dummy47 = model->addOperand(&type13);
  auto param47 = model->addOperand(&type12);
  auto inputToOutputWeights1_tmp = model->addOperand(&type1);
  auto dummy48 = model->addOperand(&type13);
  auto param48 = model->addOperand(&type12);
  auto recurrentToInputWeights1_tmp = model->addOperand(&type2);
  auto dummy49 = model->addOperand(&type13);
  auto param49 = model->addOperand(&type12);
  auto recurrentToForgetWeights1_tmp = model->addOperand(&type2);
  auto dummy50 = model->addOperand(&type13);
  auto param50 = model->addOperand(&type12);
  auto recurrentToCellWeights1_tmp = model->addOperand(&type2);
  auto dummy51 = model->addOperand(&type13);
  auto param51 = model->addOperand(&type12);
  auto recurrentToOutputWeights1_tmp = model->addOperand(&type2);
  auto dummy52 = model->addOperand(&type13);
  auto param52 = model->addOperand(&type12);
  auto prevOutput1_tmp = model->addOperand(&type8);
  auto dummy53 = model->addOperand(&type11);
  auto param53 = model->addOperand(&type12);
  // Phase 2, operations
  static uint8_t dummy44_init[] = {128};
  model->setOperandValue(dummy44, dummy44_init, sizeof(uint8_t) * 1);
  static int32_t param44_init[] = {0};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static uint8_t dummy45_init[] = {100};
  model->setOperandValue(dummy45, dummy45_init, sizeof(uint8_t) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static uint8_t dummy46_init[] = {100};
  model->setOperandValue(dummy46, dummy46_init, sizeof(uint8_t) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static uint8_t dummy47_init[] = {100};
  model->setOperandValue(dummy47, dummy47_init, sizeof(uint8_t) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static uint8_t dummy48_init[] = {100};
  model->setOperandValue(dummy48, dummy48_init, sizeof(uint8_t) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static uint8_t dummy49_init[] = {100};
  model->setOperandValue(dummy49, dummy49_init, sizeof(uint8_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static uint8_t dummy50_init[] = {100};
  model->setOperandValue(dummy50, dummy50_init, sizeof(uint8_t) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static uint8_t dummy51_init[] = {100};
  model->setOperandValue(dummy51, dummy51_init, sizeof(uint8_t) * 1);
  static int32_t param51_init[] = {0};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static uint8_t dummy52_init[] = {100};
  model->setOperandValue(dummy52, dummy52_init, sizeof(uint8_t) * 1);
  static int32_t param52_init[] = {0};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static uint8_t dummy53_init[] = {128};
  model->setOperandValue(dummy53, dummy53_init, sizeof(uint8_t) * 1);
  static int32_t param53_init[] = {0};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy44, param44}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToInputWeights1_tmp, dummy45, param45}, {inputToInputWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToForgetWeights1_tmp, dummy46, param46}, {inputToForgetWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToCellWeights1_tmp, dummy47, param47}, {inputToCellWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToOutputWeights1_tmp, dummy48, param48}, {inputToOutputWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToInputWeights1_tmp, dummy49, param49}, {recurrentToInputWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToForgetWeights1_tmp, dummy50, param50}, {recurrentToForgetWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToCellWeights1_tmp, dummy51, param51}, {recurrentToCellWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToOutputWeights1_tmp, dummy52, param52}, {recurrentToOutputWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {prevOutput1_tmp, dummy53, param53}, {prevOutput1});
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input1, inputToInputWeights1, inputToForgetWeights1, inputToCellWeights1, inputToOutputWeights1, recurrentToInputWeights1, recurrentToForgetWeights1, recurrentToCellWeights1, recurrentToOutputWeights1, inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, prevOutput1}, {cellStateOut1, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, input1_tmp, inputToInputWeights1_tmp, inputToForgetWeights1_tmp, inputToCellWeights1_tmp, inputToOutputWeights1_tmp, recurrentToInputWeights1_tmp, recurrentToForgetWeights1_tmp, recurrentToCellWeights1_tmp, recurrentToOutputWeights1_tmp, prevOutput1_tmp},
    {cellStateOut1, output1});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.0078125f, 128);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.0078125f, 128);
  OperandType type12(Type::INT32, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.00408021f, 100);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.0078125f, 128);
  OperandType type7(Type::TENSOR_QUANT16_SYMM, {1, 4}, 0.00048828125f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 4}, 0.0078125f, 128);
  OperandType type9(Type::TENSOR_QUANT16_SYMM, {0, 0}, 0.00048828125f, 0);
  // Phase 1, operands
  auto input1 = model->addOperand(&type6);
  auto inputToInputWeights1 = model->addOperand(&type1);
  auto inputToForgetWeights1 = model->addOperand(&type1);
  auto inputToCellWeights1 = model->addOperand(&type1);
  auto inputToOutputWeights1 = model->addOperand(&type1);
  auto recurrentToInputWeights1 = model->addOperand(&type2);
  auto recurrentToForgetWeights1 = model->addOperand(&type2);
  auto recurrentToCellWeights1 = model->addOperand(&type2);
  auto recurrentToOutputWeights1 = model->addOperand(&type2);
  auto inputGateBias1 = model->addOperand(&type3);
  auto forgetGateBias1 = model->addOperand(&type3);
  auto cellGateBias1 = model->addOperand(&type3);
  auto outputGateBias1 = model->addOperand(&type3);
  auto prevCellState1 = model->addOperand(&type7);
  auto prevOutput1 = model->addOperand(&type8);
  auto cellStateOut1 = model->addOperand(&type9);
  auto output1 = model->addOperand(&type10);
  auto input1_tmp = model->addOperand(&type6);
  auto dummy54 = model->addOperand(&type11);
  auto param54 = model->addOperand(&type12);
  auto inputToInputWeights1_tmp = model->addOperand(&type1);
  auto dummy55 = model->addOperand(&type13);
  auto param55 = model->addOperand(&type12);
  auto inputToForgetWeights1_tmp = model->addOperand(&type1);
  auto dummy56 = model->addOperand(&type13);
  auto param56 = model->addOperand(&type12);
  auto inputToCellWeights1_tmp = model->addOperand(&type1);
  auto dummy57 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type12);
  auto inputToOutputWeights1_tmp = model->addOperand(&type1);
  auto dummy58 = model->addOperand(&type13);
  auto param58 = model->addOperand(&type12);
  auto recurrentToInputWeights1_tmp = model->addOperand(&type2);
  auto dummy59 = model->addOperand(&type13);
  auto param59 = model->addOperand(&type12);
  auto recurrentToForgetWeights1_tmp = model->addOperand(&type2);
  auto dummy60 = model->addOperand(&type13);
  auto param60 = model->addOperand(&type12);
  auto recurrentToCellWeights1_tmp = model->addOperand(&type2);
  auto dummy61 = model->addOperand(&type13);
  auto param61 = model->addOperand(&type12);
  auto recurrentToOutputWeights1_tmp = model->addOperand(&type2);
  auto dummy62 = model->addOperand(&type13);
  auto param62 = model->addOperand(&type12);
  auto prevOutput1_tmp = model->addOperand(&type8);
  auto dummy63 = model->addOperand(&type11);
  auto param63 = model->addOperand(&type12);
  // Phase 2, operations
  static uint8_t dummy54_init[] = {128};
  model->setOperandValue(dummy54, dummy54_init, sizeof(uint8_t) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static uint8_t dummy55_init[] = {100};
  model->setOperandValue(dummy55, dummy55_init, sizeof(uint8_t) * 1);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static uint8_t dummy56_init[] = {100};
  model->setOperandValue(dummy56, dummy56_init, sizeof(uint8_t) * 1);
  static int32_t param56_init[] = {0};
  model->setOperandValue(param56, param56_init, sizeof(int32_t) * 1);
  static uint8_t dummy57_init[] = {100};
  model->setOperandValue(dummy57, dummy57_init, sizeof(uint8_t) * 1);
  static int32_t param57_init[] = {0};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static uint8_t dummy58_init[] = {100};
  model->setOperandValue(dummy58, dummy58_init, sizeof(uint8_t) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static uint8_t dummy59_init[] = {100};
  model->setOperandValue(dummy59, dummy59_init, sizeof(uint8_t) * 1);
  static int32_t param59_init[] = {0};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static uint8_t dummy60_init[] = {100};
  model->setOperandValue(dummy60, dummy60_init, sizeof(uint8_t) * 1);
  static int32_t param60_init[] = {0};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  static uint8_t dummy61_init[] = {100};
  model->setOperandValue(dummy61, dummy61_init, sizeof(uint8_t) * 1);
  static int32_t param61_init[] = {0};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  static uint8_t dummy62_init[] = {100};
  model->setOperandValue(dummy62, dummy62_init, sizeof(uint8_t) * 1);
  static int32_t param62_init[] = {0};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static uint8_t dummy63_init[] = {128};
  model->setOperandValue(dummy63, dummy63_init, sizeof(uint8_t) * 1);
  static int32_t param63_init[] = {0};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy54, param54}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToInputWeights1_tmp, dummy55, param55}, {inputToInputWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToForgetWeights1_tmp, dummy56, param56}, {inputToForgetWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToCellWeights1_tmp, dummy57, param57}, {inputToCellWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToOutputWeights1_tmp, dummy58, param58}, {inputToOutputWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToInputWeights1_tmp, dummy59, param59}, {recurrentToInputWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToForgetWeights1_tmp, dummy60, param60}, {recurrentToForgetWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToCellWeights1_tmp, dummy61, param61}, {recurrentToCellWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToOutputWeights1_tmp, dummy62, param62}, {recurrentToOutputWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {prevOutput1_tmp, dummy63, param63}, {prevOutput1});
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input1, inputToInputWeights1, inputToForgetWeights1, inputToCellWeights1, inputToOutputWeights1, recurrentToInputWeights1, recurrentToForgetWeights1, recurrentToCellWeights1, recurrentToOutputWeights1, inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, prevOutput1}, {cellStateOut1, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, input1_tmp, inputToInputWeights1_tmp, inputToForgetWeights1_tmp, inputToCellWeights1_tmp, inputToOutputWeights1_tmp, recurrentToInputWeights1_tmp, recurrentToForgetWeights1_tmp, recurrentToCellWeights1_tmp, recurrentToOutputWeights1_tmp, prevOutput1_tmp},
    {cellStateOut1, output1});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_2(Model *model) {
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.0078125f, 128);
  OperandType type7(Type::TENSOR_QUANT16_SYMM, {1, 4}, 0.00048828125f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 4}, 0.0078125f, 128);
  // Phase 1, operands
  auto input1 = model->addOperand(&type6);
  auto inputToInputWeights1 = model->addOperand(&type1);
  auto inputToForgetWeights1 = model->addOperand(&type1);
  auto inputToCellWeights1 = model->addOperand(&type1);
  auto inputToOutputWeights1 = model->addOperand(&type1);
  auto recurrentToInputWeights1 = model->addOperand(&type2);
  auto recurrentToForgetWeights1 = model->addOperand(&type2);
  auto recurrentToCellWeights1 = model->addOperand(&type2);
  auto recurrentToOutputWeights1 = model->addOperand(&type2);
  auto inputGateBias1 = model->addOperand(&type3);
  auto forgetGateBias1 = model->addOperand(&type3);
  auto cellGateBias1 = model->addOperand(&type3);
  auto outputGateBias1 = model->addOperand(&type3);
  auto prevCellState1 = model->addOperand(&type7);
  auto prevOutput1 = model->addOperand(&type8);
  auto cellStateOut1 = model->addOperand(&type7);
  auto output1 = model->addOperand(&type8);
  // Phase 2, operations
  static uint8_t inputToInputWeights1_init[] = {146, 250, 235, 171, 10, 218, 171, 108};
  model->setOperandValue(inputToInputWeights1, inputToInputWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToForgetWeights1_init[] = {24, 50, 132, 179, 158, 110, 3, 169};
  model->setOperandValue(inputToForgetWeights1, inputToForgetWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToCellWeights1_init[] = {133, 34, 29, 49, 206, 109, 54, 183};
  model->setOperandValue(inputToCellWeights1, inputToCellWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToOutputWeights1_init[] = {195, 187, 11, 99, 109, 10, 218, 48};
  model->setOperandValue(inputToOutputWeights1, inputToOutputWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t recurrentToInputWeights1_init[] = {254, 206, 77, 168, 71, 20, 215, 6, 223, 7, 118, 225, 59, 130, 174, 26};
  model->setOperandValue(recurrentToInputWeights1, recurrentToInputWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToForgetWeights1_init[] = {137, 240, 103, 52, 68, 51, 237, 112, 0, 220, 89, 23, 69, 4, 207, 253};
  model->setOperandValue(recurrentToForgetWeights1, recurrentToForgetWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToCellWeights1_init[] = {172, 60, 205, 65, 14, 0, 140, 168, 240, 223, 133, 56, 142, 64, 246, 216};
  model->setOperandValue(recurrentToCellWeights1, recurrentToCellWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToOutputWeights1_init[] = {106, 214, 67, 23, 59, 158, 45, 3, 119, 132, 49, 205, 129, 218, 11, 98};
  model->setOperandValue(recurrentToOutputWeights1, recurrentToOutputWeights1_init, sizeof(uint8_t) * 16);
  static int32_t inputGateBias1_init[] = {-7876, 13488, -726, 32839};
  model->setOperandValue(inputGateBias1, inputGateBias1_init, sizeof(int32_t) * 4);
  static int32_t forgetGateBias1_init[] = {9206, -46884, -11693, -38724};
  model->setOperandValue(forgetGateBias1, forgetGateBias1_init, sizeof(int32_t) * 4);
  static int32_t cellGateBias1_init[] = {39481, 48624, 48976, -21419};
  model->setOperandValue(cellGateBias1, cellGateBias1_init, sizeof(int32_t) * 4);
  static int32_t outputGateBias1_init[] = {-58999, -17050, -41852, -40538};
  model->setOperandValue(outputGateBias1, outputGateBias1_init, sizeof(int32_t) * 4);
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input1, inputToInputWeights1, inputToForgetWeights1, inputToCellWeights1, inputToOutputWeights1, recurrentToInputWeights1, recurrentToForgetWeights1, recurrentToCellWeights1, recurrentToOutputWeights1, inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, prevOutput1}, {cellStateOut1, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, prevCellState1, prevOutput1},
    {cellStateOut1, output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.0078125f, 128);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.0078125f, 128);
  OperandType type7(Type::TENSOR_QUANT16_SYMM, {1, 4}, 0.00048828125f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 4}, 0.0078125f, 128);
  OperandType type9(Type::TENSOR_QUANT16_SYMM, {0, 0}, 0.00048828125f, 0);
  // Phase 1, operands
  auto input1 = model->addOperand(&type6);
  auto inputToInputWeights1 = model->addOperand(&type1);
  auto inputToForgetWeights1 = model->addOperand(&type1);
  auto inputToCellWeights1 = model->addOperand(&type1);
  auto inputToOutputWeights1 = model->addOperand(&type1);
  auto recurrentToInputWeights1 = model->addOperand(&type2);
  auto recurrentToForgetWeights1 = model->addOperand(&type2);
  auto recurrentToCellWeights1 = model->addOperand(&type2);
  auto recurrentToOutputWeights1 = model->addOperand(&type2);
  auto inputGateBias1 = model->addOperand(&type3);
  auto forgetGateBias1 = model->addOperand(&type3);
  auto cellGateBias1 = model->addOperand(&type3);
  auto outputGateBias1 = model->addOperand(&type3);
  auto prevCellState1 = model->addOperand(&type7);
  auto prevOutput1 = model->addOperand(&type8);
  auto cellStateOut1 = model->addOperand(&type9);
  auto output1 = model->addOperand(&type10);
  // Phase 2, operations
  static uint8_t inputToInputWeights1_init[] = {146, 250, 235, 171, 10, 218, 171, 108};
  model->setOperandValue(inputToInputWeights1, inputToInputWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToForgetWeights1_init[] = {24, 50, 132, 179, 158, 110, 3, 169};
  model->setOperandValue(inputToForgetWeights1, inputToForgetWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToCellWeights1_init[] = {133, 34, 29, 49, 206, 109, 54, 183};
  model->setOperandValue(inputToCellWeights1, inputToCellWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToOutputWeights1_init[] = {195, 187, 11, 99, 109, 10, 218, 48};
  model->setOperandValue(inputToOutputWeights1, inputToOutputWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t recurrentToInputWeights1_init[] = {254, 206, 77, 168, 71, 20, 215, 6, 223, 7, 118, 225, 59, 130, 174, 26};
  model->setOperandValue(recurrentToInputWeights1, recurrentToInputWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToForgetWeights1_init[] = {137, 240, 103, 52, 68, 51, 237, 112, 0, 220, 89, 23, 69, 4, 207, 253};
  model->setOperandValue(recurrentToForgetWeights1, recurrentToForgetWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToCellWeights1_init[] = {172, 60, 205, 65, 14, 0, 140, 168, 240, 223, 133, 56, 142, 64, 246, 216};
  model->setOperandValue(recurrentToCellWeights1, recurrentToCellWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToOutputWeights1_init[] = {106, 214, 67, 23, 59, 158, 45, 3, 119, 132, 49, 205, 129, 218, 11, 98};
  model->setOperandValue(recurrentToOutputWeights1, recurrentToOutputWeights1_init, sizeof(uint8_t) * 16);
  static int32_t inputGateBias1_init[] = {-7876, 13488, -726, 32839};
  model->setOperandValue(inputGateBias1, inputGateBias1_init, sizeof(int32_t) * 4);
  static int32_t forgetGateBias1_init[] = {9206, -46884, -11693, -38724};
  model->setOperandValue(forgetGateBias1, forgetGateBias1_init, sizeof(int32_t) * 4);
  static int32_t cellGateBias1_init[] = {39481, 48624, 48976, -21419};
  model->setOperandValue(cellGateBias1, cellGateBias1_init, sizeof(int32_t) * 4);
  static int32_t outputGateBias1_init[] = {-58999, -17050, -41852, -40538};
  model->setOperandValue(outputGateBias1, outputGateBias1_init, sizeof(int32_t) * 4);
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input1, inputToInputWeights1, inputToForgetWeights1, inputToCellWeights1, inputToOutputWeights1, recurrentToInputWeights1, recurrentToForgetWeights1, recurrentToCellWeights1, recurrentToOutputWeights1, inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, prevOutput1}, {cellStateOut1, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, prevCellState1, prevOutput1},
    {cellStateOut1, output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.0078125f, 128);
  OperandType type12(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.0078125f, 128);
  OperandType type7(Type::TENSOR_QUANT16_SYMM, {1, 4}, 0.00048828125f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 4}, 0.0078125f, 128);
  // Phase 1, operands
  auto input1 = model->addOperand(&type6);
  auto inputToInputWeights1 = model->addOperand(&type1);
  auto inputToForgetWeights1 = model->addOperand(&type1);
  auto inputToCellWeights1 = model->addOperand(&type1);
  auto inputToOutputWeights1 = model->addOperand(&type1);
  auto recurrentToInputWeights1 = model->addOperand(&type2);
  auto recurrentToForgetWeights1 = model->addOperand(&type2);
  auto recurrentToCellWeights1 = model->addOperand(&type2);
  auto recurrentToOutputWeights1 = model->addOperand(&type2);
  auto inputGateBias1 = model->addOperand(&type3);
  auto forgetGateBias1 = model->addOperand(&type3);
  auto cellGateBias1 = model->addOperand(&type3);
  auto outputGateBias1 = model->addOperand(&type3);
  auto prevCellState1 = model->addOperand(&type7);
  auto prevOutput1 = model->addOperand(&type8);
  auto cellStateOut1 = model->addOperand(&type7);
  auto output1 = model->addOperand(&type8);
  auto input1_tmp = model->addOperand(&type6);
  auto dummy64 = model->addOperand(&type11);
  auto param64 = model->addOperand(&type12);
  auto prevOutput1_tmp = model->addOperand(&type8);
  auto dummy65 = model->addOperand(&type11);
  auto param65 = model->addOperand(&type12);
  // Phase 2, operations
  static uint8_t inputToInputWeights1_init[] = {146, 250, 235, 171, 10, 218, 171, 108};
  model->setOperandValue(inputToInputWeights1, inputToInputWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToForgetWeights1_init[] = {24, 50, 132, 179, 158, 110, 3, 169};
  model->setOperandValue(inputToForgetWeights1, inputToForgetWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToCellWeights1_init[] = {133, 34, 29, 49, 206, 109, 54, 183};
  model->setOperandValue(inputToCellWeights1, inputToCellWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToOutputWeights1_init[] = {195, 187, 11, 99, 109, 10, 218, 48};
  model->setOperandValue(inputToOutputWeights1, inputToOutputWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t recurrentToInputWeights1_init[] = {254, 206, 77, 168, 71, 20, 215, 6, 223, 7, 118, 225, 59, 130, 174, 26};
  model->setOperandValue(recurrentToInputWeights1, recurrentToInputWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToForgetWeights1_init[] = {137, 240, 103, 52, 68, 51, 237, 112, 0, 220, 89, 23, 69, 4, 207, 253};
  model->setOperandValue(recurrentToForgetWeights1, recurrentToForgetWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToCellWeights1_init[] = {172, 60, 205, 65, 14, 0, 140, 168, 240, 223, 133, 56, 142, 64, 246, 216};
  model->setOperandValue(recurrentToCellWeights1, recurrentToCellWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToOutputWeights1_init[] = {106, 214, 67, 23, 59, 158, 45, 3, 119, 132, 49, 205, 129, 218, 11, 98};
  model->setOperandValue(recurrentToOutputWeights1, recurrentToOutputWeights1_init, sizeof(uint8_t) * 16);
  static int32_t inputGateBias1_init[] = {-7876, 13488, -726, 32839};
  model->setOperandValue(inputGateBias1, inputGateBias1_init, sizeof(int32_t) * 4);
  static int32_t forgetGateBias1_init[] = {9206, -46884, -11693, -38724};
  model->setOperandValue(forgetGateBias1, forgetGateBias1_init, sizeof(int32_t) * 4);
  static int32_t cellGateBias1_init[] = {39481, 48624, 48976, -21419};
  model->setOperandValue(cellGateBias1, cellGateBias1_init, sizeof(int32_t) * 4);
  static int32_t outputGateBias1_init[] = {-58999, -17050, -41852, -40538};
  model->setOperandValue(outputGateBias1, outputGateBias1_init, sizeof(int32_t) * 4);
  static uint8_t dummy64_init[] = {128};
  model->setOperandValue(dummy64, dummy64_init, sizeof(uint8_t) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  static uint8_t dummy65_init[] = {128};
  model->setOperandValue(dummy65, dummy65_init, sizeof(uint8_t) * 1);
  static int32_t param65_init[] = {0};
  model->setOperandValue(param65, param65_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy64, param64}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {prevOutput1_tmp, dummy65, param65}, {prevOutput1});
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input1, inputToInputWeights1, inputToForgetWeights1, inputToCellWeights1, inputToOutputWeights1, recurrentToInputWeights1, recurrentToForgetWeights1, recurrentToCellWeights1, recurrentToOutputWeights1, inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, prevOutput1}, {cellStateOut1, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {prevCellState1, input1_tmp, prevOutput1_tmp},
    {cellStateOut1, output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.0078125f, 128);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.0078125f, 128);
  OperandType type12(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.0078125f, 128);
  OperandType type7(Type::TENSOR_QUANT16_SYMM, {1, 4}, 0.00048828125f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 4}, 0.0078125f, 128);
  OperandType type9(Type::TENSOR_QUANT16_SYMM, {0, 0}, 0.00048828125f, 0);
  // Phase 1, operands
  auto input1 = model->addOperand(&type6);
  auto inputToInputWeights1 = model->addOperand(&type1);
  auto inputToForgetWeights1 = model->addOperand(&type1);
  auto inputToCellWeights1 = model->addOperand(&type1);
  auto inputToOutputWeights1 = model->addOperand(&type1);
  auto recurrentToInputWeights1 = model->addOperand(&type2);
  auto recurrentToForgetWeights1 = model->addOperand(&type2);
  auto recurrentToCellWeights1 = model->addOperand(&type2);
  auto recurrentToOutputWeights1 = model->addOperand(&type2);
  auto inputGateBias1 = model->addOperand(&type3);
  auto forgetGateBias1 = model->addOperand(&type3);
  auto cellGateBias1 = model->addOperand(&type3);
  auto outputGateBias1 = model->addOperand(&type3);
  auto prevCellState1 = model->addOperand(&type7);
  auto prevOutput1 = model->addOperand(&type8);
  auto cellStateOut1 = model->addOperand(&type9);
  auto output1 = model->addOperand(&type10);
  auto input1_tmp = model->addOperand(&type6);
  auto dummy66 = model->addOperand(&type11);
  auto param66 = model->addOperand(&type12);
  auto prevOutput1_tmp = model->addOperand(&type8);
  auto dummy67 = model->addOperand(&type11);
  auto param67 = model->addOperand(&type12);
  // Phase 2, operations
  static uint8_t inputToInputWeights1_init[] = {146, 250, 235, 171, 10, 218, 171, 108};
  model->setOperandValue(inputToInputWeights1, inputToInputWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToForgetWeights1_init[] = {24, 50, 132, 179, 158, 110, 3, 169};
  model->setOperandValue(inputToForgetWeights1, inputToForgetWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToCellWeights1_init[] = {133, 34, 29, 49, 206, 109, 54, 183};
  model->setOperandValue(inputToCellWeights1, inputToCellWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t inputToOutputWeights1_init[] = {195, 187, 11, 99, 109, 10, 218, 48};
  model->setOperandValue(inputToOutputWeights1, inputToOutputWeights1_init, sizeof(uint8_t) * 8);
  static uint8_t recurrentToInputWeights1_init[] = {254, 206, 77, 168, 71, 20, 215, 6, 223, 7, 118, 225, 59, 130, 174, 26};
  model->setOperandValue(recurrentToInputWeights1, recurrentToInputWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToForgetWeights1_init[] = {137, 240, 103, 52, 68, 51, 237, 112, 0, 220, 89, 23, 69, 4, 207, 253};
  model->setOperandValue(recurrentToForgetWeights1, recurrentToForgetWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToCellWeights1_init[] = {172, 60, 205, 65, 14, 0, 140, 168, 240, 223, 133, 56, 142, 64, 246, 216};
  model->setOperandValue(recurrentToCellWeights1, recurrentToCellWeights1_init, sizeof(uint8_t) * 16);
  static uint8_t recurrentToOutputWeights1_init[] = {106, 214, 67, 23, 59, 158, 45, 3, 119, 132, 49, 205, 129, 218, 11, 98};
  model->setOperandValue(recurrentToOutputWeights1, recurrentToOutputWeights1_init, sizeof(uint8_t) * 16);
  static int32_t inputGateBias1_init[] = {-7876, 13488, -726, 32839};
  model->setOperandValue(inputGateBias1, inputGateBias1_init, sizeof(int32_t) * 4);
  static int32_t forgetGateBias1_init[] = {9206, -46884, -11693, -38724};
  model->setOperandValue(forgetGateBias1, forgetGateBias1_init, sizeof(int32_t) * 4);
  static int32_t cellGateBias1_init[] = {39481, 48624, 48976, -21419};
  model->setOperandValue(cellGateBias1, cellGateBias1_init, sizeof(int32_t) * 4);
  static int32_t outputGateBias1_init[] = {-58999, -17050, -41852, -40538};
  model->setOperandValue(outputGateBias1, outputGateBias1_init, sizeof(int32_t) * 4);
  static uint8_t dummy66_init[] = {128};
  model->setOperandValue(dummy66, dummy66_init, sizeof(uint8_t) * 1);
  static int32_t param66_init[] = {0};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static uint8_t dummy67_init[] = {128};
  model->setOperandValue(dummy67, dummy67_init, sizeof(uint8_t) * 1);
  static int32_t param67_init[] = {0};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy66, param66}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {prevOutput1_tmp, dummy67, param67}, {prevOutput1});
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input1, inputToInputWeights1, inputToForgetWeights1, inputToCellWeights1, inputToOutputWeights1, recurrentToInputWeights1, recurrentToForgetWeights1, recurrentToCellWeights1, recurrentToOutputWeights1, inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, prevOutput1}, {cellStateOut1, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {prevCellState1, input1_tmp, prevOutput1_tmp},
    {cellStateOut1, output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_all_tensors_as_inputs(Model *model) {
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.0078125f, 128);
  OperandType type7(Type::TENSOR_QUANT16_SYMM, {1, 4}, 0.00048828125f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 4}, 0.0078125f, 128);
  // Phase 1, operands
  auto input1 = model->addOperand(&type6);
  auto inputToInputWeights1 = model->addOperand(&type1);
  auto inputToForgetWeights1 = model->addOperand(&type1);
  auto inputToCellWeights1 = model->addOperand(&type1);
  auto inputToOutputWeights1 = model->addOperand(&type1);
  auto recurrentToInputWeights1 = model->addOperand(&type2);
  auto recurrentToForgetWeights1 = model->addOperand(&type2);
  auto recurrentToCellWeights1 = model->addOperand(&type2);
  auto recurrentToOutputWeights1 = model->addOperand(&type2);
  auto inputGateBias1 = model->addOperand(&type3);
  auto forgetGateBias1 = model->addOperand(&type3);
  auto cellGateBias1 = model->addOperand(&type3);
  auto outputGateBias1 = model->addOperand(&type3);
  auto prevCellState1 = model->addOperand(&type7);
  auto prevOutput1 = model->addOperand(&type8);
  auto cellStateOut1 = model->addOperand(&type7);
  auto output1 = model->addOperand(&type8);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input1, inputToInputWeights1, inputToForgetWeights1, inputToCellWeights1, inputToOutputWeights1, recurrentToInputWeights1, recurrentToForgetWeights1, recurrentToCellWeights1, recurrentToOutputWeights1, inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, prevOutput1}, {cellStateOut1, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, inputToInputWeights1, inputToForgetWeights1, inputToCellWeights1, inputToOutputWeights1, recurrentToInputWeights1, recurrentToForgetWeights1, recurrentToCellWeights1, recurrentToOutputWeights1, inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, prevOutput1},
    {cellStateOut1, output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.0078125f, 128);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.0078125f, 128);
  OperandType type7(Type::TENSOR_QUANT16_SYMM, {1, 4}, 0.00048828125f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 4}, 0.0078125f, 128);
  OperandType type9(Type::TENSOR_QUANT16_SYMM, {0, 0}, 0.00048828125f, 0);
  // Phase 1, operands
  auto input1 = model->addOperand(&type6);
  auto inputToInputWeights1 = model->addOperand(&type1);
  auto inputToForgetWeights1 = model->addOperand(&type1);
  auto inputToCellWeights1 = model->addOperand(&type1);
  auto inputToOutputWeights1 = model->addOperand(&type1);
  auto recurrentToInputWeights1 = model->addOperand(&type2);
  auto recurrentToForgetWeights1 = model->addOperand(&type2);
  auto recurrentToCellWeights1 = model->addOperand(&type2);
  auto recurrentToOutputWeights1 = model->addOperand(&type2);
  auto inputGateBias1 = model->addOperand(&type3);
  auto forgetGateBias1 = model->addOperand(&type3);
  auto cellGateBias1 = model->addOperand(&type3);
  auto outputGateBias1 = model->addOperand(&type3);
  auto prevCellState1 = model->addOperand(&type7);
  auto prevOutput1 = model->addOperand(&type8);
  auto cellStateOut1 = model->addOperand(&type9);
  auto output1 = model->addOperand(&type10);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input1, inputToInputWeights1, inputToForgetWeights1, inputToCellWeights1, inputToOutputWeights1, recurrentToInputWeights1, recurrentToForgetWeights1, recurrentToCellWeights1, recurrentToOutputWeights1, inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, prevOutput1}, {cellStateOut1, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, inputToInputWeights1, inputToForgetWeights1, inputToCellWeights1, inputToOutputWeights1, recurrentToInputWeights1, recurrentToForgetWeights1, recurrentToCellWeights1, recurrentToOutputWeights1, inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, prevOutput1},
    {cellStateOut1, output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.0078125f, 128);
  OperandType type12(Type::INT32, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.00408021f, 100);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.0078125f, 128);
  OperandType type7(Type::TENSOR_QUANT16_SYMM, {1, 4}, 0.00048828125f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 4}, 0.0078125f, 128);
  // Phase 1, operands
  auto input1 = model->addOperand(&type6);
  auto inputToInputWeights1 = model->addOperand(&type1);
  auto inputToForgetWeights1 = model->addOperand(&type1);
  auto inputToCellWeights1 = model->addOperand(&type1);
  auto inputToOutputWeights1 = model->addOperand(&type1);
  auto recurrentToInputWeights1 = model->addOperand(&type2);
  auto recurrentToForgetWeights1 = model->addOperand(&type2);
  auto recurrentToCellWeights1 = model->addOperand(&type2);
  auto recurrentToOutputWeights1 = model->addOperand(&type2);
  auto inputGateBias1 = model->addOperand(&type3);
  auto forgetGateBias1 = model->addOperand(&type3);
  auto cellGateBias1 = model->addOperand(&type3);
  auto outputGateBias1 = model->addOperand(&type3);
  auto prevCellState1 = model->addOperand(&type7);
  auto prevOutput1 = model->addOperand(&type8);
  auto cellStateOut1 = model->addOperand(&type7);
  auto output1 = model->addOperand(&type8);
  auto input1_tmp = model->addOperand(&type6);
  auto dummy68 = model->addOperand(&type11);
  auto param68 = model->addOperand(&type12);
  auto inputToInputWeights1_tmp = model->addOperand(&type1);
  auto dummy69 = model->addOperand(&type13);
  auto param69 = model->addOperand(&type12);
  auto inputToForgetWeights1_tmp = model->addOperand(&type1);
  auto dummy70 = model->addOperand(&type13);
  auto param70 = model->addOperand(&type12);
  auto inputToCellWeights1_tmp = model->addOperand(&type1);
  auto dummy71 = model->addOperand(&type13);
  auto param71 = model->addOperand(&type12);
  auto inputToOutputWeights1_tmp = model->addOperand(&type1);
  auto dummy72 = model->addOperand(&type13);
  auto param72 = model->addOperand(&type12);
  auto recurrentToInputWeights1_tmp = model->addOperand(&type2);
  auto dummy73 = model->addOperand(&type13);
  auto param73 = model->addOperand(&type12);
  auto recurrentToForgetWeights1_tmp = model->addOperand(&type2);
  auto dummy74 = model->addOperand(&type13);
  auto param74 = model->addOperand(&type12);
  auto recurrentToCellWeights1_tmp = model->addOperand(&type2);
  auto dummy75 = model->addOperand(&type13);
  auto param75 = model->addOperand(&type12);
  auto recurrentToOutputWeights1_tmp = model->addOperand(&type2);
  auto dummy76 = model->addOperand(&type13);
  auto param76 = model->addOperand(&type12);
  auto prevOutput1_tmp = model->addOperand(&type8);
  auto dummy77 = model->addOperand(&type11);
  auto param77 = model->addOperand(&type12);
  // Phase 2, operations
  static uint8_t dummy68_init[] = {128};
  model->setOperandValue(dummy68, dummy68_init, sizeof(uint8_t) * 1);
  static int32_t param68_init[] = {0};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static uint8_t dummy69_init[] = {100};
  model->setOperandValue(dummy69, dummy69_init, sizeof(uint8_t) * 1);
  static int32_t param69_init[] = {0};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static uint8_t dummy70_init[] = {100};
  model->setOperandValue(dummy70, dummy70_init, sizeof(uint8_t) * 1);
  static int32_t param70_init[] = {0};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  static uint8_t dummy71_init[] = {100};
  model->setOperandValue(dummy71, dummy71_init, sizeof(uint8_t) * 1);
  static int32_t param71_init[] = {0};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  static uint8_t dummy72_init[] = {100};
  model->setOperandValue(dummy72, dummy72_init, sizeof(uint8_t) * 1);
  static int32_t param72_init[] = {0};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static uint8_t dummy73_init[] = {100};
  model->setOperandValue(dummy73, dummy73_init, sizeof(uint8_t) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  static uint8_t dummy74_init[] = {100};
  model->setOperandValue(dummy74, dummy74_init, sizeof(uint8_t) * 1);
  static int32_t param74_init[] = {0};
  model->setOperandValue(param74, param74_init, sizeof(int32_t) * 1);
  static uint8_t dummy75_init[] = {100};
  model->setOperandValue(dummy75, dummy75_init, sizeof(uint8_t) * 1);
  static int32_t param75_init[] = {0};
  model->setOperandValue(param75, param75_init, sizeof(int32_t) * 1);
  static uint8_t dummy76_init[] = {100};
  model->setOperandValue(dummy76, dummy76_init, sizeof(uint8_t) * 1);
  static int32_t param76_init[] = {0};
  model->setOperandValue(param76, param76_init, sizeof(int32_t) * 1);
  static uint8_t dummy77_init[] = {128};
  model->setOperandValue(dummy77, dummy77_init, sizeof(uint8_t) * 1);
  static int32_t param77_init[] = {0};
  model->setOperandValue(param77, param77_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy68, param68}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToInputWeights1_tmp, dummy69, param69}, {inputToInputWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToForgetWeights1_tmp, dummy70, param70}, {inputToForgetWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToCellWeights1_tmp, dummy71, param71}, {inputToCellWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToOutputWeights1_tmp, dummy72, param72}, {inputToOutputWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToInputWeights1_tmp, dummy73, param73}, {recurrentToInputWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToForgetWeights1_tmp, dummy74, param74}, {recurrentToForgetWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToCellWeights1_tmp, dummy75, param75}, {recurrentToCellWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToOutputWeights1_tmp, dummy76, param76}, {recurrentToOutputWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {prevOutput1_tmp, dummy77, param77}, {prevOutput1});
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input1, inputToInputWeights1, inputToForgetWeights1, inputToCellWeights1, inputToOutputWeights1, recurrentToInputWeights1, recurrentToForgetWeights1, recurrentToCellWeights1, recurrentToOutputWeights1, inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, prevOutput1}, {cellStateOut1, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, input1_tmp, inputToInputWeights1_tmp, inputToForgetWeights1_tmp, inputToCellWeights1_tmp, inputToOutputWeights1_tmp, recurrentToInputWeights1_tmp, recurrentToForgetWeights1_tmp, recurrentToCellWeights1_tmp, recurrentToOutputWeights1_tmp, prevOutput1_tmp},
    {cellStateOut1, output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {4, 2}, 0.00408021f, 100);
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.0078125f, 128);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.0078125f, 128);
  OperandType type12(Type::INT32, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.00408021f, 100);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {4, 4}, 0.00408021f, 100);
  OperandType type3(Type::TENSOR_INT32, {4}, 3.1876640625e-05f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.0078125f, 128);
  OperandType type7(Type::TENSOR_QUANT16_SYMM, {1, 4}, 0.00048828125f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 4}, 0.0078125f, 128);
  OperandType type9(Type::TENSOR_QUANT16_SYMM, {0, 0}, 0.00048828125f, 0);
  // Phase 1, operands
  auto input1 = model->addOperand(&type6);
  auto inputToInputWeights1 = model->addOperand(&type1);
  auto inputToForgetWeights1 = model->addOperand(&type1);
  auto inputToCellWeights1 = model->addOperand(&type1);
  auto inputToOutputWeights1 = model->addOperand(&type1);
  auto recurrentToInputWeights1 = model->addOperand(&type2);
  auto recurrentToForgetWeights1 = model->addOperand(&type2);
  auto recurrentToCellWeights1 = model->addOperand(&type2);
  auto recurrentToOutputWeights1 = model->addOperand(&type2);
  auto inputGateBias1 = model->addOperand(&type3);
  auto forgetGateBias1 = model->addOperand(&type3);
  auto cellGateBias1 = model->addOperand(&type3);
  auto outputGateBias1 = model->addOperand(&type3);
  auto prevCellState1 = model->addOperand(&type7);
  auto prevOutput1 = model->addOperand(&type8);
  auto cellStateOut1 = model->addOperand(&type9);
  auto output1 = model->addOperand(&type10);
  auto input1_tmp = model->addOperand(&type6);
  auto dummy78 = model->addOperand(&type11);
  auto param78 = model->addOperand(&type12);
  auto inputToInputWeights1_tmp = model->addOperand(&type1);
  auto dummy79 = model->addOperand(&type13);
  auto param79 = model->addOperand(&type12);
  auto inputToForgetWeights1_tmp = model->addOperand(&type1);
  auto dummy80 = model->addOperand(&type13);
  auto param80 = model->addOperand(&type12);
  auto inputToCellWeights1_tmp = model->addOperand(&type1);
  auto dummy81 = model->addOperand(&type13);
  auto param81 = model->addOperand(&type12);
  auto inputToOutputWeights1_tmp = model->addOperand(&type1);
  auto dummy82 = model->addOperand(&type13);
  auto param82 = model->addOperand(&type12);
  auto recurrentToInputWeights1_tmp = model->addOperand(&type2);
  auto dummy83 = model->addOperand(&type13);
  auto param83 = model->addOperand(&type12);
  auto recurrentToForgetWeights1_tmp = model->addOperand(&type2);
  auto dummy84 = model->addOperand(&type13);
  auto param84 = model->addOperand(&type12);
  auto recurrentToCellWeights1_tmp = model->addOperand(&type2);
  auto dummy85 = model->addOperand(&type13);
  auto param85 = model->addOperand(&type12);
  auto recurrentToOutputWeights1_tmp = model->addOperand(&type2);
  auto dummy86 = model->addOperand(&type13);
  auto param86 = model->addOperand(&type12);
  auto prevOutput1_tmp = model->addOperand(&type8);
  auto dummy87 = model->addOperand(&type11);
  auto param87 = model->addOperand(&type12);
  // Phase 2, operations
  static uint8_t dummy78_init[] = {128};
  model->setOperandValue(dummy78, dummy78_init, sizeof(uint8_t) * 1);
  static int32_t param78_init[] = {0};
  model->setOperandValue(param78, param78_init, sizeof(int32_t) * 1);
  static uint8_t dummy79_init[] = {100};
  model->setOperandValue(dummy79, dummy79_init, sizeof(uint8_t) * 1);
  static int32_t param79_init[] = {0};
  model->setOperandValue(param79, param79_init, sizeof(int32_t) * 1);
  static uint8_t dummy80_init[] = {100};
  model->setOperandValue(dummy80, dummy80_init, sizeof(uint8_t) * 1);
  static int32_t param80_init[] = {0};
  model->setOperandValue(param80, param80_init, sizeof(int32_t) * 1);
  static uint8_t dummy81_init[] = {100};
  model->setOperandValue(dummy81, dummy81_init, sizeof(uint8_t) * 1);
  static int32_t param81_init[] = {0};
  model->setOperandValue(param81, param81_init, sizeof(int32_t) * 1);
  static uint8_t dummy82_init[] = {100};
  model->setOperandValue(dummy82, dummy82_init, sizeof(uint8_t) * 1);
  static int32_t param82_init[] = {0};
  model->setOperandValue(param82, param82_init, sizeof(int32_t) * 1);
  static uint8_t dummy83_init[] = {100};
  model->setOperandValue(dummy83, dummy83_init, sizeof(uint8_t) * 1);
  static int32_t param83_init[] = {0};
  model->setOperandValue(param83, param83_init, sizeof(int32_t) * 1);
  static uint8_t dummy84_init[] = {100};
  model->setOperandValue(dummy84, dummy84_init, sizeof(uint8_t) * 1);
  static int32_t param84_init[] = {0};
  model->setOperandValue(param84, param84_init, sizeof(int32_t) * 1);
  static uint8_t dummy85_init[] = {100};
  model->setOperandValue(dummy85, dummy85_init, sizeof(uint8_t) * 1);
  static int32_t param85_init[] = {0};
  model->setOperandValue(param85, param85_init, sizeof(int32_t) * 1);
  static uint8_t dummy86_init[] = {100};
  model->setOperandValue(dummy86, dummy86_init, sizeof(uint8_t) * 1);
  static int32_t param86_init[] = {0};
  model->setOperandValue(param86, param86_init, sizeof(int32_t) * 1);
  static uint8_t dummy87_init[] = {128};
  model->setOperandValue(dummy87, dummy87_init, sizeof(uint8_t) * 1);
  static int32_t param87_init[] = {0};
  model->setOperandValue(param87, param87_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy78, param78}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToInputWeights1_tmp, dummy79, param79}, {inputToInputWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToForgetWeights1_tmp, dummy80, param80}, {inputToForgetWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToCellWeights1_tmp, dummy81, param81}, {inputToCellWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {inputToOutputWeights1_tmp, dummy82, param82}, {inputToOutputWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToInputWeights1_tmp, dummy83, param83}, {recurrentToInputWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToForgetWeights1_tmp, dummy84, param84}, {recurrentToForgetWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToCellWeights1_tmp, dummy85, param85}, {recurrentToCellWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrentToOutputWeights1_tmp, dummy86, param86}, {recurrentToOutputWeights1});
  model->addOperation(ANEURALNETWORKS_ADD, {prevOutput1_tmp, dummy87, param87}, {prevOutput1});
  model->addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, {input1, inputToInputWeights1, inputToForgetWeights1, inputToCellWeights1, inputToOutputWeights1, recurrentToInputWeights1, recurrentToForgetWeights1, recurrentToCellWeights1, recurrentToOutputWeights1, inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, prevOutput1}, {cellStateOut1, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {inputGateBias1, forgetGateBias1, cellGateBias1, outputGateBias1, prevCellState1, input1_tmp, inputToInputWeights1_tmp, inputToForgetWeights1_tmp, inputToCellWeights1_tmp, inputToOutputWeights1_tmp, recurrentToInputWeights1_tmp, recurrentToForgetWeights1_tmp, recurrentToCellWeights1_tmp, recurrentToOutputWeights1_tmp, prevOutput1_tmp},
    {cellStateOut1, output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::quantized_lstm
