// Generated from depthwise_conv2d_dilation.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type2);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 16);
  static float op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type10);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 16);
  static float op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy = model->addOperand(&type8);
  auto param41 = model->addOperand(&type4);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 16);
  static float op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param41}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type10);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type8);
  auto param42 = model->addOperand(&type4);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 16);
  static float op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param42_init[] = {0};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param42}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy2 = model->addOperand(&type8);
  auto param43 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type2);
  auto dummy3 = model->addOperand(&type8);
  auto param44 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type3);
  auto dummy4 = model->addOperand(&type8);
  auto param45 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param43_init[] = {0};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param44_init[] = {0};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static float dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(float) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy2, param43}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy3, param44}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy4, param45}, {op3});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, op3_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type10);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy5 = model->addOperand(&type8);
  auto param46 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type2);
  auto dummy6 = model->addOperand(&type8);
  auto param47 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type3);
  auto dummy7 = model->addOperand(&type8);
  auto param48 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(float) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static float dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(float) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static float dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(float) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy5, param46}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy6, param47}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy7, param48}, {op3});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, op3_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type2);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 16);
  static float op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type10);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 16);
  static float op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy8 = model->addOperand(&type8);
  auto param49 = model->addOperand(&type4);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 16);
  static float op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy8, param49}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type10);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy9 = model->addOperand(&type8);
  auto param50 = model->addOperand(&type4);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 16);
  static float op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy9, param50}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy10 = model->addOperand(&type8);
  auto param51 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type2);
  auto dummy11 = model->addOperand(&type8);
  auto param52 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type3);
  auto dummy12 = model->addOperand(&type8);
  auto param53 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(float) * 1);
  static int32_t param51_init[] = {0};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static float dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(float) * 1);
  static int32_t param52_init[] = {0};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static float dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(float) * 1);
  static int32_t param53_init[] = {0};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy10, param51}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy11, param52}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy12, param53}, {op3});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, op3_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type10);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy13 = model->addOperand(&type8);
  auto param54 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type2);
  auto dummy14 = model->addOperand(&type8);
  auto param55 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type3);
  auto dummy15 = model->addOperand(&type8);
  auto param56 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(float) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static float dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(float) * 1);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(float) * 1);
  static int32_t param56_init[] = {0};
  model->setOperandValue(param56, param56_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy13, param54}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy14, param55}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy15, param56}, {op3});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, op3_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type13(Type::TENSOR_FLOAT16, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto op2 = model->addOperand(&type12);
  auto op3 = model->addOperand(&type13);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type12);
  // Phase 2, operations
  static _Float16 op2_init[] = {0.25f, 0.0f, 0.20000000298023224f, 0.0f, 0.25f, 0.0f, 0.0f, 0.30000001192092896f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.10000000149011612f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 16);
  static _Float16 op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type13(Type::TENSOR_FLOAT16, {4});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto op2 = model->addOperand(&type12);
  auto op3 = model->addOperand(&type13);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type14);
  // Phase 2, operations
  static _Float16 op2_init[] = {0.25f, 0.0f, 0.20000000298023224f, 0.0f, 0.25f, 0.0f, 0.0f, 0.30000001192092896f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.10000000149011612f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 16);
  static _Float16 op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type13(Type::TENSOR_FLOAT16, {4});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto op2 = model->addOperand(&type12);
  auto op3 = model->addOperand(&type13);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type12);
  auto op1_tmp = model->addOperand(&type15);
  auto dummy16 = model->addOperand(&type16);
  auto param57 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op2_init[] = {0.25f, 0.0f, 0.20000000298023224f, 0.0f, 0.25f, 0.0f, 0.0f, 0.30000001192092896f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.10000000149011612f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 16);
  static _Float16 op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(_Float16) * 1);
  static int32_t param57_init[] = {0};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy16, param57}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type13(Type::TENSOR_FLOAT16, {4});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto op2 = model->addOperand(&type12);
  auto op3 = model->addOperand(&type13);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type14);
  auto op1_tmp = model->addOperand(&type15);
  auto dummy17 = model->addOperand(&type16);
  auto param58 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op2_init[] = {0.25f, 0.0f, 0.20000000298023224f, 0.0f, 0.25f, 0.0f, 0.0f, 0.30000001192092896f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.10000000149011612f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 16);
  static _Float16 op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(_Float16) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy17, param58}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type18(Type::TENSOR_FLOAT16, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto op2 = model->addOperand(&type17);
  auto op3 = model->addOperand(&type18);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type18(Type::TENSOR_FLOAT16, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto op2 = model->addOperand(&type17);
  auto op3 = model->addOperand(&type18);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type18(Type::TENSOR_FLOAT16, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto op2 = model->addOperand(&type17);
  auto op3 = model->addOperand(&type18);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type12);
  auto op1_tmp = model->addOperand(&type15);
  auto dummy18 = model->addOperand(&type16);
  auto param59 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type17);
  auto dummy19 = model->addOperand(&type16);
  auto param60 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type18);
  auto dummy20 = model->addOperand(&type16);
  auto param61 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(_Float16) * 1);
  static int32_t param59_init[] = {0};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static _Float16 dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(_Float16) * 1);
  static int32_t param60_init[] = {0};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  static _Float16 dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(_Float16) * 1);
  static int32_t param61_init[] = {0};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy18, param59}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy19, param60}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy20, param61}, {op3});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, op3_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type18(Type::TENSOR_FLOAT16, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto op2 = model->addOperand(&type17);
  auto op3 = model->addOperand(&type18);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type14);
  auto op1_tmp = model->addOperand(&type15);
  auto dummy21 = model->addOperand(&type16);
  auto param62 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type17);
  auto dummy22 = model->addOperand(&type16);
  auto param63 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type18);
  auto dummy23 = model->addOperand(&type16);
  auto param64 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(_Float16) * 1);
  static int32_t param62_init[] = {0};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static _Float16 dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(_Float16) * 1);
  static int32_t param63_init[] = {0};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static _Float16 dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(_Float16) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy21, param62}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy22, param63}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy23, param64}, {op3});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, op3_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 0);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.1f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type22);
  // Phase 2, operations
  static uint8_t op2_init[] = {25, 0, 20, 0, 25, 0, 0, 30, 25, 0, 0, 0, 25, 10, 0, 0};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 16);
  static int32_t op3_init[] = {200, 400, 600, 800};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 0);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type23);
  // Phase 2, operations
  static uint8_t op2_init[] = {25, 0, 20, 0, 25, 0, 0, 30, 25, 0, 0, 0, 25, 10, 0, 0};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 16);
  static int32_t op3_init[] = {200, 400, 600, 800};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 0);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.1f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type22);
  auto op1_tmp = model->addOperand(&type19);
  auto dummy24 = model->addOperand(&type24);
  auto param65 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op2_init[] = {25, 0, 20, 0, 25, 0, 0, 30, 25, 0, 0, 0, 25, 10, 0, 0};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 16);
  static int32_t op3_init[] = {200, 400, 600, 800};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static uint8_t dummy24_init[] = {0};
  model->setOperandValue(dummy24, dummy24_init, sizeof(uint8_t) * 1);
  static int32_t param65_init[] = {0};
  model->setOperandValue(param65, param65_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy24, param65}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 0);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type23);
  auto op1_tmp = model->addOperand(&type19);
  auto dummy25 = model->addOperand(&type24);
  auto param66 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op2_init[] = {25, 0, 20, 0, 25, 0, 0, 30, 25, 0, 0, 0, 25, 10, 0, 0};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 16);
  static int32_t op3_init[] = {200, 400, 600, 800};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static uint8_t dummy25_init[] = {0};
  model->setOperandValue(dummy25, dummy25_init, sizeof(uint8_t) * 1);
  static int32_t param66_init[] = {0};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy25, param66}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 0);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.1f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 0);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 0);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.1f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type22);
  auto op1_tmp = model->addOperand(&type19);
  auto dummy26 = model->addOperand(&type24);
  auto param67 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type20);
  auto dummy27 = model->addOperand(&type25);
  auto param68 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static uint8_t dummy26_init[] = {0};
  model->setOperandValue(dummy26, dummy26_init, sizeof(uint8_t) * 1);
  static int32_t param67_init[] = {0};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  static uint8_t dummy27_init[] = {0};
  model->setOperandValue(dummy27, dummy27_init, sizeof(uint8_t) * 1);
  static int32_t param68_init[] = {0};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy26, param67}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy27, param68}, {op2});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op3, op1_tmp, op2_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 0);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type23);
  auto op1_tmp = model->addOperand(&type19);
  auto dummy28 = model->addOperand(&type24);
  auto param69 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type20);
  auto dummy29 = model->addOperand(&type25);
  auto param70 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static uint8_t dummy28_init[] = {0};
  model->setOperandValue(dummy28, dummy28_init, sizeof(uint8_t) * 1);
  static int32_t param69_init[] = {0};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static uint8_t dummy29_init[] = {0};
  model->setOperandValue(dummy29, dummy29_init, sizeof(uint8_t) * 1);
  static int32_t param70_init[] = {0};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy28, param69}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy29, param70}, {op2});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op3, op1_tmp, op2_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type27);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 16);
  static float op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type10);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 16);
  static float op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type27);
  auto op1_tmp = model->addOperand(&type26);
  auto dummy30 = model->addOperand(&type8);
  auto param71 = model->addOperand(&type4);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 16);
  static float op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float dummy30_init[] = {0.0f};
  model->setOperandValue(dummy30, dummy30_init, sizeof(float) * 1);
  static int32_t param71_init[] = {0};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy30, param71}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type10);
  auto op1_tmp = model->addOperand(&type26);
  auto dummy31 = model->addOperand(&type8);
  auto param72 = model->addOperand(&type4);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 16);
  static float op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float dummy31_init[] = {0.0f};
  model->setOperandValue(dummy31, dummy31_init, sizeof(float) * 1);
  static int32_t param72_init[] = {0};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy31, param72}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type27);
  auto op1_tmp = model->addOperand(&type26);
  auto dummy32 = model->addOperand(&type8);
  auto param73 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type2);
  auto dummy33 = model->addOperand(&type8);
  auto param74 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type3);
  auto dummy34 = model->addOperand(&type8);
  auto param75 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float dummy32_init[] = {0.0f};
  model->setOperandValue(dummy32, dummy32_init, sizeof(float) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  static float dummy33_init[] = {0.0f};
  model->setOperandValue(dummy33, dummy33_init, sizeof(float) * 1);
  static int32_t param74_init[] = {0};
  model->setOperandValue(param74, param74_init, sizeof(int32_t) * 1);
  static float dummy34_init[] = {0.0f};
  model->setOperandValue(dummy34, dummy34_init, sizeof(float) * 1);
  static int32_t param75_init[] = {0};
  model->setOperandValue(param75, param75_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy32, param73}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy33, param74}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy34, param75}, {op3});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, op3_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type10);
  auto op1_tmp = model->addOperand(&type26);
  auto dummy35 = model->addOperand(&type8);
  auto param76 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type2);
  auto dummy36 = model->addOperand(&type8);
  auto param77 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type3);
  auto dummy37 = model->addOperand(&type8);
  auto param78 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float dummy35_init[] = {0.0f};
  model->setOperandValue(dummy35, dummy35_init, sizeof(float) * 1);
  static int32_t param76_init[] = {0};
  model->setOperandValue(param76, param76_init, sizeof(int32_t) * 1);
  static float dummy36_init[] = {0.0f};
  model->setOperandValue(dummy36, dummy36_init, sizeof(float) * 1);
  static int32_t param77_init[] = {0};
  model->setOperandValue(param77, param77_init, sizeof(int32_t) * 1);
  static float dummy37_init[] = {0.0f};
  model->setOperandValue(dummy37, dummy37_init, sizeof(float) * 1);
  static int32_t param78_init[] = {0};
  model->setOperandValue(param78, param78_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy35, param76}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy36, param77}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy37, param78}, {op3});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, op3_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type27);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 16);
  static float op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type10);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 16);
  static float op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type27);
  auto op1_tmp = model->addOperand(&type26);
  auto dummy38 = model->addOperand(&type8);
  auto param79 = model->addOperand(&type4);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 16);
  static float op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float dummy38_init[] = {0.0f};
  model->setOperandValue(dummy38, dummy38_init, sizeof(float) * 1);
  static int32_t param79_init[] = {0};
  model->setOperandValue(param79, param79_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy38, param79}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type10);
  auto op1_tmp = model->addOperand(&type26);
  auto dummy39 = model->addOperand(&type8);
  auto param80 = model->addOperand(&type4);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 16);
  static float op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float dummy39_init[] = {0.0f};
  model->setOperandValue(dummy39, dummy39_init, sizeof(float) * 1);
  static int32_t param80_init[] = {0};
  model->setOperandValue(param80, param80_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy39, param80}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type27);
  auto op1_tmp = model->addOperand(&type26);
  auto dummy40 = model->addOperand(&type8);
  auto param81 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type2);
  auto dummy41 = model->addOperand(&type8);
  auto param82 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type3);
  auto dummy42 = model->addOperand(&type8);
  auto param83 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float dummy40_init[] = {0.0f};
  model->setOperandValue(dummy40, dummy40_init, sizeof(float) * 1);
  static int32_t param81_init[] = {0};
  model->setOperandValue(param81, param81_init, sizeof(int32_t) * 1);
  static float dummy41_init[] = {0.0f};
  model->setOperandValue(dummy41, dummy41_init, sizeof(float) * 1);
  static int32_t param82_init[] = {0};
  model->setOperandValue(param82, param82_init, sizeof(int32_t) * 1);
  static float dummy42_init[] = {0.0f};
  model->setOperandValue(dummy42, dummy42_init, sizeof(float) * 1);
  static int32_t param83_init[] = {0};
  model->setOperandValue(param83, param83_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy40, param81}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy41, param82}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy42, param83}, {op3});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, op3_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type10);
  auto op1_tmp = model->addOperand(&type26);
  auto dummy43 = model->addOperand(&type8);
  auto param84 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type2);
  auto dummy44 = model->addOperand(&type8);
  auto param85 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type3);
  auto dummy45 = model->addOperand(&type8);
  auto param86 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float dummy43_init[] = {0.0f};
  model->setOperandValue(dummy43, dummy43_init, sizeof(float) * 1);
  static int32_t param84_init[] = {0};
  model->setOperandValue(param84, param84_init, sizeof(int32_t) * 1);
  static float dummy44_init[] = {0.0f};
  model->setOperandValue(dummy44, dummy44_init, sizeof(float) * 1);
  static int32_t param85_init[] = {0};
  model->setOperandValue(param85, param85_init, sizeof(int32_t) * 1);
  static float dummy45_init[] = {0.0f};
  model->setOperandValue(dummy45, dummy45_init, sizeof(float) * 1);
  static int32_t param86_init[] = {0};
  model->setOperandValue(param86, param86_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy43, param84}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy44, param85}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy45, param86}, {op3});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, op3_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type13(Type::TENSOR_FLOAT16, {4});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 3, 3});
  OperandType type29(Type::TENSOR_FLOAT16, {1, 4, 2, 2});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto op2 = model->addOperand(&type12);
  auto op3 = model->addOperand(&type13);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type29);
  // Phase 2, operations
  static _Float16 op2_init[] = {0.25f, 0.0f, 0.20000000298023224f, 0.0f, 0.25f, 0.0f, 0.0f, 0.30000001192092896f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.10000000149011612f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 16);
  static _Float16 op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type13(Type::TENSOR_FLOAT16, {4});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto op2 = model->addOperand(&type12);
  auto op3 = model->addOperand(&type13);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type14);
  // Phase 2, operations
  static _Float16 op2_init[] = {0.25f, 0.0f, 0.20000000298023224f, 0.0f, 0.25f, 0.0f, 0.0f, 0.30000001192092896f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.10000000149011612f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 16);
  static _Float16 op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type13(Type::TENSOR_FLOAT16, {4});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type29(Type::TENSOR_FLOAT16, {1, 4, 2, 2});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 2, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type30);
  auto op2 = model->addOperand(&type12);
  auto op3 = model->addOperand(&type13);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type29);
  auto op1_tmp = model->addOperand(&type30);
  auto dummy46 = model->addOperand(&type16);
  auto param87 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op2_init[] = {0.25f, 0.0f, 0.20000000298023224f, 0.0f, 0.25f, 0.0f, 0.0f, 0.30000001192092896f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.10000000149011612f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 16);
  static _Float16 op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 dummy46_init[] = {0.0f};
  model->setOperandValue(dummy46, dummy46_init, sizeof(_Float16) * 1);
  static int32_t param87_init[] = {0};
  model->setOperandValue(param87, param87_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy46, param87}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type13(Type::TENSOR_FLOAT16, {4});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 2, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type30);
  auto op2 = model->addOperand(&type12);
  auto op3 = model->addOperand(&type13);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type14);
  auto op1_tmp = model->addOperand(&type30);
  auto dummy47 = model->addOperand(&type16);
  auto param88 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op2_init[] = {0.25f, 0.0f, 0.20000000298023224f, 0.0f, 0.25f, 0.0f, 0.0f, 0.30000001192092896f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.10000000149011612f, 0.0f, 0.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 16);
  static _Float16 op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 dummy47_init[] = {0.0f};
  model->setOperandValue(dummy47, dummy47_init, sizeof(_Float16) * 1);
  static int32_t param88_init[] = {0};
  model->setOperandValue(param88, param88_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy47, param88}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type18(Type::TENSOR_FLOAT16, {4});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 3, 3});
  OperandType type29(Type::TENSOR_FLOAT16, {1, 4, 2, 2});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto op2 = model->addOperand(&type17);
  auto op3 = model->addOperand(&type18);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type29);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type18(Type::TENSOR_FLOAT16, {4});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto op2 = model->addOperand(&type17);
  auto op3 = model->addOperand(&type18);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type18(Type::TENSOR_FLOAT16, {4});
  OperandType type29(Type::TENSOR_FLOAT16, {1, 4, 2, 2});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 2, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type30);
  auto op2 = model->addOperand(&type17);
  auto op3 = model->addOperand(&type18);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type29);
  auto op1_tmp = model->addOperand(&type30);
  auto dummy48 = model->addOperand(&type16);
  auto param89 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type17);
  auto dummy49 = model->addOperand(&type16);
  auto param90 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type18);
  auto dummy50 = model->addOperand(&type16);
  auto param91 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 dummy48_init[] = {0.0f};
  model->setOperandValue(dummy48, dummy48_init, sizeof(_Float16) * 1);
  static int32_t param89_init[] = {0};
  model->setOperandValue(param89, param89_init, sizeof(int32_t) * 1);
  static _Float16 dummy49_init[] = {0.0f};
  model->setOperandValue(dummy49, dummy49_init, sizeof(_Float16) * 1);
  static int32_t param90_init[] = {0};
  model->setOperandValue(param90, param90_init, sizeof(int32_t) * 1);
  static _Float16 dummy50_init[] = {0.0f};
  model->setOperandValue(dummy50, dummy50_init, sizeof(_Float16) * 1);
  static int32_t param91_init[] = {0};
  model->setOperandValue(param91, param91_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy48, param89}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy49, param90}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy50, param91}, {op3});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, op3_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type18(Type::TENSOR_FLOAT16, {4});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 2, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type30);
  auto op2 = model->addOperand(&type17);
  auto op3 = model->addOperand(&type18);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type14);
  auto op1_tmp = model->addOperand(&type30);
  auto dummy51 = model->addOperand(&type16);
  auto param92 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type17);
  auto dummy52 = model->addOperand(&type16);
  auto param93 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type18);
  auto dummy53 = model->addOperand(&type16);
  auto param94 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 dummy51_init[] = {0.0f};
  model->setOperandValue(dummy51, dummy51_init, sizeof(_Float16) * 1);
  static int32_t param92_init[] = {0};
  model->setOperandValue(param92, param92_init, sizeof(int32_t) * 1);
  static _Float16 dummy52_init[] = {0.0f};
  model->setOperandValue(dummy52, dummy52_init, sizeof(_Float16) * 1);
  static int32_t param93_init[] = {0};
  model->setOperandValue(param93, param93_init, sizeof(int32_t) * 1);
  static _Float16 dummy53_init[] = {0.0f};
  model->setOperandValue(dummy53, dummy53_init, sizeof(_Float16) * 1);
  static int32_t param94_init[] = {0};
  model->setOperandValue(param94, param94_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy51, param92}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy52, param93}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy53, param94}, {op3});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, op3_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 0);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 2}, 0.1f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type31);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type32);
  // Phase 2, operations
  static uint8_t op2_init[] = {25, 0, 20, 0, 25, 0, 0, 30, 25, 0, 0, 0, 25, 10, 0, 0};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 16);
  static int32_t op3_init[] = {200, 400, 600, 800};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type31);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type23);
  // Phase 2, operations
  static uint8_t op2_init[] = {25, 0, 20, 0, 25, 0, 0, 30, 25, 0, 0, 0, 25, 10, 0, 0};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 16);
  static int32_t op3_init[] = {200, 400, 600, 800};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 0);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 2}, 0.1f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type31);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type32);
  auto op1_tmp = model->addOperand(&type31);
  auto dummy54 = model->addOperand(&type24);
  auto param95 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op2_init[] = {25, 0, 20, 0, 25, 0, 0, 30, 25, 0, 0, 0, 25, 10, 0, 0};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 16);
  static int32_t op3_init[] = {200, 400, 600, 800};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static uint8_t dummy54_init[] = {0};
  model->setOperandValue(dummy54, dummy54_init, sizeof(uint8_t) * 1);
  static int32_t param95_init[] = {0};
  model->setOperandValue(param95, param95_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy54, param95}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type31);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type23);
  auto op1_tmp = model->addOperand(&type31);
  auto dummy55 = model->addOperand(&type24);
  auto param96 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op2_init[] = {25, 0, 20, 0, 25, 0, 0, 30, 25, 0, 0, 0, 25, 10, 0, 0};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 16);
  static int32_t op3_init[] = {200, 400, 600, 800};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 4);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static uint8_t dummy55_init[] = {0};
  model->setOperandValue(dummy55, dummy55_init, sizeof(uint8_t) * 1);
  static int32_t param96_init[] = {0};
  model->setOperandValue(param96, param96_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy55, param96}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 0);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 2}, 0.1f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type31);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type31);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 0);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 2}, 0.1f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type31);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type32);
  auto op1_tmp = model->addOperand(&type31);
  auto dummy56 = model->addOperand(&type24);
  auto param97 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type20);
  auto dummy57 = model->addOperand(&type25);
  auto param98 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static uint8_t dummy56_init[] = {0};
  model->setOperandValue(dummy56, dummy56_init, sizeof(uint8_t) * 1);
  static int32_t param97_init[] = {0};
  model->setOperandValue(param97, param97_init, sizeof(int32_t) * 1);
  static uint8_t dummy57_init[] = {0};
  model->setOperandValue(dummy57, dummy57_init, sizeof(uint8_t) * 1);
  static int32_t param98_init[] = {0};
  model->setOperandValue(param98, param98_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy56, param97}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy57, param98}, {op2});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op3, op1_tmp, op2_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type31);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type21);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type23);
  auto op1_tmp = model->addOperand(&type31);
  auto dummy58 = model->addOperand(&type24);
  auto param99 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type20);
  auto dummy59 = model->addOperand(&type25);
  auto param100 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static uint8_t dummy58_init[] = {0};
  model->setOperandValue(dummy58, dummy58_init, sizeof(uint8_t) * 1);
  static int32_t param99_init[] = {0};
  model->setOperandValue(param99, param99_init, sizeof(int32_t) * 1);
  static uint8_t dummy59_init[] = {0};
  model->setOperandValue(dummy59, dummy59_init, sizeof(uint8_t) * 1);
  static int32_t param100_init[] = {0};
  model->setOperandValue(param100, param100_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy58, param99}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy59, param100}, {op2});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7, layout, param8, param9}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op3, op1_tmp, op2_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type2);
  auto op31 = model->addOperand(&type3);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type2);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 16);
  static float op31_init[] = {0.0f, 0.0f, 0.0f, 0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 4);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param10, param11, param12, param13, param14, param15, param16, param17, layout, param18, param19}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type2);
  auto op31 = model->addOperand(&type3);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type10);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 16);
  static float op31_init[] = {0.0f, 0.0f, 0.0f, 0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 4);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param10, param11, param12, param13, param14, param15, param16, param17, layout, param18, param19}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type2);
  auto op31 = model->addOperand(&type3);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type2);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy60 = model->addOperand(&type8);
  auto param101 = model->addOperand(&type4);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 16);
  static float op31_init[] = {0.0f, 0.0f, 0.0f, 0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 4);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static float dummy60_init[] = {0.0f};
  model->setOperandValue(dummy60, dummy60_init, sizeof(float) * 1);
  static int32_t param101_init[] = {0};
  model->setOperandValue(param101, param101_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy60, param101}, {op11});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param10, param11, param12, param13, param14, param15, param16, param17, layout, param18, param19}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type2);
  auto op31 = model->addOperand(&type3);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type10);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy61 = model->addOperand(&type8);
  auto param102 = model->addOperand(&type4);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 16);
  static float op31_init[] = {0.0f, 0.0f, 0.0f, 0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 4);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static float dummy61_init[] = {0.0f};
  model->setOperandValue(dummy61, dummy61_init, sizeof(float) * 1);
  static int32_t param102_init[] = {0};
  model->setOperandValue(param102, param102_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy61, param102}, {op11});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param10, param11, param12, param13, param14, param15, param16, param17, layout, param18, param19}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type2);
  auto op31 = model->addOperand(&type3);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param10, param11, param12, param13, param14, param15, param16, param17, layout, param18, param19}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type2);
  auto op31 = model->addOperand(&type3);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param10, param11, param12, param13, param14, param15, param16, param17, layout, param18, param19}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type2);
  auto op31 = model->addOperand(&type3);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type2);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy62 = model->addOperand(&type8);
  auto param103 = model->addOperand(&type4);
  auto op21_tmp = model->addOperand(&type2);
  auto dummy63 = model->addOperand(&type8);
  auto param104 = model->addOperand(&type4);
  auto op31_tmp = model->addOperand(&type3);
  auto dummy64 = model->addOperand(&type8);
  auto param105 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static float dummy62_init[] = {0.0f};
  model->setOperandValue(dummy62, dummy62_init, sizeof(float) * 1);
  static int32_t param103_init[] = {0};
  model->setOperandValue(param103, param103_init, sizeof(int32_t) * 1);
  static float dummy63_init[] = {0.0f};
  model->setOperandValue(dummy63, dummy63_init, sizeof(float) * 1);
  static int32_t param104_init[] = {0};
  model->setOperandValue(param104, param104_init, sizeof(int32_t) * 1);
  static float dummy64_init[] = {0.0f};
  model->setOperandValue(dummy64, dummy64_init, sizeof(float) * 1);
  static int32_t param105_init[] = {0};
  model->setOperandValue(param105, param105_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy62, param103}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy63, param104}, {op21});
  model->addOperation(ANEURALNETWORKS_ADD, {op31_tmp, dummy64, param105}, {op31});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param10, param11, param12, param13, param14, param15, param16, param17, layout, param18, param19}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp, op21_tmp, op31_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type2);
  auto op31 = model->addOperand(&type3);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type10);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy65 = model->addOperand(&type8);
  auto param106 = model->addOperand(&type4);
  auto op21_tmp = model->addOperand(&type2);
  auto dummy66 = model->addOperand(&type8);
  auto param107 = model->addOperand(&type4);
  auto op31_tmp = model->addOperand(&type3);
  auto dummy67 = model->addOperand(&type8);
  auto param108 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static float dummy65_init[] = {0.0f};
  model->setOperandValue(dummy65, dummy65_init, sizeof(float) * 1);
  static int32_t param106_init[] = {0};
  model->setOperandValue(param106, param106_init, sizeof(int32_t) * 1);
  static float dummy66_init[] = {0.0f};
  model->setOperandValue(dummy66, dummy66_init, sizeof(float) * 1);
  static int32_t param107_init[] = {0};
  model->setOperandValue(param107, param107_init, sizeof(int32_t) * 1);
  static float dummy67_init[] = {0.0f};
  model->setOperandValue(dummy67, dummy67_init, sizeof(float) * 1);
  static int32_t param108_init[] = {0};
  model->setOperandValue(param108, param108_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy65, param106}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy66, param107}, {op21});
  model->addOperation(ANEURALNETWORKS_ADD, {op31_tmp, dummy67, param108}, {op31});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param10, param11, param12, param13, param14, param15, param16, param17, layout, param18, param19}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp, op21_tmp, op31_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto op21 = model->addOperand(&type2);
  auto op31 = model->addOperand(&type3);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type27);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 16);
  static float op31_init[] = {0.0f, 0.0f, 0.0f, 0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 4);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param10, param11, param12, param13, param14, param15, param16, param17, layout, param18, param19}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto op21 = model->addOperand(&type2);
  auto op31 = model->addOperand(&type3);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type10);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 16);
  static float op31_init[] = {0.0f, 0.0f, 0.0f, 0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 4);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param10, param11, param12, param13, param14, param15, param16, param17, layout, param18, param19}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto op21 = model->addOperand(&type2);
  auto op31 = model->addOperand(&type3);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type27);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy68 = model->addOperand(&type8);
  auto param109 = model->addOperand(&type4);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 16);
  static float op31_init[] = {0.0f, 0.0f, 0.0f, 0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 4);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static float dummy68_init[] = {0.0f};
  model->setOperandValue(dummy68, dummy68_init, sizeof(float) * 1);
  static int32_t param109_init[] = {0};
  model->setOperandValue(param109, param109_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy68, param109}, {op11});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param10, param11, param12, param13, param14, param15, param16, param17, layout, param18, param19}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto op21 = model->addOperand(&type2);
  auto op31 = model->addOperand(&type3);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type10);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy69 = model->addOperand(&type8);
  auto param110 = model->addOperand(&type4);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 16);
  static float op31_init[] = {0.0f, 0.0f, 0.0f, 0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 4);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static float dummy69_init[] = {0.0f};
  model->setOperandValue(dummy69, dummy69_init, sizeof(float) * 1);
  static int32_t param110_init[] = {0};
  model->setOperandValue(param110, param110_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy69, param110}, {op11});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param10, param11, param12, param13, param14, param15, param16, param17, layout, param18, param19}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto op21 = model->addOperand(&type2);
  auto op31 = model->addOperand(&type3);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param10, param11, param12, param13, param14, param15, param16, param17, layout, param18, param19}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto op21 = model->addOperand(&type2);
  auto op31 = model->addOperand(&type3);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param10, param11, param12, param13, param14, param15, param16, param17, layout, param18, param19}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto op21 = model->addOperand(&type2);
  auto op31 = model->addOperand(&type3);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type27);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy70 = model->addOperand(&type8);
  auto param111 = model->addOperand(&type4);
  auto op21_tmp = model->addOperand(&type2);
  auto dummy71 = model->addOperand(&type8);
  auto param112 = model->addOperand(&type4);
  auto op31_tmp = model->addOperand(&type3);
  auto dummy72 = model->addOperand(&type8);
  auto param113 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static float dummy70_init[] = {0.0f};
  model->setOperandValue(dummy70, dummy70_init, sizeof(float) * 1);
  static int32_t param111_init[] = {0};
  model->setOperandValue(param111, param111_init, sizeof(int32_t) * 1);
  static float dummy71_init[] = {0.0f};
  model->setOperandValue(dummy71, dummy71_init, sizeof(float) * 1);
  static int32_t param112_init[] = {0};
  model->setOperandValue(param112, param112_init, sizeof(int32_t) * 1);
  static float dummy72_init[] = {0.0f};
  model->setOperandValue(dummy72, dummy72_init, sizeof(float) * 1);
  static int32_t param113_init[] = {0};
  model->setOperandValue(param113, param113_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy70, param111}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy71, param112}, {op21});
  model->addOperation(ANEURALNETWORKS_ADD, {op31_tmp, dummy72, param113}, {op31});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param10, param11, param12, param13, param14, param15, param16, param17, layout, param18, param19}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp, op21_tmp, op31_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto op21 = model->addOperand(&type2);
  auto op31 = model->addOperand(&type3);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type10);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy73 = model->addOperand(&type8);
  auto param114 = model->addOperand(&type4);
  auto op21_tmp = model->addOperand(&type2);
  auto dummy74 = model->addOperand(&type8);
  auto param115 = model->addOperand(&type4);
  auto op31_tmp = model->addOperand(&type3);
  auto dummy75 = model->addOperand(&type8);
  auto param116 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {1};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {2};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static float dummy73_init[] = {0.0f};
  model->setOperandValue(dummy73, dummy73_init, sizeof(float) * 1);
  static int32_t param114_init[] = {0};
  model->setOperandValue(param114, param114_init, sizeof(int32_t) * 1);
  static float dummy74_init[] = {0.0f};
  model->setOperandValue(dummy74, dummy74_init, sizeof(float) * 1);
  static int32_t param115_init[] = {0};
  model->setOperandValue(param115, param115_init, sizeof(int32_t) * 1);
  static float dummy75_init[] = {0.0f};
  model->setOperandValue(dummy75, dummy75_init, sizeof(float) * 1);
  static int32_t param116_init[] = {0};
  model->setOperandValue(param116, param116_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy73, param114}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy74, param115}, {op21});
  model->addOperation(ANEURALNETWORKS_ADD, {op31_tmp, dummy75, param116}, {op31});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param10, param11, param12, param13, param14, param15, param16, param17, layout, param18, param19}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp, op21_tmp, op31_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type2);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 16);
  static float op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type10);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 16);
  static float op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type2);
  auto op12_tmp = model->addOperand(&type1);
  auto dummy76 = model->addOperand(&type8);
  auto param117 = model->addOperand(&type4);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 16);
  static float op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static float dummy76_init[] = {0.0f};
  model->setOperandValue(dummy76, dummy76_init, sizeof(float) * 1);
  static int32_t param117_init[] = {0};
  model->setOperandValue(param117, param117_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy76, param117}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type10);
  auto op12_tmp = model->addOperand(&type1);
  auto dummy77 = model->addOperand(&type8);
  auto param118 = model->addOperand(&type4);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 16);
  static float op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static float dummy77_init[] = {0.0f};
  model->setOperandValue(dummy77, dummy77_init, sizeof(float) * 1);
  static int32_t param118_init[] = {0};
  model->setOperandValue(param118, param118_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy77, param118}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type2);
  auto op12_tmp = model->addOperand(&type1);
  auto dummy78 = model->addOperand(&type8);
  auto param119 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type2);
  auto dummy79 = model->addOperand(&type8);
  auto param120 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type3);
  auto dummy80 = model->addOperand(&type8);
  auto param121 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static float dummy78_init[] = {0.0f};
  model->setOperandValue(dummy78, dummy78_init, sizeof(float) * 1);
  static int32_t param119_init[] = {0};
  model->setOperandValue(param119, param119_init, sizeof(int32_t) * 1);
  static float dummy79_init[] = {0.0f};
  model->setOperandValue(dummy79, dummy79_init, sizeof(float) * 1);
  static int32_t param120_init[] = {0};
  model->setOperandValue(param120, param120_init, sizeof(int32_t) * 1);
  static float dummy80_init[] = {0.0f};
  model->setOperandValue(dummy80, dummy80_init, sizeof(float) * 1);
  static int32_t param121_init[] = {0};
  model->setOperandValue(param121, param121_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy78, param119}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy79, param120}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy80, param121}, {op32});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp, op22_tmp, op32_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type10);
  auto op12_tmp = model->addOperand(&type1);
  auto dummy81 = model->addOperand(&type8);
  auto param122 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type2);
  auto dummy82 = model->addOperand(&type8);
  auto param123 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type3);
  auto dummy83 = model->addOperand(&type8);
  auto param124 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static float dummy81_init[] = {0.0f};
  model->setOperandValue(dummy81, dummy81_init, sizeof(float) * 1);
  static int32_t param122_init[] = {0};
  model->setOperandValue(param122, param122_init, sizeof(int32_t) * 1);
  static float dummy82_init[] = {0.0f};
  model->setOperandValue(dummy82, dummy82_init, sizeof(float) * 1);
  static int32_t param123_init[] = {0};
  model->setOperandValue(param123, param123_init, sizeof(int32_t) * 1);
  static float dummy83_init[] = {0.0f};
  model->setOperandValue(dummy83, dummy83_init, sizeof(float) * 1);
  static int32_t param124_init[] = {0};
  model->setOperandValue(param124, param124_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy81, param122}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy82, param123}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy83, param124}, {op32});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp, op22_tmp, op32_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type2);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 16);
  static float op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type10);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 16);
  static float op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type2);
  auto op12_tmp = model->addOperand(&type1);
  auto dummy84 = model->addOperand(&type8);
  auto param125 = model->addOperand(&type4);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 16);
  static float op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static float dummy84_init[] = {0.0f};
  model->setOperandValue(dummy84, dummy84_init, sizeof(float) * 1);
  static int32_t param125_init[] = {0};
  model->setOperandValue(param125, param125_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy84, param125}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type10);
  auto op12_tmp = model->addOperand(&type1);
  auto dummy85 = model->addOperand(&type8);
  auto param126 = model->addOperand(&type4);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 16);
  static float op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static float dummy85_init[] = {0.0f};
  model->setOperandValue(dummy85, dummy85_init, sizeof(float) * 1);
  static int32_t param126_init[] = {0};
  model->setOperandValue(param126, param126_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy85, param126}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type2);
  auto op12_tmp = model->addOperand(&type1);
  auto dummy86 = model->addOperand(&type8);
  auto param127 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type2);
  auto dummy87 = model->addOperand(&type8);
  auto param128 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type3);
  auto dummy88 = model->addOperand(&type8);
  auto param129 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static float dummy86_init[] = {0.0f};
  model->setOperandValue(dummy86, dummy86_init, sizeof(float) * 1);
  static int32_t param127_init[] = {0};
  model->setOperandValue(param127, param127_init, sizeof(int32_t) * 1);
  static float dummy87_init[] = {0.0f};
  model->setOperandValue(dummy87, dummy87_init, sizeof(float) * 1);
  static int32_t param128_init[] = {0};
  model->setOperandValue(param128, param128_init, sizeof(int32_t) * 1);
  static float dummy88_init[] = {0.0f};
  model->setOperandValue(dummy88, dummy88_init, sizeof(float) * 1);
  static int32_t param129_init[] = {0};
  model->setOperandValue(param129, param129_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy86, param127}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy87, param128}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy88, param129}, {op32});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp, op22_tmp, op32_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type10);
  auto op12_tmp = model->addOperand(&type1);
  auto dummy89 = model->addOperand(&type8);
  auto param130 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type2);
  auto dummy90 = model->addOperand(&type8);
  auto param131 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type3);
  auto dummy91 = model->addOperand(&type8);
  auto param132 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static float dummy89_init[] = {0.0f};
  model->setOperandValue(dummy89, dummy89_init, sizeof(float) * 1);
  static int32_t param130_init[] = {0};
  model->setOperandValue(param130, param130_init, sizeof(int32_t) * 1);
  static float dummy90_init[] = {0.0f};
  model->setOperandValue(dummy90, dummy90_init, sizeof(float) * 1);
  static int32_t param131_init[] = {0};
  model->setOperandValue(param131, param131_init, sizeof(int32_t) * 1);
  static float dummy91_init[] = {0.0f};
  model->setOperandValue(dummy91, dummy91_init, sizeof(float) * 1);
  static int32_t param132_init[] = {0};
  model->setOperandValue(param132, param132_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy89, param130}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy90, param131}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy91, param132}, {op32});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp, op22_tmp, op32_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type13(Type::TENSOR_FLOAT16, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type11);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type13);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type12);
  // Phase 2, operations
  static _Float16 op22_init[] = {0.25f, 0.0f, 0.20000000298023224f, 0.0f, 0.25f, 0.0f, 0.0f, 0.30000001192092896f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.10000000149011612f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(_Float16) * 16);
  static _Float16 op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(_Float16) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type13(Type::TENSOR_FLOAT16, {4});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type11);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type13);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type14);
  // Phase 2, operations
  static _Float16 op22_init[] = {0.25f, 0.0f, 0.20000000298023224f, 0.0f, 0.25f, 0.0f, 0.0f, 0.30000001192092896f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.10000000149011612f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(_Float16) * 16);
  static _Float16 op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(_Float16) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type13(Type::TENSOR_FLOAT16, {4});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type15);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type13);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type12);
  auto op12_tmp = model->addOperand(&type15);
  auto dummy92 = model->addOperand(&type16);
  auto param133 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op22_init[] = {0.25f, 0.0f, 0.20000000298023224f, 0.0f, 0.25f, 0.0f, 0.0f, 0.30000001192092896f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.10000000149011612f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(_Float16) * 16);
  static _Float16 op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(_Float16) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static _Float16 dummy92_init[] = {0.0f};
  model->setOperandValue(dummy92, dummy92_init, sizeof(_Float16) * 1);
  static int32_t param133_init[] = {0};
  model->setOperandValue(param133, param133_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy92, param133}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type13(Type::TENSOR_FLOAT16, {4});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type15);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type13);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type14);
  auto op12_tmp = model->addOperand(&type15);
  auto dummy93 = model->addOperand(&type16);
  auto param134 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op22_init[] = {0.25f, 0.0f, 0.20000000298023224f, 0.0f, 0.25f, 0.0f, 0.0f, 0.30000001192092896f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.10000000149011612f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(_Float16) * 16);
  static _Float16 op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(_Float16) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static _Float16 dummy93_init[] = {0.0f};
  model->setOperandValue(dummy93, dummy93_init, sizeof(_Float16) * 1);
  static int32_t param134_init[] = {0};
  model->setOperandValue(param134, param134_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy93, param134}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type18(Type::TENSOR_FLOAT16, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type11);
  auto op22 = model->addOperand(&type17);
  auto op32 = model->addOperand(&type18);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type18(Type::TENSOR_FLOAT16, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type11);
  auto op22 = model->addOperand(&type17);
  auto op32 = model->addOperand(&type18);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type18(Type::TENSOR_FLOAT16, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type15);
  auto op22 = model->addOperand(&type17);
  auto op32 = model->addOperand(&type18);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type12);
  auto op12_tmp = model->addOperand(&type15);
  auto dummy94 = model->addOperand(&type16);
  auto param135 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type17);
  auto dummy95 = model->addOperand(&type16);
  auto param136 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type18);
  auto dummy96 = model->addOperand(&type16);
  auto param137 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static _Float16 dummy94_init[] = {0.0f};
  model->setOperandValue(dummy94, dummy94_init, sizeof(_Float16) * 1);
  static int32_t param135_init[] = {0};
  model->setOperandValue(param135, param135_init, sizeof(int32_t) * 1);
  static _Float16 dummy95_init[] = {0.0f};
  model->setOperandValue(dummy95, dummy95_init, sizeof(_Float16) * 1);
  static int32_t param136_init[] = {0};
  model->setOperandValue(param136, param136_init, sizeof(int32_t) * 1);
  static _Float16 dummy96_init[] = {0.0f};
  model->setOperandValue(dummy96, dummy96_init, sizeof(_Float16) * 1);
  static int32_t param137_init[] = {0};
  model->setOperandValue(param137, param137_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy94, param135}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy95, param136}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy96, param137}, {op32});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp, op22_tmp, op32_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type18(Type::TENSOR_FLOAT16, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type15);
  auto op22 = model->addOperand(&type17);
  auto op32 = model->addOperand(&type18);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type14);
  auto op12_tmp = model->addOperand(&type15);
  auto dummy97 = model->addOperand(&type16);
  auto param138 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type17);
  auto dummy98 = model->addOperand(&type16);
  auto param139 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type18);
  auto dummy99 = model->addOperand(&type16);
  auto param140 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static _Float16 dummy97_init[] = {0.0f};
  model->setOperandValue(dummy97, dummy97_init, sizeof(_Float16) * 1);
  static int32_t param138_init[] = {0};
  model->setOperandValue(param138, param138_init, sizeof(int32_t) * 1);
  static _Float16 dummy98_init[] = {0.0f};
  model->setOperandValue(dummy98, dummy98_init, sizeof(_Float16) * 1);
  static int32_t param139_init[] = {0};
  model->setOperandValue(param139, param139_init, sizeof(int32_t) * 1);
  static _Float16 dummy99_init[] = {0.0f};
  model->setOperandValue(dummy99, dummy99_init, sizeof(_Float16) * 1);
  static int32_t param140_init[] = {0};
  model->setOperandValue(param140, param140_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy97, param138}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy98, param139}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy99, param140}, {op32});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp, op22_tmp, op32_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 0);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.1f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type19);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type21);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type22);
  // Phase 2, operations
  static uint8_t op22_init[] = {25, 0, 20, 0, 25, 0, 0, 30, 25, 0, 0, 0, 25, 10, 0, 0};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 16);
  static int32_t op32_init[] = {200, 400, 600, 800};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 0);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type19);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type21);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type23);
  // Phase 2, operations
  static uint8_t op22_init[] = {25, 0, 20, 0, 25, 0, 0, 30, 25, 0, 0, 0, 25, 10, 0, 0};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 16);
  static int32_t op32_init[] = {200, 400, 600, 800};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 0);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.1f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type19);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type21);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type22);
  auto op12_tmp = model->addOperand(&type19);
  auto dummy100 = model->addOperand(&type24);
  auto param141 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op22_init[] = {25, 0, 20, 0, 25, 0, 0, 30, 25, 0, 0, 0, 25, 10, 0, 0};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 16);
  static int32_t op32_init[] = {200, 400, 600, 800};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static uint8_t dummy100_init[] = {0};
  model->setOperandValue(dummy100, dummy100_init, sizeof(uint8_t) * 1);
  static int32_t param141_init[] = {0};
  model->setOperandValue(param141, param141_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy100, param141}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 0);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type19);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type21);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type23);
  auto op12_tmp = model->addOperand(&type19);
  auto dummy101 = model->addOperand(&type24);
  auto param142 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op22_init[] = {25, 0, 20, 0, 25, 0, 0, 30, 25, 0, 0, 0, 25, 10, 0, 0};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 16);
  static int32_t op32_init[] = {200, 400, 600, 800};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static uint8_t dummy101_init[] = {0};
  model->setOperandValue(dummy101, dummy101_init, sizeof(uint8_t) * 1);
  static int32_t param142_init[] = {0};
  model->setOperandValue(param142, param142_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy101, param142}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 0);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.1f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type19);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type21);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 0);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type19);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type21);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 0);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.1f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type19);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type21);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type22);
  auto op12_tmp = model->addOperand(&type19);
  auto dummy102 = model->addOperand(&type24);
  auto param143 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type20);
  auto dummy103 = model->addOperand(&type25);
  auto param144 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static uint8_t dummy102_init[] = {0};
  model->setOperandValue(dummy102, dummy102_init, sizeof(uint8_t) * 1);
  static int32_t param143_init[] = {0};
  model->setOperandValue(param143, param143_init, sizeof(int32_t) * 1);
  static uint8_t dummy103_init[] = {0};
  model->setOperandValue(dummy103, dummy103_init, sizeof(uint8_t) * 1);
  static int32_t param144_init[] = {0};
  model->setOperandValue(param144, param144_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy102, param143}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy103, param144}, {op22});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op32, op12_tmp, op22_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 0);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type19);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type21);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type23);
  auto op12_tmp = model->addOperand(&type19);
  auto dummy104 = model->addOperand(&type24);
  auto param145 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type20);
  auto dummy105 = model->addOperand(&type25);
  auto param146 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static uint8_t dummy104_init[] = {0};
  model->setOperandValue(dummy104, dummy104_init, sizeof(uint8_t) * 1);
  static int32_t param145_init[] = {0};
  model->setOperandValue(param145, param145_init, sizeof(int32_t) * 1);
  static uint8_t dummy105_init[] = {0};
  model->setOperandValue(dummy105, dummy105_init, sizeof(uint8_t) * 1);
  static int32_t param146_init[] = {0};
  model->setOperandValue(param146, param146_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy104, param145}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy105, param146}, {op22});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op32, op12_tmp, op22_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type26);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type27);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 16);
  static float op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type26);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type10);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 16);
  static float op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type26);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type27);
  auto op12_tmp = model->addOperand(&type26);
  auto dummy106 = model->addOperand(&type8);
  auto param147 = model->addOperand(&type4);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 16);
  static float op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static float dummy106_init[] = {0.0f};
  model->setOperandValue(dummy106, dummy106_init, sizeof(float) * 1);
  static int32_t param147_init[] = {0};
  model->setOperandValue(param147, param147_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy106, param147}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type26);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type10);
  auto op12_tmp = model->addOperand(&type26);
  auto dummy107 = model->addOperand(&type8);
  auto param148 = model->addOperand(&type4);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 16);
  static float op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static float dummy107_init[] = {0.0f};
  model->setOperandValue(dummy107, dummy107_init, sizeof(float) * 1);
  static int32_t param148_init[] = {0};
  model->setOperandValue(param148, param148_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy107, param148}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type26);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type26);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type26);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type27);
  auto op12_tmp = model->addOperand(&type26);
  auto dummy108 = model->addOperand(&type8);
  auto param149 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type2);
  auto dummy109 = model->addOperand(&type8);
  auto param150 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type3);
  auto dummy110 = model->addOperand(&type8);
  auto param151 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static float dummy108_init[] = {0.0f};
  model->setOperandValue(dummy108, dummy108_init, sizeof(float) * 1);
  static int32_t param149_init[] = {0};
  model->setOperandValue(param149, param149_init, sizeof(int32_t) * 1);
  static float dummy109_init[] = {0.0f};
  model->setOperandValue(dummy109, dummy109_init, sizeof(float) * 1);
  static int32_t param150_init[] = {0};
  model->setOperandValue(param150, param150_init, sizeof(int32_t) * 1);
  static float dummy110_init[] = {0.0f};
  model->setOperandValue(dummy110, dummy110_init, sizeof(float) * 1);
  static int32_t param151_init[] = {0};
  model->setOperandValue(param151, param151_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy108, param149}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy109, param150}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy110, param151}, {op32});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp, op22_tmp, op32_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type26);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type10);
  auto op12_tmp = model->addOperand(&type26);
  auto dummy111 = model->addOperand(&type8);
  auto param152 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type2);
  auto dummy112 = model->addOperand(&type8);
  auto param153 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type3);
  auto dummy113 = model->addOperand(&type8);
  auto param154 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static float dummy111_init[] = {0.0f};
  model->setOperandValue(dummy111, dummy111_init, sizeof(float) * 1);
  static int32_t param152_init[] = {0};
  model->setOperandValue(param152, param152_init, sizeof(int32_t) * 1);
  static float dummy112_init[] = {0.0f};
  model->setOperandValue(dummy112, dummy112_init, sizeof(float) * 1);
  static int32_t param153_init[] = {0};
  model->setOperandValue(param153, param153_init, sizeof(int32_t) * 1);
  static float dummy113_init[] = {0.0f};
  model->setOperandValue(dummy113, dummy113_init, sizeof(float) * 1);
  static int32_t param154_init[] = {0};
  model->setOperandValue(param154, param154_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy111, param152}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy112, param153}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy113, param154}, {op32});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp, op22_tmp, op32_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type26);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type27);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 16);
  static float op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type26);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type10);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 16);
  static float op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type26);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type27);
  auto op12_tmp = model->addOperand(&type26);
  auto dummy114 = model->addOperand(&type8);
  auto param155 = model->addOperand(&type4);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 16);
  static float op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static float dummy114_init[] = {0.0f};
  model->setOperandValue(dummy114, dummy114_init, sizeof(float) * 1);
  static int32_t param155_init[] = {0};
  model->setOperandValue(param155, param155_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy114, param155}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type26);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type10);
  auto op12_tmp = model->addOperand(&type26);
  auto dummy115 = model->addOperand(&type8);
  auto param156 = model->addOperand(&type4);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.0f, 0.2f, 0.0f, 0.25f, 0.0f, 0.0f, 0.3f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.1f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 16);
  static float op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static float dummy115_init[] = {0.0f};
  model->setOperandValue(dummy115, dummy115_init, sizeof(float) * 1);
  static int32_t param156_init[] = {0};
  model->setOperandValue(param156, param156_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy115, param156}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type26);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type26);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type26);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type27);
  auto op12_tmp = model->addOperand(&type26);
  auto dummy116 = model->addOperand(&type8);
  auto param157 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type2);
  auto dummy117 = model->addOperand(&type8);
  auto param158 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type3);
  auto dummy118 = model->addOperand(&type8);
  auto param159 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static float dummy116_init[] = {0.0f};
  model->setOperandValue(dummy116, dummy116_init, sizeof(float) * 1);
  static int32_t param157_init[] = {0};
  model->setOperandValue(param157, param157_init, sizeof(int32_t) * 1);
  static float dummy117_init[] = {0.0f};
  model->setOperandValue(dummy117, dummy117_init, sizeof(float) * 1);
  static int32_t param158_init[] = {0};
  model->setOperandValue(param158, param158_init, sizeof(int32_t) * 1);
  static float dummy118_init[] = {0.0f};
  model->setOperandValue(dummy118, dummy118_init, sizeof(float) * 1);
  static int32_t param159_init[] = {0};
  model->setOperandValue(param159, param159_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy116, param157}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy117, param158}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy118, param159}, {op32});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp, op22_tmp, op32_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type26);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type10);
  auto op12_tmp = model->addOperand(&type26);
  auto dummy119 = model->addOperand(&type8);
  auto param160 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type2);
  auto dummy120 = model->addOperand(&type8);
  auto param161 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type3);
  auto dummy121 = model->addOperand(&type8);
  auto param162 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static float dummy119_init[] = {0.0f};
  model->setOperandValue(dummy119, dummy119_init, sizeof(float) * 1);
  static int32_t param160_init[] = {0};
  model->setOperandValue(param160, param160_init, sizeof(int32_t) * 1);
  static float dummy120_init[] = {0.0f};
  model->setOperandValue(dummy120, dummy120_init, sizeof(float) * 1);
  static int32_t param161_init[] = {0};
  model->setOperandValue(param161, param161_init, sizeof(int32_t) * 1);
  static float dummy121_init[] = {0.0f};
  model->setOperandValue(dummy121, dummy121_init, sizeof(float) * 1);
  static int32_t param162_init[] = {0};
  model->setOperandValue(param162, param162_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy119, param160}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy120, param161}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy121, param162}, {op32});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp, op22_tmp, op32_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type13(Type::TENSOR_FLOAT16, {4});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 3, 3});
  OperandType type29(Type::TENSOR_FLOAT16, {1, 4, 2, 2});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type28);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type13);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type29);
  // Phase 2, operations
  static _Float16 op22_init[] = {0.25f, 0.0f, 0.20000000298023224f, 0.0f, 0.25f, 0.0f, 0.0f, 0.30000001192092896f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.10000000149011612f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(_Float16) * 16);
  static _Float16 op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(_Float16) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type13(Type::TENSOR_FLOAT16, {4});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type28);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type13);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type14);
  // Phase 2, operations
  static _Float16 op22_init[] = {0.25f, 0.0f, 0.20000000298023224f, 0.0f, 0.25f, 0.0f, 0.0f, 0.30000001192092896f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.10000000149011612f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(_Float16) * 16);
  static _Float16 op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(_Float16) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type13(Type::TENSOR_FLOAT16, {4});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type29(Type::TENSOR_FLOAT16, {1, 4, 2, 2});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 2, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type30);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type13);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type29);
  auto op12_tmp = model->addOperand(&type30);
  auto dummy122 = model->addOperand(&type16);
  auto param163 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op22_init[] = {0.25f, 0.0f, 0.20000000298023224f, 0.0f, 0.25f, 0.0f, 0.0f, 0.30000001192092896f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.10000000149011612f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(_Float16) * 16);
  static _Float16 op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(_Float16) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static _Float16 dummy122_init[] = {0.0f};
  model->setOperandValue(dummy122, dummy122_init, sizeof(_Float16) * 1);
  static int32_t param163_init[] = {0};
  model->setOperandValue(param163, param163_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy122, param163}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type13(Type::TENSOR_FLOAT16, {4});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 2, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type30);
  auto op22 = model->addOperand(&type12);
  auto op32 = model->addOperand(&type13);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type14);
  auto op12_tmp = model->addOperand(&type30);
  auto dummy123 = model->addOperand(&type16);
  auto param164 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op22_init[] = {0.25f, 0.0f, 0.20000000298023224f, 0.0f, 0.25f, 0.0f, 0.0f, 0.30000001192092896f, 0.25f, 0.0f, 0.0f, 0.0f, 0.25f, 0.10000000149011612f, 0.0f, 0.0f};
  model->setOperandValue(op22, op22_init, sizeof(_Float16) * 16);
  static _Float16 op32_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op32, op32_init, sizeof(_Float16) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static _Float16 dummy123_init[] = {0.0f};
  model->setOperandValue(dummy123, dummy123_init, sizeof(_Float16) * 1);
  static int32_t param164_init[] = {0};
  model->setOperandValue(param164, param164_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy123, param164}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type18(Type::TENSOR_FLOAT16, {4});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 3, 3});
  OperandType type29(Type::TENSOR_FLOAT16, {1, 4, 2, 2});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type28);
  auto op22 = model->addOperand(&type17);
  auto op32 = model->addOperand(&type18);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type29);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type18(Type::TENSOR_FLOAT16, {4});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type28);
  auto op22 = model->addOperand(&type17);
  auto op32 = model->addOperand(&type18);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type18(Type::TENSOR_FLOAT16, {4});
  OperandType type29(Type::TENSOR_FLOAT16, {1, 4, 2, 2});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 2, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type30);
  auto op22 = model->addOperand(&type17);
  auto op32 = model->addOperand(&type18);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type29);
  auto op12_tmp = model->addOperand(&type30);
  auto dummy124 = model->addOperand(&type16);
  auto param165 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type17);
  auto dummy125 = model->addOperand(&type16);
  auto param166 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type18);
  auto dummy126 = model->addOperand(&type16);
  auto param167 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static _Float16 dummy124_init[] = {0.0f};
  model->setOperandValue(dummy124, dummy124_init, sizeof(_Float16) * 1);
  static int32_t param165_init[] = {0};
  model->setOperandValue(param165, param165_init, sizeof(int32_t) * 1);
  static _Float16 dummy125_init[] = {0.0f};
  model->setOperandValue(dummy125, dummy125_init, sizeof(_Float16) * 1);
  static int32_t param166_init[] = {0};
  model->setOperandValue(param166, param166_init, sizeof(int32_t) * 1);
  static _Float16 dummy126_init[] = {0.0f};
  model->setOperandValue(dummy126, dummy126_init, sizeof(_Float16) * 1);
  static int32_t param167_init[] = {0};
  model->setOperandValue(param167, param167_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy124, param165}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy125, param166}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy126, param167}, {op32});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp, op22_tmp, op32_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type18(Type::TENSOR_FLOAT16, {4});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 2, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type30);
  auto op22 = model->addOperand(&type17);
  auto op32 = model->addOperand(&type18);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type14);
  auto op12_tmp = model->addOperand(&type30);
  auto dummy127 = model->addOperand(&type16);
  auto param168 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type17);
  auto dummy128 = model->addOperand(&type16);
  auto param169 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type18);
  auto dummy129 = model->addOperand(&type16);
  auto param170 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static _Float16 dummy127_init[] = {0.0f};
  model->setOperandValue(dummy127, dummy127_init, sizeof(_Float16) * 1);
  static int32_t param168_init[] = {0};
  model->setOperandValue(param168, param168_init, sizeof(int32_t) * 1);
  static _Float16 dummy128_init[] = {0.0f};
  model->setOperandValue(dummy128, dummy128_init, sizeof(_Float16) * 1);
  static int32_t param169_init[] = {0};
  model->setOperandValue(param169, param169_init, sizeof(int32_t) * 1);
  static _Float16 dummy129_init[] = {0.0f};
  model->setOperandValue(dummy129, dummy129_init, sizeof(_Float16) * 1);
  static int32_t param170_init[] = {0};
  model->setOperandValue(param170, param170_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy127, param168}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy128, param169}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy129, param170}, {op32});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp, op22_tmp, op32_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 0);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 2}, 0.1f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type31);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type21);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type32);
  // Phase 2, operations
  static uint8_t op22_init[] = {25, 0, 20, 0, 25, 0, 0, 30, 25, 0, 0, 0, 25, 10, 0, 0};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 16);
  static int32_t op32_init[] = {200, 400, 600, 800};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type31);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type21);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type23);
  // Phase 2, operations
  static uint8_t op22_init[] = {25, 0, 20, 0, 25, 0, 0, 30, 25, 0, 0, 0, 25, 10, 0, 0};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 16);
  static int32_t op32_init[] = {200, 400, 600, 800};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 0);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 2}, 0.1f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type31);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type21);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type32);
  auto op12_tmp = model->addOperand(&type31);
  auto dummy130 = model->addOperand(&type24);
  auto param171 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op22_init[] = {25, 0, 20, 0, 25, 0, 0, 30, 25, 0, 0, 0, 25, 10, 0, 0};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 16);
  static int32_t op32_init[] = {200, 400, 600, 800};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static uint8_t dummy130_init[] = {0};
  model->setOperandValue(dummy130, dummy130_init, sizeof(uint8_t) * 1);
  static int32_t param171_init[] = {0};
  model->setOperandValue(param171, param171_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy130, param171}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type31);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type21);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type23);
  auto op12_tmp = model->addOperand(&type31);
  auto dummy131 = model->addOperand(&type24);
  auto param172 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op22_init[] = {25, 0, 20, 0, 25, 0, 0, 30, 25, 0, 0, 0, 25, 10, 0, 0};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 16);
  static int32_t op32_init[] = {200, 400, 600, 800};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 4);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static uint8_t dummy131_init[] = {0};
  model->setOperandValue(dummy131, dummy131_init, sizeof(uint8_t) * 1);
  static int32_t param172_init[] = {0};
  model->setOperandValue(param172, param172_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy131, param172}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 0);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 2}, 0.1f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type31);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type21);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type31);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type21);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 0);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 2}, 0.1f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type31);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type21);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type32);
  auto op12_tmp = model->addOperand(&type31);
  auto dummy132 = model->addOperand(&type24);
  auto param173 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type20);
  auto dummy133 = model->addOperand(&type25);
  auto param174 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static uint8_t dummy132_init[] = {0};
  model->setOperandValue(dummy132, dummy132_init, sizeof(uint8_t) * 1);
  static int32_t param173_init[] = {0};
  model->setOperandValue(param173, param173_init, sizeof(int32_t) * 1);
  static uint8_t dummy133_init[] = {0};
  model->setOperandValue(dummy133, dummy133_init, sizeof(uint8_t) * 1);
  static int32_t param174_init[] = {0};
  model->setOperandValue(param174, param174_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy132, param173}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy133, param174}, {op22});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op32, op12_tmp, op22_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.01f, 0);
  OperandType type21(Type::TENSOR_INT32, {4}, 0.005f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type31);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type21);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type23);
  auto op12_tmp = model->addOperand(&type31);
  auto dummy134 = model->addOperand(&type24);
  auto param175 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type20);
  auto dummy135 = model->addOperand(&type25);
  auto param176 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static uint8_t dummy134_init[] = {0};
  model->setOperandValue(dummy134, dummy134_init, sizeof(uint8_t) * 1);
  static int32_t param175_init[] = {0};
  model->setOperandValue(param175, param175_init, sizeof(int32_t) * 1);
  static uint8_t dummy135_init[] = {0};
  model->setOperandValue(dummy135, dummy135_init, sizeof(uint8_t) * 1);
  static int32_t param176_init[] = {0};
  model->setOperandValue(param176, param176_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy134, param175}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy135, param176}, {op22});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param20, param21, param22, param23, param24, layout, param25, param26}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op32, op12_tmp, op22_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type2);
  auto op33 = model->addOperand(&type3);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type2);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 16);
  static float op33_init[] = {0.0f, 0.0f, 0.0f, 0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 4);
  static int32_t param27_init[] = {2};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op13, op23, op33, param27, param28, param29, param30, param31, layout, param32, param33}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type2);
  auto op33 = model->addOperand(&type3);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type10);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 16);
  static float op33_init[] = {0.0f, 0.0f, 0.0f, 0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 4);
  static int32_t param27_init[] = {2};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op13, op23, op33, param27, param28, param29, param30, param31, layout, param32, param33}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type2);
  auto op33 = model->addOperand(&type3);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type2);
  auto op13_tmp = model->addOperand(&type5);
  auto dummy136 = model->addOperand(&type8);
  auto param177 = model->addOperand(&type4);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 16);
  static float op33_init[] = {0.0f, 0.0f, 0.0f, 0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 4);
  static int32_t param27_init[] = {2};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float dummy136_init[] = {0.0f};
  model->setOperandValue(dummy136, dummy136_init, sizeof(float) * 1);
  static int32_t param177_init[] = {0};
  model->setOperandValue(param177, param177_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy136, param177}, {op13});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op13, op23, op33, param27, param28, param29, param30, param31, layout, param32, param33}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type2);
  auto op33 = model->addOperand(&type3);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type10);
  auto op13_tmp = model->addOperand(&type5);
  auto dummy137 = model->addOperand(&type8);
  auto param178 = model->addOperand(&type4);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 16);
  static float op33_init[] = {0.0f, 0.0f, 0.0f, 0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 4);
  static int32_t param27_init[] = {2};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float dummy137_init[] = {0.0f};
  model->setOperandValue(dummy137, dummy137_init, sizeof(float) * 1);
  static int32_t param178_init[] = {0};
  model->setOperandValue(param178, param178_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy137, param178}, {op13});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op13, op23, op33, param27, param28, param29, param30, param31, layout, param32, param33}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type2);
  auto op33 = model->addOperand(&type3);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param27_init[] = {2};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op13, op23, op33, param27, param28, param29, param30, param31, layout, param32, param33}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type2);
  auto op33 = model->addOperand(&type3);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param27_init[] = {2};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op13, op23, op33, param27, param28, param29, param30, param31, layout, param32, param33}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type2);
  auto op33 = model->addOperand(&type3);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type2);
  auto op13_tmp = model->addOperand(&type5);
  auto dummy138 = model->addOperand(&type8);
  auto param179 = model->addOperand(&type4);
  auto op23_tmp = model->addOperand(&type2);
  auto dummy139 = model->addOperand(&type8);
  auto param180 = model->addOperand(&type4);
  auto op33_tmp = model->addOperand(&type3);
  auto dummy140 = model->addOperand(&type8);
  auto param181 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param27_init[] = {2};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float dummy138_init[] = {0.0f};
  model->setOperandValue(dummy138, dummy138_init, sizeof(float) * 1);
  static int32_t param179_init[] = {0};
  model->setOperandValue(param179, param179_init, sizeof(int32_t) * 1);
  static float dummy139_init[] = {0.0f};
  model->setOperandValue(dummy139, dummy139_init, sizeof(float) * 1);
  static int32_t param180_init[] = {0};
  model->setOperandValue(param180, param180_init, sizeof(int32_t) * 1);
  static float dummy140_init[] = {0.0f};
  model->setOperandValue(dummy140, dummy140_init, sizeof(float) * 1);
  static int32_t param181_init[] = {0};
  model->setOperandValue(param181, param181_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy138, param179}, {op13});
  model->addOperation(ANEURALNETWORKS_ADD, {op23_tmp, dummy139, param180}, {op23});
  model->addOperation(ANEURALNETWORKS_ADD, {op33_tmp, dummy140, param181}, {op33});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op13, op23, op33, param27, param28, param29, param30, param31, layout, param32, param33}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp, op23_tmp, op33_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type2);
  auto op33 = model->addOperand(&type3);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type10);
  auto op13_tmp = model->addOperand(&type5);
  auto dummy141 = model->addOperand(&type8);
  auto param182 = model->addOperand(&type4);
  auto op23_tmp = model->addOperand(&type2);
  auto dummy142 = model->addOperand(&type8);
  auto param183 = model->addOperand(&type4);
  auto op33_tmp = model->addOperand(&type3);
  auto dummy143 = model->addOperand(&type8);
  auto param184 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param27_init[] = {2};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float dummy141_init[] = {0.0f};
  model->setOperandValue(dummy141, dummy141_init, sizeof(float) * 1);
  static int32_t param182_init[] = {0};
  model->setOperandValue(param182, param182_init, sizeof(int32_t) * 1);
  static float dummy142_init[] = {0.0f};
  model->setOperandValue(dummy142, dummy142_init, sizeof(float) * 1);
  static int32_t param183_init[] = {0};
  model->setOperandValue(param183, param183_init, sizeof(int32_t) * 1);
  static float dummy143_init[] = {0.0f};
  model->setOperandValue(dummy143, dummy143_init, sizeof(float) * 1);
  static int32_t param184_init[] = {0};
  model->setOperandValue(param184, param184_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy141, param182}, {op13});
  model->addOperation(ANEURALNETWORKS_ADD, {op23_tmp, dummy142, param183}, {op23});
  model->addOperation(ANEURALNETWORKS_ADD, {op33_tmp, dummy143, param184}, {op33});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op13, op23, op33, param27, param28, param29, param30, param31, layout, param32, param33}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp, op23_tmp, op33_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type33);
  auto op23 = model->addOperand(&type2);
  auto op33 = model->addOperand(&type3);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type27);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 16);
  static float op33_init[] = {0.0f, 0.0f, 0.0f, 0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 4);
  static int32_t param27_init[] = {2};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op13, op23, op33, param27, param28, param29, param30, param31, layout, param32, param33}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type33);
  auto op23 = model->addOperand(&type2);
  auto op33 = model->addOperand(&type3);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type10);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 16);
  static float op33_init[] = {0.0f, 0.0f, 0.0f, 0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 4);
  static int32_t param27_init[] = {2};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op13, op23, op33, param27, param28, param29, param30, param31, layout, param32, param33}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type33);
  auto op23 = model->addOperand(&type2);
  auto op33 = model->addOperand(&type3);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type27);
  auto op13_tmp = model->addOperand(&type33);
  auto dummy144 = model->addOperand(&type8);
  auto param185 = model->addOperand(&type4);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 16);
  static float op33_init[] = {0.0f, 0.0f, 0.0f, 0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 4);
  static int32_t param27_init[] = {2};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float dummy144_init[] = {0.0f};
  model->setOperandValue(dummy144, dummy144_init, sizeof(float) * 1);
  static int32_t param185_init[] = {0};
  model->setOperandValue(param185, param185_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy144, param185}, {op13});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op13, op23, op33, param27, param28, param29, param30, param31, layout, param32, param33}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type33);
  auto op23 = model->addOperand(&type2);
  auto op33 = model->addOperand(&type3);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type10);
  auto op13_tmp = model->addOperand(&type33);
  auto dummy145 = model->addOperand(&type8);
  auto param186 = model->addOperand(&type4);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f, 16.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 16);
  static float op33_init[] = {0.0f, 0.0f, 0.0f, 0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 4);
  static int32_t param27_init[] = {2};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float dummy145_init[] = {0.0f};
  model->setOperandValue(dummy145, dummy145_init, sizeof(float) * 1);
  static int32_t param186_init[] = {0};
  model->setOperandValue(param186, param186_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy145, param186}, {op13});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op13, op23, op33, param27, param28, param29, param30, param31, layout, param32, param33}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type33);
  auto op23 = model->addOperand(&type2);
  auto op33 = model->addOperand(&type3);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param27_init[] = {2};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op13, op23, op33, param27, param28, param29, param30, param31, layout, param32, param33}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type33);
  auto op23 = model->addOperand(&type2);
  auto op33 = model->addOperand(&type3);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param27_init[] = {2};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op13, op23, op33, param27, param28, param29, param30, param31, layout, param32, param33}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type33);
  auto op23 = model->addOperand(&type2);
  auto op33 = model->addOperand(&type3);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type27);
  auto op13_tmp = model->addOperand(&type33);
  auto dummy146 = model->addOperand(&type8);
  auto param187 = model->addOperand(&type4);
  auto op23_tmp = model->addOperand(&type2);
  auto dummy147 = model->addOperand(&type8);
  auto param188 = model->addOperand(&type4);
  auto op33_tmp = model->addOperand(&type3);
  auto dummy148 = model->addOperand(&type8);
  auto param189 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param27_init[] = {2};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float dummy146_init[] = {0.0f};
  model->setOperandValue(dummy146, dummy146_init, sizeof(float) * 1);
  static int32_t param187_init[] = {0};
  model->setOperandValue(param187, param187_init, sizeof(int32_t) * 1);
  static float dummy147_init[] = {0.0f};
  model->setOperandValue(dummy147, dummy147_init, sizeof(float) * 1);
  static int32_t param188_init[] = {0};
  model->setOperandValue(param188, param188_init, sizeof(int32_t) * 1);
  static float dummy148_init[] = {0.0f};
  model->setOperandValue(dummy148, dummy148_init, sizeof(float) * 1);
  static int32_t param189_init[] = {0};
  model->setOperandValue(param189, param189_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy146, param187}, {op13});
  model->addOperation(ANEURALNETWORKS_ADD, {op23_tmp, dummy147, param188}, {op23});
  model->addOperation(ANEURALNETWORKS_ADD, {op33_tmp, dummy148, param189}, {op33});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op13, op23, op33, param27, param28, param29, param30, param31, layout, param32, param33}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp, op23_tmp, op33_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type33);
  auto op23 = model->addOperand(&type2);
  auto op33 = model->addOperand(&type3);
  auto param27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type10);
  auto op13_tmp = model->addOperand(&type33);
  auto dummy149 = model->addOperand(&type8);
  auto param190 = model->addOperand(&type4);
  auto op23_tmp = model->addOperand(&type2);
  auto dummy150 = model->addOperand(&type8);
  auto param191 = model->addOperand(&type4);
  auto op33_tmp = model->addOperand(&type3);
  auto dummy151 = model->addOperand(&type8);
  auto param192 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param27_init[] = {2};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {2};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float dummy149_init[] = {0.0f};
  model->setOperandValue(dummy149, dummy149_init, sizeof(float) * 1);
  static int32_t param190_init[] = {0};
  model->setOperandValue(param190, param190_init, sizeof(int32_t) * 1);
  static float dummy150_init[] = {0.0f};
  model->setOperandValue(dummy150, dummy150_init, sizeof(float) * 1);
  static int32_t param191_init[] = {0};
  model->setOperandValue(param191, param191_init, sizeof(int32_t) * 1);
  static float dummy151_init[] = {0.0f};
  model->setOperandValue(dummy151, dummy151_init, sizeof(float) * 1);
  static int32_t param192_init[] = {0};
  model->setOperandValue(param192, param192_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy149, param190}, {op13});
  model->addOperation(ANEURALNETWORKS_ADD, {op23_tmp, dummy150, param191}, {op23});
  model->addOperation(ANEURALNETWORKS_ADD, {op33_tmp, dummy151, param192}, {op33});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op13, op23, op33, param27, param28, param29, param30, param31, layout, param32, param33}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp, op23_tmp, op33_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type9);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type10);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type9);
  auto op14_tmp = model->addOperand(&type6);
  auto dummy152 = model->addOperand(&type8);
  auto param193 = model->addOperand(&type4);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float dummy152_init[] = {0.0f};
  model->setOperandValue(dummy152, dummy152_init, sizeof(float) * 1);
  static int32_t param193_init[] = {0};
  model->setOperandValue(param193, param193_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy152, param193}, {op14});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type10);
  auto op14_tmp = model->addOperand(&type6);
  auto dummy153 = model->addOperand(&type8);
  auto param194 = model->addOperand(&type4);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float dummy153_init[] = {0.0f};
  model->setOperandValue(dummy153, dummy153_init, sizeof(float) * 1);
  static int32_t param194_init[] = {0};
  model->setOperandValue(param194, param194_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy153, param194}, {op14});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type9);
  auto op14_tmp = model->addOperand(&type6);
  auto dummy154 = model->addOperand(&type8);
  auto param195 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type7);
  auto dummy155 = model->addOperand(&type8);
  auto param196 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type8);
  auto dummy156 = model->addOperand(&type8);
  auto param197 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float dummy154_init[] = {0.0f};
  model->setOperandValue(dummy154, dummy154_init, sizeof(float) * 1);
  static int32_t param195_init[] = {0};
  model->setOperandValue(param195, param195_init, sizeof(int32_t) * 1);
  static float dummy155_init[] = {0.0f};
  model->setOperandValue(dummy155, dummy155_init, sizeof(float) * 1);
  static int32_t param196_init[] = {0};
  model->setOperandValue(param196, param196_init, sizeof(int32_t) * 1);
  static float dummy156_init[] = {0.0f};
  model->setOperandValue(dummy156, dummy156_init, sizeof(float) * 1);
  static int32_t param197_init[] = {0};
  model->setOperandValue(param197, param197_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy154, param195}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy155, param196}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy156, param197}, {op34});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp, op24_tmp, op34_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type10);
  auto op14_tmp = model->addOperand(&type6);
  auto dummy157 = model->addOperand(&type8);
  auto param198 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type7);
  auto dummy158 = model->addOperand(&type8);
  auto param199 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type8);
  auto dummy159 = model->addOperand(&type8);
  auto param200 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float dummy157_init[] = {0.0f};
  model->setOperandValue(dummy157, dummy157_init, sizeof(float) * 1);
  static int32_t param198_init[] = {0};
  model->setOperandValue(param198, param198_init, sizeof(int32_t) * 1);
  static float dummy158_init[] = {0.0f};
  model->setOperandValue(dummy158, dummy158_init, sizeof(float) * 1);
  static int32_t param199_init[] = {0};
  model->setOperandValue(param199, param199_init, sizeof(int32_t) * 1);
  static float dummy159_init[] = {0.0f};
  model->setOperandValue(dummy159, dummy159_init, sizeof(float) * 1);
  static int32_t param200_init[] = {0};
  model->setOperandValue(param200, param200_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy157, param198}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy158, param199}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy159, param200}, {op34});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp, op24_tmp, op34_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type9);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type10);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type9);
  auto op14_tmp = model->addOperand(&type6);
  auto dummy160 = model->addOperand(&type8);
  auto param201 = model->addOperand(&type4);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float dummy160_init[] = {0.0f};
  model->setOperandValue(dummy160, dummy160_init, sizeof(float) * 1);
  static int32_t param201_init[] = {0};
  model->setOperandValue(param201, param201_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy160, param201}, {op14});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type10);
  auto op14_tmp = model->addOperand(&type6);
  auto dummy161 = model->addOperand(&type8);
  auto param202 = model->addOperand(&type4);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float dummy161_init[] = {0.0f};
  model->setOperandValue(dummy161, dummy161_init, sizeof(float) * 1);
  static int32_t param202_init[] = {0};
  model->setOperandValue(param202, param202_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy161, param202}, {op14});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type9);
  auto op14_tmp = model->addOperand(&type6);
  auto dummy162 = model->addOperand(&type8);
  auto param203 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type7);
  auto dummy163 = model->addOperand(&type8);
  auto param204 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type8);
  auto dummy164 = model->addOperand(&type8);
  auto param205 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float dummy162_init[] = {0.0f};
  model->setOperandValue(dummy162, dummy162_init, sizeof(float) * 1);
  static int32_t param203_init[] = {0};
  model->setOperandValue(param203, param203_init, sizeof(int32_t) * 1);
  static float dummy163_init[] = {0.0f};
  model->setOperandValue(dummy163, dummy163_init, sizeof(float) * 1);
  static int32_t param204_init[] = {0};
  model->setOperandValue(param204, param204_init, sizeof(int32_t) * 1);
  static float dummy164_init[] = {0.0f};
  model->setOperandValue(dummy164, dummy164_init, sizeof(float) * 1);
  static int32_t param205_init[] = {0};
  model->setOperandValue(param205, param205_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy162, param203}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy163, param204}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy164, param205}, {op34});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp, op24_tmp, op34_tmp},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type10);
  auto op14_tmp = model->addOperand(&type6);
  auto dummy165 = model->addOperand(&type8);
  auto param206 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type7);
  auto dummy166 = model->addOperand(&type8);
  auto param207 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type8);
  auto dummy167 = model->addOperand(&type8);
  auto param208 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float dummy165_init[] = {0.0f};
  model->setOperandValue(dummy165, dummy165_init, sizeof(float) * 1);
  static int32_t param206_init[] = {0};
  model->setOperandValue(param206, param206_init, sizeof(int32_t) * 1);
  static float dummy166_init[] = {0.0f};
  model->setOperandValue(dummy166, dummy166_init, sizeof(float) * 1);
  static int32_t param207_init[] = {0};
  model->setOperandValue(param207, param207_init, sizeof(int32_t) * 1);
  static float dummy167_init[] = {0.0f};
  model->setOperandValue(dummy167, dummy167_init, sizeof(float) * 1);
  static int32_t param208_init[] = {0};
  model->setOperandValue(param208, param208_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy165, param206}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy166, param207}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy167, param208}, {op34});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp, op24_tmp, op34_tmp},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 0.5f, 0);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  OperandType type36(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type34);
  auto op24 = model->addOperand(&type35);
  auto op34 = model->addOperand(&type36);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type37);
  // Phase 2, operations
  static uint8_t op24_init[] = {8, 16, 24, 32};
  model->setOperandValue(op24, op24_init, sizeof(uint8_t) * 4);
  static int32_t op34_init[] = {0};
  model->setOperandValue(op34, op34_init, sizeof(int32_t) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 0.5f, 0);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  OperandType type36(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type34);
  auto op24 = model->addOperand(&type35);
  auto op34 = model->addOperand(&type36);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type38);
  // Phase 2, operations
  static uint8_t op24_init[] = {8, 16, 24, 32};
  model->setOperandValue(op24, op24_init, sizeof(uint8_t) * 4);
  static int32_t op34_init[] = {0};
  model->setOperandValue(op34, op34_init, sizeof(int32_t) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 0.5f, 0);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  OperandType type36(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type34);
  auto op24 = model->addOperand(&type35);
  auto op34 = model->addOperand(&type36);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type37);
  auto op14_tmp = model->addOperand(&type34);
  auto dummy168 = model->addOperand(&type24);
  auto param209 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op24_init[] = {8, 16, 24, 32};
  model->setOperandValue(op24, op24_init, sizeof(uint8_t) * 4);
  static int32_t op34_init[] = {0};
  model->setOperandValue(op34, op34_init, sizeof(int32_t) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static uint8_t dummy168_init[] = {0};
  model->setOperandValue(dummy168, dummy168_init, sizeof(uint8_t) * 1);
  static int32_t param209_init[] = {0};
  model->setOperandValue(param209, param209_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy168, param209}, {op14});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 0.5f, 0);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  OperandType type36(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type34);
  auto op24 = model->addOperand(&type35);
  auto op34 = model->addOperand(&type36);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type38);
  auto op14_tmp = model->addOperand(&type34);
  auto dummy169 = model->addOperand(&type24);
  auto param210 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op24_init[] = {8, 16, 24, 32};
  model->setOperandValue(op24, op24_init, sizeof(uint8_t) * 4);
  static int32_t op34_init[] = {0};
  model->setOperandValue(op34, op34_init, sizeof(int32_t) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static uint8_t dummy169_init[] = {0};
  model->setOperandValue(dummy169, dummy169_init, sizeof(uint8_t) * 1);
  static int32_t param210_init[] = {0};
  model->setOperandValue(param210, param210_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy169, param210}, {op14});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 0.5f, 0);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  OperandType type36(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type34);
  auto op24 = model->addOperand(&type35);
  auto op34 = model->addOperand(&type36);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 0.5f, 0);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  OperandType type36(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type34);
  auto op24 = model->addOperand(&type35);
  auto op34 = model->addOperand(&type36);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type38);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 0.5f, 0);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  OperandType type36(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type34);
  auto op24 = model->addOperand(&type35);
  auto op34 = model->addOperand(&type36);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type37);
  auto op14_tmp = model->addOperand(&type34);
  auto dummy170 = model->addOperand(&type24);
  auto param211 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type35);
  auto dummy171 = model->addOperand(&type39);
  auto param212 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static uint8_t dummy170_init[] = {0};
  model->setOperandValue(dummy170, dummy170_init, sizeof(uint8_t) * 1);
  static int32_t param211_init[] = {0};
  model->setOperandValue(param211, param211_init, sizeof(int32_t) * 1);
  static uint8_t dummy171_init[] = {0};
  model->setOperandValue(dummy171, dummy171_init, sizeof(uint8_t) * 1);
  static int32_t param212_init[] = {0};
  model->setOperandValue(param212, param212_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy170, param211}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy171, param212}, {op24});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op34, op14_tmp, op24_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 0.5f, 0);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  OperandType type36(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type34);
  auto op24 = model->addOperand(&type35);
  auto op34 = model->addOperand(&type36);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type38);
  auto op14_tmp = model->addOperand(&type34);
  auto dummy172 = model->addOperand(&type24);
  auto param213 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type35);
  auto dummy173 = model->addOperand(&type39);
  auto param214 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static uint8_t dummy172_init[] = {0};
  model->setOperandValue(dummy172, dummy172_init, sizeof(uint8_t) * 1);
  static int32_t param213_init[] = {0};
  model->setOperandValue(param213, param213_init, sizeof(int32_t) * 1);
  static uint8_t dummy173_init[] = {0};
  model->setOperandValue(dummy173, dummy173_init, sizeof(uint8_t) * 1);
  static int32_t param214_init[] = {0};
  model->setOperandValue(param214, param214_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy172, param213}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy173, param214}, {op24});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op34, op14_tmp, op24_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT16, {1, 6, 6, 1});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type42(Type::TENSOR_FLOAT16, {1});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type41);
  auto op34 = model->addOperand(&type42);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type43);
  // Phase 2, operations
  static _Float16 op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(_Float16) * 4);
  static _Float16 op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(_Float16) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT16, {1, 6, 6, 1});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type42(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type41);
  auto op34 = model->addOperand(&type42);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type14);
  // Phase 2, operations
  static _Float16 op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(_Float16) * 4);
  static _Float16 op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(_Float16) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type42(Type::TENSOR_FLOAT16, {1});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type44(Type::TENSOR_FLOAT16, {1, 6, 6, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type44);
  auto op24 = model->addOperand(&type41);
  auto op34 = model->addOperand(&type42);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type43);
  auto op14_tmp = model->addOperand(&type44);
  auto dummy174 = model->addOperand(&type16);
  auto param215 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(_Float16) * 4);
  static _Float16 op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(_Float16) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static _Float16 dummy174_init[] = {0.0f};
  model->setOperandValue(dummy174, dummy174_init, sizeof(_Float16) * 1);
  static int32_t param215_init[] = {0};
  model->setOperandValue(param215, param215_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy174, param215}, {op14});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type42(Type::TENSOR_FLOAT16, {1});
  OperandType type44(Type::TENSOR_FLOAT16, {1, 6, 6, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type44);
  auto op24 = model->addOperand(&type41);
  auto op34 = model->addOperand(&type42);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type14);
  auto op14_tmp = model->addOperand(&type44);
  auto dummy175 = model->addOperand(&type16);
  auto param216 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(_Float16) * 4);
  static _Float16 op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(_Float16) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static _Float16 dummy175_init[] = {0.0f};
  model->setOperandValue(dummy175, dummy175_init, sizeof(_Float16) * 1);
  static int32_t param216_init[] = {0};
  model->setOperandValue(param216, param216_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy175, param216}, {op14});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT16, {1, 6, 6, 1});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type45);
  auto op34 = model->addOperand(&type16);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type43);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT16, {1, 6, 6, 1});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type45);
  auto op34 = model->addOperand(&type16);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type44(Type::TENSOR_FLOAT16, {1, 6, 6, 1});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type44);
  auto op24 = model->addOperand(&type45);
  auto op34 = model->addOperand(&type16);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type43);
  auto op14_tmp = model->addOperand(&type44);
  auto dummy176 = model->addOperand(&type16);
  auto param217 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type45);
  auto dummy177 = model->addOperand(&type16);
  auto param218 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type16);
  auto dummy178 = model->addOperand(&type16);
  auto param219 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static _Float16 dummy176_init[] = {0.0f};
  model->setOperandValue(dummy176, dummy176_init, sizeof(_Float16) * 1);
  static int32_t param217_init[] = {0};
  model->setOperandValue(param217, param217_init, sizeof(int32_t) * 1);
  static _Float16 dummy177_init[] = {0.0f};
  model->setOperandValue(dummy177, dummy177_init, sizeof(_Float16) * 1);
  static int32_t param218_init[] = {0};
  model->setOperandValue(param218, param218_init, sizeof(int32_t) * 1);
  static _Float16 dummy178_init[] = {0.0f};
  model->setOperandValue(dummy178, dummy178_init, sizeof(_Float16) * 1);
  static int32_t param219_init[] = {0};
  model->setOperandValue(param219, param219_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy176, param217}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy177, param218}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy178, param219}, {op34});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp, op24_tmp, op34_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  OperandType type44(Type::TENSOR_FLOAT16, {1, 6, 6, 1});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type44);
  auto op24 = model->addOperand(&type45);
  auto op34 = model->addOperand(&type16);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type14);
  auto op14_tmp = model->addOperand(&type44);
  auto dummy179 = model->addOperand(&type16);
  auto param220 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type45);
  auto dummy180 = model->addOperand(&type16);
  auto param221 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type16);
  auto dummy181 = model->addOperand(&type16);
  auto param222 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static _Float16 dummy179_init[] = {0.0f};
  model->setOperandValue(dummy179, dummy179_init, sizeof(_Float16) * 1);
  static int32_t param220_init[] = {0};
  model->setOperandValue(param220, param220_init, sizeof(int32_t) * 1);
  static _Float16 dummy180_init[] = {0.0f};
  model->setOperandValue(dummy180, dummy180_init, sizeof(_Float16) * 1);
  static int32_t param221_init[] = {0};
  model->setOperandValue(param221, param221_init, sizeof(int32_t) * 1);
  static _Float16 dummy181_init[] = {0.0f};
  model->setOperandValue(dummy181, dummy181_init, sizeof(_Float16) * 1);
  static int32_t param222_init[] = {0};
  model->setOperandValue(param222, param222_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy179, param220}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy180, param221}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy181, param222}, {op34});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp, op24_tmp, op34_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type46(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type46);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type47);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  OperandType type46(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type46);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type10);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type46(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type46);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type47);
  auto op14_tmp = model->addOperand(&type46);
  auto dummy182 = model->addOperand(&type8);
  auto param223 = model->addOperand(&type4);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float dummy182_init[] = {0.0f};
  model->setOperandValue(dummy182, dummy182_init, sizeof(float) * 1);
  static int32_t param223_init[] = {0};
  model->setOperandValue(param223, param223_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy182, param223}, {op14});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  OperandType type46(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type46);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type10);
  auto op14_tmp = model->addOperand(&type46);
  auto dummy183 = model->addOperand(&type8);
  auto param224 = model->addOperand(&type4);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float dummy183_init[] = {0.0f};
  model->setOperandValue(dummy183, dummy183_init, sizeof(float) * 1);
  static int32_t param224_init[] = {0};
  model->setOperandValue(param224, param224_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy183, param224}, {op14});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type46(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type46);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type47);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  OperandType type46(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type46);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type46(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type46);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type47);
  auto op14_tmp = model->addOperand(&type46);
  auto dummy184 = model->addOperand(&type8);
  auto param225 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type7);
  auto dummy185 = model->addOperand(&type8);
  auto param226 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type8);
  auto dummy186 = model->addOperand(&type8);
  auto param227 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float dummy184_init[] = {0.0f};
  model->setOperandValue(dummy184, dummy184_init, sizeof(float) * 1);
  static int32_t param225_init[] = {0};
  model->setOperandValue(param225, param225_init, sizeof(int32_t) * 1);
  static float dummy185_init[] = {0.0f};
  model->setOperandValue(dummy185, dummy185_init, sizeof(float) * 1);
  static int32_t param226_init[] = {0};
  model->setOperandValue(param226, param226_init, sizeof(int32_t) * 1);
  static float dummy186_init[] = {0.0f};
  model->setOperandValue(dummy186, dummy186_init, sizeof(float) * 1);
  static int32_t param227_init[] = {0};
  model->setOperandValue(param227, param227_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy184, param225}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy185, param226}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy186, param227}, {op34});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp, op24_tmp, op34_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  OperandType type46(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type46);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type10);
  auto op14_tmp = model->addOperand(&type46);
  auto dummy187 = model->addOperand(&type8);
  auto param228 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type7);
  auto dummy188 = model->addOperand(&type8);
  auto param229 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type8);
  auto dummy189 = model->addOperand(&type8);
  auto param230 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float dummy187_init[] = {0.0f};
  model->setOperandValue(dummy187, dummy187_init, sizeof(float) * 1);
  static int32_t param228_init[] = {0};
  model->setOperandValue(param228, param228_init, sizeof(int32_t) * 1);
  static float dummy188_init[] = {0.0f};
  model->setOperandValue(dummy188, dummy188_init, sizeof(float) * 1);
  static int32_t param229_init[] = {0};
  model->setOperandValue(param229, param229_init, sizeof(int32_t) * 1);
  static float dummy189_init[] = {0.0f};
  model->setOperandValue(dummy189, dummy189_init, sizeof(float) * 1);
  static int32_t param230_init[] = {0};
  model->setOperandValue(param230, param230_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy187, param228}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy188, param229}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy189, param230}, {op34});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp, op24_tmp, op34_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type46(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type46);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type47);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  OperandType type46(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type46);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type10);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type46(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type46);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type47);
  auto op14_tmp = model->addOperand(&type46);
  auto dummy190 = model->addOperand(&type8);
  auto param231 = model->addOperand(&type4);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float dummy190_init[] = {0.0f};
  model->setOperandValue(dummy190, dummy190_init, sizeof(float) * 1);
  static int32_t param231_init[] = {0};
  model->setOperandValue(param231, param231_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy190, param231}, {op14});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  OperandType type46(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type46);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type10);
  auto op14_tmp = model->addOperand(&type46);
  auto dummy191 = model->addOperand(&type8);
  auto param232 = model->addOperand(&type4);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float dummy191_init[] = {0.0f};
  model->setOperandValue(dummy191, dummy191_init, sizeof(float) * 1);
  static int32_t param232_init[] = {0};
  model->setOperandValue(param232, param232_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy191, param232}, {op14});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type46(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type46);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type47);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  OperandType type46(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type46);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type46(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type46);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type47);
  auto op14_tmp = model->addOperand(&type46);
  auto dummy192 = model->addOperand(&type8);
  auto param233 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type7);
  auto dummy193 = model->addOperand(&type8);
  auto param234 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type8);
  auto dummy194 = model->addOperand(&type8);
  auto param235 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float dummy192_init[] = {0.0f};
  model->setOperandValue(dummy192, dummy192_init, sizeof(float) * 1);
  static int32_t param233_init[] = {0};
  model->setOperandValue(param233, param233_init, sizeof(int32_t) * 1);
  static float dummy193_init[] = {0.0f};
  model->setOperandValue(dummy193, dummy193_init, sizeof(float) * 1);
  static int32_t param234_init[] = {0};
  model->setOperandValue(param234, param234_init, sizeof(int32_t) * 1);
  static float dummy194_init[] = {0.0f};
  model->setOperandValue(dummy194, dummy194_init, sizeof(float) * 1);
  static int32_t param235_init[] = {0};
  model->setOperandValue(param235, param235_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy192, param233}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy193, param234}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy194, param235}, {op34});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp, op24_tmp, op34_tmp},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  OperandType type46(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type46);
  auto op24 = model->addOperand(&type7);
  auto op34 = model->addOperand(&type8);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type10);
  auto op14_tmp = model->addOperand(&type46);
  auto dummy195 = model->addOperand(&type8);
  auto param236 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type7);
  auto dummy196 = model->addOperand(&type8);
  auto param237 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type8);
  auto dummy197 = model->addOperand(&type8);
  auto param238 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float dummy195_init[] = {0.0f};
  model->setOperandValue(dummy195, dummy195_init, sizeof(float) * 1);
  static int32_t param236_init[] = {0};
  model->setOperandValue(param236, param236_init, sizeof(int32_t) * 1);
  static float dummy196_init[] = {0.0f};
  model->setOperandValue(dummy196, dummy196_init, sizeof(float) * 1);
  static int32_t param237_init[] = {0};
  model->setOperandValue(param237, param237_init, sizeof(int32_t) * 1);
  static float dummy197_init[] = {0.0f};
  model->setOperandValue(dummy197, dummy197_init, sizeof(float) * 1);
  static int32_t param238_init[] = {0};
  model->setOperandValue(param238, param238_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy195, param236}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy196, param237}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy197, param238}, {op34});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp, op24_tmp, op34_tmp},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  OperandType type36(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {1, 1, 6, 6}, 0.5f, 0);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.125f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type48);
  auto op24 = model->addOperand(&type35);
  auto op34 = model->addOperand(&type36);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type49);
  // Phase 2, operations
  static uint8_t op24_init[] = {8, 16, 24, 32};
  model->setOperandValue(op24, op24_init, sizeof(uint8_t) * 4);
  static int32_t op34_init[] = {0};
  model->setOperandValue(op34, op34_init, sizeof(int32_t) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  OperandType type36(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {1, 1, 6, 6}, 0.5f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type48);
  auto op24 = model->addOperand(&type35);
  auto op34 = model->addOperand(&type36);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type38);
  // Phase 2, operations
  static uint8_t op24_init[] = {8, 16, 24, 32};
  model->setOperandValue(op24, op24_init, sizeof(uint8_t) * 4);
  static int32_t op34_init[] = {0};
  model->setOperandValue(op34, op34_init, sizeof(int32_t) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  OperandType type36(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {1, 1, 6, 6}, 0.5f, 0);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.125f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type48);
  auto op24 = model->addOperand(&type35);
  auto op34 = model->addOperand(&type36);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type49);
  auto op14_tmp = model->addOperand(&type48);
  auto dummy198 = model->addOperand(&type24);
  auto param239 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op24_init[] = {8, 16, 24, 32};
  model->setOperandValue(op24, op24_init, sizeof(uint8_t) * 4);
  static int32_t op34_init[] = {0};
  model->setOperandValue(op34, op34_init, sizeof(int32_t) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static uint8_t dummy198_init[] = {0};
  model->setOperandValue(dummy198, dummy198_init, sizeof(uint8_t) * 1);
  static int32_t param239_init[] = {0};
  model->setOperandValue(param239, param239_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy198, param239}, {op14});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  OperandType type36(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {1, 1, 6, 6}, 0.5f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type48);
  auto op24 = model->addOperand(&type35);
  auto op34 = model->addOperand(&type36);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type38);
  auto op14_tmp = model->addOperand(&type48);
  auto dummy199 = model->addOperand(&type24);
  auto param240 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op24_init[] = {8, 16, 24, 32};
  model->setOperandValue(op24, op24_init, sizeof(uint8_t) * 4);
  static int32_t op34_init[] = {0};
  model->setOperandValue(op34, op34_init, sizeof(int32_t) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static uint8_t dummy199_init[] = {0};
  model->setOperandValue(dummy199, dummy199_init, sizeof(uint8_t) * 1);
  static int32_t param240_init[] = {0};
  model->setOperandValue(param240, param240_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy199, param240}, {op14});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  OperandType type36(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {1, 1, 6, 6}, 0.5f, 0);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.125f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type48);
  auto op24 = model->addOperand(&type35);
  auto op34 = model->addOperand(&type36);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type49);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  OperandType type36(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {1, 1, 6, 6}, 0.5f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type48);
  auto op24 = model->addOperand(&type35);
  auto op34 = model->addOperand(&type36);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type38);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  OperandType type36(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {1, 1, 6, 6}, 0.5f, 0);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.125f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type48);
  auto op24 = model->addOperand(&type35);
  auto op34 = model->addOperand(&type36);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type49);
  auto op14_tmp = model->addOperand(&type48);
  auto dummy200 = model->addOperand(&type24);
  auto param241 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type35);
  auto dummy201 = model->addOperand(&type39);
  auto param242 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static uint8_t dummy200_init[] = {0};
  model->setOperandValue(dummy200, dummy200_init, sizeof(uint8_t) * 1);
  static int32_t param241_init[] = {0};
  model->setOperandValue(param241, param241_init, sizeof(int32_t) * 1);
  static uint8_t dummy201_init[] = {0};
  model->setOperandValue(dummy201, dummy201_init, sizeof(uint8_t) * 1);
  static int32_t param242_init[] = {0};
  model->setOperandValue(param242, param242_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy200, param241}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy201, param242}, {op24});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op34, op14_tmp, op24_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  OperandType type36(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {1, 1, 6, 6}, 0.5f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type48);
  auto op24 = model->addOperand(&type35);
  auto op34 = model->addOperand(&type36);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type38);
  auto op14_tmp = model->addOperand(&type48);
  auto dummy202 = model->addOperand(&type24);
  auto param243 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type35);
  auto dummy203 = model->addOperand(&type39);
  auto param244 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static uint8_t dummy202_init[] = {0};
  model->setOperandValue(dummy202, dummy202_init, sizeof(uint8_t) * 1);
  static int32_t param243_init[] = {0};
  model->setOperandValue(param243, param243_init, sizeof(int32_t) * 1);
  static uint8_t dummy203_init[] = {0};
  model->setOperandValue(dummy203, dummy203_init, sizeof(uint8_t) * 1);
  static int32_t param244_init[] = {0};
  model->setOperandValue(param244, param244_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy202, param243}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy203, param244}, {op24});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op34, op14_tmp, op24_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::INT32, {});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type42(Type::TENSOR_FLOAT16, {1});
  OperandType type50(Type::TENSOR_FLOAT16, {1, 1, 6, 6});
  OperandType type51(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  // Phase 1, operands
  auto op14 = model->addOperand(&type50);
  auto op24 = model->addOperand(&type41);
  auto op34 = model->addOperand(&type42);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type51);
  // Phase 2, operations
  static _Float16 op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(_Float16) * 4);
  static _Float16 op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(_Float16) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type42(Type::TENSOR_FLOAT16, {1});
  OperandType type50(Type::TENSOR_FLOAT16, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type50);
  auto op24 = model->addOperand(&type41);
  auto op34 = model->addOperand(&type42);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type14);
  // Phase 2, operations
  static _Float16 op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(_Float16) * 4);
  static _Float16 op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(_Float16) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type42(Type::TENSOR_FLOAT16, {1});
  OperandType type51(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type52(Type::TENSOR_FLOAT16, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type52);
  auto op24 = model->addOperand(&type41);
  auto op34 = model->addOperand(&type42);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type51);
  auto op14_tmp = model->addOperand(&type52);
  auto dummy204 = model->addOperand(&type16);
  auto param245 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(_Float16) * 4);
  static _Float16 op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(_Float16) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static _Float16 dummy204_init[] = {0.0f};
  model->setOperandValue(dummy204, dummy204_init, sizeof(_Float16) * 1);
  static int32_t param245_init[] = {0};
  model->setOperandValue(param245, param245_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy204, param245}, {op14});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type42(Type::TENSOR_FLOAT16, {1});
  OperandType type52(Type::TENSOR_FLOAT16, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type52);
  auto op24 = model->addOperand(&type41);
  auto op34 = model->addOperand(&type42);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type14);
  auto op14_tmp = model->addOperand(&type52);
  auto dummy205 = model->addOperand(&type16);
  auto param246 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(_Float16) * 4);
  static _Float16 op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(_Float16) * 1);
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static _Float16 dummy205_init[] = {0.0f};
  model->setOperandValue(dummy205, dummy205_init, sizeof(_Float16) * 1);
  static int32_t param246_init[] = {0};
  model->setOperandValue(param246, param246_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy205, param246}, {op14});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type50(Type::TENSOR_FLOAT16, {1, 1, 6, 6});
  OperandType type51(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  // Phase 1, operands
  auto op14 = model->addOperand(&type50);
  auto op24 = model->addOperand(&type45);
  auto op34 = model->addOperand(&type16);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type51);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type50(Type::TENSOR_FLOAT16, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type50);
  auto op24 = model->addOperand(&type45);
  auto op34 = model->addOperand(&type16);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type51(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type52(Type::TENSOR_FLOAT16, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type52);
  auto op24 = model->addOperand(&type45);
  auto op34 = model->addOperand(&type16);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type51);
  auto op14_tmp = model->addOperand(&type52);
  auto dummy206 = model->addOperand(&type16);
  auto param247 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type45);
  auto dummy207 = model->addOperand(&type16);
  auto param248 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type16);
  auto dummy208 = model->addOperand(&type16);
  auto param249 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static _Float16 dummy206_init[] = {0.0f};
  model->setOperandValue(dummy206, dummy206_init, sizeof(_Float16) * 1);
  static int32_t param247_init[] = {0};
  model->setOperandValue(param247, param247_init, sizeof(int32_t) * 1);
  static _Float16 dummy207_init[] = {0.0f};
  model->setOperandValue(dummy207, dummy207_init, sizeof(_Float16) * 1);
  static int32_t param248_init[] = {0};
  model->setOperandValue(param248, param248_init, sizeof(int32_t) * 1);
  static _Float16 dummy208_init[] = {0.0f};
  model->setOperandValue(dummy208, dummy208_init, sizeof(_Float16) * 1);
  static int32_t param249_init[] = {0};
  model->setOperandValue(param249, param249_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy206, param247}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy207, param248}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy208, param249}, {op34});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp, op24_tmp, op34_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
