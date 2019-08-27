// Generated from unidirectional_sequence_rnn.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 16, 16});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto weights = model->addOperand(&type1);
  auto recurrent_weights = model->addOperand(&type2);
  auto bias = model->addOperand(&type3);
  auto hidden_state = model->addOperand(&type4);
  auto activation = model->addOperand(&type6);
  auto time_major = model->addOperand(&type6);
  auto output = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static int32_t time_major_init[] = {0};
  model->setOperandValue(time_major, time_major_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input, weights, recurrent_weights, bias, hidden_state, activation, time_major}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, weights, recurrent_weights, bias, hidden_state},
    {output});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type6(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto weights = model->addOperand(&type1);
  auto recurrent_weights = model->addOperand(&type2);
  auto bias = model->addOperand(&type3);
  auto hidden_state = model->addOperand(&type4);
  auto activation = model->addOperand(&type6);
  auto time_major = model->addOperand(&type6);
  auto output = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static int32_t time_major_init[] = {0};
  model->setOperandValue(time_major, time_major_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input, weights, recurrent_weights, bias, hidden_state, activation, time_major}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, weights, recurrent_weights, bias, hidden_state},
    {output});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type10(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 16, 16});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto weights = model->addOperand(&type1);
  auto recurrent_weights = model->addOperand(&type2);
  auto bias = model->addOperand(&type3);
  auto hidden_state = model->addOperand(&type4);
  auto activation = model->addOperand(&type6);
  auto time_major = model->addOperand(&type6);
  auto output = model->addOperand(&type5);
  auto input_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type10);
  auto param = model->addOperand(&type6);
  auto weights_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type10);
  auto param1 = model->addOperand(&type6);
  auto recurrent_weights_tmp = model->addOperand(&type2);
  auto dummy2 = model->addOperand(&type10);
  auto param2 = model->addOperand(&type6);
  auto bias_tmp = model->addOperand(&type3);
  auto dummy3 = model->addOperand(&type10);
  auto param3 = model->addOperand(&type6);
  auto hidden_state_tmp = model->addOperand(&type4);
  auto dummy4 = model->addOperand(&type10);
  auto param4 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static int32_t time_major_init[] = {0};
  model->setOperandValue(time_major, time_major_init, sizeof(int32_t) * 1);
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
  model->addOperation(ANEURALNETWORKS_ADD, {hidden_state_tmp, dummy4, param4}, {hidden_state});
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input, weights, recurrent_weights, bias, hidden_state, activation, time_major}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_tmp, weights_tmp, recurrent_weights_tmp, bias_tmp, hidden_state_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type10(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type6(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto weights = model->addOperand(&type1);
  auto recurrent_weights = model->addOperand(&type2);
  auto bias = model->addOperand(&type3);
  auto hidden_state = model->addOperand(&type4);
  auto activation = model->addOperand(&type6);
  auto time_major = model->addOperand(&type6);
  auto output = model->addOperand(&type9);
  auto input_tmp = model->addOperand(&type0);
  auto dummy5 = model->addOperand(&type10);
  auto param5 = model->addOperand(&type6);
  auto weights_tmp = model->addOperand(&type1);
  auto dummy6 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type6);
  auto recurrent_weights_tmp = model->addOperand(&type2);
  auto dummy7 = model->addOperand(&type10);
  auto param7 = model->addOperand(&type6);
  auto bias_tmp = model->addOperand(&type3);
  auto dummy8 = model->addOperand(&type10);
  auto param8 = model->addOperand(&type6);
  auto hidden_state_tmp = model->addOperand(&type4);
  auto dummy9 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static int32_t time_major_init[] = {0};
  model->setOperandValue(time_major, time_major_init, sizeof(int32_t) * 1);
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
  model->addOperation(ANEURALNETWORKS_ADD, {hidden_state_tmp, dummy9, param9}, {hidden_state});
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input, weights, recurrent_weights, bias, hidden_state, activation, time_major}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_tmp, weights_tmp, recurrent_weights_tmp, bias_tmp, hidden_state_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 16, 16});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto weights = model->addOperand(&type1);
  auto recurrent_weights = model->addOperand(&type2);
  auto bias = model->addOperand(&type3);
  auto hidden_state = model->addOperand(&type4);
  auto activation = model->addOperand(&type6);
  auto time_major = model->addOperand(&type6);
  auto output = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static int32_t time_major_init[] = {0};
  model->setOperandValue(time_major, time_major_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input, weights, recurrent_weights, bias, hidden_state, activation, time_major}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, weights, recurrent_weights, bias, hidden_state},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type6(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto weights = model->addOperand(&type1);
  auto recurrent_weights = model->addOperand(&type2);
  auto bias = model->addOperand(&type3);
  auto hidden_state = model->addOperand(&type4);
  auto activation = model->addOperand(&type6);
  auto time_major = model->addOperand(&type6);
  auto output = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static int32_t time_major_init[] = {0};
  model->setOperandValue(time_major, time_major_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input, weights, recurrent_weights, bias, hidden_state, activation, time_major}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, weights, recurrent_weights, bias, hidden_state},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type10(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 16, 16});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto weights = model->addOperand(&type1);
  auto recurrent_weights = model->addOperand(&type2);
  auto bias = model->addOperand(&type3);
  auto hidden_state = model->addOperand(&type4);
  auto activation = model->addOperand(&type6);
  auto time_major = model->addOperand(&type6);
  auto output = model->addOperand(&type5);
  auto input_tmp = model->addOperand(&type0);
  auto dummy10 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type6);
  auto weights_tmp = model->addOperand(&type1);
  auto dummy11 = model->addOperand(&type10);
  auto param11 = model->addOperand(&type6);
  auto recurrent_weights_tmp = model->addOperand(&type2);
  auto dummy12 = model->addOperand(&type10);
  auto param12 = model->addOperand(&type6);
  auto bias_tmp = model->addOperand(&type3);
  auto dummy13 = model->addOperand(&type10);
  auto param13 = model->addOperand(&type6);
  auto hidden_state_tmp = model->addOperand(&type4);
  auto dummy14 = model->addOperand(&type10);
  auto param14 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static int32_t time_major_init[] = {0};
  model->setOperandValue(time_major, time_major_init, sizeof(int32_t) * 1);
  static float dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(float) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static float dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(float) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static float dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(float) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(float) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static float dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(float) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy10, param10}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {weights_tmp, dummy11, param11}, {weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_weights_tmp, dummy12, param12}, {recurrent_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {bias_tmp, dummy13, param13}, {bias});
  model->addOperation(ANEURALNETWORKS_ADD, {hidden_state_tmp, dummy14, param14}, {hidden_state});
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input, weights, recurrent_weights, bias, hidden_state, activation, time_major}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_tmp, weights_tmp, recurrent_weights_tmp, bias_tmp, hidden_state_tmp},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type10(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type6(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto weights = model->addOperand(&type1);
  auto recurrent_weights = model->addOperand(&type2);
  auto bias = model->addOperand(&type3);
  auto hidden_state = model->addOperand(&type4);
  auto activation = model->addOperand(&type6);
  auto time_major = model->addOperand(&type6);
  auto output = model->addOperand(&type9);
  auto input_tmp = model->addOperand(&type0);
  auto dummy15 = model->addOperand(&type10);
  auto param15 = model->addOperand(&type6);
  auto weights_tmp = model->addOperand(&type1);
  auto dummy16 = model->addOperand(&type10);
  auto param16 = model->addOperand(&type6);
  auto recurrent_weights_tmp = model->addOperand(&type2);
  auto dummy17 = model->addOperand(&type10);
  auto param17 = model->addOperand(&type6);
  auto bias_tmp = model->addOperand(&type3);
  auto dummy18 = model->addOperand(&type10);
  auto param18 = model->addOperand(&type6);
  auto hidden_state_tmp = model->addOperand(&type4);
  auto dummy19 = model->addOperand(&type10);
  auto param19 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static int32_t time_major_init[] = {0};
  model->setOperandValue(time_major, time_major_init, sizeof(int32_t) * 1);
  static float dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(float) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(float) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(float) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy15, param15}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {weights_tmp, dummy16, param16}, {weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_weights_tmp, dummy17, param17}, {recurrent_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {bias_tmp, dummy18, param18}, {bias});
  model->addOperation(ANEURALNETWORKS_ADD, {hidden_state_tmp, dummy19, param19}, {hidden_state});
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input, weights, recurrent_weights, bias, hidden_state, activation, time_major}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_tmp, weights_tmp, recurrent_weights_tmp, bias_tmp, hidden_state_tmp},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_float16(Model *model) {
  OperandType type11(Type::TENSOR_FLOAT16, {16});
  OperandType type12(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type13(Type::TENSOR_FLOAT16, {2, 16, 8});
  OperandType type14(Type::TENSOR_FLOAT16, {2, 16, 16});
  OperandType type15(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type16(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type13);
  auto weights = model->addOperand(&type16);
  auto recurrent_weights = model->addOperand(&type15);
  auto bias = model->addOperand(&type11);
  auto hidden_state = model->addOperand(&type12);
  auto activation = model->addOperand(&type6);
  auto time_major = model->addOperand(&type6);
  auto output = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static int32_t time_major_init[] = {0};
  model->setOperandValue(time_major, time_major_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input, weights, recurrent_weights, bias, hidden_state, activation, time_major}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, weights, recurrent_weights, bias, hidden_state},
    {output});
  assert(model->isValid());
}

