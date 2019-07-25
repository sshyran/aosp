// Generated from rnn_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::rnn_relaxed {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto weights = model->addOperand(&type1);
  auto recurrent_weights = model->addOperand(&type2);
  auto bias = model->addOperand(&type3);
  auto hidden_state_in = model->addOperand(&type4);
  auto activation_param = model->addOperand(&type5);
  auto hidden_state_out = model->addOperand(&type4);
  auto output = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t activation_param_init[] = {1};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_RNN, {input, weights, recurrent_weights, bias, hidden_state_in, activation_param}, {hidden_state_out, output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, weights, recurrent_weights, bias, hidden_state_in},
    {hidden_state_out, output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {0};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::rnn_relaxed
namespace generated_tests::rnn_relaxed {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto weights = model->addOperand(&type1);
  auto recurrent_weights = model->addOperand(&type2);
  auto bias = model->addOperand(&type3);
  auto hidden_state_in = model->addOperand(&type4);
  auto activation_param = model->addOperand(&type5);
  auto hidden_state_out = model->addOperand(&type6);
  auto output = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation_param_init[] = {1};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_RNN, {input, weights, recurrent_weights, bias, hidden_state_in, activation_param}, {hidden_state_out, output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, weights, recurrent_weights, bias, hidden_state_in},
    {hidden_state_out, output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {0};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::rnn_relaxed
namespace generated_tests::rnn_relaxed {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto weights = model->addOperand(&type1);
  auto recurrent_weights = model->addOperand(&type2);
  auto bias = model->addOperand(&type3);
  auto hidden_state_in = model->addOperand(&type4);
  auto activation_param = model->addOperand(&type5);
  auto hidden_state_out = model->addOperand(&type4);
  auto output = model->addOperand(&type4);
  auto input_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type7);
  auto param = model->addOperand(&type5);
  auto weights_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type7);
  auto param1 = model->addOperand(&type5);
  auto recurrent_weights_tmp = model->addOperand(&type2);
  auto dummy2 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type5);
  auto bias_tmp = model->addOperand(&type3);
  auto dummy3 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type5);
  auto hidden_state_in_tmp = model->addOperand(&type4);
  auto dummy4 = model->addOperand(&type7);
  auto param4 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t activation_param_init[] = {1};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(float) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy, param}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {weights_tmp, dummy1, param1}, {weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_weights_tmp, dummy2, param2}, {recurrent_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {bias_tmp, dummy3, param3}, {bias});
  model->addOperation(ANEURALNETWORKS_ADD, {hidden_state_in_tmp, dummy4, param4}, {hidden_state_in});
  model->addOperation(ANEURALNETWORKS_RNN, {input, weights, recurrent_weights, bias, hidden_state_in, activation_param}, {hidden_state_out, output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_tmp, weights_tmp, recurrent_weights_tmp, bias_tmp, hidden_state_in_tmp},
    {hidden_state_out, output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {0};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::rnn_relaxed
namespace generated_tests::rnn_relaxed {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto weights = model->addOperand(&type1);
  auto recurrent_weights = model->addOperand(&type2);
  auto bias = model->addOperand(&type3);
  auto hidden_state_in = model->addOperand(&type4);
  auto activation_param = model->addOperand(&type5);
  auto hidden_state_out = model->addOperand(&type6);
  auto output = model->addOperand(&type6);
  auto input_tmp = model->addOperand(&type0);
  auto dummy5 = model->addOperand(&type7);
  auto param5 = model->addOperand(&type5);
  auto weights_tmp = model->addOperand(&type1);
  auto dummy6 = model->addOperand(&type7);
  auto param6 = model->addOperand(&type5);
  auto recurrent_weights_tmp = model->addOperand(&type2);
  auto dummy7 = model->addOperand(&type7);
  auto param7 = model->addOperand(&type5);
  auto bias_tmp = model->addOperand(&type3);
  auto dummy8 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type5);
  auto hidden_state_in_tmp = model->addOperand(&type4);
  auto dummy9 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t activation_param_init[] = {1};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  static float dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(float) * 1);
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static float dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(float) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static float dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(float) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy5, param5}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {weights_tmp, dummy6, param6}, {weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_weights_tmp, dummy7, param7}, {recurrent_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {bias_tmp, dummy8, param8}, {bias});
  model->addOperation(ANEURALNETWORKS_ADD, {hidden_state_in_tmp, dummy9, param9}, {hidden_state_in});
  model->addOperation(ANEURALNETWORKS_RNN, {input, weights, recurrent_weights, bias, hidden_state_in, activation_param}, {hidden_state_out, output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_tmp, weights_tmp, recurrent_weights_tmp, bias_tmp, hidden_state_in_tmp},
    {hidden_state_out, output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {0};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::rnn_relaxed
