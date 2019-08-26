// Generated from unidirectional_sequence_lstm_layer_norm_cifg_peephole.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 2, 5});
  OperandType type1(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {3, 2, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_FLOAT32, {4});
  OperandType type6(Type::TENSOR_FLOAT32, {3, 4});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto input_to_input_weights = model->addOperand(&type1);
  auto input_to_forget_weights = model->addOperand(&type2);
  auto input_to_cell_weights = model->addOperand(&type2);
  auto input_to_output_weights = model->addOperand(&type2);
  auto recurrent_to_intput_weights = model->addOperand(&type1);
  auto recurrent_to_forget_weights = model->addOperand(&type3);
  auto recurrent_to_cell_weights = model->addOperand(&type3);
  auto recurrent_to_output_weights = model->addOperand(&type3);
  auto cell_to_input_weights = model->addOperand(&type4);
  auto cell_to_forget_weights = model->addOperand(&type5);
  auto cell_to_output_weights = model->addOperand(&type5);
  auto input_gate_bias = model->addOperand(&type4);
  auto forget_gate_bias = model->addOperand(&type5);
  auto cell_gate_bias = model->addOperand(&type5);
  auto output_gate_bias = model->addOperand(&type5);
  auto projection_weights = model->addOperand(&type6);
  auto projection_bias = model->addOperand(&type4);
  auto output_state_in = model->addOperand(&type7);
  auto cell_state_in = model->addOperand(&type8);
  auto activation_param = model->addOperand(&type9);
  auto cell_clip_param = model->addOperand(&type10);
  auto proj_clip_param = model->addOperand(&type10);
  auto time_major_param = model->addOperand(&type11);
  auto input_layer_norm_weights = model->addOperand(&type4);
  auto forget_layer_norm_weights = model->addOperand(&type5);
  auto cell_layer_norm_weights = model->addOperand(&type5);
  auto output_layer_norm_weights = model->addOperand(&type5);
  auto output = model->addOperand(&type12);
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

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole
namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 2, 5});
  OperandType type1(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_FLOAT32, {4});
  OperandType type6(Type::TENSOR_FLOAT32, {3, 4});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto input_to_input_weights = model->addOperand(&type1);
  auto input_to_forget_weights = model->addOperand(&type2);
  auto input_to_cell_weights = model->addOperand(&type2);
  auto input_to_output_weights = model->addOperand(&type2);
  auto recurrent_to_intput_weights = model->addOperand(&type1);
  auto recurrent_to_forget_weights = model->addOperand(&type3);
  auto recurrent_to_cell_weights = model->addOperand(&type3);
  auto recurrent_to_output_weights = model->addOperand(&type3);
  auto cell_to_input_weights = model->addOperand(&type4);
  auto cell_to_forget_weights = model->addOperand(&type5);
  auto cell_to_output_weights = model->addOperand(&type5);
  auto input_gate_bias = model->addOperand(&type4);
  auto forget_gate_bias = model->addOperand(&type5);
  auto cell_gate_bias = model->addOperand(&type5);
  auto output_gate_bias = model->addOperand(&type5);
  auto projection_weights = model->addOperand(&type6);
  auto projection_bias = model->addOperand(&type4);
  auto output_state_in = model->addOperand(&type7);
  auto cell_state_in = model->addOperand(&type8);
  auto activation_param = model->addOperand(&type9);
  auto cell_clip_param = model->addOperand(&type10);
  auto proj_clip_param = model->addOperand(&type10);
  auto time_major_param = model->addOperand(&type11);
  auto input_layer_norm_weights = model->addOperand(&type4);
  auto forget_layer_norm_weights = model->addOperand(&type5);
  auto cell_layer_norm_weights = model->addOperand(&type5);
  auto output_layer_norm_weights = model->addOperand(&type5);
  auto output = model->addOperand(&type13);
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

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole
namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 2, 5});
  OperandType type1(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {3, 2, 3});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_FLOAT32, {4});
  OperandType type6(Type::TENSOR_FLOAT32, {3, 4});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto input_to_input_weights = model->addOperand(&type1);
  auto input_to_forget_weights = model->addOperand(&type2);
  auto input_to_cell_weights = model->addOperand(&type2);
  auto input_to_output_weights = model->addOperand(&type2);
  auto recurrent_to_intput_weights = model->addOperand(&type1);
  auto recurrent_to_forget_weights = model->addOperand(&type3);
  auto recurrent_to_cell_weights = model->addOperand(&type3);
  auto recurrent_to_output_weights = model->addOperand(&type3);
  auto cell_to_input_weights = model->addOperand(&type4);
  auto cell_to_forget_weights = model->addOperand(&type5);
  auto cell_to_output_weights = model->addOperand(&type5);
  auto input_gate_bias = model->addOperand(&type4);
  auto forget_gate_bias = model->addOperand(&type5);
  auto cell_gate_bias = model->addOperand(&type5);
  auto output_gate_bias = model->addOperand(&type5);
  auto projection_weights = model->addOperand(&type6);
  auto projection_bias = model->addOperand(&type4);
  auto output_state_in = model->addOperand(&type7);
  auto cell_state_in = model->addOperand(&type8);
  auto activation_param = model->addOperand(&type9);
  auto cell_clip_param = model->addOperand(&type10);
  auto proj_clip_param = model->addOperand(&type10);
  auto time_major_param = model->addOperand(&type11);
  auto input_layer_norm_weights = model->addOperand(&type4);
  auto forget_layer_norm_weights = model->addOperand(&type5);
  auto cell_layer_norm_weights = model->addOperand(&type5);
  auto output_layer_norm_weights = model->addOperand(&type5);
  auto output = model->addOperand(&type12);
  auto input_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type14);
  auto param = model->addOperand(&type9);
  auto input_to_forget_weights_tmp = model->addOperand(&type2);
  auto dummy1 = model->addOperand(&type14);
  auto param1 = model->addOperand(&type9);
  auto input_to_cell_weights_tmp = model->addOperand(&type2);
  auto dummy2 = model->addOperand(&type14);
  auto param2 = model->addOperand(&type9);
  auto input_to_output_weights_tmp = model->addOperand(&type2);
  auto dummy3 = model->addOperand(&type14);
  auto param3 = model->addOperand(&type9);
  auto recurrent_to_forget_weights_tmp = model->addOperand(&type3);
  auto dummy4 = model->addOperand(&type14);
  auto param4 = model->addOperand(&type9);
  auto recurrent_to_cell_weights_tmp = model->addOperand(&type3);
  auto dummy5 = model->addOperand(&type14);
  auto param5 = model->addOperand(&type9);
  auto recurrent_to_output_weights_tmp = model->addOperand(&type3);
  auto dummy6 = model->addOperand(&type14);
  auto param6 = model->addOperand(&type9);
  auto cell_to_forget_weights_tmp = model->addOperand(&type5);
  auto dummy7 = model->addOperand(&type14);
  auto param7 = model->addOperand(&type9);
  auto cell_to_output_weights_tmp = model->addOperand(&type5);
  auto dummy8 = model->addOperand(&type14);
  auto param8 = model->addOperand(&type9);
  auto forget_gate_bias_tmp = model->addOperand(&type5);
  auto dummy9 = model->addOperand(&type14);
  auto param9 = model->addOperand(&type9);
  auto cell_gate_bias_tmp = model->addOperand(&type5);
  auto dummy10 = model->addOperand(&type14);
  auto param10 = model->addOperand(&type9);
  auto output_gate_bias_tmp = model->addOperand(&type5);
  auto dummy11 = model->addOperand(&type14);
  auto param11 = model->addOperand(&type9);
  auto projection_weights_tmp = model->addOperand(&type6);
  auto dummy12 = model->addOperand(&type14);
  auto param12 = model->addOperand(&type9);
  auto output_state_in_tmp = model->addOperand(&type7);
  auto dummy13 = model->addOperand(&type14);
  auto param13 = model->addOperand(&type9);
  auto cell_state_in_tmp = model->addOperand(&type8);
  auto dummy14 = model->addOperand(&type14);
  auto param14 = model->addOperand(&type9);
  auto forget_layer_norm_weights_tmp = model->addOperand(&type5);
  auto dummy15 = model->addOperand(&type14);
  auto param15 = model->addOperand(&type9);
  auto cell_layer_norm_weights_tmp = model->addOperand(&type5);
  auto dummy16 = model->addOperand(&type14);
  auto param16 = model->addOperand(&type9);
  auto output_layer_norm_weights_tmp = model->addOperand(&type5);
  auto dummy17 = model->addOperand(&type14);
  auto param17 = model->addOperand(&type9);
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
  model->addOperation(ANEURALNETWORKS_ADD, {projection_weights_tmp, dummy12, param12}, {projection_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {output_state_in_tmp, dummy13, param13}, {output_state_in});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_state_in_tmp, dummy14, param14}, {cell_state_in});
  model->addOperation(ANEURALNETWORKS_ADD, {forget_layer_norm_weights_tmp, dummy15, param15}, {forget_layer_norm_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_layer_norm_weights_tmp, dummy16, param16}, {cell_layer_norm_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {output_layer_norm_weights_tmp, dummy17, param17}, {output_layer_norm_weights});
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_LSTM, {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, activation_param, cell_clip_param, proj_clip_param, time_major_param, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_to_input_weights, recurrent_to_intput_weights, cell_to_input_weights, input_gate_bias, projection_bias, input_layer_norm_weights, input_tmp, input_to_forget_weights_tmp, input_to_cell_weights_tmp, input_to_output_weights_tmp, recurrent_to_forget_weights_tmp, recurrent_to_cell_weights_tmp, recurrent_to_output_weights_tmp, cell_to_forget_weights_tmp, cell_to_output_weights_tmp, forget_gate_bias_tmp, cell_gate_bias_tmp, output_gate_bias_tmp, projection_weights_tmp, output_state_in_tmp, cell_state_in_tmp, forget_layer_norm_weights_tmp, cell_layer_norm_weights_tmp, output_layer_norm_weights_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole
namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 2, 5});
  OperandType type1(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_FLOAT32, {4});
  OperandType type6(Type::TENSOR_FLOAT32, {3, 4});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto input_to_input_weights = model->addOperand(&type1);
  auto input_to_forget_weights = model->addOperand(&type2);
  auto input_to_cell_weights = model->addOperand(&type2);
  auto input_to_output_weights = model->addOperand(&type2);
  auto recurrent_to_intput_weights = model->addOperand(&type1);
  auto recurrent_to_forget_weights = model->addOperand(&type3);
  auto recurrent_to_cell_weights = model->addOperand(&type3);
  auto recurrent_to_output_weights = model->addOperand(&type3);
  auto cell_to_input_weights = model->addOperand(&type4);
  auto cell_to_forget_weights = model->addOperand(&type5);
  auto cell_to_output_weights = model->addOperand(&type5);
  auto input_gate_bias = model->addOperand(&type4);
  auto forget_gate_bias = model->addOperand(&type5);
  auto cell_gate_bias = model->addOperand(&type5);
  auto output_gate_bias = model->addOperand(&type5);
  auto projection_weights = model->addOperand(&type6);
  auto projection_bias = model->addOperand(&type4);
  auto output_state_in = model->addOperand(&type7);
  auto cell_state_in = model->addOperand(&type8);
  auto activation_param = model->addOperand(&type9);
  auto cell_clip_param = model->addOperand(&type10);
  auto proj_clip_param = model->addOperand(&type10);
  auto time_major_param = model->addOperand(&type11);
  auto input_layer_norm_weights = model->addOperand(&type4);
  auto forget_layer_norm_weights = model->addOperand(&type5);
  auto cell_layer_norm_weights = model->addOperand(&type5);
  auto output_layer_norm_weights = model->addOperand(&type5);
  auto output = model->addOperand(&type13);
  auto input_tmp = model->addOperand(&type0);
  auto dummy18 = model->addOperand(&type14);
  auto param18 = model->addOperand(&type9);
  auto input_to_forget_weights_tmp = model->addOperand(&type2);
  auto dummy19 = model->addOperand(&type14);
  auto param19 = model->addOperand(&type9);
  auto input_to_cell_weights_tmp = model->addOperand(&type2);
  auto dummy20 = model->addOperand(&type14);
  auto param20 = model->addOperand(&type9);
  auto input_to_output_weights_tmp = model->addOperand(&type2);
  auto dummy21 = model->addOperand(&type14);
  auto param21 = model->addOperand(&type9);
  auto recurrent_to_forget_weights_tmp = model->addOperand(&type3);
  auto dummy22 = model->addOperand(&type14);
  auto param22 = model->addOperand(&type9);
  auto recurrent_to_cell_weights_tmp = model->addOperand(&type3);
  auto dummy23 = model->addOperand(&type14);
  auto param23 = model->addOperand(&type9);
  auto recurrent_to_output_weights_tmp = model->addOperand(&type3);
  auto dummy24 = model->addOperand(&type14);
  auto param24 = model->addOperand(&type9);
  auto cell_to_forget_weights_tmp = model->addOperand(&type5);
  auto dummy25 = model->addOperand(&type14);
  auto param25 = model->addOperand(&type9);
  auto cell_to_output_weights_tmp = model->addOperand(&type5);
  auto dummy26 = model->addOperand(&type14);
  auto param26 = model->addOperand(&type9);
  auto forget_gate_bias_tmp = model->addOperand(&type5);
  auto dummy27 = model->addOperand(&type14);
  auto param27 = model->addOperand(&type9);
  auto cell_gate_bias_tmp = model->addOperand(&type5);
  auto dummy28 = model->addOperand(&type14);
  auto param28 = model->addOperand(&type9);
  auto output_gate_bias_tmp = model->addOperand(&type5);
  auto dummy29 = model->addOperand(&type14);
  auto param29 = model->addOperand(&type9);
  auto projection_weights_tmp = model->addOperand(&type6);
  auto dummy30 = model->addOperand(&type14);
  auto param30 = model->addOperand(&type9);
  auto output_state_in_tmp = model->addOperand(&type7);
  auto dummy31 = model->addOperand(&type14);
  auto param31 = model->addOperand(&type9);
  auto cell_state_in_tmp = model->addOperand(&type8);
  auto dummy32 = model->addOperand(&type14);
  auto param32 = model->addOperand(&type9);
  auto forget_layer_norm_weights_tmp = model->addOperand(&type5);
  auto dummy33 = model->addOperand(&type14);
  auto param33 = model->addOperand(&type9);
  auto cell_layer_norm_weights_tmp = model->addOperand(&type5);
  auto dummy34 = model->addOperand(&type14);
  auto param34 = model->addOperand(&type9);
  auto output_layer_norm_weights_tmp = model->addOperand(&type5);
  auto dummy35 = model->addOperand(&type14);
  auto param35 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t activation_param_init[] = {4};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  static float cell_clip_param_init[] = {0.0f};
  model->setOperandValue(cell_clip_param, cell_clip_param_init, sizeof(float) * 1);
  static float proj_clip_param_init[] = {0.0f};
  model->setOperandValue(proj_clip_param, proj_clip_param_init, sizeof(float) * 1);
  static bool8 time_major_param_init[] = {true};
  model->setOperandValue(time_major_param, time_major_param_init, sizeof(bool8) * 1);
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
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy18, param18}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_forget_weights_tmp, dummy19, param19}, {input_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_cell_weights_tmp, dummy20, param20}, {input_to_cell_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_output_weights_tmp, dummy21, param21}, {input_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_forget_weights_tmp, dummy22, param22}, {recurrent_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_cell_weights_tmp, dummy23, param23}, {recurrent_to_cell_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_output_weights_tmp, dummy24, param24}, {recurrent_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_to_forget_weights_tmp, dummy25, param25}, {cell_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_to_output_weights_tmp, dummy26, param26}, {cell_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {forget_gate_bias_tmp, dummy27, param27}, {forget_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_gate_bias_tmp, dummy28, param28}, {cell_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {output_gate_bias_tmp, dummy29, param29}, {output_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {projection_weights_tmp, dummy30, param30}, {projection_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {output_state_in_tmp, dummy31, param31}, {output_state_in});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_state_in_tmp, dummy32, param32}, {cell_state_in});
  model->addOperation(ANEURALNETWORKS_ADD, {forget_layer_norm_weights_tmp, dummy33, param33}, {forget_layer_norm_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_layer_norm_weights_tmp, dummy34, param34}, {cell_layer_norm_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {output_layer_norm_weights_tmp, dummy35, param35}, {output_layer_norm_weights});
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_LSTM, {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, activation_param, cell_clip_param, proj_clip_param, time_major_param, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_to_input_weights, recurrent_to_intput_weights, cell_to_input_weights, input_gate_bias, projection_bias, input_layer_norm_weights, input_tmp, input_to_forget_weights_tmp, input_to_cell_weights_tmp, input_to_output_weights_tmp, recurrent_to_forget_weights_tmp, recurrent_to_cell_weights_tmp, recurrent_to_output_weights_tmp, cell_to_forget_weights_tmp, cell_to_output_weights_tmp, forget_gate_bias_tmp, cell_gate_bias_tmp, output_gate_bias_tmp, projection_weights_tmp, output_state_in_tmp, cell_state_in_tmp, forget_layer_norm_weights_tmp, cell_layer_norm_weights_tmp, output_layer_norm_weights_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole
namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 2, 5});
  OperandType type1(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {3, 2, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_FLOAT32, {4});
  OperandType type6(Type::TENSOR_FLOAT32, {3, 4});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto input_to_input_weights = model->addOperand(&type1);
  auto input_to_forget_weights = model->addOperand(&type2);
  auto input_to_cell_weights = model->addOperand(&type2);
  auto input_to_output_weights = model->addOperand(&type2);
  auto recurrent_to_intput_weights = model->addOperand(&type1);
  auto recurrent_to_forget_weights = model->addOperand(&type3);
  auto recurrent_to_cell_weights = model->addOperand(&type3);
  auto recurrent_to_output_weights = model->addOperand(&type3);
  auto cell_to_input_weights = model->addOperand(&type4);
  auto cell_to_forget_weights = model->addOperand(&type5);
  auto cell_to_output_weights = model->addOperand(&type5);
  auto input_gate_bias = model->addOperand(&type4);
  auto forget_gate_bias = model->addOperand(&type5);
  auto cell_gate_bias = model->addOperand(&type5);
  auto output_gate_bias = model->addOperand(&type5);
  auto projection_weights = model->addOperand(&type6);
  auto projection_bias = model->addOperand(&type4);
  auto output_state_in = model->addOperand(&type7);
  auto cell_state_in = model->addOperand(&type8);
  auto activation_param = model->addOperand(&type9);
  auto cell_clip_param = model->addOperand(&type10);
  auto proj_clip_param = model->addOperand(&type10);
  auto time_major_param = model->addOperand(&type11);
  auto input_layer_norm_weights = model->addOperand(&type4);
  auto forget_layer_norm_weights = model->addOperand(&type5);
  auto cell_layer_norm_weights = model->addOperand(&type5);
  auto output_layer_norm_weights = model->addOperand(&type5);
  auto output = model->addOperand(&type12);
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
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole
namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

void CreateModel_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 2, 5});
  OperandType type1(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_FLOAT32, {4});
  OperandType type6(Type::TENSOR_FLOAT32, {3, 4});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto input_to_input_weights = model->addOperand(&type1);
  auto input_to_forget_weights = model->addOperand(&type2);
  auto input_to_cell_weights = model->addOperand(&type2);
  auto input_to_output_weights = model->addOperand(&type2);
  auto recurrent_to_intput_weights = model->addOperand(&type1);
  auto recurrent_to_forget_weights = model->addOperand(&type3);
  auto recurrent_to_cell_weights = model->addOperand(&type3);
  auto recurrent_to_output_weights = model->addOperand(&type3);
  auto cell_to_input_weights = model->addOperand(&type4);
  auto cell_to_forget_weights = model->addOperand(&type5);
  auto cell_to_output_weights = model->addOperand(&type5);
  auto input_gate_bias = model->addOperand(&type4);
  auto forget_gate_bias = model->addOperand(&type5);
  auto cell_gate_bias = model->addOperand(&type5);
  auto output_gate_bias = model->addOperand(&type5);
  auto projection_weights = model->addOperand(&type6);
  auto projection_bias = model->addOperand(&type4);
  auto output_state_in = model->addOperand(&type7);
  auto cell_state_in = model->addOperand(&type8);
  auto activation_param = model->addOperand(&type9);
  auto cell_clip_param = model->addOperand(&type10);
  auto proj_clip_param = model->addOperand(&type10);
  auto time_major_param = model->addOperand(&type11);
  auto input_layer_norm_weights = model->addOperand(&type4);
  auto forget_layer_norm_weights = model->addOperand(&type5);
  auto cell_layer_norm_weights = model->addOperand(&type5);
  auto output_layer_norm_weights = model->addOperand(&type5);
  auto output = model->addOperand(&type13);
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
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole
namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