namespace generated_tests::depthwise_conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type52(Type::TENSOR_FLOAT16, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type52);
  auto op24 = model->addOperand(&type45);
  auto op34 = model->addOperand(&type16);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type14);
  auto op14_tmp = model->addOperand(&type52);
  auto dummy209 = model->addOperand(&type16);
  auto param250 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type45);
  auto dummy210 = model->addOperand(&type16);
  auto param251 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type16);
  auto dummy211 = model->addOperand(&type16);
  auto param252 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param34_init[] = {1};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static int32_t param37_init[] = {1};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param39_init[] = {3};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {3};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static _Float16 dummy209_init[] = {0.0f};
  model->setOperandValue(dummy209, dummy209_init, sizeof(_Float16) * 1);
  static int32_t param250_init[] = {0};
  model->setOperandValue(param250, param250_init, sizeof(int32_t) * 1);
  static _Float16 dummy210_init[] = {0.0f};
  model->setOperandValue(dummy210, dummy210_init, sizeof(_Float16) * 1);
  static int32_t param251_init[] = {0};
  model->setOperandValue(param251, param251_init, sizeof(int32_t) * 1);
  static _Float16 dummy211_init[] = {0.0f};
  model->setOperandValue(dummy211, dummy211_init, sizeof(_Float16) * 1);
  static int32_t param252_init[] = {0};
  model->setOperandValue(param252, param252_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy209, param250}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy210, param251}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy211, param252}, {op34});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op14, op24, op34, param34, param35, param36, param37, param38, layout, param39, param40}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp, op24_tmp, op34_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_dilation
