// Generated from unidirectional_sequence_lstm_cifg_peephole.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::unidirectional_sequence_lstm_cifg_peephole {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 1, 4});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto input_to_input_weights = model->addOperand(&type1);
  auto input_to_forget_weights = model->addOperand(&type1);
  auto input_to_cell_weights = model->addOperand(&type1);
  auto input_to_output_weights = model->addOperand(&type1);
  auto recurrent_to_intput_weights = model->addOperand(&type2);
  auto recurrent_to_forget_weights = model->addOperand(&type2);
  auto recurrent_to_cell_weights = model->addOperand(&type2);
  auto recurrent_to_output_weights = model->addOperand(&type2);
  auto cell_to_input_weights = model->addOperand(&type3);
  auto cell_to_forget_weights = model->addOperand(&type3);
  auto cell_to_output_weights = model->addOperand(&type3);
  auto input_gate_bias = model->addOperand(&type3);
  auto forget_gate_bias = model->addOperand(&type3);
  auto cell_gate_bias = model->addOperand(&type3);
  auto output_gate_bias = model->addOperand(&type3);
  auto projection_weights = model->addOperand(&type2);
  auto projection_bias = model->addOperand(&type4);
  auto output_state_in = model->addOperand(&type5);
  auto cell_state_in = model->addOperand(&type5);
  auto activation_param = model->addOperand(&type6);
  auto cell_clip_param = model->addOperand(&type7);
  auto proj_clip_param = model->addOperand(&type7);
  auto time_major_param = model->addOperand(&type8);
  auto input_layer_norm_weights = model->addOperand(&type3);
  auto forget_layer_norm_weights = model->addOperand(&type3);
  auto cell_layer_norm_weights = model->addOperand(&type3);
  auto output_layer_norm_weights = model->addOperand(&type3);
  auto output = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t activation_param_init[] = {4};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  static float cell_clip_param_init[] = {0.0f};
  model->setOperandValue(cell_clip_param, cell_clip_param_init, sizeof(float) * 1);
  static float proj_clip_param_init[] = {0.0f};
  model->setOperandValue(proj_clip_param, proj_clip_param_init, sizeof(float) * 1);
  static bool8 time_major_param_init[] = {true};
  model->setOperandValue(time_major_param, time_major_param_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_LSTM, {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, activation_param, cell_clip_param, proj_clip_param, time_major_param, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights},
    {output});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_lstm_cifg_peephole
namespace generated_tests::unidirectional_sequence_lstm_cifg_peephole {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 2});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto input_to_input_weights = model->addOperand(&type1);
  auto input_to_forget_weights = model->addOperand(&type1);
  auto input_to_cell_weights = model->addOperand(&type1);
  auto input_to_output_weights = model->addOperand(&type1);
  auto recurrent_to_intput_weights = model->addOperand(&type2);
  auto recurrent_to_forget_weights = model->addOperand(&type2);
  auto recurrent_to_cell_weights = model->addOperand(&type2);
  auto recurrent_to_output_weights = model->addOperand(&type2);
  auto cell_to_input_weights = model->addOperand(&type3);
  auto cell_to_forget_weights = model->addOperand(&type3);
  auto cell_to_output_weights = model->addOperand(&type3);
  auto input_gate_bias = model->addOperand(&type3);
  auto forget_gate_bias = model->addOperand(&type3);
  auto cell_gate_bias = model->addOperand(&type3);
  auto output_gate_bias = model->addOperand(&type3);
  auto projection_weights = model->addOperand(&type2);
  auto projection_bias = model->addOperand(&type4);
  auto output_state_in = model->addOperand(&type5);
  auto cell_state_in = model->addOperand(&type5);
  auto activation_param = model->addOperand(&type6);
  auto cell_clip_param = model->addOperand(&type7);
  auto proj_clip_param = model->addOperand(&type7);
  auto time_major_param = model->addOperand(&type8);
  auto input_layer_norm_weights = model->addOperand(&type3);
  auto forget_layer_norm_weights = model->addOperand(&type3);
  auto cell_layer_norm_weights = model->addOperand(&type3);
  auto output_layer_norm_weights = model->addOperand(&type3);
  auto output = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t activation_param_init[] = {4};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  static float cell_clip_param_init[] = {0.0f};
  model->setOperandValue(cell_clip_param, cell_clip_param_init, sizeof(float) * 1);
  static float proj_clip_param_init[] = {0.0f};
  model->setOperandValue(proj_clip_param, proj_clip_param_init, sizeof(float) * 1);
  static bool8 time_major_param_init[] = {true};
  model->setOperandValue(time_major_param, time_major_param_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_LSTM, {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, activation_param, cell_clip_param, proj_clip_param, time_major_param, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights},
    {output});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_lstm_cifg_peephole