void CreateModel_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 2, 5});
  OperandType type1(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {3, 2, 3});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_FLOAT32, {4});
  OperandType type6(Type::TENSOR_FLOAT32, {3, 4});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto input_to_input_weights = model->addOperand(&type1);
  auto input_to_forget_weights = model->addOperand(&type2);
  auto input_to_cell_weights = model->addOperand(&type2);
  auto input_to_output_weights = model->addOperand(&type2);
  auto recurrent_to_intput_weights = model->addOperand(&type1);
  auto recurrent_to_forget_weights = model->addOperand(&type3);
  auto recurrent_to_cell_weights = model->addOperand(&type3);
  auto recurrent_to_output_weights = model->addOperand(&type3);
  auto cell_to_input_weights = model->addOperand(&type4);
  auto cell_to_forget_weights = model->addOperand(&type5);
  auto cell_to_output_weights = model->addOperand(&type5);
  auto input_gate_bias = model->addOperand(&type4);
  auto forget_gate_bias = model->addOperand(&type5);
  auto cell_gate_bias = model->addOperand(&type5);
  auto output_gate_bias = model->addOperand(&type5);
  auto projection_weights = model->addOperand(&type6);
  auto projection_bias = model->addOperand(&type4);
  auto output_state_in = model->addOperand(&type7);
  auto cell_state_in = model->addOperand(&type8);
  auto activation_param = model->addOperand(&type9);
  auto cell_clip_param = model->addOperand(&type10);
  auto proj_clip_param = model->addOperand(&type10);
  auto time_major_param = model->addOperand(&type11);
  auto input_layer_norm_weights = model->addOperand(&type4);
  auto forget_layer_norm_weights = model->addOperand(&type5);
  auto cell_layer_norm_weights = model->addOperand(&type5);
  auto output_layer_norm_weights = model->addOperand(&type5);
  auto output = model->addOperand(&type12);
  auto input_tmp = model->addOperand(&type0);
  auto dummy36 = model->addOperand(&type14);
  auto param36 = model->addOperand(&type9);
  auto input_to_forget_weights_tmp = model->addOperand(&type2);
  auto dummy37 = model->addOperand(&type14);
  auto param37 = model->addOperand(&type9);
  auto input_to_cell_weights_tmp = model->addOperand(&type2);
  auto dummy38 = model->addOperand(&type14);
  auto param38 = model->addOperand(&type9);
  auto input_to_output_weights_tmp = model->addOperand(&type2);
  auto dummy39 = model->addOperand(&type14);
  auto param39 = model->addOperand(&type9);
  auto recurrent_to_forget_weights_tmp = model->addOperand(&type3);
  auto dummy40 = model->addOperand(&type14);
  auto param40 = model->addOperand(&type9);
  auto recurrent_to_cell_weights_tmp = model->addOperand(&type3);
  auto dummy41 = model->addOperand(&type14);
  auto param41 = model->addOperand(&type9);
  auto recurrent_to_output_weights_tmp = model->addOperand(&type3);
  auto dummy42 = model->addOperand(&type14);
  auto param42 = model->addOperand(&type9);
  auto cell_to_forget_weights_tmp = model->addOperand(&type5);
  auto dummy43 = model->addOperand(&type14);
  auto param43 = model->addOperand(&type9);
  auto cell_to_output_weights_tmp = model->addOperand(&type5);
  auto dummy44 = model->addOperand(&type14);
  auto param44 = model->addOperand(&type9);
  auto forget_gate_bias_tmp = model->addOperand(&type5);
  auto dummy45 = model->addOperand(&type14);
  auto param45 = model->addOperand(&type9);
  auto cell_gate_bias_tmp = model->addOperand(&type5);
  auto dummy46 = model->addOperand(&type14);
  auto param46 = model->addOperand(&type9);
  auto output_gate_bias_tmp = model->addOperand(&type5);
  auto dummy47 = model->addOperand(&type14);
  auto param47 = model->addOperand(&type9);
  auto projection_weights_tmp = model->addOperand(&type6);
  auto dummy48 = model->addOperand(&type14);
  auto param48 = model->addOperand(&type9);
  auto output_state_in_tmp = model->addOperand(&type7);
  auto dummy49 = model->addOperand(&type14);
  auto param49 = model->addOperand(&type9);
  auto cell_state_in_tmp = model->addOperand(&type8);
  auto dummy50 = model->addOperand(&type14);
  auto param50 = model->addOperand(&type9);
  auto forget_layer_norm_weights_tmp = model->addOperand(&type5);
  auto dummy51 = model->addOperand(&type14);
  auto param51 = model->addOperand(&type9);
  auto cell_layer_norm_weights_tmp = model->addOperand(&type5);
  auto dummy52 = model->addOperand(&type14);
  auto param52 = model->addOperand(&type9);
  auto output_layer_norm_weights_tmp = model->addOperand(&type5);
  auto dummy53 = model->addOperand(&type14);
  auto param53 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t activation_param_init[] = {4};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  static float cell_clip_param_init[] = {0.0f};
  model->setOperandValue(cell_clip_param, cell_clip_param_init, sizeof(float) * 1);
  static float proj_clip_param_init[] = {0.0f};
  model->setOperandValue(proj_clip_param, proj_clip_param_init, sizeof(float) * 1);
  static bool8 time_major_param_init[] = {true};
  model->setOperandValue(time_major_param, time_major_param_init, sizeof(bool8) * 1);
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
  static float dummy50_init[] = {0.0f};
  model->setOperandValue(dummy50, dummy50_init, sizeof(float) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static float dummy51_init[] = {0.0f};
  model->setOperandValue(dummy51, dummy51_init, sizeof(float) * 1);
  static int32_t param51_init[] = {0};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static float dummy52_init[] = {0.0f};
  model->setOperandValue(dummy52, dummy52_init, sizeof(float) * 1);
  static int32_t param52_init[] = {0};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static float dummy53_init[] = {0.0f};
  model->setOperandValue(dummy53, dummy53_init, sizeof(float) * 1);
  static int32_t param53_init[] = {0};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy36, param36}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_forget_weights_tmp, dummy37, param37}, {input_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_cell_weights_tmp, dummy38, param38}, {input_to_cell_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_output_weights_tmp, dummy39, param39}, {input_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_forget_weights_tmp, dummy40, param40}, {recurrent_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_cell_weights_tmp, dummy41, param41}, {recurrent_to_cell_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_output_weights_tmp, dummy42, param42}, {recurrent_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_to_forget_weights_tmp, dummy43, param43}, {cell_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_to_output_weights_tmp, dummy44, param44}, {cell_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {forget_gate_bias_tmp, dummy45, param45}, {forget_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_gate_bias_tmp, dummy46, param46}, {cell_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {output_gate_bias_tmp, dummy47, param47}, {output_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {projection_weights_tmp, dummy48, param48}, {projection_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {output_state_in_tmp, dummy49, param49}, {output_state_in});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_state_in_tmp, dummy50, param50}, {cell_state_in});
  model->addOperation(ANEURALNETWORKS_ADD, {forget_layer_norm_weights_tmp, dummy51, param51}, {forget_layer_norm_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_layer_norm_weights_tmp, dummy52, param52}, {cell_layer_norm_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {output_layer_norm_weights_tmp, dummy53, param53}, {output_layer_norm_weights});
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_LSTM, {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, activation_param, cell_clip_param, proj_clip_param, time_major_param, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_to_input_weights, recurrent_to_intput_weights, cell_to_input_weights, input_gate_bias, projection_bias, input_layer_norm_weights, input_tmp, input_to_forget_weights_tmp, input_to_cell_weights_tmp, input_to_output_weights_tmp, recurrent_to_forget_weights_tmp, recurrent_to_cell_weights_tmp, recurrent_to_output_weights_tmp, cell_to_forget_weights_tmp, cell_to_output_weights_tmp, forget_gate_bias_tmp, cell_gate_bias_tmp, output_gate_bias_tmp, projection_weights_tmp, output_state_in_tmp, cell_state_in_tmp, forget_layer_norm_weights_tmp, cell_layer_norm_weights_tmp, output_layer_norm_weights_tmp},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole
namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 2, 5});
  OperandType type1(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 5});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_FLOAT32, {4});
  OperandType type6(Type::TENSOR_FLOAT32, {3, 4});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto input_to_input_weights = model->addOperand(&type1);
  auto input_to_forget_weights = model->addOperand(&type2);
  auto input_to_cell_weights = model->addOperand(&type2);
  auto input_to_output_weights = model->addOperand(&type2);
  auto recurrent_to_intput_weights = model->addOperand(&type1);
  auto recurrent_to_forget_weights = model->addOperand(&type3);
  auto recurrent_to_cell_weights = model->addOperand(&type3);
  auto recurrent_to_output_weights = model->addOperand(&type3);
  auto cell_to_input_weights = model->addOperand(&type4);
  auto cell_to_forget_weights = model->addOperand(&type5);
  auto cell_to_output_weights = model->addOperand(&type5);
  auto input_gate_bias = model->addOperand(&type4);
  auto forget_gate_bias = model->addOperand(&type5);
  auto cell_gate_bias = model->addOperand(&type5);
  auto output_gate_bias = model->addOperand(&type5);
  auto projection_weights = model->addOperand(&type6);
  auto projection_bias = model->addOperand(&type4);
  auto output_state_in = model->addOperand(&type7);
  auto cell_state_in = model->addOperand(&type8);
  auto activation_param = model->addOperand(&type9);
  auto cell_clip_param = model->addOperand(&type10);
  auto proj_clip_param = model->addOperand(&type10);
  auto time_major_param = model->addOperand(&type11);
  auto input_layer_norm_weights = model->addOperand(&type4);
  auto forget_layer_norm_weights = model->addOperand(&type5);
  auto cell_layer_norm_weights = model->addOperand(&type5);
  auto output_layer_norm_weights = model->addOperand(&type5);
  auto output = model->addOperand(&type13);
  auto input_tmp = model->addOperand(&type0);
  auto dummy54 = model->addOperand(&type14);
  auto param54 = model->addOperand(&type9);
  auto input_to_forget_weights_tmp = model->addOperand(&type2);
  auto dummy55 = model->addOperand(&type14);
  auto param55 = model->addOperand(&type9);
  auto input_to_cell_weights_tmp = model->addOperand(&type2);
  auto dummy56 = model->addOperand(&type14);
  auto param56 = model->addOperand(&type9);
  auto input_to_output_weights_tmp = model->addOperand(&type2);
  auto dummy57 = model->addOperand(&type14);
  auto param57 = model->addOperand(&type9);
  auto recurrent_to_forget_weights_tmp = model->addOperand(&type3);
  auto dummy58 = model->addOperand(&type14);
  auto param58 = model->addOperand(&type9);
  auto recurrent_to_cell_weights_tmp = model->addOperand(&type3);
  auto dummy59 = model->addOperand(&type14);
  auto param59 = model->addOperand(&type9);
  auto recurrent_to_output_weights_tmp = model->addOperand(&type3);
  auto dummy60 = model->addOperand(&type14);
  auto param60 = model->addOperand(&type9);
  auto cell_to_forget_weights_tmp = model->addOperand(&type5);
  auto dummy61 = model->addOperand(&type14);
  auto param61 = model->addOperand(&type9);
  auto cell_to_output_weights_tmp = model->addOperand(&type5);
  auto dummy62 = model->addOperand(&type14);
  auto param62 = model->addOperand(&type9);
  auto forget_gate_bias_tmp = model->addOperand(&type5);
  auto dummy63 = model->addOperand(&type14);
  auto param63 = model->addOperand(&type9);
  auto cell_gate_bias_tmp = model->addOperand(&type5);
  auto dummy64 = model->addOperand(&type14);
  auto param64 = model->addOperand(&type9);
  auto output_gate_bias_tmp = model->addOperand(&type5);
  auto dummy65 = model->addOperand(&type14);
  auto param65 = model->addOperand(&type9);
  auto projection_weights_tmp = model->addOperand(&type6);
  auto dummy66 = model->addOperand(&type14);
  auto param66 = model->addOperand(&type9);
  auto output_state_in_tmp = model->addOperand(&type7);
  auto dummy67 = model->addOperand(&type14);
  auto param67 = model->addOperand(&type9);
  auto cell_state_in_tmp = model->addOperand(&type8);
  auto dummy68 = model->addOperand(&type14);
  auto param68 = model->addOperand(&type9);
  auto forget_layer_norm_weights_tmp = model->addOperand(&type5);
  auto dummy69 = model->addOperand(&type14);
  auto param69 = model->addOperand(&type9);
  auto cell_layer_norm_weights_tmp = model->addOperand(&type5);
  auto dummy70 = model->addOperand(&type14);
  auto param70 = model->addOperand(&type9);
  auto output_layer_norm_weights_tmp = model->addOperand(&type5);
  auto dummy71 = model->addOperand(&type14);
  auto param71 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t activation_param_init[] = {4};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  static float cell_clip_param_init[] = {0.0f};
  model->setOperandValue(cell_clip_param, cell_clip_param_init, sizeof(float) * 1);
  static float proj_clip_param_init[] = {0.0f};
  model->setOperandValue(proj_clip_param, proj_clip_param_init, sizeof(float) * 1);
  static bool8 time_major_param_init[] = {true};
  model->setOperandValue(time_major_param, time_major_param_init, sizeof(bool8) * 1);
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
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy54, param54}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_forget_weights_tmp, dummy55, param55}, {input_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_cell_weights_tmp, dummy56, param56}, {input_to_cell_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_output_weights_tmp, dummy57, param57}, {input_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_forget_weights_tmp, dummy58, param58}, {recurrent_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_cell_weights_tmp, dummy59, param59}, {recurrent_to_cell_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_output_weights_tmp, dummy60, param60}, {recurrent_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_to_forget_weights_tmp, dummy61, param61}, {cell_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_to_output_weights_tmp, dummy62, param62}, {cell_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {forget_gate_bias_tmp, dummy63, param63}, {forget_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_gate_bias_tmp, dummy64, param64}, {cell_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {output_gate_bias_tmp, dummy65, param65}, {output_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {projection_weights_tmp, dummy66, param66}, {projection_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {output_state_in_tmp, dummy67, param67}, {output_state_in});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_state_in_tmp, dummy68, param68}, {cell_state_in});
  model->addOperation(ANEURALNETWORKS_ADD, {forget_layer_norm_weights_tmp, dummy69, param69}, {forget_layer_norm_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_layer_norm_weights_tmp, dummy70, param70}, {cell_layer_norm_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {output_layer_norm_weights_tmp, dummy71, param71}, {output_layer_norm_weights});
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_LSTM, {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, activation_param, cell_clip_param, proj_clip_param, time_major_param, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_to_input_weights, recurrent_to_intput_weights, cell_to_input_weights, input_gate_bias, projection_bias, input_layer_norm_weights, input_tmp, input_to_forget_weights_tmp, input_to_cell_weights_tmp, input_to_output_weights_tmp, recurrent_to_forget_weights_tmp, recurrent_to_cell_weights_tmp, recurrent_to_output_weights_tmp, cell_to_forget_weights_tmp, cell_to_output_weights_tmp, forget_gate_bias_tmp, cell_gate_bias_tmp, output_gate_bias_tmp, projection_weights_tmp, output_state_in_tmp, cell_state_in_tmp, forget_layer_norm_weights_tmp, cell_layer_norm_weights_tmp, output_layer_norm_weights_tmp},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole
namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

void CreateModel_float16(Model *model) {
  OperandType type11(Type::BOOL, {});
  OperandType type15(Type::FLOAT16, {});
  OperandType type16(Type::TENSOR_FLOAT16, {4});
  OperandType type17(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type18(Type::TENSOR_FLOAT16, {0});
  OperandType type19(Type::TENSOR_FLOAT16, {3, 2, 5});
  OperandType type20(Type::TENSOR_FLOAT16, {4, 5});
  OperandType type21(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {3, 2, 3});
  OperandType type23(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type24(Type::TENSOR_FLOAT16, {3, 4});
  OperandType type25(Type::TENSOR_FLOAT16, {4, 3});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type19);
  auto input_to_input_weights = model->addOperand(&type21);
  auto input_to_forget_weights = model->addOperand(&type20);
  auto input_to_cell_weights = model->addOperand(&type20);
  auto input_to_output_weights = model->addOperand(&type20);
  auto recurrent_to_intput_weights = model->addOperand(&type21);
  auto recurrent_to_forget_weights = model->addOperand(&type25);
  auto recurrent_to_cell_weights = model->addOperand(&type25);
  auto recurrent_to_output_weights = model->addOperand(&type25);
  auto cell_to_input_weights = model->addOperand(&type18);
  auto cell_to_forget_weights = model->addOperand(&type16);
  auto cell_to_output_weights = model->addOperand(&type16);
  auto input_gate_bias = model->addOperand(&type18);
  auto forget_gate_bias = model->addOperand(&type16);
  auto cell_gate_bias = model->addOperand(&type16);
  auto output_gate_bias = model->addOperand(&type16);
  auto projection_weights = model->addOperand(&type24);
  auto projection_bias = model->addOperand(&type18);
  auto output_state_in = model->addOperand(&type23);
  auto cell_state_in = model->addOperand(&type17);
  auto activation_param = model->addOperand(&type9);
  auto cell_clip_param = model->addOperand(&type15);
  auto proj_clip_param = model->addOperand(&type15);
  auto time_major_param = model->addOperand(&type11);
  auto input_layer_norm_weights = model->addOperand(&type18);
  auto forget_layer_norm_weights = model->addOperand(&type16);
  auto cell_layer_norm_weights = model->addOperand(&type16);
  auto output_layer_norm_weights = model->addOperand(&type16);
  auto output = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t activation_param_init[] = {4};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  static _Float16 cell_clip_param_init[] = {0.0f};
  model->setOperandValue(cell_clip_param, cell_clip_param_init, sizeof(_Float16) * 1);
  static _Float16 proj_clip_param_init[] = {0.0f};
  model->setOperandValue(proj_clip_param, proj_clip_param_init, sizeof(_Float16) * 1);
  static bool8 time_major_param_init[] = {true};
  model->setOperandValue(time_major_param, time_major_param_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_LSTM, {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, activation_param, cell_clip_param, proj_clip_param, time_major_param, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights},
    {output});
  assert(model->isValid());
}

bool is_ignored_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole
namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

void CreateModel_float16_dynamic_output_shape(Model *model) {
  OperandType type11(Type::BOOL, {});
  OperandType type15(Type::FLOAT16, {});
  OperandType type16(Type::TENSOR_FLOAT16, {4});
  OperandType type17(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type18(Type::TENSOR_FLOAT16, {0});
  OperandType type19(Type::TENSOR_FLOAT16, {3, 2, 5});
  OperandType type20(Type::TENSOR_FLOAT16, {4, 5});
  OperandType type21(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type23(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type24(Type::TENSOR_FLOAT16, {3, 4});
  OperandType type25(Type::TENSOR_FLOAT16, {4, 3});
  OperandType type26(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type19);
  auto input_to_input_weights = model->addOperand(&type21);
  auto input_to_forget_weights = model->addOperand(&type20);
  auto input_to_cell_weights = model->addOperand(&type20);
  auto input_to_output_weights = model->addOperand(&type20);
  auto recurrent_to_intput_weights = model->addOperand(&type21);
  auto recurrent_to_forget_weights = model->addOperand(&type25);
  auto recurrent_to_cell_weights = model->addOperand(&type25);
  auto recurrent_to_output_weights = model->addOperand(&type25);
  auto cell_to_input_weights = model->addOperand(&type18);
  auto cell_to_forget_weights = model->addOperand(&type16);
  auto cell_to_output_weights = model->addOperand(&type16);
  auto input_gate_bias = model->addOperand(&type18);
  auto forget_gate_bias = model->addOperand(&type16);
  auto cell_gate_bias = model->addOperand(&type16);
  auto output_gate_bias = model->addOperand(&type16);
  auto projection_weights = model->addOperand(&type24);
  auto projection_bias = model->addOperand(&type18);
  auto output_state_in = model->addOperand(&type23);
  auto cell_state_in = model->addOperand(&type17);
  auto activation_param = model->addOperand(&type9);
  auto cell_clip_param = model->addOperand(&type15);
  auto proj_clip_param = model->addOperand(&type15);
  auto time_major_param = model->addOperand(&type11);
  auto input_layer_norm_weights = model->addOperand(&type18);
  auto forget_layer_norm_weights = model->addOperand(&type16);
  auto cell_layer_norm_weights = model->addOperand(&type16);
  auto output_layer_norm_weights = model->addOperand(&type16);
  auto output = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t activation_param_init[] = {4};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  static _Float16 cell_clip_param_init[] = {0.0f};
  model->setOperandValue(cell_clip_param, cell_clip_param_init, sizeof(_Float16) * 1);
  static _Float16 proj_clip_param_init[] = {0.0f};
  model->setOperandValue(proj_clip_param, proj_clip_param_init, sizeof(_Float16) * 1);
  static bool8 time_major_param_init[] = {true};
  model->setOperandValue(time_major_param, time_major_param_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_LSTM, {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, activation_param, cell_clip_param, proj_clip_param, time_major_param, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights},
    {output});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole
namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

void CreateModel_float16_all_inputs_as_internal(Model *model) {
  OperandType type11(Type::BOOL, {});
  OperandType type15(Type::FLOAT16, {});
  OperandType type18(Type::TENSOR_FLOAT16, {0});
  OperandType type21(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {3, 2, 3});
  OperandType type27(Type::TENSOR_FLOAT16, {3, 2, 5});
  OperandType type28(Type::TENSOR_FLOAT16, {1});
  OperandType type29(Type::TENSOR_FLOAT16, {4, 5});
  OperandType type30(Type::TENSOR_FLOAT16, {4, 3});
  OperandType type31(Type::TENSOR_FLOAT16, {4});
  OperandType type32(Type::TENSOR_FLOAT16, {3, 4});
  OperandType type33(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type34(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type27);
  auto input_to_input_weights = model->addOperand(&type21);
  auto input_to_forget_weights = model->addOperand(&type29);
  auto input_to_cell_weights = model->addOperand(&type29);
  auto input_to_output_weights = model->addOperand(&type29);
  auto recurrent_to_intput_weights = model->addOperand(&type21);
  auto recurrent_to_forget_weights = model->addOperand(&type30);
  auto recurrent_to_cell_weights = model->addOperand(&type30);
  auto recurrent_to_output_weights = model->addOperand(&type30);
  auto cell_to_input_weights = model->addOperand(&type18);
  auto cell_to_forget_weights = model->addOperand(&type31);
  auto cell_to_output_weights = model->addOperand(&type31);
  auto input_gate_bias = model->addOperand(&type18);
  auto forget_gate_bias = model->addOperand(&type31);
  auto cell_gate_bias = model->addOperand(&type31);
  auto output_gate_bias = model->addOperand(&type31);
  auto projection_weights = model->addOperand(&type32);
  auto projection_bias = model->addOperand(&type18);
  auto output_state_in = model->addOperand(&type33);
  auto cell_state_in = model->addOperand(&type34);
  auto activation_param = model->addOperand(&type9);
  auto cell_clip_param = model->addOperand(&type15);
  auto proj_clip_param = model->addOperand(&type15);
  auto time_major_param = model->addOperand(&type11);
  auto input_layer_norm_weights = model->addOperand(&type18);
  auto forget_layer_norm_weights = model->addOperand(&type31);
  auto cell_layer_norm_weights = model->addOperand(&type31);
  auto output_layer_norm_weights = model->addOperand(&type31);
  auto output = model->addOperand(&type22);
  auto input_tmp = model->addOperand(&type27);
  auto dummy72 = model->addOperand(&type28);
  auto param72 = model->addOperand(&type9);
  auto input_to_forget_weights_tmp = model->addOperand(&type29);
  auto dummy73 = model->addOperand(&type28);
  auto param73 = model->addOperand(&type9);
  auto input_to_cell_weights_tmp = model->addOperand(&type29);
  auto dummy74 = model->addOperand(&type28);
  auto param74 = model->addOperand(&type9);
  auto input_to_output_weights_tmp = model->addOperand(&type29);
  auto dummy75 = model->addOperand(&type28);
  auto param75 = model->addOperand(&type9);
  auto recurrent_to_forget_weights_tmp = model->addOperand(&type30);
  auto dummy76 = model->addOperand(&type28);
  auto param76 = model->addOperand(&type9);
  auto recurrent_to_cell_weights_tmp = model->addOperand(&type30);
  auto dummy77 = model->addOperand(&type28);
  auto param77 = model->addOperand(&type9);
  auto recurrent_to_output_weights_tmp = model->addOperand(&type30);
  auto dummy78 = model->addOperand(&type28);
  auto param78 = model->addOperand(&type9);
  auto cell_to_forget_weights_tmp = model->addOperand(&type31);
  auto dummy79 = model->addOperand(&type28);
  auto param79 = model->addOperand(&type9);
  auto cell_to_output_weights_tmp = model->addOperand(&type31);
  auto dummy80 = model->addOperand(&type28);
  auto param80 = model->addOperand(&type9);
  auto forget_gate_bias_tmp = model->addOperand(&type31);
  auto dummy81 = model->addOperand(&type28);
  auto param81 = model->addOperand(&type9);
  auto cell_gate_bias_tmp = model->addOperand(&type31);
  auto dummy82 = model->addOperand(&type28);
  auto param82 = model->addOperand(&type9);
  auto output_gate_bias_tmp = model->addOperand(&type31);
  auto dummy83 = model->addOperand(&type28);
  auto param83 = model->addOperand(&type9);
  auto projection_weights_tmp = model->addOperand(&type32);
  auto dummy84 = model->addOperand(&type28);
  auto param84 = model->addOperand(&type9);
  auto output_state_in_tmp = model->addOperand(&type33);
  auto dummy85 = model->addOperand(&type28);
  auto param85 = model->addOperand(&type9);
  auto cell_state_in_tmp = model->addOperand(&type34);
  auto dummy86 = model->addOperand(&type28);
  auto param86 = model->addOperand(&type9);
  auto forget_layer_norm_weights_tmp = model->addOperand(&type31);
  auto dummy87 = model->addOperand(&type28);
  auto param87 = model->addOperand(&type9);
  auto cell_layer_norm_weights_tmp = model->addOperand(&type31);
  auto dummy88 = model->addOperand(&type28);
  auto param88 = model->addOperand(&type9);
  auto output_layer_norm_weights_tmp = model->addOperand(&type31);
  auto dummy89 = model->addOperand(&type28);
  auto param89 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t activation_param_init[] = {4};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  static _Float16 cell_clip_param_init[] = {0.0f};
  model->setOperandValue(cell_clip_param, cell_clip_param_init, sizeof(_Float16) * 1);
  static _Float16 proj_clip_param_init[] = {0.0f};
  model->setOperandValue(proj_clip_param, proj_clip_param_init, sizeof(_Float16) * 1);
  static bool8 time_major_param_init[] = {true};
  model->setOperandValue(time_major_param, time_major_param_init, sizeof(bool8) * 1);
  static _Float16 dummy72_init[] = {0.0f};
  model->setOperandValue(dummy72, dummy72_init, sizeof(_Float16) * 1);
  static int32_t param72_init[] = {0};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static _Float16 dummy73_init[] = {0.0f};
  model->setOperandValue(dummy73, dummy73_init, sizeof(_Float16) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  static _Float16 dummy74_init[] = {0.0f};
  model->setOperandValue(dummy74, dummy74_init, sizeof(_Float16) * 1);
  static int32_t param74_init[] = {0};
  model->setOperandValue(param74, param74_init, sizeof(int32_t) * 1);
  static _Float16 dummy75_init[] = {0.0f};
  model->setOperandValue(dummy75, dummy75_init, sizeof(_Float16) * 1);
  static int32_t param75_init[] = {0};
  model->setOperandValue(param75, param75_init, sizeof(int32_t) * 1);
  static _Float16 dummy76_init[] = {0.0f};
  model->setOperandValue(dummy76, dummy76_init, sizeof(_Float16) * 1);
  static int32_t param76_init[] = {0};
  model->setOperandValue(param76, param76_init, sizeof(int32_t) * 1);
  static _Float16 dummy77_init[] = {0.0f};
  model->setOperandValue(dummy77, dummy77_init, sizeof(_Float16) * 1);
  static int32_t param77_init[] = {0};
  model->setOperandValue(param77, param77_init, sizeof(int32_t) * 1);
  static _Float16 dummy78_init[] = {0.0f};
  model->setOperandValue(dummy78, dummy78_init, sizeof(_Float16) * 1);
  static int32_t param78_init[] = {0};
  model->setOperandValue(param78, param78_init, sizeof(int32_t) * 1);
  static _Float16 dummy79_init[] = {0.0f};
  model->setOperandValue(dummy79, dummy79_init, sizeof(_Float16) * 1);
  static int32_t param79_init[] = {0};
  model->setOperandValue(param79, param79_init, sizeof(int32_t) * 1);
  static _Float16 dummy80_init[] = {0.0f};
  model->setOperandValue(dummy80, dummy80_init, sizeof(_Float16) * 1);
  static int32_t param80_init[] = {0};
  model->setOperandValue(param80, param80_init, sizeof(int32_t) * 1);
  static _Float16 dummy81_init[] = {0.0f};
  model->setOperandValue(dummy81, dummy81_init, sizeof(_Float16) * 1);
  static int32_t param81_init[] = {0};
  model->setOperandValue(param81, param81_init, sizeof(int32_t) * 1);
  static _Float16 dummy82_init[] = {0.0f};
  model->setOperandValue(dummy82, dummy82_init, sizeof(_Float16) * 1);
  static int32_t param82_init[] = {0};
  model->setOperandValue(param82, param82_init, sizeof(int32_t) * 1);
  static _Float16 dummy83_init[] = {0.0f};
  model->setOperandValue(dummy83, dummy83_init, sizeof(_Float16) * 1);
  static int32_t param83_init[] = {0};
  model->setOperandValue(param83, param83_init, sizeof(int32_t) * 1);
  static _Float16 dummy84_init[] = {0.0f};
  model->setOperandValue(dummy84, dummy84_init, sizeof(_Float16) * 1);
  static int32_t param84_init[] = {0};
  model->setOperandValue(param84, param84_init, sizeof(int32_t) * 1);
  static _Float16 dummy85_init[] = {0.0f};
  model->setOperandValue(dummy85, dummy85_init, sizeof(_Float16) * 1);
  static int32_t param85_init[] = {0};
  model->setOperandValue(param85, param85_init, sizeof(int32_t) * 1);
  static _Float16 dummy86_init[] = {0.0f};
  model->setOperandValue(dummy86, dummy86_init, sizeof(_Float16) * 1);
  static int32_t param86_init[] = {0};
  model->setOperandValue(param86, param86_init, sizeof(int32_t) * 1);
  static _Float16 dummy87_init[] = {0.0f};
  model->setOperandValue(dummy87, dummy87_init, sizeof(_Float16) * 1);
  static int32_t param87_init[] = {0};
  model->setOperandValue(param87, param87_init, sizeof(int32_t) * 1);
  static _Float16 dummy88_init[] = {0.0f};
  model->setOperandValue(dummy88, dummy88_init, sizeof(_Float16) * 1);
  static int32_t param88_init[] = {0};
  model->setOperandValue(param88, param88_init, sizeof(int32_t) * 1);
  static _Float16 dummy89_init[] = {0.0f};
  model->setOperandValue(dummy89, dummy89_init, sizeof(_Float16) * 1);
  static int32_t param89_init[] = {0};
  model->setOperandValue(param89, param89_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy72, param72}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_forget_weights_tmp, dummy73, param73}, {input_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_cell_weights_tmp, dummy74, param74}, {input_to_cell_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_output_weights_tmp, dummy75, param75}, {input_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_forget_weights_tmp, dummy76, param76}, {recurrent_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_cell_weights_tmp, dummy77, param77}, {recurrent_to_cell_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_output_weights_tmp, dummy78, param78}, {recurrent_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_to_forget_weights_tmp, dummy79, param79}, {cell_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_to_output_weights_tmp, dummy80, param80}, {cell_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {forget_gate_bias_tmp, dummy81, param81}, {forget_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_gate_bias_tmp, dummy82, param82}, {cell_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {output_gate_bias_tmp, dummy83, param83}, {output_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {projection_weights_tmp, dummy84, param84}, {projection_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {output_state_in_tmp, dummy85, param85}, {output_state_in});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_state_in_tmp, dummy86, param86}, {cell_state_in});
  model->addOperation(ANEURALNETWORKS_ADD, {forget_layer_norm_weights_tmp, dummy87, param87}, {forget_layer_norm_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_layer_norm_weights_tmp, dummy88, param88}, {cell_layer_norm_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {output_layer_norm_weights_tmp, dummy89, param89}, {output_layer_norm_weights});
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_LSTM, {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, activation_param, cell_clip_param, proj_clip_param, time_major_param, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_to_input_weights, recurrent_to_intput_weights, cell_to_input_weights, input_gate_bias, projection_bias, input_layer_norm_weights, input_tmp, input_to_forget_weights_tmp, input_to_cell_weights_tmp, input_to_output_weights_tmp, recurrent_to_forget_weights_tmp, recurrent_to_cell_weights_tmp, recurrent_to_output_weights_tmp, cell_to_forget_weights_tmp, cell_to_output_weights_tmp, forget_gate_bias_tmp, cell_gate_bias_tmp, output_gate_bias_tmp, projection_weights_tmp, output_state_in_tmp, cell_state_in_tmp, forget_layer_norm_weights_tmp, cell_layer_norm_weights_tmp, output_layer_norm_weights_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole
namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type11(Type::BOOL, {});
  OperandType type15(Type::FLOAT16, {});
  OperandType type18(Type::TENSOR_FLOAT16, {0});
  OperandType type21(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type26(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type27(Type::TENSOR_FLOAT16, {3, 2, 5});
  OperandType type28(Type::TENSOR_FLOAT16, {1});
  OperandType type29(Type::TENSOR_FLOAT16, {4, 5});
  OperandType type30(Type::TENSOR_FLOAT16, {4, 3});
  OperandType type31(Type::TENSOR_FLOAT16, {4});
  OperandType type32(Type::TENSOR_FLOAT16, {3, 4});
  OperandType type33(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type34(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type27);
  auto input_to_input_weights = model->addOperand(&type21);
  auto input_to_forget_weights = model->addOperand(&type29);
  auto input_to_cell_weights = model->addOperand(&type29);
  auto input_to_output_weights = model->addOperand(&type29);
  auto recurrent_to_intput_weights = model->addOperand(&type21);
  auto recurrent_to_forget_weights = model->addOperand(&type30);
  auto recurrent_to_cell_weights = model->addOperand(&type30);
  auto recurrent_to_output_weights = model->addOperand(&type30);
  auto cell_to_input_weights = model->addOperand(&type18);
  auto cell_to_forget_weights = model->addOperand(&type31);
  auto cell_to_output_weights = model->addOperand(&type31);
  auto input_gate_bias = model->addOperand(&type18);
  auto forget_gate_bias = model->addOperand(&type31);
  auto cell_gate_bias = model->addOperand(&type31);
  auto output_gate_bias = model->addOperand(&type31);
  auto projection_weights = model->addOperand(&type32);
  auto projection_bias = model->addOperand(&type18);
  auto output_state_in = model->addOperand(&type33);
  auto cell_state_in = model->addOperand(&type34);
  auto activation_param = model->addOperand(&type9);
  auto cell_clip_param = model->addOperand(&type15);
  auto proj_clip_param = model->addOperand(&type15);
  auto time_major_param = model->addOperand(&type11);
  auto input_layer_norm_weights = model->addOperand(&type18);
  auto forget_layer_norm_weights = model->addOperand(&type31);
  auto cell_layer_norm_weights = model->addOperand(&type31);
  auto output_layer_norm_weights = model->addOperand(&type31);
  auto output = model->addOperand(&type26);
  auto input_tmp = model->addOperand(&type27);
  auto dummy90 = model->addOperand(&type28);
  auto param90 = model->addOperand(&type9);
  auto input_to_forget_weights_tmp = model->addOperand(&type29);
  auto dummy91 = model->addOperand(&type28);
  auto param91 = model->addOperand(&type9);
  auto input_to_cell_weights_tmp = model->addOperand(&type29);
  auto dummy92 = model->addOperand(&type28);
  auto param92 = model->addOperand(&type9);
  auto input_to_output_weights_tmp = model->addOperand(&type29);
  auto dummy93 = model->addOperand(&type28);
  auto param93 = model->addOperand(&type9);
  auto recurrent_to_forget_weights_tmp = model->addOperand(&type30);
  auto dummy94 = model->addOperand(&type28);
  auto param94 = model->addOperand(&type9);
  auto recurrent_to_cell_weights_tmp = model->addOperand(&type30);
  auto dummy95 = model->addOperand(&type28);
  auto param95 = model->addOperand(&type9);
  auto recurrent_to_output_weights_tmp = model->addOperand(&type30);
  auto dummy96 = model->addOperand(&type28);
  auto param96 = model->addOperand(&type9);
  auto cell_to_forget_weights_tmp = model->addOperand(&type31);
  auto dummy97 = model->addOperand(&type28);
  auto param97 = model->addOperand(&type9);
  auto cell_to_output_weights_tmp = model->addOperand(&type31);
  auto dummy98 = model->addOperand(&type28);
  auto param98 = model->addOperand(&type9);
  auto forget_gate_bias_tmp = model->addOperand(&type31);
  auto dummy99 = model->addOperand(&type28);
  auto param99 = model->addOperand(&type9);
  auto cell_gate_bias_tmp = model->addOperand(&type31);
  auto dummy100 = model->addOperand(&type28);
  auto param100 = model->addOperand(&type9);
  auto output_gate_bias_tmp = model->addOperand(&type31);
  auto dummy101 = model->addOperand(&type28);
  auto param101 = model->addOperand(&type9);
  auto projection_weights_tmp = model->addOperand(&type32);
  auto dummy102 = model->addOperand(&type28);
  auto param102 = model->addOperand(&type9);
  auto output_state_in_tmp = model->addOperand(&type33);
  auto dummy103 = model->addOperand(&type28);
  auto param103 = model->addOperand(&type9);
  auto cell_state_in_tmp = model->addOperand(&type34);
  auto dummy104 = model->addOperand(&type28);
  auto param104 = model->addOperand(&type9);
  auto forget_layer_norm_weights_tmp = model->addOperand(&type31);
  auto dummy105 = model->addOperand(&type28);
  auto param105 = model->addOperand(&type9);
  auto cell_layer_norm_weights_tmp = model->addOperand(&type31);
  auto dummy106 = model->addOperand(&type28);
  auto param106 = model->addOperand(&type9);
  auto output_layer_norm_weights_tmp = model->addOperand(&type31);
  auto dummy107 = model->addOperand(&type28);
  auto param107 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t activation_param_init[] = {4};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  static _Float16 cell_clip_param_init[] = {0.0f};
  model->setOperandValue(cell_clip_param, cell_clip_param_init, sizeof(_Float16) * 1);
  static _Float16 proj_clip_param_init[] = {0.0f};
  model->setOperandValue(proj_clip_param, proj_clip_param_init, sizeof(_Float16) * 1);
  static bool8 time_major_param_init[] = {true};
  model->setOperandValue(time_major_param, time_major_param_init, sizeof(bool8) * 1);
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
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy90, param90}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_forget_weights_tmp, dummy91, param91}, {input_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_cell_weights_tmp, dummy92, param92}, {input_to_cell_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_output_weights_tmp, dummy93, param93}, {input_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_forget_weights_tmp, dummy94, param94}, {recurrent_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_cell_weights_tmp, dummy95, param95}, {recurrent_to_cell_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_output_weights_tmp, dummy96, param96}, {recurrent_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_to_forget_weights_tmp, dummy97, param97}, {cell_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_to_output_weights_tmp, dummy98, param98}, {cell_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {forget_gate_bias_tmp, dummy99, param99}, {forget_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_gate_bias_tmp, dummy100, param100}, {cell_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {output_gate_bias_tmp, dummy101, param101}, {output_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {projection_weights_tmp, dummy102, param102}, {projection_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {output_state_in_tmp, dummy103, param103}, {output_state_in});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_state_in_tmp, dummy104, param104}, {cell_state_in});
  model->addOperation(ANEURALNETWORKS_ADD, {forget_layer_norm_weights_tmp, dummy105, param105}, {forget_layer_norm_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_layer_norm_weights_tmp, dummy106, param106}, {cell_layer_norm_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {output_layer_norm_weights_tmp, dummy107, param107}, {output_layer_norm_weights});
  model->addOperation(ANEURALNETWORKS_UNIDIRECTIONAL_SEQUENCE_LSTM, {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, activation_param, cell_clip_param, proj_clip_param, time_major_param, input_layer_norm_weights, forget_layer_norm_weights, cell_layer_norm_weights, output_layer_norm_weights}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_to_input_weights, recurrent_to_intput_weights, cell_to_input_weights, input_gate_bias, projection_bias, input_layer_norm_weights, input_tmp, input_to_forget_weights_tmp, input_to_cell_weights_tmp, input_to_output_weights_tmp, recurrent_to_forget_weights_tmp, recurrent_to_cell_weights_tmp, recurrent_to_output_weights_tmp, cell_to_forget_weights_tmp, cell_to_output_weights_tmp, forget_gate_bias_tmp, cell_gate_bias_tmp, output_gate_bias_tmp, projection_weights_tmp, output_state_in_tmp, cell_state_in_tmp, forget_layer_norm_weights_tmp, cell_layer_norm_weights_tmp, output_layer_norm_weights_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole
