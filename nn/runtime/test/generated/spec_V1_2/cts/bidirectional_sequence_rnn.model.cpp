// Generated from bidirectional_sequence_rnn.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 16, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto fw_weights = model->addOperand(&type1);
  auto fw_recurrent_weights = model->addOperand(&type2);
  auto fw_bias = model->addOperand(&type3);
  auto fw_hidden_state = model->addOperand(&type4);
  auto bw_weights = model->addOperand(&type1);
  auto bw_recurrent_weights = model->addOperand(&type2);
  auto bw_bias = model->addOperand(&type3);
  auto bw_hidden_state = model->addOperand(&type4);
  auto aux_input = model->addOperand(&type5);
  auto fw_aux_weights = model->addOperand(&type5);
  auto bw_aux_weights = model->addOperand(&type5);
  auto activation = model->addOperand(&type7);
  auto time_major = model->addOperand(&type8);
  auto merge_outputs = model->addOperand(&type8);
  auto fw_output = model->addOperand(&type6);
  auto bw_output = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static bool8 time_major_init[] = {false};
  model->setOperandValue(time_major, time_major_init, sizeof(bool8) * 1);
  static bool8 merge_outputs_init[] = {false};
  model->setOperandValue(merge_outputs, merge_outputs_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input, fw_weights, fw_recurrent_weights, fw_bias, fw_hidden_state, bw_weights, bw_recurrent_weights, bw_bias, bw_hidden_state, aux_input, fw_aux_weights, bw_aux_weights, activation, time_major, merge_outputs}, {fw_output, bw_output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, fw_weights, fw_recurrent_weights, fw_bias, fw_hidden_state, bw_weights, bw_recurrent_weights, bw_bias, bw_hidden_state, aux_input, fw_aux_weights, bw_aux_weights},
    {fw_output, bw_output});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto fw_weights = model->addOperand(&type1);
  auto fw_recurrent_weights = model->addOperand(&type2);
  auto fw_bias = model->addOperand(&type3);
  auto fw_hidden_state = model->addOperand(&type4);
  auto bw_weights = model->addOperand(&type1);
  auto bw_recurrent_weights = model->addOperand(&type2);
  auto bw_bias = model->addOperand(&type3);
  auto bw_hidden_state = model->addOperand(&type4);
  auto aux_input = model->addOperand(&type5);
  auto fw_aux_weights = model->addOperand(&type5);
  auto bw_aux_weights = model->addOperand(&type5);
  auto activation = model->addOperand(&type7);
  auto time_major = model->addOperand(&type8);
  auto merge_outputs = model->addOperand(&type8);
  auto fw_output = model->addOperand(&type14);
  auto bw_output = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static bool8 time_major_init[] = {false};
  model->setOperandValue(time_major, time_major_init, sizeof(bool8) * 1);
  static bool8 merge_outputs_init[] = {false};
  model->setOperandValue(merge_outputs, merge_outputs_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input, fw_weights, fw_recurrent_weights, fw_bias, fw_hidden_state, bw_weights, bw_recurrent_weights, bw_bias, bw_hidden_state, aux_input, fw_aux_weights, bw_aux_weights, activation, time_major, merge_outputs}, {fw_output, bw_output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, fw_weights, fw_recurrent_weights, fw_bias, fw_hidden_state, bw_weights, bw_recurrent_weights, bw_bias, bw_hidden_state, aux_input, fw_aux_weights, bw_aux_weights},
    {fw_output, bw_output});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 16, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto fw_weights = model->addOperand(&type1);
  auto fw_recurrent_weights = model->addOperand(&type2);
  auto fw_bias = model->addOperand(&type3);
  auto fw_hidden_state = model->addOperand(&type4);
  auto bw_weights = model->addOperand(&type1);
  auto bw_recurrent_weights = model->addOperand(&type2);
  auto bw_bias = model->addOperand(&type3);
  auto bw_hidden_state = model->addOperand(&type4);
  auto aux_input = model->addOperand(&type5);
  auto fw_aux_weights = model->addOperand(&type5);
  auto bw_aux_weights = model->addOperand(&type5);
  auto activation = model->addOperand(&type7);
  auto time_major = model->addOperand(&type8);
  auto merge_outputs = model->addOperand(&type8);
  auto fw_output = model->addOperand(&type6);
  auto bw_output = model->addOperand(&type6);
  auto input_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type15);
  auto param = model->addOperand(&type7);
  auto fw_weights_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type15);
  auto param1 = model->addOperand(&type7);
  auto fw_recurrent_weights_tmp = model->addOperand(&type2);
  auto dummy2 = model->addOperand(&type15);
  auto param2 = model->addOperand(&type7);
  auto fw_bias_tmp = model->addOperand(&type3);
  auto dummy3 = model->addOperand(&type15);
  auto param3 = model->addOperand(&type7);
  auto fw_hidden_state_tmp = model->addOperand(&type4);
  auto dummy4 = model->addOperand(&type15);
  auto param4 = model->addOperand(&type7);
  auto bw_weights_tmp = model->addOperand(&type1);
  auto dummy5 = model->addOperand(&type15);
  auto param5 = model->addOperand(&type7);
  auto bw_recurrent_weights_tmp = model->addOperand(&type2);
  auto dummy6 = model->addOperand(&type15);
  auto param6 = model->addOperand(&type7);
  auto bw_bias_tmp = model->addOperand(&type3);
  auto dummy7 = model->addOperand(&type15);
  auto param7 = model->addOperand(&type7);
  auto bw_hidden_state_tmp = model->addOperand(&type4);
  auto dummy8 = model->addOperand(&type15);
  auto param8 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static bool8 time_major_init[] = {false};
  model->setOperandValue(time_major, time_major_init, sizeof(bool8) * 1);
  static bool8 merge_outputs_init[] = {false};
  model->setOperandValue(merge_outputs, merge_outputs_init, sizeof(bool8) * 1);
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
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy, param}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights_tmp, dummy1, param1}, {fw_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights_tmp, dummy2, param2}, {fw_recurrent_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias_tmp, dummy3, param3}, {fw_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state_tmp, dummy4, param4}, {fw_hidden_state});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights_tmp, dummy5, param5}, {bw_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights_tmp, dummy6, param6}, {bw_recurrent_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias_tmp, dummy7, param7}, {bw_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state_tmp, dummy8, param8}, {bw_hidden_state});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input, fw_weights, fw_recurrent_weights, fw_bias, fw_hidden_state, bw_weights, bw_recurrent_weights, bw_bias, bw_hidden_state, aux_input, fw_aux_weights, bw_aux_weights, activation, time_major, merge_outputs}, {fw_output, bw_output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input, fw_aux_weights, bw_aux_weights, input_tmp, fw_weights_tmp, fw_recurrent_weights_tmp, fw_bias_tmp, fw_hidden_state_tmp, bw_weights_tmp, bw_recurrent_weights_tmp, bw_bias_tmp, bw_hidden_state_tmp},
    {fw_output, bw_output});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto fw_weights = model->addOperand(&type1);
  auto fw_recurrent_weights = model->addOperand(&type2);
  auto fw_bias = model->addOperand(&type3);
  auto fw_hidden_state = model->addOperand(&type4);
  auto bw_weights = model->addOperand(&type1);
  auto bw_recurrent_weights = model->addOperand(&type2);
  auto bw_bias = model->addOperand(&type3);
  auto bw_hidden_state = model->addOperand(&type4);
  auto aux_input = model->addOperand(&type5);
  auto fw_aux_weights = model->addOperand(&type5);
  auto bw_aux_weights = model->addOperand(&type5);
  auto activation = model->addOperand(&type7);
  auto time_major = model->addOperand(&type8);
  auto merge_outputs = model->addOperand(&type8);
  auto fw_output = model->addOperand(&type14);
  auto bw_output = model->addOperand(&type14);
  auto input_tmp = model->addOperand(&type0);
  auto dummy9 = model->addOperand(&type15);
  auto param9 = model->addOperand(&type7);
  auto fw_weights_tmp = model->addOperand(&type1);
  auto dummy10 = model->addOperand(&type15);
  auto param10 = model->addOperand(&type7);
  auto fw_recurrent_weights_tmp = model->addOperand(&type2);
  auto dummy11 = model->addOperand(&type15);
  auto param11 = model->addOperand(&type7);
  auto fw_bias_tmp = model->addOperand(&type3);
  auto dummy12 = model->addOperand(&type15);
  auto param12 = model->addOperand(&type7);
  auto fw_hidden_state_tmp = model->addOperand(&type4);
  auto dummy13 = model->addOperand(&type15);
  auto param13 = model->addOperand(&type7);
  auto bw_weights_tmp = model->addOperand(&type1);
  auto dummy14 = model->addOperand(&type15);
  auto param14 = model->addOperand(&type7);
  auto bw_recurrent_weights_tmp = model->addOperand(&type2);
  auto dummy15 = model->addOperand(&type15);
  auto param15 = model->addOperand(&type7);
  auto bw_bias_tmp = model->addOperand(&type3);
  auto dummy16 = model->addOperand(&type15);
  auto param16 = model->addOperand(&type7);
  auto bw_hidden_state_tmp = model->addOperand(&type4);
  auto dummy17 = model->addOperand(&type15);
  auto param17 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static bool8 time_major_init[] = {false};
  model->setOperandValue(time_major, time_major_init, sizeof(bool8) * 1);
  static bool8 merge_outputs_init[] = {false};
  model->setOperandValue(merge_outputs, merge_outputs_init, sizeof(bool8) * 1);
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
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
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy9, param9}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights_tmp, dummy10, param10}, {fw_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights_tmp, dummy11, param11}, {fw_recurrent_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias_tmp, dummy12, param12}, {fw_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state_tmp, dummy13, param13}, {fw_hidden_state});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights_tmp, dummy14, param14}, {bw_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights_tmp, dummy15, param15}, {bw_recurrent_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias_tmp, dummy16, param16}, {bw_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state_tmp, dummy17, param17}, {bw_hidden_state});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input, fw_weights, fw_recurrent_weights, fw_bias, fw_hidden_state, bw_weights, bw_recurrent_weights, bw_bias, bw_hidden_state, aux_input, fw_aux_weights, bw_aux_weights, activation, time_major, merge_outputs}, {fw_output, bw_output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input, fw_aux_weights, bw_aux_weights, input_tmp, fw_weights_tmp, fw_recurrent_weights_tmp, fw_bias_tmp, fw_hidden_state_tmp, bw_weights_tmp, bw_recurrent_weights_tmp, bw_bias_tmp, bw_hidden_state_tmp},
    {fw_output, bw_output});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 16, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto fw_weights = model->addOperand(&type1);
  auto fw_recurrent_weights = model->addOperand(&type2);
  auto fw_bias = model->addOperand(&type3);
  auto fw_hidden_state = model->addOperand(&type4);
  auto bw_weights = model->addOperand(&type1);
  auto bw_recurrent_weights = model->addOperand(&type2);
  auto bw_bias = model->addOperand(&type3);
  auto bw_hidden_state = model->addOperand(&type4);
  auto aux_input = model->addOperand(&type5);
  auto fw_aux_weights = model->addOperand(&type5);
  auto bw_aux_weights = model->addOperand(&type5);
  auto activation = model->addOperand(&type7);
  auto time_major = model->addOperand(&type8);
  auto merge_outputs = model->addOperand(&type8);
  auto fw_output = model->addOperand(&type6);
  auto bw_output = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static bool8 time_major_init[] = {false};
  model->setOperandValue(time_major, time_major_init, sizeof(bool8) * 1);
  static bool8 merge_outputs_init[] = {false};
  model->setOperandValue(merge_outputs, merge_outputs_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input, fw_weights, fw_recurrent_weights, fw_bias, fw_hidden_state, bw_weights, bw_recurrent_weights, bw_bias, bw_hidden_state, aux_input, fw_aux_weights, bw_aux_weights, activation, time_major, merge_outputs}, {fw_output, bw_output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, fw_weights, fw_recurrent_weights, fw_bias, fw_hidden_state, bw_weights, bw_recurrent_weights, bw_bias, bw_hidden_state, aux_input, fw_aux_weights, bw_aux_weights},
    {fw_output, bw_output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto fw_weights = model->addOperand(&type1);
  auto fw_recurrent_weights = model->addOperand(&type2);
  auto fw_bias = model->addOperand(&type3);
  auto fw_hidden_state = model->addOperand(&type4);
  auto bw_weights = model->addOperand(&type1);
  auto bw_recurrent_weights = model->addOperand(&type2);
  auto bw_bias = model->addOperand(&type3);
  auto bw_hidden_state = model->addOperand(&type4);
  auto aux_input = model->addOperand(&type5);
  auto fw_aux_weights = model->addOperand(&type5);
  auto bw_aux_weights = model->addOperand(&type5);
  auto activation = model->addOperand(&type7);
  auto time_major = model->addOperand(&type8);
  auto merge_outputs = model->addOperand(&type8);
  auto fw_output = model->addOperand(&type14);
  auto bw_output = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static bool8 time_major_init[] = {false};
  model->setOperandValue(time_major, time_major_init, sizeof(bool8) * 1);
  static bool8 merge_outputs_init[] = {false};
  model->setOperandValue(merge_outputs, merge_outputs_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input, fw_weights, fw_recurrent_weights, fw_bias, fw_hidden_state, bw_weights, bw_recurrent_weights, bw_bias, bw_hidden_state, aux_input, fw_aux_weights, bw_aux_weights, activation, time_major, merge_outputs}, {fw_output, bw_output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, fw_weights, fw_recurrent_weights, fw_bias, fw_hidden_state, bw_weights, bw_recurrent_weights, bw_bias, bw_hidden_state, aux_input, fw_aux_weights, bw_aux_weights},
    {fw_output, bw_output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 16, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto fw_weights = model->addOperand(&type1);
  auto fw_recurrent_weights = model->addOperand(&type2);
  auto fw_bias = model->addOperand(&type3);
  auto fw_hidden_state = model->addOperand(&type4);
  auto bw_weights = model->addOperand(&type1);
  auto bw_recurrent_weights = model->addOperand(&type2);
  auto bw_bias = model->addOperand(&type3);
  auto bw_hidden_state = model->addOperand(&type4);
  auto aux_input = model->addOperand(&type5);
  auto fw_aux_weights = model->addOperand(&type5);
  auto bw_aux_weights = model->addOperand(&type5);
  auto activation = model->addOperand(&type7);
  auto time_major = model->addOperand(&type8);
  auto merge_outputs = model->addOperand(&type8);
  auto fw_output = model->addOperand(&type6);
  auto bw_output = model->addOperand(&type6);
  auto input_tmp = model->addOperand(&type0);
  auto dummy18 = model->addOperand(&type15);
  auto param18 = model->addOperand(&type7);
  auto fw_weights_tmp = model->addOperand(&type1);
  auto dummy19 = model->addOperand(&type15);
  auto param19 = model->addOperand(&type7);
  auto fw_recurrent_weights_tmp = model->addOperand(&type2);
  auto dummy20 = model->addOperand(&type15);
  auto param20 = model->addOperand(&type7);
  auto fw_bias_tmp = model->addOperand(&type3);
  auto dummy21 = model->addOperand(&type15);
  auto param21 = model->addOperand(&type7);
  auto fw_hidden_state_tmp = model->addOperand(&type4);
  auto dummy22 = model->addOperand(&type15);
  auto param22 = model->addOperand(&type7);
  auto bw_weights_tmp = model->addOperand(&type1);
  auto dummy23 = model->addOperand(&type15);
  auto param23 = model->addOperand(&type7);
  auto bw_recurrent_weights_tmp = model->addOperand(&type2);
  auto dummy24 = model->addOperand(&type15);
  auto param24 = model->addOperand(&type7);
  auto bw_bias_tmp = model->addOperand(&type3);
  auto dummy25 = model->addOperand(&type15);
  auto param25 = model->addOperand(&type7);
  auto bw_hidden_state_tmp = model->addOperand(&type4);
  auto dummy26 = model->addOperand(&type15);
  auto param26 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static bool8 time_major_init[] = {false};
  model->setOperandValue(time_major, time_major_init, sizeof(bool8) * 1);
  static bool8 merge_outputs_init[] = {false};
  model->setOperandValue(merge_outputs, merge_outputs_init, sizeof(bool8) * 1);
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static float dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(float) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static float dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(float) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static float dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(float) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static float dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(float) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(float) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static float dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(float) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static float dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy18, param18}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights_tmp, dummy19, param19}, {fw_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights_tmp, dummy20, param20}, {fw_recurrent_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias_tmp, dummy21, param21}, {fw_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state_tmp, dummy22, param22}, {fw_hidden_state});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights_tmp, dummy23, param23}, {bw_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights_tmp, dummy24, param24}, {bw_recurrent_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias_tmp, dummy25, param25}, {bw_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state_tmp, dummy26, param26}, {bw_hidden_state});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input, fw_weights, fw_recurrent_weights, fw_bias, fw_hidden_state, bw_weights, bw_recurrent_weights, bw_bias, bw_hidden_state, aux_input, fw_aux_weights, bw_aux_weights, activation, time_major, merge_outputs}, {fw_output, bw_output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input, fw_aux_weights, bw_aux_weights, input_tmp, fw_weights_tmp, fw_recurrent_weights_tmp, fw_bias_tmp, fw_hidden_state_tmp, bw_weights_tmp, bw_recurrent_weights_tmp, bw_bias_tmp, bw_hidden_state_tmp},
    {fw_output, bw_output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto fw_weights = model->addOperand(&type1);
  auto fw_recurrent_weights = model->addOperand(&type2);
  auto fw_bias = model->addOperand(&type3);
  auto fw_hidden_state = model->addOperand(&type4);
  auto bw_weights = model->addOperand(&type1);
  auto bw_recurrent_weights = model->addOperand(&type2);
  auto bw_bias = model->addOperand(&type3);
  auto bw_hidden_state = model->addOperand(&type4);
  auto aux_input = model->addOperand(&type5);
  auto fw_aux_weights = model->addOperand(&type5);
  auto bw_aux_weights = model->addOperand(&type5);
  auto activation = model->addOperand(&type7);
  auto time_major = model->addOperand(&type8);
  auto merge_outputs = model->addOperand(&type8);
  auto fw_output = model->addOperand(&type14);
  auto bw_output = model->addOperand(&type14);
  auto input_tmp = model->addOperand(&type0);
  auto dummy27 = model->addOperand(&type15);
  auto param27 = model->addOperand(&type7);
  auto fw_weights_tmp = model->addOperand(&type1);
  auto dummy28 = model->addOperand(&type15);
  auto param28 = model->addOperand(&type7);
  auto fw_recurrent_weights_tmp = model->addOperand(&type2);
  auto dummy29 = model->addOperand(&type15);
  auto param29 = model->addOperand(&type7);
  auto fw_bias_tmp = model->addOperand(&type3);
  auto dummy30 = model->addOperand(&type15);
  auto param30 = model->addOperand(&type7);
  auto fw_hidden_state_tmp = model->addOperand(&type4);
  auto dummy31 = model->addOperand(&type15);
  auto param31 = model->addOperand(&type7);
  auto bw_weights_tmp = model->addOperand(&type1);
  auto dummy32 = model->addOperand(&type15);
  auto param32 = model->addOperand(&type7);
  auto bw_recurrent_weights_tmp = model->addOperand(&type2);
  auto dummy33 = model->addOperand(&type15);
  auto param33 = model->addOperand(&type7);
  auto bw_bias_tmp = model->addOperand(&type3);
  auto dummy34 = model->addOperand(&type15);
  auto param34 = model->addOperand(&type7);
  auto bw_hidden_state_tmp = model->addOperand(&type4);
  auto dummy35 = model->addOperand(&type15);
  auto param35 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static bool8 time_major_init[] = {false};
  model->setOperandValue(time_major, time_major_init, sizeof(bool8) * 1);
  static bool8 merge_outputs_init[] = {false};
  model->setOperandValue(merge_outputs, merge_outputs_init, sizeof(bool8) * 1);
  static float dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(float) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float dummy28_init[] = {0.0f};
  model->setOperandValue(dummy28, dummy28_init, sizeof(float) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float dummy29_init[] = {0.0f};
  model->setOperandValue(dummy29, dummy29_init, sizeof(float) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
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
  static float dummy35_init[] = {0.0f};
  model->setOperandValue(dummy35, dummy35_init, sizeof(float) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy27, param27}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights_tmp, dummy28, param28}, {fw_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights_tmp, dummy29, param29}, {fw_recurrent_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias_tmp, dummy30, param30}, {fw_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state_tmp, dummy31, param31}, {fw_hidden_state});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights_tmp, dummy32, param32}, {bw_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights_tmp, dummy33, param33}, {bw_recurrent_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias_tmp, dummy34, param34}, {bw_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state_tmp, dummy35, param35}, {bw_hidden_state});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input, fw_weights, fw_recurrent_weights, fw_bias, fw_hidden_state, bw_weights, bw_recurrent_weights, bw_bias, bw_hidden_state, aux_input, fw_aux_weights, bw_aux_weights, activation, time_major, merge_outputs}, {fw_output, bw_output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input, fw_aux_weights, bw_aux_weights, input_tmp, fw_weights_tmp, fw_recurrent_weights_tmp, fw_bias_tmp, fw_hidden_state_tmp, bw_weights_tmp, bw_recurrent_weights_tmp, bw_bias_tmp, bw_hidden_state_tmp},
    {fw_output, bw_output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT16, {0});
  OperandType type17(Type::TENSOR_FLOAT16, {16});
  OperandType type18(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type19(Type::TENSOR_FLOAT16, {2, 16, 16});
  OperandType type20(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type21(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type22(Type::TENSOR_FLOAT16, {2, 16, 8});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input = model->addOperand(&type22);
  auto fw_weights = model->addOperand(&type21);
  auto fw_recurrent_weights = model->addOperand(&type20);
  auto fw_bias = model->addOperand(&type17);
  auto fw_hidden_state = model->addOperand(&type18);
  auto bw_weights = model->addOperand(&type21);
  auto bw_recurrent_weights = model->addOperand(&type20);
  auto bw_bias = model->addOperand(&type17);
  auto bw_hidden_state = model->addOperand(&type18);
  auto aux_input = model->addOperand(&type16);
  auto fw_aux_weights = model->addOperand(&type16);
  auto bw_aux_weights = model->addOperand(&type16);
  auto activation = model->addOperand(&type7);
  auto time_major = model->addOperand(&type8);
  auto merge_outputs = model->addOperand(&type8);
  auto fw_output = model->addOperand(&type19);
  auto bw_output = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static bool8 time_major_init[] = {false};
  model->setOperandValue(time_major, time_major_init, sizeof(bool8) * 1);
  static bool8 merge_outputs_init[] = {false};
  model->setOperandValue(merge_outputs, merge_outputs_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input, fw_weights, fw_recurrent_weights, fw_bias, fw_hidden_state, bw_weights, bw_recurrent_weights, bw_bias, bw_hidden_state, aux_input, fw_aux_weights, bw_aux_weights, activation, time_major, merge_outputs}, {fw_output, bw_output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, fw_weights, fw_recurrent_weights, fw_bias, fw_hidden_state, bw_weights, bw_recurrent_weights, bw_bias, bw_hidden_state, aux_input, fw_aux_weights, bw_aux_weights},
    {fw_output, bw_output});
  assert(model->isValid());
}

bool is_ignored_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_dynamic_output_shape(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT16, {0});
  OperandType type17(Type::TENSOR_FLOAT16, {16});
  OperandType type18(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type20(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type21(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type22(Type::TENSOR_FLOAT16, {2, 16, 8});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input = model->addOperand(&type22);
  auto fw_weights = model->addOperand(&type21);
  auto fw_recurrent_weights = model->addOperand(&type20);
  auto fw_bias = model->addOperand(&type17);
  auto fw_hidden_state = model->addOperand(&type18);
  auto bw_weights = model->addOperand(&type21);
  auto bw_recurrent_weights = model->addOperand(&type20);
  auto bw_bias = model->addOperand(&type17);
  auto bw_hidden_state = model->addOperand(&type18);
  auto aux_input = model->addOperand(&type16);
  auto fw_aux_weights = model->addOperand(&type16);
  auto bw_aux_weights = model->addOperand(&type16);
  auto activation = model->addOperand(&type7);
  auto time_major = model->addOperand(&type8);
  auto merge_outputs = model->addOperand(&type8);
  auto fw_output = model->addOperand(&type23);
  auto bw_output = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static bool8 time_major_init[] = {false};
  model->setOperandValue(time_major, time_major_init, sizeof(bool8) * 1);
  static bool8 merge_outputs_init[] = {false};
  model->setOperandValue(merge_outputs, merge_outputs_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input, fw_weights, fw_recurrent_weights, fw_bias, fw_hidden_state, bw_weights, bw_recurrent_weights, bw_bias, bw_hidden_state, aux_input, fw_aux_weights, bw_aux_weights, activation, time_major, merge_outputs}, {fw_output, bw_output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, fw_weights, fw_recurrent_weights, fw_bias, fw_hidden_state, bw_weights, bw_recurrent_weights, bw_bias, bw_hidden_state, aux_input, fw_aux_weights, bw_aux_weights},
    {fw_output, bw_output});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_all_inputs_as_internal(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT16, {0});
  OperandType type19(Type::TENSOR_FLOAT16, {2, 16, 16});
  OperandType type24(Type::TENSOR_FLOAT16, {2, 16, 8});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type27(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type28(Type::TENSOR_FLOAT16, {16});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input = model->addOperand(&type24);
  auto fw_weights = model->addOperand(&type26);
  auto fw_recurrent_weights = model->addOperand(&type27);
  auto fw_bias = model->addOperand(&type28);
  auto fw_hidden_state = model->addOperand(&type29);
  auto bw_weights = model->addOperand(&type26);
  auto bw_recurrent_weights = model->addOperand(&type27);
  auto bw_bias = model->addOperand(&type28);
  auto bw_hidden_state = model->addOperand(&type29);
  auto aux_input = model->addOperand(&type16);
  auto fw_aux_weights = model->addOperand(&type16);
  auto bw_aux_weights = model->addOperand(&type16);
  auto activation = model->addOperand(&type7);
  auto time_major = model->addOperand(&type8);
  auto merge_outputs = model->addOperand(&type8);
  auto fw_output = model->addOperand(&type19);
  auto bw_output = model->addOperand(&type19);
  auto input_tmp = model->addOperand(&type24);
  auto dummy36 = model->addOperand(&type25);
  auto param36 = model->addOperand(&type7);
  auto fw_weights_tmp = model->addOperand(&type26);
  auto dummy37 = model->addOperand(&type25);
  auto param37 = model->addOperand(&type7);
  auto fw_recurrent_weights_tmp = model->addOperand(&type27);
  auto dummy38 = model->addOperand(&type25);
  auto param38 = model->addOperand(&type7);
  auto fw_bias_tmp = model->addOperand(&type28);
  auto dummy39 = model->addOperand(&type25);
  auto param39 = model->addOperand(&type7);
  auto fw_hidden_state_tmp = model->addOperand(&type29);
  auto dummy40 = model->addOperand(&type25);
  auto param40 = model->addOperand(&type7);
  auto bw_weights_tmp = model->addOperand(&type26);
  auto dummy41 = model->addOperand(&type25);
  auto param41 = model->addOperand(&type7);
  auto bw_recurrent_weights_tmp = model->addOperand(&type27);
  auto dummy42 = model->addOperand(&type25);
  auto param42 = model->addOperand(&type7);
  auto bw_bias_tmp = model->addOperand(&type28);
  auto dummy43 = model->addOperand(&type25);
  auto param43 = model->addOperand(&type7);
  auto bw_hidden_state_tmp = model->addOperand(&type29);
  auto dummy44 = model->addOperand(&type25);
  auto param44 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static bool8 time_major_init[] = {false};
  model->setOperandValue(time_major, time_major_init, sizeof(bool8) * 1);
  static bool8 merge_outputs_init[] = {false};
  model->setOperandValue(merge_outputs, merge_outputs_init, sizeof(bool8) * 1);
  static _Float16 dummy36_init[] = {0.0f};
  model->setOperandValue(dummy36, dummy36_init, sizeof(_Float16) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static _Float16 dummy37_init[] = {0.0f};
  model->setOperandValue(dummy37, dummy37_init, sizeof(_Float16) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static _Float16 dummy38_init[] = {0.0f};
  model->setOperandValue(dummy38, dummy38_init, sizeof(_Float16) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static _Float16 dummy39_init[] = {0.0f};
  model->setOperandValue(dummy39, dummy39_init, sizeof(_Float16) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static _Float16 dummy40_init[] = {0.0f};
  model->setOperandValue(dummy40, dummy40_init, sizeof(_Float16) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static _Float16 dummy41_init[] = {0.0f};
  model->setOperandValue(dummy41, dummy41_init, sizeof(_Float16) * 1);
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static _Float16 dummy42_init[] = {0.0f};
  model->setOperandValue(dummy42, dummy42_init, sizeof(_Float16) * 1);
  static int32_t param42_init[] = {0};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static _Float16 dummy43_init[] = {0.0f};
  model->setOperandValue(dummy43, dummy43_init, sizeof(_Float16) * 1);
  static int32_t param43_init[] = {0};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static _Float16 dummy44_init[] = {0.0f};
  model->setOperandValue(dummy44, dummy44_init, sizeof(_Float16) * 1);
  static int32_t param44_init[] = {0};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy36, param36}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights_tmp, dummy37, param37}, {fw_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights_tmp, dummy38, param38}, {fw_recurrent_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias_tmp, dummy39, param39}, {fw_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state_tmp, dummy40, param40}, {fw_hidden_state});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights_tmp, dummy41, param41}, {bw_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights_tmp, dummy42, param42}, {bw_recurrent_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias_tmp, dummy43, param43}, {bw_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state_tmp, dummy44, param44}, {bw_hidden_state});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input, fw_weights, fw_recurrent_weights, fw_bias, fw_hidden_state, bw_weights, bw_recurrent_weights, bw_bias, bw_hidden_state, aux_input, fw_aux_weights, bw_aux_weights, activation, time_major, merge_outputs}, {fw_output, bw_output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input, fw_aux_weights, bw_aux_weights, input_tmp, fw_weights_tmp, fw_recurrent_weights_tmp, fw_bias_tmp, fw_hidden_state_tmp, bw_weights_tmp, bw_recurrent_weights_tmp, bw_bias_tmp, bw_hidden_state_tmp},
    {fw_output, bw_output});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT16, {0});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type24(Type::TENSOR_FLOAT16, {2, 16, 8});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type27(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type28(Type::TENSOR_FLOAT16, {16});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input = model->addOperand(&type24);
  auto fw_weights = model->addOperand(&type26);
  auto fw_recurrent_weights = model->addOperand(&type27);
  auto fw_bias = model->addOperand(&type28);
  auto fw_hidden_state = model->addOperand(&type29);
  auto bw_weights = model->addOperand(&type26);
  auto bw_recurrent_weights = model->addOperand(&type27);
  auto bw_bias = model->addOperand(&type28);
  auto bw_hidden_state = model->addOperand(&type29);
  auto aux_input = model->addOperand(&type16);
  auto fw_aux_weights = model->addOperand(&type16);
  auto bw_aux_weights = model->addOperand(&type16);
  auto activation = model->addOperand(&type7);
  auto time_major = model->addOperand(&type8);
  auto merge_outputs = model->addOperand(&type8);
  auto fw_output = model->addOperand(&type23);
  auto bw_output = model->addOperand(&type23);
  auto input_tmp = model->addOperand(&type24);
  auto dummy45 = model->addOperand(&type25);
  auto param45 = model->addOperand(&type7);
  auto fw_weights_tmp = model->addOperand(&type26);
  auto dummy46 = model->addOperand(&type25);
  auto param46 = model->addOperand(&type7);
  auto fw_recurrent_weights_tmp = model->addOperand(&type27);
  auto dummy47 = model->addOperand(&type25);
  auto param47 = model->addOperand(&type7);
  auto fw_bias_tmp = model->addOperand(&type28);
  auto dummy48 = model->addOperand(&type25);
  auto param48 = model->addOperand(&type7);
  auto fw_hidden_state_tmp = model->addOperand(&type29);
  auto dummy49 = model->addOperand(&type25);
  auto param49 = model->addOperand(&type7);
  auto bw_weights_tmp = model->addOperand(&type26);
  auto dummy50 = model->addOperand(&type25);
  auto param50 = model->addOperand(&type7);
  auto bw_recurrent_weights_tmp = model->addOperand(&type27);
  auto dummy51 = model->addOperand(&type25);
  auto param51 = model->addOperand(&type7);
  auto bw_bias_tmp = model->addOperand(&type28);
  auto dummy52 = model->addOperand(&type25);
  auto param52 = model->addOperand(&type7);
  auto bw_hidden_state_tmp = model->addOperand(&type29);
  auto dummy53 = model->addOperand(&type25);
  auto param53 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation_init[] = {1};
  model->setOperandValue(activation, activation_init, sizeof(int32_t) * 1);
  static bool8 time_major_init[] = {false};
  model->setOperandValue(time_major, time_major_init, sizeof(bool8) * 1);
  static bool8 merge_outputs_init[] = {false};
  model->setOperandValue(merge_outputs, merge_outputs_init, sizeof(bool8) * 1);
  static _Float16 dummy45_init[] = {0.0f};
  model->setOperandValue(dummy45, dummy45_init, sizeof(_Float16) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static _Float16 dummy46_init[] = {0.0f};
  model->setOperandValue(dummy46, dummy46_init, sizeof(_Float16) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static _Float16 dummy47_init[] = {0.0f};
  model->setOperandValue(dummy47, dummy47_init, sizeof(_Float16) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static _Float16 dummy48_init[] = {0.0f};
  model->setOperandValue(dummy48, dummy48_init, sizeof(_Float16) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static _Float16 dummy49_init[] = {0.0f};
  model->setOperandValue(dummy49, dummy49_init, sizeof(_Float16) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
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
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy45, param45}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights_tmp, dummy46, param46}, {fw_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights_tmp, dummy47, param47}, {fw_recurrent_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias_tmp, dummy48, param48}, {fw_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state_tmp, dummy49, param49}, {fw_hidden_state});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights_tmp, dummy50, param50}, {bw_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights_tmp, dummy51, param51}, {bw_recurrent_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias_tmp, dummy52, param52}, {bw_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state_tmp, dummy53, param53}, {bw_hidden_state});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input, fw_weights, fw_recurrent_weights, fw_bias, fw_hidden_state, bw_weights, bw_recurrent_weights, bw_bias, bw_hidden_state, aux_input, fw_aux_weights, bw_aux_weights, activation, time_major, merge_outputs}, {fw_output, bw_output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input, fw_aux_weights, bw_aux_weights, input_tmp, fw_weights_tmp, fw_recurrent_weights_tmp, fw_bias_tmp, fw_hidden_state_tmp, bw_weights_tmp, bw_recurrent_weights_tmp, bw_bias_tmp, bw_hidden_state_tmp},
    {fw_output, bw_output});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_2(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type10(Type::TENSOR_FLOAT32, {16, 2, 16});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::TENSOR_FLOAT32, {16, 2, 8});
  // Phase 1, operands
  auto input1 = model->addOperand(&type9);
  auto fw_weights1 = model->addOperand(&type1);
  auto fw_recurrent_weights1 = model->addOperand(&type2);
  auto fw_bias1 = model->addOperand(&type3);
  auto fw_hidden_state1 = model->addOperand(&type4);
  auto bw_weights1 = model->addOperand(&type1);
  auto bw_recurrent_weights1 = model->addOperand(&type2);
  auto bw_bias1 = model->addOperand(&type3);
  auto bw_hidden_state1 = model->addOperand(&type4);
  auto aux_input1 = model->addOperand(&type5);
  auto fw_aux_weights1 = model->addOperand(&type5);
  auto bw_aux_weights1 = model->addOperand(&type5);
  auto activation1 = model->addOperand(&type7);
  auto time_major1 = model->addOperand(&type8);
  auto merge_outputs1 = model->addOperand(&type8);
  auto fw_output1 = model->addOperand(&type10);
  auto bw_output1 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static bool8 time_major1_init[] = {true};
  model->setOperandValue(time_major1, time_major1_init, sizeof(bool8) * 1);
  static bool8 merge_outputs1_init[] = {false};
  model->setOperandValue(merge_outputs1, merge_outputs1_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input1, fw_weights1, fw_recurrent_weights1, fw_bias1, fw_hidden_state1, bw_weights1, bw_recurrent_weights1, bw_bias1, bw_hidden_state1, aux_input1, fw_aux_weights1, bw_aux_weights1, activation1, time_major1, merge_outputs1}, {fw_output1, bw_output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, fw_weights1, fw_recurrent_weights1, fw_bias1, fw_hidden_state1, bw_weights1, bw_recurrent_weights1, bw_bias1, bw_hidden_state1, aux_input1, fw_aux_weights1, bw_aux_weights1},
    {fw_output1, bw_output1});
  assert(model->isValid());
}

bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::TENSOR_FLOAT32, {16, 2, 8});
  // Phase 1, operands
  auto input1 = model->addOperand(&type9);
  auto fw_weights1 = model->addOperand(&type1);
  auto fw_recurrent_weights1 = model->addOperand(&type2);
  auto fw_bias1 = model->addOperand(&type3);
  auto fw_hidden_state1 = model->addOperand(&type4);
  auto bw_weights1 = model->addOperand(&type1);
  auto bw_recurrent_weights1 = model->addOperand(&type2);
  auto bw_bias1 = model->addOperand(&type3);
  auto bw_hidden_state1 = model->addOperand(&type4);
  auto aux_input1 = model->addOperand(&type5);
  auto fw_aux_weights1 = model->addOperand(&type5);
  auto bw_aux_weights1 = model->addOperand(&type5);
  auto activation1 = model->addOperand(&type7);
  auto time_major1 = model->addOperand(&type8);
  auto merge_outputs1 = model->addOperand(&type8);
  auto fw_output1 = model->addOperand(&type14);
  auto bw_output1 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static bool8 time_major1_init[] = {true};
  model->setOperandValue(time_major1, time_major1_init, sizeof(bool8) * 1);
  static bool8 merge_outputs1_init[] = {false};
  model->setOperandValue(merge_outputs1, merge_outputs1_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input1, fw_weights1, fw_recurrent_weights1, fw_bias1, fw_hidden_state1, bw_weights1, bw_recurrent_weights1, bw_bias1, bw_hidden_state1, aux_input1, fw_aux_weights1, bw_aux_weights1, activation1, time_major1, merge_outputs1}, {fw_output1, bw_output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, fw_weights1, fw_recurrent_weights1, fw_bias1, fw_hidden_state1, bw_weights1, bw_recurrent_weights1, bw_bias1, bw_hidden_state1, aux_input1, fw_aux_weights1, bw_aux_weights1},
    {fw_output1, bw_output1});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_all_inputs_as_internal_2(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type10(Type::TENSOR_FLOAT32, {16, 2, 16});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::TENSOR_FLOAT32, {16, 2, 8});
  // Phase 1, operands
  auto input1 = model->addOperand(&type9);
  auto fw_weights1 = model->addOperand(&type1);
  auto fw_recurrent_weights1 = model->addOperand(&type2);
  auto fw_bias1 = model->addOperand(&type3);
  auto fw_hidden_state1 = model->addOperand(&type4);
  auto bw_weights1 = model->addOperand(&type1);
  auto bw_recurrent_weights1 = model->addOperand(&type2);
  auto bw_bias1 = model->addOperand(&type3);
  auto bw_hidden_state1 = model->addOperand(&type4);
  auto aux_input1 = model->addOperand(&type5);
  auto fw_aux_weights1 = model->addOperand(&type5);
  auto bw_aux_weights1 = model->addOperand(&type5);
  auto activation1 = model->addOperand(&type7);
  auto time_major1 = model->addOperand(&type8);
  auto merge_outputs1 = model->addOperand(&type8);
  auto fw_output1 = model->addOperand(&type10);
  auto bw_output1 = model->addOperand(&type10);
  auto input1_tmp = model->addOperand(&type9);
  auto dummy54 = model->addOperand(&type15);
  auto param54 = model->addOperand(&type7);
  auto fw_weights1_tmp = model->addOperand(&type1);
  auto dummy55 = model->addOperand(&type15);
  auto param55 = model->addOperand(&type7);
  auto fw_recurrent_weights1_tmp = model->addOperand(&type2);
  auto dummy56 = model->addOperand(&type15);
  auto param56 = model->addOperand(&type7);
  auto fw_bias1_tmp = model->addOperand(&type3);
  auto dummy57 = model->addOperand(&type15);
  auto param57 = model->addOperand(&type7);
  auto fw_hidden_state1_tmp = model->addOperand(&type4);
  auto dummy58 = model->addOperand(&type15);
  auto param58 = model->addOperand(&type7);
  auto bw_weights1_tmp = model->addOperand(&type1);
  auto dummy59 = model->addOperand(&type15);
  auto param59 = model->addOperand(&type7);
  auto bw_recurrent_weights1_tmp = model->addOperand(&type2);
  auto dummy60 = model->addOperand(&type15);
  auto param60 = model->addOperand(&type7);
  auto bw_bias1_tmp = model->addOperand(&type3);
  auto dummy61 = model->addOperand(&type15);
  auto param61 = model->addOperand(&type7);
  auto bw_hidden_state1_tmp = model->addOperand(&type4);
  auto dummy62 = model->addOperand(&type15);
  auto param62 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static bool8 time_major1_init[] = {true};
  model->setOperandValue(time_major1, time_major1_init, sizeof(bool8) * 1);
  static bool8 merge_outputs1_init[] = {false};
  model->setOperandValue(merge_outputs1, merge_outputs1_init, sizeof(bool8) * 1);
  static float dummy54_init[] = {0.0f};
  model->setOperandValue(dummy54, dummy54_init, sizeof(float) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static float dummy55_init[] = {0.0f};
  model->setOperandValue(dummy55, dummy55_init, sizeof(float) * 1);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float dummy56_init[] = {0.0f};
  model->setOperandValue(dummy56, dummy56_init, sizeof(float) * 1);
  static int32_t param56_init[] = {0};
  model->setOperandValue(param56, param56_init, sizeof(int32_t) * 1);
  static float dummy57_init[] = {0.0f};
  model->setOperandValue(dummy57, dummy57_init, sizeof(float) * 1);
  static int32_t param57_init[] = {0};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static float dummy58_init[] = {0.0f};
  model->setOperandValue(dummy58, dummy58_init, sizeof(float) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static float dummy59_init[] = {0.0f};
  model->setOperandValue(dummy59, dummy59_init, sizeof(float) * 1);
  static int32_t param59_init[] = {0};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static float dummy60_init[] = {0.0f};
  model->setOperandValue(dummy60, dummy60_init, sizeof(float) * 1);
  static int32_t param60_init[] = {0};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  static float dummy61_init[] = {0.0f};
  model->setOperandValue(dummy61, dummy61_init, sizeof(float) * 1);
  static int32_t param61_init[] = {0};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  static float dummy62_init[] = {0.0f};
  model->setOperandValue(dummy62, dummy62_init, sizeof(float) * 1);
  static int32_t param62_init[] = {0};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy54, param54}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights1_tmp, dummy55, param55}, {fw_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights1_tmp, dummy56, param56}, {fw_recurrent_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias1_tmp, dummy57, param57}, {fw_bias1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state1_tmp, dummy58, param58}, {fw_hidden_state1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights1_tmp, dummy59, param59}, {bw_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights1_tmp, dummy60, param60}, {bw_recurrent_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias1_tmp, dummy61, param61}, {bw_bias1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state1_tmp, dummy62, param62}, {bw_hidden_state1});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input1, fw_weights1, fw_recurrent_weights1, fw_bias1, fw_hidden_state1, bw_weights1, bw_recurrent_weights1, bw_bias1, bw_hidden_state1, aux_input1, fw_aux_weights1, bw_aux_weights1, activation1, time_major1, merge_outputs1}, {fw_output1, bw_output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input1, fw_aux_weights1, bw_aux_weights1, input1_tmp, fw_weights1_tmp, fw_recurrent_weights1_tmp, fw_bias1_tmp, fw_hidden_state1_tmp, bw_weights1_tmp, bw_recurrent_weights1_tmp, bw_bias1_tmp, bw_hidden_state1_tmp},
    {fw_output1, bw_output1});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::TENSOR_FLOAT32, {16, 2, 8});
  // Phase 1, operands
  auto input1 = model->addOperand(&type9);
  auto fw_weights1 = model->addOperand(&type1);
  auto fw_recurrent_weights1 = model->addOperand(&type2);
  auto fw_bias1 = model->addOperand(&type3);
  auto fw_hidden_state1 = model->addOperand(&type4);
  auto bw_weights1 = model->addOperand(&type1);
  auto bw_recurrent_weights1 = model->addOperand(&type2);
  auto bw_bias1 = model->addOperand(&type3);
  auto bw_hidden_state1 = model->addOperand(&type4);
  auto aux_input1 = model->addOperand(&type5);
  auto fw_aux_weights1 = model->addOperand(&type5);
  auto bw_aux_weights1 = model->addOperand(&type5);
  auto activation1 = model->addOperand(&type7);
  auto time_major1 = model->addOperand(&type8);
  auto merge_outputs1 = model->addOperand(&type8);
  auto fw_output1 = model->addOperand(&type14);
  auto bw_output1 = model->addOperand(&type14);
  auto input1_tmp = model->addOperand(&type9);
  auto dummy63 = model->addOperand(&type15);
  auto param63 = model->addOperand(&type7);
  auto fw_weights1_tmp = model->addOperand(&type1);
  auto dummy64 = model->addOperand(&type15);
  auto param64 = model->addOperand(&type7);
  auto fw_recurrent_weights1_tmp = model->addOperand(&type2);
  auto dummy65 = model->addOperand(&type15);
  auto param65 = model->addOperand(&type7);
  auto fw_bias1_tmp = model->addOperand(&type3);
  auto dummy66 = model->addOperand(&type15);
  auto param66 = model->addOperand(&type7);
  auto fw_hidden_state1_tmp = model->addOperand(&type4);
  auto dummy67 = model->addOperand(&type15);
  auto param67 = model->addOperand(&type7);
  auto bw_weights1_tmp = model->addOperand(&type1);
  auto dummy68 = model->addOperand(&type15);
  auto param68 = model->addOperand(&type7);
  auto bw_recurrent_weights1_tmp = model->addOperand(&type2);
  auto dummy69 = model->addOperand(&type15);
  auto param69 = model->addOperand(&type7);
  auto bw_bias1_tmp = model->addOperand(&type3);
  auto dummy70 = model->addOperand(&type15);
  auto param70 = model->addOperand(&type7);
  auto bw_hidden_state1_tmp = model->addOperand(&type4);
  auto dummy71 = model->addOperand(&type15);
  auto param71 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static bool8 time_major1_init[] = {true};
  model->setOperandValue(time_major1, time_major1_init, sizeof(bool8) * 1);
  static bool8 merge_outputs1_init[] = {false};
  model->setOperandValue(merge_outputs1, merge_outputs1_init, sizeof(bool8) * 1);
  static float dummy63_init[] = {0.0f};
  model->setOperandValue(dummy63, dummy63_init, sizeof(float) * 1);
  static int32_t param63_init[] = {0};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static float dummy64_init[] = {0.0f};
  model->setOperandValue(dummy64, dummy64_init, sizeof(float) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  static float dummy65_init[] = {0.0f};
  model->setOperandValue(dummy65, dummy65_init, sizeof(float) * 1);
  static int32_t param65_init[] = {0};
  model->setOperandValue(param65, param65_init, sizeof(int32_t) * 1);
  static float dummy66_init[] = {0.0f};
  model->setOperandValue(dummy66, dummy66_init, sizeof(float) * 1);
  static int32_t param66_init[] = {0};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static float dummy67_init[] = {0.0f};
  model->setOperandValue(dummy67, dummy67_init, sizeof(float) * 1);
  static int32_t param67_init[] = {0};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  static float dummy68_init[] = {0.0f};
  model->setOperandValue(dummy68, dummy68_init, sizeof(float) * 1);
  static int32_t param68_init[] = {0};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static float dummy69_init[] = {0.0f};
  model->setOperandValue(dummy69, dummy69_init, sizeof(float) * 1);
  static int32_t param69_init[] = {0};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static float dummy70_init[] = {0.0f};
  model->setOperandValue(dummy70, dummy70_init, sizeof(float) * 1);
  static int32_t param70_init[] = {0};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  static float dummy71_init[] = {0.0f};
  model->setOperandValue(dummy71, dummy71_init, sizeof(float) * 1);
  static int32_t param71_init[] = {0};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy63, param63}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights1_tmp, dummy64, param64}, {fw_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights1_tmp, dummy65, param65}, {fw_recurrent_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias1_tmp, dummy66, param66}, {fw_bias1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state1_tmp, dummy67, param67}, {fw_hidden_state1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights1_tmp, dummy68, param68}, {bw_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights1_tmp, dummy69, param69}, {bw_recurrent_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias1_tmp, dummy70, param70}, {bw_bias1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state1_tmp, dummy71, param71}, {bw_hidden_state1});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input1, fw_weights1, fw_recurrent_weights1, fw_bias1, fw_hidden_state1, bw_weights1, bw_recurrent_weights1, bw_bias1, bw_hidden_state1, aux_input1, fw_aux_weights1, bw_aux_weights1, activation1, time_major1, merge_outputs1}, {fw_output1, bw_output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input1, fw_aux_weights1, bw_aux_weights1, input1_tmp, fw_weights1_tmp, fw_recurrent_weights1_tmp, fw_bias1_tmp, fw_hidden_state1_tmp, bw_weights1_tmp, bw_recurrent_weights1_tmp, bw_bias1_tmp, bw_hidden_state1_tmp},
    {fw_output1, bw_output1});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_2(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type10(Type::TENSOR_FLOAT32, {16, 2, 16});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::TENSOR_FLOAT32, {16, 2, 8});
  // Phase 1, operands
  auto input1 = model->addOperand(&type9);
  auto fw_weights1 = model->addOperand(&type1);
  auto fw_recurrent_weights1 = model->addOperand(&type2);
  auto fw_bias1 = model->addOperand(&type3);
  auto fw_hidden_state1 = model->addOperand(&type4);
  auto bw_weights1 = model->addOperand(&type1);
  auto bw_recurrent_weights1 = model->addOperand(&type2);
  auto bw_bias1 = model->addOperand(&type3);
  auto bw_hidden_state1 = model->addOperand(&type4);
  auto aux_input1 = model->addOperand(&type5);
  auto fw_aux_weights1 = model->addOperand(&type5);
  auto bw_aux_weights1 = model->addOperand(&type5);
  auto activation1 = model->addOperand(&type7);
  auto time_major1 = model->addOperand(&type8);
  auto merge_outputs1 = model->addOperand(&type8);
  auto fw_output1 = model->addOperand(&type10);
  auto bw_output1 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static bool8 time_major1_init[] = {true};
  model->setOperandValue(time_major1, time_major1_init, sizeof(bool8) * 1);
  static bool8 merge_outputs1_init[] = {false};
  model->setOperandValue(merge_outputs1, merge_outputs1_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input1, fw_weights1, fw_recurrent_weights1, fw_bias1, fw_hidden_state1, bw_weights1, bw_recurrent_weights1, bw_bias1, bw_hidden_state1, aux_input1, fw_aux_weights1, bw_aux_weights1, activation1, time_major1, merge_outputs1}, {fw_output1, bw_output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, fw_weights1, fw_recurrent_weights1, fw_bias1, fw_hidden_state1, bw_weights1, bw_recurrent_weights1, bw_bias1, bw_hidden_state1, aux_input1, fw_aux_weights1, bw_aux_weights1},
    {fw_output1, bw_output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::TENSOR_FLOAT32, {16, 2, 8});
  // Phase 1, operands
  auto input1 = model->addOperand(&type9);
  auto fw_weights1 = model->addOperand(&type1);
  auto fw_recurrent_weights1 = model->addOperand(&type2);
  auto fw_bias1 = model->addOperand(&type3);
  auto fw_hidden_state1 = model->addOperand(&type4);
  auto bw_weights1 = model->addOperand(&type1);
  auto bw_recurrent_weights1 = model->addOperand(&type2);
  auto bw_bias1 = model->addOperand(&type3);
  auto bw_hidden_state1 = model->addOperand(&type4);
  auto aux_input1 = model->addOperand(&type5);
  auto fw_aux_weights1 = model->addOperand(&type5);
  auto bw_aux_weights1 = model->addOperand(&type5);
  auto activation1 = model->addOperand(&type7);
  auto time_major1 = model->addOperand(&type8);
  auto merge_outputs1 = model->addOperand(&type8);
  auto fw_output1 = model->addOperand(&type14);
  auto bw_output1 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static bool8 time_major1_init[] = {true};
  model->setOperandValue(time_major1, time_major1_init, sizeof(bool8) * 1);
  static bool8 merge_outputs1_init[] = {false};
  model->setOperandValue(merge_outputs1, merge_outputs1_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input1, fw_weights1, fw_recurrent_weights1, fw_bias1, fw_hidden_state1, bw_weights1, bw_recurrent_weights1, bw_bias1, bw_hidden_state1, aux_input1, fw_aux_weights1, bw_aux_weights1, activation1, time_major1, merge_outputs1}, {fw_output1, bw_output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, fw_weights1, fw_recurrent_weights1, fw_bias1, fw_hidden_state1, bw_weights1, bw_recurrent_weights1, bw_bias1, bw_hidden_state1, aux_input1, fw_aux_weights1, bw_aux_weights1},
    {fw_output1, bw_output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type10(Type::TENSOR_FLOAT32, {16, 2, 16});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::TENSOR_FLOAT32, {16, 2, 8});
  // Phase 1, operands
  auto input1 = model->addOperand(&type9);
  auto fw_weights1 = model->addOperand(&type1);
  auto fw_recurrent_weights1 = model->addOperand(&type2);
  auto fw_bias1 = model->addOperand(&type3);
  auto fw_hidden_state1 = model->addOperand(&type4);
  auto bw_weights1 = model->addOperand(&type1);
  auto bw_recurrent_weights1 = model->addOperand(&type2);
  auto bw_bias1 = model->addOperand(&type3);
  auto bw_hidden_state1 = model->addOperand(&type4);
  auto aux_input1 = model->addOperand(&type5);
  auto fw_aux_weights1 = model->addOperand(&type5);
  auto bw_aux_weights1 = model->addOperand(&type5);
  auto activation1 = model->addOperand(&type7);
  auto time_major1 = model->addOperand(&type8);
  auto merge_outputs1 = model->addOperand(&type8);
  auto fw_output1 = model->addOperand(&type10);
  auto bw_output1 = model->addOperand(&type10);
  auto input1_tmp = model->addOperand(&type9);
  auto dummy72 = model->addOperand(&type15);
  auto param72 = model->addOperand(&type7);
  auto fw_weights1_tmp = model->addOperand(&type1);
  auto dummy73 = model->addOperand(&type15);
  auto param73 = model->addOperand(&type7);
  auto fw_recurrent_weights1_tmp = model->addOperand(&type2);
  auto dummy74 = model->addOperand(&type15);
  auto param74 = model->addOperand(&type7);
  auto fw_bias1_tmp = model->addOperand(&type3);
  auto dummy75 = model->addOperand(&type15);
  auto param75 = model->addOperand(&type7);
  auto fw_hidden_state1_tmp = model->addOperand(&type4);
  auto dummy76 = model->addOperand(&type15);
  auto param76 = model->addOperand(&type7);
  auto bw_weights1_tmp = model->addOperand(&type1);
  auto dummy77 = model->addOperand(&type15);
  auto param77 = model->addOperand(&type7);
  auto bw_recurrent_weights1_tmp = model->addOperand(&type2);
  auto dummy78 = model->addOperand(&type15);
  auto param78 = model->addOperand(&type7);
  auto bw_bias1_tmp = model->addOperand(&type3);
  auto dummy79 = model->addOperand(&type15);
  auto param79 = model->addOperand(&type7);
  auto bw_hidden_state1_tmp = model->addOperand(&type4);
  auto dummy80 = model->addOperand(&type15);
  auto param80 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static bool8 time_major1_init[] = {true};
  model->setOperandValue(time_major1, time_major1_init, sizeof(bool8) * 1);
  static bool8 merge_outputs1_init[] = {false};
  model->setOperandValue(merge_outputs1, merge_outputs1_init, sizeof(bool8) * 1);
  static float dummy72_init[] = {0.0f};
  model->setOperandValue(dummy72, dummy72_init, sizeof(float) * 1);
  static int32_t param72_init[] = {0};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static float dummy73_init[] = {0.0f};
  model->setOperandValue(dummy73, dummy73_init, sizeof(float) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  static float dummy74_init[] = {0.0f};
  model->setOperandValue(dummy74, dummy74_init, sizeof(float) * 1);
  static int32_t param74_init[] = {0};
  model->setOperandValue(param74, param74_init, sizeof(int32_t) * 1);
  static float dummy75_init[] = {0.0f};
  model->setOperandValue(dummy75, dummy75_init, sizeof(float) * 1);
  static int32_t param75_init[] = {0};
  model->setOperandValue(param75, param75_init, sizeof(int32_t) * 1);
  static float dummy76_init[] = {0.0f};
  model->setOperandValue(dummy76, dummy76_init, sizeof(float) * 1);
  static int32_t param76_init[] = {0};
  model->setOperandValue(param76, param76_init, sizeof(int32_t) * 1);
  static float dummy77_init[] = {0.0f};
  model->setOperandValue(dummy77, dummy77_init, sizeof(float) * 1);
  static int32_t param77_init[] = {0};
  model->setOperandValue(param77, param77_init, sizeof(int32_t) * 1);
  static float dummy78_init[] = {0.0f};
  model->setOperandValue(dummy78, dummy78_init, sizeof(float) * 1);
  static int32_t param78_init[] = {0};
  model->setOperandValue(param78, param78_init, sizeof(int32_t) * 1);
  static float dummy79_init[] = {0.0f};
  model->setOperandValue(dummy79, dummy79_init, sizeof(float) * 1);
  static int32_t param79_init[] = {0};
  model->setOperandValue(param79, param79_init, sizeof(int32_t) * 1);
  static float dummy80_init[] = {0.0f};
  model->setOperandValue(dummy80, dummy80_init, sizeof(float) * 1);
  static int32_t param80_init[] = {0};
  model->setOperandValue(param80, param80_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy72, param72}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights1_tmp, dummy73, param73}, {fw_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights1_tmp, dummy74, param74}, {fw_recurrent_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias1_tmp, dummy75, param75}, {fw_bias1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state1_tmp, dummy76, param76}, {fw_hidden_state1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights1_tmp, dummy77, param77}, {bw_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights1_tmp, dummy78, param78}, {bw_recurrent_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias1_tmp, dummy79, param79}, {bw_bias1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state1_tmp, dummy80, param80}, {bw_hidden_state1});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input1, fw_weights1, fw_recurrent_weights1, fw_bias1, fw_hidden_state1, bw_weights1, bw_recurrent_weights1, bw_bias1, bw_hidden_state1, aux_input1, fw_aux_weights1, bw_aux_weights1, activation1, time_major1, merge_outputs1}, {fw_output1, bw_output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input1, fw_aux_weights1, bw_aux_weights1, input1_tmp, fw_weights1_tmp, fw_recurrent_weights1_tmp, fw_bias1_tmp, fw_hidden_state1_tmp, bw_weights1_tmp, bw_recurrent_weights1_tmp, bw_bias1_tmp, bw_hidden_state1_tmp},
    {fw_output1, bw_output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::TENSOR_FLOAT32, {16, 2, 8});
  // Phase 1, operands
  auto input1 = model->addOperand(&type9);
  auto fw_weights1 = model->addOperand(&type1);
  auto fw_recurrent_weights1 = model->addOperand(&type2);
  auto fw_bias1 = model->addOperand(&type3);
  auto fw_hidden_state1 = model->addOperand(&type4);
  auto bw_weights1 = model->addOperand(&type1);
  auto bw_recurrent_weights1 = model->addOperand(&type2);
  auto bw_bias1 = model->addOperand(&type3);
  auto bw_hidden_state1 = model->addOperand(&type4);
  auto aux_input1 = model->addOperand(&type5);
  auto fw_aux_weights1 = model->addOperand(&type5);
  auto bw_aux_weights1 = model->addOperand(&type5);
  auto activation1 = model->addOperand(&type7);
  auto time_major1 = model->addOperand(&type8);
  auto merge_outputs1 = model->addOperand(&type8);
  auto fw_output1 = model->addOperand(&type14);
  auto bw_output1 = model->addOperand(&type14);
  auto input1_tmp = model->addOperand(&type9);
  auto dummy81 = model->addOperand(&type15);
  auto param81 = model->addOperand(&type7);
  auto fw_weights1_tmp = model->addOperand(&type1);
  auto dummy82 = model->addOperand(&type15);
  auto param82 = model->addOperand(&type7);
  auto fw_recurrent_weights1_tmp = model->addOperand(&type2);
  auto dummy83 = model->addOperand(&type15);
  auto param83 = model->addOperand(&type7);
  auto fw_bias1_tmp = model->addOperand(&type3);
  auto dummy84 = model->addOperand(&type15);
  auto param84 = model->addOperand(&type7);
  auto fw_hidden_state1_tmp = model->addOperand(&type4);
  auto dummy85 = model->addOperand(&type15);
  auto param85 = model->addOperand(&type7);
  auto bw_weights1_tmp = model->addOperand(&type1);
  auto dummy86 = model->addOperand(&type15);
  auto param86 = model->addOperand(&type7);
  auto bw_recurrent_weights1_tmp = model->addOperand(&type2);
  auto dummy87 = model->addOperand(&type15);
  auto param87 = model->addOperand(&type7);
  auto bw_bias1_tmp = model->addOperand(&type3);
  auto dummy88 = model->addOperand(&type15);
  auto param88 = model->addOperand(&type7);
  auto bw_hidden_state1_tmp = model->addOperand(&type4);
  auto dummy89 = model->addOperand(&type15);
  auto param89 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static bool8 time_major1_init[] = {true};
  model->setOperandValue(time_major1, time_major1_init, sizeof(bool8) * 1);
  static bool8 merge_outputs1_init[] = {false};
  model->setOperandValue(merge_outputs1, merge_outputs1_init, sizeof(bool8) * 1);
  static float dummy81_init[] = {0.0f};
  model->setOperandValue(dummy81, dummy81_init, sizeof(float) * 1);
  static int32_t param81_init[] = {0};
  model->setOperandValue(param81, param81_init, sizeof(int32_t) * 1);
  static float dummy82_init[] = {0.0f};
  model->setOperandValue(dummy82, dummy82_init, sizeof(float) * 1);
  static int32_t param82_init[] = {0};
  model->setOperandValue(param82, param82_init, sizeof(int32_t) * 1);
  static float dummy83_init[] = {0.0f};
  model->setOperandValue(dummy83, dummy83_init, sizeof(float) * 1);
  static int32_t param83_init[] = {0};
  model->setOperandValue(param83, param83_init, sizeof(int32_t) * 1);
  static float dummy84_init[] = {0.0f};
  model->setOperandValue(dummy84, dummy84_init, sizeof(float) * 1);
  static int32_t param84_init[] = {0};
  model->setOperandValue(param84, param84_init, sizeof(int32_t) * 1);
  static float dummy85_init[] = {0.0f};
  model->setOperandValue(dummy85, dummy85_init, sizeof(float) * 1);
  static int32_t param85_init[] = {0};
  model->setOperandValue(param85, param85_init, sizeof(int32_t) * 1);
  static float dummy86_init[] = {0.0f};
  model->setOperandValue(dummy86, dummy86_init, sizeof(float) * 1);
  static int32_t param86_init[] = {0};
  model->setOperandValue(param86, param86_init, sizeof(int32_t) * 1);
  static float dummy87_init[] = {0.0f};
  model->setOperandValue(dummy87, dummy87_init, sizeof(float) * 1);
  static int32_t param87_init[] = {0};
  model->setOperandValue(param87, param87_init, sizeof(int32_t) * 1);
  static float dummy88_init[] = {0.0f};
  model->setOperandValue(dummy88, dummy88_init, sizeof(float) * 1);
  static int32_t param88_init[] = {0};
  model->setOperandValue(param88, param88_init, sizeof(int32_t) * 1);
  static float dummy89_init[] = {0.0f};
  model->setOperandValue(dummy89, dummy89_init, sizeof(float) * 1);
  static int32_t param89_init[] = {0};
  model->setOperandValue(param89, param89_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy81, param81}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights1_tmp, dummy82, param82}, {fw_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights1_tmp, dummy83, param83}, {fw_recurrent_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias1_tmp, dummy84, param84}, {fw_bias1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state1_tmp, dummy85, param85}, {fw_hidden_state1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights1_tmp, dummy86, param86}, {bw_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights1_tmp, dummy87, param87}, {bw_recurrent_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias1_tmp, dummy88, param88}, {bw_bias1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state1_tmp, dummy89, param89}, {bw_hidden_state1});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input1, fw_weights1, fw_recurrent_weights1, fw_bias1, fw_hidden_state1, bw_weights1, bw_recurrent_weights1, bw_bias1, bw_hidden_state1, aux_input1, fw_aux_weights1, bw_aux_weights1, activation1, time_major1, merge_outputs1}, {fw_output1, bw_output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input1, fw_aux_weights1, bw_aux_weights1, input1_tmp, fw_weights1_tmp, fw_recurrent_weights1_tmp, fw_bias1_tmp, fw_hidden_state1_tmp, bw_weights1_tmp, bw_recurrent_weights1_tmp, bw_bias1_tmp, bw_hidden_state1_tmp},
    {fw_output1, bw_output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_2(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT16, {0});
  OperandType type17(Type::TENSOR_FLOAT16, {16});
  OperandType type18(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type20(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type21(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type30(Type::TENSOR_FLOAT16, {16, 2, 16});
  OperandType type31(Type::TENSOR_FLOAT16, {16, 2, 8});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input1 = model->addOperand(&type31);
  auto fw_weights1 = model->addOperand(&type21);
  auto fw_recurrent_weights1 = model->addOperand(&type20);
  auto fw_bias1 = model->addOperand(&type17);
  auto fw_hidden_state1 = model->addOperand(&type18);
  auto bw_weights1 = model->addOperand(&type21);
  auto bw_recurrent_weights1 = model->addOperand(&type20);
  auto bw_bias1 = model->addOperand(&type17);
  auto bw_hidden_state1 = model->addOperand(&type18);
  auto aux_input1 = model->addOperand(&type16);
  auto fw_aux_weights1 = model->addOperand(&type16);
  auto bw_aux_weights1 = model->addOperand(&type16);
  auto activation1 = model->addOperand(&type7);
  auto time_major1 = model->addOperand(&type8);
  auto merge_outputs1 = model->addOperand(&type8);
  auto fw_output1 = model->addOperand(&type30);
  auto bw_output1 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static bool8 time_major1_init[] = {true};
  model->setOperandValue(time_major1, time_major1_init, sizeof(bool8) * 1);
  static bool8 merge_outputs1_init[] = {false};
  model->setOperandValue(merge_outputs1, merge_outputs1_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input1, fw_weights1, fw_recurrent_weights1, fw_bias1, fw_hidden_state1, bw_weights1, bw_recurrent_weights1, bw_bias1, bw_hidden_state1, aux_input1, fw_aux_weights1, bw_aux_weights1, activation1, time_major1, merge_outputs1}, {fw_output1, bw_output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, fw_weights1, fw_recurrent_weights1, fw_bias1, fw_hidden_state1, bw_weights1, bw_recurrent_weights1, bw_bias1, bw_hidden_state1, aux_input1, fw_aux_weights1, bw_aux_weights1},
    {fw_output1, bw_output1});
  assert(model->isValid());
}

bool is_ignored_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_dynamic_output_shape_2(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT16, {0});
  OperandType type17(Type::TENSOR_FLOAT16, {16});
  OperandType type18(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type20(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type21(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type31(Type::TENSOR_FLOAT16, {16, 2, 8});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input1 = model->addOperand(&type31);
  auto fw_weights1 = model->addOperand(&type21);
  auto fw_recurrent_weights1 = model->addOperand(&type20);
  auto fw_bias1 = model->addOperand(&type17);
  auto fw_hidden_state1 = model->addOperand(&type18);
  auto bw_weights1 = model->addOperand(&type21);
  auto bw_recurrent_weights1 = model->addOperand(&type20);
  auto bw_bias1 = model->addOperand(&type17);
  auto bw_hidden_state1 = model->addOperand(&type18);
  auto aux_input1 = model->addOperand(&type16);
  auto fw_aux_weights1 = model->addOperand(&type16);
  auto bw_aux_weights1 = model->addOperand(&type16);
  auto activation1 = model->addOperand(&type7);
  auto time_major1 = model->addOperand(&type8);
  auto merge_outputs1 = model->addOperand(&type8);
  auto fw_output1 = model->addOperand(&type23);
  auto bw_output1 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static bool8 time_major1_init[] = {true};
  model->setOperandValue(time_major1, time_major1_init, sizeof(bool8) * 1);
  static bool8 merge_outputs1_init[] = {false};
  model->setOperandValue(merge_outputs1, merge_outputs1_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input1, fw_weights1, fw_recurrent_weights1, fw_bias1, fw_hidden_state1, bw_weights1, bw_recurrent_weights1, bw_bias1, bw_hidden_state1, aux_input1, fw_aux_weights1, bw_aux_weights1, activation1, time_major1, merge_outputs1}, {fw_output1, bw_output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, fw_weights1, fw_recurrent_weights1, fw_bias1, fw_hidden_state1, bw_weights1, bw_recurrent_weights1, bw_bias1, bw_hidden_state1, aux_input1, fw_aux_weights1, bw_aux_weights1},
    {fw_output1, bw_output1});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT16, {0});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type27(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type28(Type::TENSOR_FLOAT16, {16});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type30(Type::TENSOR_FLOAT16, {16, 2, 16});
  OperandType type32(Type::TENSOR_FLOAT16, {16, 2, 8});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input1 = model->addOperand(&type32);
  auto fw_weights1 = model->addOperand(&type26);
  auto fw_recurrent_weights1 = model->addOperand(&type27);
  auto fw_bias1 = model->addOperand(&type28);
  auto fw_hidden_state1 = model->addOperand(&type29);
  auto bw_weights1 = model->addOperand(&type26);
  auto bw_recurrent_weights1 = model->addOperand(&type27);
  auto bw_bias1 = model->addOperand(&type28);
  auto bw_hidden_state1 = model->addOperand(&type29);
  auto aux_input1 = model->addOperand(&type16);
  auto fw_aux_weights1 = model->addOperand(&type16);
  auto bw_aux_weights1 = model->addOperand(&type16);
  auto activation1 = model->addOperand(&type7);
  auto time_major1 = model->addOperand(&type8);
  auto merge_outputs1 = model->addOperand(&type8);
  auto fw_output1 = model->addOperand(&type30);
  auto bw_output1 = model->addOperand(&type30);
  auto input1_tmp = model->addOperand(&type32);
  auto dummy90 = model->addOperand(&type25);
  auto param90 = model->addOperand(&type7);
  auto fw_weights1_tmp = model->addOperand(&type26);
  auto dummy91 = model->addOperand(&type25);
  auto param91 = model->addOperand(&type7);
  auto fw_recurrent_weights1_tmp = model->addOperand(&type27);
  auto dummy92 = model->addOperand(&type25);
  auto param92 = model->addOperand(&type7);
  auto fw_bias1_tmp = model->addOperand(&type28);
  auto dummy93 = model->addOperand(&type25);
  auto param93 = model->addOperand(&type7);
  auto fw_hidden_state1_tmp = model->addOperand(&type29);
  auto dummy94 = model->addOperand(&type25);
  auto param94 = model->addOperand(&type7);
  auto bw_weights1_tmp = model->addOperand(&type26);
  auto dummy95 = model->addOperand(&type25);
  auto param95 = model->addOperand(&type7);
  auto bw_recurrent_weights1_tmp = model->addOperand(&type27);
  auto dummy96 = model->addOperand(&type25);
  auto param96 = model->addOperand(&type7);
  auto bw_bias1_tmp = model->addOperand(&type28);
  auto dummy97 = model->addOperand(&type25);
  auto param97 = model->addOperand(&type7);
  auto bw_hidden_state1_tmp = model->addOperand(&type29);
  auto dummy98 = model->addOperand(&type25);
  auto param98 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static bool8 time_major1_init[] = {true};
  model->setOperandValue(time_major1, time_major1_init, sizeof(bool8) * 1);
  static bool8 merge_outputs1_init[] = {false};
  model->setOperandValue(merge_outputs1, merge_outputs1_init, sizeof(bool8) * 1);
  static _Float16 dummy90_init[] = {0.0f};
  model->setOperandValue(dummy90, dummy90_init, sizeof(_Float16) * 1);
  static int32_t param90_init[] = {0};
  model->setOperandValue(param90, param90_init, sizeof(int32_t) * 1);
  static _Float16 dummy91_init[] = {0.0f};
  model->setOperandValue(dummy91, dummy91_init, sizeof(_Float16) * 1);
  static int32_t param91_init[] = {0};
  model->setOperandValue(param91, param91_init, sizeof(int32_t) * 1);
  static _Float16 dummy92_init[] = {0.0f};
  model->setOperandValue(dummy92, dummy92_init, sizeof(_Float16) * 1);
  static int32_t param92_init[] = {0};
  model->setOperandValue(param92, param92_init, sizeof(int32_t) * 1);
  static _Float16 dummy93_init[] = {0.0f};
  model->setOperandValue(dummy93, dummy93_init, sizeof(_Float16) * 1);
  static int32_t param93_init[] = {0};
  model->setOperandValue(param93, param93_init, sizeof(int32_t) * 1);
  static _Float16 dummy94_init[] = {0.0f};
  model->setOperandValue(dummy94, dummy94_init, sizeof(_Float16) * 1);
  static int32_t param94_init[] = {0};
  model->setOperandValue(param94, param94_init, sizeof(int32_t) * 1);
  static _Float16 dummy95_init[] = {0.0f};
  model->setOperandValue(dummy95, dummy95_init, sizeof(_Float16) * 1);
  static int32_t param95_init[] = {0};
  model->setOperandValue(param95, param95_init, sizeof(int32_t) * 1);
  static _Float16 dummy96_init[] = {0.0f};
  model->setOperandValue(dummy96, dummy96_init, sizeof(_Float16) * 1);
  static int32_t param96_init[] = {0};
  model->setOperandValue(param96, param96_init, sizeof(int32_t) * 1);
  static _Float16 dummy97_init[] = {0.0f};
  model->setOperandValue(dummy97, dummy97_init, sizeof(_Float16) * 1);
  static int32_t param97_init[] = {0};
  model->setOperandValue(param97, param97_init, sizeof(int32_t) * 1);
  static _Float16 dummy98_init[] = {0.0f};
  model->setOperandValue(dummy98, dummy98_init, sizeof(_Float16) * 1);
  static int32_t param98_init[] = {0};
  model->setOperandValue(param98, param98_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy90, param90}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights1_tmp, dummy91, param91}, {fw_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights1_tmp, dummy92, param92}, {fw_recurrent_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias1_tmp, dummy93, param93}, {fw_bias1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state1_tmp, dummy94, param94}, {fw_hidden_state1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights1_tmp, dummy95, param95}, {bw_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights1_tmp, dummy96, param96}, {bw_recurrent_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias1_tmp, dummy97, param97}, {bw_bias1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state1_tmp, dummy98, param98}, {bw_hidden_state1});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input1, fw_weights1, fw_recurrent_weights1, fw_bias1, fw_hidden_state1, bw_weights1, bw_recurrent_weights1, bw_bias1, bw_hidden_state1, aux_input1, fw_aux_weights1, bw_aux_weights1, activation1, time_major1, merge_outputs1}, {fw_output1, bw_output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input1, fw_aux_weights1, bw_aux_weights1, input1_tmp, fw_weights1_tmp, fw_recurrent_weights1_tmp, fw_bias1_tmp, fw_hidden_state1_tmp, bw_weights1_tmp, bw_recurrent_weights1_tmp, bw_bias1_tmp, bw_hidden_state1_tmp},
    {fw_output1, bw_output1});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT16, {0});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type27(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type28(Type::TENSOR_FLOAT16, {16});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type32(Type::TENSOR_FLOAT16, {16, 2, 8});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input1 = model->addOperand(&type32);
  auto fw_weights1 = model->addOperand(&type26);
  auto fw_recurrent_weights1 = model->addOperand(&type27);
  auto fw_bias1 = model->addOperand(&type28);
  auto fw_hidden_state1 = model->addOperand(&type29);
  auto bw_weights1 = model->addOperand(&type26);
  auto bw_recurrent_weights1 = model->addOperand(&type27);
  auto bw_bias1 = model->addOperand(&type28);
  auto bw_hidden_state1 = model->addOperand(&type29);
  auto aux_input1 = model->addOperand(&type16);
  auto fw_aux_weights1 = model->addOperand(&type16);
  auto bw_aux_weights1 = model->addOperand(&type16);
  auto activation1 = model->addOperand(&type7);
  auto time_major1 = model->addOperand(&type8);
  auto merge_outputs1 = model->addOperand(&type8);
  auto fw_output1 = model->addOperand(&type23);
  auto bw_output1 = model->addOperand(&type23);
  auto input1_tmp = model->addOperand(&type32);
  auto dummy99 = model->addOperand(&type25);
  auto param99 = model->addOperand(&type7);
  auto fw_weights1_tmp = model->addOperand(&type26);
  auto dummy100 = model->addOperand(&type25);
  auto param100 = model->addOperand(&type7);
  auto fw_recurrent_weights1_tmp = model->addOperand(&type27);
  auto dummy101 = model->addOperand(&type25);
  auto param101 = model->addOperand(&type7);
  auto fw_bias1_tmp = model->addOperand(&type28);
  auto dummy102 = model->addOperand(&type25);
  auto param102 = model->addOperand(&type7);
  auto fw_hidden_state1_tmp = model->addOperand(&type29);
  auto dummy103 = model->addOperand(&type25);
  auto param103 = model->addOperand(&type7);
  auto bw_weights1_tmp = model->addOperand(&type26);
  auto dummy104 = model->addOperand(&type25);
  auto param104 = model->addOperand(&type7);
  auto bw_recurrent_weights1_tmp = model->addOperand(&type27);
  auto dummy105 = model->addOperand(&type25);
  auto param105 = model->addOperand(&type7);
  auto bw_bias1_tmp = model->addOperand(&type28);
  auto dummy106 = model->addOperand(&type25);
  auto param106 = model->addOperand(&type7);
  auto bw_hidden_state1_tmp = model->addOperand(&type29);
  auto dummy107 = model->addOperand(&type25);
  auto param107 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation1_init[] = {1};
  model->setOperandValue(activation1, activation1_init, sizeof(int32_t) * 1);
  static bool8 time_major1_init[] = {true};
  model->setOperandValue(time_major1, time_major1_init, sizeof(bool8) * 1);
  static bool8 merge_outputs1_init[] = {false};
  model->setOperandValue(merge_outputs1, merge_outputs1_init, sizeof(bool8) * 1);
  static _Float16 dummy99_init[] = {0.0f};
  model->setOperandValue(dummy99, dummy99_init, sizeof(_Float16) * 1);
  static int32_t param99_init[] = {0};
  model->setOperandValue(param99, param99_init, sizeof(int32_t) * 1);
  static _Float16 dummy100_init[] = {0.0f};
  model->setOperandValue(dummy100, dummy100_init, sizeof(_Float16) * 1);
  static int32_t param100_init[] = {0};
  model->setOperandValue(param100, param100_init, sizeof(int32_t) * 1);
  static _Float16 dummy101_init[] = {0.0f};
  model->setOperandValue(dummy101, dummy101_init, sizeof(_Float16) * 1);
  static int32_t param101_init[] = {0};
  model->setOperandValue(param101, param101_init, sizeof(int32_t) * 1);
  static _Float16 dummy102_init[] = {0.0f};
  model->setOperandValue(dummy102, dummy102_init, sizeof(_Float16) * 1);
  static int32_t param102_init[] = {0};
  model->setOperandValue(param102, param102_init, sizeof(int32_t) * 1);
  static _Float16 dummy103_init[] = {0.0f};
  model->setOperandValue(dummy103, dummy103_init, sizeof(_Float16) * 1);
  static int32_t param103_init[] = {0};
  model->setOperandValue(param103, param103_init, sizeof(int32_t) * 1);
  static _Float16 dummy104_init[] = {0.0f};
  model->setOperandValue(dummy104, dummy104_init, sizeof(_Float16) * 1);
  static int32_t param104_init[] = {0};
  model->setOperandValue(param104, param104_init, sizeof(int32_t) * 1);
  static _Float16 dummy105_init[] = {0.0f};
  model->setOperandValue(dummy105, dummy105_init, sizeof(_Float16) * 1);
  static int32_t param105_init[] = {0};
  model->setOperandValue(param105, param105_init, sizeof(int32_t) * 1);
  static _Float16 dummy106_init[] = {0.0f};
  model->setOperandValue(dummy106, dummy106_init, sizeof(_Float16) * 1);
  static int32_t param106_init[] = {0};
  model->setOperandValue(param106, param106_init, sizeof(int32_t) * 1);
  static _Float16 dummy107_init[] = {0.0f};
  model->setOperandValue(dummy107, dummy107_init, sizeof(_Float16) * 1);
  static int32_t param107_init[] = {0};
  model->setOperandValue(param107, param107_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy99, param99}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights1_tmp, dummy100, param100}, {fw_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights1_tmp, dummy101, param101}, {fw_recurrent_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias1_tmp, dummy102, param102}, {fw_bias1});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state1_tmp, dummy103, param103}, {fw_hidden_state1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights1_tmp, dummy104, param104}, {bw_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights1_tmp, dummy105, param105}, {bw_recurrent_weights1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias1_tmp, dummy106, param106}, {bw_bias1});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state1_tmp, dummy107, param107}, {bw_hidden_state1});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input1, fw_weights1, fw_recurrent_weights1, fw_bias1, fw_hidden_state1, bw_weights1, bw_recurrent_weights1, bw_bias1, bw_hidden_state1, aux_input1, fw_aux_weights1, bw_aux_weights1, activation1, time_major1, merge_outputs1}, {fw_output1, bw_output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input1, fw_aux_weights1, bw_aux_weights1, input1_tmp, fw_weights1_tmp, fw_recurrent_weights1_tmp, fw_bias1_tmp, fw_hidden_state1_tmp, bw_weights1_tmp, bw_recurrent_weights1_tmp, bw_bias1_tmp, bw_hidden_state1_tmp},
    {fw_output1, bw_output1});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_3(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type11(Type::TENSOR_FLOAT32, {16, 2, 32});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::TENSOR_FLOAT32, {16, 2, 8});
  // Phase 1, operands
  auto input2 = model->addOperand(&type9);
  auto fw_weights2 = model->addOperand(&type1);
  auto fw_recurrent_weights2 = model->addOperand(&type2);
  auto fw_bias2 = model->addOperand(&type3);
  auto fw_hidden_state2 = model->addOperand(&type4);
  auto bw_weights2 = model->addOperand(&type1);
  auto bw_recurrent_weights2 = model->addOperand(&type2);
  auto bw_bias2 = model->addOperand(&type3);
  auto bw_hidden_state2 = model->addOperand(&type4);
  auto aux_input2 = model->addOperand(&type5);
  auto fw_aux_weights2 = model->addOperand(&type5);
  auto bw_aux_weights2 = model->addOperand(&type5);
  auto activation2 = model->addOperand(&type7);
  auto time_major2 = model->addOperand(&type8);
  auto merge_outputs2 = model->addOperand(&type8);
  auto fw_output2 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t activation2_init[] = {1};
  model->setOperandValue(activation2, activation2_init, sizeof(int32_t) * 1);
  static bool8 time_major2_init[] = {true};
  model->setOperandValue(time_major2, time_major2_init, sizeof(bool8) * 1);
  static bool8 merge_outputs2_init[] = {true};
  model->setOperandValue(merge_outputs2, merge_outputs2_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input2, fw_weights2, fw_recurrent_weights2, fw_bias2, fw_hidden_state2, bw_weights2, bw_recurrent_weights2, bw_bias2, bw_hidden_state2, aux_input2, fw_aux_weights2, bw_aux_weights2, activation2, time_major2, merge_outputs2}, {fw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2, fw_weights2, fw_recurrent_weights2, fw_bias2, fw_hidden_state2, bw_weights2, bw_recurrent_weights2, bw_bias2, bw_hidden_state2, aux_input2, fw_aux_weights2, bw_aux_weights2},
    {fw_output2});
  assert(model->isValid());
}