namespace generated_tests::unidirectional_sequence_lstm_cifg_peephole {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::TENSOR_FLOAT32, {3, 1, 4});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto input_to_input_weights = model->addOperand(&type1);
  auto input_to_forget_weights = model->addOperand(&type1);
  auto input_to_cell_weights = model->addOperand(&type1);
  auto input_to_output_weights = model->addOperand(&type1);
  auto recurrent_to_intput_weights = model->addOperand(&type2);
  auto recurrent_to_forget_weights = model->addOperand(&type2);
  auto recurrent_to_cell_weights = model->addOperand(&type2);
  auto recurrent_to_output_weights = model->addOperand(&type2);
  auto cell_to_input_weights = model->addOperand(&type3);
  auto cell_to_forget_weights = model->addOperand(&type3);
  auto cell_to_output_weights = model->addOperand(&type3);
  auto input_gate_bias = model->addOperand(&type3);
  auto forget_gate_bias = model->addOperand(&type3);
  auto cell_gate_bias = model->addOperand(&type3);
  auto output_gate_bias = model->addOperand(&type3);
  auto projection_weights = model->addOperand(&type2);
  auto projection_bias = model->addOperand(&type4);
  auto output_state_in = model->addOperand(&type5);
  auto cell_state_in = model->addOperand(&type5);
  auto activation_param = model->addOperand(&type6);
  auto cell_clip_param = model->addOperand(&type7);
  auto proj_clip_param = model->addOperand(&type7);
  auto time_major_param = model->addOperand(&type8);
  auto input_layer_norm_weights = model->addOperand(&type3);
  auto forget_layer_norm_weights = model->addOperand(&type3);
  auto cell_layer_norm_weights = model->addOperand(&type3);
  auto output_layer_norm_weights = model->addOperand(&type3);
  auto output = model->addOperand(&type9);
  auto input_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type11);
  auto param = model->addOperand(&type6);
  auto input_to_forget_weights_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type11);
  auto param1 = model->addOperand(&type6);
  auto input_to_cell_weights_tmp = model->addOperand(&type1);
  auto dummy2 = model->addOperand(&type11);
  auto param2 = model->addOperand(&type6);
  auto input_to_output_weights_tmp = model->addOperand(&type1);
  auto dummy3 = model->addOperand(&type11);
  auto param3 = model->addOperand(&type6);
  auto recurrent_to_forget_weights_tmp = model->addOperand(&type2);
  auto dummy4 = model->addOperand(&type11);
  auto param4 = model->addOperand(&type6);
  auto recurrent_to_cell_weights_tmp = model->addOperand(&type2);
  auto dummy5 = model->addOperand(&type11);
  auto param5 = model->addOperand(&type6);
  auto recurrent_to_output_weights_tmp = model->addOperand(&type2);
  auto dummy6 = model->addOperand(&type11);
  auto param6 = model->addOperand(&type6);
  auto cell_to_forget_weights_tmp = model->addOperand(&type3);
  auto dummy7 = model->addOperand(&type11);
  auto param7 = model->addOperand(&type6);
  auto cell_to_output_weights_tmp = model->addOperand(&type3);
  auto dummy8 = model->addOperand(&type11);
  auto param8 = model->addOperand(&type6);
  auto forget_gate_bias_tmp = model->addOperand(&type3);
  auto dummy9 = model->addOperand(&type11);
  auto param9 = model->addOperand(&type6);
  auto cell_gate_bias_tmp = model->addOperand(&type3);
  auto dummy10 = model->addOperand(&type11);
  auto param10 = model->addOperand(&type6);
  auto output_gate_bias_tmp = model->addOperand(&type3);
  auto dummy11 = model->addOperand(&type11);
  auto param11 = model->addOperand(&type6);
  auto output_state_in_tmp = model->addOperand(&type5);
  auto dummy12 = model->addOperand(&type11);
  auto param12 = model->addOperand(&type6);
  auto cell_state_in_tmp = model->addOperand(&type5);
  auto dummy13 = model->addOperand(&type11);
  auto param13 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation_param_init[] = {4};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  static float cell_clip_param_init[] = {0.0f};
  model->setOperandValue(cell_clip_param, cell_clip_param_init, sizeof(float) * 1);
  static float proj_clip_param_init[] = {0.0f};
  model->setOperandValue(proj_clip_param, proj_clip_param_init, sizeof(float) * 1);
  static bool8 time_major_param_init[] = {true};
  model->setOperandValue(time_major_param, time_major_param_init, sizeof(bool8) * 1);
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
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy, param}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_forget_weights_tmp, dummy1, param1}, {input_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_cell_weights_tmp, dummy2, param2}, {input_to_cell_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_output_weights_tmp, dummy3, param3}, {input_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_forget_weights_tmp, dummy4, param4}, {recurrent_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_cell_weights_tmp, dummy5, param5}, {recurrent_to_cell_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_output_weights_tmp, dummy6, param6}, {recurrent_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_to_forget_weights_tmp, dummy7, param7}, {cell_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_to_output_weights_tmp, dummy8, param8}, {cell_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {forget_gate_bias_tmp, dummy9, param9}, {forget_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_gate_bias_tmp, dummy10, param10}, {cell_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {output_gate_bias_tmp, dummy11, param11}, {output_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {output_state_in_tmp, dummy12, param12}, {output_state_in});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_state_in_tmp, dummy13, param13}, {cell_state_in});
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_LSTM, {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, activation_param, cell_clip_param, proj_clip_param, time_major_param, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_to_input_weights, recurrent_to_intput_weights, cell_to_input_weights, input_gate_bias, projection_weights, projection_bias, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights, input_tmp, input_to_forget_weights_tmp, input_to_cell_weights_tmp, input_to_output_weights_tmp, recurrent_to_forget_weights_tmp, recurrent_to_cell_weights_tmp, recurrent_to_output_weights_tmp, cell_to_forget_weights_tmp, cell_to_output_weights_tmp, forget_gate_bias_tmp, cell_gate_bias_tmp, output_gate_bias_tmp, output_state_in_tmp, cell_state_in_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_lstm_cifg_peephole
namespace generated_tests::unidirectional_sequence_lstm_cifg_peephole {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 2});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type11(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto input_to_input_weights = model->addOperand(&type1);
  auto input_to_forget_weights = model->addOperand(&type1);
  auto input_to_cell_weights = model->addOperand(&type1);
  auto input_to_output_weights = model->addOperand(&type1);
  auto recurrent_to_intput_weights = model->addOperand(&type2);
  auto recurrent_to_forget_weights = model->addOperand(&type2);
  auto recurrent_to_cell_weights = model->addOperand(&type2);
  auto recurrent_to_output_weights = model->addOperand(&type2);
  auto cell_to_input_weights = model->addOperand(&type3);
  auto cell_to_forget_weights = model->addOperand(&type3);
  auto cell_to_output_weights = model->addOperand(&type3);
  auto input_gate_bias = model->addOperand(&type3);
  auto forget_gate_bias = model->addOperand(&type3);
  auto cell_gate_bias = model->addOperand(&type3);
  auto output_gate_bias = model->addOperand(&type3);
  auto projection_weights = model->addOperand(&type2);
  auto projection_bias = model->addOperand(&type4);
  auto output_state_in = model->addOperand(&type5);
  auto cell_state_in = model->addOperand(&type5);
  auto activation_param = model->addOperand(&type6);
  auto cell_clip_param = model->addOperand(&type7);
  auto proj_clip_param = model->addOperand(&type7);
  auto time_major_param = model->addOperand(&type8);
  auto input_layer_norm_weights = model->addOperand(&type3);
  auto forget_layer_norm_weights = model->addOperand(&type3);
  auto cell_layer_norm_weights = model->addOperand(&type3);
  auto output_layer_norm_weights = model->addOperand(&type3);
  auto output = model->addOperand(&type10);
  auto input_tmp = model->addOperand(&type0);
  auto dummy14 = model->addOperand(&type11);
  auto param14 = model->addOperand(&type6);
  auto input_to_forget_weights_tmp = model->addOperand(&type1);
  auto dummy15 = model->addOperand(&type11);
  auto param15 = model->addOperand(&type6);
  auto input_to_cell_weights_tmp = model->addOperand(&type1);
  auto dummy16 = model->addOperand(&type11);
  auto param16 = model->addOperand(&type6);
  auto input_to_output_weights_tmp = model->addOperand(&type1);
  auto dummy17 = model->addOperand(&type11);
  auto param17 = model->addOperand(&type6);
  auto recurrent_to_forget_weights_tmp = model->addOperand(&type2);
  auto dummy18 = model->addOperand(&type11);
  auto param18 = model->addOperand(&type6);
  auto recurrent_to_cell_weights_tmp = model->addOperand(&type2);
  auto dummy19 = model->addOperand(&type11);
  auto param19 = model->addOperand(&type6);
  auto recurrent_to_output_weights_tmp = model->addOperand(&type2);
  auto dummy20 = model->addOperand(&type11);
  auto param20 = model->addOperand(&type6);
  auto cell_to_forget_weights_tmp = model->addOperand(&type3);
  auto dummy21 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type6);
  auto cell_to_output_weights_tmp = model->addOperand(&type3);
  auto dummy22 = model->addOperand(&type11);
  auto param22 = model->addOperand(&type6);
  auto forget_gate_bias_tmp = model->addOperand(&type3);
  auto dummy23 = model->addOperand(&type11);
  auto param23 = model->addOperand(&type6);
  auto cell_gate_bias_tmp = model->addOperand(&type3);
  auto dummy24 = model->addOperand(&type11);
  auto param24 = model->addOperand(&type6);
  auto output_gate_bias_tmp = model->addOperand(&type3);
  auto dummy25 = model->addOperand(&type11);
  auto param25 = model->addOperand(&type6);
  auto output_state_in_tmp = model->addOperand(&type5);
  auto dummy26 = model->addOperand(&type11);
  auto param26 = model->addOperand(&type6);
  auto cell_state_in_tmp = model->addOperand(&type5);
  auto dummy27 = model->addOperand(&type11);
  auto param27 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation_param_init[] = {4};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  static float cell_clip_param_init[] = {0.0f};
  model->setOperandValue(cell_clip_param, cell_clip_param_init, sizeof(float) * 1);
  static float proj_clip_param_init[] = {0.0f};
  model->setOperandValue(proj_clip_param, proj_clip_param_init, sizeof(float) * 1);
  static bool8 time_major_param_init[] = {true};
  model->setOperandValue(time_major_param, time_major_param_init, sizeof(bool8) * 1);
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
  static float dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(float) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy14, param14}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_forget_weights_tmp, dummy15, param15}, {input_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_cell_weights_tmp, dummy16, param16}, {input_to_cell_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_output_weights_tmp, dummy17, param17}, {input_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_forget_weights_tmp, dummy18, param18}, {recurrent_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_cell_weights_tmp, dummy19, param19}, {recurrent_to_cell_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_output_weights_tmp, dummy20, param20}, {recurrent_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_to_forget_weights_tmp, dummy21, param21}, {cell_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_to_output_weights_tmp, dummy22, param22}, {cell_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {forget_gate_bias_tmp, dummy23, param23}, {forget_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_gate_bias_tmp, dummy24, param24}, {cell_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {output_gate_bias_tmp, dummy25, param25}, {output_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {output_state_in_tmp, dummy26, param26}, {output_state_in});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_state_in_tmp, dummy27, param27}, {cell_state_in});
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_LSTM, {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, activation_param, cell_clip_param, proj_clip_param, time_major_param, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_to_input_weights, recurrent_to_intput_weights, cell_to_input_weights, input_gate_bias, projection_weights, projection_bias, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights, input_tmp, input_to_forget_weights_tmp, input_to_cell_weights_tmp, input_to_output_weights_tmp, recurrent_to_forget_weights_tmp, recurrent_to_cell_weights_tmp, recurrent_to_output_weights_tmp, cell_to_forget_weights_tmp, cell_to_output_weights_tmp, forget_gate_bias_tmp, cell_gate_bias_tmp, output_gate_bias_tmp, output_state_in_tmp, cell_state_in_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_lstm_cifg_peephole
