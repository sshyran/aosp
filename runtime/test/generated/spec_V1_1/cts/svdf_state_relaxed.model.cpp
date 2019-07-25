// Generated from svdf_state_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::svdf_state_relaxed {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 10});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 40});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto weights_feature = model->addOperand(&type1);
  auto weights_time = model->addOperand(&type2);
  auto bias = model->addOperand(&type3);
  auto state_in = model->addOperand(&type4);
  auto rank_param = model->addOperand(&type5);
  auto activation_param = model->addOperand(&type5);
  auto state_out = model->addOperand(&type4);
  auto output = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t rank_param_init[] = {1};
  model->setOperandValue(rank_param, rank_param_init, sizeof(int32_t) * 1);
  static int32_t activation_param_init[] = {0};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SVDF, {input, weights_feature, weights_time, bias, state_in, rank_param, activation_param}, {state_out, output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, weights_feature, weights_time, bias, state_in},
    {state_out, output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::svdf_state_relaxed
namespace generated_tests::svdf_state_relaxed {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 10});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 40});
  OperandType type5(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto weights_feature = model->addOperand(&type1);
  auto weights_time = model->addOperand(&type2);
  auto bias = model->addOperand(&type3);
  auto state_in = model->addOperand(&type4);
  auto rank_param = model->addOperand(&type5);
  auto activation_param = model->addOperand(&type5);
  auto state_out = model->addOperand(&type7);
  auto output = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t rank_param_init[] = {1};
  model->setOperandValue(rank_param, rank_param_init, sizeof(int32_t) * 1);
  static int32_t activation_param_init[] = {0};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SVDF, {input, weights_feature, weights_time, bias, state_in, rank_param, activation_param}, {state_out, output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, weights_feature, weights_time, bias, state_in},
    {state_out, output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::svdf_state_relaxed
namespace generated_tests::svdf_state_relaxed {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 10});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 40});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto weights_feature = model->addOperand(&type1);
  auto weights_time = model->addOperand(&type2);
  auto bias = model->addOperand(&type3);
  auto state_in = model->addOperand(&type4);
  auto rank_param = model->addOperand(&type5);
  auto activation_param = model->addOperand(&type5);
  auto state_out = model->addOperand(&type4);
  auto output = model->addOperand(&type6);
  auto input_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type8);
  auto param = model->addOperand(&type5);
  auto weights_feature_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type8);
  auto param1 = model->addOperand(&type5);
  auto weights_time_tmp = model->addOperand(&type2);
  auto dummy2 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type5);
  auto state_in_tmp = model->addOperand(&type4);
  auto dummy3 = model->addOperand(&type8);
  auto param3 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t rank_param_init[] = {1};
  model->setOperandValue(rank_param, rank_param_init, sizeof(int32_t) * 1);
  static int32_t activation_param_init[] = {0};
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
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy, param}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {weights_feature_tmp, dummy1, param1}, {weights_feature});
  model->addOperation(ANEURALNETWORKS_ADD, {weights_time_tmp, dummy2, param2}, {weights_time});
  model->addOperation(ANEURALNETWORKS_ADD, {state_in_tmp, dummy3, param3}, {state_in});
  model->addOperation(ANEURALNETWORKS_SVDF, {input, weights_feature, weights_time, bias, state_in, rank_param, activation_param}, {state_out, output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {bias, input_tmp, weights_feature_tmp, weights_time_tmp, state_in_tmp},
    {state_out, output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::svdf_state_relaxed
namespace generated_tests::svdf_state_relaxed {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 10});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 40});
  OperandType type5(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto weights_feature = model->addOperand(&type1);
  auto weights_time = model->addOperand(&type2);
  auto bias = model->addOperand(&type3);
  auto state_in = model->addOperand(&type4);
  auto rank_param = model->addOperand(&type5);
  auto activation_param = model->addOperand(&type5);
  auto state_out = model->addOperand(&type7);
  auto output = model->addOperand(&type7);
  auto input_tmp = model->addOperand(&type0);
  auto dummy4 = model->addOperand(&type8);
  auto param4 = model->addOperand(&type5);
  auto weights_feature_tmp = model->addOperand(&type1);
  auto dummy5 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type5);
  auto weights_time_tmp = model->addOperand(&type2);
  auto dummy6 = model->addOperand(&type8);
  auto param6 = model->addOperand(&type5);
  auto state_in_tmp = model->addOperand(&type4);
  auto dummy7 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t rank_param_init[] = {1};
  model->setOperandValue(rank_param, rank_param_init, sizeof(int32_t) * 1);
  static int32_t activation_param_init[] = {0};
  model->setOperandValue(activation_param, activation_param_init, sizeof(int32_t) * 1);
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
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy4, param4}, {input});
  model->addOperation(ANEURALNETWORKS_ADD, {weights_feature_tmp, dummy5, param5}, {weights_feature});
  model->addOperation(ANEURALNETWORKS_ADD, {weights_time_tmp, dummy6, param6}, {weights_time});
  model->addOperation(ANEURALNETWORKS_ADD, {state_in_tmp, dummy7, param7}, {state_in});
  model->addOperation(ANEURALNETWORKS_SVDF, {input, weights_feature, weights_time, bias, state_in, rank_param, activation_param}, {state_out, output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {bias, input_tmp, weights_feature_tmp, weights_time_tmp, state_in_tmp},
    {state_out, output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::svdf_state_relaxed