bool is_ignored_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_3(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::TENSOR_FLOAT32, {16, 2, 8});
  // Phase 1, operands
  auto input2 = model->addOperand(&type9);
  auto fw_weights2 = model->addOperand(&type1);
  auto fw_recurrent_weights2 = model->addOperand(&type2);
  auto fw_bias2 = model->addOperand(&type3);
  auto fw_hidden_state2 = model->addOperand(&type4);
  auto bw_weights2 = model->addOperand(&type1);
  auto bw_recurrent_weights2 = model->addOperand(&type2);
  auto bw_bias2 = model->addOperand(&type3);
  auto bw_hidden_state2 = model->addOperand(&type4);
  auto aux_input2 = model->addOperand(&type5);
  auto fw_aux_weights2 = model->addOperand(&type5);
  auto bw_aux_weights2 = model->addOperand(&type5);
  auto activation2 = model->addOperand(&type7);
  auto time_major2 = model->addOperand(&type8);
  auto merge_outputs2 = model->addOperand(&type8);
  auto fw_output2 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t activation2_init[] = {1};
  model->setOperandValue(activation2, activation2_init, sizeof(int32_t) * 1);
  static bool8 time_major2_init[] = {true};
  model->setOperandValue(time_major2, time_major2_init, sizeof(bool8) * 1);
  static bool8 merge_outputs2_init[] = {true};
  model->setOperandValue(merge_outputs2, merge_outputs2_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input2, fw_weights2, fw_recurrent_weights2, fw_bias2, fw_hidden_state2, bw_weights2, bw_recurrent_weights2, bw_bias2, bw_hidden_state2, aux_input2, fw_aux_weights2, bw_aux_weights2, activation2, time_major2, merge_outputs2}, {fw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2, fw_weights2, fw_recurrent_weights2, fw_bias2, fw_hidden_state2, bw_weights2, bw_recurrent_weights2, bw_bias2, bw_hidden_state2, aux_input2, fw_aux_weights2, bw_aux_weights2},
    {fw_output2});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_all_inputs_as_internal_3(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type11(Type::TENSOR_FLOAT32, {16, 2, 32});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::TENSOR_FLOAT32, {16, 2, 8});
  // Phase 1, operands
  auto input2 = model->addOperand(&type9);
  auto fw_weights2 = model->addOperand(&type1);
  auto fw_recurrent_weights2 = model->addOperand(&type2);
  auto fw_bias2 = model->addOperand(&type3);
  auto fw_hidden_state2 = model->addOperand(&type4);
  auto bw_weights2 = model->addOperand(&type1);
  auto bw_recurrent_weights2 = model->addOperand(&type2);
  auto bw_bias2 = model->addOperand(&type3);
  auto bw_hidden_state2 = model->addOperand(&type4);
  auto aux_input2 = model->addOperand(&type5);
  auto fw_aux_weights2 = model->addOperand(&type5);
  auto bw_aux_weights2 = model->addOperand(&type5);
  auto activation2 = model->addOperand(&type7);
  auto time_major2 = model->addOperand(&type8);
  auto merge_outputs2 = model->addOperand(&type8);
  auto fw_output2 = model->addOperand(&type11);
  auto input2_tmp = model->addOperand(&type9);
  auto dummy108 = model->addOperand(&type15);
  auto param108 = model->addOperand(&type7);
  auto fw_weights2_tmp = model->addOperand(&type1);
  auto dummy109 = model->addOperand(&type15);
  auto param109 = model->addOperand(&type7);
  auto fw_recurrent_weights2_tmp = model->addOperand(&type2);
  auto dummy110 = model->addOperand(&type15);
  auto param110 = model->addOperand(&type7);
  auto fw_bias2_tmp = model->addOperand(&type3);
  auto dummy111 = model->addOperand(&type15);
  auto param111 = model->addOperand(&type7);
  auto fw_hidden_state2_tmp = model->addOperand(&type4);
  auto dummy112 = model->addOperand(&type15);
  auto param112 = model->addOperand(&type7);
  auto bw_weights2_tmp = model->addOperand(&type1);
  auto dummy113 = model->addOperand(&type15);
  auto param113 = model->addOperand(&type7);
  auto bw_recurrent_weights2_tmp = model->addOperand(&type2);
  auto dummy114 = model->addOperand(&type15);
  auto param114 = model->addOperand(&type7);
  auto bw_bias2_tmp = model->addOperand(&type3);
  auto dummy115 = model->addOperand(&type15);
  auto param115 = model->addOperand(&type7);
  auto bw_hidden_state2_tmp = model->addOperand(&type4);
  auto dummy116 = model->addOperand(&type15);
  auto param116 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation2_init[] = {1};
  model->setOperandValue(activation2, activation2_init, sizeof(int32_t) * 1);
  static bool8 time_major2_init[] = {true};
  model->setOperandValue(time_major2, time_major2_init, sizeof(bool8) * 1);
  static bool8 merge_outputs2_init[] = {true};
  model->setOperandValue(merge_outputs2, merge_outputs2_init, sizeof(bool8) * 1);
  static float dummy108_init[] = {0.0f};
  model->setOperandValue(dummy108, dummy108_init, sizeof(float) * 1);
  static int32_t param108_init[] = {0};
  model->setOperandValue(param108, param108_init, sizeof(int32_t) * 1);
  static float dummy109_init[] = {0.0f};
  model->setOperandValue(dummy109, dummy109_init, sizeof(float) * 1);
  static int32_t param109_init[] = {0};
  model->setOperandValue(param109, param109_init, sizeof(int32_t) * 1);
  static float dummy110_init[] = {0.0f};
  model->setOperandValue(dummy110, dummy110_init, sizeof(float) * 1);
  static int32_t param110_init[] = {0};
  model->setOperandValue(param110, param110_init, sizeof(int32_t) * 1);
  static float dummy111_init[] = {0.0f};
  model->setOperandValue(dummy111, dummy111_init, sizeof(float) * 1);
  static int32_t param111_init[] = {0};
  model->setOperandValue(param111, param111_init, sizeof(int32_t) * 1);
  static float dummy112_init[] = {0.0f};
  model->setOperandValue(dummy112, dummy112_init, sizeof(float) * 1);
  static int32_t param112_init[] = {0};
  model->setOperandValue(param112, param112_init, sizeof(int32_t) * 1);
  static float dummy113_init[] = {0.0f};
  model->setOperandValue(dummy113, dummy113_init, sizeof(float) * 1);
  static int32_t param113_init[] = {0};
  model->setOperandValue(param113, param113_init, sizeof(int32_t) * 1);
  static float dummy114_init[] = {0.0f};
  model->setOperandValue(dummy114, dummy114_init, sizeof(float) * 1);
  static int32_t param114_init[] = {0};
  model->setOperandValue(param114, param114_init, sizeof(int32_t) * 1);
  static float dummy115_init[] = {0.0f};
  model->setOperandValue(dummy115, dummy115_init, sizeof(float) * 1);
  static int32_t param115_init[] = {0};
  model->setOperandValue(param115, param115_init, sizeof(int32_t) * 1);
  static float dummy116_init[] = {0.0f};
  model->setOperandValue(dummy116, dummy116_init, sizeof(float) * 1);
  static int32_t param116_init[] = {0};
  model->setOperandValue(param116, param116_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy108, param108}, {input2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights2_tmp, dummy109, param109}, {fw_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights2_tmp, dummy110, param110}, {fw_recurrent_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias2_tmp, dummy111, param111}, {fw_bias2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state2_tmp, dummy112, param112}, {fw_hidden_state2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights2_tmp, dummy113, param113}, {bw_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights2_tmp, dummy114, param114}, {bw_recurrent_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias2_tmp, dummy115, param115}, {bw_bias2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state2_tmp, dummy116, param116}, {bw_hidden_state2});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input2, fw_weights2, fw_recurrent_weights2, fw_bias2, fw_hidden_state2, bw_weights2, bw_recurrent_weights2, bw_bias2, bw_hidden_state2, aux_input2, fw_aux_weights2, bw_aux_weights2, activation2, time_major2, merge_outputs2}, {fw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input2, fw_aux_weights2, bw_aux_weights2, input2_tmp, fw_weights2_tmp, fw_recurrent_weights2_tmp, fw_bias2_tmp, fw_hidden_state2_tmp, bw_weights2_tmp, bw_recurrent_weights2_tmp, bw_bias2_tmp, bw_hidden_state2_tmp},
    {fw_output2});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::TENSOR_FLOAT32, {16, 2, 8});
  // Phase 1, operands
  auto input2 = model->addOperand(&type9);
  auto fw_weights2 = model->addOperand(&type1);
  auto fw_recurrent_weights2 = model->addOperand(&type2);
  auto fw_bias2 = model->addOperand(&type3);
  auto fw_hidden_state2 = model->addOperand(&type4);
  auto bw_weights2 = model->addOperand(&type1);
  auto bw_recurrent_weights2 = model->addOperand(&type2);
  auto bw_bias2 = model->addOperand(&type3);
  auto bw_hidden_state2 = model->addOperand(&type4);
  auto aux_input2 = model->addOperand(&type5);
  auto fw_aux_weights2 = model->addOperand(&type5);
  auto bw_aux_weights2 = model->addOperand(&type5);
  auto activation2 = model->addOperand(&type7);
  auto time_major2 = model->addOperand(&type8);
  auto merge_outputs2 = model->addOperand(&type8);
  auto fw_output2 = model->addOperand(&type14);
  auto input2_tmp = model->addOperand(&type9);
  auto dummy117 = model->addOperand(&type15);
  auto param117 = model->addOperand(&type7);
  auto fw_weights2_tmp = model->addOperand(&type1);
  auto dummy118 = model->addOperand(&type15);
  auto param118 = model->addOperand(&type7);
  auto fw_recurrent_weights2_tmp = model->addOperand(&type2);
  auto dummy119 = model->addOperand(&type15);
  auto param119 = model->addOperand(&type7);
  auto fw_bias2_tmp = model->addOperand(&type3);
  auto dummy120 = model->addOperand(&type15);
  auto param120 = model->addOperand(&type7);
  auto fw_hidden_state2_tmp = model->addOperand(&type4);
  auto dummy121 = model->addOperand(&type15);
  auto param121 = model->addOperand(&type7);
  auto bw_weights2_tmp = model->addOperand(&type1);
  auto dummy122 = model->addOperand(&type15);
  auto param122 = model->addOperand(&type7);
  auto bw_recurrent_weights2_tmp = model->addOperand(&type2);
  auto dummy123 = model->addOperand(&type15);
  auto param123 = model->addOperand(&type7);
  auto bw_bias2_tmp = model->addOperand(&type3);
  auto dummy124 = model->addOperand(&type15);
  auto param124 = model->addOperand(&type7);
  auto bw_hidden_state2_tmp = model->addOperand(&type4);
  auto dummy125 = model->addOperand(&type15);
  auto param125 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation2_init[] = {1};
  model->setOperandValue(activation2, activation2_init, sizeof(int32_t) * 1);
  static bool8 time_major2_init[] = {true};
  model->setOperandValue(time_major2, time_major2_init, sizeof(bool8) * 1);
  static bool8 merge_outputs2_init[] = {true};
  model->setOperandValue(merge_outputs2, merge_outputs2_init, sizeof(bool8) * 1);
  static float dummy117_init[] = {0.0f};
  model->setOperandValue(dummy117, dummy117_init, sizeof(float) * 1);
  static int32_t param117_init[] = {0};
  model->setOperandValue(param117, param117_init, sizeof(int32_t) * 1);
  static float dummy118_init[] = {0.0f};
  model->setOperandValue(dummy118, dummy118_init, sizeof(float) * 1);
  static int32_t param118_init[] = {0};
  model->setOperandValue(param118, param118_init, sizeof(int32_t) * 1);
  static float dummy119_init[] = {0.0f};
  model->setOperandValue(dummy119, dummy119_init, sizeof(float) * 1);
  static int32_t param119_init[] = {0};
  model->setOperandValue(param119, param119_init, sizeof(int32_t) * 1);
  static float dummy120_init[] = {0.0f};
  model->setOperandValue(dummy120, dummy120_init, sizeof(float) * 1);
  static int32_t param120_init[] = {0};
  model->setOperandValue(param120, param120_init, sizeof(int32_t) * 1);
  static float dummy121_init[] = {0.0f};
  model->setOperandValue(dummy121, dummy121_init, sizeof(float) * 1);
  static int32_t param121_init[] = {0};
  model->setOperandValue(param121, param121_init, sizeof(int32_t) * 1);
  static float dummy122_init[] = {0.0f};
  model->setOperandValue(dummy122, dummy122_init, sizeof(float) * 1);
  static int32_t param122_init[] = {0};
  model->setOperandValue(param122, param122_init, sizeof(int32_t) * 1);
  static float dummy123_init[] = {0.0f};
  model->setOperandValue(dummy123, dummy123_init, sizeof(float) * 1);
  static int32_t param123_init[] = {0};
  model->setOperandValue(param123, param123_init, sizeof(int32_t) * 1);
  static float dummy124_init[] = {0.0f};
  model->setOperandValue(dummy124, dummy124_init, sizeof(float) * 1);
  static int32_t param124_init[] = {0};
  model->setOperandValue(param124, param124_init, sizeof(int32_t) * 1);
  static float dummy125_init[] = {0.0f};
  model->setOperandValue(dummy125, dummy125_init, sizeof(float) * 1);
  static int32_t param125_init[] = {0};
  model->setOperandValue(param125, param125_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy117, param117}, {input2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights2_tmp, dummy118, param118}, {fw_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights2_tmp, dummy119, param119}, {fw_recurrent_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias2_tmp, dummy120, param120}, {fw_bias2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state2_tmp, dummy121, param121}, {fw_hidden_state2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights2_tmp, dummy122, param122}, {bw_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights2_tmp, dummy123, param123}, {bw_recurrent_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias2_tmp, dummy124, param124}, {bw_bias2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state2_tmp, dummy125, param125}, {bw_hidden_state2});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input2, fw_weights2, fw_recurrent_weights2, fw_bias2, fw_hidden_state2, bw_weights2, bw_recurrent_weights2, bw_bias2, bw_hidden_state2, aux_input2, fw_aux_weights2, bw_aux_weights2, activation2, time_major2, merge_outputs2}, {fw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input2, fw_aux_weights2, bw_aux_weights2, input2_tmp, fw_weights2_tmp, fw_recurrent_weights2_tmp, fw_bias2_tmp, fw_hidden_state2_tmp, bw_weights2_tmp, bw_recurrent_weights2_tmp, bw_bias2_tmp, bw_hidden_state2_tmp},
    {fw_output2});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_3(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type11(Type::TENSOR_FLOAT32, {16, 2, 32});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::TENSOR_FLOAT32, {16, 2, 8});
  // Phase 1, operands
  auto input2 = model->addOperand(&type9);
  auto fw_weights2 = model->addOperand(&type1);
  auto fw_recurrent_weights2 = model->addOperand(&type2);
  auto fw_bias2 = model->addOperand(&type3);
  auto fw_hidden_state2 = model->addOperand(&type4);
  auto bw_weights2 = model->addOperand(&type1);
  auto bw_recurrent_weights2 = model->addOperand(&type2);
  auto bw_bias2 = model->addOperand(&type3);
  auto bw_hidden_state2 = model->addOperand(&type4);
  auto aux_input2 = model->addOperand(&type5);
  auto fw_aux_weights2 = model->addOperand(&type5);
  auto bw_aux_weights2 = model->addOperand(&type5);
  auto activation2 = model->addOperand(&type7);
  auto time_major2 = model->addOperand(&type8);
  auto merge_outputs2 = model->addOperand(&type8);
  auto fw_output2 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t activation2_init[] = {1};
  model->setOperandValue(activation2, activation2_init, sizeof(int32_t) * 1);
  static bool8 time_major2_init[] = {true};
  model->setOperandValue(time_major2, time_major2_init, sizeof(bool8) * 1);
  static bool8 merge_outputs2_init[] = {true};
  model->setOperandValue(merge_outputs2, merge_outputs2_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input2, fw_weights2, fw_recurrent_weights2, fw_bias2, fw_hidden_state2, bw_weights2, bw_recurrent_weights2, bw_bias2, bw_hidden_state2, aux_input2, fw_aux_weights2, bw_aux_weights2, activation2, time_major2, merge_outputs2}, {fw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2, fw_weights2, fw_recurrent_weights2, fw_bias2, fw_hidden_state2, bw_weights2, bw_recurrent_weights2, bw_bias2, bw_hidden_state2, aux_input2, fw_aux_weights2, bw_aux_weights2},
    {fw_output2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::TENSOR_FLOAT32, {16, 2, 8});
  // Phase 1, operands
  auto input2 = model->addOperand(&type9);
  auto fw_weights2 = model->addOperand(&type1);
  auto fw_recurrent_weights2 = model->addOperand(&type2);
  auto fw_bias2 = model->addOperand(&type3);
  auto fw_hidden_state2 = model->addOperand(&type4);
  auto bw_weights2 = model->addOperand(&type1);
  auto bw_recurrent_weights2 = model->addOperand(&type2);
  auto bw_bias2 = model->addOperand(&type3);
  auto bw_hidden_state2 = model->addOperand(&type4);
  auto aux_input2 = model->addOperand(&type5);
  auto fw_aux_weights2 = model->addOperand(&type5);
  auto bw_aux_weights2 = model->addOperand(&type5);
  auto activation2 = model->addOperand(&type7);
  auto time_major2 = model->addOperand(&type8);
  auto merge_outputs2 = model->addOperand(&type8);
  auto fw_output2 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t activation2_init[] = {1};
  model->setOperandValue(activation2, activation2_init, sizeof(int32_t) * 1);
  static bool8 time_major2_init[] = {true};
  model->setOperandValue(time_major2, time_major2_init, sizeof(bool8) * 1);
  static bool8 merge_outputs2_init[] = {true};
  model->setOperandValue(merge_outputs2, merge_outputs2_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input2, fw_weights2, fw_recurrent_weights2, fw_bias2, fw_hidden_state2, bw_weights2, bw_recurrent_weights2, bw_bias2, bw_hidden_state2, aux_input2, fw_aux_weights2, bw_aux_weights2, activation2, time_major2, merge_outputs2}, {fw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2, fw_weights2, fw_recurrent_weights2, fw_bias2, fw_hidden_state2, bw_weights2, bw_recurrent_weights2, bw_bias2, bw_hidden_state2, aux_input2, fw_aux_weights2, bw_aux_weights2},
    {fw_output2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type11(Type::TENSOR_FLOAT32, {16, 2, 32});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::TENSOR_FLOAT32, {16, 2, 8});
  // Phase 1, operands
  auto input2 = model->addOperand(&type9);
  auto fw_weights2 = model->addOperand(&type1);
  auto fw_recurrent_weights2 = model->addOperand(&type2);
  auto fw_bias2 = model->addOperand(&type3);
  auto fw_hidden_state2 = model->addOperand(&type4);
  auto bw_weights2 = model->addOperand(&type1);
  auto bw_recurrent_weights2 = model->addOperand(&type2);
  auto bw_bias2 = model->addOperand(&type3);
  auto bw_hidden_state2 = model->addOperand(&type4);
  auto aux_input2 = model->addOperand(&type5);
  auto fw_aux_weights2 = model->addOperand(&type5);
  auto bw_aux_weights2 = model->addOperand(&type5);
  auto activation2 = model->addOperand(&type7);
  auto time_major2 = model->addOperand(&type8);
  auto merge_outputs2 = model->addOperand(&type8);
  auto fw_output2 = model->addOperand(&type11);
  auto input2_tmp = model->addOperand(&type9);
  auto dummy126 = model->addOperand(&type15);
  auto param126 = model->addOperand(&type7);
  auto fw_weights2_tmp = model->addOperand(&type1);
  auto dummy127 = model->addOperand(&type15);
  auto param127 = model->addOperand(&type7);
  auto fw_recurrent_weights2_tmp = model->addOperand(&type2);
  auto dummy128 = model->addOperand(&type15);
  auto param128 = model->addOperand(&type7);
  auto fw_bias2_tmp = model->addOperand(&type3);
  auto dummy129 = model->addOperand(&type15);
  auto param129 = model->addOperand(&type7);
  auto fw_hidden_state2_tmp = model->addOperand(&type4);
  auto dummy130 = model->addOperand(&type15);
  auto param130 = model->addOperand(&type7);
  auto bw_weights2_tmp = model->addOperand(&type1);
  auto dummy131 = model->addOperand(&type15);
  auto param131 = model->addOperand(&type7);
  auto bw_recurrent_weights2_tmp = model->addOperand(&type2);
  auto dummy132 = model->addOperand(&type15);
  auto param132 = model->addOperand(&type7);
  auto bw_bias2_tmp = model->addOperand(&type3);
  auto dummy133 = model->addOperand(&type15);
  auto param133 = model->addOperand(&type7);
  auto bw_hidden_state2_tmp = model->addOperand(&type4);
  auto dummy134 = model->addOperand(&type15);
  auto param134 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation2_init[] = {1};
  model->setOperandValue(activation2, activation2_init, sizeof(int32_t) * 1);
  static bool8 time_major2_init[] = {true};
  model->setOperandValue(time_major2, time_major2_init, sizeof(bool8) * 1);
  static bool8 merge_outputs2_init[] = {true};
  model->setOperandValue(merge_outputs2, merge_outputs2_init, sizeof(bool8) * 1);
  static float dummy126_init[] = {0.0f};
  model->setOperandValue(dummy126, dummy126_init, sizeof(float) * 1);
  static int32_t param126_init[] = {0};
  model->setOperandValue(param126, param126_init, sizeof(int32_t) * 1);
  static float dummy127_init[] = {0.0f};
  model->setOperandValue(dummy127, dummy127_init, sizeof(float) * 1);
  static int32_t param127_init[] = {0};
  model->setOperandValue(param127, param127_init, sizeof(int32_t) * 1);
  static float dummy128_init[] = {0.0f};
  model->setOperandValue(dummy128, dummy128_init, sizeof(float) * 1);
  static int32_t param128_init[] = {0};
  model->setOperandValue(param128, param128_init, sizeof(int32_t) * 1);
  static float dummy129_init[] = {0.0f};
  model->setOperandValue(dummy129, dummy129_init, sizeof(float) * 1);
  static int32_t param129_init[] = {0};
  model->setOperandValue(param129, param129_init, sizeof(int32_t) * 1);
  static float dummy130_init[] = {0.0f};
  model->setOperandValue(dummy130, dummy130_init, sizeof(float) * 1);
  static int32_t param130_init[] = {0};
  model->setOperandValue(param130, param130_init, sizeof(int32_t) * 1);
  static float dummy131_init[] = {0.0f};
  model->setOperandValue(dummy131, dummy131_init, sizeof(float) * 1);
  static int32_t param131_init[] = {0};
  model->setOperandValue(param131, param131_init, sizeof(int32_t) * 1);
  static float dummy132_init[] = {0.0f};
  model->setOperandValue(dummy132, dummy132_init, sizeof(float) * 1);
  static int32_t param132_init[] = {0};
  model->setOperandValue(param132, param132_init, sizeof(int32_t) * 1);
  static float dummy133_init[] = {0.0f};
  model->setOperandValue(dummy133, dummy133_init, sizeof(float) * 1);
  static int32_t param133_init[] = {0};
  model->setOperandValue(param133, param133_init, sizeof(int32_t) * 1);
  static float dummy134_init[] = {0.0f};
  model->setOperandValue(dummy134, dummy134_init, sizeof(float) * 1);
  static int32_t param134_init[] = {0};
  model->setOperandValue(param134, param134_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy126, param126}, {input2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights2_tmp, dummy127, param127}, {fw_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights2_tmp, dummy128, param128}, {fw_recurrent_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias2_tmp, dummy129, param129}, {fw_bias2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state2_tmp, dummy130, param130}, {fw_hidden_state2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights2_tmp, dummy131, param131}, {bw_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights2_tmp, dummy132, param132}, {bw_recurrent_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias2_tmp, dummy133, param133}, {bw_bias2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state2_tmp, dummy134, param134}, {bw_hidden_state2});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input2, fw_weights2, fw_recurrent_weights2, fw_bias2, fw_hidden_state2, bw_weights2, bw_recurrent_weights2, bw_bias2, bw_hidden_state2, aux_input2, fw_aux_weights2, bw_aux_weights2, activation2, time_major2, merge_outputs2}, {fw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input2, fw_aux_weights2, bw_aux_weights2, input2_tmp, fw_weights2_tmp, fw_recurrent_weights2_tmp, fw_bias2_tmp, fw_hidden_state2_tmp, bw_weights2_tmp, bw_recurrent_weights2_tmp, bw_bias2_tmp, bw_hidden_state2_tmp},
    {fw_output2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::TENSOR_FLOAT32, {16, 2, 8});
  // Phase 1, operands
  auto input2 = model->addOperand(&type9);
  auto fw_weights2 = model->addOperand(&type1);
  auto fw_recurrent_weights2 = model->addOperand(&type2);
  auto fw_bias2 = model->addOperand(&type3);
  auto fw_hidden_state2 = model->addOperand(&type4);
  auto bw_weights2 = model->addOperand(&type1);
  auto bw_recurrent_weights2 = model->addOperand(&type2);
  auto bw_bias2 = model->addOperand(&type3);
  auto bw_hidden_state2 = model->addOperand(&type4);
  auto aux_input2 = model->addOperand(&type5);
  auto fw_aux_weights2 = model->addOperand(&type5);
  auto bw_aux_weights2 = model->addOperand(&type5);
  auto activation2 = model->addOperand(&type7);
  auto time_major2 = model->addOperand(&type8);
  auto merge_outputs2 = model->addOperand(&type8);
  auto fw_output2 = model->addOperand(&type14);
  auto input2_tmp = model->addOperand(&type9);
  auto dummy135 = model->addOperand(&type15);
  auto param135 = model->addOperand(&type7);
  auto fw_weights2_tmp = model->addOperand(&type1);
  auto dummy136 = model->addOperand(&type15);
  auto param136 = model->addOperand(&type7);
  auto fw_recurrent_weights2_tmp = model->addOperand(&type2);
  auto dummy137 = model->addOperand(&type15);
  auto param137 = model->addOperand(&type7);
  auto fw_bias2_tmp = model->addOperand(&type3);
  auto dummy138 = model->addOperand(&type15);
  auto param138 = model->addOperand(&type7);
  auto fw_hidden_state2_tmp = model->addOperand(&type4);
  auto dummy139 = model->addOperand(&type15);
  auto param139 = model->addOperand(&type7);
  auto bw_weights2_tmp = model->addOperand(&type1);
  auto dummy140 = model->addOperand(&type15);
  auto param140 = model->addOperand(&type7);
  auto bw_recurrent_weights2_tmp = model->addOperand(&type2);
  auto dummy141 = model->addOperand(&type15);
  auto param141 = model->addOperand(&type7);
  auto bw_bias2_tmp = model->addOperand(&type3);
  auto dummy142 = model->addOperand(&type15);
  auto param142 = model->addOperand(&type7);
  auto bw_hidden_state2_tmp = model->addOperand(&type4);
  auto dummy143 = model->addOperand(&type15);
  auto param143 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation2_init[] = {1};
  model->setOperandValue(activation2, activation2_init, sizeof(int32_t) * 1);
  static bool8 time_major2_init[] = {true};
  model->setOperandValue(time_major2, time_major2_init, sizeof(bool8) * 1);
  static bool8 merge_outputs2_init[] = {true};
  model->setOperandValue(merge_outputs2, merge_outputs2_init, sizeof(bool8) * 1);
  static float dummy135_init[] = {0.0f};
  model->setOperandValue(dummy135, dummy135_init, sizeof(float) * 1);
  static int32_t param135_init[] = {0};
  model->setOperandValue(param135, param135_init, sizeof(int32_t) * 1);
  static float dummy136_init[] = {0.0f};
  model->setOperandValue(dummy136, dummy136_init, sizeof(float) * 1);
  static int32_t param136_init[] = {0};
  model->setOperandValue(param136, param136_init, sizeof(int32_t) * 1);
  static float dummy137_init[] = {0.0f};
  model->setOperandValue(dummy137, dummy137_init, sizeof(float) * 1);
  static int32_t param137_init[] = {0};
  model->setOperandValue(param137, param137_init, sizeof(int32_t) * 1);
  static float dummy138_init[] = {0.0f};
  model->setOperandValue(dummy138, dummy138_init, sizeof(float) * 1);
  static int32_t param138_init[] = {0};
  model->setOperandValue(param138, param138_init, sizeof(int32_t) * 1);
  static float dummy139_init[] = {0.0f};
  model->setOperandValue(dummy139, dummy139_init, sizeof(float) * 1);
  static int32_t param139_init[] = {0};
  model->setOperandValue(param139, param139_init, sizeof(int32_t) * 1);
  static float dummy140_init[] = {0.0f};
  model->setOperandValue(dummy140, dummy140_init, sizeof(float) * 1);
  static int32_t param140_init[] = {0};
  model->setOperandValue(param140, param140_init, sizeof(int32_t) * 1);
  static float dummy141_init[] = {0.0f};
  model->setOperandValue(dummy141, dummy141_init, sizeof(float) * 1);
  static int32_t param141_init[] = {0};
  model->setOperandValue(param141, param141_init, sizeof(int32_t) * 1);
  static float dummy142_init[] = {0.0f};
  model->setOperandValue(dummy142, dummy142_init, sizeof(float) * 1);
  static int32_t param142_init[] = {0};
  model->setOperandValue(param142, param142_init, sizeof(int32_t) * 1);
  static float dummy143_init[] = {0.0f};
  model->setOperandValue(dummy143, dummy143_init, sizeof(float) * 1);
  static int32_t param143_init[] = {0};
  model->setOperandValue(param143, param143_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy135, param135}, {input2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights2_tmp, dummy136, param136}, {fw_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights2_tmp, dummy137, param137}, {fw_recurrent_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias2_tmp, dummy138, param138}, {fw_bias2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state2_tmp, dummy139, param139}, {fw_hidden_state2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights2_tmp, dummy140, param140}, {bw_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights2_tmp, dummy141, param141}, {bw_recurrent_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias2_tmp, dummy142, param142}, {bw_bias2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state2_tmp, dummy143, param143}, {bw_hidden_state2});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input2, fw_weights2, fw_recurrent_weights2, fw_bias2, fw_hidden_state2, bw_weights2, bw_recurrent_weights2, bw_bias2, bw_hidden_state2, aux_input2, fw_aux_weights2, bw_aux_weights2, activation2, time_major2, merge_outputs2}, {fw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input2, fw_aux_weights2, bw_aux_weights2, input2_tmp, fw_weights2_tmp, fw_recurrent_weights2_tmp, fw_bias2_tmp, fw_hidden_state2_tmp, bw_weights2_tmp, bw_recurrent_weights2_tmp, bw_bias2_tmp, bw_hidden_state2_tmp},
    {fw_output2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_3(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT16, {0});
  OperandType type17(Type::TENSOR_FLOAT16, {16});
  OperandType type18(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type20(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type21(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type31(Type::TENSOR_FLOAT16, {16, 2, 8});
  OperandType type33(Type::TENSOR_FLOAT16, {16, 2, 32});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input2 = model->addOperand(&type31);
  auto fw_weights2 = model->addOperand(&type21);
  auto fw_recurrent_weights2 = model->addOperand(&type20);
  auto fw_bias2 = model->addOperand(&type17);
  auto fw_hidden_state2 = model->addOperand(&type18);
  auto bw_weights2 = model->addOperand(&type21);
  auto bw_recurrent_weights2 = model->addOperand(&type20);
  auto bw_bias2 = model->addOperand(&type17);
  auto bw_hidden_state2 = model->addOperand(&type18);
  auto aux_input2 = model->addOperand(&type16);
  auto fw_aux_weights2 = model->addOperand(&type16);
  auto bw_aux_weights2 = model->addOperand(&type16);
  auto activation2 = model->addOperand(&type7);
  auto time_major2 = model->addOperand(&type8);
  auto merge_outputs2 = model->addOperand(&type8);
  auto fw_output2 = model->addOperand(&type33);
  // Phase 2, operations
  static int32_t activation2_init[] = {1};
  model->setOperandValue(activation2, activation2_init, sizeof(int32_t) * 1);
  static bool8 time_major2_init[] = {true};
  model->setOperandValue(time_major2, time_major2_init, sizeof(bool8) * 1);
  static bool8 merge_outputs2_init[] = {true};
  model->setOperandValue(merge_outputs2, merge_outputs2_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input2, fw_weights2, fw_recurrent_weights2, fw_bias2, fw_hidden_state2, bw_weights2, bw_recurrent_weights2, bw_bias2, bw_hidden_state2, aux_input2, fw_aux_weights2, bw_aux_weights2, activation2, time_major2, merge_outputs2}, {fw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2, fw_weights2, fw_recurrent_weights2, fw_bias2, fw_hidden_state2, bw_weights2, bw_recurrent_weights2, bw_bias2, bw_hidden_state2, aux_input2, fw_aux_weights2, bw_aux_weights2},
    {fw_output2});
  assert(model->isValid());
}

bool is_ignored_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_dynamic_output_shape_3(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT16, {0});
  OperandType type17(Type::TENSOR_FLOAT16, {16});
  OperandType type18(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type20(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type21(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type31(Type::TENSOR_FLOAT16, {16, 2, 8});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input2 = model->addOperand(&type31);
  auto fw_weights2 = model->addOperand(&type21);
  auto fw_recurrent_weights2 = model->addOperand(&type20);
  auto fw_bias2 = model->addOperand(&type17);
  auto fw_hidden_state2 = model->addOperand(&type18);
  auto bw_weights2 = model->addOperand(&type21);
  auto bw_recurrent_weights2 = model->addOperand(&type20);
  auto bw_bias2 = model->addOperand(&type17);
  auto bw_hidden_state2 = model->addOperand(&type18);
  auto aux_input2 = model->addOperand(&type16);
  auto fw_aux_weights2 = model->addOperand(&type16);
  auto bw_aux_weights2 = model->addOperand(&type16);
  auto activation2 = model->addOperand(&type7);
  auto time_major2 = model->addOperand(&type8);
  auto merge_outputs2 = model->addOperand(&type8);
  auto fw_output2 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t activation2_init[] = {1};
  model->setOperandValue(activation2, activation2_init, sizeof(int32_t) * 1);
  static bool8 time_major2_init[] = {true};
  model->setOperandValue(time_major2, time_major2_init, sizeof(bool8) * 1);
  static bool8 merge_outputs2_init[] = {true};
  model->setOperandValue(merge_outputs2, merge_outputs2_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input2, fw_weights2, fw_recurrent_weights2, fw_bias2, fw_hidden_state2, bw_weights2, bw_recurrent_weights2, bw_bias2, bw_hidden_state2, aux_input2, fw_aux_weights2, bw_aux_weights2, activation2, time_major2, merge_outputs2}, {fw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2, fw_weights2, fw_recurrent_weights2, fw_bias2, fw_hidden_state2, bw_weights2, bw_recurrent_weights2, bw_bias2, bw_hidden_state2, aux_input2, fw_aux_weights2, bw_aux_weights2},
    {fw_output2});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT16, {0});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type27(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type28(Type::TENSOR_FLOAT16, {16});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type32(Type::TENSOR_FLOAT16, {16, 2, 8});
  OperandType type33(Type::TENSOR_FLOAT16, {16, 2, 32});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input2 = model->addOperand(&type32);
  auto fw_weights2 = model->addOperand(&type26);
  auto fw_recurrent_weights2 = model->addOperand(&type27);
  auto fw_bias2 = model->addOperand(&type28);
  auto fw_hidden_state2 = model->addOperand(&type29);
  auto bw_weights2 = model->addOperand(&type26);
  auto bw_recurrent_weights2 = model->addOperand(&type27);
  auto bw_bias2 = model->addOperand(&type28);
  auto bw_hidden_state2 = model->addOperand(&type29);
  auto aux_input2 = model->addOperand(&type16);
  auto fw_aux_weights2 = model->addOperand(&type16);
  auto bw_aux_weights2 = model->addOperand(&type16);
  auto activation2 = model->addOperand(&type7);
  auto time_major2 = model->addOperand(&type8);
  auto merge_outputs2 = model->addOperand(&type8);
  auto fw_output2 = model->addOperand(&type33);
  auto input2_tmp = model->addOperand(&type32);
  auto dummy144 = model->addOperand(&type25);
  auto param144 = model->addOperand(&type7);
  auto fw_weights2_tmp = model->addOperand(&type26);
  auto dummy145 = model->addOperand(&type25);
  auto param145 = model->addOperand(&type7);
  auto fw_recurrent_weights2_tmp = model->addOperand(&type27);
  auto dummy146 = model->addOperand(&type25);
  auto param146 = model->addOperand(&type7);
  auto fw_bias2_tmp = model->addOperand(&type28);
  auto dummy147 = model->addOperand(&type25);
  auto param147 = model->addOperand(&type7);
  auto fw_hidden_state2_tmp = model->addOperand(&type29);
  auto dummy148 = model->addOperand(&type25);
  auto param148 = model->addOperand(&type7);
  auto bw_weights2_tmp = model->addOperand(&type26);
  auto dummy149 = model->addOperand(&type25);
  auto param149 = model->addOperand(&type7);
  auto bw_recurrent_weights2_tmp = model->addOperand(&type27);
  auto dummy150 = model->addOperand(&type25);
  auto param150 = model->addOperand(&type7);
  auto bw_bias2_tmp = model->addOperand(&type28);
  auto dummy151 = model->addOperand(&type25);
  auto param151 = model->addOperand(&type7);
  auto bw_hidden_state2_tmp = model->addOperand(&type29);
  auto dummy152 = model->addOperand(&type25);
  auto param152 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation2_init[] = {1};
  model->setOperandValue(activation2, activation2_init, sizeof(int32_t) * 1);
  static bool8 time_major2_init[] = {true};
  model->setOperandValue(time_major2, time_major2_init, sizeof(bool8) * 1);
  static bool8 merge_outputs2_init[] = {true};
  model->setOperandValue(merge_outputs2, merge_outputs2_init, sizeof(bool8) * 1);
  static _Float16 dummy144_init[] = {0.0f};
  model->setOperandValue(dummy144, dummy144_init, sizeof(_Float16) * 1);
  static int32_t param144_init[] = {0};
  model->setOperandValue(param144, param144_init, sizeof(int32_t) * 1);
  static _Float16 dummy145_init[] = {0.0f};
  model->setOperandValue(dummy145, dummy145_init, sizeof(_Float16) * 1);
  static int32_t param145_init[] = {0};
  model->setOperandValue(param145, param145_init, sizeof(int32_t) * 1);
  static _Float16 dummy146_init[] = {0.0f};
  model->setOperandValue(dummy146, dummy146_init, sizeof(_Float16) * 1);
  static int32_t param146_init[] = {0};
  model->setOperandValue(param146, param146_init, sizeof(int32_t) * 1);
  static _Float16 dummy147_init[] = {0.0f};
  model->setOperandValue(dummy147, dummy147_init, sizeof(_Float16) * 1);
  static int32_t param147_init[] = {0};
  model->setOperandValue(param147, param147_init, sizeof(int32_t) * 1);
  static _Float16 dummy148_init[] = {0.0f};
  model->setOperandValue(dummy148, dummy148_init, sizeof(_Float16) * 1);
  static int32_t param148_init[] = {0};
  model->setOperandValue(param148, param148_init, sizeof(int32_t) * 1);
  static _Float16 dummy149_init[] = {0.0f};
  model->setOperandValue(dummy149, dummy149_init, sizeof(_Float16) * 1);
  static int32_t param149_init[] = {0};
  model->setOperandValue(param149, param149_init, sizeof(int32_t) * 1);
  static _Float16 dummy150_init[] = {0.0f};
  model->setOperandValue(dummy150, dummy150_init, sizeof(_Float16) * 1);
  static int32_t param150_init[] = {0};
  model->setOperandValue(param150, param150_init, sizeof(int32_t) * 1);
  static _Float16 dummy151_init[] = {0.0f};
  model->setOperandValue(dummy151, dummy151_init, sizeof(_Float16) * 1);
  static int32_t param151_init[] = {0};
  model->setOperandValue(param151, param151_init, sizeof(int32_t) * 1);
  static _Float16 dummy152_init[] = {0.0f};
  model->setOperandValue(dummy152, dummy152_init, sizeof(_Float16) * 1);
  static int32_t param152_init[] = {0};
  model->setOperandValue(param152, param152_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy144, param144}, {input2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights2_tmp, dummy145, param145}, {fw_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights2_tmp, dummy146, param146}, {fw_recurrent_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias2_tmp, dummy147, param147}, {fw_bias2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state2_tmp, dummy148, param148}, {fw_hidden_state2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights2_tmp, dummy149, param149}, {bw_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights2_tmp, dummy150, param150}, {bw_recurrent_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias2_tmp, dummy151, param151}, {bw_bias2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state2_tmp, dummy152, param152}, {bw_hidden_state2});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input2, fw_weights2, fw_recurrent_weights2, fw_bias2, fw_hidden_state2, bw_weights2, bw_recurrent_weights2, bw_bias2, bw_hidden_state2, aux_input2, fw_aux_weights2, bw_aux_weights2, activation2, time_major2, merge_outputs2}, {fw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input2, fw_aux_weights2, bw_aux_weights2, input2_tmp, fw_weights2_tmp, fw_recurrent_weights2_tmp, fw_bias2_tmp, fw_hidden_state2_tmp, bw_weights2_tmp, bw_recurrent_weights2_tmp, bw_bias2_tmp, bw_hidden_state2_tmp},
    {fw_output2});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT16, {0});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type27(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type28(Type::TENSOR_FLOAT16, {16});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type32(Type::TENSOR_FLOAT16, {16, 2, 8});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input2 = model->addOperand(&type32);
  auto fw_weights2 = model->addOperand(&type26);
  auto fw_recurrent_weights2 = model->addOperand(&type27);
  auto fw_bias2 = model->addOperand(&type28);
  auto fw_hidden_state2 = model->addOperand(&type29);
  auto bw_weights2 = model->addOperand(&type26);
  auto bw_recurrent_weights2 = model->addOperand(&type27);
  auto bw_bias2 = model->addOperand(&type28);
  auto bw_hidden_state2 = model->addOperand(&type29);
  auto aux_input2 = model->addOperand(&type16);
  auto fw_aux_weights2 = model->addOperand(&type16);
  auto bw_aux_weights2 = model->addOperand(&type16);
  auto activation2 = model->addOperand(&type7);
  auto time_major2 = model->addOperand(&type8);
  auto merge_outputs2 = model->addOperand(&type8);
  auto fw_output2 = model->addOperand(&type23);
  auto input2_tmp = model->addOperand(&type32);
  auto dummy153 = model->addOperand(&type25);
  auto param153 = model->addOperand(&type7);
  auto fw_weights2_tmp = model->addOperand(&type26);
  auto dummy154 = model->addOperand(&type25);
  auto param154 = model->addOperand(&type7);
  auto fw_recurrent_weights2_tmp = model->addOperand(&type27);
  auto dummy155 = model->addOperand(&type25);
  auto param155 = model->addOperand(&type7);
  auto fw_bias2_tmp = model->addOperand(&type28);
  auto dummy156 = model->addOperand(&type25);
  auto param156 = model->addOperand(&type7);
  auto fw_hidden_state2_tmp = model->addOperand(&type29);
  auto dummy157 = model->addOperand(&type25);
  auto param157 = model->addOperand(&type7);
  auto bw_weights2_tmp = model->addOperand(&type26);
  auto dummy158 = model->addOperand(&type25);
  auto param158 = model->addOperand(&type7);
  auto bw_recurrent_weights2_tmp = model->addOperand(&type27);
  auto dummy159 = model->addOperand(&type25);
  auto param159 = model->addOperand(&type7);
  auto bw_bias2_tmp = model->addOperand(&type28);
  auto dummy160 = model->addOperand(&type25);
  auto param160 = model->addOperand(&type7);
  auto bw_hidden_state2_tmp = model->addOperand(&type29);
  auto dummy161 = model->addOperand(&type25);
  auto param161 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation2_init[] = {1};
  model->setOperandValue(activation2, activation2_init, sizeof(int32_t) * 1);
  static bool8 time_major2_init[] = {true};
  model->setOperandValue(time_major2, time_major2_init, sizeof(bool8) * 1);
  static bool8 merge_outputs2_init[] = {true};
  model->setOperandValue(merge_outputs2, merge_outputs2_init, sizeof(bool8) * 1);
  static _Float16 dummy153_init[] = {0.0f};
  model->setOperandValue(dummy153, dummy153_init, sizeof(_Float16) * 1);
  static int32_t param153_init[] = {0};
  model->setOperandValue(param153, param153_init, sizeof(int32_t) * 1);
  static _Float16 dummy154_init[] = {0.0f};
  model->setOperandValue(dummy154, dummy154_init, sizeof(_Float16) * 1);
  static int32_t param154_init[] = {0};
  model->setOperandValue(param154, param154_init, sizeof(int32_t) * 1);
  static _Float16 dummy155_init[] = {0.0f};
  model->setOperandValue(dummy155, dummy155_init, sizeof(_Float16) * 1);
  static int32_t param155_init[] = {0};
  model->setOperandValue(param155, param155_init, sizeof(int32_t) * 1);
  static _Float16 dummy156_init[] = {0.0f};
  model->setOperandValue(dummy156, dummy156_init, sizeof(_Float16) * 1);
  static int32_t param156_init[] = {0};
  model->setOperandValue(param156, param156_init, sizeof(int32_t) * 1);
  static _Float16 dummy157_init[] = {0.0f};
  model->setOperandValue(dummy157, dummy157_init, sizeof(_Float16) * 1);
  static int32_t param157_init[] = {0};
  model->setOperandValue(param157, param157_init, sizeof(int32_t) * 1);
  static _Float16 dummy158_init[] = {0.0f};
  model->setOperandValue(dummy158, dummy158_init, sizeof(_Float16) * 1);
  static int32_t param158_init[] = {0};
  model->setOperandValue(param158, param158_init, sizeof(int32_t) * 1);
  static _Float16 dummy159_init[] = {0.0f};
  model->setOperandValue(dummy159, dummy159_init, sizeof(_Float16) * 1);
  static int32_t param159_init[] = {0};
  model->setOperandValue(param159, param159_init, sizeof(int32_t) * 1);
  static _Float16 dummy160_init[] = {0.0f};
  model->setOperandValue(dummy160, dummy160_init, sizeof(_Float16) * 1);
  static int32_t param160_init[] = {0};
  model->setOperandValue(param160, param160_init, sizeof(int32_t) * 1);
  static _Float16 dummy161_init[] = {0.0f};
  model->setOperandValue(dummy161, dummy161_init, sizeof(_Float16) * 1);
  static int32_t param161_init[] = {0};
  model->setOperandValue(param161, param161_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy153, param153}, {input2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights2_tmp, dummy154, param154}, {fw_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights2_tmp, dummy155, param155}, {fw_recurrent_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias2_tmp, dummy156, param156}, {fw_bias2});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state2_tmp, dummy157, param157}, {fw_hidden_state2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights2_tmp, dummy158, param158}, {bw_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights2_tmp, dummy159, param159}, {bw_recurrent_weights2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias2_tmp, dummy160, param160}, {bw_bias2});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state2_tmp, dummy161, param161}, {bw_hidden_state2});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input2, fw_weights2, fw_recurrent_weights2, fw_bias2, fw_hidden_state2, bw_weights2, bw_recurrent_weights2, bw_bias2, bw_hidden_state2, aux_input2, fw_aux_weights2, bw_aux_weights2, activation2, time_major2, merge_outputs2}, {fw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input2, fw_aux_weights2, bw_aux_weights2, input2_tmp, fw_weights2_tmp, fw_recurrent_weights2_tmp, fw_bias2_tmp, fw_hidden_state2_tmp, bw_weights2_tmp, bw_recurrent_weights2_tmp, bw_bias2_tmp, bw_hidden_state2_tmp},
    {fw_output2});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 16, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input3 = model->addOperand(&type0);
  auto fw_weights3 = model->addOperand(&type1);
  auto fw_recurrent_weights3 = model->addOperand(&type2);
  auto fw_bias3 = model->addOperand(&type3);
  auto fw_hidden_state3 = model->addOperand(&type4);
  auto bw_weights3 = model->addOperand(&type1);
  auto bw_recurrent_weights3 = model->addOperand(&type2);
  auto bw_bias3 = model->addOperand(&type3);
  auto bw_hidden_state3 = model->addOperand(&type4);
  auto aux_input3 = model->addOperand(&type5);
  auto fw_aux_weights3 = model->addOperand(&type5);
  auto bw_aux_weights3 = model->addOperand(&type5);
  auto activation3 = model->addOperand(&type7);
  auto time_major3 = model->addOperand(&type8);
  auto merge_outputs3 = model->addOperand(&type8);
  auto fw_output3 = model->addOperand(&type6);
  auto bw_output2 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation3_init[] = {1};
  model->setOperandValue(activation3, activation3_init, sizeof(int32_t) * 1);
  static bool8 time_major3_init[] = {false};
  model->setOperandValue(time_major3, time_major3_init, sizeof(bool8) * 1);
  static bool8 merge_outputs3_init[] = {false};
  model->setOperandValue(merge_outputs3, merge_outputs3_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input3, fw_weights3, fw_recurrent_weights3, fw_bias3, fw_hidden_state3, bw_weights3, bw_recurrent_weights3, bw_bias3, bw_hidden_state3, aux_input3, fw_aux_weights3, bw_aux_weights3, activation3, time_major3, merge_outputs3}, {fw_output3, bw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3, fw_weights3, fw_recurrent_weights3, fw_bias3, fw_hidden_state3, bw_weights3, bw_recurrent_weights3, bw_bias3, bw_hidden_state3, aux_input3, fw_aux_weights3, bw_aux_weights3},
    {fw_output3, bw_output2});
  assert(model->isValid());
}

