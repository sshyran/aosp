// Generated from lstm3_state3_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::lstm3_state3_relaxed {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 5});
  OperandType type1(Type::TENSOR_FLOAT32, {20, 5});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 80});
  OperandType type2(Type::TENSOR_FLOAT32, {20, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {20});
  OperandType type4(Type::TENSOR_FLOAT32, {16, 20});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 20});
  OperandType type8(Type::INT32, {});
  OperandType type9(Type::FLOAT32, {});
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
  auto projection_weights = model->addOperand(&type4);
  auto projection_bias = model->addOperand(&type5);
  auto output_state_in = model->addOperand(&type6);
  auto cell_state_in = model->addOperand(&type7);
  auto activation_param = model->addOperand(&type8);
  auto cell_clip_param = model->addOperand(&type9);
  auto proj_clip_param = model->addOperand(&type9);
  auto scratch_buffer = model->addOperand(&type10);
  auto output_state_out = model->addOperand(&type6);
  auto cell_state_out = model->addOperand(&type7);
  auto output = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t activation_param_init[] = {4};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  static float cell_clip_param_init[] = {0.0f};
  model->setOperandValue(cell_clip_param, cell_clip_param_init, sizeof(float) * 1);
  static float proj_clip_param_init[] = {0.0f};
  model->setOperandValue(proj_clip_param, proj_clip_param_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_LSTM, {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, activation_param, cell_clip_param, proj_clip_param}, {scratch_buffer, output_state_out, cell_state_out, output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in},
    {scratch_buffer, output_state_out, cell_state_out, output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {0, 1, 2};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::lstm3_state3_relaxed
namespace generated_tests::lstm3_state3_relaxed {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 5});
  OperandType type1(Type::TENSOR_FLOAT32, {20, 5});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {20, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {20});
  OperandType type4(Type::TENSOR_FLOAT32, {16, 20});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 20});
  OperandType type8(Type::INT32, {});
  OperandType type9(Type::FLOAT32, {});
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
  auto projection_weights = model->addOperand(&type4);
  auto projection_bias = model->addOperand(&type5);
  auto output_state_in = model->addOperand(&type6);
  auto cell_state_in = model->addOperand(&type7);
  auto activation_param = model->addOperand(&type8);
  auto cell_clip_param = model->addOperand(&type9);
  auto proj_clip_param = model->addOperand(&type9);
  auto scratch_buffer = model->addOperand(&type11);
  auto output_state_out = model->addOperand(&type11);
  auto cell_state_out = model->addOperand(&type11);
  auto output = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t activation_param_init[] = {4};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  static float cell_clip_param_init[] = {0.0f};
  model->setOperandValue(cell_clip_param, cell_clip_param_init, sizeof(float) * 1);
  static float proj_clip_param_init[] = {0.0f};
  model->setOperandValue(proj_clip_param, proj_clip_param_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_LSTM, {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, activation_param, cell_clip_param, proj_clip_param}, {scratch_buffer, output_state_out, cell_state_out, output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in},
    {scratch_buffer, output_state_out, cell_state_out, output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {0, 1, 2};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::lstm3_state3_relaxed
namespace generated_tests::lstm3_state3_relaxed {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 5});
  OperandType type1(Type::TENSOR_FLOAT32, {20, 5});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 80});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {20, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {20});
  OperandType type4(Type::TENSOR_FLOAT32, {16, 20});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 20});
  OperandType type8(Type::INT32, {});
  OperandType type9(Type::FLOAT32, {});
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
  auto projection_weights = model->addOperand(&type4);
  auto projection_bias = model->addOperand(&type5);
  auto output_state_in = model->addOperand(&type6);
  auto cell_state_in = model->addOperand(&type7);
  auto activation_param = model->addOperand(&type8);
  auto cell_clip_param = model->addOperand(&type9);
  auto proj_clip_param = model->addOperand(&type9);
  auto scratch_buffer = model->addOperand(&type10);
  auto output_state_out = model->addOperand(&type6);
  auto cell_state_out = model->addOperand(&type7);
  auto output = model->addOperand(&type6);
  auto input_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type12);
  auto param = model->addOperand(&type8);
  auto input_to_input_weights_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type12);
  auto param1 = model->addOperand(&type8);
  auto input_to_forget_weights_tmp = model->addOperand(&type1);
  auto dummy2 = model->addOperand(&type12);
  auto param2 = model->addOperand(&type8);
  auto input_to_cell_weights_tmp = model->addOperand(&type1);
  auto dummy3 = model->addOperand(&type12);
  auto param3 = model->addOperand(&type8);
  auto input_to_output_weights_tmp = model->addOperand(&type1);
  auto dummy4 = model->addOperand(&type12);
  auto param4 = model->addOperand(&type8);
  auto recurrent_to_intput_weights_tmp = model->addOperand(&type2);
  auto dummy5 = model->addOperand(&type12);
  auto param5 = model->addOperand(&type8);
  auto recurrent_to_forget_weights_tmp = model->addOperand(&type2);
  auto dummy6 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto recurrent_to_cell_weights_tmp = model->addOperand(&type2);
  auto dummy7 = model->addOperand(&type12);
  auto param7 = model->addOperand(&type8);
  auto recurrent_to_output_weights_tmp = model->addOperand(&type2);
  auto dummy8 = model->addOperand(&type12);
  auto param8 = model->addOperand(&type8);
  auto cell_to_input_weights_tmp = model->addOperand(&type3);
  auto dummy9 = model->addOperand(&type12);
  auto param9 = model->addOperand(&type8);
  auto cell_to_forget_weights_tmp = model->addOperand(&type3);
  auto dummy10 = model->addOperand(&type12);
  auto param10 = model->addOperand(&type8);
  auto cell_to_output_weights_tmp = model->addOperand(&type3);
  auto dummy11 = model->addOperand(&type12);
  auto param11 = model->addOperand(&type8);
  auto input_gate_bias_tmp = model->addOperand(&type3);
  auto dummy12 = model->addOperand(&type12);
  auto param12 = model->addOperand(&type8);
  auto forget_gate_bias_tmp = model->addOperand(&type3);
  auto dummy13 = model->addOperand(&type12);
  auto param13 = model->addOperand(&type8);
  auto cell_gate_bias_tmp = model->addOperand(&type3);
  auto dummy14 = model->addOperand(&type12);
  auto param14 = model->addOperand(&type8);
  auto output_gate_bias_tmp = model->addOperand(&type3);
  auto dummy15 = model->addOperand(&type12);
  auto param15 = model->addOperand(&type8);
  auto projection_weights_tmp = model->addOperand(&type4);
  auto dummy16 = model->addOperand(&type12);
  auto param16 = model->addOperand(&type8);
  auto output_state_in_tmp = model->addOperand(&type6);
  auto dummy17 = model->addOperand(&type12);
  auto param17 = model->addOperand(&type8);
  auto cell_state_in_tmp = model->addOperand(&type7);
  auto dummy18 = model->addOperand(&type12);
  auto param18 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t activation_param_init[] = {4};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  static float cell_clip_param_init[] = {0.0f};
  model->setOperandValue(cell_clip_param, cell_clip_param_init, sizeof(float) * 1);
  static float proj_clip_param_init[] = {0.0f};
  model->setOperandValue(proj_clip_param, proj_clip_param_init, sizeof(float) * 1);
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
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy, param}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_input_weights_tmp, dummy1, param1}, {input_to_input_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_forget_weights_tmp, dummy2, param2}, {input_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_cell_weights_tmp, dummy3, param3}, {input_to_cell_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_output_weights_tmp, dummy4, param4}, {input_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_intput_weights_tmp, dummy5, param5}, {recurrent_to_intput_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_forget_weights_tmp, dummy6, param6}, {recurrent_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_cell_weights_tmp, dummy7, param7}, {recurrent_to_cell_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_output_weights_tmp, dummy8, param8}, {recurrent_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_to_input_weights_tmp, dummy9, param9}, {cell_to_input_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_to_forget_weights_tmp, dummy10, param10}, {cell_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_to_output_weights_tmp, dummy11, param11}, {cell_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_gate_bias_tmp, dummy12, param12}, {input_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {forget_gate_bias_tmp, dummy13, param13}, {forget_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_gate_bias_tmp, dummy14, param14}, {cell_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {output_gate_bias_tmp, dummy15, param15}, {output_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {projection_weights_tmp, dummy16, param16}, {projection_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {output_state_in_tmp, dummy17, param17}, {output_state_in});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_state_in_tmp, dummy18, param18}, {cell_state_in});
  model->addOperation(ANEURALNETWORKS_LSTM, {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, activation_param, cell_clip_param, proj_clip_param}, {scratch_buffer, output_state_out, cell_state_out, output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {projection_bias, input_tmp, input_to_input_weights_tmp, input_to_forget_weights_tmp, input_to_cell_weights_tmp, input_to_output_weights_tmp, recurrent_to_intput_weights_tmp, recurrent_to_forget_weights_tmp, recurrent_to_cell_weights_tmp, recurrent_to_output_weights_tmp, cell_to_input_weights_tmp, cell_to_forget_weights_tmp, cell_to_output_weights_tmp, input_gate_bias_tmp, forget_gate_bias_tmp, cell_gate_bias_tmp, output_gate_bias_tmp, projection_weights_tmp, output_state_in_tmp, cell_state_in_tmp},
    {scratch_buffer, output_state_out, cell_state_out, output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {0, 1, 2};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::lstm3_state3_relaxed
namespace generated_tests::lstm3_state3_relaxed {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 5});
  OperandType type1(Type::TENSOR_FLOAT32, {20, 5});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {20, 16});
  OperandType type3(Type::TENSOR_FLOAT32, {20});
  OperandType type4(Type::TENSOR_FLOAT32, {16, 20});
  OperandType type5(Type::TENSOR_FLOAT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 16});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 20});
  OperandType type8(Type::INT32, {});
  OperandType type9(Type::FLOAT32, {});
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
  auto projection_weights = model->addOperand(&type4);
  auto projection_bias = model->addOperand(&type5);
  auto output_state_in = model->addOperand(&type6);
  auto cell_state_in = model->addOperand(&type7);
  auto activation_param = model->addOperand(&type8);
  auto cell_clip_param = model->addOperand(&type9);
  auto proj_clip_param = model->addOperand(&type9);
  auto scratch_buffer = model->addOperand(&type11);
  auto output_state_out = model->addOperand(&type11);
  auto cell_state_out = model->addOperand(&type11);
  auto output = model->addOperand(&type11);
  auto input_tmp = model->addOperand(&type0);
  auto dummy19 = model->addOperand(&type12);
  auto param19 = model->addOperand(&type8);
  auto input_to_input_weights_tmp = model->addOperand(&type1);
  auto dummy20 = model->addOperand(&type12);
  auto param20 = model->addOperand(&type8);
  auto input_to_forget_weights_tmp = model->addOperand(&type1);
  auto dummy21 = model->addOperand(&type12);
  auto param21 = model->addOperand(&type8);
  auto input_to_cell_weights_tmp = model->addOperand(&type1);
  auto dummy22 = model->addOperand(&type12);
  auto param22 = model->addOperand(&type8);
  auto input_to_output_weights_tmp = model->addOperand(&type1);
  auto dummy23 = model->addOperand(&type12);
  auto param23 = model->addOperand(&type8);
  auto recurrent_to_intput_weights_tmp = model->addOperand(&type2);
  auto dummy24 = model->addOperand(&type12);
  auto param24 = model->addOperand(&type8);
  auto recurrent_to_forget_weights_tmp = model->addOperand(&type2);
  auto dummy25 = model->addOperand(&type12);
  auto param25 = model->addOperand(&type8);
  auto recurrent_to_cell_weights_tmp = model->addOperand(&type2);
  auto dummy26 = model->addOperand(&type12);
  auto param26 = model->addOperand(&type8);
  auto recurrent_to_output_weights_tmp = model->addOperand(&type2);
  auto dummy27 = model->addOperand(&type12);
  auto param27 = model->addOperand(&type8);
  auto cell_to_input_weights_tmp = model->addOperand(&type3);
  auto dummy28 = model->addOperand(&type12);
  auto param28 = model->addOperand(&type8);
  auto cell_to_forget_weights_tmp = model->addOperand(&type3);
  auto dummy29 = model->addOperand(&type12);
  auto param29 = model->addOperand(&type8);
  auto cell_to_output_weights_tmp = model->addOperand(&type3);
  auto dummy30 = model->addOperand(&type12);
  auto param30 = model->addOperand(&type8);
  auto input_gate_bias_tmp = model->addOperand(&type3);
  auto dummy31 = model->addOperand(&type12);
  auto param31 = model->addOperand(&type8);
  auto forget_gate_bias_tmp = model->addOperand(&type3);
  auto dummy32 = model->addOperand(&type12);
  auto param32 = model->addOperand(&type8);
  auto cell_gate_bias_tmp = model->addOperand(&type3);
  auto dummy33 = model->addOperand(&type12);
  auto param33 = model->addOperand(&type8);
  auto output_gate_bias_tmp = model->addOperand(&type3);
  auto dummy34 = model->addOperand(&type12);
  auto param34 = model->addOperand(&type8);
  auto projection_weights_tmp = model->addOperand(&type4);
  auto dummy35 = model->addOperand(&type12);
  auto param35 = model->addOperand(&type8);
  auto output_state_in_tmp = model->addOperand(&type6);
  auto dummy36 = model->addOperand(&type12);
  auto param36 = model->addOperand(&type8);
  auto cell_state_in_tmp = model->addOperand(&type7);
  auto dummy37 = model->addOperand(&type12);
  auto param37 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t activation_param_init[] = {4};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  static float cell_clip_param_init[] = {0.0f};
  model->setOperandValue(cell_clip_param, cell_clip_param_init, sizeof(float) * 1);
  static float proj_clip_param_init[] = {0.0f};
  model->setOperandValue(proj_clip_param, proj_clip_param_init, sizeof(float) * 1);
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
  static float dummy36_init[] = {0.0f};
  model->setOperandValue(dummy36, dummy36_init, sizeof(float) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float dummy37_init[] = {0.0f};
  model->setOperandValue(dummy37, dummy37_init, sizeof(float) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy19, param19}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_input_weights_tmp, dummy20, param20}, {input_to_input_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_forget_weights_tmp, dummy21, param21}, {input_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_cell_weights_tmp, dummy22, param22}, {input_to_cell_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_to_output_weights_tmp, dummy23, param23}, {input_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_intput_weights_tmp, dummy24, param24}, {recurrent_to_intput_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_forget_weights_tmp, dummy25, param25}, {recurrent_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_cell_weights_tmp, dummy26, param26}, {recurrent_to_cell_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {recurrent_to_output_weights_tmp, dummy27, param27}, {recurrent_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_to_input_weights_tmp, dummy28, param28}, {cell_to_input_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_to_forget_weights_tmp, dummy29, param29}, {cell_to_forget_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_to_output_weights_tmp, dummy30, param30}, {cell_to_output_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {input_gate_bias_tmp, dummy31, param31}, {input_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {forget_gate_bias_tmp, dummy32, param32}, {forget_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_gate_bias_tmp, dummy33, param33}, {cell_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {output_gate_bias_tmp, dummy34, param34}, {output_gate_bias});
  model->addOperation(ANEURALNETWORKS_ADD, {projection_weights_tmp, dummy35, param35}, {projection_weights});
  model->addOperation(ANEURALNETWORKS_ADD, {output_state_in_tmp, dummy36, param36}, {output_state_in});
  model->addOperation(ANEURALNETWORKS_ADD, {cell_state_in_tmp, dummy37, param37}, {cell_state_in});
  model->addOperation(ANEURALNETWORKS_LSTM, {input, input_to_input_weights, input_to_forget_weights, input_to_cell_weights, input_to_output_weights, recurrent_to_intput_weights, recurrent_to_forget_weights, recurrent_to_cell_weights, recurrent_to_output_weights, cell_to_input_weights, cell_to_forget_weights, cell_to_output_weights, input_gate_bias, forget_gate_bias, cell_gate_bias, output_gate_bias, projection_weights, projection_bias, output_state_in, cell_state_in, activation_param, cell_clip_param, proj_clip_param}, {scratch_buffer, output_state_out, cell_state_out, output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {projection_bias, input_tmp, input_to_input_weights_tmp, input_to_forget_weights_tmp, input_to_cell_weights_tmp, input_to_output_weights_tmp, recurrent_to_intput_weights_tmp, recurrent_to_forget_weights_tmp, recurrent_to_cell_weights_tmp, recurrent_to_output_weights_tmp, cell_to_input_weights_tmp, cell_to_forget_weights_tmp, cell_to_output_weights_tmp, input_gate_bias_tmp, forget_gate_bias_tmp, cell_gate_bias_tmp, output_gate_bias_tmp, projection_weights_tmp, output_state_in_tmp, cell_state_in_tmp},
    {scratch_buffer, output_state_out, cell_state_out, output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {0, 1, 2};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::lstm3_state3_relaxed