bool is_ignored_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_float16_dynamic_output_shape(Model *model) {
  OperandType type11(Type::TENSOR_FLOAT16, {16});
  OperandType type12(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type13(Type::TENSOR_FLOAT16, {2, 16, 8});
  OperandType type15(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type16(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type13);
  auto weights = model->addOperand(&type16);
  auto recurrent_weights = model->addOperand(&type15);
  auto bias = model->addOperand(&type11);
  auto hidden_state = model->addOperand(&type12);
  auto activation = model->addOperand(&type6);
  auto time_major = model->addOperand(&type6);
  auto output = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static int32_t time_major_init[] = {0};
  model->setOperandValue(time_major, time_major_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input, weights, recurrent_weights, bias, hidden_state, activation, time_major}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, weights, recurrent_weights, bias, hidden_state},
    {output});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_float16_all_inputs_as_internal(Model *model) {
  OperandType type14(Type::TENSOR_FLOAT16, {2, 16, 16});
  OperandType type18(Type::TENSOR_FLOAT16, {2, 16, 8});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type21(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type22(Type::TENSOR_FLOAT16, {16});
  OperandType type23(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type18);
  auto weights = model->addOperand(&type20);
  auto recurrent_weights = model->addOperand(&type21);
  auto bias = model->addOperand(&type22);
  auto hidden_state = model->addOperand(&type23);
  auto activation = model->addOperand(&type6);
  auto time_major = model->addOperand(&type6);
  auto output = model->addOperand(&type14);
  auto input_tmp = model->addOperand(&type18);
  auto dummy20 = model->addOperand(&type19);
  auto param20 = model->addOperand(&type6);
  auto weights_tmp = model->addOperand(&type20);
  auto dummy21 = model->addOperand(&type19);
  auto param21 = model->addOperand(&type6);
  auto recurrent_weights_tmp = model->addOperand(&type21);
  auto dummy22 = model->addOperand(&type19);
  auto param22 = model->addOperand(&type6);
  auto bias_tmp = model->addOperand(&type22);
  auto dummy23 = model->addOperand(&type19);
  auto param23 = model->addOperand(&type6);
  auto hidden_state_tmp = model->addOperand(&type23);
  auto dummy24 = model->addOperand(&type19);
  auto param24 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static int32_t time_major_init[] = {0};
  model->setOperandValue(time_major, time_major_init, sizeof(int32_t) * 1);
  static _Float16 dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(_Float16) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static _Float16 dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(_Float16) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static _Float16 dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(_Float16) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static _Float16 dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(_Float16) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(_Float16) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy20, param20}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {weights_tmp, dummy21, param21}, {weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_weights_tmp, dummy22, param22}, {recurrent_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {bias_tmp, dummy23, param23}, {bias});
  model->addOperation(ANEURALNETWORKS_ADD, {hidden_state_tmp, dummy24, param24}, {hidden_state});
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input, weights, recurrent_weights, bias, hidden_state, activation, time_major}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_tmp, weights_tmp, recurrent_weights_tmp, bias_tmp, hidden_state_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {2, 16, 8});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type21(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type22(Type::TENSOR_FLOAT16, {16});
  OperandType type23(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type18);
  auto weights = model->addOperand(&type20);
  auto recurrent_weights = model->addOperand(&type21);
  auto bias = model->addOperand(&type22);
  auto hidden_state = model->addOperand(&type23);
  auto activation = model->addOperand(&type6);
  auto time_major = model->addOperand(&type6);
  auto output = model->addOperand(&type17);
  auto input_tmp = model->addOperand(&type18);
  auto dummy25 = model->addOperand(&type19);
  auto param25 = model->addOperand(&type6);
  auto weights_tmp = model->addOperand(&type20);
  auto dummy26 = model->addOperand(&type19);
  auto param26 = model->addOperand(&type6);
  auto recurrent_weights_tmp = model->addOperand(&type21);
  auto dummy27 = model->addOperand(&type19);
  auto param27 = model->addOperand(&type6);
  auto bias_tmp = model->addOperand(&type22);
  auto dummy28 = model->addOperand(&type19);
  auto param28 = model->addOperand(&type6);
  auto hidden_state_tmp = model->addOperand(&type23);
  auto dummy29 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static int32_t time_major_init[] = {0};
  model->setOperandValue(time_major, time_major_init, sizeof(int32_t) * 1);
  static _Float16 dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(_Float16) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static _Float16 dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static _Float16 dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(_Float16) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static _Float16 dummy28_init[] = {0.0f};
  model->setOperandValue(dummy28, dummy28_init, sizeof(_Float16) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static _Float16 dummy29_init[] = {0.0f};
  model->setOperandValue(dummy29, dummy29_init, sizeof(_Float16) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy25, param25}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {weights_tmp, dummy26, param26}, {weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_weights_tmp, dummy27, param27}, {recurrent_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {bias_tmp, dummy28, param28}, {bias});
  model->addOperation(ANEURALNETWORKS_ADD, {hidden_state_tmp, dummy29, param29}, {hidden_state});
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input, weights, recurrent_weights, bias, hidden_state, activation, time_major}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_tmp, weights_tmp, recurrent_weights_tmp, bias_tmp, hidden_state_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_2(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {16, 2, 8});
  OperandType type8(Type::TENSOR_FLOAT32, {16, 2, 16});
  // Phase 1, operands
  auto input1 = model->addOperand(&type7);
  auto weights1 = model->addOperand(&type1);
  auto recurrent_weights1 = model->addOperand(&type2);
  auto bias1 = model->addOperand(&type3);
  auto hidden_state1 = model->addOperand(&type4);
  auto activation1 = model->addOperand(&type6);
  auto time_major1 = model->addOperand(&type6);
  auto output1 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static int32_t time_major1_init[] = {1};
  model->setOperandValue(time_major1, time_major1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input1, weights1, recurrent_weights1, bias1, hidden_state1, activation1, time_major1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, weights1, recurrent_weights1, bias1, hidden_state1},
    {output1});
  assert(model->isValid());
}

bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {16, 2, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto input1 = model->addOperand(&type7);
  auto weights1 = model->addOperand(&type1);
  auto recurrent_weights1 = model->addOperand(&type2);
  auto bias1 = model->addOperand(&type3);
  auto hidden_state1 = model->addOperand(&type4);
  auto activation1 = model->addOperand(&type6);
  auto time_major1 = model->addOperand(&type6);
  auto output1 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static int32_t time_major1_init[] = {1};
  model->setOperandValue(time_major1, time_major1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input1, weights1, recurrent_weights1, bias1, hidden_state1, activation1, time_major1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, weights1, recurrent_weights1, bias1, hidden_state1},
    {output1});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_all_inputs_as_internal_2(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type10(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {16, 2, 8});
  OperandType type8(Type::TENSOR_FLOAT32, {16, 2, 16});
  // Phase 1, operands
  auto input1 = model->addOperand(&type7);
  auto weights1 = model->addOperand(&type1);
  auto recurrent_weights1 = model->addOperand(&type2);
  auto bias1 = model->addOperand(&type3);
  auto hidden_state1 = model->addOperand(&type4);
  auto activation1 = model->addOperand(&type6);
  auto time_major1 = model->addOperand(&type6);
  auto output1 = model->addOperand(&type8);
  auto input1_tmp = model->addOperand(&type7);
  auto dummy30 = model->addOperand(&type10);
  auto param30 = model->addOperand(&type6);
  auto weights1_tmp = model->addOperand(&type1);
  auto dummy31 = model->addOperand(&type10);
  auto param31 = model->addOperand(&type6);
  auto recurrent_weights1_tmp = model->addOperand(&type2);
  auto dummy32 = model->addOperand(&type10);
  auto param32 = model->addOperand(&type6);
  auto bias1_tmp = model->addOperand(&type3);
  auto dummy33 = model->addOperand(&type10);
  auto param33 = model->addOperand(&type6);
  auto hidden_state1_tmp = model->addOperand(&type4);
  auto dummy34 = model->addOperand(&type10);
  auto param34 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static int32_t time_major1_init[] = {1};
  model->setOperandValue(time_major1, time_major1_init, sizeof(int32_t) * 1);
  static float dummy30_init[] = {0.0f};
  model->setOperandValue(dummy30, dummy30_init, sizeof(float) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static float dummy31_init[] = {0.0f};
  model->setOperandValue(dummy31, dummy31_init, sizeof(float) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static float dummy32_init[] = {0.0f};
  model->setOperandValue(dummy32, dummy32_init, sizeof(float) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float dummy33_init[] = {0.0f};
  model->setOperandValue(dummy33, dummy33_init, sizeof(float) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float dummy34_init[] = {0.0f};
  model->setOperandValue(dummy34, dummy34_init, sizeof(float) * 1);
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy30, param30}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {weights1_tmp, dummy31, param31}, {weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_weights1_tmp, dummy32, param32}, {recurrent_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {bias1_tmp, dummy33, param33}, {bias1});
  model->addOperation(ANEURALNETWORKS_ADD, {hidden_state1_tmp, dummy34, param34}, {hidden_state1});
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input1, weights1, recurrent_weights1, bias1, hidden_state1, activation1, time_major1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1_tmp, weights1_tmp, recurrent_weights1_tmp, bias1_tmp, hidden_state1_tmp},
    {output1});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type10(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {16, 2, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto input1 = model->addOperand(&type7);
  auto weights1 = model->addOperand(&type1);
  auto recurrent_weights1 = model->addOperand(&type2);
  auto bias1 = model->addOperand(&type3);
  auto hidden_state1 = model->addOperand(&type4);
  auto activation1 = model->addOperand(&type6);
  auto time_major1 = model->addOperand(&type6);
  auto output1 = model->addOperand(&type9);
  auto input1_tmp = model->addOperand(&type7);
  auto dummy35 = model->addOperand(&type10);
  auto param35 = model->addOperand(&type6);
  auto weights1_tmp = model->addOperand(&type1);
  auto dummy36 = model->addOperand(&type10);
  auto param36 = model->addOperand(&type6);
  auto recurrent_weights1_tmp = model->addOperand(&type2);
  auto dummy37 = model->addOperand(&type10);
  auto param37 = model->addOperand(&type6);
  auto bias1_tmp = model->addOperand(&type3);
  auto dummy38 = model->addOperand(&type10);
  auto param38 = model->addOperand(&type6);
  auto hidden_state1_tmp = model->addOperand(&type4);
  auto dummy39 = model->addOperand(&type10);
  auto param39 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static int32_t time_major1_init[] = {1};
  model->setOperandValue(time_major1, time_major1_init, sizeof(int32_t) * 1);
  static float dummy35_init[] = {0.0f};
  model->setOperandValue(dummy35, dummy35_init, sizeof(float) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float dummy36_init[] = {0.0f};
  model->setOperandValue(dummy36, dummy36_init, sizeof(float) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float dummy37_init[] = {0.0f};
  model->setOperandValue(dummy37, dummy37_init, sizeof(float) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static float dummy38_init[] = {0.0f};
  model->setOperandValue(dummy38, dummy38_init, sizeof(float) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static float dummy39_init[] = {0.0f};
  model->setOperandValue(dummy39, dummy39_init, sizeof(float) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy35, param35}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {weights1_tmp, dummy36, param36}, {weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_weights1_tmp, dummy37, param37}, {recurrent_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {bias1_tmp, dummy38, param38}, {bias1});
  model->addOperation(ANEURALNETWORKS_ADD, {hidden_state1_tmp, dummy39, param39}, {hidden_state1});
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input1, weights1, recurrent_weights1, bias1, hidden_state1, activation1, time_major1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1_tmp, weights1_tmp, recurrent_weights1_tmp, bias1_tmp, hidden_state1_tmp},
    {output1});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_relaxed_2(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {16, 2, 8});
  OperandType type8(Type::TENSOR_FLOAT32, {16, 2, 16});
  // Phase 1, operands
  auto input1 = model->addOperand(&type7);
  auto weights1 = model->addOperand(&type1);
  auto recurrent_weights1 = model->addOperand(&type2);
  auto bias1 = model->addOperand(&type3);
  auto hidden_state1 = model->addOperand(&type4);
  auto activation1 = model->addOperand(&type6);
  auto time_major1 = model->addOperand(&type6);
  auto output1 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static int32_t time_major1_init[] = {1};
  model->setOperandValue(time_major1, time_major1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input1, weights1, recurrent_weights1, bias1, hidden_state1, activation1, time_major1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, weights1, recurrent_weights1, bias1, hidden_state1},
    {output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {16, 2, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto input1 = model->addOperand(&type7);
  auto weights1 = model->addOperand(&type1);
  auto recurrent_weights1 = model->addOperand(&type2);
  auto bias1 = model->addOperand(&type3);
  auto hidden_state1 = model->addOperand(&type4);
  auto activation1 = model->addOperand(&type6);
  auto time_major1 = model->addOperand(&type6);
  auto output1 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static int32_t time_major1_init[] = {1};
  model->setOperandValue(time_major1, time_major1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input1, weights1, recurrent_weights1, bias1, hidden_state1, activation1, time_major1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, weights1, recurrent_weights1, bias1, hidden_state1},
    {output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type10(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {16, 2, 8});
  OperandType type8(Type::TENSOR_FLOAT32, {16, 2, 16});
  // Phase 1, operands
  auto input1 = model->addOperand(&type7);
  auto weights1 = model->addOperand(&type1);
  auto recurrent_weights1 = model->addOperand(&type2);
  auto bias1 = model->addOperand(&type3);
  auto hidden_state1 = model->addOperand(&type4);
  auto activation1 = model->addOperand(&type6);
  auto time_major1 = model->addOperand(&type6);
  auto output1 = model->addOperand(&type8);
  auto input1_tmp = model->addOperand(&type7);
  auto dummy40 = model->addOperand(&type10);
  auto param40 = model->addOperand(&type6);
  auto weights1_tmp = model->addOperand(&type1);
  auto dummy41 = model->addOperand(&type10);
  auto param41 = model->addOperand(&type6);
  auto recurrent_weights1_tmp = model->addOperand(&type2);
  auto dummy42 = model->addOperand(&type10);
  auto param42 = model->addOperand(&type6);
  auto bias1_tmp = model->addOperand(&type3);
  auto dummy43 = model->addOperand(&type10);
  auto param43 = model->addOperand(&type6);
  auto hidden_state1_tmp = model->addOperand(&type4);
  auto dummy44 = model->addOperand(&type10);
  auto param44 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static int32_t time_major1_init[] = {1};
  model->setOperandValue(time_major1, time_major1_init, sizeof(int32_t) * 1);
  static float dummy40_init[] = {0.0f};
  model->setOperandValue(dummy40, dummy40_init, sizeof(float) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float dummy41_init[] = {0.0f};
  model->setOperandValue(dummy41, dummy41_init, sizeof(float) * 1);
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static float dummy42_init[] = {0.0f};
  model->setOperandValue(dummy42, dummy42_init, sizeof(float) * 1);
  static int32_t param42_init[] = {0};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static float dummy43_init[] = {0.0f};
  model->setOperandValue(dummy43, dummy43_init, sizeof(float) * 1);
  static int32_t param43_init[] = {0};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float dummy44_init[] = {0.0f};
  model->setOperandValue(dummy44, dummy44_init, sizeof(float) * 1);
  static int32_t param44_init[] = {0};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy40, param40}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {weights1_tmp, dummy41, param41}, {weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_weights1_tmp, dummy42, param42}, {recurrent_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {bias1_tmp, dummy43, param43}, {bias1});
  model->addOperation(ANEURALNETWORKS_ADD, {hidden_state1_tmp, dummy44, param44}, {hidden_state1});
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input1, weights1, recurrent_weights1, bias1, hidden_state1, activation1, time_major1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1_tmp, weights1_tmp, recurrent_weights1_tmp, bias1_tmp, hidden_state1_tmp},
    {output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type10(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {16, 2, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto input1 = model->addOperand(&type7);
  auto weights1 = model->addOperand(&type1);
  auto recurrent_weights1 = model->addOperand(&type2);
  auto bias1 = model->addOperand(&type3);
  auto hidden_state1 = model->addOperand(&type4);
  auto activation1 = model->addOperand(&type6);
  auto time_major1 = model->addOperand(&type6);
  auto output1 = model->addOperand(&type9);
  auto input1_tmp = model->addOperand(&type7);
  auto dummy45 = model->addOperand(&type10);
  auto param45 = model->addOperand(&type6);
  auto weights1_tmp = model->addOperand(&type1);
  auto dummy46 = model->addOperand(&type10);
  auto param46 = model->addOperand(&type6);
  auto recurrent_weights1_tmp = model->addOperand(&type2);
  auto dummy47 = model->addOperand(&type10);
  auto param47 = model->addOperand(&type6);
  auto bias1_tmp = model->addOperand(&type3);
  auto dummy48 = model->addOperand(&type10);
  auto param48 = model->addOperand(&type6);
  auto hidden_state1_tmp = model->addOperand(&type4);
  auto dummy49 = model->addOperand(&type10);
  auto param49 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static int32_t time_major1_init[] = {1};
  model->setOperandValue(time_major1, time_major1_init, sizeof(int32_t) * 1);
  static float dummy45_init[] = {0.0f};
  model->setOperandValue(dummy45, dummy45_init, sizeof(float) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static float dummy46_init[] = {0.0f};
  model->setOperandValue(dummy46, dummy46_init, sizeof(float) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static float dummy47_init[] = {0.0f};
  model->setOperandValue(dummy47, dummy47_init, sizeof(float) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static float dummy48_init[] = {0.0f};
  model->setOperandValue(dummy48, dummy48_init, sizeof(float) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static float dummy49_init[] = {0.0f};
  model->setOperandValue(dummy49, dummy49_init, sizeof(float) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy45, param45}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {weights1_tmp, dummy46, param46}, {weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_weights1_tmp, dummy47, param47}, {recurrent_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {bias1_tmp, dummy48, param48}, {bias1});
  model->addOperation(ANEURALNETWORKS_ADD, {hidden_state1_tmp, dummy49, param49}, {hidden_state1});
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input1, weights1, recurrent_weights1, bias1, hidden_state1, activation1, time_major1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1_tmp, weights1_tmp, recurrent_weights1_tmp, bias1_tmp, hidden_state1_tmp},
    {output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_float16_2(Model *model) {
  OperandType type11(Type::TENSOR_FLOAT16, {16});
  OperandType type12(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type15(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type16(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type24(Type::TENSOR_FLOAT16, {16, 2, 8});
  OperandType type25(Type::TENSOR_FLOAT16, {16, 2, 16});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input1 = model->addOperand(&type24);
  auto weights1 = model->addOperand(&type16);
  auto recurrent_weights1 = model->addOperand(&type15);
  auto bias1 = model->addOperand(&type11);
  auto hidden_state1 = model->addOperand(&type12);
  auto activation1 = model->addOperand(&type6);
  auto time_major1 = model->addOperand(&type6);
  auto output1 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static int32_t time_major1_init[] = {1};
  model->setOperandValue(time_major1, time_major1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input1, weights1, recurrent_weights1, bias1, hidden_state1, activation1, time_major1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, weights1, recurrent_weights1, bias1, hidden_state1},
    {output1});
  assert(model->isValid());
}

bool is_ignored_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_float16_dynamic_output_shape_2(Model *model) {
  OperandType type11(Type::TENSOR_FLOAT16, {16});
  OperandType type12(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type15(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type16(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type24(Type::TENSOR_FLOAT16, {16, 2, 8});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input1 = model->addOperand(&type24);
  auto weights1 = model->addOperand(&type16);
  auto recurrent_weights1 = model->addOperand(&type15);
  auto bias1 = model->addOperand(&type11);
  auto hidden_state1 = model->addOperand(&type12);
  auto activation1 = model->addOperand(&type6);
  auto time_major1 = model->addOperand(&type6);
  auto output1 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static int32_t time_major1_init[] = {1};
  model->setOperandValue(time_major1, time_major1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input1, weights1, recurrent_weights1, bias1, hidden_state1, activation1, time_major1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, weights1, recurrent_weights1, bias1, hidden_state1},
    {output1});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type21(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type22(Type::TENSOR_FLOAT16, {16});
  OperandType type23(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type25(Type::TENSOR_FLOAT16, {16, 2, 16});
  OperandType type26(Type::TENSOR_FLOAT16, {16, 2, 8});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input1 = model->addOperand(&type26);
  auto weights1 = model->addOperand(&type20);
  auto recurrent_weights1 = model->addOperand(&type21);
  auto bias1 = model->addOperand(&type22);
  auto hidden_state1 = model->addOperand(&type23);
  auto activation1 = model->addOperand(&type6);
  auto time_major1 = model->addOperand(&type6);
  auto output1 = model->addOperand(&type25);
  auto input1_tmp = model->addOperand(&type26);
  auto dummy50 = model->addOperand(&type19);
  auto param50 = model->addOperand(&type6);
  auto weights1_tmp = model->addOperand(&type20);
  auto dummy51 = model->addOperand(&type19);
  auto param51 = model->addOperand(&type6);
  auto recurrent_weights1_tmp = model->addOperand(&type21);
  auto dummy52 = model->addOperand(&type19);
  auto param52 = model->addOperand(&type6);
  auto bias1_tmp = model->addOperand(&type22);
  auto dummy53 = model->addOperand(&type19);
  auto param53 = model->addOperand(&type6);
  auto hidden_state1_tmp = model->addOperand(&type23);
  auto dummy54 = model->addOperand(&type19);
  auto param54 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static int32_t time_major1_init[] = {1};
  model->setOperandValue(time_major1, time_major1_init, sizeof(int32_t) * 1);
  static _Float16 dummy50_init[] = {0.0f};
  model->setOperandValue(dummy50, dummy50_init, sizeof(_Float16) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static _Float16 dummy51_init[] = {0.0f};
  model->setOperandValue(dummy51, dummy51_init, sizeof(_Float16) * 1);
  static int32_t param51_init[] = {0};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static _Float16 dummy52_init[] = {0.0f};
  model->setOperandValue(dummy52, dummy52_init, sizeof(_Float16) * 1);
  static int32_t param52_init[] = {0};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static _Float16 dummy53_init[] = {0.0f};
  model->setOperandValue(dummy53, dummy53_init, sizeof(_Float16) * 1);
  static int32_t param53_init[] = {0};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static _Float16 dummy54_init[] = {0.0f};
  model->setOperandValue(dummy54, dummy54_init, sizeof(_Float16) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy50, param50}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {weights1_tmp, dummy51, param51}, {weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_weights1_tmp, dummy52, param52}, {recurrent_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {bias1_tmp, dummy53, param53}, {bias1});
  model->addOperation(ANEURALNETWORKS_ADD, {hidden_state1_tmp, dummy54, param54}, {hidden_state1});
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input1, weights1, recurrent_weights1, bias1, hidden_state1, activation1, time_major1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1_tmp, weights1_tmp, recurrent_weights1_tmp, bias1_tmp, hidden_state1_tmp},
    {output1});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
namespace generated_tests::unidirectional_sequence_rnn {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type21(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type22(Type::TENSOR_FLOAT16, {16});
  OperandType type23(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type26(Type::TENSOR_FLOAT16, {16, 2, 8});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input1 = model->addOperand(&type26);
  auto weights1 = model->addOperand(&type20);
  auto recurrent_weights1 = model->addOperand(&type21);
  auto bias1 = model->addOperand(&type22);
  auto hidden_state1 = model->addOperand(&type23);
  auto activation1 = model->addOperand(&type6);
  auto time_major1 = model->addOperand(&type6);
  auto output1 = model->addOperand(&type17);
  auto input1_tmp = model->addOperand(&type26);
  auto dummy55 = model->addOperand(&type19);
  auto param55 = model->addOperand(&type6);
  auto weights1_tmp = model->addOperand(&type20);
  auto dummy56 = model->addOperand(&type19);
  auto param56 = model->addOperand(&type6);
  auto recurrent_weights1_tmp = model->addOperand(&type21);
  auto dummy57 = model->addOperand(&type19);
  auto param57 = model->addOperand(&type6);
  auto bias1_tmp = model->addOperand(&type22);
  auto dummy58 = model->addOperand(&type19);
  auto param58 = model->addOperand(&type6);
  auto hidden_state1_tmp = model->addOperand(&type23);
  auto dummy59 = model->addOperand(&type19);
  auto param59 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static int32_t time_major1_init[] = {1};
  model->setOperandValue(time_major1, time_major1_init, sizeof(int32_t) * 1);
  static _Float16 dummy55_init[] = {0.0f};
  model->setOperandValue(dummy55, dummy55_init, sizeof(_Float16) * 1);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static _Float16 dummy56_init[] = {0.0f};
  model->setOperandValue(dummy56, dummy56_init, sizeof(_Float16) * 1);
  static int32_t param56_init[] = {0};
  model->setOperandValue(param56, param56_init, sizeof(int32_t) * 1);
  static _Float16 dummy57_init[] = {0.0f};
  model->setOperandValue(dummy57, dummy57_init, sizeof(_Float16) * 1);
  static int32_t param57_init[] = {0};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static _Float16 dummy58_init[] = {0.0f};
  model->setOperandValue(dummy58, dummy58_init, sizeof(_Float16) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static _Float16 dummy59_init[] = {0.0f};
  model->setOperandValue(dummy59, dummy59_init, sizeof(_Float16) * 1);
  static int32_t param59_init[] = {0};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy55, param55}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {weights1_tmp, dummy56, param56}, {weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_weights1_tmp, dummy57, param57}, {recurrent_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {bias1_tmp, dummy58, param58}, {bias1});
  model->addOperation(ANEURALNETWORKS_ADD, {hidden_state1_tmp, dummy59, param59}, {hidden_state1});
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_RNN, {input1, weights1, recurrent_weights1, bias1, hidden_state1, activation1, time_major1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1_tmp, weights1_tmp, recurrent_weights1_tmp, bias1_tmp, hidden_state1_tmp},
    {output1});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_rnn