bool is_ignored_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input3 = model->addOperand(&type0);
  auto fw_weights3 = model->addOperand(&type1);
  auto fw_recurrent_weights3 = model->addOperand(&type2);
  auto fw_bias3 = model->addOperand(&type3);
  auto fw_hidden_state3 = model->addOperand(&type4);
  auto bw_weights3 = model->addOperand(&type1);
  auto bw_recurrent_weights3 = model->addOperand(&type2);
  auto bw_bias3 = model->addOperand(&type3);
  auto bw_hidden_state3 = model->addOperand(&type4);
  auto aux_input3 = model->addOperand(&type5);
  auto fw_aux_weights3 = model->addOperand(&type5);
  auto bw_aux_weights3 = model->addOperand(&type5);
  auto activation3 = model->addOperand(&type7);
  auto time_major3 = model->addOperand(&type8);
  auto merge_outputs3 = model->addOperand(&type8);
  auto fw_output3 = model->addOperand(&type14);
  auto bw_output2 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t activation3_init[] = {1};
  model->setOperandValue(activation3, activation3_init, sizeof(int32_t) * 1);
  static bool8 time_major3_init[] = {false};
  model->setOperandValue(time_major3, time_major3_init, sizeof(bool8) * 1);
  static bool8 merge_outputs3_init[] = {false};
  model->setOperandValue(merge_outputs3, merge_outputs3_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input3, fw_weights3, fw_recurrent_weights3, fw_bias3, fw_hidden_state3, bw_weights3, bw_recurrent_weights3, bw_bias3, bw_hidden_state3, aux_input3, fw_aux_weights3, bw_aux_weights3, activation3, time_major3, merge_outputs3}, {fw_output3, bw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3, fw_weights3, fw_recurrent_weights3, fw_bias3, fw_hidden_state3, bw_weights3, bw_recurrent_weights3, bw_bias3, bw_hidden_state3, aux_input3, fw_aux_weights3, bw_aux_weights3},
    {fw_output3, bw_output2});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 16, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input3 = model->addOperand(&type0);
  auto fw_weights3 = model->addOperand(&type1);
  auto fw_recurrent_weights3 = model->addOperand(&type2);
  auto fw_bias3 = model->addOperand(&type3);
  auto fw_hidden_state3 = model->addOperand(&type4);
  auto bw_weights3 = model->addOperand(&type1);
  auto bw_recurrent_weights3 = model->addOperand(&type2);
  auto bw_bias3 = model->addOperand(&type3);
  auto bw_hidden_state3 = model->addOperand(&type4);
  auto aux_input3 = model->addOperand(&type5);
  auto fw_aux_weights3 = model->addOperand(&type5);
  auto bw_aux_weights3 = model->addOperand(&type5);
  auto activation3 = model->addOperand(&type7);
  auto time_major3 = model->addOperand(&type8);
  auto merge_outputs3 = model->addOperand(&type8);
  auto fw_output3 = model->addOperand(&type6);
  auto bw_output2 = model->addOperand(&type6);
  auto input3_tmp = model->addOperand(&type0);
  auto dummy162 = model->addOperand(&type15);
  auto param162 = model->addOperand(&type7);
  auto fw_weights3_tmp = model->addOperand(&type1);
  auto dummy163 = model->addOperand(&type15);
  auto param163 = model->addOperand(&type7);
  auto fw_recurrent_weights3_tmp = model->addOperand(&type2);
  auto dummy164 = model->addOperand(&type15);
  auto param164 = model->addOperand(&type7);
  auto fw_bias3_tmp = model->addOperand(&type3);
  auto dummy165 = model->addOperand(&type15);
  auto param165 = model->addOperand(&type7);
  auto fw_hidden_state3_tmp = model->addOperand(&type4);
  auto dummy166 = model->addOperand(&type15);
  auto param166 = model->addOperand(&type7);
  auto bw_weights3_tmp = model->addOperand(&type1);
  auto dummy167 = model->addOperand(&type15);
  auto param167 = model->addOperand(&type7);
  auto bw_recurrent_weights3_tmp = model->addOperand(&type2);
  auto dummy168 = model->addOperand(&type15);
  auto param168 = model->addOperand(&type7);
  auto bw_bias3_tmp = model->addOperand(&type3);
  auto dummy169 = model->addOperand(&type15);
  auto param169 = model->addOperand(&type7);
  auto bw_hidden_state3_tmp = model->addOperand(&type4);
  auto dummy170 = model->addOperand(&type15);
  auto param170 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation3_init[] = {1};
  model->setOperandValue(activation3, activation3_init, sizeof(int32_t) * 1);
  static bool8 time_major3_init[] = {false};
  model->setOperandValue(time_major3, time_major3_init, sizeof(bool8) * 1);
  static bool8 merge_outputs3_init[] = {false};
  model->setOperandValue(merge_outputs3, merge_outputs3_init, sizeof(bool8) * 1);
  static float dummy162_init[] = {0.0f};
  model->setOperandValue(dummy162, dummy162_init, sizeof(float) * 1);
  static int32_t param162_init[] = {0};
  model->setOperandValue(param162, param162_init, sizeof(int32_t) * 1);
  static float dummy163_init[] = {0.0f};
  model->setOperandValue(dummy163, dummy163_init, sizeof(float) * 1);
  static int32_t param163_init[] = {0};
  model->setOperandValue(param163, param163_init, sizeof(int32_t) * 1);
  static float dummy164_init[] = {0.0f};
  model->setOperandValue(dummy164, dummy164_init, sizeof(float) * 1);
  static int32_t param164_init[] = {0};
  model->setOperandValue(param164, param164_init, sizeof(int32_t) * 1);
  static float dummy165_init[] = {0.0f};
  model->setOperandValue(dummy165, dummy165_init, sizeof(float) * 1);
  static int32_t param165_init[] = {0};
  model->setOperandValue(param165, param165_init, sizeof(int32_t) * 1);
  static float dummy166_init[] = {0.0f};
  model->setOperandValue(dummy166, dummy166_init, sizeof(float) * 1);
  static int32_t param166_init[] = {0};
  model->setOperandValue(param166, param166_init, sizeof(int32_t) * 1);
  static float dummy167_init[] = {0.0f};
  model->setOperandValue(dummy167, dummy167_init, sizeof(float) * 1);
  static int32_t param167_init[] = {0};
  model->setOperandValue(param167, param167_init, sizeof(int32_t) * 1);
  static float dummy168_init[] = {0.0f};
  model->setOperandValue(dummy168, dummy168_init, sizeof(float) * 1);
  static int32_t param168_init[] = {0};
  model->setOperandValue(param168, param168_init, sizeof(int32_t) * 1);
  static float dummy169_init[] = {0.0f};
  model->setOperandValue(dummy169, dummy169_init, sizeof(float) * 1);
  static int32_t param169_init[] = {0};
  model->setOperandValue(param169, param169_init, sizeof(int32_t) * 1);
  static float dummy170_init[] = {0.0f};
  model->setOperandValue(dummy170, dummy170_init, sizeof(float) * 1);
  static int32_t param170_init[] = {0};
  model->setOperandValue(param170, param170_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy162, param162}, {input3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights3_tmp, dummy163, param163}, {fw_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights3_tmp, dummy164, param164}, {fw_recurrent_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias3_tmp, dummy165, param165}, {fw_bias3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state3_tmp, dummy166, param166}, {fw_hidden_state3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights3_tmp, dummy167, param167}, {bw_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights3_tmp, dummy168, param168}, {bw_recurrent_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias3_tmp, dummy169, param169}, {bw_bias3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state3_tmp, dummy170, param170}, {bw_hidden_state3});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input3, fw_weights3, fw_recurrent_weights3, fw_bias3, fw_hidden_state3, bw_weights3, bw_recurrent_weights3, bw_bias3, bw_hidden_state3, aux_input3, fw_aux_weights3, bw_aux_weights3, activation3, time_major3, merge_outputs3}, {fw_output3, bw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input3, fw_aux_weights3, bw_aux_weights3, input3_tmp, fw_weights3_tmp, fw_recurrent_weights3_tmp, fw_bias3_tmp, fw_hidden_state3_tmp, bw_weights3_tmp, bw_recurrent_weights3_tmp, bw_bias3_tmp, bw_hidden_state3_tmp},
    {fw_output3, bw_output2});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input3 = model->addOperand(&type0);
  auto fw_weights3 = model->addOperand(&type1);
  auto fw_recurrent_weights3 = model->addOperand(&type2);
  auto fw_bias3 = model->addOperand(&type3);
  auto fw_hidden_state3 = model->addOperand(&type4);
  auto bw_weights3 = model->addOperand(&type1);
  auto bw_recurrent_weights3 = model->addOperand(&type2);
  auto bw_bias3 = model->addOperand(&type3);
  auto bw_hidden_state3 = model->addOperand(&type4);
  auto aux_input3 = model->addOperand(&type5);
  auto fw_aux_weights3 = model->addOperand(&type5);
  auto bw_aux_weights3 = model->addOperand(&type5);
  auto activation3 = model->addOperand(&type7);
  auto time_major3 = model->addOperand(&type8);
  auto merge_outputs3 = model->addOperand(&type8);
  auto fw_output3 = model->addOperand(&type14);
  auto bw_output2 = model->addOperand(&type14);
  auto input3_tmp = model->addOperand(&type0);
  auto dummy171 = model->addOperand(&type15);
  auto param171 = model->addOperand(&type7);
  auto fw_weights3_tmp = model->addOperand(&type1);
  auto dummy172 = model->addOperand(&type15);
  auto param172 = model->addOperand(&type7);
  auto fw_recurrent_weights3_tmp = model->addOperand(&type2);
  auto dummy173 = model->addOperand(&type15);
  auto param173 = model->addOperand(&type7);
  auto fw_bias3_tmp = model->addOperand(&type3);
  auto dummy174 = model->addOperand(&type15);
  auto param174 = model->addOperand(&type7);
  auto fw_hidden_state3_tmp = model->addOperand(&type4);
  auto dummy175 = model->addOperand(&type15);
  auto param175 = model->addOperand(&type7);
  auto bw_weights3_tmp = model->addOperand(&type1);
  auto dummy176 = model->addOperand(&type15);
  auto param176 = model->addOperand(&type7);
  auto bw_recurrent_weights3_tmp = model->addOperand(&type2);
  auto dummy177 = model->addOperand(&type15);
  auto param177 = model->addOperand(&type7);
  auto bw_bias3_tmp = model->addOperand(&type3);
  auto dummy178 = model->addOperand(&type15);
  auto param178 = model->addOperand(&type7);
  auto bw_hidden_state3_tmp = model->addOperand(&type4);
  auto dummy179 = model->addOperand(&type15);
  auto param179 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation3_init[] = {1};
  model->setOperandValue(activation3, activation3_init, sizeof(int32_t) * 1);
  static bool8 time_major3_init[] = {false};
  model->setOperandValue(time_major3, time_major3_init, sizeof(bool8) * 1);
  static bool8 merge_outputs3_init[] = {false};
  model->setOperandValue(merge_outputs3, merge_outputs3_init, sizeof(bool8) * 1);
  static float dummy171_init[] = {0.0f};
  model->setOperandValue(dummy171, dummy171_init, sizeof(float) * 1);
  static int32_t param171_init[] = {0};
  model->setOperandValue(param171, param171_init, sizeof(int32_t) * 1);
  static float dummy172_init[] = {0.0f};
  model->setOperandValue(dummy172, dummy172_init, sizeof(float) * 1);
  static int32_t param172_init[] = {0};
  model->setOperandValue(param172, param172_init, sizeof(int32_t) * 1);
  static float dummy173_init[] = {0.0f};
  model->setOperandValue(dummy173, dummy173_init, sizeof(float) * 1);
  static int32_t param173_init[] = {0};
  model->setOperandValue(param173, param173_init, sizeof(int32_t) * 1);
  static float dummy174_init[] = {0.0f};
  model->setOperandValue(dummy174, dummy174_init, sizeof(float) * 1);
  static int32_t param174_init[] = {0};
  model->setOperandValue(param174, param174_init, sizeof(int32_t) * 1);
  static float dummy175_init[] = {0.0f};
  model->setOperandValue(dummy175, dummy175_init, sizeof(float) * 1);
  static int32_t param175_init[] = {0};
  model->setOperandValue(param175, param175_init, sizeof(int32_t) * 1);
  static float dummy176_init[] = {0.0f};
  model->setOperandValue(dummy176, dummy176_init, sizeof(float) * 1);
  static int32_t param176_init[] = {0};
  model->setOperandValue(param176, param176_init, sizeof(int32_t) * 1);
  static float dummy177_init[] = {0.0f};
  model->setOperandValue(dummy177, dummy177_init, sizeof(float) * 1);
  static int32_t param177_init[] = {0};
  model->setOperandValue(param177, param177_init, sizeof(int32_t) * 1);
  static float dummy178_init[] = {0.0f};
  model->setOperandValue(dummy178, dummy178_init, sizeof(float) * 1);
  static int32_t param178_init[] = {0};
  model->setOperandValue(param178, param178_init, sizeof(int32_t) * 1);
  static float dummy179_init[] = {0.0f};
  model->setOperandValue(dummy179, dummy179_init, sizeof(float) * 1);
  static int32_t param179_init[] = {0};
  model->setOperandValue(param179, param179_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy171, param171}, {input3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights3_tmp, dummy172, param172}, {fw_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights3_tmp, dummy173, param173}, {fw_recurrent_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias3_tmp, dummy174, param174}, {fw_bias3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state3_tmp, dummy175, param175}, {fw_hidden_state3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights3_tmp, dummy176, param176}, {bw_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights3_tmp, dummy177, param177}, {bw_recurrent_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias3_tmp, dummy178, param178}, {bw_bias3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state3_tmp, dummy179, param179}, {bw_hidden_state3});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input3, fw_weights3, fw_recurrent_weights3, fw_bias3, fw_hidden_state3, bw_weights3, bw_recurrent_weights3, bw_bias3, bw_hidden_state3, aux_input3, fw_aux_weights3, bw_aux_weights3, activation3, time_major3, merge_outputs3}, {fw_output3, bw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input3, fw_aux_weights3, bw_aux_weights3, input3_tmp, fw_weights3_tmp, fw_recurrent_weights3_tmp, fw_bias3_tmp, fw_hidden_state3_tmp, bw_weights3_tmp, bw_recurrent_weights3_tmp, bw_bias3_tmp, bw_hidden_state3_tmp},
    {fw_output3, bw_output2});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 16, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input3 = model->addOperand(&type0);
  auto fw_weights3 = model->addOperand(&type1);
  auto fw_recurrent_weights3 = model->addOperand(&type2);
  auto fw_bias3 = model->addOperand(&type3);
  auto fw_hidden_state3 = model->addOperand(&type4);
  auto bw_weights3 = model->addOperand(&type1);
  auto bw_recurrent_weights3 = model->addOperand(&type2);
  auto bw_bias3 = model->addOperand(&type3);
  auto bw_hidden_state3 = model->addOperand(&type4);
  auto aux_input3 = model->addOperand(&type5);
  auto fw_aux_weights3 = model->addOperand(&type5);
  auto bw_aux_weights3 = model->addOperand(&type5);
  auto activation3 = model->addOperand(&type7);
  auto time_major3 = model->addOperand(&type8);
  auto merge_outputs3 = model->addOperand(&type8);
  auto fw_output3 = model->addOperand(&type6);
  auto bw_output2 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation3_init[] = {1};
  model->setOperandValue(activation3, activation3_init, sizeof(int32_t) * 1);
  static bool8 time_major3_init[] = {false};
  model->setOperandValue(time_major3, time_major3_init, sizeof(bool8) * 1);
  static bool8 merge_outputs3_init[] = {false};
  model->setOperandValue(merge_outputs3, merge_outputs3_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input3, fw_weights3, fw_recurrent_weights3, fw_bias3, fw_hidden_state3, bw_weights3, bw_recurrent_weights3, bw_bias3, bw_hidden_state3, aux_input3, fw_aux_weights3, bw_aux_weights3, activation3, time_major3, merge_outputs3}, {fw_output3, bw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3, fw_weights3, fw_recurrent_weights3, fw_bias3, fw_hidden_state3, bw_weights3, bw_recurrent_weights3, bw_bias3, bw_hidden_state3, aux_input3, fw_aux_weights3, bw_aux_weights3},
    {fw_output3, bw_output2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input3 = model->addOperand(&type0);
  auto fw_weights3 = model->addOperand(&type1);
  auto fw_recurrent_weights3 = model->addOperand(&type2);
  auto fw_bias3 = model->addOperand(&type3);
  auto fw_hidden_state3 = model->addOperand(&type4);
  auto bw_weights3 = model->addOperand(&type1);
  auto bw_recurrent_weights3 = model->addOperand(&type2);
  auto bw_bias3 = model->addOperand(&type3);
  auto bw_hidden_state3 = model->addOperand(&type4);
  auto aux_input3 = model->addOperand(&type5);
  auto fw_aux_weights3 = model->addOperand(&type5);
  auto bw_aux_weights3 = model->addOperand(&type5);
  auto activation3 = model->addOperand(&type7);
  auto time_major3 = model->addOperand(&type8);
  auto merge_outputs3 = model->addOperand(&type8);
  auto fw_output3 = model->addOperand(&type14);
  auto bw_output2 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t activation3_init[] = {1};
  model->setOperandValue(activation3, activation3_init, sizeof(int32_t) * 1);
  static bool8 time_major3_init[] = {false};
  model->setOperandValue(time_major3, time_major3_init, sizeof(bool8) * 1);
  static bool8 merge_outputs3_init[] = {false};
  model->setOperandValue(merge_outputs3, merge_outputs3_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input3, fw_weights3, fw_recurrent_weights3, fw_bias3, fw_hidden_state3, bw_weights3, bw_recurrent_weights3, bw_bias3, bw_hidden_state3, aux_input3, fw_aux_weights3, bw_aux_weights3, activation3, time_major3, merge_outputs3}, {fw_output3, bw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3, fw_weights3, fw_recurrent_weights3, fw_bias3, fw_hidden_state3, bw_weights3, bw_recurrent_weights3, bw_bias3, bw_hidden_state3, aux_input3, fw_aux_weights3, bw_aux_weights3},
    {fw_output3, bw_output2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 16, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input3 = model->addOperand(&type0);
  auto fw_weights3 = model->addOperand(&type1);
  auto fw_recurrent_weights3 = model->addOperand(&type2);
  auto fw_bias3 = model->addOperand(&type3);
  auto fw_hidden_state3 = model->addOperand(&type4);
  auto bw_weights3 = model->addOperand(&type1);
  auto bw_recurrent_weights3 = model->addOperand(&type2);
  auto bw_bias3 = model->addOperand(&type3);
  auto bw_hidden_state3 = model->addOperand(&type4);
  auto aux_input3 = model->addOperand(&type5);
  auto fw_aux_weights3 = model->addOperand(&type5);
  auto bw_aux_weights3 = model->addOperand(&type5);
  auto activation3 = model->addOperand(&type7);
  auto time_major3 = model->addOperand(&type8);
  auto merge_outputs3 = model->addOperand(&type8);
  auto fw_output3 = model->addOperand(&type6);
  auto bw_output2 = model->addOperand(&type6);
  auto input3_tmp = model->addOperand(&type0);
  auto dummy180 = model->addOperand(&type15);
  auto param180 = model->addOperand(&type7);
  auto fw_weights3_tmp = model->addOperand(&type1);
  auto dummy181 = model->addOperand(&type15);
  auto param181 = model->addOperand(&type7);
  auto fw_recurrent_weights3_tmp = model->addOperand(&type2);
  auto dummy182 = model->addOperand(&type15);
  auto param182 = model->addOperand(&type7);
  auto fw_bias3_tmp = model->addOperand(&type3);
  auto dummy183 = model->addOperand(&type15);
  auto param183 = model->addOperand(&type7);
  auto fw_hidden_state3_tmp = model->addOperand(&type4);
  auto dummy184 = model->addOperand(&type15);
  auto param184 = model->addOperand(&type7);
  auto bw_weights3_tmp = model->addOperand(&type1);
  auto dummy185 = model->addOperand(&type15);
  auto param185 = model->addOperand(&type7);
  auto bw_recurrent_weights3_tmp = model->addOperand(&type2);
  auto dummy186 = model->addOperand(&type15);
  auto param186 = model->addOperand(&type7);
  auto bw_bias3_tmp = model->addOperand(&type3);
  auto dummy187 = model->addOperand(&type15);
  auto param187 = model->addOperand(&type7);
  auto bw_hidden_state3_tmp = model->addOperand(&type4);
  auto dummy188 = model->addOperand(&type15);
  auto param188 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation3_init[] = {1};
  model->setOperandValue(activation3, activation3_init, sizeof(int32_t) * 1);
  static bool8 time_major3_init[] = {false};
  model->setOperandValue(time_major3, time_major3_init, sizeof(bool8) * 1);
  static bool8 merge_outputs3_init[] = {false};
  model->setOperandValue(merge_outputs3, merge_outputs3_init, sizeof(bool8) * 1);
  static float dummy180_init[] = {0.0f};
  model->setOperandValue(dummy180, dummy180_init, sizeof(float) * 1);
  static int32_t param180_init[] = {0};
  model->setOperandValue(param180, param180_init, sizeof(int32_t) * 1);
  static float dummy181_init[] = {0.0f};
  model->setOperandValue(dummy181, dummy181_init, sizeof(float) * 1);
  static int32_t param181_init[] = {0};
  model->setOperandValue(param181, param181_init, sizeof(int32_t) * 1);
  static float dummy182_init[] = {0.0f};
  model->setOperandValue(dummy182, dummy182_init, sizeof(float) * 1);
  static int32_t param182_init[] = {0};
  model->setOperandValue(param182, param182_init, sizeof(int32_t) * 1);
  static float dummy183_init[] = {0.0f};
  model->setOperandValue(dummy183, dummy183_init, sizeof(float) * 1);
  static int32_t param183_init[] = {0};
  model->setOperandValue(param183, param183_init, sizeof(int32_t) * 1);
  static float dummy184_init[] = {0.0f};
  model->setOperandValue(dummy184, dummy184_init, sizeof(float) * 1);
  static int32_t param184_init[] = {0};
  model->setOperandValue(param184, param184_init, sizeof(int32_t) * 1);
  static float dummy185_init[] = {0.0f};
  model->setOperandValue(dummy185, dummy185_init, sizeof(float) * 1);
  static int32_t param185_init[] = {0};
  model->setOperandValue(param185, param185_init, sizeof(int32_t) * 1);
  static float dummy186_init[] = {0.0f};
  model->setOperandValue(dummy186, dummy186_init, sizeof(float) * 1);
  static int32_t param186_init[] = {0};
  model->setOperandValue(param186, param186_init, sizeof(int32_t) * 1);
  static float dummy187_init[] = {0.0f};
  model->setOperandValue(dummy187, dummy187_init, sizeof(float) * 1);
  static int32_t param187_init[] = {0};
  model->setOperandValue(param187, param187_init, sizeof(int32_t) * 1);
  static float dummy188_init[] = {0.0f};
  model->setOperandValue(dummy188, dummy188_init, sizeof(float) * 1);
  static int32_t param188_init[] = {0};
  model->setOperandValue(param188, param188_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy180, param180}, {input3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights3_tmp, dummy181, param181}, {fw_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights3_tmp, dummy182, param182}, {fw_recurrent_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias3_tmp, dummy183, param183}, {fw_bias3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state3_tmp, dummy184, param184}, {fw_hidden_state3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights3_tmp, dummy185, param185}, {bw_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights3_tmp, dummy186, param186}, {bw_recurrent_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias3_tmp, dummy187, param187}, {bw_bias3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state3_tmp, dummy188, param188}, {bw_hidden_state3});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input3, fw_weights3, fw_recurrent_weights3, fw_bias3, fw_hidden_state3, bw_weights3, bw_recurrent_weights3, bw_bias3, bw_hidden_state3, aux_input3, fw_aux_weights3, bw_aux_weights3, activation3, time_major3, merge_outputs3}, {fw_output3, bw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input3, fw_aux_weights3, bw_aux_weights3, input3_tmp, fw_weights3_tmp, fw_recurrent_weights3_tmp, fw_bias3_tmp, fw_hidden_state3_tmp, bw_weights3_tmp, bw_recurrent_weights3_tmp, bw_bias3_tmp, bw_hidden_state3_tmp},
    {fw_output3, bw_output2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input3 = model->addOperand(&type0);
  auto fw_weights3 = model->addOperand(&type1);
  auto fw_recurrent_weights3 = model->addOperand(&type2);
  auto fw_bias3 = model->addOperand(&type3);
  auto fw_hidden_state3 = model->addOperand(&type4);
  auto bw_weights3 = model->addOperand(&type1);
  auto bw_recurrent_weights3 = model->addOperand(&type2);
  auto bw_bias3 = model->addOperand(&type3);
  auto bw_hidden_state3 = model->addOperand(&type4);
  auto aux_input3 = model->addOperand(&type5);
  auto fw_aux_weights3 = model->addOperand(&type5);
  auto bw_aux_weights3 = model->addOperand(&type5);
  auto activation3 = model->addOperand(&type7);
  auto time_major3 = model->addOperand(&type8);
  auto merge_outputs3 = model->addOperand(&type8);
  auto fw_output3 = model->addOperand(&type14);
  auto bw_output2 = model->addOperand(&type14);
  auto input3_tmp = model->addOperand(&type0);
  auto dummy189 = model->addOperand(&type15);
  auto param189 = model->addOperand(&type7);
  auto fw_weights3_tmp = model->addOperand(&type1);
  auto dummy190 = model->addOperand(&type15);
  auto param190 = model->addOperand(&type7);
  auto fw_recurrent_weights3_tmp = model->addOperand(&type2);
  auto dummy191 = model->addOperand(&type15);
  auto param191 = model->addOperand(&type7);
  auto fw_bias3_tmp = model->addOperand(&type3);
  auto dummy192 = model->addOperand(&type15);
  auto param192 = model->addOperand(&type7);
  auto fw_hidden_state3_tmp = model->addOperand(&type4);
  auto dummy193 = model->addOperand(&type15);
  auto param193 = model->addOperand(&type7);
  auto bw_weights3_tmp = model->addOperand(&type1);
  auto dummy194 = model->addOperand(&type15);
  auto param194 = model->addOperand(&type7);
  auto bw_recurrent_weights3_tmp = model->addOperand(&type2);
  auto dummy195 = model->addOperand(&type15);
  auto param195 = model->addOperand(&type7);
  auto bw_bias3_tmp = model->addOperand(&type3);
  auto dummy196 = model->addOperand(&type15);
  auto param196 = model->addOperand(&type7);
  auto bw_hidden_state3_tmp = model->addOperand(&type4);
  auto dummy197 = model->addOperand(&type15);
  auto param197 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation3_init[] = {1};
  model->setOperandValue(activation3, activation3_init, sizeof(int32_t) * 1);
  static bool8 time_major3_init[] = {false};
  model->setOperandValue(time_major3, time_major3_init, sizeof(bool8) * 1);
  static bool8 merge_outputs3_init[] = {false};
  model->setOperandValue(merge_outputs3, merge_outputs3_init, sizeof(bool8) * 1);
  static float dummy189_init[] = {0.0f};
  model->setOperandValue(dummy189, dummy189_init, sizeof(float) * 1);
  static int32_t param189_init[] = {0};
  model->setOperandValue(param189, param189_init, sizeof(int32_t) * 1);
  static float dummy190_init[] = {0.0f};
  model->setOperandValue(dummy190, dummy190_init, sizeof(float) * 1);
  static int32_t param190_init[] = {0};
  model->setOperandValue(param190, param190_init, sizeof(int32_t) * 1);
  static float dummy191_init[] = {0.0f};
  model->setOperandValue(dummy191, dummy191_init, sizeof(float) * 1);
  static int32_t param191_init[] = {0};
  model->setOperandValue(param191, param191_init, sizeof(int32_t) * 1);
  static float dummy192_init[] = {0.0f};
  model->setOperandValue(dummy192, dummy192_init, sizeof(float) * 1);
  static int32_t param192_init[] = {0};
  model->setOperandValue(param192, param192_init, sizeof(int32_t) * 1);
  static float dummy193_init[] = {0.0f};
  model->setOperandValue(dummy193, dummy193_init, sizeof(float) * 1);
  static int32_t param193_init[] = {0};
  model->setOperandValue(param193, param193_init, sizeof(int32_t) * 1);
  static float dummy194_init[] = {0.0f};
  model->setOperandValue(dummy194, dummy194_init, sizeof(float) * 1);
  static int32_t param194_init[] = {0};
  model->setOperandValue(param194, param194_init, sizeof(int32_t) * 1);
  static float dummy195_init[] = {0.0f};
  model->setOperandValue(dummy195, dummy195_init, sizeof(float) * 1);
  static int32_t param195_init[] = {0};
  model->setOperandValue(param195, param195_init, sizeof(int32_t) * 1);
  static float dummy196_init[] = {0.0f};
  model->setOperandValue(dummy196, dummy196_init, sizeof(float) * 1);
  static int32_t param196_init[] = {0};
  model->setOperandValue(param196, param196_init, sizeof(int32_t) * 1);
  static float dummy197_init[] = {0.0f};
  model->setOperandValue(dummy197, dummy197_init, sizeof(float) * 1);
  static int32_t param197_init[] = {0};
  model->setOperandValue(param197, param197_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy189, param189}, {input3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights3_tmp, dummy190, param190}, {fw_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights3_tmp, dummy191, param191}, {fw_recurrent_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias3_tmp, dummy192, param192}, {fw_bias3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state3_tmp, dummy193, param193}, {fw_hidden_state3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights3_tmp, dummy194, param194}, {bw_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights3_tmp, dummy195, param195}, {bw_recurrent_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias3_tmp, dummy196, param196}, {bw_bias3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state3_tmp, dummy197, param197}, {bw_hidden_state3});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input3, fw_weights3, fw_recurrent_weights3, fw_bias3, fw_hidden_state3, bw_weights3, bw_recurrent_weights3, bw_bias3, bw_hidden_state3, aux_input3, fw_aux_weights3, bw_aux_weights3, activation3, time_major3, merge_outputs3}, {fw_output3, bw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input3, fw_aux_weights3, bw_aux_weights3, input3_tmp, fw_weights3_tmp, fw_recurrent_weights3_tmp, fw_bias3_tmp, fw_hidden_state3_tmp, bw_weights3_tmp, bw_recurrent_weights3_tmp, bw_bias3_tmp, bw_hidden_state3_tmp},
    {fw_output3, bw_output2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_4(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT16, {0});
  OperandType type17(Type::TENSOR_FLOAT16, {16});
  OperandType type18(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type19(Type::TENSOR_FLOAT16, {2, 16, 16});
  OperandType type20(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type21(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type22(Type::TENSOR_FLOAT16, {2, 16, 8});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input3 = model->addOperand(&type22);
  auto fw_weights3 = model->addOperand(&type21);
  auto fw_recurrent_weights3 = model->addOperand(&type20);
  auto fw_bias3 = model->addOperand(&type17);
  auto fw_hidden_state3 = model->addOperand(&type18);
  auto bw_weights3 = model->addOperand(&type21);
  auto bw_recurrent_weights3 = model->addOperand(&type20);
  auto bw_bias3 = model->addOperand(&type17);
  auto bw_hidden_state3 = model->addOperand(&type18);
  auto aux_input3 = model->addOperand(&type16);
  auto fw_aux_weights3 = model->addOperand(&type16);
  auto bw_aux_weights3 = model->addOperand(&type16);
  auto activation3 = model->addOperand(&type7);
  auto time_major3 = model->addOperand(&type8);
  auto merge_outputs3 = model->addOperand(&type8);
  auto fw_output3 = model->addOperand(&type19);
  auto bw_output2 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t activation3_init[] = {1};
  model->setOperandValue(activation3, activation3_init, sizeof(int32_t) * 1);
  static bool8 time_major3_init[] = {false};
  model->setOperandValue(time_major3, time_major3_init, sizeof(bool8) * 1);
  static bool8 merge_outputs3_init[] = {false};
  model->setOperandValue(merge_outputs3, merge_outputs3_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input3, fw_weights3, fw_recurrent_weights3, fw_bias3, fw_hidden_state3, bw_weights3, bw_recurrent_weights3, bw_bias3, bw_hidden_state3, aux_input3, fw_aux_weights3, bw_aux_weights3, activation3, time_major3, merge_outputs3}, {fw_output3, bw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3, fw_weights3, fw_recurrent_weights3, fw_bias3, fw_hidden_state3, bw_weights3, bw_recurrent_weights3, bw_bias3, bw_hidden_state3, aux_input3, fw_aux_weights3, bw_aux_weights3},
    {fw_output3, bw_output2});
  assert(model->isValid());
}

bool is_ignored_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_dynamic_output_shape_4(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT16, {0});
  OperandType type17(Type::TENSOR_FLOAT16, {16});
  OperandType type18(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type20(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type21(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type22(Type::TENSOR_FLOAT16, {2, 16, 8});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input3 = model->addOperand(&type22);
  auto fw_weights3 = model->addOperand(&type21);
  auto fw_recurrent_weights3 = model->addOperand(&type20);
  auto fw_bias3 = model->addOperand(&type17);
  auto fw_hidden_state3 = model->addOperand(&type18);
  auto bw_weights3 = model->addOperand(&type21);
  auto bw_recurrent_weights3 = model->addOperand(&type20);
  auto bw_bias3 = model->addOperand(&type17);
  auto bw_hidden_state3 = model->addOperand(&type18);
  auto aux_input3 = model->addOperand(&type16);
  auto fw_aux_weights3 = model->addOperand(&type16);
  auto bw_aux_weights3 = model->addOperand(&type16);
  auto activation3 = model->addOperand(&type7);
  auto time_major3 = model->addOperand(&type8);
  auto merge_outputs3 = model->addOperand(&type8);
  auto fw_output3 = model->addOperand(&type23);
  auto bw_output2 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t activation3_init[] = {1};
  model->setOperandValue(activation3, activation3_init, sizeof(int32_t) * 1);
  static bool8 time_major3_init[] = {false};
  model->setOperandValue(time_major3, time_major3_init, sizeof(bool8) * 1);
  static bool8 merge_outputs3_init[] = {false};
  model->setOperandValue(merge_outputs3, merge_outputs3_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input3, fw_weights3, fw_recurrent_weights3, fw_bias3, fw_hidden_state3, bw_weights3, bw_recurrent_weights3, bw_bias3, bw_hidden_state3, aux_input3, fw_aux_weights3, bw_aux_weights3, activation3, time_major3, merge_outputs3}, {fw_output3, bw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3, fw_weights3, fw_recurrent_weights3, fw_bias3, fw_hidden_state3, bw_weights3, bw_recurrent_weights3, bw_bias3, bw_hidden_state3, aux_input3, fw_aux_weights3, bw_aux_weights3},
    {fw_output3, bw_output2});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_all_inputs_as_internal_4(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT16, {0});
  OperandType type19(Type::TENSOR_FLOAT16, {2, 16, 16});
  OperandType type24(Type::TENSOR_FLOAT16, {2, 16, 8});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type27(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type28(Type::TENSOR_FLOAT16, {16});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input3 = model->addOperand(&type24);
  auto fw_weights3 = model->addOperand(&type26);
  auto fw_recurrent_weights3 = model->addOperand(&type27);
  auto fw_bias3 = model->addOperand(&type28);
  auto fw_hidden_state3 = model->addOperand(&type29);
  auto bw_weights3 = model->addOperand(&type26);
  auto bw_recurrent_weights3 = model->addOperand(&type27);
  auto bw_bias3 = model->addOperand(&type28);
  auto bw_hidden_state3 = model->addOperand(&type29);
  auto aux_input3 = model->addOperand(&type16);
  auto fw_aux_weights3 = model->addOperand(&type16);
  auto bw_aux_weights3 = model->addOperand(&type16);
  auto activation3 = model->addOperand(&type7);
  auto time_major3 = model->addOperand(&type8);
  auto merge_outputs3 = model->addOperand(&type8);
  auto fw_output3 = model->addOperand(&type19);
  auto bw_output2 = model->addOperand(&type19);
  auto input3_tmp = model->addOperand(&type24);
  auto dummy198 = model->addOperand(&type25);
  auto param198 = model->addOperand(&type7);
  auto fw_weights3_tmp = model->addOperand(&type26);
  auto dummy199 = model->addOperand(&type25);
  auto param199 = model->addOperand(&type7);
  auto fw_recurrent_weights3_tmp = model->addOperand(&type27);
  auto dummy200 = model->addOperand(&type25);
  auto param200 = model->addOperand(&type7);
  auto fw_bias3_tmp = model->addOperand(&type28);
  auto dummy201 = model->addOperand(&type25);
  auto param201 = model->addOperand(&type7);
  auto fw_hidden_state3_tmp = model->addOperand(&type29);
  auto dummy202 = model->addOperand(&type25);
  auto param202 = model->addOperand(&type7);
  auto bw_weights3_tmp = model->addOperand(&type26);
  auto dummy203 = model->addOperand(&type25);
  auto param203 = model->addOperand(&type7);
  auto bw_recurrent_weights3_tmp = model->addOperand(&type27);
  auto dummy204 = model->addOperand(&type25);
  auto param204 = model->addOperand(&type7);
  auto bw_bias3_tmp = model->addOperand(&type28);
  auto dummy205 = model->addOperand(&type25);
  auto param205 = model->addOperand(&type7);
  auto bw_hidden_state3_tmp = model->addOperand(&type29);
  auto dummy206 = model->addOperand(&type25);
  auto param206 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation3_init[] = {1};
  model->setOperandValue(activation3, activation3_init, sizeof(int32_t) * 1);
  static bool8 time_major3_init[] = {false};
  model->setOperandValue(time_major3, time_major3_init, sizeof(bool8) * 1);
  static bool8 merge_outputs3_init[] = {false};
  model->setOperandValue(merge_outputs3, merge_outputs3_init, sizeof(bool8) * 1);
  static _Float16 dummy198_init[] = {0.0f};
  model->setOperandValue(dummy198, dummy198_init, sizeof(_Float16) * 1);
  static int32_t param198_init[] = {0};
  model->setOperandValue(param198, param198_init, sizeof(int32_t) * 1);
  static _Float16 dummy199_init[] = {0.0f};
  model->setOperandValue(dummy199, dummy199_init, sizeof(_Float16) * 1);
  static int32_t param199_init[] = {0};
  model->setOperandValue(param199, param199_init, sizeof(int32_t) * 1);
  static _Float16 dummy200_init[] = {0.0f};
  model->setOperandValue(dummy200, dummy200_init, sizeof(_Float16) * 1);
  static int32_t param200_init[] = {0};
  model->setOperandValue(param200, param200_init, sizeof(int32_t) * 1);
  static _Float16 dummy201_init[] = {0.0f};
  model->setOperandValue(dummy201, dummy201_init, sizeof(_Float16) * 1);
  static int32_t param201_init[] = {0};
  model->setOperandValue(param201, param201_init, sizeof(int32_t) * 1);
  static _Float16 dummy202_init[] = {0.0f};
  model->setOperandValue(dummy202, dummy202_init, sizeof(_Float16) * 1);
  static int32_t param202_init[] = {0};
  model->setOperandValue(param202, param202_init, sizeof(int32_t) * 1);
  static _Float16 dummy203_init[] = {0.0f};
  model->setOperandValue(dummy203, dummy203_init, sizeof(_Float16) * 1);
  static int32_t param203_init[] = {0};
  model->setOperandValue(param203, param203_init, sizeof(int32_t) * 1);
  static _Float16 dummy204_init[] = {0.0f};
  model->setOperandValue(dummy204, dummy204_init, sizeof(_Float16) * 1);
  static int32_t param204_init[] = {0};
  model->setOperandValue(param204, param204_init, sizeof(int32_t) * 1);
  static _Float16 dummy205_init[] = {0.0f};
  model->setOperandValue(dummy205, dummy205_init, sizeof(_Float16) * 1);
  static int32_t param205_init[] = {0};
  model->setOperandValue(param205, param205_init, sizeof(int32_t) * 1);
  static _Float16 dummy206_init[] = {0.0f};
  model->setOperandValue(dummy206, dummy206_init, sizeof(_Float16) * 1);
  static int32_t param206_init[] = {0};
  model->setOperandValue(param206, param206_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy198, param198}, {input3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights3_tmp, dummy199, param199}, {fw_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights3_tmp, dummy200, param200}, {fw_recurrent_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias3_tmp, dummy201, param201}, {fw_bias3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state3_tmp, dummy202, param202}, {fw_hidden_state3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights3_tmp, dummy203, param203}, {bw_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights3_tmp, dummy204, param204}, {bw_recurrent_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias3_tmp, dummy205, param205}, {bw_bias3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state3_tmp, dummy206, param206}, {bw_hidden_state3});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input3, fw_weights3, fw_recurrent_weights3, fw_bias3, fw_hidden_state3, bw_weights3, bw_recurrent_weights3, bw_bias3, bw_hidden_state3, aux_input3, fw_aux_weights3, bw_aux_weights3, activation3, time_major3, merge_outputs3}, {fw_output3, bw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input3, fw_aux_weights3, bw_aux_weights3, input3_tmp, fw_weights3_tmp, fw_recurrent_weights3_tmp, fw_bias3_tmp, fw_hidden_state3_tmp, bw_weights3_tmp, bw_recurrent_weights3_tmp, bw_bias3_tmp, bw_hidden_state3_tmp},
    {fw_output3, bw_output2});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT16, {0});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type24(Type::TENSOR_FLOAT16, {2, 16, 8});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type27(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type28(Type::TENSOR_FLOAT16, {16});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input3 = model->addOperand(&type24);
  auto fw_weights3 = model->addOperand(&type26);
  auto fw_recurrent_weights3 = model->addOperand(&type27);
  auto fw_bias3 = model->addOperand(&type28);
  auto fw_hidden_state3 = model->addOperand(&type29);
  auto bw_weights3 = model->addOperand(&type26);
  auto bw_recurrent_weights3 = model->addOperand(&type27);
  auto bw_bias3 = model->addOperand(&type28);
  auto bw_hidden_state3 = model->addOperand(&type29);
  auto aux_input3 = model->addOperand(&type16);
  auto fw_aux_weights3 = model->addOperand(&type16);
  auto bw_aux_weights3 = model->addOperand(&type16);
  auto activation3 = model->addOperand(&type7);
  auto time_major3 = model->addOperand(&type8);
  auto merge_outputs3 = model->addOperand(&type8);
  auto fw_output3 = model->addOperand(&type23);
  auto bw_output2 = model->addOperand(&type23);
  auto input3_tmp = model->addOperand(&type24);
  auto dummy207 = model->addOperand(&type25);
  auto param207 = model->addOperand(&type7);
  auto fw_weights3_tmp = model->addOperand(&type26);
  auto dummy208 = model->addOperand(&type25);
  auto param208 = model->addOperand(&type7);
  auto fw_recurrent_weights3_tmp = model->addOperand(&type27);
  auto dummy209 = model->addOperand(&type25);
  auto param209 = model->addOperand(&type7);
  auto fw_bias3_tmp = model->addOperand(&type28);
  auto dummy210 = model->addOperand(&type25);
  auto param210 = model->addOperand(&type7);
  auto fw_hidden_state3_tmp = model->addOperand(&type29);
  auto dummy211 = model->addOperand(&type25);
  auto param211 = model->addOperand(&type7);
  auto bw_weights3_tmp = model->addOperand(&type26);
  auto dummy212 = model->addOperand(&type25);
  auto param212 = model->addOperand(&type7);
  auto bw_recurrent_weights3_tmp = model->addOperand(&type27);
  auto dummy213 = model->addOperand(&type25);
  auto param213 = model->addOperand(&type7);
  auto bw_bias3_tmp = model->addOperand(&type28);
  auto dummy214 = model->addOperand(&type25);
  auto param214 = model->addOperand(&type7);
  auto bw_hidden_state3_tmp = model->addOperand(&type29);
  auto dummy215 = model->addOperand(&type25);
  auto param215 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation3_init[] = {1};
  model->setOperandValue(activation3, activation3_init, sizeof(int32_t) * 1);
  static bool8 time_major3_init[] = {false};
  model->setOperandValue(time_major3, time_major3_init, sizeof(bool8) * 1);
  static bool8 merge_outputs3_init[] = {false};
  model->setOperandValue(merge_outputs3, merge_outputs3_init, sizeof(bool8) * 1);
  static _Float16 dummy207_init[] = {0.0f};
  model->setOperandValue(dummy207, dummy207_init, sizeof(_Float16) * 1);
  static int32_t param207_init[] = {0};
  model->setOperandValue(param207, param207_init, sizeof(int32_t) * 1);
  static _Float16 dummy208_init[] = {0.0f};
  model->setOperandValue(dummy208, dummy208_init, sizeof(_Float16) * 1);
  static int32_t param208_init[] = {0};
  model->setOperandValue(param208, param208_init, sizeof(int32_t) * 1);
  static _Float16 dummy209_init[] = {0.0f};
  model->setOperandValue(dummy209, dummy209_init, sizeof(_Float16) * 1);
  static int32_t param209_init[] = {0};
  model->setOperandValue(param209, param209_init, sizeof(int32_t) * 1);
  static _Float16 dummy210_init[] = {0.0f};
  model->setOperandValue(dummy210, dummy210_init, sizeof(_Float16) * 1);
  static int32_t param210_init[] = {0};
  model->setOperandValue(param210, param210_init, sizeof(int32_t) * 1);
  static _Float16 dummy211_init[] = {0.0f};
  model->setOperandValue(dummy211, dummy211_init, sizeof(_Float16) * 1);
  static int32_t param211_init[] = {0};
  model->setOperandValue(param211, param211_init, sizeof(int32_t) * 1);
  static _Float16 dummy212_init[] = {0.0f};
  model->setOperandValue(dummy212, dummy212_init, sizeof(_Float16) * 1);
  static int32_t param212_init[] = {0};
  model->setOperandValue(param212, param212_init, sizeof(int32_t) * 1);
  static _Float16 dummy213_init[] = {0.0f};
  model->setOperandValue(dummy213, dummy213_init, sizeof(_Float16) * 1);
  static int32_t param213_init[] = {0};
  model->setOperandValue(param213, param213_init, sizeof(int32_t) * 1);
  static _Float16 dummy214_init[] = {0.0f};
  model->setOperandValue(dummy214, dummy214_init, sizeof(_Float16) * 1);
  static int32_t param214_init[] = {0};
  model->setOperandValue(param214, param214_init, sizeof(int32_t) * 1);
  static _Float16 dummy215_init[] = {0.0f};
  model->setOperandValue(dummy215, dummy215_init, sizeof(_Float16) * 1);
  static int32_t param215_init[] = {0};
  model->setOperandValue(param215, param215_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy207, param207}, {input3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights3_tmp, dummy208, param208}, {fw_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights3_tmp, dummy209, param209}, {fw_recurrent_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias3_tmp, dummy210, param210}, {fw_bias3});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state3_tmp, dummy211, param211}, {fw_hidden_state3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights3_tmp, dummy212, param212}, {bw_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights3_tmp, dummy213, param213}, {bw_recurrent_weights3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias3_tmp, dummy214, param214}, {bw_bias3});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state3_tmp, dummy215, param215}, {bw_hidden_state3});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input3, fw_weights3, fw_recurrent_weights3, fw_bias3, fw_hidden_state3, bw_weights3, bw_recurrent_weights3, bw_bias3, bw_hidden_state3, aux_input3, fw_aux_weights3, bw_aux_weights3, activation3, time_major3, merge_outputs3}, {fw_output3, bw_output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {aux_input3, fw_aux_weights3, bw_aux_weights3, input3_tmp, fw_weights3_tmp, fw_recurrent_weights3_tmp, fw_bias3_tmp, fw_hidden_state3_tmp, bw_weights3_tmp, bw_recurrent_weights3_tmp, bw_bias3_tmp, bw_hidden_state3_tmp},
    {fw_output3, bw_output2});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_5(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 16, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input4 = model->addOperand(&type0);
  auto fw_weights4 = model->addOperand(&type1);
  auto fw_recurrent_weights4 = model->addOperand(&type2);
  auto fw_bias4 = model->addOperand(&type3);
  auto fw_hidden_state4 = model->addOperand(&type4);
  auto bw_weights4 = model->addOperand(&type1);
  auto bw_recurrent_weights4 = model->addOperand(&type2);
  auto bw_bias4 = model->addOperand(&type3);
  auto bw_hidden_state4 = model->addOperand(&type4);
  auto aux_input4 = model->addOperand(&type0);
  auto fw_aux_weights4 = model->addOperand(&type1);
  auto bw_aux_weights4 = model->addOperand(&type1);
  auto activation4 = model->addOperand(&type7);
  auto time_major4 = model->addOperand(&type8);
  auto merge_outputs4 = model->addOperand(&type8);
  auto fw_output4 = model->addOperand(&type6);
  auto bw_output3 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation4_init[] = {1};
  model->setOperandValue(activation4, activation4_init, sizeof(int32_t) * 1);
  static bool8 time_major4_init[] = {false};
  model->setOperandValue(time_major4, time_major4_init, sizeof(bool8) * 1);
  static bool8 merge_outputs4_init[] = {false};
  model->setOperandValue(merge_outputs4, merge_outputs4_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input4, fw_weights4, fw_recurrent_weights4, fw_bias4, fw_hidden_state4, bw_weights4, bw_recurrent_weights4, bw_bias4, bw_hidden_state4, aux_input4, fw_aux_weights4, bw_aux_weights4, activation4, time_major4, merge_outputs4}, {fw_output4, bw_output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4, fw_weights4, fw_recurrent_weights4, fw_bias4, fw_hidden_state4, bw_weights4, bw_recurrent_weights4, bw_bias4, bw_hidden_state4, aux_input4, fw_aux_weights4, bw_aux_weights4},
    {fw_output4, bw_output3});
  assert(model->isValid());
}

bool is_ignored_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input4 = model->addOperand(&type0);
  auto fw_weights4 = model->addOperand(&type1);
  auto fw_recurrent_weights4 = model->addOperand(&type2);
  auto fw_bias4 = model->addOperand(&type3);
  auto fw_hidden_state4 = model->addOperand(&type4);
  auto bw_weights4 = model->addOperand(&type1);
  auto bw_recurrent_weights4 = model->addOperand(&type2);
  auto bw_bias4 = model->addOperand(&type3);
  auto bw_hidden_state4 = model->addOperand(&type4);
  auto aux_input4 = model->addOperand(&type0);
  auto fw_aux_weights4 = model->addOperand(&type1);
  auto bw_aux_weights4 = model->addOperand(&type1);
  auto activation4 = model->addOperand(&type7);
  auto time_major4 = model->addOperand(&type8);
  auto merge_outputs4 = model->addOperand(&type8);
  auto fw_output4 = model->addOperand(&type14);
  auto bw_output3 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t activation4_init[] = {1};
  model->setOperandValue(activation4, activation4_init, sizeof(int32_t) * 1);
  static bool8 time_major4_init[] = {false};
  model->setOperandValue(time_major4, time_major4_init, sizeof(bool8) * 1);
  static bool8 merge_outputs4_init[] = {false};
  model->setOperandValue(merge_outputs4, merge_outputs4_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input4, fw_weights4, fw_recurrent_weights4, fw_bias4, fw_hidden_state4, bw_weights4, bw_recurrent_weights4, bw_bias4, bw_hidden_state4, aux_input4, fw_aux_weights4, bw_aux_weights4, activation4, time_major4, merge_outputs4}, {fw_output4, bw_output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4, fw_weights4, fw_recurrent_weights4, fw_bias4, fw_hidden_state4, bw_weights4, bw_recurrent_weights4, bw_bias4, bw_hidden_state4, aux_input4, fw_aux_weights4, bw_aux_weights4},
    {fw_output4, bw_output3});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 16, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input4 = model->addOperand(&type0);
  auto fw_weights4 = model->addOperand(&type1);
  auto fw_recurrent_weights4 = model->addOperand(&type2);
  auto fw_bias4 = model->addOperand(&type3);
  auto fw_hidden_state4 = model->addOperand(&type4);
  auto bw_weights4 = model->addOperand(&type1);
  auto bw_recurrent_weights4 = model->addOperand(&type2);
  auto bw_bias4 = model->addOperand(&type3);
  auto bw_hidden_state4 = model->addOperand(&type4);
  auto aux_input4 = model->addOperand(&type0);
  auto fw_aux_weights4 = model->addOperand(&type1);
  auto bw_aux_weights4 = model->addOperand(&type1);
  auto activation4 = model->addOperand(&type7);
  auto time_major4 = model->addOperand(&type8);
  auto merge_outputs4 = model->addOperand(&type8);
  auto fw_output4 = model->addOperand(&type6);
  auto bw_output3 = model->addOperand(&type6);
  auto input4_tmp = model->addOperand(&type0);
  auto dummy216 = model->addOperand(&type15);
  auto param216 = model->addOperand(&type7);
  auto fw_weights4_tmp = model->addOperand(&type1);
  auto dummy217 = model->addOperand(&type15);
  auto param217 = model->addOperand(&type7);
  auto fw_recurrent_weights4_tmp = model->addOperand(&type2);
  auto dummy218 = model->addOperand(&type15);
  auto param218 = model->addOperand(&type7);
  auto fw_bias4_tmp = model->addOperand(&type3);
  auto dummy219 = model->addOperand(&type15);
  auto param219 = model->addOperand(&type7);
  auto fw_hidden_state4_tmp = model->addOperand(&type4);
  auto dummy220 = model->addOperand(&type15);
  auto param220 = model->addOperand(&type7);
  auto bw_weights4_tmp = model->addOperand(&type1);
  auto dummy221 = model->addOperand(&type15);
  auto param221 = model->addOperand(&type7);
  auto bw_recurrent_weights4_tmp = model->addOperand(&type2);
  auto dummy222 = model->addOperand(&type15);
  auto param222 = model->addOperand(&type7);
  auto bw_bias4_tmp = model->addOperand(&type3);
  auto dummy223 = model->addOperand(&type15);
  auto param223 = model->addOperand(&type7);
  auto bw_hidden_state4_tmp = model->addOperand(&type4);
  auto dummy224 = model->addOperand(&type15);
  auto param224 = model->addOperand(&type7);
  auto aux_input4_tmp = model->addOperand(&type0);
  auto dummy225 = model->addOperand(&type15);
  auto param225 = model->addOperand(&type7);
  auto fw_aux_weights4_tmp = model->addOperand(&type1);
  auto dummy226 = model->addOperand(&type15);
  auto param226 = model->addOperand(&type7);
  auto bw_aux_weights4_tmp = model->addOperand(&type1);
  auto dummy227 = model->addOperand(&type15);
  auto param227 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation4_init[] = {1};
  model->setOperandValue(activation4, activation4_init, sizeof(int32_t) * 1);
  static bool8 time_major4_init[] = {false};
  model->setOperandValue(time_major4, time_major4_init, sizeof(bool8) * 1);
  static bool8 merge_outputs4_init[] = {false};
  model->setOperandValue(merge_outputs4, merge_outputs4_init, sizeof(bool8) * 1);
  static float dummy216_init[] = {0.0f};
  model->setOperandValue(dummy216, dummy216_init, sizeof(float) * 1);
  static int32_t param216_init[] = {0};
  model->setOperandValue(param216, param216_init, sizeof(int32_t) * 1);
  static float dummy217_init[] = {0.0f};
  model->setOperandValue(dummy217, dummy217_init, sizeof(float) * 1);
  static int32_t param217_init[] = {0};
  model->setOperandValue(param217, param217_init, sizeof(int32_t) * 1);
  static float dummy218_init[] = {0.0f};
  model->setOperandValue(dummy218, dummy218_init, sizeof(float) * 1);
  static int32_t param218_init[] = {0};
  model->setOperandValue(param218, param218_init, sizeof(int32_t) * 1);
  static float dummy219_init[] = {0.0f};
  model->setOperandValue(dummy219, dummy219_init, sizeof(float) * 1);
  static int32_t param219_init[] = {0};
  model->setOperandValue(param219, param219_init, sizeof(int32_t) * 1);
  static float dummy220_init[] = {0.0f};
  model->setOperandValue(dummy220, dummy220_init, sizeof(float) * 1);
  static int32_t param220_init[] = {0};
  model->setOperandValue(param220, param220_init, sizeof(int32_t) * 1);
  static float dummy221_init[] = {0.0f};
  model->setOperandValue(dummy221, dummy221_init, sizeof(float) * 1);
  static int32_t param221_init[] = {0};
  model->setOperandValue(param221, param221_init, sizeof(int32_t) * 1);
  static float dummy222_init[] = {0.0f};
  model->setOperandValue(dummy222, dummy222_init, sizeof(float) * 1);
  static int32_t param222_init[] = {0};
  model->setOperandValue(param222, param222_init, sizeof(int32_t) * 1);
  static float dummy223_init[] = {0.0f};
  model->setOperandValue(dummy223, dummy223_init, sizeof(float) * 1);
  static int32_t param223_init[] = {0};
  model->setOperandValue(param223, param223_init, sizeof(int32_t) * 1);
  static float dummy224_init[] = {0.0f};
  model->setOperandValue(dummy224, dummy224_init, sizeof(float) * 1);
  static int32_t param224_init[] = {0};
  model->setOperandValue(param224, param224_init, sizeof(int32_t) * 1);
  static float dummy225_init[] = {0.0f};
  model->setOperandValue(dummy225, dummy225_init, sizeof(float) * 1);
  static int32_t param225_init[] = {0};
  model->setOperandValue(param225, param225_init, sizeof(int32_t) * 1);
  static float dummy226_init[] = {0.0f};
  model->setOperandValue(dummy226, dummy226_init, sizeof(float) * 1);
  static int32_t param226_init[] = {0};
  model->setOperandValue(param226, param226_init, sizeof(int32_t) * 1);
  static float dummy227_init[] = {0.0f};
  model->setOperandValue(dummy227, dummy227_init, sizeof(float) * 1);
  static int32_t param227_init[] = {0};
  model->setOperandValue(param227, param227_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input4_tmp, dummy216, param216}, {input4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights4_tmp, dummy217, param217}, {fw_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights4_tmp, dummy218, param218}, {fw_recurrent_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias4_tmp, dummy219, param219}, {fw_bias4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state4_tmp, dummy220, param220}, {fw_hidden_state4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights4_tmp, dummy221, param221}, {bw_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights4_tmp, dummy222, param222}, {bw_recurrent_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias4_tmp, dummy223, param223}, {bw_bias4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state4_tmp, dummy224, param224}, {bw_hidden_state4});
  model->addOperation(ANEURALNETWORKS_ADD, {aux_input4_tmp, dummy225, param225}, {aux_input4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_aux_weights4_tmp, dummy226, param226}, {fw_aux_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_aux_weights4_tmp, dummy227, param227}, {bw_aux_weights4});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input4, fw_weights4, fw_recurrent_weights4, fw_bias4, fw_hidden_state4, bw_weights4, bw_recurrent_weights4, bw_bias4, bw_hidden_state4, aux_input4, fw_aux_weights4, bw_aux_weights4, activation4, time_major4, merge_outputs4}, {fw_output4, bw_output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4_tmp, fw_weights4_tmp, fw_recurrent_weights4_tmp, fw_bias4_tmp, fw_hidden_state4_tmp, bw_weights4_tmp, bw_recurrent_weights4_tmp, bw_bias4_tmp, bw_hidden_state4_tmp, aux_input4_tmp, fw_aux_weights4_tmp, bw_aux_weights4_tmp},
    {fw_output4, bw_output3});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input4 = model->addOperand(&type0);
  auto fw_weights4 = model->addOperand(&type1);
  auto fw_recurrent_weights4 = model->addOperand(&type2);
  auto fw_bias4 = model->addOperand(&type3);
  auto fw_hidden_state4 = model->addOperand(&type4);
  auto bw_weights4 = model->addOperand(&type1);
  auto bw_recurrent_weights4 = model->addOperand(&type2);
  auto bw_bias4 = model->addOperand(&type3);
  auto bw_hidden_state4 = model->addOperand(&type4);
  auto aux_input4 = model->addOperand(&type0);
  auto fw_aux_weights4 = model->addOperand(&type1);
  auto bw_aux_weights4 = model->addOperand(&type1);
  auto activation4 = model->addOperand(&type7);
  auto time_major4 = model->addOperand(&type8);
  auto merge_outputs4 = model->addOperand(&type8);
  auto fw_output4 = model->addOperand(&type14);
  auto bw_output3 = model->addOperand(&type14);
  auto input4_tmp = model->addOperand(&type0);
  auto dummy228 = model->addOperand(&type15);
  auto param228 = model->addOperand(&type7);
  auto fw_weights4_tmp = model->addOperand(&type1);
  auto dummy229 = model->addOperand(&type15);
  auto param229 = model->addOperand(&type7);
  auto fw_recurrent_weights4_tmp = model->addOperand(&type2);
  auto dummy230 = model->addOperand(&type15);
  auto param230 = model->addOperand(&type7);
  auto fw_bias4_tmp = model->addOperand(&type3);
  auto dummy231 = model->addOperand(&type15);
  auto param231 = model->addOperand(&type7);
  auto fw_hidden_state4_tmp = model->addOperand(&type4);
  auto dummy232 = model->addOperand(&type15);
  auto param232 = model->addOperand(&type7);
  auto bw_weights4_tmp = model->addOperand(&type1);
  auto dummy233 = model->addOperand(&type15);
  auto param233 = model->addOperand(&type7);
  auto bw_recurrent_weights4_tmp = model->addOperand(&type2);
  auto dummy234 = model->addOperand(&type15);
  auto param234 = model->addOperand(&type7);
  auto bw_bias4_tmp = model->addOperand(&type3);
  auto dummy235 = model->addOperand(&type15);
  auto param235 = model->addOperand(&type7);
  auto bw_hidden_state4_tmp = model->addOperand(&type4);
  auto dummy236 = model->addOperand(&type15);
  auto param236 = model->addOperand(&type7);
  auto aux_input4_tmp = model->addOperand(&type0);
  auto dummy237 = model->addOperand(&type15);
  auto param237 = model->addOperand(&type7);
  auto fw_aux_weights4_tmp = model->addOperand(&type1);
  auto dummy238 = model->addOperand(&type15);
  auto param238 = model->addOperand(&type7);
  auto bw_aux_weights4_tmp = model->addOperand(&type1);
  auto dummy239 = model->addOperand(&type15);
  auto param239 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation4_init[] = {1};
  model->setOperandValue(activation4, activation4_init, sizeof(int32_t) * 1);
  static bool8 time_major4_init[] = {false};
  model->setOperandValue(time_major4, time_major4_init, sizeof(bool8) * 1);
  static bool8 merge_outputs4_init[] = {false};
  model->setOperandValue(merge_outputs4, merge_outputs4_init, sizeof(bool8) * 1);
  static float dummy228_init[] = {0.0f};
  model->setOperandValue(dummy228, dummy228_init, sizeof(float) * 1);
  static int32_t param228_init[] = {0};
  model->setOperandValue(param228, param228_init, sizeof(int32_t) * 1);
  static float dummy229_init[] = {0.0f};
  model->setOperandValue(dummy229, dummy229_init, sizeof(float) * 1);
  static int32_t param229_init[] = {0};
  model->setOperandValue(param229, param229_init, sizeof(int32_t) * 1);
  static float dummy230_init[] = {0.0f};
  model->setOperandValue(dummy230, dummy230_init, sizeof(float) * 1);
  static int32_t param230_init[] = {0};
  model->setOperandValue(param230, param230_init, sizeof(int32_t) * 1);
  static float dummy231_init[] = {0.0f};
  model->setOperandValue(dummy231, dummy231_init, sizeof(float) * 1);
  static int32_t param231_init[] = {0};
  model->setOperandValue(param231, param231_init, sizeof(int32_t) * 1);
  static float dummy232_init[] = {0.0f};
  model->setOperandValue(dummy232, dummy232_init, sizeof(float) * 1);
  static int32_t param232_init[] = {0};
  model->setOperandValue(param232, param232_init, sizeof(int32_t) * 1);
  static float dummy233_init[] = {0.0f};
  model->setOperandValue(dummy233, dummy233_init, sizeof(float) * 1);
  static int32_t param233_init[] = {0};
  model->setOperandValue(param233, param233_init, sizeof(int32_t) * 1);
  static float dummy234_init[] = {0.0f};
  model->setOperandValue(dummy234, dummy234_init, sizeof(float) * 1);
  static int32_t param234_init[] = {0};
  model->setOperandValue(param234, param234_init, sizeof(int32_t) * 1);
  static float dummy235_init[] = {0.0f};
  model->setOperandValue(dummy235, dummy235_init, sizeof(float) * 1);
  static int32_t param235_init[] = {0};
  model->setOperandValue(param235, param235_init, sizeof(int32_t) * 1);
  static float dummy236_init[] = {0.0f};
  model->setOperandValue(dummy236, dummy236_init, sizeof(float) * 1);
  static int32_t param236_init[] = {0};
  model->setOperandValue(param236, param236_init, sizeof(int32_t) * 1);
  static float dummy237_init[] = {0.0f};
  model->setOperandValue(dummy237, dummy237_init, sizeof(float) * 1);
  static int32_t param237_init[] = {0};
  model->setOperandValue(param237, param237_init, sizeof(int32_t) * 1);
  static float dummy238_init[] = {0.0f};
  model->setOperandValue(dummy238, dummy238_init, sizeof(float) * 1);
  static int32_t param238_init[] = {0};
  model->setOperandValue(param238, param238_init, sizeof(int32_t) * 1);
  static float dummy239_init[] = {0.0f};
  model->setOperandValue(dummy239, dummy239_init, sizeof(float) * 1);
  static int32_t param239_init[] = {0};
  model->setOperandValue(param239, param239_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input4_tmp, dummy228, param228}, {input4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights4_tmp, dummy229, param229}, {fw_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights4_tmp, dummy230, param230}, {fw_recurrent_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias4_tmp, dummy231, param231}, {fw_bias4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state4_tmp, dummy232, param232}, {fw_hidden_state4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights4_tmp, dummy233, param233}, {bw_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights4_tmp, dummy234, param234}, {bw_recurrent_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias4_tmp, dummy235, param235}, {bw_bias4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state4_tmp, dummy236, param236}, {bw_hidden_state4});
  model->addOperation(ANEURALNETWORKS_ADD, {aux_input4_tmp, dummy237, param237}, {aux_input4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_aux_weights4_tmp, dummy238, param238}, {fw_aux_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_aux_weights4_tmp, dummy239, param239}, {bw_aux_weights4});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input4, fw_weights4, fw_recurrent_weights4, fw_bias4, fw_hidden_state4, bw_weights4, bw_recurrent_weights4, bw_bias4, bw_hidden_state4, aux_input4, fw_aux_weights4, bw_aux_weights4, activation4, time_major4, merge_outputs4}, {fw_output4, bw_output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4_tmp, fw_weights4_tmp, fw_recurrent_weights4_tmp, fw_bias4_tmp, fw_hidden_state4_tmp, bw_weights4_tmp, bw_recurrent_weights4_tmp, bw_bias4_tmp, bw_hidden_state4_tmp, aux_input4_tmp, fw_aux_weights4_tmp, bw_aux_weights4_tmp},
    {fw_output4, bw_output3});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_5(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 16, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input4 = model->addOperand(&type0);
  auto fw_weights4 = model->addOperand(&type1);
  auto fw_recurrent_weights4 = model->addOperand(&type2);
  auto fw_bias4 = model->addOperand(&type3);
  auto fw_hidden_state4 = model->addOperand(&type4);
  auto bw_weights4 = model->addOperand(&type1);
  auto bw_recurrent_weights4 = model->addOperand(&type2);
  auto bw_bias4 = model->addOperand(&type3);
  auto bw_hidden_state4 = model->addOperand(&type4);
  auto aux_input4 = model->addOperand(&type0);
  auto fw_aux_weights4 = model->addOperand(&type1);
  auto bw_aux_weights4 = model->addOperand(&type1);
  auto activation4 = model->addOperand(&type7);
  auto time_major4 = model->addOperand(&type8);
  auto merge_outputs4 = model->addOperand(&type8);
  auto fw_output4 = model->addOperand(&type6);
  auto bw_output3 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation4_init[] = {1};
  model->setOperandValue(activation4, activation4_init, sizeof(int32_t) * 1);
  static bool8 time_major4_init[] = {false};
  model->setOperandValue(time_major4, time_major4_init, sizeof(bool8) * 1);
  static bool8 merge_outputs4_init[] = {false};
  model->setOperandValue(merge_outputs4, merge_outputs4_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input4, fw_weights4, fw_recurrent_weights4, fw_bias4, fw_hidden_state4, bw_weights4, bw_recurrent_weights4, bw_bias4, bw_hidden_state4, aux_input4, fw_aux_weights4, bw_aux_weights4, activation4, time_major4, merge_outputs4}, {fw_output4, bw_output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4, fw_weights4, fw_recurrent_weights4, fw_bias4, fw_hidden_state4, bw_weights4, bw_recurrent_weights4, bw_bias4, bw_hidden_state4, aux_input4, fw_aux_weights4, bw_aux_weights4},
    {fw_output4, bw_output3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input4 = model->addOperand(&type0);
  auto fw_weights4 = model->addOperand(&type1);
  auto fw_recurrent_weights4 = model->addOperand(&type2);
  auto fw_bias4 = model->addOperand(&type3);
  auto fw_hidden_state4 = model->addOperand(&type4);
  auto bw_weights4 = model->addOperand(&type1);
  auto bw_recurrent_weights4 = model->addOperand(&type2);
  auto bw_bias4 = model->addOperand(&type3);
  auto bw_hidden_state4 = model->addOperand(&type4);
  auto aux_input4 = model->addOperand(&type0);
  auto fw_aux_weights4 = model->addOperand(&type1);
  auto bw_aux_weights4 = model->addOperand(&type1);
  auto activation4 = model->addOperand(&type7);
  auto time_major4 = model->addOperand(&type8);
  auto merge_outputs4 = model->addOperand(&type8);
  auto fw_output4 = model->addOperand(&type14);
  auto bw_output3 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t activation4_init[] = {1};
  model->setOperandValue(activation4, activation4_init, sizeof(int32_t) * 1);
  static bool8 time_major4_init[] = {false};
  model->setOperandValue(time_major4, time_major4_init, sizeof(bool8) * 1);
  static bool8 merge_outputs4_init[] = {false};
  model->setOperandValue(merge_outputs4, merge_outputs4_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input4, fw_weights4, fw_recurrent_weights4, fw_bias4, fw_hidden_state4, bw_weights4, bw_recurrent_weights4, bw_bias4, bw_hidden_state4, aux_input4, fw_aux_weights4, bw_aux_weights4, activation4, time_major4, merge_outputs4}, {fw_output4, bw_output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4, fw_weights4, fw_recurrent_weights4, fw_bias4, fw_hidden_state4, bw_weights4, bw_recurrent_weights4, bw_bias4, bw_hidden_state4, aux_input4, fw_aux_weights4, bw_aux_weights4},
    {fw_output4, bw_output3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 16, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input4 = model->addOperand(&type0);
  auto fw_weights4 = model->addOperand(&type1);
  auto fw_recurrent_weights4 = model->addOperand(&type2);
  auto fw_bias4 = model->addOperand(&type3);
  auto fw_hidden_state4 = model->addOperand(&type4);
  auto bw_weights4 = model->addOperand(&type1);
  auto bw_recurrent_weights4 = model->addOperand(&type2);
  auto bw_bias4 = model->addOperand(&type3);
  auto bw_hidden_state4 = model->addOperand(&type4);
  auto aux_input4 = model->addOperand(&type0);
  auto fw_aux_weights4 = model->addOperand(&type1);
  auto bw_aux_weights4 = model->addOperand(&type1);
  auto activation4 = model->addOperand(&type7);
  auto time_major4 = model->addOperand(&type8);
  auto merge_outputs4 = model->addOperand(&type8);
  auto fw_output4 = model->addOperand(&type6);
  auto bw_output3 = model->addOperand(&type6);
  auto input4_tmp = model->addOperand(&type0);
  auto dummy240 = model->addOperand(&type15);
  auto param240 = model->addOperand(&type7);
  auto fw_weights4_tmp = model->addOperand(&type1);
  auto dummy241 = model->addOperand(&type15);
  auto param241 = model->addOperand(&type7);
  auto fw_recurrent_weights4_tmp = model->addOperand(&type2);
  auto dummy242 = model->addOperand(&type15);
  auto param242 = model->addOperand(&type7);
  auto fw_bias4_tmp = model->addOperand(&type3);
  auto dummy243 = model->addOperand(&type15);
  auto param243 = model->addOperand(&type7);
  auto fw_hidden_state4_tmp = model->addOperand(&type4);
  auto dummy244 = model->addOperand(&type15);
  auto param244 = model->addOperand(&type7);
  auto bw_weights4_tmp = model->addOperand(&type1);
  auto dummy245 = model->addOperand(&type15);
  auto param245 = model->addOperand(&type7);
  auto bw_recurrent_weights4_tmp = model->addOperand(&type2);
  auto dummy246 = model->addOperand(&type15);
  auto param246 = model->addOperand(&type7);
  auto bw_bias4_tmp = model->addOperand(&type3);
  auto dummy247 = model->addOperand(&type15);
  auto param247 = model->addOperand(&type7);
  auto bw_hidden_state4_tmp = model->addOperand(&type4);
  auto dummy248 = model->addOperand(&type15);
  auto param248 = model->addOperand(&type7);
  auto aux_input4_tmp = model->addOperand(&type0);
  auto dummy249 = model->addOperand(&type15);
  auto param249 = model->addOperand(&type7);
  auto fw_aux_weights4_tmp = model->addOperand(&type1);
  auto dummy250 = model->addOperand(&type15);
  auto param250 = model->addOperand(&type7);
  auto bw_aux_weights4_tmp = model->addOperand(&type1);
  auto dummy251 = model->addOperand(&type15);
  auto param251 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation4_init[] = {1};
  model->setOperandValue(activation4, activation4_init, sizeof(int32_t) * 1);
  static bool8 time_major4_init[] = {false};
  model->setOperandValue(time_major4, time_major4_init, sizeof(bool8) * 1);
  static bool8 merge_outputs4_init[] = {false};
  model->setOperandValue(merge_outputs4, merge_outputs4_init, sizeof(bool8) * 1);
  static float dummy240_init[] = {0.0f};
  model->setOperandValue(dummy240, dummy240_init, sizeof(float) * 1);
  static int32_t param240_init[] = {0};
  model->setOperandValue(param240, param240_init, sizeof(int32_t) * 1);
  static float dummy241_init[] = {0.0f};
  model->setOperandValue(dummy241, dummy241_init, sizeof(float) * 1);
  static int32_t param241_init[] = {0};
  model->setOperandValue(param241, param241_init, sizeof(int32_t) * 1);
  static float dummy242_init[] = {0.0f};
  model->setOperandValue(dummy242, dummy242_init, sizeof(float) * 1);
  static int32_t param242_init[] = {0};
  model->setOperandValue(param242, param242_init, sizeof(int32_t) * 1);
  static float dummy243_init[] = {0.0f};
  model->setOperandValue(dummy243, dummy243_init, sizeof(float) * 1);
  static int32_t param243_init[] = {0};
  model->setOperandValue(param243, param243_init, sizeof(int32_t) * 1);
  static float dummy244_init[] = {0.0f};
  model->setOperandValue(dummy244, dummy244_init, sizeof(float) * 1);
  static int32_t param244_init[] = {0};
  model->setOperandValue(param244, param244_init, sizeof(int32_t) * 1);
  static float dummy245_init[] = {0.0f};
  model->setOperandValue(dummy245, dummy245_init, sizeof(float) * 1);
  static int32_t param245_init[] = {0};
  model->setOperandValue(param245, param245_init, sizeof(int32_t) * 1);
  static float dummy246_init[] = {0.0f};
  model->setOperandValue(dummy246, dummy246_init, sizeof(float) * 1);
  static int32_t param246_init[] = {0};
  model->setOperandValue(param246, param246_init, sizeof(int32_t) * 1);
  static float dummy247_init[] = {0.0f};
  model->setOperandValue(dummy247, dummy247_init, sizeof(float) * 1);
  static int32_t param247_init[] = {0};
  model->setOperandValue(param247, param247_init, sizeof(int32_t) * 1);
  static float dummy248_init[] = {0.0f};
  model->setOperandValue(dummy248, dummy248_init, sizeof(float) * 1);
  static int32_t param248_init[] = {0};
  model->setOperandValue(param248, param248_init, sizeof(int32_t) * 1);
  static float dummy249_init[] = {0.0f};
  model->setOperandValue(dummy249, dummy249_init, sizeof(float) * 1);
  static int32_t param249_init[] = {0};
  model->setOperandValue(param249, param249_init, sizeof(int32_t) * 1);
  static float dummy250_init[] = {0.0f};
  model->setOperandValue(dummy250, dummy250_init, sizeof(float) * 1);
  static int32_t param250_init[] = {0};
  model->setOperandValue(param250, param250_init, sizeof(int32_t) * 1);
  static float dummy251_init[] = {0.0f};
  model->setOperandValue(dummy251, dummy251_init, sizeof(float) * 1);
  static int32_t param251_init[] = {0};
  model->setOperandValue(param251, param251_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input4_tmp, dummy240, param240}, {input4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights4_tmp, dummy241, param241}, {fw_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights4_tmp, dummy242, param242}, {fw_recurrent_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias4_tmp, dummy243, param243}, {fw_bias4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state4_tmp, dummy244, param244}, {fw_hidden_state4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights4_tmp, dummy245, param245}, {bw_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights4_tmp, dummy246, param246}, {bw_recurrent_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias4_tmp, dummy247, param247}, {bw_bias4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state4_tmp, dummy248, param248}, {bw_hidden_state4});
  model->addOperation(ANEURALNETWORKS_ADD, {aux_input4_tmp, dummy249, param249}, {aux_input4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_aux_weights4_tmp, dummy250, param250}, {fw_aux_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_aux_weights4_tmp, dummy251, param251}, {bw_aux_weights4});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input4, fw_weights4, fw_recurrent_weights4, fw_bias4, fw_hidden_state4, bw_weights4, bw_recurrent_weights4, bw_bias4, bw_hidden_state4, aux_input4, fw_aux_weights4, bw_aux_weights4, activation4, time_major4, merge_outputs4}, {fw_output4, bw_output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4_tmp, fw_weights4_tmp, fw_recurrent_weights4_tmp, fw_bias4_tmp, fw_hidden_state4_tmp, bw_weights4_tmp, bw_recurrent_weights4_tmp, bw_bias4_tmp, bw_hidden_state4_tmp, aux_input4_tmp, fw_aux_weights4_tmp, bw_aux_weights4_tmp},
    {fw_output4, bw_output3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 16, 8});
  OperandType type1(Type::TENSOR_FLOAT32, {16, 8});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input4 = model->addOperand(&type0);
  auto fw_weights4 = model->addOperand(&type1);
  auto fw_recurrent_weights4 = model->addOperand(&type2);
  auto fw_bias4 = model->addOperand(&type3);
  auto fw_hidden_state4 = model->addOperand(&type4);
  auto bw_weights4 = model->addOperand(&type1);
  auto bw_recurrent_weights4 = model->addOperand(&type2);
  auto bw_bias4 = model->addOperand(&type3);
  auto bw_hidden_state4 = model->addOperand(&type4);
  auto aux_input4 = model->addOperand(&type0);
  auto fw_aux_weights4 = model->addOperand(&type1);
  auto bw_aux_weights4 = model->addOperand(&type1);
  auto activation4 = model->addOperand(&type7);
  auto time_major4 = model->addOperand(&type8);
  auto merge_outputs4 = model->addOperand(&type8);
  auto fw_output4 = model->addOperand(&type14);
  auto bw_output3 = model->addOperand(&type14);
  auto input4_tmp = model->addOperand(&type0);
  auto dummy252 = model->addOperand(&type15);
  auto param252 = model->addOperand(&type7);
  auto fw_weights4_tmp = model->addOperand(&type1);
  auto dummy253 = model->addOperand(&type15);
  auto param253 = model->addOperand(&type7);
  auto fw_recurrent_weights4_tmp = model->addOperand(&type2);
  auto dummy254 = model->addOperand(&type15);
  auto param254 = model->addOperand(&type7);
  auto fw_bias4_tmp = model->addOperand(&type3);
  auto dummy255 = model->addOperand(&type15);
  auto param255 = model->addOperand(&type7);
  auto fw_hidden_state4_tmp = model->addOperand(&type4);
  auto dummy256 = model->addOperand(&type15);
  auto param256 = model->addOperand(&type7);
  auto bw_weights4_tmp = model->addOperand(&type1);
  auto dummy257 = model->addOperand(&type15);
  auto param257 = model->addOperand(&type7);
  auto bw_recurrent_weights4_tmp = model->addOperand(&type2);
  auto dummy258 = model->addOperand(&type15);
  auto param258 = model->addOperand(&type7);
  auto bw_bias4_tmp = model->addOperand(&type3);
  auto dummy259 = model->addOperand(&type15);
  auto param259 = model->addOperand(&type7);
  auto bw_hidden_state4_tmp = model->addOperand(&type4);
  auto dummy260 = model->addOperand(&type15);
  auto param260 = model->addOperand(&type7);
  auto aux_input4_tmp = model->addOperand(&type0);
  auto dummy261 = model->addOperand(&type15);
  auto param261 = model->addOperand(&type7);
  auto fw_aux_weights4_tmp = model->addOperand(&type1);
  auto dummy262 = model->addOperand(&type15);
  auto param262 = model->addOperand(&type7);
  auto bw_aux_weights4_tmp = model->addOperand(&type1);
  auto dummy263 = model->addOperand(&type15);
  auto param263 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation4_init[] = {1};
  model->setOperandValue(activation4, activation4_init, sizeof(int32_t) * 1);
  static bool8 time_major4_init[] = {false};
  model->setOperandValue(time_major4, time_major4_init, sizeof(bool8) * 1);
  static bool8 merge_outputs4_init[] = {false};
  model->setOperandValue(merge_outputs4, merge_outputs4_init, sizeof(bool8) * 1);
  static float dummy252_init[] = {0.0f};
  model->setOperandValue(dummy252, dummy252_init, sizeof(float) * 1);
  static int32_t param252_init[] = {0};
  model->setOperandValue(param252, param252_init, sizeof(int32_t) * 1);
  static float dummy253_init[] = {0.0f};
  model->setOperandValue(dummy253, dummy253_init, sizeof(float) * 1);
  static int32_t param253_init[] = {0};
  model->setOperandValue(param253, param253_init, sizeof(int32_t) * 1);
  static float dummy254_init[] = {0.0f};
  model->setOperandValue(dummy254, dummy254_init, sizeof(float) * 1);
  static int32_t param254_init[] = {0};
  model->setOperandValue(param254, param254_init, sizeof(int32_t) * 1);
  static float dummy255_init[] = {0.0f};
  model->setOperandValue(dummy255, dummy255_init, sizeof(float) * 1);
  static int32_t param255_init[] = {0};
  model->setOperandValue(param255, param255_init, sizeof(int32_t) * 1);
  static float dummy256_init[] = {0.0f};
  model->setOperandValue(dummy256, dummy256_init, sizeof(float) * 1);
  static int32_t param256_init[] = {0};
  model->setOperandValue(param256, param256_init, sizeof(int32_t) * 1);
  static float dummy257_init[] = {0.0f};
  model->setOperandValue(dummy257, dummy257_init, sizeof(float) * 1);
  static int32_t param257_init[] = {0};
  model->setOperandValue(param257, param257_init, sizeof(int32_t) * 1);
  static float dummy258_init[] = {0.0f};
  model->setOperandValue(dummy258, dummy258_init, sizeof(float) * 1);
  static int32_t param258_init[] = {0};
  model->setOperandValue(param258, param258_init, sizeof(int32_t) * 1);
  static float dummy259_init[] = {0.0f};
  model->setOperandValue(dummy259, dummy259_init, sizeof(float) * 1);
  static int32_t param259_init[] = {0};
  model->setOperandValue(param259, param259_init, sizeof(int32_t) * 1);
  static float dummy260_init[] = {0.0f};
  model->setOperandValue(dummy260, dummy260_init, sizeof(float) * 1);
  static int32_t param260_init[] = {0};
  model->setOperandValue(param260, param260_init, sizeof(int32_t) * 1);
  static float dummy261_init[] = {0.0f};
  model->setOperandValue(dummy261, dummy261_init, sizeof(float) * 1);
  static int32_t param261_init[] = {0};
  model->setOperandValue(param261, param261_init, sizeof(int32_t) * 1);
  static float dummy262_init[] = {0.0f};
  model->setOperandValue(dummy262, dummy262_init, sizeof(float) * 1);
  static int32_t param262_init[] = {0};
  model->setOperandValue(param262, param262_init, sizeof(int32_t) * 1);
  static float dummy263_init[] = {0.0f};
  model->setOperandValue(dummy263, dummy263_init, sizeof(float) * 1);
  static int32_t param263_init[] = {0};
  model->setOperandValue(param263, param263_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input4_tmp, dummy252, param252}, {input4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights4_tmp, dummy253, param253}, {fw_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights4_tmp, dummy254, param254}, {fw_recurrent_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias4_tmp, dummy255, param255}, {fw_bias4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state4_tmp, dummy256, param256}, {fw_hidden_state4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights4_tmp, dummy257, param257}, {bw_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights4_tmp, dummy258, param258}, {bw_recurrent_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias4_tmp, dummy259, param259}, {bw_bias4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state4_tmp, dummy260, param260}, {bw_hidden_state4});
  model->addOperation(ANEURALNETWORKS_ADD, {aux_input4_tmp, dummy261, param261}, {aux_input4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_aux_weights4_tmp, dummy262, param262}, {fw_aux_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_aux_weights4_tmp, dummy263, param263}, {bw_aux_weights4});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input4, fw_weights4, fw_recurrent_weights4, fw_bias4, fw_hidden_state4, bw_weights4, bw_recurrent_weights4, bw_bias4, bw_hidden_state4, aux_input4, fw_aux_weights4, bw_aux_weights4, activation4, time_major4, merge_outputs4}, {fw_output4, bw_output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4_tmp, fw_weights4_tmp, fw_recurrent_weights4_tmp, fw_bias4_tmp, fw_hidden_state4_tmp, bw_weights4_tmp, bw_recurrent_weights4_tmp, bw_bias4_tmp, bw_hidden_state4_tmp, aux_input4_tmp, fw_aux_weights4_tmp, bw_aux_weights4_tmp},
    {fw_output4, bw_output3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_5(Model *model) {
  OperandType type17(Type::TENSOR_FLOAT16, {16});
  OperandType type18(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type19(Type::TENSOR_FLOAT16, {2, 16, 16});
  OperandType type20(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type21(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type22(Type::TENSOR_FLOAT16, {2, 16, 8});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input4 = model->addOperand(&type22);
  auto fw_weights4 = model->addOperand(&type21);
  auto fw_recurrent_weights4 = model->addOperand(&type20);
  auto fw_bias4 = model->addOperand(&type17);
  auto fw_hidden_state4 = model->addOperand(&type18);
  auto bw_weights4 = model->addOperand(&type21);
  auto bw_recurrent_weights4 = model->addOperand(&type20);
  auto bw_bias4 = model->addOperand(&type17);
  auto bw_hidden_state4 = model->addOperand(&type18);
  auto aux_input4 = model->addOperand(&type22);
  auto fw_aux_weights4 = model->addOperand(&type21);
  auto bw_aux_weights4 = model->addOperand(&type21);
  auto activation4 = model->addOperand(&type7);
  auto time_major4 = model->addOperand(&type8);
  auto merge_outputs4 = model->addOperand(&type8);
  auto fw_output4 = model->addOperand(&type19);
  auto bw_output3 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t activation4_init[] = {1};
  model->setOperandValue(activation4, activation4_init, sizeof(int32_t) * 1);
  static bool8 time_major4_init[] = {false};
  model->setOperandValue(time_major4, time_major4_init, sizeof(bool8) * 1);
  static bool8 merge_outputs4_init[] = {false};
  model->setOperandValue(merge_outputs4, merge_outputs4_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input4, fw_weights4, fw_recurrent_weights4, fw_bias4, fw_hidden_state4, bw_weights4, bw_recurrent_weights4, bw_bias4, bw_hidden_state4, aux_input4, fw_aux_weights4, bw_aux_weights4, activation4, time_major4, merge_outputs4}, {fw_output4, bw_output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4, fw_weights4, fw_recurrent_weights4, fw_bias4, fw_hidden_state4, bw_weights4, bw_recurrent_weights4, bw_bias4, bw_hidden_state4, aux_input4, fw_aux_weights4, bw_aux_weights4},
    {fw_output4, bw_output3});
  assert(model->isValid());
}

bool is_ignored_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_dynamic_output_shape_5(Model *model) {
  OperandType type17(Type::TENSOR_FLOAT16, {16});
  OperandType type18(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type20(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type21(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type22(Type::TENSOR_FLOAT16, {2, 16, 8});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input4 = model->addOperand(&type22);
  auto fw_weights4 = model->addOperand(&type21);
  auto fw_recurrent_weights4 = model->addOperand(&type20);
  auto fw_bias4 = model->addOperand(&type17);
  auto fw_hidden_state4 = model->addOperand(&type18);
  auto bw_weights4 = model->addOperand(&type21);
  auto bw_recurrent_weights4 = model->addOperand(&type20);
  auto bw_bias4 = model->addOperand(&type17);
  auto bw_hidden_state4 = model->addOperand(&type18);
  auto aux_input4 = model->addOperand(&type22);
  auto fw_aux_weights4 = model->addOperand(&type21);
  auto bw_aux_weights4 = model->addOperand(&type21);
  auto activation4 = model->addOperand(&type7);
  auto time_major4 = model->addOperand(&type8);
  auto merge_outputs4 = model->addOperand(&type8);
  auto fw_output4 = model->addOperand(&type23);
  auto bw_output3 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t activation4_init[] = {1};
  model->setOperandValue(activation4, activation4_init, sizeof(int32_t) * 1);
  static bool8 time_major4_init[] = {false};
  model->setOperandValue(time_major4, time_major4_init, sizeof(bool8) * 1);
  static bool8 merge_outputs4_init[] = {false};
  model->setOperandValue(merge_outputs4, merge_outputs4_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input4, fw_weights4, fw_recurrent_weights4, fw_bias4, fw_hidden_state4, bw_weights4, bw_recurrent_weights4, bw_bias4, bw_hidden_state4, aux_input4, fw_aux_weights4, bw_aux_weights4, activation4, time_major4, merge_outputs4}, {fw_output4, bw_output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4, fw_weights4, fw_recurrent_weights4, fw_bias4, fw_hidden_state4, bw_weights4, bw_recurrent_weights4, bw_bias4, bw_hidden_state4, aux_input4, fw_aux_weights4, bw_aux_weights4},
    {fw_output4, bw_output3});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_all_inputs_as_internal_5(Model *model) {
  OperandType type19(Type::TENSOR_FLOAT16, {2, 16, 16});
  OperandType type24(Type::TENSOR_FLOAT16, {2, 16, 8});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type27(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type28(Type::TENSOR_FLOAT16, {16});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input4 = model->addOperand(&type24);
  auto fw_weights4 = model->addOperand(&type26);
  auto fw_recurrent_weights4 = model->addOperand(&type27);
  auto fw_bias4 = model->addOperand(&type28);
  auto fw_hidden_state4 = model->addOperand(&type29);
  auto bw_weights4 = model->addOperand(&type26);
  auto bw_recurrent_weights4 = model->addOperand(&type27);
  auto bw_bias4 = model->addOperand(&type28);
  auto bw_hidden_state4 = model->addOperand(&type29);
  auto aux_input4 = model->addOperand(&type24);
  auto fw_aux_weights4 = model->addOperand(&type26);
  auto bw_aux_weights4 = model->addOperand(&type26);
  auto activation4 = model->addOperand(&type7);
  auto time_major4 = model->addOperand(&type8);
  auto merge_outputs4 = model->addOperand(&type8);
  auto fw_output4 = model->addOperand(&type19);
  auto bw_output3 = model->addOperand(&type19);
  auto input4_tmp = model->addOperand(&type24);
  auto dummy264 = model->addOperand(&type25);
  auto param264 = model->addOperand(&type7);
  auto fw_weights4_tmp = model->addOperand(&type26);
  auto dummy265 = model->addOperand(&type25);
  auto param265 = model->addOperand(&type7);
  auto fw_recurrent_weights4_tmp = model->addOperand(&type27);
  auto dummy266 = model->addOperand(&type25);
  auto param266 = model->addOperand(&type7);
  auto fw_bias4_tmp = model->addOperand(&type28);
  auto dummy267 = model->addOperand(&type25);
  auto param267 = model->addOperand(&type7);
  auto fw_hidden_state4_tmp = model->addOperand(&type29);
  auto dummy268 = model->addOperand(&type25);
  auto param268 = model->addOperand(&type7);
  auto bw_weights4_tmp = model->addOperand(&type26);
  auto dummy269 = model->addOperand(&type25);
  auto param269 = model->addOperand(&type7);
  auto bw_recurrent_weights4_tmp = model->addOperand(&type27);
  auto dummy270 = model->addOperand(&type25);
  auto param270 = model->addOperand(&type7);
  auto bw_bias4_tmp = model->addOperand(&type28);
  auto dummy271 = model->addOperand(&type25);
  auto param271 = model->addOperand(&type7);
  auto bw_hidden_state4_tmp = model->addOperand(&type29);
  auto dummy272 = model->addOperand(&type25);
  auto param272 = model->addOperand(&type7);
  auto aux_input4_tmp = model->addOperand(&type24);
  auto dummy273 = model->addOperand(&type25);
  auto param273 = model->addOperand(&type7);
  auto fw_aux_weights4_tmp = model->addOperand(&type26);
  auto dummy274 = model->addOperand(&type25);
  auto param274 = model->addOperand(&type7);
  auto bw_aux_weights4_tmp = model->addOperand(&type26);
  auto dummy275 = model->addOperand(&type25);
  auto param275 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation4_init[] = {1};
  model->setOperandValue(activation4, activation4_init, sizeof(int32_t) * 1);
  static bool8 time_major4_init[] = {false};
  model->setOperandValue(time_major4, time_major4_init, sizeof(bool8) * 1);
  static bool8 merge_outputs4_init[] = {false};
  model->setOperandValue(merge_outputs4, merge_outputs4_init, sizeof(bool8) * 1);
  static _Float16 dummy264_init[] = {0.0f};
  model->setOperandValue(dummy264, dummy264_init, sizeof(_Float16) * 1);
  static int32_t param264_init[] = {0};
  model->setOperandValue(param264, param264_init, sizeof(int32_t) * 1);
  static _Float16 dummy265_init[] = {0.0f};
  model->setOperandValue(dummy265, dummy265_init, sizeof(_Float16) * 1);
  static int32_t param265_init[] = {0};
  model->setOperandValue(param265, param265_init, sizeof(int32_t) * 1);
  static _Float16 dummy266_init[] = {0.0f};
  model->setOperandValue(dummy266, dummy266_init, sizeof(_Float16) * 1);
  static int32_t param266_init[] = {0};
  model->setOperandValue(param266, param266_init, sizeof(int32_t) * 1);
  static _Float16 dummy267_init[] = {0.0f};
  model->setOperandValue(dummy267, dummy267_init, sizeof(_Float16) * 1);
  static int32_t param267_init[] = {0};
  model->setOperandValue(param267, param267_init, sizeof(int32_t) * 1);
  static _Float16 dummy268_init[] = {0.0f};
  model->setOperandValue(dummy268, dummy268_init, sizeof(_Float16) * 1);
  static int32_t param268_init[] = {0};
  model->setOperandValue(param268, param268_init, sizeof(int32_t) * 1);
  static _Float16 dummy269_init[] = {0.0f};
  model->setOperandValue(dummy269, dummy269_init, sizeof(_Float16) * 1);
  static int32_t param269_init[] = {0};
  model->setOperandValue(param269, param269_init, sizeof(int32_t) * 1);
  static _Float16 dummy270_init[] = {0.0f};
  model->setOperandValue(dummy270, dummy270_init, sizeof(_Float16) * 1);
  static int32_t param270_init[] = {0};
  model->setOperandValue(param270, param270_init, sizeof(int32_t) * 1);
  static _Float16 dummy271_init[] = {0.0f};
  model->setOperandValue(dummy271, dummy271_init, sizeof(_Float16) * 1);
  static int32_t param271_init[] = {0};
  model->setOperandValue(param271, param271_init, sizeof(int32_t) * 1);
  static _Float16 dummy272_init[] = {0.0f};
  model->setOperandValue(dummy272, dummy272_init, sizeof(_Float16) * 1);
  static int32_t param272_init[] = {0};
  model->setOperandValue(param272, param272_init, sizeof(int32_t) * 1);
  static _Float16 dummy273_init[] = {0.0f};
  model->setOperandValue(dummy273, dummy273_init, sizeof(_Float16) * 1);
  static int32_t param273_init[] = {0};
  model->setOperandValue(param273, param273_init, sizeof(int32_t) * 1);
  static _Float16 dummy274_init[] = {0.0f};
  model->setOperandValue(dummy274, dummy274_init, sizeof(_Float16) * 1);
  static int32_t param274_init[] = {0};
  model->setOperandValue(param274, param274_init, sizeof(int32_t) * 1);
  static _Float16 dummy275_init[] = {0.0f};
  model->setOperandValue(dummy275, dummy275_init, sizeof(_Float16) * 1);
  static int32_t param275_init[] = {0};
  model->setOperandValue(param275, param275_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input4_tmp, dummy264, param264}, {input4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights4_tmp, dummy265, param265}, {fw_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights4_tmp, dummy266, param266}, {fw_recurrent_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias4_tmp, dummy267, param267}, {fw_bias4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state4_tmp, dummy268, param268}, {fw_hidden_state4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights4_tmp, dummy269, param269}, {bw_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights4_tmp, dummy270, param270}, {bw_recurrent_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias4_tmp, dummy271, param271}, {bw_bias4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state4_tmp, dummy272, param272}, {bw_hidden_state4});
  model->addOperation(ANEURALNETWORKS_ADD, {aux_input4_tmp, dummy273, param273}, {aux_input4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_aux_weights4_tmp, dummy274, param274}, {fw_aux_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_aux_weights4_tmp, dummy275, param275}, {bw_aux_weights4});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input4, fw_weights4, fw_recurrent_weights4, fw_bias4, fw_hidden_state4, bw_weights4, bw_recurrent_weights4, bw_bias4, bw_hidden_state4, aux_input4, fw_aux_weights4, bw_aux_weights4, activation4, time_major4, merge_outputs4}, {fw_output4, bw_output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4_tmp, fw_weights4_tmp, fw_recurrent_weights4_tmp, fw_bias4_tmp, fw_hidden_state4_tmp, bw_weights4_tmp, bw_recurrent_weights4_tmp, bw_bias4_tmp, bw_hidden_state4_tmp, aux_input4_tmp, fw_aux_weights4_tmp, bw_aux_weights4_tmp},
    {fw_output4, bw_output3});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type24(Type::TENSOR_FLOAT16, {2, 16, 8});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {16, 8});
  OperandType type27(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type28(Type::TENSOR_FLOAT16, {16});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input4 = model->addOperand(&type24);
  auto fw_weights4 = model->addOperand(&type26);
  auto fw_recurrent_weights4 = model->addOperand(&type27);
  auto fw_bias4 = model->addOperand(&type28);
  auto fw_hidden_state4 = model->addOperand(&type29);
  auto bw_weights4 = model->addOperand(&type26);
  auto bw_recurrent_weights4 = model->addOperand(&type27);
  auto bw_bias4 = model->addOperand(&type28);
  auto bw_hidden_state4 = model->addOperand(&type29);
  auto aux_input4 = model->addOperand(&type24);
  auto fw_aux_weights4 = model->addOperand(&type26);
  auto bw_aux_weights4 = model->addOperand(&type26);
  auto activation4 = model->addOperand(&type7);
  auto time_major4 = model->addOperand(&type8);
  auto merge_outputs4 = model->addOperand(&type8);
  auto fw_output4 = model->addOperand(&type23);
  auto bw_output3 = model->addOperand(&type23);
  auto input4_tmp = model->addOperand(&type24);
  auto dummy276 = model->addOperand(&type25);
  auto param276 = model->addOperand(&type7);
  auto fw_weights4_tmp = model->addOperand(&type26);
  auto dummy277 = model->addOperand(&type25);
  auto param277 = model->addOperand(&type7);
  auto fw_recurrent_weights4_tmp = model->addOperand(&type27);
  auto dummy278 = model->addOperand(&type25);
  auto param278 = model->addOperand(&type7);
  auto fw_bias4_tmp = model->addOperand(&type28);
  auto dummy279 = model->addOperand(&type25);
  auto param279 = model->addOperand(&type7);
  auto fw_hidden_state4_tmp = model->addOperand(&type29);
  auto dummy280 = model->addOperand(&type25);
  auto param280 = model->addOperand(&type7);
  auto bw_weights4_tmp = model->addOperand(&type26);
  auto dummy281 = model->addOperand(&type25);
  auto param281 = model->addOperand(&type7);
  auto bw_recurrent_weights4_tmp = model->addOperand(&type27);
  auto dummy282 = model->addOperand(&type25);
  auto param282 = model->addOperand(&type7);
  auto bw_bias4_tmp = model->addOperand(&type28);
  auto dummy283 = model->addOperand(&type25);
  auto param283 = model->addOperand(&type7);
  auto bw_hidden_state4_tmp = model->addOperand(&type29);
  auto dummy284 = model->addOperand(&type25);
  auto param284 = model->addOperand(&type7);
  auto aux_input4_tmp = model->addOperand(&type24);
  auto dummy285 = model->addOperand(&type25);
  auto param285 = model->addOperand(&type7);
  auto fw_aux_weights4_tmp = model->addOperand(&type26);
  auto dummy286 = model->addOperand(&type25);
  auto param286 = model->addOperand(&type7);
  auto bw_aux_weights4_tmp = model->addOperand(&type26);
  auto dummy287 = model->addOperand(&type25);
  auto param287 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation4_init[] = {1};
  model->setOperandValue(activation4, activation4_init, sizeof(int32_t) * 1);
  static bool8 time_major4_init[] = {false};
  model->setOperandValue(time_major4, time_major4_init, sizeof(bool8) * 1);
  static bool8 merge_outputs4_init[] = {false};
  model->setOperandValue(merge_outputs4, merge_outputs4_init, sizeof(bool8) * 1);
  static _Float16 dummy276_init[] = {0.0f};
  model->setOperandValue(dummy276, dummy276_init, sizeof(_Float16) * 1);
  static int32_t param276_init[] = {0};
  model->setOperandValue(param276, param276_init, sizeof(int32_t) * 1);
  static _Float16 dummy277_init[] = {0.0f};
  model->setOperandValue(dummy277, dummy277_init, sizeof(_Float16) * 1);
  static int32_t param277_init[] = {0};
  model->setOperandValue(param277, param277_init, sizeof(int32_t) * 1);
  static _Float16 dummy278_init[] = {0.0f};
  model->setOperandValue(dummy278, dummy278_init, sizeof(_Float16) * 1);
  static int32_t param278_init[] = {0};
  model->setOperandValue(param278, param278_init, sizeof(int32_t) * 1);
  static _Float16 dummy279_init[] = {0.0f};
  model->setOperandValue(dummy279, dummy279_init, sizeof(_Float16) * 1);
  static int32_t param279_init[] = {0};
  model->setOperandValue(param279, param279_init, sizeof(int32_t) * 1);
  static _Float16 dummy280_init[] = {0.0f};
  model->setOperandValue(dummy280, dummy280_init, sizeof(_Float16) * 1);
  static int32_t param280_init[] = {0};
  model->setOperandValue(param280, param280_init, sizeof(int32_t) * 1);
  static _Float16 dummy281_init[] = {0.0f};
  model->setOperandValue(dummy281, dummy281_init, sizeof(_Float16) * 1);
  static int32_t param281_init[] = {0};
  model->setOperandValue(param281, param281_init, sizeof(int32_t) * 1);
  static _Float16 dummy282_init[] = {0.0f};
  model->setOperandValue(dummy282, dummy282_init, sizeof(_Float16) * 1);
  static int32_t param282_init[] = {0};
  model->setOperandValue(param282, param282_init, sizeof(int32_t) * 1);
  static _Float16 dummy283_init[] = {0.0f};
  model->setOperandValue(dummy283, dummy283_init, sizeof(_Float16) * 1);
  static int32_t param283_init[] = {0};
  model->setOperandValue(param283, param283_init, sizeof(int32_t) * 1);
  static _Float16 dummy284_init[] = {0.0f};
  model->setOperandValue(dummy284, dummy284_init, sizeof(_Float16) * 1);
  static int32_t param284_init[] = {0};
  model->setOperandValue(param284, param284_init, sizeof(int32_t) * 1);
  static _Float16 dummy285_init[] = {0.0f};
  model->setOperandValue(dummy285, dummy285_init, sizeof(_Float16) * 1);
  static int32_t param285_init[] = {0};
  model->setOperandValue(param285, param285_init, sizeof(int32_t) * 1);
  static _Float16 dummy286_init[] = {0.0f};
  model->setOperandValue(dummy286, dummy286_init, sizeof(_Float16) * 1);
  static int32_t param286_init[] = {0};
  model->setOperandValue(param286, param286_init, sizeof(int32_t) * 1);
  static _Float16 dummy287_init[] = {0.0f};
  model->setOperandValue(dummy287, dummy287_init, sizeof(_Float16) * 1);
  static int32_t param287_init[] = {0};
  model->setOperandValue(param287, param287_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input4_tmp, dummy276, param276}, {input4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights4_tmp, dummy277, param277}, {fw_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights4_tmp, dummy278, param278}, {fw_recurrent_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias4_tmp, dummy279, param279}, {fw_bias4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state4_tmp, dummy280, param280}, {fw_hidden_state4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights4_tmp, dummy281, param281}, {bw_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights4_tmp, dummy282, param282}, {bw_recurrent_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias4_tmp, dummy283, param283}, {bw_bias4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state4_tmp, dummy284, param284}, {bw_hidden_state4});
  model->addOperation(ANEURALNETWORKS_ADD, {aux_input4_tmp, dummy285, param285}, {aux_input4});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_aux_weights4_tmp, dummy286, param286}, {fw_aux_weights4});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_aux_weights4_tmp, dummy287, param287}, {bw_aux_weights4});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input4, fw_weights4, fw_recurrent_weights4, fw_bias4, fw_hidden_state4, bw_weights4, bw_recurrent_weights4, bw_bias4, bw_hidden_state4, aux_input4, fw_aux_weights4, bw_aux_weights4, activation4, time_major4, merge_outputs4}, {fw_output4, bw_output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4_tmp, fw_weights4_tmp, fw_recurrent_weights4_tmp, fw_bias4_tmp, fw_hidden_state4_tmp, bw_weights4_tmp, bw_recurrent_weights4_tmp, bw_bias4_tmp, bw_hidden_state4_tmp, aux_input4_tmp, fw_aux_weights4_tmp, bw_aux_weights4_tmp},
    {fw_output4, bw_output3});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_6(Model *model) {
  OperandType type12(Type::TENSOR_FLOAT32, {2, 16, 4});
  OperandType type13(Type::TENSOR_FLOAT32, {16, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 16, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input5 = model->addOperand(&type12);
  auto fw_weights5 = model->addOperand(&type13);
  auto fw_recurrent_weights5 = model->addOperand(&type2);
  auto fw_bias5 = model->addOperand(&type3);
  auto fw_hidden_state5 = model->addOperand(&type4);
  auto bw_weights5 = model->addOperand(&type13);
  auto bw_recurrent_weights5 = model->addOperand(&type2);
  auto bw_bias5 = model->addOperand(&type3);
  auto bw_hidden_state5 = model->addOperand(&type4);
  auto aux_input5 = model->addOperand(&type12);
  auto fw_aux_weights5 = model->addOperand(&type13);
  auto bw_aux_weights5 = model->addOperand(&type13);
  auto activation5 = model->addOperand(&type7);
  auto time_major5 = model->addOperand(&type8);
  auto merge_outputs5 = model->addOperand(&type8);
  auto fw_output5 = model->addOperand(&type6);
  auto bw_output4 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation5_init[] = {1};
  model->setOperandValue(activation5, activation5_init, sizeof(int32_t) * 1);
  static bool8 time_major5_init[] = {false};
  model->setOperandValue(time_major5, time_major5_init, sizeof(bool8) * 1);
  static bool8 merge_outputs5_init[] = {false};
  model->setOperandValue(merge_outputs5, merge_outputs5_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input5, fw_weights5, fw_recurrent_weights5, fw_bias5, fw_hidden_state5, bw_weights5, bw_recurrent_weights5, bw_bias5, bw_hidden_state5, aux_input5, fw_aux_weights5, bw_aux_weights5, activation5, time_major5, merge_outputs5}, {fw_output5, bw_output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5, fw_weights5, fw_recurrent_weights5, fw_bias5, fw_hidden_state5, bw_weights5, bw_recurrent_weights5, bw_bias5, bw_hidden_state5, aux_input5, fw_aux_weights5, bw_aux_weights5},
    {fw_output5, bw_output4});
  assert(model->isValid());
}

bool is_ignored_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_dynamic_output_shape_6(Model *model) {
  OperandType type12(Type::TENSOR_FLOAT32, {2, 16, 4});
  OperandType type13(Type::TENSOR_FLOAT32, {16, 4});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input5 = model->addOperand(&type12);
  auto fw_weights5 = model->addOperand(&type13);
  auto fw_recurrent_weights5 = model->addOperand(&type2);
  auto fw_bias5 = model->addOperand(&type3);
  auto fw_hidden_state5 = model->addOperand(&type4);
  auto bw_weights5 = model->addOperand(&type13);
  auto bw_recurrent_weights5 = model->addOperand(&type2);
  auto bw_bias5 = model->addOperand(&type3);
  auto bw_hidden_state5 = model->addOperand(&type4);
  auto aux_input5 = model->addOperand(&type12);
  auto fw_aux_weights5 = model->addOperand(&type13);
  auto bw_aux_weights5 = model->addOperand(&type13);
  auto activation5 = model->addOperand(&type7);
  auto time_major5 = model->addOperand(&type8);
  auto merge_outputs5 = model->addOperand(&type8);
  auto fw_output5 = model->addOperand(&type14);
  auto bw_output4 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t activation5_init[] = {1};
  model->setOperandValue(activation5, activation5_init, sizeof(int32_t) * 1);
  static bool8 time_major5_init[] = {false};
  model->setOperandValue(time_major5, time_major5_init, sizeof(bool8) * 1);
  static bool8 merge_outputs5_init[] = {false};
  model->setOperandValue(merge_outputs5, merge_outputs5_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input5, fw_weights5, fw_recurrent_weights5, fw_bias5, fw_hidden_state5, bw_weights5, bw_recurrent_weights5, bw_bias5, bw_hidden_state5, aux_input5, fw_aux_weights5, bw_aux_weights5, activation5, time_major5, merge_outputs5}, {fw_output5, bw_output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5, fw_weights5, fw_recurrent_weights5, fw_bias5, fw_hidden_state5, bw_weights5, bw_recurrent_weights5, bw_bias5, bw_hidden_state5, aux_input5, fw_aux_weights5, bw_aux_weights5},
    {fw_output5, bw_output4});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_all_inputs_as_internal_6(Model *model) {
  OperandType type12(Type::TENSOR_FLOAT32, {2, 16, 4});
  OperandType type13(Type::TENSOR_FLOAT32, {16, 4});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 16, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input5 = model->addOperand(&type12);
  auto fw_weights5 = model->addOperand(&type13);
  auto fw_recurrent_weights5 = model->addOperand(&type2);
  auto fw_bias5 = model->addOperand(&type3);
  auto fw_hidden_state5 = model->addOperand(&type4);
  auto bw_weights5 = model->addOperand(&type13);
  auto bw_recurrent_weights5 = model->addOperand(&type2);
  auto bw_bias5 = model->addOperand(&type3);
  auto bw_hidden_state5 = model->addOperand(&type4);
  auto aux_input5 = model->addOperand(&type12);
  auto fw_aux_weights5 = model->addOperand(&type13);
  auto bw_aux_weights5 = model->addOperand(&type13);
  auto activation5 = model->addOperand(&type7);
  auto time_major5 = model->addOperand(&type8);
  auto merge_outputs5 = model->addOperand(&type8);
  auto fw_output5 = model->addOperand(&type6);
  auto bw_output4 = model->addOperand(&type6);
  auto input5_tmp = model->addOperand(&type12);
  auto dummy288 = model->addOperand(&type15);
  auto param288 = model->addOperand(&type7);
  auto fw_weights5_tmp = model->addOperand(&type13);
  auto dummy289 = model->addOperand(&type15);
  auto param289 = model->addOperand(&type7);
  auto fw_recurrent_weights5_tmp = model->addOperand(&type2);
  auto dummy290 = model->addOperand(&type15);
  auto param290 = model->addOperand(&type7);
  auto fw_bias5_tmp = model->addOperand(&type3);
  auto dummy291 = model->addOperand(&type15);
  auto param291 = model->addOperand(&type7);
  auto fw_hidden_state5_tmp = model->addOperand(&type4);
  auto dummy292 = model->addOperand(&type15);
  auto param292 = model->addOperand(&type7);
  auto bw_weights5_tmp = model->addOperand(&type13);
  auto dummy293 = model->addOperand(&type15);
  auto param293 = model->addOperand(&type7);
  auto bw_recurrent_weights5_tmp = model->addOperand(&type2);
  auto dummy294 = model->addOperand(&type15);
  auto param294 = model->addOperand(&type7);
  auto bw_bias5_tmp = model->addOperand(&type3);
  auto dummy295 = model->addOperand(&type15);
  auto param295 = model->addOperand(&type7);
  auto bw_hidden_state5_tmp = model->addOperand(&type4);
  auto dummy296 = model->addOperand(&type15);
  auto param296 = model->addOperand(&type7);
  auto aux_input5_tmp = model->addOperand(&type12);
  auto dummy297 = model->addOperand(&type15);
  auto param297 = model->addOperand(&type7);
  auto fw_aux_weights5_tmp = model->addOperand(&type13);
  auto dummy298 = model->addOperand(&type15);
  auto param298 = model->addOperand(&type7);
  auto bw_aux_weights5_tmp = model->addOperand(&type13);
  auto dummy299 = model->addOperand(&type15);
  auto param299 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation5_init[] = {1};
  model->setOperandValue(activation5, activation5_init, sizeof(int32_t) * 1);
  static bool8 time_major5_init[] = {false};
  model->setOperandValue(time_major5, time_major5_init, sizeof(bool8) * 1);
  static bool8 merge_outputs5_init[] = {false};
  model->setOperandValue(merge_outputs5, merge_outputs5_init, sizeof(bool8) * 1);
  static float dummy288_init[] = {0.0f};
  model->setOperandValue(dummy288, dummy288_init, sizeof(float) * 1);
  static int32_t param288_init[] = {0};
  model->setOperandValue(param288, param288_init, sizeof(int32_t) * 1);
  static float dummy289_init[] = {0.0f};
  model->setOperandValue(dummy289, dummy289_init, sizeof(float) * 1);
  static int32_t param289_init[] = {0};
  model->setOperandValue(param289, param289_init, sizeof(int32_t) * 1);
  static float dummy290_init[] = {0.0f};
  model->setOperandValue(dummy290, dummy290_init, sizeof(float) * 1);
  static int32_t param290_init[] = {0};
  model->setOperandValue(param290, param290_init, sizeof(int32_t) * 1);
  static float dummy291_init[] = {0.0f};
  model->setOperandValue(dummy291, dummy291_init, sizeof(float) * 1);
  static int32_t param291_init[] = {0};
  model->setOperandValue(param291, param291_init, sizeof(int32_t) * 1);
  static float dummy292_init[] = {0.0f};
  model->setOperandValue(dummy292, dummy292_init, sizeof(float) * 1);
  static int32_t param292_init[] = {0};
  model->setOperandValue(param292, param292_init, sizeof(int32_t) * 1);
  static float dummy293_init[] = {0.0f};
  model->setOperandValue(dummy293, dummy293_init, sizeof(float) * 1);
  static int32_t param293_init[] = {0};
  model->setOperandValue(param293, param293_init, sizeof(int32_t) * 1);
  static float dummy294_init[] = {0.0f};
  model->setOperandValue(dummy294, dummy294_init, sizeof(float) * 1);
  static int32_t param294_init[] = {0};
  model->setOperandValue(param294, param294_init, sizeof(int32_t) * 1);
  static float dummy295_init[] = {0.0f};
  model->setOperandValue(dummy295, dummy295_init, sizeof(float) * 1);
  static int32_t param295_init[] = {0};
  model->setOperandValue(param295, param295_init, sizeof(int32_t) * 1);
  static float dummy296_init[] = {0.0f};
  model->setOperandValue(dummy296, dummy296_init, sizeof(float) * 1);
  static int32_t param296_init[] = {0};
  model->setOperandValue(param296, param296_init, sizeof(int32_t) * 1);
  static float dummy297_init[] = {0.0f};
  model->setOperandValue(dummy297, dummy297_init, sizeof(float) * 1);
  static int32_t param297_init[] = {0};
  model->setOperandValue(param297, param297_init, sizeof(int32_t) * 1);
  static float dummy298_init[] = {0.0f};
  model->setOperandValue(dummy298, dummy298_init, sizeof(float) * 1);
  static int32_t param298_init[] = {0};
  model->setOperandValue(param298, param298_init, sizeof(int32_t) * 1);
  static float dummy299_init[] = {0.0f};
  model->setOperandValue(dummy299, dummy299_init, sizeof(float) * 1);
  static int32_t param299_init[] = {0};
  model->setOperandValue(param299, param299_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input5_tmp, dummy288, param288}, {input5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights5_tmp, dummy289, param289}, {fw_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights5_tmp, dummy290, param290}, {fw_recurrent_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias5_tmp, dummy291, param291}, {fw_bias5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state5_tmp, dummy292, param292}, {fw_hidden_state5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights5_tmp, dummy293, param293}, {bw_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights5_tmp, dummy294, param294}, {bw_recurrent_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias5_tmp, dummy295, param295}, {bw_bias5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state5_tmp, dummy296, param296}, {bw_hidden_state5});
  model->addOperation(ANEURALNETWORKS_ADD, {aux_input5_tmp, dummy297, param297}, {aux_input5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_aux_weights5_tmp, dummy298, param298}, {fw_aux_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_aux_weights5_tmp, dummy299, param299}, {bw_aux_weights5});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input5, fw_weights5, fw_recurrent_weights5, fw_bias5, fw_hidden_state5, bw_weights5, bw_recurrent_weights5, bw_bias5, bw_hidden_state5, aux_input5, fw_aux_weights5, bw_aux_weights5, activation5, time_major5, merge_outputs5}, {fw_output5, bw_output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5_tmp, fw_weights5_tmp, fw_recurrent_weights5_tmp, fw_bias5_tmp, fw_hidden_state5_tmp, bw_weights5_tmp, bw_recurrent_weights5_tmp, bw_bias5_tmp, bw_hidden_state5_tmp, aux_input5_tmp, fw_aux_weights5_tmp, bw_aux_weights5_tmp},
    {fw_output5, bw_output4});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type12(Type::TENSOR_FLOAT32, {2, 16, 4});
  OperandType type13(Type::TENSOR_FLOAT32, {16, 4});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input5 = model->addOperand(&type12);
  auto fw_weights5 = model->addOperand(&type13);
  auto fw_recurrent_weights5 = model->addOperand(&type2);
  auto fw_bias5 = model->addOperand(&type3);
  auto fw_hidden_state5 = model->addOperand(&type4);
  auto bw_weights5 = model->addOperand(&type13);
  auto bw_recurrent_weights5 = model->addOperand(&type2);
  auto bw_bias5 = model->addOperand(&type3);
  auto bw_hidden_state5 = model->addOperand(&type4);
  auto aux_input5 = model->addOperand(&type12);
  auto fw_aux_weights5 = model->addOperand(&type13);
  auto bw_aux_weights5 = model->addOperand(&type13);
  auto activation5 = model->addOperand(&type7);
  auto time_major5 = model->addOperand(&type8);
  auto merge_outputs5 = model->addOperand(&type8);
  auto fw_output5 = model->addOperand(&type14);
  auto bw_output4 = model->addOperand(&type14);
  auto input5_tmp = model->addOperand(&type12);
  auto dummy300 = model->addOperand(&type15);
  auto param300 = model->addOperand(&type7);
  auto fw_weights5_tmp = model->addOperand(&type13);
  auto dummy301 = model->addOperand(&type15);
  auto param301 = model->addOperand(&type7);
  auto fw_recurrent_weights5_tmp = model->addOperand(&type2);
  auto dummy302 = model->addOperand(&type15);
  auto param302 = model->addOperand(&type7);
  auto fw_bias5_tmp = model->addOperand(&type3);
  auto dummy303 = model->addOperand(&type15);
  auto param303 = model->addOperand(&type7);
  auto fw_hidden_state5_tmp = model->addOperand(&type4);
  auto dummy304 = model->addOperand(&type15);
  auto param304 = model->addOperand(&type7);
  auto bw_weights5_tmp = model->addOperand(&type13);
  auto dummy305 = model->addOperand(&type15);
  auto param305 = model->addOperand(&type7);
  auto bw_recurrent_weights5_tmp = model->addOperand(&type2);
  auto dummy306 = model->addOperand(&type15);
  auto param306 = model->addOperand(&type7);
  auto bw_bias5_tmp = model->addOperand(&type3);
  auto dummy307 = model->addOperand(&type15);
  auto param307 = model->addOperand(&type7);
  auto bw_hidden_state5_tmp = model->addOperand(&type4);
  auto dummy308 = model->addOperand(&type15);
  auto param308 = model->addOperand(&type7);
  auto aux_input5_tmp = model->addOperand(&type12);
  auto dummy309 = model->addOperand(&type15);
  auto param309 = model->addOperand(&type7);
  auto fw_aux_weights5_tmp = model->addOperand(&type13);
  auto dummy310 = model->addOperand(&type15);
  auto param310 = model->addOperand(&type7);
  auto bw_aux_weights5_tmp = model->addOperand(&type13);
  auto dummy311 = model->addOperand(&type15);
  auto param311 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation5_init[] = {1};
  model->setOperandValue(activation5, activation5_init, sizeof(int32_t) * 1);
  static bool8 time_major5_init[] = {false};
  model->setOperandValue(time_major5, time_major5_init, sizeof(bool8) * 1);
  static bool8 merge_outputs5_init[] = {false};
  model->setOperandValue(merge_outputs5, merge_outputs5_init, sizeof(bool8) * 1);
  static float dummy300_init[] = {0.0f};
  model->setOperandValue(dummy300, dummy300_init, sizeof(float) * 1);
  static int32_t param300_init[] = {0};
  model->setOperandValue(param300, param300_init, sizeof(int32_t) * 1);
  static float dummy301_init[] = {0.0f};
  model->setOperandValue(dummy301, dummy301_init, sizeof(float) * 1);
  static int32_t param301_init[] = {0};
  model->setOperandValue(param301, param301_init, sizeof(int32_t) * 1);
  static float dummy302_init[] = {0.0f};
  model->setOperandValue(dummy302, dummy302_init, sizeof(float) * 1);
  static int32_t param302_init[] = {0};
  model->setOperandValue(param302, param302_init, sizeof(int32_t) * 1);
  static float dummy303_init[] = {0.0f};
  model->setOperandValue(dummy303, dummy303_init, sizeof(float) * 1);
  static int32_t param303_init[] = {0};
  model->setOperandValue(param303, param303_init, sizeof(int32_t) * 1);
  static float dummy304_init[] = {0.0f};
  model->setOperandValue(dummy304, dummy304_init, sizeof(float) * 1);
  static int32_t param304_init[] = {0};
  model->setOperandValue(param304, param304_init, sizeof(int32_t) * 1);
  static float dummy305_init[] = {0.0f};
  model->setOperandValue(dummy305, dummy305_init, sizeof(float) * 1);
  static int32_t param305_init[] = {0};
  model->setOperandValue(param305, param305_init, sizeof(int32_t) * 1);
  static float dummy306_init[] = {0.0f};
  model->setOperandValue(dummy306, dummy306_init, sizeof(float) * 1);
  static int32_t param306_init[] = {0};
  model->setOperandValue(param306, param306_init, sizeof(int32_t) * 1);
  static float dummy307_init[] = {0.0f};
  model->setOperandValue(dummy307, dummy307_init, sizeof(float) * 1);
  static int32_t param307_init[] = {0};
  model->setOperandValue(param307, param307_init, sizeof(int32_t) * 1);
  static float dummy308_init[] = {0.0f};
  model->setOperandValue(dummy308, dummy308_init, sizeof(float) * 1);
  static int32_t param308_init[] = {0};
  model->setOperandValue(param308, param308_init, sizeof(int32_t) * 1);
  static float dummy309_init[] = {0.0f};
  model->setOperandValue(dummy309, dummy309_init, sizeof(float) * 1);
  static int32_t param309_init[] = {0};
  model->setOperandValue(param309, param309_init, sizeof(int32_t) * 1);
  static float dummy310_init[] = {0.0f};
  model->setOperandValue(dummy310, dummy310_init, sizeof(float) * 1);
  static int32_t param310_init[] = {0};
  model->setOperandValue(param310, param310_init, sizeof(int32_t) * 1);
  static float dummy311_init[] = {0.0f};
  model->setOperandValue(dummy311, dummy311_init, sizeof(float) * 1);
  static int32_t param311_init[] = {0};
  model->setOperandValue(param311, param311_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input5_tmp, dummy300, param300}, {input5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights5_tmp, dummy301, param301}, {fw_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights5_tmp, dummy302, param302}, {fw_recurrent_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias5_tmp, dummy303, param303}, {fw_bias5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state5_tmp, dummy304, param304}, {fw_hidden_state5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights5_tmp, dummy305, param305}, {bw_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights5_tmp, dummy306, param306}, {bw_recurrent_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias5_tmp, dummy307, param307}, {bw_bias5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state5_tmp, dummy308, param308}, {bw_hidden_state5});
  model->addOperation(ANEURALNETWORKS_ADD, {aux_input5_tmp, dummy309, param309}, {aux_input5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_aux_weights5_tmp, dummy310, param310}, {fw_aux_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_aux_weights5_tmp, dummy311, param311}, {bw_aux_weights5});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input5, fw_weights5, fw_recurrent_weights5, fw_bias5, fw_hidden_state5, bw_weights5, bw_recurrent_weights5, bw_bias5, bw_hidden_state5, aux_input5, fw_aux_weights5, bw_aux_weights5, activation5, time_major5, merge_outputs5}, {fw_output5, bw_output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5_tmp, fw_weights5_tmp, fw_recurrent_weights5_tmp, fw_bias5_tmp, fw_hidden_state5_tmp, bw_weights5_tmp, bw_recurrent_weights5_tmp, bw_bias5_tmp, bw_hidden_state5_tmp, aux_input5_tmp, fw_aux_weights5_tmp, bw_aux_weights5_tmp},
    {fw_output5, bw_output4});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_6(Model *model) {
  OperandType type12(Type::TENSOR_FLOAT32, {2, 16, 4});
  OperandType type13(Type::TENSOR_FLOAT32, {16, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 16, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input5 = model->addOperand(&type12);
  auto fw_weights5 = model->addOperand(&type13);
  auto fw_recurrent_weights5 = model->addOperand(&type2);
  auto fw_bias5 = model->addOperand(&type3);
  auto fw_hidden_state5 = model->addOperand(&type4);
  auto bw_weights5 = model->addOperand(&type13);
  auto bw_recurrent_weights5 = model->addOperand(&type2);
  auto bw_bias5 = model->addOperand(&type3);
  auto bw_hidden_state5 = model->addOperand(&type4);
  auto aux_input5 = model->addOperand(&type12);
  auto fw_aux_weights5 = model->addOperand(&type13);
  auto bw_aux_weights5 = model->addOperand(&type13);
  auto activation5 = model->addOperand(&type7);
  auto time_major5 = model->addOperand(&type8);
  auto merge_outputs5 = model->addOperand(&type8);
  auto fw_output5 = model->addOperand(&type6);
  auto bw_output4 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation5_init[] = {1};
  model->setOperandValue(activation5, activation5_init, sizeof(int32_t) * 1);
  static bool8 time_major5_init[] = {false};
  model->setOperandValue(time_major5, time_major5_init, sizeof(bool8) * 1);
  static bool8 merge_outputs5_init[] = {false};
  model->setOperandValue(merge_outputs5, merge_outputs5_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input5, fw_weights5, fw_recurrent_weights5, fw_bias5, fw_hidden_state5, bw_weights5, bw_recurrent_weights5, bw_bias5, bw_hidden_state5, aux_input5, fw_aux_weights5, bw_aux_weights5, activation5, time_major5, merge_outputs5}, {fw_output5, bw_output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5, fw_weights5, fw_recurrent_weights5, fw_bias5, fw_hidden_state5, bw_weights5, bw_recurrent_weights5, bw_bias5, bw_hidden_state5, aux_input5, fw_aux_weights5, bw_aux_weights5},
    {fw_output5, bw_output4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_dynamic_output_shape_6(Model *model) {
  OperandType type12(Type::TENSOR_FLOAT32, {2, 16, 4});
  OperandType type13(Type::TENSOR_FLOAT32, {16, 4});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input5 = model->addOperand(&type12);
  auto fw_weights5 = model->addOperand(&type13);
  auto fw_recurrent_weights5 = model->addOperand(&type2);
  auto fw_bias5 = model->addOperand(&type3);
  auto fw_hidden_state5 = model->addOperand(&type4);
  auto bw_weights5 = model->addOperand(&type13);
  auto bw_recurrent_weights5 = model->addOperand(&type2);
  auto bw_bias5 = model->addOperand(&type3);
  auto bw_hidden_state5 = model->addOperand(&type4);
  auto aux_input5 = model->addOperand(&type12);
  auto fw_aux_weights5 = model->addOperand(&type13);
  auto bw_aux_weights5 = model->addOperand(&type13);
  auto activation5 = model->addOperand(&type7);
  auto time_major5 = model->addOperand(&type8);
  auto merge_outputs5 = model->addOperand(&type8);
  auto fw_output5 = model->addOperand(&type14);
  auto bw_output4 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t activation5_init[] = {1};
  model->setOperandValue(activation5, activation5_init, sizeof(int32_t) * 1);
  static bool8 time_major5_init[] = {false};
  model->setOperandValue(time_major5, time_major5_init, sizeof(bool8) * 1);
  static bool8 merge_outputs5_init[] = {false};
  model->setOperandValue(merge_outputs5, merge_outputs5_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input5, fw_weights5, fw_recurrent_weights5, fw_bias5, fw_hidden_state5, bw_weights5, bw_recurrent_weights5, bw_bias5, bw_hidden_state5, aux_input5, fw_aux_weights5, bw_aux_weights5, activation5, time_major5, merge_outputs5}, {fw_output5, bw_output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5, fw_weights5, fw_recurrent_weights5, fw_bias5, fw_hidden_state5, bw_weights5, bw_recurrent_weights5, bw_bias5, bw_hidden_state5, aux_input5, fw_aux_weights5, bw_aux_weights5},
    {fw_output5, bw_output4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_all_inputs_as_internal_6(Model *model) {
  OperandType type12(Type::TENSOR_FLOAT32, {2, 16, 4});
  OperandType type13(Type::TENSOR_FLOAT32, {16, 4});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 16, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input5 = model->addOperand(&type12);
  auto fw_weights5 = model->addOperand(&type13);
  auto fw_recurrent_weights5 = model->addOperand(&type2);
  auto fw_bias5 = model->addOperand(&type3);
  auto fw_hidden_state5 = model->addOperand(&type4);
  auto bw_weights5 = model->addOperand(&type13);
  auto bw_recurrent_weights5 = model->addOperand(&type2);
  auto bw_bias5 = model->addOperand(&type3);
  auto bw_hidden_state5 = model->addOperand(&type4);
  auto aux_input5 = model->addOperand(&type12);
  auto fw_aux_weights5 = model->addOperand(&type13);
  auto bw_aux_weights5 = model->addOperand(&type13);
  auto activation5 = model->addOperand(&type7);
  auto time_major5 = model->addOperand(&type8);
  auto merge_outputs5 = model->addOperand(&type8);
  auto fw_output5 = model->addOperand(&type6);
  auto bw_output4 = model->addOperand(&type6);
  auto input5_tmp = model->addOperand(&type12);
  auto dummy312 = model->addOperand(&type15);
  auto param312 = model->addOperand(&type7);
  auto fw_weights5_tmp = model->addOperand(&type13);
  auto dummy313 = model->addOperand(&type15);
  auto param313 = model->addOperand(&type7);
  auto fw_recurrent_weights5_tmp = model->addOperand(&type2);
  auto dummy314 = model->addOperand(&type15);
  auto param314 = model->addOperand(&type7);
  auto fw_bias5_tmp = model->addOperand(&type3);
  auto dummy315 = model->addOperand(&type15);
  auto param315 = model->addOperand(&type7);
  auto fw_hidden_state5_tmp = model->addOperand(&type4);
  auto dummy316 = model->addOperand(&type15);
  auto param316 = model->addOperand(&type7);
  auto bw_weights5_tmp = model->addOperand(&type13);
  auto dummy317 = model->addOperand(&type15);
  auto param317 = model->addOperand(&type7);
  auto bw_recurrent_weights5_tmp = model->addOperand(&type2);
  auto dummy318 = model->addOperand(&type15);
  auto param318 = model->addOperand(&type7);
  auto bw_bias5_tmp = model->addOperand(&type3);
  auto dummy319 = model->addOperand(&type15);
  auto param319 = model->addOperand(&type7);
  auto bw_hidden_state5_tmp = model->addOperand(&type4);
  auto dummy320 = model->addOperand(&type15);
  auto param320 = model->addOperand(&type7);
  auto aux_input5_tmp = model->addOperand(&type12);
  auto dummy321 = model->addOperand(&type15);
  auto param321 = model->addOperand(&type7);
  auto fw_aux_weights5_tmp = model->addOperand(&type13);
  auto dummy322 = model->addOperand(&type15);
  auto param322 = model->addOperand(&type7);
  auto bw_aux_weights5_tmp = model->addOperand(&type13);
  auto dummy323 = model->addOperand(&type15);
  auto param323 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation5_init[] = {1};
  model->setOperandValue(activation5, activation5_init, sizeof(int32_t) * 1);
  static bool8 time_major5_init[] = {false};
  model->setOperandValue(time_major5, time_major5_init, sizeof(bool8) * 1);
  static bool8 merge_outputs5_init[] = {false};
  model->setOperandValue(merge_outputs5, merge_outputs5_init, sizeof(bool8) * 1);
  static float dummy312_init[] = {0.0f};
  model->setOperandValue(dummy312, dummy312_init, sizeof(float) * 1);
  static int32_t param312_init[] = {0};
  model->setOperandValue(param312, param312_init, sizeof(int32_t) * 1);
  static float dummy313_init[] = {0.0f};
  model->setOperandValue(dummy313, dummy313_init, sizeof(float) * 1);
  static int32_t param313_init[] = {0};
  model->setOperandValue(param313, param313_init, sizeof(int32_t) * 1);
  static float dummy314_init[] = {0.0f};
  model->setOperandValue(dummy314, dummy314_init, sizeof(float) * 1);
  static int32_t param314_init[] = {0};
  model->setOperandValue(param314, param314_init, sizeof(int32_t) * 1);
  static float dummy315_init[] = {0.0f};
  model->setOperandValue(dummy315, dummy315_init, sizeof(float) * 1);
  static int32_t param315_init[] = {0};
  model->setOperandValue(param315, param315_init, sizeof(int32_t) * 1);
  static float dummy316_init[] = {0.0f};
  model->setOperandValue(dummy316, dummy316_init, sizeof(float) * 1);
  static int32_t param316_init[] = {0};
  model->setOperandValue(param316, param316_init, sizeof(int32_t) * 1);
  static float dummy317_init[] = {0.0f};
  model->setOperandValue(dummy317, dummy317_init, sizeof(float) * 1);
  static int32_t param317_init[] = {0};
  model->setOperandValue(param317, param317_init, sizeof(int32_t) * 1);
  static float dummy318_init[] = {0.0f};
  model->setOperandValue(dummy318, dummy318_init, sizeof(float) * 1);
  static int32_t param318_init[] = {0};
  model->setOperandValue(param318, param318_init, sizeof(int32_t) * 1);
  static float dummy319_init[] = {0.0f};
  model->setOperandValue(dummy319, dummy319_init, sizeof(float) * 1);
  static int32_t param319_init[] = {0};
  model->setOperandValue(param319, param319_init, sizeof(int32_t) * 1);
  static float dummy320_init[] = {0.0f};
  model->setOperandValue(dummy320, dummy320_init, sizeof(float) * 1);
  static int32_t param320_init[] = {0};
  model->setOperandValue(param320, param320_init, sizeof(int32_t) * 1);
  static float dummy321_init[] = {0.0f};
  model->setOperandValue(dummy321, dummy321_init, sizeof(float) * 1);
  static int32_t param321_init[] = {0};
  model->setOperandValue(param321, param321_init, sizeof(int32_t) * 1);
  static float dummy322_init[] = {0.0f};
  model->setOperandValue(dummy322, dummy322_init, sizeof(float) * 1);
  static int32_t param322_init[] = {0};
  model->setOperandValue(param322, param322_init, sizeof(int32_t) * 1);
  static float dummy323_init[] = {0.0f};
  model->setOperandValue(dummy323, dummy323_init, sizeof(float) * 1);
  static int32_t param323_init[] = {0};
  model->setOperandValue(param323, param323_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input5_tmp, dummy312, param312}, {input5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights5_tmp, dummy313, param313}, {fw_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights5_tmp, dummy314, param314}, {fw_recurrent_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias5_tmp, dummy315, param315}, {fw_bias5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state5_tmp, dummy316, param316}, {fw_hidden_state5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights5_tmp, dummy317, param317}, {bw_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights5_tmp, dummy318, param318}, {bw_recurrent_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias5_tmp, dummy319, param319}, {bw_bias5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state5_tmp, dummy320, param320}, {bw_hidden_state5});
  model->addOperation(ANEURALNETWORKS_ADD, {aux_input5_tmp, dummy321, param321}, {aux_input5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_aux_weights5_tmp, dummy322, param322}, {fw_aux_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_aux_weights5_tmp, dummy323, param323}, {bw_aux_weights5});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input5, fw_weights5, fw_recurrent_weights5, fw_bias5, fw_hidden_state5, bw_weights5, bw_recurrent_weights5, bw_bias5, bw_hidden_state5, aux_input5, fw_aux_weights5, bw_aux_weights5, activation5, time_major5, merge_outputs5}, {fw_output5, bw_output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5_tmp, fw_weights5_tmp, fw_recurrent_weights5_tmp, fw_bias5_tmp, fw_hidden_state5_tmp, bw_weights5_tmp, bw_recurrent_weights5_tmp, bw_bias5_tmp, bw_hidden_state5_tmp, aux_input5_tmp, fw_aux_weights5_tmp, bw_aux_weights5_tmp},
    {fw_output5, bw_output4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type12(Type::TENSOR_FLOAT32, {2, 16, 4});
  OperandType type13(Type::TENSOR_FLOAT32, {16, 4});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {16, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input5 = model->addOperand(&type12);
  auto fw_weights5 = model->addOperand(&type13);
  auto fw_recurrent_weights5 = model->addOperand(&type2);
  auto fw_bias5 = model->addOperand(&type3);
  auto fw_hidden_state5 = model->addOperand(&type4);
  auto bw_weights5 = model->addOperand(&type13);
  auto bw_recurrent_weights5 = model->addOperand(&type2);
  auto bw_bias5 = model->addOperand(&type3);
  auto bw_hidden_state5 = model->addOperand(&type4);
  auto aux_input5 = model->addOperand(&type12);
  auto fw_aux_weights5 = model->addOperand(&type13);
  auto bw_aux_weights5 = model->addOperand(&type13);
  auto activation5 = model->addOperand(&type7);
  auto time_major5 = model->addOperand(&type8);
  auto merge_outputs5 = model->addOperand(&type8);
  auto fw_output5 = model->addOperand(&type14);
  auto bw_output4 = model->addOperand(&type14);
  auto input5_tmp = model->addOperand(&type12);
  auto dummy324 = model->addOperand(&type15);
  auto param324 = model->addOperand(&type7);
  auto fw_weights5_tmp = model->addOperand(&type13);
  auto dummy325 = model->addOperand(&type15);
  auto param325 = model->addOperand(&type7);
  auto fw_recurrent_weights5_tmp = model->addOperand(&type2);
  auto dummy326 = model->addOperand(&type15);
  auto param326 = model->addOperand(&type7);
  auto fw_bias5_tmp = model->addOperand(&type3);
  auto dummy327 = model->addOperand(&type15);
  auto param327 = model->addOperand(&type7);
  auto fw_hidden_state5_tmp = model->addOperand(&type4);
  auto dummy328 = model->addOperand(&type15);
  auto param328 = model->addOperand(&type7);
  auto bw_weights5_tmp = model->addOperand(&type13);
  auto dummy329 = model->addOperand(&type15);
  auto param329 = model->addOperand(&type7);
  auto bw_recurrent_weights5_tmp = model->addOperand(&type2);
  auto dummy330 = model->addOperand(&type15);
  auto param330 = model->addOperand(&type7);
  auto bw_bias5_tmp = model->addOperand(&type3);
  auto dummy331 = model->addOperand(&type15);
  auto param331 = model->addOperand(&type7);
  auto bw_hidden_state5_tmp = model->addOperand(&type4);
  auto dummy332 = model->addOperand(&type15);
  auto param332 = model->addOperand(&type7);
  auto aux_input5_tmp = model->addOperand(&type12);
  auto dummy333 = model->addOperand(&type15);
  auto param333 = model->addOperand(&type7);
  auto fw_aux_weights5_tmp = model->addOperand(&type13);
  auto dummy334 = model->addOperand(&type15);
  auto param334 = model->addOperand(&type7);
  auto bw_aux_weights5_tmp = model->addOperand(&type13);
  auto dummy335 = model->addOperand(&type15);
  auto param335 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation5_init[] = {1};
  model->setOperandValue(activation5, activation5_init, sizeof(int32_t) * 1);
  static bool8 time_major5_init[] = {false};
  model->setOperandValue(time_major5, time_major5_init, sizeof(bool8) * 1);
  static bool8 merge_outputs5_init[] = {false};
  model->setOperandValue(merge_outputs5, merge_outputs5_init, sizeof(bool8) * 1);
  static float dummy324_init[] = {0.0f};
  model->setOperandValue(dummy324, dummy324_init, sizeof(float) * 1);
  static int32_t param324_init[] = {0};
  model->setOperandValue(param324, param324_init, sizeof(int32_t) * 1);
  static float dummy325_init[] = {0.0f};
  model->setOperandValue(dummy325, dummy325_init, sizeof(float) * 1);
  static int32_t param325_init[] = {0};
  model->setOperandValue(param325, param325_init, sizeof(int32_t) * 1);
  static float dummy326_init[] = {0.0f};
  model->setOperandValue(dummy326, dummy326_init, sizeof(float) * 1);
  static int32_t param326_init[] = {0};
  model->setOperandValue(param326, param326_init, sizeof(int32_t) * 1);
  static float dummy327_init[] = {0.0f};
  model->setOperandValue(dummy327, dummy327_init, sizeof(float) * 1);
  static int32_t param327_init[] = {0};
  model->setOperandValue(param327, param327_init, sizeof(int32_t) * 1);
  static float dummy328_init[] = {0.0f};
  model->setOperandValue(dummy328, dummy328_init, sizeof(float) * 1);
  static int32_t param328_init[] = {0};
  model->setOperandValue(param328, param328_init, sizeof(int32_t) * 1);
  static float dummy329_init[] = {0.0f};
  model->setOperandValue(dummy329, dummy329_init, sizeof(float) * 1);
  static int32_t param329_init[] = {0};
  model->setOperandValue(param329, param329_init, sizeof(int32_t) * 1);
  static float dummy330_init[] = {0.0f};
  model->setOperandValue(dummy330, dummy330_init, sizeof(float) * 1);
  static int32_t param330_init[] = {0};
  model->setOperandValue(param330, param330_init, sizeof(int32_t) * 1);
  static float dummy331_init[] = {0.0f};
  model->setOperandValue(dummy331, dummy331_init, sizeof(float) * 1);
  static int32_t param331_init[] = {0};
  model->setOperandValue(param331, param331_init, sizeof(int32_t) * 1);
  static float dummy332_init[] = {0.0f};
  model->setOperandValue(dummy332, dummy332_init, sizeof(float) * 1);
  static int32_t param332_init[] = {0};
  model->setOperandValue(param332, param332_init, sizeof(int32_t) * 1);
  static float dummy333_init[] = {0.0f};
  model->setOperandValue(dummy333, dummy333_init, sizeof(float) * 1);
  static int32_t param333_init[] = {0};
  model->setOperandValue(param333, param333_init, sizeof(int32_t) * 1);
  static float dummy334_init[] = {0.0f};
  model->setOperandValue(dummy334, dummy334_init, sizeof(float) * 1);
  static int32_t param334_init[] = {0};
  model->setOperandValue(param334, param334_init, sizeof(int32_t) * 1);
  static float dummy335_init[] = {0.0f};
  model->setOperandValue(dummy335, dummy335_init, sizeof(float) * 1);
  static int32_t param335_init[] = {0};
  model->setOperandValue(param335, param335_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input5_tmp, dummy324, param324}, {input5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights5_tmp, dummy325, param325}, {fw_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights5_tmp, dummy326, param326}, {fw_recurrent_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias5_tmp, dummy327, param327}, {fw_bias5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state5_tmp, dummy328, param328}, {fw_hidden_state5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights5_tmp, dummy329, param329}, {bw_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights5_tmp, dummy330, param330}, {bw_recurrent_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias5_tmp, dummy331, param331}, {bw_bias5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state5_tmp, dummy332, param332}, {bw_hidden_state5});
  model->addOperation(ANEURALNETWORKS_ADD, {aux_input5_tmp, dummy333, param333}, {aux_input5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_aux_weights5_tmp, dummy334, param334}, {fw_aux_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_aux_weights5_tmp, dummy335, param335}, {bw_aux_weights5});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input5, fw_weights5, fw_recurrent_weights5, fw_bias5, fw_hidden_state5, bw_weights5, bw_recurrent_weights5, bw_bias5, bw_hidden_state5, aux_input5, fw_aux_weights5, bw_aux_weights5, activation5, time_major5, merge_outputs5}, {fw_output5, bw_output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5_tmp, fw_weights5_tmp, fw_recurrent_weights5_tmp, fw_bias5_tmp, fw_hidden_state5_tmp, bw_weights5_tmp, bw_recurrent_weights5_tmp, bw_bias5_tmp, bw_hidden_state5_tmp, aux_input5_tmp, fw_aux_weights5_tmp, bw_aux_weights5_tmp},
    {fw_output5, bw_output4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_6(Model *model) {
  OperandType type17(Type::TENSOR_FLOAT16, {16});
  OperandType type18(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type19(Type::TENSOR_FLOAT16, {2, 16, 16});
  OperandType type20(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type34(Type::TENSOR_FLOAT16, {2, 16, 4});
  OperandType type35(Type::TENSOR_FLOAT16, {16, 4});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input5 = model->addOperand(&type34);
  auto fw_weights5 = model->addOperand(&type35);
  auto fw_recurrent_weights5 = model->addOperand(&type20);
  auto fw_bias5 = model->addOperand(&type17);
  auto fw_hidden_state5 = model->addOperand(&type18);
  auto bw_weights5 = model->addOperand(&type35);
  auto bw_recurrent_weights5 = model->addOperand(&type20);
  auto bw_bias5 = model->addOperand(&type17);
  auto bw_hidden_state5 = model->addOperand(&type18);
  auto aux_input5 = model->addOperand(&type34);
  auto fw_aux_weights5 = model->addOperand(&type35);
  auto bw_aux_weights5 = model->addOperand(&type35);
  auto activation5 = model->addOperand(&type7);
  auto time_major5 = model->addOperand(&type8);
  auto merge_outputs5 = model->addOperand(&type8);
  auto fw_output5 = model->addOperand(&type19);
  auto bw_output4 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t activation5_init[] = {1};
  model->setOperandValue(activation5, activation5_init, sizeof(int32_t) * 1);
  static bool8 time_major5_init[] = {false};
  model->setOperandValue(time_major5, time_major5_init, sizeof(bool8) * 1);
  static bool8 merge_outputs5_init[] = {false};
  model->setOperandValue(merge_outputs5, merge_outputs5_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input5, fw_weights5, fw_recurrent_weights5, fw_bias5, fw_hidden_state5, bw_weights5, bw_recurrent_weights5, bw_bias5, bw_hidden_state5, aux_input5, fw_aux_weights5, bw_aux_weights5, activation5, time_major5, merge_outputs5}, {fw_output5, bw_output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5, fw_weights5, fw_recurrent_weights5, fw_bias5, fw_hidden_state5, bw_weights5, bw_recurrent_weights5, bw_bias5, bw_hidden_state5, aux_input5, fw_aux_weights5, bw_aux_weights5},
    {fw_output5, bw_output4});
  assert(model->isValid());
}

bool is_ignored_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_dynamic_output_shape_6(Model *model) {
  OperandType type17(Type::TENSOR_FLOAT16, {16});
  OperandType type18(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type20(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type34(Type::TENSOR_FLOAT16, {2, 16, 4});
  OperandType type35(Type::TENSOR_FLOAT16, {16, 4});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input5 = model->addOperand(&type34);
  auto fw_weights5 = model->addOperand(&type35);
  auto fw_recurrent_weights5 = model->addOperand(&type20);
  auto fw_bias5 = model->addOperand(&type17);
  auto fw_hidden_state5 = model->addOperand(&type18);
  auto bw_weights5 = model->addOperand(&type35);
  auto bw_recurrent_weights5 = model->addOperand(&type20);
  auto bw_bias5 = model->addOperand(&type17);
  auto bw_hidden_state5 = model->addOperand(&type18);
  auto aux_input5 = model->addOperand(&type34);
  auto fw_aux_weights5 = model->addOperand(&type35);
  auto bw_aux_weights5 = model->addOperand(&type35);
  auto activation5 = model->addOperand(&type7);
  auto time_major5 = model->addOperand(&type8);
  auto merge_outputs5 = model->addOperand(&type8);
  auto fw_output5 = model->addOperand(&type23);
  auto bw_output4 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t activation5_init[] = {1};
  model->setOperandValue(activation5, activation5_init, sizeof(int32_t) * 1);
  static bool8 time_major5_init[] = {false};
  model->setOperandValue(time_major5, time_major5_init, sizeof(bool8) * 1);
  static bool8 merge_outputs5_init[] = {false};
  model->setOperandValue(merge_outputs5, merge_outputs5_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input5, fw_weights5, fw_recurrent_weights5, fw_bias5, fw_hidden_state5, bw_weights5, bw_recurrent_weights5, bw_bias5, bw_hidden_state5, aux_input5, fw_aux_weights5, bw_aux_weights5, activation5, time_major5, merge_outputs5}, {fw_output5, bw_output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5, fw_weights5, fw_recurrent_weights5, fw_bias5, fw_hidden_state5, bw_weights5, bw_recurrent_weights5, bw_bias5, bw_hidden_state5, aux_input5, fw_aux_weights5, bw_aux_weights5},
    {fw_output5, bw_output4});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_all_inputs_as_internal_6(Model *model) {
  OperandType type19(Type::TENSOR_FLOAT16, {2, 16, 16});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type27(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type28(Type::TENSOR_FLOAT16, {16});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type36(Type::TENSOR_FLOAT16, {2, 16, 4});
  OperandType type37(Type::TENSOR_FLOAT16, {16, 4});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input5 = model->addOperand(&type36);
  auto fw_weights5 = model->addOperand(&type37);
  auto fw_recurrent_weights5 = model->addOperand(&type27);
  auto fw_bias5 = model->addOperand(&type28);
  auto fw_hidden_state5 = model->addOperand(&type29);
  auto bw_weights5 = model->addOperand(&type37);
  auto bw_recurrent_weights5 = model->addOperand(&type27);
  auto bw_bias5 = model->addOperand(&type28);
  auto bw_hidden_state5 = model->addOperand(&type29);
  auto aux_input5 = model->addOperand(&type36);
  auto fw_aux_weights5 = model->addOperand(&type37);
  auto bw_aux_weights5 = model->addOperand(&type37);
  auto activation5 = model->addOperand(&type7);
  auto time_major5 = model->addOperand(&type8);
  auto merge_outputs5 = model->addOperand(&type8);
  auto fw_output5 = model->addOperand(&type19);
  auto bw_output4 = model->addOperand(&type19);
  auto input5_tmp = model->addOperand(&type36);
  auto dummy336 = model->addOperand(&type25);
  auto param336 = model->addOperand(&type7);
  auto fw_weights5_tmp = model->addOperand(&type37);
  auto dummy337 = model->addOperand(&type25);
  auto param337 = model->addOperand(&type7);
  auto fw_recurrent_weights5_tmp = model->addOperand(&type27);
  auto dummy338 = model->addOperand(&type25);
  auto param338 = model->addOperand(&type7);
  auto fw_bias5_tmp = model->addOperand(&type28);
  auto dummy339 = model->addOperand(&type25);
  auto param339 = model->addOperand(&type7);
  auto fw_hidden_state5_tmp = model->addOperand(&type29);
  auto dummy340 = model->addOperand(&type25);
  auto param340 = model->addOperand(&type7);
  auto bw_weights5_tmp = model->addOperand(&type37);
  auto dummy341 = model->addOperand(&type25);
  auto param341 = model->addOperand(&type7);
  auto bw_recurrent_weights5_tmp = model->addOperand(&type27);
  auto dummy342 = model->addOperand(&type25);
  auto param342 = model->addOperand(&type7);
  auto bw_bias5_tmp = model->addOperand(&type28);
  auto dummy343 = model->addOperand(&type25);
  auto param343 = model->addOperand(&type7);
  auto bw_hidden_state5_tmp = model->addOperand(&type29);
  auto dummy344 = model->addOperand(&type25);
  auto param344 = model->addOperand(&type7);
  auto aux_input5_tmp = model->addOperand(&type36);
  auto dummy345 = model->addOperand(&type25);
  auto param345 = model->addOperand(&type7);
  auto fw_aux_weights5_tmp = model->addOperand(&type37);
  auto dummy346 = model->addOperand(&type25);
  auto param346 = model->addOperand(&type7);
  auto bw_aux_weights5_tmp = model->addOperand(&type37);
  auto dummy347 = model->addOperand(&type25);
  auto param347 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation5_init[] = {1};
  model->setOperandValue(activation5, activation5_init, sizeof(int32_t) * 1);
  static bool8 time_major5_init[] = {false};
  model->setOperandValue(time_major5, time_major5_init, sizeof(bool8) * 1);
  static bool8 merge_outputs5_init[] = {false};
  model->setOperandValue(merge_outputs5, merge_outputs5_init, sizeof(bool8) * 1);
  static _Float16 dummy336_init[] = {0.0f};
  model->setOperandValue(dummy336, dummy336_init, sizeof(_Float16) * 1);
  static int32_t param336_init[] = {0};
  model->setOperandValue(param336, param336_init, sizeof(int32_t) * 1);
  static _Float16 dummy337_init[] = {0.0f};
  model->setOperandValue(dummy337, dummy337_init, sizeof(_Float16) * 1);
  static int32_t param337_init[] = {0};
  model->setOperandValue(param337, param337_init, sizeof(int32_t) * 1);
  static _Float16 dummy338_init[] = {0.0f};
  model->setOperandValue(dummy338, dummy338_init, sizeof(_Float16) * 1);
  static int32_t param338_init[] = {0};
  model->setOperandValue(param338, param338_init, sizeof(int32_t) * 1);
  static _Float16 dummy339_init[] = {0.0f};
  model->setOperandValue(dummy339, dummy339_init, sizeof(_Float16) * 1);
  static int32_t param339_init[] = {0};
  model->setOperandValue(param339, param339_init, sizeof(int32_t) * 1);
  static _Float16 dummy340_init[] = {0.0f};
  model->setOperandValue(dummy340, dummy340_init, sizeof(_Float16) * 1);
  static int32_t param340_init[] = {0};
  model->setOperandValue(param340, param340_init, sizeof(int32_t) * 1);
  static _Float16 dummy341_init[] = {0.0f};
  model->setOperandValue(dummy341, dummy341_init, sizeof(_Float16) * 1);
  static int32_t param341_init[] = {0};
  model->setOperandValue(param341, param341_init, sizeof(int32_t) * 1);
  static _Float16 dummy342_init[] = {0.0f};
  model->setOperandValue(dummy342, dummy342_init, sizeof(_Float16) * 1);
  static int32_t param342_init[] = {0};
  model->setOperandValue(param342, param342_init, sizeof(int32_t) * 1);
  static _Float16 dummy343_init[] = {0.0f};
  model->setOperandValue(dummy343, dummy343_init, sizeof(_Float16) * 1);
  static int32_t param343_init[] = {0};
  model->setOperandValue(param343, param343_init, sizeof(int32_t) * 1);
  static _Float16 dummy344_init[] = {0.0f};
  model->setOperandValue(dummy344, dummy344_init, sizeof(_Float16) * 1);
  static int32_t param344_init[] = {0};
  model->setOperandValue(param344, param344_init, sizeof(int32_t) * 1);
  static _Float16 dummy345_init[] = {0.0f};
  model->setOperandValue(dummy345, dummy345_init, sizeof(_Float16) * 1);
  static int32_t param345_init[] = {0};
  model->setOperandValue(param345, param345_init, sizeof(int32_t) * 1);
  static _Float16 dummy346_init[] = {0.0f};
  model->setOperandValue(dummy346, dummy346_init, sizeof(_Float16) * 1);
  static int32_t param346_init[] = {0};
  model->setOperandValue(param346, param346_init, sizeof(int32_t) * 1);
  static _Float16 dummy347_init[] = {0.0f};
  model->setOperandValue(dummy347, dummy347_init, sizeof(_Float16) * 1);
  static int32_t param347_init[] = {0};
  model->setOperandValue(param347, param347_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input5_tmp, dummy336, param336}, {input5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights5_tmp, dummy337, param337}, {fw_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights5_tmp, dummy338, param338}, {fw_recurrent_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias5_tmp, dummy339, param339}, {fw_bias5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state5_tmp, dummy340, param340}, {fw_hidden_state5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights5_tmp, dummy341, param341}, {bw_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights5_tmp, dummy342, param342}, {bw_recurrent_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias5_tmp, dummy343, param343}, {bw_bias5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state5_tmp, dummy344, param344}, {bw_hidden_state5});
  model->addOperation(ANEURALNETWORKS_ADD, {aux_input5_tmp, dummy345, param345}, {aux_input5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_aux_weights5_tmp, dummy346, param346}, {fw_aux_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_aux_weights5_tmp, dummy347, param347}, {bw_aux_weights5});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input5, fw_weights5, fw_recurrent_weights5, fw_bias5, fw_hidden_state5, bw_weights5, bw_recurrent_weights5, bw_bias5, bw_hidden_state5, aux_input5, fw_aux_weights5, bw_aux_weights5, activation5, time_major5, merge_outputs5}, {fw_output5, bw_output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5_tmp, fw_weights5_tmp, fw_recurrent_weights5_tmp, fw_bias5_tmp, fw_hidden_state5_tmp, bw_weights5_tmp, bw_recurrent_weights5_tmp, bw_bias5_tmp, bw_hidden_state5_tmp, aux_input5_tmp, fw_aux_weights5_tmp, bw_aux_weights5_tmp},
    {fw_output5, bw_output4});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
namespace generated_tests::bidirectional_sequence_rnn {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type27(Type::TENSOR_FLOAT16, {16, 16});
  OperandType type28(Type::TENSOR_FLOAT16, {16});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 16});
  OperandType type36(Type::TENSOR_FLOAT16, {2, 16, 4});
  OperandType type37(Type::TENSOR_FLOAT16, {16, 4});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input5 = model->addOperand(&type36);
  auto fw_weights5 = model->addOperand(&type37);
  auto fw_recurrent_weights5 = model->addOperand(&type27);
  auto fw_bias5 = model->addOperand(&type28);
  auto fw_hidden_state5 = model->addOperand(&type29);
  auto bw_weights5 = model->addOperand(&type37);
  auto bw_recurrent_weights5 = model->addOperand(&type27);
  auto bw_bias5 = model->addOperand(&type28);
  auto bw_hidden_state5 = model->addOperand(&type29);
  auto aux_input5 = model->addOperand(&type36);
  auto fw_aux_weights5 = model->addOperand(&type37);
  auto bw_aux_weights5 = model->addOperand(&type37);
  auto activation5 = model->addOperand(&type7);
  auto time_major5 = model->addOperand(&type8);
  auto merge_outputs5 = model->addOperand(&type8);
  auto fw_output5 = model->addOperand(&type23);
  auto bw_output4 = model->addOperand(&type23);
  auto input5_tmp = model->addOperand(&type36);
  auto dummy348 = model->addOperand(&type25);
  auto param348 = model->addOperand(&type7);
  auto fw_weights5_tmp = model->addOperand(&type37);
  auto dummy349 = model->addOperand(&type25);
  auto param349 = model->addOperand(&type7);
  auto fw_recurrent_weights5_tmp = model->addOperand(&type27);
  auto dummy350 = model->addOperand(&type25);
  auto param350 = model->addOperand(&type7);
  auto fw_bias5_tmp = model->addOperand(&type28);
  auto dummy351 = model->addOperand(&type25);
  auto param351 = model->addOperand(&type7);
  auto fw_hidden_state5_tmp = model->addOperand(&type29);
  auto dummy352 = model->addOperand(&type25);
  auto param352 = model->addOperand(&type7);
  auto bw_weights5_tmp = model->addOperand(&type37);
  auto dummy353 = model->addOperand(&type25);
  auto param353 = model->addOperand(&type7);
  auto bw_recurrent_weights5_tmp = model->addOperand(&type27);
  auto dummy354 = model->addOperand(&type25);
  auto param354 = model->addOperand(&type7);
  auto bw_bias5_tmp = model->addOperand(&type28);
  auto dummy355 = model->addOperand(&type25);
  auto param355 = model->addOperand(&type7);
  auto bw_hidden_state5_tmp = model->addOperand(&type29);
  auto dummy356 = model->addOperand(&type25);
  auto param356 = model->addOperand(&type7);
  auto aux_input5_tmp = model->addOperand(&type36);
  auto dummy357 = model->addOperand(&type25);
  auto param357 = model->addOperand(&type7);
  auto fw_aux_weights5_tmp = model->addOperand(&type37);
  auto dummy358 = model->addOperand(&type25);
  auto param358 = model->addOperand(&type7);
  auto bw_aux_weights5_tmp = model->addOperand(&type37);
  auto dummy359 = model->addOperand(&type25);
  auto param359 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t activation5_init[] = {1};
  model->setOperandValue(activation5, activation5_init, sizeof(int32_t) * 1);
  static bool8 time_major5_init[] = {false};
  model->setOperandValue(time_major5, time_major5_init, sizeof(bool8) * 1);
  static bool8 merge_outputs5_init[] = {false};
  model->setOperandValue(merge_outputs5, merge_outputs5_init, sizeof(bool8) * 1);
  static _Float16 dummy348_init[] = {0.0f};
  model->setOperandValue(dummy348, dummy348_init, sizeof(_Float16) * 1);
  static int32_t param348_init[] = {0};
  model->setOperandValue(param348, param348_init, sizeof(int32_t) * 1);
  static _Float16 dummy349_init[] = {0.0f};
  model->setOperandValue(dummy349, dummy349_init, sizeof(_Float16) * 1);
  static int32_t param349_init[] = {0};
  model->setOperandValue(param349, param349_init, sizeof(int32_t) * 1);
  static _Float16 dummy350_init[] = {0.0f};
  model->setOperandValue(dummy350, dummy350_init, sizeof(_Float16) * 1);
  static int32_t param350_init[] = {0};
  model->setOperandValue(param350, param350_init, sizeof(int32_t) * 1);
  static _Float16 dummy351_init[] = {0.0f};
  model->setOperandValue(dummy351, dummy351_init, sizeof(_Float16) * 1);
  static int32_t param351_init[] = {0};
  model->setOperandValue(param351, param351_init, sizeof(int32_t) * 1);
  static _Float16 dummy352_init[] = {0.0f};
  model->setOperandValue(dummy352, dummy352_init, sizeof(_Float16) * 1);
  static int32_t param352_init[] = {0};
  model->setOperandValue(param352, param352_init, sizeof(int32_t) * 1);
  static _Float16 dummy353_init[] = {0.0f};
  model->setOperandValue(dummy353, dummy353_init, sizeof(_Float16) * 1);
  static int32_t param353_init[] = {0};
  model->setOperandValue(param353, param353_init, sizeof(int32_t) * 1);
  static _Float16 dummy354_init[] = {0.0f};
  model->setOperandValue(dummy354, dummy354_init, sizeof(_Float16) * 1);
  static int32_t param354_init[] = {0};
  model->setOperandValue(param354, param354_init, sizeof(int32_t) * 1);
  static _Float16 dummy355_init[] = {0.0f};
  model->setOperandValue(dummy355, dummy355_init, sizeof(_Float16) * 1);
  static int32_t param355_init[] = {0};
  model->setOperandValue(param355, param355_init, sizeof(int32_t) * 1);
  static _Float16 dummy356_init[] = {0.0f};
  model->setOperandValue(dummy356, dummy356_init, sizeof(_Float16) * 1);
  static int32_t param356_init[] = {0};
  model->setOperandValue(param356, param356_init, sizeof(int32_t) * 1);
  static _Float16 dummy357_init[] = {0.0f};
  model->setOperandValue(dummy357, dummy357_init, sizeof(_Float16) * 1);
  static int32_t param357_init[] = {0};
  model->setOperandValue(param357, param357_init, sizeof(int32_t) * 1);
  static _Float16 dummy358_init[] = {0.0f};
  model->setOperandValue(dummy358, dummy358_init, sizeof(_Float16) * 1);
  static int32_t param358_init[] = {0};
  model->setOperandValue(param358, param358_init, sizeof(int32_t) * 1);
  static _Float16 dummy359_init[] = {0.0f};
  model->setOperandValue(dummy359, dummy359_init, sizeof(_Float16) * 1);
  static int32_t param359_init[] = {0};
  model->setOperandValue(param359, param359_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input5_tmp, dummy348, param348}, {input5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_weights5_tmp, dummy349, param349}, {fw_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_recurrent_weights5_tmp, dummy350, param350}, {fw_recurrent_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_bias5_tmp, dummy351, param351}, {fw_bias5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_hidden_state5_tmp, dummy352, param352}, {fw_hidden_state5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_weights5_tmp, dummy353, param353}, {bw_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_recurrent_weights5_tmp, dummy354, param354}, {bw_recurrent_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_bias5_tmp, dummy355, param355}, {bw_bias5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_hidden_state5_tmp, dummy356, param356}, {bw_hidden_state5});
  model->addOperation(ANEURALNETWORKS_ADD, {aux_input5_tmp, dummy357, param357}, {aux_input5});
  model->addOperation(ANEURALNETWORKS_ADD, {fw_aux_weights5_tmp, dummy358, param358}, {fw_aux_weights5});
  model->addOperation(ANEURALNETWORKS_ADD, {bw_aux_weights5_tmp, dummy359, param359}, {bw_aux_weights5});
  model->addOperation(ANEURALNETWORKS_BIDIRECTIONAL_SEQUENCE_RNN, {input5, fw_weights5, fw_recurrent_weights5, fw_bias5, fw_hidden_state5, bw_weights5, bw_recurrent_weights5, bw_bias5, bw_hidden_state5, aux_input5, fw_aux_weights5, bw_aux_weights5, activation5, time_major5, merge_outputs5}, {fw_output5, bw_output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5_tmp, fw_weights5_tmp, fw_recurrent_weights5_tmp, fw_bias5_tmp, fw_hidden_state5_tmp, bw_weights5_tmp, bw_recurrent_weights5_tmp, bw_bias5_tmp, bw_hidden_state5_tmp, aux_input5_tmp, fw_aux_weights5_tmp, bw_aux_weights5_tmp},
    {fw_output5, bw_output4});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::bidirectional_sequence_rnn
