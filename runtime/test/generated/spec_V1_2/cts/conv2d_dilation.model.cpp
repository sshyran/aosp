// Generated from conv2d_dilation.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
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
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type2);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 4);
  static float op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
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
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type7);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 4);
  static float op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
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
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 4);
  static float op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param36}, {op1});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
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
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type7);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type3);
  auto param37 = model->addOperand(&type4);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 4);
  static float op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param37}, {op1});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
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
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
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
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type7);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
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
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy2 = model->addOperand(&type3);
  auto param38 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type2);
  auto dummy3 = model->addOperand(&type3);
  auto param39 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type3);
  auto dummy4 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static float dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(float) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy2, param38}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy3, param39}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy4, param40}, {op3});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
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
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type7);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy5 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type2);
  auto dummy6 = model->addOperand(&type3);
  auto param42 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type3);
  auto dummy7 = model->addOperand(&type3);
  auto param43 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(float) * 1);
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static float dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(float) * 1);
  static int32_t param42_init[] = {0};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static float dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(float) * 1);
  static int32_t param43_init[] = {0};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy5, param41}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy6, param42}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy7, param43}, {op3});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
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
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type2);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 4);
  static float op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
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
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type7);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 4);
  static float op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
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
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy8 = model->addOperand(&type3);
  auto param44 = model->addOperand(&type4);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 4);
  static float op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param44_init[] = {0};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy8, param44}, {op1});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
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
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type7);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy9 = model->addOperand(&type3);
  auto param45 = model->addOperand(&type4);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 4);
  static float op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy9, param45}, {op1});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
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
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
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
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type7);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
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
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy10 = model->addOperand(&type3);
  auto param46 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type2);
  auto dummy11 = model->addOperand(&type3);
  auto param47 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type3);
  auto dummy12 = model->addOperand(&type3);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(float) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static float dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(float) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static float dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(float) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy10, param46}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy11, param47}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy12, param48}, {op3});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
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
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type7);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy13 = model->addOperand(&type3);
  auto param49 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type2);
  auto dummy14 = model->addOperand(&type3);
  auto param50 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type3);
  auto dummy15 = model->addOperand(&type3);
  auto param51 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(float) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static float dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(float) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static float dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(float) * 1);
  static int32_t param51_init[] = {0};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy13, param49}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy14, param50}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy15, param51}, {op3});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto op2 = model->addOperand(&type9);
  auto op3 = model->addOperand(&type10);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type9);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 2, 2, 2};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 4);
  static int32_t op3_init[] = {0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto op2 = model->addOperand(&type9);
  auto op3 = model->addOperand(&type10);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type11);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 2, 2, 2};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 4);
  static int32_t op3_init[] = {0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto op2 = model->addOperand(&type9);
  auto op3 = model->addOperand(&type10);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type9);
  auto op1_tmp = model->addOperand(&type8);
  auto dummy16 = model->addOperand(&type12);
  auto param52 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 2, 2, 2};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 4);
  static int32_t op3_init[] = {0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static uint8_t dummy16_init[] = {0};
  model->setOperandValue(dummy16, dummy16_init, sizeof(uint8_t) * 1);
  static int32_t param52_init[] = {0};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy16, param52}, {op1});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto op2 = model->addOperand(&type9);
  auto op3 = model->addOperand(&type10);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type8);
  auto dummy17 = model->addOperand(&type12);
  auto param53 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 2, 2, 2};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 4);
  static int32_t op3_init[] = {0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static uint8_t dummy17_init[] = {0};
  model->setOperandValue(dummy17, dummy17_init, sizeof(uint8_t) * 1);
  static int32_t param53_init[] = {0};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy17, param53}, {op1});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto op2 = model->addOperand(&type9);
  auto op3 = model->addOperand(&type10);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type9);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto op2 = model->addOperand(&type9);
  auto op3 = model->addOperand(&type10);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type11);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto op2 = model->addOperand(&type9);
  auto op3 = model->addOperand(&type10);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type9);
  auto op1_tmp = model->addOperand(&type8);
  auto dummy18 = model->addOperand(&type12);
  auto param54 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type9);
  auto dummy19 = model->addOperand(&type13);
  auto param55 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static uint8_t dummy18_init[] = {0};
  model->setOperandValue(dummy18, dummy18_init, sizeof(uint8_t) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static uint8_t dummy19_init[] = {0};
  model->setOperandValue(dummy19, dummy19_init, sizeof(uint8_t) * 1);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy18, param54}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy19, param55}, {op2});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto op2 = model->addOperand(&type9);
  auto op3 = model->addOperand(&type10);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type8);
  auto dummy20 = model->addOperand(&type12);
  auto param56 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type9);
  auto dummy21 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static uint8_t dummy20_init[] = {0};
  model->setOperandValue(dummy20, dummy20_init, sizeof(uint8_t) * 1);
  static int32_t param56_init[] = {0};
  model->setOperandValue(param56, param56_init, sizeof(int32_t) * 1);
  static uint8_t dummy21_init[] = {0};
  model->setOperandValue(dummy21, dummy21_init, sizeof(uint8_t) * 1);
  static int32_t param57_init[] = {0};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy20, param56}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy21, param57}, {op2});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto op2 = model->addOperand(&type15);
  auto op3 = model->addOperand(&type16);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type15);
  // Phase 2, operations
  static _Float16 op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 4);
  static _Float16 op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto op2 = model->addOperand(&type15);
  auto op3 = model->addOperand(&type16);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type17);
  // Phase 2, operations
  static _Float16 op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 4);
  static _Float16 op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto op2 = model->addOperand(&type15);
  auto op3 = model->addOperand(&type16);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type15);
  auto op1_tmp = model->addOperand(&type18);
  auto dummy22 = model->addOperand(&type19);
  auto param58 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 4);
  static _Float16 op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(_Float16) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy22, param58}, {op1});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto op2 = model->addOperand(&type15);
  auto op3 = model->addOperand(&type16);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type17);
  auto op1_tmp = model->addOperand(&type18);
  auto dummy23 = model->addOperand(&type19);
  auto param59 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 4);
  static _Float16 op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(_Float16) * 1);
  static int32_t param59_init[] = {0};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy23, param59}, {op1});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type15);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type17);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type15);
  auto op1_tmp = model->addOperand(&type18);
  auto dummy24 = model->addOperand(&type19);
  auto param60 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type20);
  auto dummy25 = model->addOperand(&type19);
  auto param61 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type19);
  auto dummy26 = model->addOperand(&type19);
  auto param62 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(_Float16) * 1);
  static int32_t param60_init[] = {0};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  static _Float16 dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(_Float16) * 1);
  static int32_t param61_init[] = {0};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  static _Float16 dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(_Float16) * 1);
  static int32_t param62_init[] = {0};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy24, param60}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy25, param61}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy26, param62}, {op3});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type17);
  auto op1_tmp = model->addOperand(&type18);
  auto dummy27 = model->addOperand(&type19);
  auto param63 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type20);
  auto dummy28 = model->addOperand(&type19);
  auto param64 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type19);
  auto dummy29 = model->addOperand(&type19);
  auto param65 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(_Float16) * 1);
  static int32_t param63_init[] = {0};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static _Float16 dummy28_init[] = {0.0f};
  model->setOperandValue(dummy28, dummy28_init, sizeof(_Float16) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  static _Float16 dummy29_init[] = {0.0f};
  model->setOperandValue(dummy29, dummy29_init, sizeof(_Float16) * 1);
  static int32_t param65_init[] = {0};
  model->setOperandValue(param65, param65_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy27, param63}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy28, param64}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy29, param65}, {op3});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type22);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 4);
  static float op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type7);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 4);
  static float op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type22);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy30 = model->addOperand(&type3);
  auto param66 = model->addOperand(&type4);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 4);
  static float op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float dummy30_init[] = {0.0f};
  model->setOperandValue(dummy30, dummy30_init, sizeof(float) * 1);
  static int32_t param66_init[] = {0};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy30, param66}, {op1});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type7);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy31 = model->addOperand(&type3);
  auto param67 = model->addOperand(&type4);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 4);
  static float op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float dummy31_init[] = {0.0f};
  model->setOperandValue(dummy31, dummy31_init, sizeof(float) * 1);
  static int32_t param67_init[] = {0};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy31, param67}, {op1});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type7);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type22);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy32 = model->addOperand(&type3);
  auto param68 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type2);
  auto dummy33 = model->addOperand(&type3);
  auto param69 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type3);
  auto dummy34 = model->addOperand(&type3);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float dummy32_init[] = {0.0f};
  model->setOperandValue(dummy32, dummy32_init, sizeof(float) * 1);
  static int32_t param68_init[] = {0};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static float dummy33_init[] = {0.0f};
  model->setOperandValue(dummy33, dummy33_init, sizeof(float) * 1);
  static int32_t param69_init[] = {0};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static float dummy34_init[] = {0.0f};
  model->setOperandValue(dummy34, dummy34_init, sizeof(float) * 1);
  static int32_t param70_init[] = {0};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy32, param68}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy33, param69}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy34, param70}, {op3});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type7);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy35 = model->addOperand(&type3);
  auto param71 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type2);
  auto dummy36 = model->addOperand(&type3);
  auto param72 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type3);
  auto dummy37 = model->addOperand(&type3);
  auto param73 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float dummy35_init[] = {0.0f};
  model->setOperandValue(dummy35, dummy35_init, sizeof(float) * 1);
  static int32_t param71_init[] = {0};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  static float dummy36_init[] = {0.0f};
  model->setOperandValue(dummy36, dummy36_init, sizeof(float) * 1);
  static int32_t param72_init[] = {0};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static float dummy37_init[] = {0.0f};
  model->setOperandValue(dummy37, dummy37_init, sizeof(float) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy35, param71}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy36, param72}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy37, param73}, {op3});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type22);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 4);
  static float op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type7);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 4);
  static float op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type22);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy38 = model->addOperand(&type3);
  auto param74 = model->addOperand(&type4);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 4);
  static float op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float dummy38_init[] = {0.0f};
  model->setOperandValue(dummy38, dummy38_init, sizeof(float) * 1);
  static int32_t param74_init[] = {0};
  model->setOperandValue(param74, param74_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy38, param74}, {op1});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type7);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy39 = model->addOperand(&type3);
  auto param75 = model->addOperand(&type4);
  // Phase 2, operations
  static float op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 4);
  static float op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float dummy39_init[] = {0.0f};
  model->setOperandValue(dummy39, dummy39_init, sizeof(float) * 1);
  static int32_t param75_init[] = {0};
  model->setOperandValue(param75, param75_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy39, param75}, {op1});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type7);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type22);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy40 = model->addOperand(&type3);
  auto param76 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type2);
  auto dummy41 = model->addOperand(&type3);
  auto param77 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type3);
  auto dummy42 = model->addOperand(&type3);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float dummy40_init[] = {0.0f};
  model->setOperandValue(dummy40, dummy40_init, sizeof(float) * 1);
  static int32_t param76_init[] = {0};
  model->setOperandValue(param76, param76_init, sizeof(int32_t) * 1);
  static float dummy41_init[] = {0.0f};
  model->setOperandValue(dummy41, dummy41_init, sizeof(float) * 1);
  static int32_t param77_init[] = {0};
  model->setOperandValue(param77, param77_init, sizeof(int32_t) * 1);
  static float dummy42_init[] = {0.0f};
  model->setOperandValue(dummy42, dummy42_init, sizeof(float) * 1);
  static int32_t param78_init[] = {0};
  model->setOperandValue(param78, param78_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy40, param76}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy41, param77}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy42, param78}, {op3});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type2);
  auto op3 = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type7);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy43 = model->addOperand(&type3);
  auto param79 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type2);
  auto dummy44 = model->addOperand(&type3);
  auto param80 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type3);
  auto dummy45 = model->addOperand(&type3);
  auto param81 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float dummy43_init[] = {0.0f};
  model->setOperandValue(dummy43, dummy43_init, sizeof(float) * 1);
  static int32_t param79_init[] = {0};
  model->setOperandValue(param79, param79_init, sizeof(int32_t) * 1);
  static float dummy44_init[] = {0.0f};
  model->setOperandValue(dummy44, dummy44_init, sizeof(float) * 1);
  static int32_t param80_init[] = {0};
  model->setOperandValue(param80, param80_init, sizeof(int32_t) * 1);
  static float dummy45_init[] = {0.0f};
  model->setOperandValue(dummy45, dummy45_init, sizeof(float) * 1);
  static int32_t param81_init[] = {0};
  model->setOperandValue(param81, param81_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy43, param79}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy44, param80}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy45, param81}, {op3});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.5f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto op2 = model->addOperand(&type9);
  auto op3 = model->addOperand(&type10);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type24);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 2, 2, 2};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 4);
  static int32_t op3_init[] = {0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto op2 = model->addOperand(&type9);
  auto op3 = model->addOperand(&type10);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type11);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 2, 2, 2};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 4);
  static int32_t op3_init[] = {0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.5f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto op2 = model->addOperand(&type9);
  auto op3 = model->addOperand(&type10);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type24);
  auto op1_tmp = model->addOperand(&type23);
  auto dummy46 = model->addOperand(&type12);
  auto param82 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 2, 2, 2};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 4);
  static int32_t op3_init[] = {0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static uint8_t dummy46_init[] = {0};
  model->setOperandValue(dummy46, dummy46_init, sizeof(uint8_t) * 1);
  static int32_t param82_init[] = {0};
  model->setOperandValue(param82, param82_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy46, param82}, {op1});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto op2 = model->addOperand(&type9);
  auto op3 = model->addOperand(&type10);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type23);
  auto dummy47 = model->addOperand(&type12);
  auto param83 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op2_init[] = {2, 2, 2, 2};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 4);
  static int32_t op3_init[] = {0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static uint8_t dummy47_init[] = {0};
  model->setOperandValue(dummy47, dummy47_init, sizeof(uint8_t) * 1);
  static int32_t param83_init[] = {0};
  model->setOperandValue(param83, param83_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy47, param83}, {op1});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.5f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto op2 = model->addOperand(&type9);
  auto op3 = model->addOperand(&type10);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type24);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto op2 = model->addOperand(&type9);
  auto op3 = model->addOperand(&type10);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type11);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.5f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto op2 = model->addOperand(&type9);
  auto op3 = model->addOperand(&type10);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type24);
  auto op1_tmp = model->addOperand(&type23);
  auto dummy48 = model->addOperand(&type12);
  auto param84 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type9);
  auto dummy49 = model->addOperand(&type13);
  auto param85 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static uint8_t dummy48_init[] = {0};
  model->setOperandValue(dummy48, dummy48_init, sizeof(uint8_t) * 1);
  static int32_t param84_init[] = {0};
  model->setOperandValue(param84, param84_init, sizeof(int32_t) * 1);
  static uint8_t dummy49_init[] = {0};
  model->setOperandValue(dummy49, dummy49_init, sizeof(uint8_t) * 1);
  static int32_t param85_init[] = {0};
  model->setOperandValue(param85, param85_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy48, param84}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy49, param85}, {op2});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto op2 = model->addOperand(&type9);
  auto op3 = model->addOperand(&type10);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type23);
  auto dummy50 = model->addOperand(&type12);
  auto param86 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type9);
  auto dummy51 = model->addOperand(&type13);
  auto param87 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static uint8_t dummy50_init[] = {0};
  model->setOperandValue(dummy50, dummy50_init, sizeof(uint8_t) * 1);
  static int32_t param86_init[] = {0};
  model->setOperandValue(param86, param86_init, sizeof(int32_t) * 1);
  static uint8_t dummy51_init[] = {0};
  model->setOperandValue(dummy51, dummy51_init, sizeof(uint8_t) * 1);
  static int32_t param87_init[] = {0};
  model->setOperandValue(param87, param87_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy50, param86}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy51, param87}, {op2});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type15);
  auto op3 = model->addOperand(&type16);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type26);
  // Phase 2, operations
  static _Float16 op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 4);
  static _Float16 op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type15);
  auto op3 = model->addOperand(&type16);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type17);
  // Phase 2, operations
  static _Float16 op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 4);
  static _Float16 op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type27(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto op2 = model->addOperand(&type15);
  auto op3 = model->addOperand(&type16);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type26);
  auto op1_tmp = model->addOperand(&type27);
  auto dummy52 = model->addOperand(&type19);
  auto param88 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 4);
  static _Float16 op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 dummy52_init[] = {0.0f};
  model->setOperandValue(dummy52, dummy52_init, sizeof(_Float16) * 1);
  static int32_t param88_init[] = {0};
  model->setOperandValue(param88, param88_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy52, param88}, {op1});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type27(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto op2 = model->addOperand(&type15);
  auto op3 = model->addOperand(&type16);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type17);
  auto op1_tmp = model->addOperand(&type27);
  auto dummy53 = model->addOperand(&type19);
  auto param89 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op2_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 4);
  static _Float16 op3_init[] = {0.0f};
  model->setOperandValue(op3, op3_init, sizeof(_Float16) * 1);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 dummy53_init[] = {0.0f};
  model->setOperandValue(dummy53, dummy53_init, sizeof(_Float16) * 1);
  static int32_t param89_init[] = {0};
  model->setOperandValue(param89, param89_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy53, param89}, {op1});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type26);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type17);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type27(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type26);
  auto op1_tmp = model->addOperand(&type27);
  auto dummy54 = model->addOperand(&type19);
  auto param90 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type20);
  auto dummy55 = model->addOperand(&type19);
  auto param91 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type19);
  auto dummy56 = model->addOperand(&type19);
  auto param92 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 dummy54_init[] = {0.0f};
  model->setOperandValue(dummy54, dummy54_init, sizeof(_Float16) * 1);
  static int32_t param90_init[] = {0};
  model->setOperandValue(param90, param90_init, sizeof(int32_t) * 1);
  static _Float16 dummy55_init[] = {0.0f};
  model->setOperandValue(dummy55, dummy55_init, sizeof(_Float16) * 1);
  static int32_t param91_init[] = {0};
  model->setOperandValue(param91, param91_init, sizeof(int32_t) * 1);
  static _Float16 dummy56_init[] = {0.0f};
  model->setOperandValue(dummy56, dummy56_init, sizeof(_Float16) * 1);
  static int32_t param92_init[] = {0};
  model->setOperandValue(param92, param92_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy54, param90}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy55, param91}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy56, param92}, {op3});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto op2 = model->addOperand(&type20);
  auto op3 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type17);
  auto op1_tmp = model->addOperand(&type27);
  auto dummy57 = model->addOperand(&type19);
  auto param93 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type20);
  auto dummy58 = model->addOperand(&type19);
  auto param94 = model->addOperand(&type4);
  auto op3_tmp = model->addOperand(&type19);
  auto dummy59 = model->addOperand(&type19);
  auto param95 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 dummy57_init[] = {0.0f};
  model->setOperandValue(dummy57, dummy57_init, sizeof(_Float16) * 1);
  static int32_t param93_init[] = {0};
  model->setOperandValue(param93, param93_init, sizeof(int32_t) * 1);
  static _Float16 dummy58_init[] = {0.0f};
  model->setOperandValue(dummy58, dummy58_init, sizeof(_Float16) * 1);
  static int32_t param94_init[] = {0};
  model->setOperandValue(param94, param94_init, sizeof(int32_t) * 1);
  static _Float16 dummy59_init[] = {0.0f};
  model->setOperandValue(dummy59, dummy59_init, sizeof(_Float16) * 1);
  static int32_t param95_init[] = {0};
  model->setOperandValue(param95, param95_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy57, param93}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy58, param94}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy59, param95}, {op3});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, layout, param7, param8}, {op4});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type1);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type7);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type1);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy60 = model->addOperand(&type3);
  auto param96 = model->addOperand(&type4);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float dummy60_init[] = {0.0f};
  model->setOperandValue(dummy60, dummy60_init, sizeof(float) * 1);
  static int32_t param96_init[] = {0};
  model->setOperandValue(param96, param96_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy60, param96}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type7);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy61 = model->addOperand(&type3);
  auto param97 = model->addOperand(&type4);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float dummy61_init[] = {0.0f};
  model->setOperandValue(dummy61, dummy61_init, sizeof(float) * 1);
  static int32_t param97_init[] = {0};
  model->setOperandValue(param97, param97_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy61, param97}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type1);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy62 = model->addOperand(&type3);
  auto param98 = model->addOperand(&type4);
  auto op21_tmp = model->addOperand(&type1);
  auto dummy63 = model->addOperand(&type3);
  auto param99 = model->addOperand(&type4);
  auto op31_tmp = model->addOperand(&type3);
  auto dummy64 = model->addOperand(&type3);
  auto param100 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float dummy62_init[] = {0.0f};
  model->setOperandValue(dummy62, dummy62_init, sizeof(float) * 1);
  static int32_t param98_init[] = {0};
  model->setOperandValue(param98, param98_init, sizeof(int32_t) * 1);
  static float dummy63_init[] = {0.0f};
  model->setOperandValue(dummy63, dummy63_init, sizeof(float) * 1);
  static int32_t param99_init[] = {0};
  model->setOperandValue(param99, param99_init, sizeof(int32_t) * 1);
  static float dummy64_init[] = {0.0f};
  model->setOperandValue(dummy64, dummy64_init, sizeof(float) * 1);
  static int32_t param100_init[] = {0};
  model->setOperandValue(param100, param100_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy62, param98}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy63, param99}, {op21});
  model->addOperation(ANEURALNETWORKS_ADD, {op31_tmp, dummy64, param100}, {op31});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type7);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy65 = model->addOperand(&type3);
  auto param101 = model->addOperand(&type4);
  auto op21_tmp = model->addOperand(&type1);
  auto dummy66 = model->addOperand(&type3);
  auto param102 = model->addOperand(&type4);
  auto op31_tmp = model->addOperand(&type3);
  auto dummy67 = model->addOperand(&type3);
  auto param103 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float dummy65_init[] = {0.0f};
  model->setOperandValue(dummy65, dummy65_init, sizeof(float) * 1);
  static int32_t param101_init[] = {0};
  model->setOperandValue(param101, param101_init, sizeof(int32_t) * 1);
  static float dummy66_init[] = {0.0f};
  model->setOperandValue(dummy66, dummy66_init, sizeof(float) * 1);
  static int32_t param102_init[] = {0};
  model->setOperandValue(param102, param102_init, sizeof(int32_t) * 1);
  static float dummy67_init[] = {0.0f};
  model->setOperandValue(dummy67, dummy67_init, sizeof(float) * 1);
  static int32_t param103_init[] = {0};
  model->setOperandValue(param103, param103_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy65, param101}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy66, param102}, {op21});
  model->addOperation(ANEURALNETWORKS_ADD, {op31_tmp, dummy67, param103}, {op31});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type1);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type7);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type1);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy68 = model->addOperand(&type3);
  auto param104 = model->addOperand(&type4);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float dummy68_init[] = {0.0f};
  model->setOperandValue(dummy68, dummy68_init, sizeof(float) * 1);
  static int32_t param104_init[] = {0};
  model->setOperandValue(param104, param104_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy68, param104}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type7);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy69 = model->addOperand(&type3);
  auto param105 = model->addOperand(&type4);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float dummy69_init[] = {0.0f};
  model->setOperandValue(dummy69, dummy69_init, sizeof(float) * 1);
  static int32_t param105_init[] = {0};
  model->setOperandValue(param105, param105_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy69, param105}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type1);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy70 = model->addOperand(&type3);
  auto param106 = model->addOperand(&type4);
  auto op21_tmp = model->addOperand(&type1);
  auto dummy71 = model->addOperand(&type3);
  auto param107 = model->addOperand(&type4);
  auto op31_tmp = model->addOperand(&type3);
  auto dummy72 = model->addOperand(&type3);
  auto param108 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float dummy70_init[] = {0.0f};
  model->setOperandValue(dummy70, dummy70_init, sizeof(float) * 1);
  static int32_t param106_init[] = {0};
  model->setOperandValue(param106, param106_init, sizeof(int32_t) * 1);
  static float dummy71_init[] = {0.0f};
  model->setOperandValue(dummy71, dummy71_init, sizeof(float) * 1);
  static int32_t param107_init[] = {0};
  model->setOperandValue(param107, param107_init, sizeof(int32_t) * 1);
  static float dummy72_init[] = {0.0f};
  model->setOperandValue(dummy72, dummy72_init, sizeof(float) * 1);
  static int32_t param108_init[] = {0};
  model->setOperandValue(param108, param108_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy70, param106}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy71, param107}, {op21});
  model->addOperation(ANEURALNETWORKS_ADD, {op31_tmp, dummy72, param108}, {op31});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp, op21_tmp, op31_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type7);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy73 = model->addOperand(&type3);
  auto param109 = model->addOperand(&type4);
  auto op21_tmp = model->addOperand(&type1);
  auto dummy74 = model->addOperand(&type3);
  auto param110 = model->addOperand(&type4);
  auto op31_tmp = model->addOperand(&type3);
  auto dummy75 = model->addOperand(&type3);
  auto param111 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float dummy73_init[] = {0.0f};
  model->setOperandValue(dummy73, dummy73_init, sizeof(float) * 1);
  static int32_t param109_init[] = {0};
  model->setOperandValue(param109, param109_init, sizeof(int32_t) * 1);
  static float dummy74_init[] = {0.0f};
  model->setOperandValue(dummy74, dummy74_init, sizeof(float) * 1);
  static int32_t param110_init[] = {0};
  model->setOperandValue(param110, param110_init, sizeof(int32_t) * 1);
  static float dummy75_init[] = {0.0f};
  model->setOperandValue(dummy75, dummy75_init, sizeof(float) * 1);
  static int32_t param111_init[] = {0};
  model->setOperandValue(param111, param111_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy73, param109}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy74, param110}, {op21});
  model->addOperation(ANEURALNETWORKS_ADD, {op31_tmp, dummy75, param111}, {op31});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp, op21_tmp, op31_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 9, 9, 1}, 0.5f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto op21 = model->addOperand(&type29);
  auto op31 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type29);
  // Phase 2, operations
  static uint8_t op21_init[] = {8, 16, 24, 32, 40, 48, 56, 64, 72};
  model->setOperandValue(op21, op21_init, sizeof(uint8_t) * 9);
  static int32_t op31_init[] = {0};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 9, 9, 1}, 0.5f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto op21 = model->addOperand(&type29);
  auto op31 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type11);
  // Phase 2, operations
  static uint8_t op21_init[] = {8, 16, 24, 32, 40, 48, 56, 64, 72};
  model->setOperandValue(op21, op21_init, sizeof(uint8_t) * 9);
  static int32_t op31_init[] = {0};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 9, 9, 1}, 0.5f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto op21 = model->addOperand(&type29);
  auto op31 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type29);
  auto op11_tmp = model->addOperand(&type28);
  auto dummy76 = model->addOperand(&type12);
  auto param112 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op21_init[] = {8, 16, 24, 32, 40, 48, 56, 64, 72};
  model->setOperandValue(op21, op21_init, sizeof(uint8_t) * 9);
  static int32_t op31_init[] = {0};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static uint8_t dummy76_init[] = {0};
  model->setOperandValue(dummy76, dummy76_init, sizeof(uint8_t) * 1);
  static int32_t param112_init[] = {0};
  model->setOperandValue(param112, param112_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy76, param112}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 9, 9, 1}, 0.5f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto op21 = model->addOperand(&type29);
  auto op31 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type11);
  auto op11_tmp = model->addOperand(&type28);
  auto dummy77 = model->addOperand(&type12);
  auto param113 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op21_init[] = {8, 16, 24, 32, 40, 48, 56, 64, 72};
  model->setOperandValue(op21, op21_init, sizeof(uint8_t) * 9);
  static int32_t op31_init[] = {0};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static uint8_t dummy77_init[] = {0};
  model->setOperandValue(dummy77, dummy77_init, sizeof(uint8_t) * 1);
  static int32_t param113_init[] = {0};
  model->setOperandValue(param113, param113_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy77, param113}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 9, 9, 1}, 0.5f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto op21 = model->addOperand(&type29);
  auto op31 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type29);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 9, 9, 1}, 0.5f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto op21 = model->addOperand(&type29);
  auto op31 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 9, 9, 1}, 0.5f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto op21 = model->addOperand(&type29);
  auto op31 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type29);
  auto op11_tmp = model->addOperand(&type28);
  auto dummy78 = model->addOperand(&type12);
  auto param114 = model->addOperand(&type4);
  auto op21_tmp = model->addOperand(&type29);
  auto dummy79 = model->addOperand(&type13);
  auto param115 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static uint8_t dummy78_init[] = {0};
  model->setOperandValue(dummy78, dummy78_init, sizeof(uint8_t) * 1);
  static int32_t param114_init[] = {0};
  model->setOperandValue(param114, param114_init, sizeof(int32_t) * 1);
  static uint8_t dummy79_init[] = {0};
  model->setOperandValue(dummy79, dummy79_init, sizeof(uint8_t) * 1);
  static int32_t param115_init[] = {0};
  model->setOperandValue(param115, param115_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy78, param114}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy79, param115}, {op21});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op31, op11_tmp, op21_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 9, 9, 1}, 0.5f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto op21 = model->addOperand(&type29);
  auto op31 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type11);
  auto op11_tmp = model->addOperand(&type28);
  auto dummy80 = model->addOperand(&type12);
  auto param116 = model->addOperand(&type4);
  auto op21_tmp = model->addOperand(&type29);
  auto dummy81 = model->addOperand(&type13);
  auto param117 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static uint8_t dummy80_init[] = {0};
  model->setOperandValue(dummy80, dummy80_init, sizeof(uint8_t) * 1);
  static int32_t param116_init[] = {0};
  model->setOperandValue(param116, param116_init, sizeof(int32_t) * 1);
  static uint8_t dummy81_init[] = {0};
  model->setOperandValue(dummy81, dummy81_init, sizeof(uint8_t) * 1);
  static int32_t param117_init[] = {0};
  model->setOperandValue(param117, param117_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy80, param116}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy81, param117}, {op21});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op31, op11_tmp, op21_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 9, 9, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type30);
  auto op21 = model->addOperand(&type14);
  auto op31 = model->addOperand(&type16);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type14);
  // Phase 2, operations
  static _Float16 op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(_Float16) * 9);
  static _Float16 op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(_Float16) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 9, 9, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type30);
  auto op21 = model->addOperand(&type14);
  auto op31 = model->addOperand(&type16);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type17);
  // Phase 2, operations
  static _Float16 op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(_Float16) * 9);
  static _Float16 op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(_Float16) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 9, 9, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type31);
  auto op21 = model->addOperand(&type14);
  auto op31 = model->addOperand(&type16);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type14);
  auto op11_tmp = model->addOperand(&type31);
  auto dummy82 = model->addOperand(&type19);
  auto param118 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(_Float16) * 9);
  static _Float16 op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(_Float16) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static _Float16 dummy82_init[] = {0.0f};
  model->setOperandValue(dummy82, dummy82_init, sizeof(_Float16) * 1);
  static int32_t param118_init[] = {0};
  model->setOperandValue(param118, param118_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy82, param118}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 9, 9, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type31);
  auto op21 = model->addOperand(&type14);
  auto op31 = model->addOperand(&type16);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type17);
  auto op11_tmp = model->addOperand(&type31);
  auto dummy83 = model->addOperand(&type19);
  auto param119 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(_Float16) * 9);
  static _Float16 op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(_Float16) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static _Float16 dummy83_init[] = {0.0f};
  model->setOperandValue(dummy83, dummy83_init, sizeof(_Float16) * 1);
  static int32_t param119_init[] = {0};
  model->setOperandValue(param119, param119_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy83, param119}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 9, 9, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type30);
  auto op21 = model->addOperand(&type18);
  auto op31 = model->addOperand(&type19);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 9, 9, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type30);
  auto op21 = model->addOperand(&type18);
  auto op31 = model->addOperand(&type19);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 9, 9, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type31);
  auto op21 = model->addOperand(&type18);
  auto op31 = model->addOperand(&type19);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type14);
  auto op11_tmp = model->addOperand(&type31);
  auto dummy84 = model->addOperand(&type19);
  auto param120 = model->addOperand(&type4);
  auto op21_tmp = model->addOperand(&type18);
  auto dummy85 = model->addOperand(&type19);
  auto param121 = model->addOperand(&type4);
  auto op31_tmp = model->addOperand(&type19);
  auto dummy86 = model->addOperand(&type19);
  auto param122 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static _Float16 dummy84_init[] = {0.0f};
  model->setOperandValue(dummy84, dummy84_init, sizeof(_Float16) * 1);
  static int32_t param120_init[] = {0};
  model->setOperandValue(param120, param120_init, sizeof(int32_t) * 1);
  static _Float16 dummy85_init[] = {0.0f};
  model->setOperandValue(dummy85, dummy85_init, sizeof(_Float16) * 1);
  static int32_t param121_init[] = {0};
  model->setOperandValue(param121, param121_init, sizeof(int32_t) * 1);
  static _Float16 dummy86_init[] = {0.0f};
  model->setOperandValue(dummy86, dummy86_init, sizeof(_Float16) * 1);
  static int32_t param122_init[] = {0};
  model->setOperandValue(param122, param122_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy84, param120}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy85, param121}, {op21});
  model->addOperation(ANEURALNETWORKS_ADD, {op31_tmp, dummy86, param122}, {op31});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp, op21_tmp, op31_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 9, 9, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type31);
  auto op21 = model->addOperand(&type18);
  auto op31 = model->addOperand(&type19);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type17);
  auto op11_tmp = model->addOperand(&type31);
  auto dummy87 = model->addOperand(&type19);
  auto param123 = model->addOperand(&type4);
  auto op21_tmp = model->addOperand(&type18);
  auto dummy88 = model->addOperand(&type19);
  auto param124 = model->addOperand(&type4);
  auto op31_tmp = model->addOperand(&type19);
  auto dummy89 = model->addOperand(&type19);
  auto param125 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static _Float16 dummy87_init[] = {0.0f};
  model->setOperandValue(dummy87, dummy87_init, sizeof(_Float16) * 1);
  static int32_t param123_init[] = {0};
  model->setOperandValue(param123, param123_init, sizeof(int32_t) * 1);
  static _Float16 dummy88_init[] = {0.0f};
  model->setOperandValue(dummy88, dummy88_init, sizeof(_Float16) * 1);
  static int32_t param124_init[] = {0};
  model->setOperandValue(param124, param124_init, sizeof(int32_t) * 1);
  static _Float16 dummy89_init[] = {0.0f};
  model->setOperandValue(dummy89, dummy89_init, sizeof(_Float16) * 1);
  static int32_t param125_init[] = {0};
  model->setOperandValue(param125, param125_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy87, param123}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy88, param124}, {op21});
  model->addOperation(ANEURALNETWORKS_ADD, {op31_tmp, dummy89, param125}, {op31});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp, op21_tmp, op31_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type32);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type21);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type32);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type7);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type32);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type21);
  auto op11_tmp = model->addOperand(&type32);
  auto dummy90 = model->addOperand(&type3);
  auto param126 = model->addOperand(&type4);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float dummy90_init[] = {0.0f};
  model->setOperandValue(dummy90, dummy90_init, sizeof(float) * 1);
  static int32_t param126_init[] = {0};
  model->setOperandValue(param126, param126_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy90, param126}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type32);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type7);
  auto op11_tmp = model->addOperand(&type32);
  auto dummy91 = model->addOperand(&type3);
  auto param127 = model->addOperand(&type4);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float dummy91_init[] = {0.0f};
  model->setOperandValue(dummy91, dummy91_init, sizeof(float) * 1);
  static int32_t param127_init[] = {0};
  model->setOperandValue(param127, param127_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy91, param127}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type32);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type32);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type32);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type21);
  auto op11_tmp = model->addOperand(&type32);
  auto dummy92 = model->addOperand(&type3);
  auto param128 = model->addOperand(&type4);
  auto op21_tmp = model->addOperand(&type1);
  auto dummy93 = model->addOperand(&type3);
  auto param129 = model->addOperand(&type4);
  auto op31_tmp = model->addOperand(&type3);
  auto dummy94 = model->addOperand(&type3);
  auto param130 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float dummy92_init[] = {0.0f};
  model->setOperandValue(dummy92, dummy92_init, sizeof(float) * 1);
  static int32_t param128_init[] = {0};
  model->setOperandValue(param128, param128_init, sizeof(int32_t) * 1);
  static float dummy93_init[] = {0.0f};
  model->setOperandValue(dummy93, dummy93_init, sizeof(float) * 1);
  static int32_t param129_init[] = {0};
  model->setOperandValue(param129, param129_init, sizeof(int32_t) * 1);
  static float dummy94_init[] = {0.0f};
  model->setOperandValue(dummy94, dummy94_init, sizeof(float) * 1);
  static int32_t param130_init[] = {0};
  model->setOperandValue(param130, param130_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy92, param128}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy93, param129}, {op21});
  model->addOperation(ANEURALNETWORKS_ADD, {op31_tmp, dummy94, param130}, {op31});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type32);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type7);
  auto op11_tmp = model->addOperand(&type32);
  auto dummy95 = model->addOperand(&type3);
  auto param131 = model->addOperand(&type4);
  auto op21_tmp = model->addOperand(&type1);
  auto dummy96 = model->addOperand(&type3);
  auto param132 = model->addOperand(&type4);
  auto op31_tmp = model->addOperand(&type3);
  auto dummy97 = model->addOperand(&type3);
  auto param133 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float dummy95_init[] = {0.0f};
  model->setOperandValue(dummy95, dummy95_init, sizeof(float) * 1);
  static int32_t param131_init[] = {0};
  model->setOperandValue(param131, param131_init, sizeof(int32_t) * 1);
  static float dummy96_init[] = {0.0f};
  model->setOperandValue(dummy96, dummy96_init, sizeof(float) * 1);
  static int32_t param132_init[] = {0};
  model->setOperandValue(param132, param132_init, sizeof(int32_t) * 1);
  static float dummy97_init[] = {0.0f};
  model->setOperandValue(dummy97, dummy97_init, sizeof(float) * 1);
  static int32_t param133_init[] = {0};
  model->setOperandValue(param133, param133_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy95, param131}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy96, param132}, {op21});
  model->addOperation(ANEURALNETWORKS_ADD, {op31_tmp, dummy97, param133}, {op31});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type32);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type21);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type32);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type7);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type32);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type21);
  auto op11_tmp = model->addOperand(&type32);
  auto dummy98 = model->addOperand(&type3);
  auto param134 = model->addOperand(&type4);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float dummy98_init[] = {0.0f};
  model->setOperandValue(dummy98, dummy98_init, sizeof(float) * 1);
  static int32_t param134_init[] = {0};
  model->setOperandValue(param134, param134_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy98, param134}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type32);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type7);
  auto op11_tmp = model->addOperand(&type32);
  auto dummy99 = model->addOperand(&type3);
  auto param135 = model->addOperand(&type4);
  // Phase 2, operations
  static float op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(float) * 9);
  static float op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float dummy99_init[] = {0.0f};
  model->setOperandValue(dummy99, dummy99_init, sizeof(float) * 1);
  static int32_t param135_init[] = {0};
  model->setOperandValue(param135, param135_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy99, param135}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type32);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type32);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type32);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type21);
  auto op11_tmp = model->addOperand(&type32);
  auto dummy100 = model->addOperand(&type3);
  auto param136 = model->addOperand(&type4);
  auto op21_tmp = model->addOperand(&type1);
  auto dummy101 = model->addOperand(&type3);
  auto param137 = model->addOperand(&type4);
  auto op31_tmp = model->addOperand(&type3);
  auto dummy102 = model->addOperand(&type3);
  auto param138 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float dummy100_init[] = {0.0f};
  model->setOperandValue(dummy100, dummy100_init, sizeof(float) * 1);
  static int32_t param136_init[] = {0};
  model->setOperandValue(param136, param136_init, sizeof(int32_t) * 1);
  static float dummy101_init[] = {0.0f};
  model->setOperandValue(dummy101, dummy101_init, sizeof(float) * 1);
  static int32_t param137_init[] = {0};
  model->setOperandValue(param137, param137_init, sizeof(int32_t) * 1);
  static float dummy102_init[] = {0.0f};
  model->setOperandValue(dummy102, dummy102_init, sizeof(float) * 1);
  static int32_t param138_init[] = {0};
  model->setOperandValue(param138, param138_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy100, param136}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy101, param137}, {op21});
  model->addOperation(ANEURALNETWORKS_ADD, {op31_tmp, dummy102, param138}, {op31});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp, op21_tmp, op31_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type32);
  auto op21 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type7);
  auto op11_tmp = model->addOperand(&type32);
  auto dummy103 = model->addOperand(&type3);
  auto param139 = model->addOperand(&type4);
  auto op21_tmp = model->addOperand(&type1);
  auto dummy104 = model->addOperand(&type3);
  auto param140 = model->addOperand(&type4);
  auto op31_tmp = model->addOperand(&type3);
  auto dummy105 = model->addOperand(&type3);
  auto param141 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float dummy103_init[] = {0.0f};
  model->setOperandValue(dummy103, dummy103_init, sizeof(float) * 1);
  static int32_t param139_init[] = {0};
  model->setOperandValue(param139, param139_init, sizeof(int32_t) * 1);
  static float dummy104_init[] = {0.0f};
  model->setOperandValue(dummy104, dummy104_init, sizeof(float) * 1);
  static int32_t param140_init[] = {0};
  model->setOperandValue(param140, param140_init, sizeof(int32_t) * 1);
  static float dummy105_init[] = {0.0f};
  model->setOperandValue(dummy105, dummy105_init, sizeof(float) * 1);
  static int32_t param141_init[] = {0};
  model->setOperandValue(param141, param141_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy103, param139}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy104, param140}, {op21});
  model->addOperation(ANEURALNETWORKS_ADD, {op31_tmp, dummy105, param141}, {op31});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp, op21_tmp, op31_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 9, 9}, 0.5f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto op21 = model->addOperand(&type29);
  auto op31 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type34);
  // Phase 2, operations
  static uint8_t op21_init[] = {8, 16, 24, 32, 40, 48, 56, 64, 72};
  model->setOperandValue(op21, op21_init, sizeof(uint8_t) * 9);
  static int32_t op31_init[] = {0};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 9, 9}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto op21 = model->addOperand(&type29);
  auto op31 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type11);
  // Phase 2, operations
  static uint8_t op21_init[] = {8, 16, 24, 32, 40, 48, 56, 64, 72};
  model->setOperandValue(op21, op21_init, sizeof(uint8_t) * 9);
  static int32_t op31_init[] = {0};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 9, 9}, 0.5f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto op21 = model->addOperand(&type29);
  auto op31 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type34);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy106 = model->addOperand(&type12);
  auto param142 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op21_init[] = {8, 16, 24, 32, 40, 48, 56, 64, 72};
  model->setOperandValue(op21, op21_init, sizeof(uint8_t) * 9);
  static int32_t op31_init[] = {0};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static uint8_t dummy106_init[] = {0};
  model->setOperandValue(dummy106, dummy106_init, sizeof(uint8_t) * 1);
  static int32_t param142_init[] = {0};
  model->setOperandValue(param142, param142_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy106, param142}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 9, 9}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto op21 = model->addOperand(&type29);
  auto op31 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type11);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy107 = model->addOperand(&type12);
  auto param143 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op21_init[] = {8, 16, 24, 32, 40, 48, 56, 64, 72};
  model->setOperandValue(op21, op21_init, sizeof(uint8_t) * 9);
  static int32_t op31_init[] = {0};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static uint8_t dummy107_init[] = {0};
  model->setOperandValue(dummy107, dummy107_init, sizeof(uint8_t) * 1);
  static int32_t param143_init[] = {0};
  model->setOperandValue(param143, param143_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy107, param143}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 9, 9}, 0.5f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto op21 = model->addOperand(&type29);
  auto op31 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 9, 9}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto op21 = model->addOperand(&type29);
  auto op31 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 9, 9}, 0.5f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto op21 = model->addOperand(&type29);
  auto op31 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type34);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy108 = model->addOperand(&type12);
  auto param144 = model->addOperand(&type4);
  auto op21_tmp = model->addOperand(&type29);
  auto dummy109 = model->addOperand(&type13);
  auto param145 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static uint8_t dummy108_init[] = {0};
  model->setOperandValue(dummy108, dummy108_init, sizeof(uint8_t) * 1);
  static int32_t param144_init[] = {0};
  model->setOperandValue(param144, param144_init, sizeof(int32_t) * 1);
  static uint8_t dummy109_init[] = {0};
  model->setOperandValue(dummy109, dummy109_init, sizeof(uint8_t) * 1);
  static int32_t param145_init[] = {0};
  model->setOperandValue(param145, param145_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy108, param144}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy109, param145}, {op21});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op31, op11_tmp, op21_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 9, 9}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto op21 = model->addOperand(&type29);
  auto op31 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type11);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy110 = model->addOperand(&type12);
  auto param146 = model->addOperand(&type4);
  auto op21_tmp = model->addOperand(&type29);
  auto dummy111 = model->addOperand(&type13);
  auto param147 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static uint8_t dummy110_init[] = {0};
  model->setOperandValue(dummy110, dummy110_init, sizeof(uint8_t) * 1);
  static int32_t param146_init[] = {0};
  model->setOperandValue(param146, param146_init, sizeof(int32_t) * 1);
  static uint8_t dummy111_init[] = {0};
  model->setOperandValue(dummy111, dummy111_init, sizeof(uint8_t) * 1);
  static int32_t param147_init[] = {0};
  model->setOperandValue(param147, param147_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy110, param146}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy111, param147}, {op21});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op31, op11_tmp, op21_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type35);
  auto op21 = model->addOperand(&type14);
  auto op31 = model->addOperand(&type16);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type25);
  // Phase 2, operations
  static _Float16 op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(_Float16) * 9);
  static _Float16 op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(_Float16) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type35);
  auto op21 = model->addOperand(&type14);
  auto op31 = model->addOperand(&type16);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type17);
  // Phase 2, operations
  static _Float16 op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(_Float16) * 9);
  static _Float16 op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(_Float16) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type36);
  auto op21 = model->addOperand(&type14);
  auto op31 = model->addOperand(&type16);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type25);
  auto op11_tmp = model->addOperand(&type36);
  auto dummy112 = model->addOperand(&type19);
  auto param148 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(_Float16) * 9);
  static _Float16 op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(_Float16) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static _Float16 dummy112_init[] = {0.0f};
  model->setOperandValue(dummy112, dummy112_init, sizeof(_Float16) * 1);
  static int32_t param148_init[] = {0};
  model->setOperandValue(param148, param148_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy112, param148}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type36);
  auto op21 = model->addOperand(&type14);
  auto op31 = model->addOperand(&type16);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type17);
  auto op11_tmp = model->addOperand(&type36);
  auto dummy113 = model->addOperand(&type19);
  auto param149 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op21_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op21, op21_init, sizeof(_Float16) * 9);
  static _Float16 op31_init[] = {0.0f};
  model->setOperandValue(op31, op31_init, sizeof(_Float16) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static _Float16 dummy113_init[] = {0.0f};
  model->setOperandValue(dummy113, dummy113_init, sizeof(_Float16) * 1);
  static int32_t param149_init[] = {0};
  model->setOperandValue(param149, param149_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy113, param149}, {op11});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type35);
  auto op21 = model->addOperand(&type18);
  auto op31 = model->addOperand(&type19);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type35);
  auto op21 = model->addOperand(&type18);
  auto op31 = model->addOperand(&type19);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type36);
  auto op21 = model->addOperand(&type18);
  auto op31 = model->addOperand(&type19);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type25);
  auto op11_tmp = model->addOperand(&type36);
  auto dummy114 = model->addOperand(&type19);
  auto param150 = model->addOperand(&type4);
  auto op21_tmp = model->addOperand(&type18);
  auto dummy115 = model->addOperand(&type19);
  auto param151 = model->addOperand(&type4);
  auto op31_tmp = model->addOperand(&type19);
  auto dummy116 = model->addOperand(&type19);
  auto param152 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static _Float16 dummy114_init[] = {0.0f};
  model->setOperandValue(dummy114, dummy114_init, sizeof(_Float16) * 1);
  static int32_t param150_init[] = {0};
  model->setOperandValue(param150, param150_init, sizeof(int32_t) * 1);
  static _Float16 dummy115_init[] = {0.0f};
  model->setOperandValue(dummy115, dummy115_init, sizeof(_Float16) * 1);
  static int32_t param151_init[] = {0};
  model->setOperandValue(param151, param151_init, sizeof(int32_t) * 1);
  static _Float16 dummy116_init[] = {0.0f};
  model->setOperandValue(dummy116, dummy116_init, sizeof(_Float16) * 1);
  static int32_t param152_init[] = {0};
  model->setOperandValue(param152, param152_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy114, param150}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy115, param151}, {op21});
  model->addOperation(ANEURALNETWORKS_ADD, {op31_tmp, dummy116, param152}, {op31});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp, op21_tmp, op31_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type36);
  auto op21 = model->addOperand(&type18);
  auto op31 = model->addOperand(&type19);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type17);
  auto op11_tmp = model->addOperand(&type36);
  auto dummy117 = model->addOperand(&type19);
  auto param153 = model->addOperand(&type4);
  auto op21_tmp = model->addOperand(&type18);
  auto dummy118 = model->addOperand(&type19);
  auto param154 = model->addOperand(&type4);
  auto op31_tmp = model->addOperand(&type19);
  auto dummy119 = model->addOperand(&type19);
  auto param155 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {3};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static _Float16 dummy117_init[] = {0.0f};
  model->setOperandValue(dummy117, dummy117_init, sizeof(_Float16) * 1);
  static int32_t param153_init[] = {0};
  model->setOperandValue(param153, param153_init, sizeof(int32_t) * 1);
  static _Float16 dummy118_init[] = {0.0f};
  model->setOperandValue(dummy118, dummy118_init, sizeof(_Float16) * 1);
  static int32_t param154_init[] = {0};
  model->setOperandValue(param154, param154_init, sizeof(int32_t) * 1);
  static _Float16 dummy119_init[] = {0.0f};
  model->setOperandValue(dummy119, dummy119_init, sizeof(_Float16) * 1);
  static int32_t param155_init[] = {0};
  model->setOperandValue(param155, param155_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy117, param153}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy118, param154}, {op21});
  model->addOperation(ANEURALNETWORKS_ADD, {op31_tmp, dummy119, param155}, {op31});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op11, op21, op31, param9, param10, param11, param12, param13, param14, param15, layout, param16, param17}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp, op21_tmp, op31_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type2);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 4);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type7);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 4);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type2);
  auto op12_tmp = model->addOperand(&type1);
  auto dummy120 = model->addOperand(&type3);
  auto param156 = model->addOperand(&type4);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 4);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float dummy120_init[] = {0.0f};
  model->setOperandValue(dummy120, dummy120_init, sizeof(float) * 1);
  static int32_t param156_init[] = {0};
  model->setOperandValue(param156, param156_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy120, param156}, {op12});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type7);
  auto op12_tmp = model->addOperand(&type1);
  auto dummy121 = model->addOperand(&type3);
  auto param157 = model->addOperand(&type4);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 4);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float dummy121_init[] = {0.0f};
  model->setOperandValue(dummy121, dummy121_init, sizeof(float) * 1);
  static int32_t param157_init[] = {0};
  model->setOperandValue(param157, param157_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy121, param157}, {op12});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type2);
  auto op12_tmp = model->addOperand(&type1);
  auto dummy122 = model->addOperand(&type3);
  auto param158 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type2);
  auto dummy123 = model->addOperand(&type3);
  auto param159 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type3);
  auto dummy124 = model->addOperand(&type3);
  auto param160 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float dummy122_init[] = {0.0f};
  model->setOperandValue(dummy122, dummy122_init, sizeof(float) * 1);
  static int32_t param158_init[] = {0};
  model->setOperandValue(param158, param158_init, sizeof(int32_t) * 1);
  static float dummy123_init[] = {0.0f};
  model->setOperandValue(dummy123, dummy123_init, sizeof(float) * 1);
  static int32_t param159_init[] = {0};
  model->setOperandValue(param159, param159_init, sizeof(int32_t) * 1);
  static float dummy124_init[] = {0.0f};
  model->setOperandValue(dummy124, dummy124_init, sizeof(float) * 1);
  static int32_t param160_init[] = {0};
  model->setOperandValue(param160, param160_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy122, param158}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy123, param159}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy124, param160}, {op32});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type7);
  auto op12_tmp = model->addOperand(&type1);
  auto dummy125 = model->addOperand(&type3);
  auto param161 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type2);
  auto dummy126 = model->addOperand(&type3);
  auto param162 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type3);
  auto dummy127 = model->addOperand(&type3);
  auto param163 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float dummy125_init[] = {0.0f};
  model->setOperandValue(dummy125, dummy125_init, sizeof(float) * 1);
  static int32_t param161_init[] = {0};
  model->setOperandValue(param161, param161_init, sizeof(int32_t) * 1);
  static float dummy126_init[] = {0.0f};
  model->setOperandValue(dummy126, dummy126_init, sizeof(float) * 1);
  static int32_t param162_init[] = {0};
  model->setOperandValue(param162, param162_init, sizeof(int32_t) * 1);
  static float dummy127_init[] = {0.0f};
  model->setOperandValue(dummy127, dummy127_init, sizeof(float) * 1);
  static int32_t param163_init[] = {0};
  model->setOperandValue(param163, param163_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy125, param161}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy126, param162}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy127, param163}, {op32});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type2);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 4);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type7);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 4);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type2);
  auto op12_tmp = model->addOperand(&type1);
  auto dummy128 = model->addOperand(&type3);
  auto param164 = model->addOperand(&type4);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 4);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float dummy128_init[] = {0.0f};
  model->setOperandValue(dummy128, dummy128_init, sizeof(float) * 1);
  static int32_t param164_init[] = {0};
  model->setOperandValue(param164, param164_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy128, param164}, {op12});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type7);
  auto op12_tmp = model->addOperand(&type1);
  auto dummy129 = model->addOperand(&type3);
  auto param165 = model->addOperand(&type4);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 4);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float dummy129_init[] = {0.0f};
  model->setOperandValue(dummy129, dummy129_init, sizeof(float) * 1);
  static int32_t param165_init[] = {0};
  model->setOperandValue(param165, param165_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy129, param165}, {op12});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type2);
  auto op12_tmp = model->addOperand(&type1);
  auto dummy130 = model->addOperand(&type3);
  auto param166 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type2);
  auto dummy131 = model->addOperand(&type3);
  auto param167 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type3);
  auto dummy132 = model->addOperand(&type3);
  auto param168 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float dummy130_init[] = {0.0f};
  model->setOperandValue(dummy130, dummy130_init, sizeof(float) * 1);
  static int32_t param166_init[] = {0};
  model->setOperandValue(param166, param166_init, sizeof(int32_t) * 1);
  static float dummy131_init[] = {0.0f};
  model->setOperandValue(dummy131, dummy131_init, sizeof(float) * 1);
  static int32_t param167_init[] = {0};
  model->setOperandValue(param167, param167_init, sizeof(int32_t) * 1);
  static float dummy132_init[] = {0.0f};
  model->setOperandValue(dummy132, dummy132_init, sizeof(float) * 1);
  static int32_t param168_init[] = {0};
  model->setOperandValue(param168, param168_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy130, param166}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy131, param167}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy132, param168}, {op32});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp, op22_tmp, op32_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op12 = model->addOperand(&type1);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type7);
  auto op12_tmp = model->addOperand(&type1);
  auto dummy133 = model->addOperand(&type3);
  auto param169 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type2);
  auto dummy134 = model->addOperand(&type3);
  auto param170 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type3);
  auto dummy135 = model->addOperand(&type3);
  auto param171 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float dummy133_init[] = {0.0f};
  model->setOperandValue(dummy133, dummy133_init, sizeof(float) * 1);
  static int32_t param169_init[] = {0};
  model->setOperandValue(param169, param169_init, sizeof(int32_t) * 1);
  static float dummy134_init[] = {0.0f};
  model->setOperandValue(dummy134, dummy134_init, sizeof(float) * 1);
  static int32_t param170_init[] = {0};
  model->setOperandValue(param170, param170_init, sizeof(int32_t) * 1);
  static float dummy135_init[] = {0.0f};
  model->setOperandValue(dummy135, dummy135_init, sizeof(float) * 1);
  static int32_t param171_init[] = {0};
  model->setOperandValue(param171, param171_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy133, param169}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy134, param170}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy135, param171}, {op32});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp, op22_tmp, op32_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type8);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type9);
  // Phase 2, operations
  static uint8_t op22_init[] = {2, 2, 2, 2};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 4);
  static int32_t op32_init[] = {0};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type8);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type11);
  // Phase 2, operations
  static uint8_t op22_init[] = {2, 2, 2, 2};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 4);
  static int32_t op32_init[] = {0};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type8);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type9);
  auto op12_tmp = model->addOperand(&type8);
  auto dummy136 = model->addOperand(&type12);
  auto param172 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op22_init[] = {2, 2, 2, 2};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 4);
  static int32_t op32_init[] = {0};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static uint8_t dummy136_init[] = {0};
  model->setOperandValue(dummy136, dummy136_init, sizeof(uint8_t) * 1);
  static int32_t param172_init[] = {0};
  model->setOperandValue(param172, param172_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy136, param172}, {op12});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type8);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type11);
  auto op12_tmp = model->addOperand(&type8);
  auto dummy137 = model->addOperand(&type12);
  auto param173 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op22_init[] = {2, 2, 2, 2};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 4);
  static int32_t op32_init[] = {0};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static uint8_t dummy137_init[] = {0};
  model->setOperandValue(dummy137, dummy137_init, sizeof(uint8_t) * 1);
  static int32_t param173_init[] = {0};
  model->setOperandValue(param173, param173_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy137, param173}, {op12});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type8);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type8);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type8);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type9);
  auto op12_tmp = model->addOperand(&type8);
  auto dummy138 = model->addOperand(&type12);
  auto param174 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type9);
  auto dummy139 = model->addOperand(&type13);
  auto param175 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static uint8_t dummy138_init[] = {0};
  model->setOperandValue(dummy138, dummy138_init, sizeof(uint8_t) * 1);
  static int32_t param174_init[] = {0};
  model->setOperandValue(param174, param174_init, sizeof(int32_t) * 1);
  static uint8_t dummy139_init[] = {0};
  model->setOperandValue(dummy139, dummy139_init, sizeof(uint8_t) * 1);
  static int32_t param175_init[] = {0};
  model->setOperandValue(param175, param175_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy138, param174}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy139, param175}, {op22});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op32, op12_tmp, op22_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type8);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type11);
  auto op12_tmp = model->addOperand(&type8);
  auto dummy140 = model->addOperand(&type12);
  auto param176 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type9);
  auto dummy141 = model->addOperand(&type13);
  auto param177 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static uint8_t dummy140_init[] = {0};
  model->setOperandValue(dummy140, dummy140_init, sizeof(uint8_t) * 1);
  static int32_t param176_init[] = {0};
  model->setOperandValue(param176, param176_init, sizeof(int32_t) * 1);
  static uint8_t dummy141_init[] = {0};
  model->setOperandValue(dummy141, dummy141_init, sizeof(uint8_t) * 1);
  static int32_t param177_init[] = {0};
  model->setOperandValue(param177, param177_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy140, param176}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy141, param177}, {op22});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op32, op12_tmp, op22_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type14);
  auto op22 = model->addOperand(&type15);
  auto op32 = model->addOperand(&type16);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type15);
  // Phase 2, operations
  static _Float16 op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(_Float16) * 4);
  static _Float16 op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(_Float16) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type14);
  auto op22 = model->addOperand(&type15);
  auto op32 = model->addOperand(&type16);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type17);
  // Phase 2, operations
  static _Float16 op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(_Float16) * 4);
  static _Float16 op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(_Float16) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type18);
  auto op22 = model->addOperand(&type15);
  auto op32 = model->addOperand(&type16);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type15);
  auto op12_tmp = model->addOperand(&type18);
  auto dummy142 = model->addOperand(&type19);
  auto param178 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(_Float16) * 4);
  static _Float16 op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(_Float16) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 dummy142_init[] = {0.0f};
  model->setOperandValue(dummy142, dummy142_init, sizeof(_Float16) * 1);
  static int32_t param178_init[] = {0};
  model->setOperandValue(param178, param178_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy142, param178}, {op12});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type18);
  auto op22 = model->addOperand(&type15);
  auto op32 = model->addOperand(&type16);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type17);
  auto op12_tmp = model->addOperand(&type18);
  auto dummy143 = model->addOperand(&type19);
  auto param179 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(_Float16) * 4);
  static _Float16 op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(_Float16) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 dummy143_init[] = {0.0f};
  model->setOperandValue(dummy143, dummy143_init, sizeof(_Float16) * 1);
  static int32_t param179_init[] = {0};
  model->setOperandValue(param179, param179_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy143, param179}, {op12});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type14);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type19);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type14);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type19);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type18);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type19);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type15);
  auto op12_tmp = model->addOperand(&type18);
  auto dummy144 = model->addOperand(&type19);
  auto param180 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type20);
  auto dummy145 = model->addOperand(&type19);
  auto param181 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type19);
  auto dummy146 = model->addOperand(&type19);
  auto param182 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 dummy144_init[] = {0.0f};
  model->setOperandValue(dummy144, dummy144_init, sizeof(_Float16) * 1);
  static int32_t param180_init[] = {0};
  model->setOperandValue(param180, param180_init, sizeof(int32_t) * 1);
  static _Float16 dummy145_init[] = {0.0f};
  model->setOperandValue(dummy145, dummy145_init, sizeof(_Float16) * 1);
  static int32_t param181_init[] = {0};
  model->setOperandValue(param181, param181_init, sizeof(int32_t) * 1);
  static _Float16 dummy146_init[] = {0.0f};
  model->setOperandValue(dummy146, dummy146_init, sizeof(_Float16) * 1);
  static int32_t param182_init[] = {0};
  model->setOperandValue(param182, param182_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy144, param180}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy145, param181}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy146, param182}, {op32});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp, op22_tmp, op32_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type18);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type19);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type17);
  auto op12_tmp = model->addOperand(&type18);
  auto dummy147 = model->addOperand(&type19);
  auto param183 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type20);
  auto dummy148 = model->addOperand(&type19);
  auto param184 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type19);
  auto dummy149 = model->addOperand(&type19);
  auto param185 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 dummy147_init[] = {0.0f};
  model->setOperandValue(dummy147, dummy147_init, sizeof(_Float16) * 1);
  static int32_t param183_init[] = {0};
  model->setOperandValue(param183, param183_init, sizeof(int32_t) * 1);
  static _Float16 dummy148_init[] = {0.0f};
  model->setOperandValue(dummy148, dummy148_init, sizeof(_Float16) * 1);
  static int32_t param184_init[] = {0};
  model->setOperandValue(param184, param184_init, sizeof(int32_t) * 1);
  static _Float16 dummy149_init[] = {0.0f};
  model->setOperandValue(dummy149, dummy149_init, sizeof(_Float16) * 1);
  static int32_t param185_init[] = {0};
  model->setOperandValue(param185, param185_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy147, param183}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy148, param184}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy149, param185}, {op32});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp, op22_tmp, op32_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type21);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type22);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 4);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op12 = model->addOperand(&type21);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type7);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 4);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type21);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type22);
  auto op12_tmp = model->addOperand(&type21);
  auto dummy150 = model->addOperand(&type3);
  auto param186 = model->addOperand(&type4);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 4);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float dummy150_init[] = {0.0f};
  model->setOperandValue(dummy150, dummy150_init, sizeof(float) * 1);
  static int32_t param186_init[] = {0};
  model->setOperandValue(param186, param186_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy150, param186}, {op12});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op12 = model->addOperand(&type21);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type7);
  auto op12_tmp = model->addOperand(&type21);
  auto dummy151 = model->addOperand(&type3);
  auto param187 = model->addOperand(&type4);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 4);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float dummy151_init[] = {0.0f};
  model->setOperandValue(dummy151, dummy151_init, sizeof(float) * 1);
  static int32_t param187_init[] = {0};
  model->setOperandValue(param187, param187_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy151, param187}, {op12});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type21);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op12 = model->addOperand(&type21);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type21);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type22);
  auto op12_tmp = model->addOperand(&type21);
  auto dummy152 = model->addOperand(&type3);
  auto param188 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type2);
  auto dummy153 = model->addOperand(&type3);
  auto param189 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type3);
  auto dummy154 = model->addOperand(&type3);
  auto param190 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float dummy152_init[] = {0.0f};
  model->setOperandValue(dummy152, dummy152_init, sizeof(float) * 1);
  static int32_t param188_init[] = {0};
  model->setOperandValue(param188, param188_init, sizeof(int32_t) * 1);
  static float dummy153_init[] = {0.0f};
  model->setOperandValue(dummy153, dummy153_init, sizeof(float) * 1);
  static int32_t param189_init[] = {0};
  model->setOperandValue(param189, param189_init, sizeof(int32_t) * 1);
  static float dummy154_init[] = {0.0f};
  model->setOperandValue(dummy154, dummy154_init, sizeof(float) * 1);
  static int32_t param190_init[] = {0};
  model->setOperandValue(param190, param190_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy152, param188}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy153, param189}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy154, param190}, {op32});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op12 = model->addOperand(&type21);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type7);
  auto op12_tmp = model->addOperand(&type21);
  auto dummy155 = model->addOperand(&type3);
  auto param191 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type2);
  auto dummy156 = model->addOperand(&type3);
  auto param192 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type3);
  auto dummy157 = model->addOperand(&type3);
  auto param193 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float dummy155_init[] = {0.0f};
  model->setOperandValue(dummy155, dummy155_init, sizeof(float) * 1);
  static int32_t param191_init[] = {0};
  model->setOperandValue(param191, param191_init, sizeof(int32_t) * 1);
  static float dummy156_init[] = {0.0f};
  model->setOperandValue(dummy156, dummy156_init, sizeof(float) * 1);
  static int32_t param192_init[] = {0};
  model->setOperandValue(param192, param192_init, sizeof(int32_t) * 1);
  static float dummy157_init[] = {0.0f};
  model->setOperandValue(dummy157, dummy157_init, sizeof(float) * 1);
  static int32_t param193_init[] = {0};
  model->setOperandValue(param193, param193_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy155, param191}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy156, param192}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy157, param193}, {op32});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type21);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type22);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 4);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op12 = model->addOperand(&type21);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type7);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 4);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type21);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type22);
  auto op12_tmp = model->addOperand(&type21);
  auto dummy158 = model->addOperand(&type3);
  auto param194 = model->addOperand(&type4);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 4);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float dummy158_init[] = {0.0f};
  model->setOperandValue(dummy158, dummy158_init, sizeof(float) * 1);
  static int32_t param194_init[] = {0};
  model->setOperandValue(param194, param194_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy158, param194}, {op12});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op12 = model->addOperand(&type21);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type7);
  auto op12_tmp = model->addOperand(&type21);
  auto dummy159 = model->addOperand(&type3);
  auto param195 = model->addOperand(&type4);
  // Phase 2, operations
  static float op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(float) * 4);
  static float op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(float) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float dummy159_init[] = {0.0f};
  model->setOperandValue(dummy159, dummy159_init, sizeof(float) * 1);
  static int32_t param195_init[] = {0};
  model->setOperandValue(param195, param195_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy159, param195}, {op12});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type21);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op12 = model->addOperand(&type21);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type21);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type22);
  auto op12_tmp = model->addOperand(&type21);
  auto dummy160 = model->addOperand(&type3);
  auto param196 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type2);
  auto dummy161 = model->addOperand(&type3);
  auto param197 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type3);
  auto dummy162 = model->addOperand(&type3);
  auto param198 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float dummy160_init[] = {0.0f};
  model->setOperandValue(dummy160, dummy160_init, sizeof(float) * 1);
  static int32_t param196_init[] = {0};
  model->setOperandValue(param196, param196_init, sizeof(int32_t) * 1);
  static float dummy161_init[] = {0.0f};
  model->setOperandValue(dummy161, dummy161_init, sizeof(float) * 1);
  static int32_t param197_init[] = {0};
  model->setOperandValue(param197, param197_init, sizeof(int32_t) * 1);
  static float dummy162_init[] = {0.0f};
  model->setOperandValue(dummy162, dummy162_init, sizeof(float) * 1);
  static int32_t param198_init[] = {0};
  model->setOperandValue(param198, param198_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy160, param196}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy161, param197}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy162, param198}, {op32});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp, op22_tmp, op32_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op12 = model->addOperand(&type21);
  auto op22 = model->addOperand(&type2);
  auto op32 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type7);
  auto op12_tmp = model->addOperand(&type21);
  auto dummy163 = model->addOperand(&type3);
  auto param199 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type2);
  auto dummy164 = model->addOperand(&type3);
  auto param200 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type3);
  auto dummy165 = model->addOperand(&type3);
  auto param201 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float dummy163_init[] = {0.0f};
  model->setOperandValue(dummy163, dummy163_init, sizeof(float) * 1);
  static int32_t param199_init[] = {0};
  model->setOperandValue(param199, param199_init, sizeof(int32_t) * 1);
  static float dummy164_init[] = {0.0f};
  model->setOperandValue(dummy164, dummy164_init, sizeof(float) * 1);
  static int32_t param200_init[] = {0};
  model->setOperandValue(param200, param200_init, sizeof(int32_t) * 1);
  static float dummy165_init[] = {0.0f};
  model->setOperandValue(dummy165, dummy165_init, sizeof(float) * 1);
  static int32_t param201_init[] = {0};
  model->setOperandValue(param201, param201_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy163, param199}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy164, param200}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy165, param201}, {op32});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp, op22_tmp, op32_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.5f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type23);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type24);
  // Phase 2, operations
  static uint8_t op22_init[] = {2, 2, 2, 2};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 4);
  static int32_t op32_init[] = {0};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type23);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type11);
  // Phase 2, operations
  static uint8_t op22_init[] = {2, 2, 2, 2};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 4);
  static int32_t op32_init[] = {0};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.5f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type23);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type24);
  auto op12_tmp = model->addOperand(&type23);
  auto dummy166 = model->addOperand(&type12);
  auto param202 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op22_init[] = {2, 2, 2, 2};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 4);
  static int32_t op32_init[] = {0};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static uint8_t dummy166_init[] = {0};
  model->setOperandValue(dummy166, dummy166_init, sizeof(uint8_t) * 1);
  static int32_t param202_init[] = {0};
  model->setOperandValue(param202, param202_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy166, param202}, {op12});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type23);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type11);
  auto op12_tmp = model->addOperand(&type23);
  auto dummy167 = model->addOperand(&type12);
  auto param203 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op22_init[] = {2, 2, 2, 2};
  model->setOperandValue(op22, op22_init, sizeof(uint8_t) * 4);
  static int32_t op32_init[] = {0};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static uint8_t dummy167_init[] = {0};
  model->setOperandValue(dummy167, dummy167_init, sizeof(uint8_t) * 1);
  static int32_t param203_init[] = {0};
  model->setOperandValue(param203, param203_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy167, param203}, {op12});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.5f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type23);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type24);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type23);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.5f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type23);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type24);
  auto op12_tmp = model->addOperand(&type23);
  auto dummy168 = model->addOperand(&type12);
  auto param204 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type9);
  auto dummy169 = model->addOperand(&type13);
  auto param205 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static uint8_t dummy168_init[] = {0};
  model->setOperandValue(dummy168, dummy168_init, sizeof(uint8_t) * 1);
  static int32_t param204_init[] = {0};
  model->setOperandValue(param204, param204_init, sizeof(int32_t) * 1);
  static uint8_t dummy169_init[] = {0};
  model->setOperandValue(dummy169, dummy169_init, sizeof(uint8_t) * 1);
  static int32_t param205_init[] = {0};
  model->setOperandValue(param205, param205_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy168, param204}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy169, param205}, {op22});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op32, op12_tmp, op22_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type23);
  auto op22 = model->addOperand(&type9);
  auto op32 = model->addOperand(&type10);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type11);
  auto op12_tmp = model->addOperand(&type23);
  auto dummy170 = model->addOperand(&type12);
  auto param206 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type9);
  auto dummy171 = model->addOperand(&type13);
  auto param207 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static uint8_t dummy170_init[] = {0};
  model->setOperandValue(dummy170, dummy170_init, sizeof(uint8_t) * 1);
  static int32_t param206_init[] = {0};
  model->setOperandValue(param206, param206_init, sizeof(int32_t) * 1);
  static uint8_t dummy171_init[] = {0};
  model->setOperandValue(dummy171, dummy171_init, sizeof(uint8_t) * 1);
  static int32_t param207_init[] = {0};
  model->setOperandValue(param207, param207_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy170, param206}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy171, param207}, {op22});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op32, op12_tmp, op22_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type25);
  auto op22 = model->addOperand(&type15);
  auto op32 = model->addOperand(&type16);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type26);
  // Phase 2, operations
  static _Float16 op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(_Float16) * 4);
  static _Float16 op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(_Float16) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type25);
  auto op22 = model->addOperand(&type15);
  auto op32 = model->addOperand(&type16);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type17);
  // Phase 2, operations
  static _Float16 op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(_Float16) * 4);
  static _Float16 op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(_Float16) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type27(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type27);
  auto op22 = model->addOperand(&type15);
  auto op32 = model->addOperand(&type16);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type26);
  auto op12_tmp = model->addOperand(&type27);
  auto dummy172 = model->addOperand(&type19);
  auto param208 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(_Float16) * 4);
  static _Float16 op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(_Float16) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 dummy172_init[] = {0.0f};
  model->setOperandValue(dummy172, dummy172_init, sizeof(_Float16) * 1);
  static int32_t param208_init[] = {0};
  model->setOperandValue(param208, param208_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy172, param208}, {op12});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type27(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type27);
  auto op22 = model->addOperand(&type15);
  auto op32 = model->addOperand(&type16);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type17);
  auto op12_tmp = model->addOperand(&type27);
  auto dummy173 = model->addOperand(&type19);
  auto param209 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op22_init[] = {0.25f, 0.25f, 0.25f, 0.25f};
  model->setOperandValue(op22, op22_init, sizeof(_Float16) * 4);
  static _Float16 op32_init[] = {0.0f};
  model->setOperandValue(op32, op32_init, sizeof(_Float16) * 1);
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 dummy173_init[] = {0.0f};
  model->setOperandValue(dummy173, dummy173_init, sizeof(_Float16) * 1);
  static int32_t param209_init[] = {0};
  model->setOperandValue(param209, param209_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy173, param209}, {op12});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type25);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type19);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type25);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type19);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type27(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type27);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type19);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type26);
  auto op12_tmp = model->addOperand(&type27);
  auto dummy174 = model->addOperand(&type19);
  auto param210 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type20);
  auto dummy175 = model->addOperand(&type19);
  auto param211 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type19);
  auto dummy176 = model->addOperand(&type19);
  auto param212 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 dummy174_init[] = {0.0f};
  model->setOperandValue(dummy174, dummy174_init, sizeof(_Float16) * 1);
  static int32_t param210_init[] = {0};
  model->setOperandValue(param210, param210_init, sizeof(int32_t) * 1);
  static _Float16 dummy175_init[] = {0.0f};
  model->setOperandValue(dummy175, dummy175_init, sizeof(_Float16) * 1);
  static int32_t param211_init[] = {0};
  model->setOperandValue(param211, param211_init, sizeof(int32_t) * 1);
  static _Float16 dummy176_init[] = {0.0f};
  model->setOperandValue(dummy176, dummy176_init, sizeof(_Float16) * 1);
  static int32_t param212_init[] = {0};
  model->setOperandValue(param212, param212_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy174, param210}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy175, param211}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy176, param212}, {op32});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp, op22_tmp, op32_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type27);
  auto op22 = model->addOperand(&type20);
  auto op32 = model->addOperand(&type19);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type17);
  auto op12_tmp = model->addOperand(&type27);
  auto dummy177 = model->addOperand(&type19);
  auto param213 = model->addOperand(&type4);
  auto op22_tmp = model->addOperand(&type20);
  auto dummy178 = model->addOperand(&type19);
  auto param214 = model->addOperand(&type4);
  auto op32_tmp = model->addOperand(&type19);
  auto dummy179 = model->addOperand(&type19);
  auto param215 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param18_init[] = {2};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param22_init[] = {1};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {1};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 dummy177_init[] = {0.0f};
  model->setOperandValue(dummy177, dummy177_init, sizeof(_Float16) * 1);
  static int32_t param213_init[] = {0};
  model->setOperandValue(param213, param213_init, sizeof(int32_t) * 1);
  static _Float16 dummy178_init[] = {0.0f};
  model->setOperandValue(dummy178, dummy178_init, sizeof(_Float16) * 1);
  static int32_t param214_init[] = {0};
  model->setOperandValue(param214, param214_init, sizeof(int32_t) * 1);
  static _Float16 dummy179_init[] = {0.0f};
  model->setOperandValue(dummy179, dummy179_init, sizeof(_Float16) * 1);
  static int32_t param215_init[] = {0};
  model->setOperandValue(param215, param215_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy177, param213}, {op12});
  model->addOperation(ANEURALNETWORKS_ADD, {op22_tmp, dummy178, param214}, {op22});
  model->addOperation(ANEURALNETWORKS_ADD, {op32_tmp, dummy179, param215}, {op32});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op12, op22, op32, param18, param19, param20, param21, layout, param22, param23}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp, op22_tmp, op32_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type1);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 9);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type7);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 9);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type1);
  auto op13_tmp = model->addOperand(&type5);
  auto dummy180 = model->addOperand(&type3);
  auto param216 = model->addOperand(&type4);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 9);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float dummy180_init[] = {0.0f};
  model->setOperandValue(dummy180, dummy180_init, sizeof(float) * 1);
  static int32_t param216_init[] = {0};
  model->setOperandValue(param216, param216_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy180, param216}, {op13});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type7);
  auto op13_tmp = model->addOperand(&type5);
  auto dummy181 = model->addOperand(&type3);
  auto param217 = model->addOperand(&type4);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 9);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float dummy181_init[] = {0.0f};
  model->setOperandValue(dummy181, dummy181_init, sizeof(float) * 1);
  static int32_t param217_init[] = {0};
  model->setOperandValue(param217, param217_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy181, param217}, {op13});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type1);
  auto op13_tmp = model->addOperand(&type5);
  auto dummy182 = model->addOperand(&type3);
  auto param218 = model->addOperand(&type4);
  auto op23_tmp = model->addOperand(&type1);
  auto dummy183 = model->addOperand(&type3);
  auto param219 = model->addOperand(&type4);
  auto op33_tmp = model->addOperand(&type3);
  auto dummy184 = model->addOperand(&type3);
  auto param220 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float dummy182_init[] = {0.0f};
  model->setOperandValue(dummy182, dummy182_init, sizeof(float) * 1);
  static int32_t param218_init[] = {0};
  model->setOperandValue(param218, param218_init, sizeof(int32_t) * 1);
  static float dummy183_init[] = {0.0f};
  model->setOperandValue(dummy183, dummy183_init, sizeof(float) * 1);
  static int32_t param219_init[] = {0};
  model->setOperandValue(param219, param219_init, sizeof(int32_t) * 1);
  static float dummy184_init[] = {0.0f};
  model->setOperandValue(dummy184, dummy184_init, sizeof(float) * 1);
  static int32_t param220_init[] = {0};
  model->setOperandValue(param220, param220_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy182, param218}, {op13});
  model->addOperation(ANEURALNETWORKS_ADD, {op23_tmp, dummy183, param219}, {op23});
  model->addOperation(ANEURALNETWORKS_ADD, {op33_tmp, dummy184, param220}, {op33});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type7);
  auto op13_tmp = model->addOperand(&type5);
  auto dummy185 = model->addOperand(&type3);
  auto param221 = model->addOperand(&type4);
  auto op23_tmp = model->addOperand(&type1);
  auto dummy186 = model->addOperand(&type3);
  auto param222 = model->addOperand(&type4);
  auto op33_tmp = model->addOperand(&type3);
  auto dummy187 = model->addOperand(&type3);
  auto param223 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float dummy185_init[] = {0.0f};
  model->setOperandValue(dummy185, dummy185_init, sizeof(float) * 1);
  static int32_t param221_init[] = {0};
  model->setOperandValue(param221, param221_init, sizeof(int32_t) * 1);
  static float dummy186_init[] = {0.0f};
  model->setOperandValue(dummy186, dummy186_init, sizeof(float) * 1);
  static int32_t param222_init[] = {0};
  model->setOperandValue(param222, param222_init, sizeof(int32_t) * 1);
  static float dummy187_init[] = {0.0f};
  model->setOperandValue(dummy187, dummy187_init, sizeof(float) * 1);
  static int32_t param223_init[] = {0};
  model->setOperandValue(param223, param223_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy185, param221}, {op13});
  model->addOperation(ANEURALNETWORKS_ADD, {op23_tmp, dummy186, param222}, {op23});
  model->addOperation(ANEURALNETWORKS_ADD, {op33_tmp, dummy187, param223}, {op33});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type1);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 9);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type7);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 9);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type1);
  auto op13_tmp = model->addOperand(&type5);
  auto dummy188 = model->addOperand(&type3);
  auto param224 = model->addOperand(&type4);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 9);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float dummy188_init[] = {0.0f};
  model->setOperandValue(dummy188, dummy188_init, sizeof(float) * 1);
  static int32_t param224_init[] = {0};
  model->setOperandValue(param224, param224_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy188, param224}, {op13});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type7);
  auto op13_tmp = model->addOperand(&type5);
  auto dummy189 = model->addOperand(&type3);
  auto param225 = model->addOperand(&type4);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 9);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float dummy189_init[] = {0.0f};
  model->setOperandValue(dummy189, dummy189_init, sizeof(float) * 1);
  static int32_t param225_init[] = {0};
  model->setOperandValue(param225, param225_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy189, param225}, {op13});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type1);
  auto op13_tmp = model->addOperand(&type5);
  auto dummy190 = model->addOperand(&type3);
  auto param226 = model->addOperand(&type4);
  auto op23_tmp = model->addOperand(&type1);
  auto dummy191 = model->addOperand(&type3);
  auto param227 = model->addOperand(&type4);
  auto op33_tmp = model->addOperand(&type3);
  auto dummy192 = model->addOperand(&type3);
  auto param228 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float dummy190_init[] = {0.0f};
  model->setOperandValue(dummy190, dummy190_init, sizeof(float) * 1);
  static int32_t param226_init[] = {0};
  model->setOperandValue(param226, param226_init, sizeof(int32_t) * 1);
  static float dummy191_init[] = {0.0f};
  model->setOperandValue(dummy191, dummy191_init, sizeof(float) * 1);
  static int32_t param227_init[] = {0};
  model->setOperandValue(param227, param227_init, sizeof(int32_t) * 1);
  static float dummy192_init[] = {0.0f};
  model->setOperandValue(dummy192, dummy192_init, sizeof(float) * 1);
  static int32_t param228_init[] = {0};
  model->setOperandValue(param228, param228_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy190, param226}, {op13});
  model->addOperation(ANEURALNETWORKS_ADD, {op23_tmp, dummy191, param227}, {op23});
  model->addOperation(ANEURALNETWORKS_ADD, {op33_tmp, dummy192, param228}, {op33});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp, op23_tmp, op33_tmp},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 9, 9, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type7);
  auto op13_tmp = model->addOperand(&type5);
  auto dummy193 = model->addOperand(&type3);
  auto param229 = model->addOperand(&type4);
  auto op23_tmp = model->addOperand(&type1);
  auto dummy194 = model->addOperand(&type3);
  auto param230 = model->addOperand(&type4);
  auto op33_tmp = model->addOperand(&type3);
  auto dummy195 = model->addOperand(&type3);
  auto param231 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float dummy193_init[] = {0.0f};
  model->setOperandValue(dummy193, dummy193_init, sizeof(float) * 1);
  static int32_t param229_init[] = {0};
  model->setOperandValue(param229, param229_init, sizeof(int32_t) * 1);
  static float dummy194_init[] = {0.0f};
  model->setOperandValue(dummy194, dummy194_init, sizeof(float) * 1);
  static int32_t param230_init[] = {0};
  model->setOperandValue(param230, param230_init, sizeof(int32_t) * 1);
  static float dummy195_init[] = {0.0f};
  model->setOperandValue(dummy195, dummy195_init, sizeof(float) * 1);
  static int32_t param231_init[] = {0};
  model->setOperandValue(param231, param231_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy193, param229}, {op13});
  model->addOperation(ANEURALNETWORKS_ADD, {op23_tmp, dummy194, param230}, {op23});
  model->addOperation(ANEURALNETWORKS_ADD, {op33_tmp, dummy195, param231}, {op33});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp, op23_tmp, op33_tmp},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 9, 9, 1}, 0.5f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type28);
  auto op23 = model->addOperand(&type29);
  auto op33 = model->addOperand(&type10);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type29);
  // Phase 2, operations
  static uint8_t op23_init[] = {8, 16, 24, 32, 40, 48, 56, 64, 72};
  model->setOperandValue(op23, op23_init, sizeof(uint8_t) * 9);
  static int32_t op33_init[] = {0};
  model->setOperandValue(op33, op33_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 9, 9, 1}, 0.5f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type28);
  auto op23 = model->addOperand(&type29);
  auto op33 = model->addOperand(&type10);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type11);
  // Phase 2, operations
  static uint8_t op23_init[] = {8, 16, 24, 32, 40, 48, 56, 64, 72};
  model->setOperandValue(op23, op23_init, sizeof(uint8_t) * 9);
  static int32_t op33_init[] = {0};
  model->setOperandValue(op33, op33_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 9, 9, 1}, 0.5f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type28);
  auto op23 = model->addOperand(&type29);
  auto op33 = model->addOperand(&type10);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type29);
  auto op13_tmp = model->addOperand(&type28);
  auto dummy196 = model->addOperand(&type12);
  auto param232 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op23_init[] = {8, 16, 24, 32, 40, 48, 56, 64, 72};
  model->setOperandValue(op23, op23_init, sizeof(uint8_t) * 9);
  static int32_t op33_init[] = {0};
  model->setOperandValue(op33, op33_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static uint8_t dummy196_init[] = {0};
  model->setOperandValue(dummy196, dummy196_init, sizeof(uint8_t) * 1);
  static int32_t param232_init[] = {0};
  model->setOperandValue(param232, param232_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy196, param232}, {op13});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 9, 9, 1}, 0.5f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type28);
  auto op23 = model->addOperand(&type29);
  auto op33 = model->addOperand(&type10);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type11);
  auto op13_tmp = model->addOperand(&type28);
  auto dummy197 = model->addOperand(&type12);
  auto param233 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op23_init[] = {8, 16, 24, 32, 40, 48, 56, 64, 72};
  model->setOperandValue(op23, op23_init, sizeof(uint8_t) * 9);
  static int32_t op33_init[] = {0};
  model->setOperandValue(op33, op33_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static uint8_t dummy197_init[] = {0};
  model->setOperandValue(dummy197, dummy197_init, sizeof(uint8_t) * 1);
  static int32_t param233_init[] = {0};
  model->setOperandValue(param233, param233_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy197, param233}, {op13});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 9, 9, 1}, 0.5f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type28);
  auto op23 = model->addOperand(&type29);
  auto op33 = model->addOperand(&type10);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type29);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 9, 9, 1}, 0.5f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type28);
  auto op23 = model->addOperand(&type29);
  auto op33 = model->addOperand(&type10);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 9, 9, 1}, 0.5f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type28);
  auto op23 = model->addOperand(&type29);
  auto op33 = model->addOperand(&type10);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type29);
  auto op13_tmp = model->addOperand(&type28);
  auto dummy198 = model->addOperand(&type12);
  auto param234 = model->addOperand(&type4);
  auto op23_tmp = model->addOperand(&type29);
  auto dummy199 = model->addOperand(&type13);
  auto param235 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static uint8_t dummy198_init[] = {0};
  model->setOperandValue(dummy198, dummy198_init, sizeof(uint8_t) * 1);
  static int32_t param234_init[] = {0};
  model->setOperandValue(param234, param234_init, sizeof(int32_t) * 1);
  static uint8_t dummy199_init[] = {0};
  model->setOperandValue(dummy199, dummy199_init, sizeof(uint8_t) * 1);
  static int32_t param235_init[] = {0};
  model->setOperandValue(param235, param235_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy198, param234}, {op13});
  model->addOperation(ANEURALNETWORKS_ADD, {op23_tmp, dummy199, param235}, {op23});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op33, op13_tmp, op23_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 9, 9, 1}, 0.5f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type28);
  auto op23 = model->addOperand(&type29);
  auto op33 = model->addOperand(&type10);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type11);
  auto op13_tmp = model->addOperand(&type28);
  auto dummy200 = model->addOperand(&type12);
  auto param236 = model->addOperand(&type4);
  auto op23_tmp = model->addOperand(&type29);
  auto dummy201 = model->addOperand(&type13);
  auto param237 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static uint8_t dummy200_init[] = {0};
  model->setOperandValue(dummy200, dummy200_init, sizeof(uint8_t) * 1);
  static int32_t param236_init[] = {0};
  model->setOperandValue(param236, param236_init, sizeof(int32_t) * 1);
  static uint8_t dummy201_init[] = {0};
  model->setOperandValue(dummy201, dummy201_init, sizeof(uint8_t) * 1);
  static int32_t param237_init[] = {0};
  model->setOperandValue(param237, param237_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy200, param236}, {op13});
  model->addOperation(ANEURALNETWORKS_ADD, {op23_tmp, dummy201, param237}, {op23});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op33, op13_tmp, op23_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 9, 9, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type30);
  auto op23 = model->addOperand(&type14);
  auto op33 = model->addOperand(&type16);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type14);
  // Phase 2, operations
  static _Float16 op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(_Float16) * 9);
  static _Float16 op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(_Float16) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 9, 9, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type30);
  auto op23 = model->addOperand(&type14);
  auto op33 = model->addOperand(&type16);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type17);
  // Phase 2, operations
  static _Float16 op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(_Float16) * 9);
  static _Float16 op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(_Float16) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 9, 9, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type31);
  auto op23 = model->addOperand(&type14);
  auto op33 = model->addOperand(&type16);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type14);
  auto op13_tmp = model->addOperand(&type31);
  auto dummy202 = model->addOperand(&type19);
  auto param238 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(_Float16) * 9);
  static _Float16 op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(_Float16) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static _Float16 dummy202_init[] = {0.0f};
  model->setOperandValue(dummy202, dummy202_init, sizeof(_Float16) * 1);
  static int32_t param238_init[] = {0};
  model->setOperandValue(param238, param238_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy202, param238}, {op13});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 9, 9, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type31);
  auto op23 = model->addOperand(&type14);
  auto op33 = model->addOperand(&type16);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type17);
  auto op13_tmp = model->addOperand(&type31);
  auto dummy203 = model->addOperand(&type19);
  auto param239 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(_Float16) * 9);
  static _Float16 op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(_Float16) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static _Float16 dummy203_init[] = {0.0f};
  model->setOperandValue(dummy203, dummy203_init, sizeof(_Float16) * 1);
  static int32_t param239_init[] = {0};
  model->setOperandValue(param239, param239_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy203, param239}, {op13});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 9, 9, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type30);
  auto op23 = model->addOperand(&type18);
  auto op33 = model->addOperand(&type19);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 9, 9, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type30);
  auto op23 = model->addOperand(&type18);
  auto op33 = model->addOperand(&type19);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 9, 9, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type31);
  auto op23 = model->addOperand(&type18);
  auto op33 = model->addOperand(&type19);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type14);
  auto op13_tmp = model->addOperand(&type31);
  auto dummy204 = model->addOperand(&type19);
  auto param240 = model->addOperand(&type4);
  auto op23_tmp = model->addOperand(&type18);
  auto dummy205 = model->addOperand(&type19);
  auto param241 = model->addOperand(&type4);
  auto op33_tmp = model->addOperand(&type19);
  auto dummy206 = model->addOperand(&type19);
  auto param242 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static _Float16 dummy204_init[] = {0.0f};
  model->setOperandValue(dummy204, dummy204_init, sizeof(_Float16) * 1);
  static int32_t param240_init[] = {0};
  model->setOperandValue(param240, param240_init, sizeof(int32_t) * 1);
  static _Float16 dummy205_init[] = {0.0f};
  model->setOperandValue(dummy205, dummy205_init, sizeof(_Float16) * 1);
  static int32_t param241_init[] = {0};
  model->setOperandValue(param241, param241_init, sizeof(int32_t) * 1);
  static _Float16 dummy206_init[] = {0.0f};
  model->setOperandValue(dummy206, dummy206_init, sizeof(_Float16) * 1);
  static int32_t param242_init[] = {0};
  model->setOperandValue(param242, param242_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy204, param240}, {op13});
  model->addOperation(ANEURALNETWORKS_ADD, {op23_tmp, dummy205, param241}, {op23});
  model->addOperation(ANEURALNETWORKS_ADD, {op33_tmp, dummy206, param242}, {op33});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp, op23_tmp, op33_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 9, 9, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type31);
  auto op23 = model->addOperand(&type18);
  auto op33 = model->addOperand(&type19);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type17);
  auto op13_tmp = model->addOperand(&type31);
  auto dummy207 = model->addOperand(&type19);
  auto param243 = model->addOperand(&type4);
  auto op23_tmp = model->addOperand(&type18);
  auto dummy208 = model->addOperand(&type19);
  auto param244 = model->addOperand(&type4);
  auto op33_tmp = model->addOperand(&type19);
  auto dummy209 = model->addOperand(&type19);
  auto param245 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static _Float16 dummy207_init[] = {0.0f};
  model->setOperandValue(dummy207, dummy207_init, sizeof(_Float16) * 1);
  static int32_t param243_init[] = {0};
  model->setOperandValue(param243, param243_init, sizeof(int32_t) * 1);
  static _Float16 dummy208_init[] = {0.0f};
  model->setOperandValue(dummy208, dummy208_init, sizeof(_Float16) * 1);
  static int32_t param244_init[] = {0};
  model->setOperandValue(param244, param244_init, sizeof(int32_t) * 1);
  static _Float16 dummy209_init[] = {0.0f};
  model->setOperandValue(dummy209, dummy209_init, sizeof(_Float16) * 1);
  static int32_t param245_init[] = {0};
  model->setOperandValue(param245, param245_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy207, param243}, {op13});
  model->addOperation(ANEURALNETWORKS_ADD, {op23_tmp, dummy208, param244}, {op23});
  model->addOperation(ANEURALNETWORKS_ADD, {op33_tmp, dummy209, param245}, {op33});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp, op23_tmp, op33_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type32);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type21);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 9);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op13 = model->addOperand(&type32);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type7);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 9);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type32);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type21);
  auto op13_tmp = model->addOperand(&type32);
  auto dummy210 = model->addOperand(&type3);
  auto param246 = model->addOperand(&type4);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 9);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float dummy210_init[] = {0.0f};
  model->setOperandValue(dummy210, dummy210_init, sizeof(float) * 1);
  static int32_t param246_init[] = {0};
  model->setOperandValue(param246, param246_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy210, param246}, {op13});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op13 = model->addOperand(&type32);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type7);
  auto op13_tmp = model->addOperand(&type32);
  auto dummy211 = model->addOperand(&type3);
  auto param247 = model->addOperand(&type4);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 9);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float dummy211_init[] = {0.0f};
  model->setOperandValue(dummy211, dummy211_init, sizeof(float) * 1);
  static int32_t param247_init[] = {0};
  model->setOperandValue(param247, param247_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy211, param247}, {op13});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type32);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op13 = model->addOperand(&type32);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type32);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type21);
  auto op13_tmp = model->addOperand(&type32);
  auto dummy212 = model->addOperand(&type3);
  auto param248 = model->addOperand(&type4);
  auto op23_tmp = model->addOperand(&type1);
  auto dummy213 = model->addOperand(&type3);
  auto param249 = model->addOperand(&type4);
  auto op33_tmp = model->addOperand(&type3);
  auto dummy214 = model->addOperand(&type3);
  auto param250 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float dummy212_init[] = {0.0f};
  model->setOperandValue(dummy212, dummy212_init, sizeof(float) * 1);
  static int32_t param248_init[] = {0};
  model->setOperandValue(param248, param248_init, sizeof(int32_t) * 1);
  static float dummy213_init[] = {0.0f};
  model->setOperandValue(dummy213, dummy213_init, sizeof(float) * 1);
  static int32_t param249_init[] = {0};
  model->setOperandValue(param249, param249_init, sizeof(int32_t) * 1);
  static float dummy214_init[] = {0.0f};
  model->setOperandValue(dummy214, dummy214_init, sizeof(float) * 1);
  static int32_t param250_init[] = {0};
  model->setOperandValue(param250, param250_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy212, param248}, {op13});
  model->addOperation(ANEURALNETWORKS_ADD, {op23_tmp, dummy213, param249}, {op23});
  model->addOperation(ANEURALNETWORKS_ADD, {op33_tmp, dummy214, param250}, {op33});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op13 = model->addOperand(&type32);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type7);
  auto op13_tmp = model->addOperand(&type32);
  auto dummy215 = model->addOperand(&type3);
  auto param251 = model->addOperand(&type4);
  auto op23_tmp = model->addOperand(&type1);
  auto dummy216 = model->addOperand(&type3);
  auto param252 = model->addOperand(&type4);
  auto op33_tmp = model->addOperand(&type3);
  auto dummy217 = model->addOperand(&type3);
  auto param253 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float dummy215_init[] = {0.0f};
  model->setOperandValue(dummy215, dummy215_init, sizeof(float) * 1);
  static int32_t param251_init[] = {0};
  model->setOperandValue(param251, param251_init, sizeof(int32_t) * 1);
  static float dummy216_init[] = {0.0f};
  model->setOperandValue(dummy216, dummy216_init, sizeof(float) * 1);
  static int32_t param252_init[] = {0};
  model->setOperandValue(param252, param252_init, sizeof(int32_t) * 1);
  static float dummy217_init[] = {0.0f};
  model->setOperandValue(dummy217, dummy217_init, sizeof(float) * 1);
  static int32_t param253_init[] = {0};
  model->setOperandValue(param253, param253_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy215, param251}, {op13});
  model->addOperation(ANEURALNETWORKS_ADD, {op23_tmp, dummy216, param252}, {op23});
  model->addOperation(ANEURALNETWORKS_ADD, {op33_tmp, dummy217, param253}, {op33});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type32);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type21);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 9);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op13 = model->addOperand(&type32);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type7);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 9);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type32);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type21);
  auto op13_tmp = model->addOperand(&type32);
  auto dummy218 = model->addOperand(&type3);
  auto param254 = model->addOperand(&type4);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 9);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float dummy218_init[] = {0.0f};
  model->setOperandValue(dummy218, dummy218_init, sizeof(float) * 1);
  static int32_t param254_init[] = {0};
  model->setOperandValue(param254, param254_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy218, param254}, {op13});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op13 = model->addOperand(&type32);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type7);
  auto op13_tmp = model->addOperand(&type32);
  auto dummy219 = model->addOperand(&type3);
  auto param255 = model->addOperand(&type4);
  // Phase 2, operations
  static float op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(float) * 9);
  static float op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(float) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float dummy219_init[] = {0.0f};
  model->setOperandValue(dummy219, dummy219_init, sizeof(float) * 1);
  static int32_t param255_init[] = {0};
  model->setOperandValue(param255, param255_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy219, param255}, {op13});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type32);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op13 = model->addOperand(&type32);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type32);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type21);
  auto op13_tmp = model->addOperand(&type32);
  auto dummy220 = model->addOperand(&type3);
  auto param256 = model->addOperand(&type4);
  auto op23_tmp = model->addOperand(&type1);
  auto dummy221 = model->addOperand(&type3);
  auto param257 = model->addOperand(&type4);
  auto op33_tmp = model->addOperand(&type3);
  auto dummy222 = model->addOperand(&type3);
  auto param258 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float dummy220_init[] = {0.0f};
  model->setOperandValue(dummy220, dummy220_init, sizeof(float) * 1);
  static int32_t param256_init[] = {0};
  model->setOperandValue(param256, param256_init, sizeof(int32_t) * 1);
  static float dummy221_init[] = {0.0f};
  model->setOperandValue(dummy221, dummy221_init, sizeof(float) * 1);
  static int32_t param257_init[] = {0};
  model->setOperandValue(param257, param257_init, sizeof(int32_t) * 1);
  static float dummy222_init[] = {0.0f};
  model->setOperandValue(dummy222, dummy222_init, sizeof(float) * 1);
  static int32_t param258_init[] = {0};
  model->setOperandValue(param258, param258_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy220, param256}, {op13});
  model->addOperation(ANEURALNETWORKS_ADD, {op23_tmp, dummy221, param257}, {op23});
  model->addOperation(ANEURALNETWORKS_ADD, {op33_tmp, dummy222, param258}, {op33});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp, op23_tmp, op33_tmp},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type32(Type::TENSOR_FLOAT32, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op13 = model->addOperand(&type32);
  auto op23 = model->addOperand(&type1);
  auto op33 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type7);
  auto op13_tmp = model->addOperand(&type32);
  auto dummy223 = model->addOperand(&type3);
  auto param259 = model->addOperand(&type4);
  auto op23_tmp = model->addOperand(&type1);
  auto dummy224 = model->addOperand(&type3);
  auto param260 = model->addOperand(&type4);
  auto op33_tmp = model->addOperand(&type3);
  auto dummy225 = model->addOperand(&type3);
  auto param261 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float dummy223_init[] = {0.0f};
  model->setOperandValue(dummy223, dummy223_init, sizeof(float) * 1);
  static int32_t param259_init[] = {0};
  model->setOperandValue(param259, param259_init, sizeof(int32_t) * 1);
  static float dummy224_init[] = {0.0f};
  model->setOperandValue(dummy224, dummy224_init, sizeof(float) * 1);
  static int32_t param260_init[] = {0};
  model->setOperandValue(param260, param260_init, sizeof(int32_t) * 1);
  static float dummy225_init[] = {0.0f};
  model->setOperandValue(dummy225, dummy225_init, sizeof(float) * 1);
  static int32_t param261_init[] = {0};
  model->setOperandValue(param261, param261_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy223, param259}, {op13});
  model->addOperation(ANEURALNETWORKS_ADD, {op23_tmp, dummy224, param260}, {op23});
  model->addOperation(ANEURALNETWORKS_ADD, {op33_tmp, dummy225, param261}, {op33});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp, op23_tmp, op33_tmp},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 9, 9}, 0.5f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type33);
  auto op23 = model->addOperand(&type29);
  auto op33 = model->addOperand(&type10);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type34);
  // Phase 2, operations
  static uint8_t op23_init[] = {8, 16, 24, 32, 40, 48, 56, 64, 72};
  model->setOperandValue(op23, op23_init, sizeof(uint8_t) * 9);
  static int32_t op33_init[] = {0};
  model->setOperandValue(op33, op33_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 9, 9}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type33);
  auto op23 = model->addOperand(&type29);
  auto op33 = model->addOperand(&type10);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type11);
  // Phase 2, operations
  static uint8_t op23_init[] = {8, 16, 24, 32, 40, 48, 56, 64, 72};
  model->setOperandValue(op23, op23_init, sizeof(uint8_t) * 9);
  static int32_t op33_init[] = {0};
  model->setOperandValue(op33, op33_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 9, 9}, 0.5f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type33);
  auto op23 = model->addOperand(&type29);
  auto op33 = model->addOperand(&type10);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type34);
  auto op13_tmp = model->addOperand(&type33);
  auto dummy226 = model->addOperand(&type12);
  auto param262 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op23_init[] = {8, 16, 24, 32, 40, 48, 56, 64, 72};
  model->setOperandValue(op23, op23_init, sizeof(uint8_t) * 9);
  static int32_t op33_init[] = {0};
  model->setOperandValue(op33, op33_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static uint8_t dummy226_init[] = {0};
  model->setOperandValue(dummy226, dummy226_init, sizeof(uint8_t) * 1);
  static int32_t param262_init[] = {0};
  model->setOperandValue(param262, param262_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy226, param262}, {op13});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 9, 9}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type33);
  auto op23 = model->addOperand(&type29);
  auto op33 = model->addOperand(&type10);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type11);
  auto op13_tmp = model->addOperand(&type33);
  auto dummy227 = model->addOperand(&type12);
  auto param263 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op23_init[] = {8, 16, 24, 32, 40, 48, 56, 64, 72};
  model->setOperandValue(op23, op23_init, sizeof(uint8_t) * 9);
  static int32_t op33_init[] = {0};
  model->setOperandValue(op33, op33_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static uint8_t dummy227_init[] = {0};
  model->setOperandValue(dummy227, dummy227_init, sizeof(uint8_t) * 1);
  static int32_t param263_init[] = {0};
  model->setOperandValue(param263, param263_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy227, param263}, {op13});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 9, 9}, 0.5f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type33);
  auto op23 = model->addOperand(&type29);
  auto op33 = model->addOperand(&type10);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 9, 9}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type33);
  auto op23 = model->addOperand(&type29);
  auto op33 = model->addOperand(&type10);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 9, 9}, 0.5f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type33);
  auto op23 = model->addOperand(&type29);
  auto op33 = model->addOperand(&type10);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type34);
  auto op13_tmp = model->addOperand(&type33);
  auto dummy228 = model->addOperand(&type12);
  auto param264 = model->addOperand(&type4);
  auto op23_tmp = model->addOperand(&type29);
  auto dummy229 = model->addOperand(&type13);
  auto param265 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static uint8_t dummy228_init[] = {0};
  model->setOperandValue(dummy228, dummy228_init, sizeof(uint8_t) * 1);
  static int32_t param264_init[] = {0};
  model->setOperandValue(param264, param264_init, sizeof(int32_t) * 1);
  static uint8_t dummy229_init[] = {0};
  model->setOperandValue(dummy229, dummy229_init, sizeof(uint8_t) * 1);
  static int32_t param265_init[] = {0};
  model->setOperandValue(param265, param265_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy228, param264}, {op13});
  model->addOperation(ANEURALNETWORKS_ADD, {op23_tmp, dummy229, param265}, {op23});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op33, op13_tmp, op23_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 9, 9}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type33);
  auto op23 = model->addOperand(&type29);
  auto op33 = model->addOperand(&type10);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type11);
  auto op13_tmp = model->addOperand(&type33);
  auto dummy230 = model->addOperand(&type12);
  auto param266 = model->addOperand(&type4);
  auto op23_tmp = model->addOperand(&type29);
  auto dummy231 = model->addOperand(&type13);
  auto param267 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static uint8_t dummy230_init[] = {0};
  model->setOperandValue(dummy230, dummy230_init, sizeof(uint8_t) * 1);
  static int32_t param266_init[] = {0};
  model->setOperandValue(param266, param266_init, sizeof(int32_t) * 1);
  static uint8_t dummy231_init[] = {0};
  model->setOperandValue(dummy231, dummy231_init, sizeof(uint8_t) * 1);
  static int32_t param267_init[] = {0};
  model->setOperandValue(param267, param267_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy230, param266}, {op13});
  model->addOperation(ANEURALNETWORKS_ADD, {op23_tmp, dummy231, param267}, {op23});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op33, op13_tmp, op23_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type35);
  auto op23 = model->addOperand(&type14);
  auto op33 = model->addOperand(&type16);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type25);
  // Phase 2, operations
  static _Float16 op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(_Float16) * 9);
  static _Float16 op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(_Float16) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type35);
  auto op23 = model->addOperand(&type14);
  auto op33 = model->addOperand(&type16);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type17);
  // Phase 2, operations
  static _Float16 op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(_Float16) * 9);
  static _Float16 op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(_Float16) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type36);
  auto op23 = model->addOperand(&type14);
  auto op33 = model->addOperand(&type16);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type25);
  auto op13_tmp = model->addOperand(&type36);
  auto dummy232 = model->addOperand(&type19);
  auto param268 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(_Float16) * 9);
  static _Float16 op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(_Float16) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static _Float16 dummy232_init[] = {0.0f};
  model->setOperandValue(dummy232, dummy232_init, sizeof(_Float16) * 1);
  static int32_t param268_init[] = {0};
  model->setOperandValue(param268, param268_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy232, param268}, {op13});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type36);
  auto op23 = model->addOperand(&type14);
  auto op33 = model->addOperand(&type16);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type17);
  auto op13_tmp = model->addOperand(&type36);
  auto dummy233 = model->addOperand(&type19);
  auto param269 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op23_init[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
  model->setOperandValue(op23, op23_init, sizeof(_Float16) * 9);
  static _Float16 op33_init[] = {0.0f};
  model->setOperandValue(op33, op33_init, sizeof(_Float16) * 1);
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static _Float16 dummy233_init[] = {0.0f};
  model->setOperandValue(dummy233, dummy233_init, sizeof(_Float16) * 1);
  static int32_t param269_init[] = {0};
  model->setOperandValue(param269, param269_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy233, param269}, {op13});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type35);
  auto op23 = model->addOperand(&type18);
  auto op33 = model->addOperand(&type19);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type35);
  auto op23 = model->addOperand(&type18);
  auto op33 = model->addOperand(&type19);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, op23, op33},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type36);
  auto op23 = model->addOperand(&type18);
  auto op33 = model->addOperand(&type19);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type25);
  auto op13_tmp = model->addOperand(&type36);
  auto dummy234 = model->addOperand(&type19);
  auto param270 = model->addOperand(&type4);
  auto op23_tmp = model->addOperand(&type18);
  auto dummy235 = model->addOperand(&type19);
  auto param271 = model->addOperand(&type4);
  auto op33_tmp = model->addOperand(&type19);
  auto dummy236 = model->addOperand(&type19);
  auto param272 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static _Float16 dummy234_init[] = {0.0f};
  model->setOperandValue(dummy234, dummy234_init, sizeof(_Float16) * 1);
  static int32_t param270_init[] = {0};
  model->setOperandValue(param270, param270_init, sizeof(int32_t) * 1);
  static _Float16 dummy235_init[] = {0.0f};
  model->setOperandValue(dummy235, dummy235_init, sizeof(_Float16) * 1);
  static int32_t param271_init[] = {0};
  model->setOperandValue(param271, param271_init, sizeof(int32_t) * 1);
  static _Float16 dummy236_init[] = {0.0f};
  model->setOperandValue(dummy236, dummy236_init, sizeof(_Float16) * 1);
  static int32_t param272_init[] = {0};
  model->setOperandValue(param272, param272_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy234, param270}, {op13});
  model->addOperation(ANEURALNETWORKS_ADD, {op23_tmp, dummy235, param271}, {op23});
  model->addOperation(ANEURALNETWORKS_ADD, {op33_tmp, dummy236, param272}, {op33});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp, op23_tmp, op33_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 1, 9, 9});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op13 = model->addOperand(&type36);
  auto op23 = model->addOperand(&type18);
  auto op33 = model->addOperand(&type19);
  auto param24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type4);
  auto op43 = model->addOperand(&type17);
  auto op13_tmp = model->addOperand(&type36);
  auto dummy237 = model->addOperand(&type19);
  auto param273 = model->addOperand(&type4);
  auto op23_tmp = model->addOperand(&type18);
  auto dummy238 = model->addOperand(&type19);
  auto param274 = model->addOperand(&type4);
  auto op33_tmp = model->addOperand(&type19);
  auto dummy239 = model->addOperand(&type19);
  auto param275 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param24_init[] = {2};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {1};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param28_init[] = {3};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {3};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static _Float16 dummy237_init[] = {0.0f};
  model->setOperandValue(dummy237, dummy237_init, sizeof(_Float16) * 1);
  static int32_t param273_init[] = {0};
  model->setOperandValue(param273, param273_init, sizeof(int32_t) * 1);
  static _Float16 dummy238_init[] = {0.0f};
  model->setOperandValue(dummy238, dummy238_init, sizeof(_Float16) * 1);
  static int32_t param274_init[] = {0};
  model->setOperandValue(param274, param274_init, sizeof(int32_t) * 1);
  static _Float16 dummy239_init[] = {0.0f};
  model->setOperandValue(dummy239, dummy239_init, sizeof(_Float16) * 1);
  static int32_t param275_init[] = {0};
  model->setOperandValue(param275, param275_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy237, param273}, {op13});
  model->addOperation(ANEURALNETWORKS_ADD, {op23_tmp, dummy238, param274}, {op23});
  model->addOperation(ANEURALNETWORKS_ADD, {op33_tmp, dummy239, param275}, {op33});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op13, op23, op33, param24, param25, param26, param27, layout, param28, param29}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp, op23_tmp, op33_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type1);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type7);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type1);
  auto op14_tmp = model->addOperand(&type6);
  auto dummy240 = model->addOperand(&type3);
  auto param276 = model->addOperand(&type4);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float dummy240_init[] = {0.0f};
  model->setOperandValue(dummy240, dummy240_init, sizeof(float) * 1);
  static int32_t param276_init[] = {0};
  model->setOperandValue(param276, param276_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy240, param276}, {op14});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type7);
  auto op14_tmp = model->addOperand(&type6);
  auto dummy241 = model->addOperand(&type3);
  auto param277 = model->addOperand(&type4);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float dummy241_init[] = {0.0f};
  model->setOperandValue(dummy241, dummy241_init, sizeof(float) * 1);
  static int32_t param277_init[] = {0};
  model->setOperandValue(param277, param277_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy241, param277}, {op14});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type1);
  auto op14_tmp = model->addOperand(&type6);
  auto dummy242 = model->addOperand(&type3);
  auto param278 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type2);
  auto dummy243 = model->addOperand(&type3);
  auto param279 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type3);
  auto dummy244 = model->addOperand(&type3);
  auto param280 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float dummy242_init[] = {0.0f};
  model->setOperandValue(dummy242, dummy242_init, sizeof(float) * 1);
  static int32_t param278_init[] = {0};
  model->setOperandValue(param278, param278_init, sizeof(int32_t) * 1);
  static float dummy243_init[] = {0.0f};
  model->setOperandValue(dummy243, dummy243_init, sizeof(float) * 1);
  static int32_t param279_init[] = {0};
  model->setOperandValue(param279, param279_init, sizeof(int32_t) * 1);
  static float dummy244_init[] = {0.0f};
  model->setOperandValue(dummy244, dummy244_init, sizeof(float) * 1);
  static int32_t param280_init[] = {0};
  model->setOperandValue(param280, param280_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy242, param278}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy243, param279}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy244, param280}, {op34});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type7);
  auto op14_tmp = model->addOperand(&type6);
  auto dummy245 = model->addOperand(&type3);
  auto param281 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type2);
  auto dummy246 = model->addOperand(&type3);
  auto param282 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type3);
  auto dummy247 = model->addOperand(&type3);
  auto param283 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float dummy245_init[] = {0.0f};
  model->setOperandValue(dummy245, dummy245_init, sizeof(float) * 1);
  static int32_t param281_init[] = {0};
  model->setOperandValue(param281, param281_init, sizeof(int32_t) * 1);
  static float dummy246_init[] = {0.0f};
  model->setOperandValue(dummy246, dummy246_init, sizeof(float) * 1);
  static int32_t param282_init[] = {0};
  model->setOperandValue(param282, param282_init, sizeof(int32_t) * 1);
  static float dummy247_init[] = {0.0f};
  model->setOperandValue(dummy247, dummy247_init, sizeof(float) * 1);
  static int32_t param283_init[] = {0};
  model->setOperandValue(param283, param283_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy245, param281}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy246, param282}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy247, param283}, {op34});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type1);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type7);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type1);
  auto op14_tmp = model->addOperand(&type6);
  auto dummy248 = model->addOperand(&type3);
  auto param284 = model->addOperand(&type4);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float dummy248_init[] = {0.0f};
  model->setOperandValue(dummy248, dummy248_init, sizeof(float) * 1);
  static int32_t param284_init[] = {0};
  model->setOperandValue(param284, param284_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy248, param284}, {op14});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type7);
  auto op14_tmp = model->addOperand(&type6);
  auto dummy249 = model->addOperand(&type3);
  auto param285 = model->addOperand(&type4);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float dummy249_init[] = {0.0f};
  model->setOperandValue(dummy249, dummy249_init, sizeof(float) * 1);
  static int32_t param285_init[] = {0};
  model->setOperandValue(param285, param285_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy249, param285}, {op14});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type1);
  auto op14_tmp = model->addOperand(&type6);
  auto dummy250 = model->addOperand(&type3);
  auto param286 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type2);
  auto dummy251 = model->addOperand(&type3);
  auto param287 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type3);
  auto dummy252 = model->addOperand(&type3);
  auto param288 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float dummy250_init[] = {0.0f};
  model->setOperandValue(dummy250, dummy250_init, sizeof(float) * 1);
  static int32_t param286_init[] = {0};
  model->setOperandValue(param286, param286_init, sizeof(int32_t) * 1);
  static float dummy251_init[] = {0.0f};
  model->setOperandValue(dummy251, dummy251_init, sizeof(float) * 1);
  static int32_t param287_init[] = {0};
  model->setOperandValue(param287, param287_init, sizeof(int32_t) * 1);
  static float dummy252_init[] = {0.0f};
  model->setOperandValue(dummy252, dummy252_init, sizeof(float) * 1);
  static int32_t param288_init[] = {0};
  model->setOperandValue(param288, param288_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy250, param286}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy251, param287}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy252, param288}, {op34});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp, op24_tmp, op34_tmp},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 6, 6, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op14 = model->addOperand(&type6);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type7);
  auto op14_tmp = model->addOperand(&type6);
  auto dummy253 = model->addOperand(&type3);
  auto param289 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type2);
  auto dummy254 = model->addOperand(&type3);
  auto param290 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type3);
  auto dummy255 = model->addOperand(&type3);
  auto param291 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float dummy253_init[] = {0.0f};
  model->setOperandValue(dummy253, dummy253_init, sizeof(float) * 1);
  static int32_t param289_init[] = {0};
  model->setOperandValue(param289, param289_init, sizeof(int32_t) * 1);
  static float dummy254_init[] = {0.0f};
  model->setOperandValue(dummy254, dummy254_init, sizeof(float) * 1);
  static int32_t param290_init[] = {0};
  model->setOperandValue(param290, param290_init, sizeof(int32_t) * 1);
  static float dummy255_init[] = {0.0f};
  model->setOperandValue(dummy255, dummy255_init, sizeof(float) * 1);
  static int32_t param291_init[] = {0};
  model->setOperandValue(param291, param291_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy253, param289}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy254, param290}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy255, param291}, {op34});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp, op24_tmp, op34_tmp},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type37);
  auto op24 = model->addOperand(&type9);
  auto op34 = model->addOperand(&type10);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type29);
  // Phase 2, operations
  static uint8_t op24_init[] = {8, 16, 24, 32};
  model->setOperandValue(op24, op24_init, sizeof(uint8_t) * 4);
  static int32_t op34_init[] = {0};
  model->setOperandValue(op34, op34_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type37);
  auto op24 = model->addOperand(&type9);
  auto op34 = model->addOperand(&type10);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type11);
  // Phase 2, operations
  static uint8_t op24_init[] = {8, 16, 24, 32};
  model->setOperandValue(op24, op24_init, sizeof(uint8_t) * 4);
  static int32_t op34_init[] = {0};
  model->setOperandValue(op34, op34_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type37);
  auto op24 = model->addOperand(&type9);
  auto op34 = model->addOperand(&type10);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type29);
  auto op14_tmp = model->addOperand(&type37);
  auto dummy256 = model->addOperand(&type12);
  auto param292 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op24_init[] = {8, 16, 24, 32};
  model->setOperandValue(op24, op24_init, sizeof(uint8_t) * 4);
  static int32_t op34_init[] = {0};
  model->setOperandValue(op34, op34_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static uint8_t dummy256_init[] = {0};
  model->setOperandValue(dummy256, dummy256_init, sizeof(uint8_t) * 1);
  static int32_t param292_init[] = {0};
  model->setOperandValue(param292, param292_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy256, param292}, {op14});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type37);
  auto op24 = model->addOperand(&type9);
  auto op34 = model->addOperand(&type10);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type11);
  auto op14_tmp = model->addOperand(&type37);
  auto dummy257 = model->addOperand(&type12);
  auto param293 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op24_init[] = {8, 16, 24, 32};
  model->setOperandValue(op24, op24_init, sizeof(uint8_t) * 4);
  static int32_t op34_init[] = {0};
  model->setOperandValue(op34, op34_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static uint8_t dummy257_init[] = {0};
  model->setOperandValue(dummy257, dummy257_init, sizeof(uint8_t) * 1);
  static int32_t param293_init[] = {0};
  model->setOperandValue(param293, param293_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy257, param293}, {op14});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type37);
  auto op24 = model->addOperand(&type9);
  auto op34 = model->addOperand(&type10);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type29);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type37);
  auto op24 = model->addOperand(&type9);
  auto op34 = model->addOperand(&type10);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.125f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type37);
  auto op24 = model->addOperand(&type9);
  auto op34 = model->addOperand(&type10);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type29);
  auto op14_tmp = model->addOperand(&type37);
  auto dummy258 = model->addOperand(&type12);
  auto param294 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type9);
  auto dummy259 = model->addOperand(&type13);
  auto param295 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static uint8_t dummy258_init[] = {0};
  model->setOperandValue(dummy258, dummy258_init, sizeof(uint8_t) * 1);
  static int32_t param294_init[] = {0};
  model->setOperandValue(param294, param294_init, sizeof(int32_t) * 1);
  static uint8_t dummy259_init[] = {0};
  model->setOperandValue(dummy259, dummy259_init, sizeof(uint8_t) * 1);
  static int32_t param295_init[] = {0};
  model->setOperandValue(param295, param295_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy258, param294}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy259, param295}, {op24});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op34, op14_tmp, op24_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {1, 6, 6, 1}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type37);
  auto op24 = model->addOperand(&type9);
  auto op34 = model->addOperand(&type10);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type11);
  auto op14_tmp = model->addOperand(&type37);
  auto dummy260 = model->addOperand(&type12);
  auto param296 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type9);
  auto dummy261 = model->addOperand(&type13);
  auto param297 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static uint8_t dummy260_init[] = {0};
  model->setOperandValue(dummy260, dummy260_init, sizeof(uint8_t) * 1);
  static int32_t param296_init[] = {0};
  model->setOperandValue(param296, param296_init, sizeof(int32_t) * 1);
  static uint8_t dummy261_init[] = {0};
  model->setOperandValue(dummy261, dummy261_init, sizeof(uint8_t) * 1);
  static int32_t param297_init[] = {0};
  model->setOperandValue(param297, param297_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy260, param296}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy261, param297}, {op24});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op34, op14_tmp, op24_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type38(Type::TENSOR_FLOAT16, {1, 6, 6, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type38);
  auto op24 = model->addOperand(&type15);
  auto op34 = model->addOperand(&type16);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type14);
  // Phase 2, operations
  static _Float16 op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(_Float16) * 4);
  static _Float16 op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(_Float16) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type38(Type::TENSOR_FLOAT16, {1, 6, 6, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type38);
  auto op24 = model->addOperand(&type15);
  auto op34 = model->addOperand(&type16);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type17);
  // Phase 2, operations
  static _Float16 op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(_Float16) * 4);
  static _Float16 op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(_Float16) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 6, 6, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type39);
  auto op24 = model->addOperand(&type15);
  auto op34 = model->addOperand(&type16);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type14);
  auto op14_tmp = model->addOperand(&type39);
  auto dummy262 = model->addOperand(&type19);
  auto param298 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(_Float16) * 4);
  static _Float16 op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(_Float16) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static _Float16 dummy262_init[] = {0.0f};
  model->setOperandValue(dummy262, dummy262_init, sizeof(_Float16) * 1);
  static int32_t param298_init[] = {0};
  model->setOperandValue(param298, param298_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy262, param298}, {op14});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 6, 6, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type39);
  auto op24 = model->addOperand(&type15);
  auto op34 = model->addOperand(&type16);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type17);
  auto op14_tmp = model->addOperand(&type39);
  auto dummy263 = model->addOperand(&type19);
  auto param299 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(_Float16) * 4);
  static _Float16 op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(_Float16) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static _Float16 dummy263_init[] = {0.0f};
  model->setOperandValue(dummy263, dummy263_init, sizeof(_Float16) * 1);
  static int32_t param299_init[] = {0};
  model->setOperandValue(param299, param299_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy263, param299}, {op14});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type38(Type::TENSOR_FLOAT16, {1, 6, 6, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type38);
  auto op24 = model->addOperand(&type20);
  auto op34 = model->addOperand(&type19);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type38(Type::TENSOR_FLOAT16, {1, 6, 6, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type38);
  auto op24 = model->addOperand(&type20);
  auto op34 = model->addOperand(&type19);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 6, 6, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type39);
  auto op24 = model->addOperand(&type20);
  auto op34 = model->addOperand(&type19);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type14);
  auto op14_tmp = model->addOperand(&type39);
  auto dummy264 = model->addOperand(&type19);
  auto param300 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type20);
  auto dummy265 = model->addOperand(&type19);
  auto param301 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type19);
  auto dummy266 = model->addOperand(&type19);
  auto param302 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static _Float16 dummy264_init[] = {0.0f};
  model->setOperandValue(dummy264, dummy264_init, sizeof(_Float16) * 1);
  static int32_t param300_init[] = {0};
  model->setOperandValue(param300, param300_init, sizeof(int32_t) * 1);
  static _Float16 dummy265_init[] = {0.0f};
  model->setOperandValue(dummy265, dummy265_init, sizeof(_Float16) * 1);
  static int32_t param301_init[] = {0};
  model->setOperandValue(param301, param301_init, sizeof(int32_t) * 1);
  static _Float16 dummy266_init[] = {0.0f};
  model->setOperandValue(dummy266, dummy266_init, sizeof(_Float16) * 1);
  static int32_t param302_init[] = {0};
  model->setOperandValue(param302, param302_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy264, param300}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy265, param301}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy266, param302}, {op34});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp, op24_tmp, op34_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 6, 6, 1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op14 = model->addOperand(&type39);
  auto op24 = model->addOperand(&type20);
  auto op34 = model->addOperand(&type19);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type17);
  auto op14_tmp = model->addOperand(&type39);
  auto dummy267 = model->addOperand(&type19);
  auto param303 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type20);
  auto dummy268 = model->addOperand(&type19);
  auto param304 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type19);
  auto dummy269 = model->addOperand(&type19);
  auto param305 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static _Float16 dummy267_init[] = {0.0f};
  model->setOperandValue(dummy267, dummy267_init, sizeof(_Float16) * 1);
  static int32_t param303_init[] = {0};
  model->setOperandValue(param303, param303_init, sizeof(int32_t) * 1);
  static _Float16 dummy268_init[] = {0.0f};
  model->setOperandValue(dummy268, dummy268_init, sizeof(_Float16) * 1);
  static int32_t param304_init[] = {0};
  model->setOperandValue(param304, param304_init, sizeof(int32_t) * 1);
  static _Float16 dummy269_init[] = {0.0f};
  model->setOperandValue(dummy269, dummy269_init, sizeof(_Float16) * 1);
  static int32_t param305_init[] = {0};
  model->setOperandValue(param305, param305_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy267, param303}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy268, param304}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy269, param305}, {op34});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp, op24_tmp, op34_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type21);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type7);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type21);
  auto op14_tmp = model->addOperand(&type40);
  auto dummy270 = model->addOperand(&type3);
  auto param306 = model->addOperand(&type4);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float dummy270_init[] = {0.0f};
  model->setOperandValue(dummy270, dummy270_init, sizeof(float) * 1);
  static int32_t param306_init[] = {0};
  model->setOperandValue(param306, param306_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy270, param306}, {op14});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type7);
  auto op14_tmp = model->addOperand(&type40);
  auto dummy271 = model->addOperand(&type3);
  auto param307 = model->addOperand(&type4);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float dummy271_init[] = {0.0f};
  model->setOperandValue(dummy271, dummy271_init, sizeof(float) * 1);
  static int32_t param307_init[] = {0};
  model->setOperandValue(param307, param307_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy271, param307}, {op14});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type21);
  auto op14_tmp = model->addOperand(&type40);
  auto dummy272 = model->addOperand(&type3);
  auto param308 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type2);
  auto dummy273 = model->addOperand(&type3);
  auto param309 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type3);
  auto dummy274 = model->addOperand(&type3);
  auto param310 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float dummy272_init[] = {0.0f};
  model->setOperandValue(dummy272, dummy272_init, sizeof(float) * 1);
  static int32_t param308_init[] = {0};
  model->setOperandValue(param308, param308_init, sizeof(int32_t) * 1);
  static float dummy273_init[] = {0.0f};
  model->setOperandValue(dummy273, dummy273_init, sizeof(float) * 1);
  static int32_t param309_init[] = {0};
  model->setOperandValue(param309, param309_init, sizeof(int32_t) * 1);
  static float dummy274_init[] = {0.0f};
  model->setOperandValue(dummy274, dummy274_init, sizeof(float) * 1);
  static int32_t param310_init[] = {0};
  model->setOperandValue(param310, param310_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy272, param308}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy273, param309}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy274, param310}, {op34});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type7);
  auto op14_tmp = model->addOperand(&type40);
  auto dummy275 = model->addOperand(&type3);
  auto param311 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type2);
  auto dummy276 = model->addOperand(&type3);
  auto param312 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type3);
  auto dummy277 = model->addOperand(&type3);
  auto param313 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float dummy275_init[] = {0.0f};
  model->setOperandValue(dummy275, dummy275_init, sizeof(float) * 1);
  static int32_t param311_init[] = {0};
  model->setOperandValue(param311, param311_init, sizeof(int32_t) * 1);
  static float dummy276_init[] = {0.0f};
  model->setOperandValue(dummy276, dummy276_init, sizeof(float) * 1);
  static int32_t param312_init[] = {0};
  model->setOperandValue(param312, param312_init, sizeof(int32_t) * 1);
  static float dummy277_init[] = {0.0f};
  model->setOperandValue(dummy277, dummy277_init, sizeof(float) * 1);
  static int32_t param313_init[] = {0};
  model->setOperandValue(param313, param313_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy275, param311}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy276, param312}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy277, param313}, {op34});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
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

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type21);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type7);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type21);
  auto op14_tmp = model->addOperand(&type40);
  auto dummy278 = model->addOperand(&type3);
  auto param314 = model->addOperand(&type4);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float dummy278_init[] = {0.0f};
  model->setOperandValue(dummy278, dummy278_init, sizeof(float) * 1);
  static int32_t param314_init[] = {0};
  model->setOperandValue(param314, param314_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy278, param314}, {op14});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type7);
  auto op14_tmp = model->addOperand(&type40);
  auto dummy279 = model->addOperand(&type3);
  auto param315 = model->addOperand(&type4);
  // Phase 2, operations
  static float op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(float) * 4);
  static float op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(float) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float dummy279_init[] = {0.0f};
  model->setOperandValue(dummy279, dummy279_init, sizeof(float) * 1);
  static int32_t param315_init[] = {0};
  model->setOperandValue(param315, param315_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy279, param315}, {op14});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type21);
  auto op14_tmp = model->addOperand(&type40);
  auto dummy280 = model->addOperand(&type3);
  auto param316 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type2);
  auto dummy281 = model->addOperand(&type3);
  auto param317 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type3);
  auto dummy282 = model->addOperand(&type3);
  auto param318 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float dummy280_init[] = {0.0f};
  model->setOperandValue(dummy280, dummy280_init, sizeof(float) * 1);
  static int32_t param316_init[] = {0};
  model->setOperandValue(param316, param316_init, sizeof(int32_t) * 1);
  static float dummy281_init[] = {0.0f};
  model->setOperandValue(dummy281, dummy281_init, sizeof(float) * 1);
  static int32_t param317_init[] = {0};
  model->setOperandValue(param317, param317_init, sizeof(int32_t) * 1);
  static float dummy282_init[] = {0.0f};
  model->setOperandValue(dummy282, dummy282_init, sizeof(float) * 1);
  static int32_t param318_init[] = {0};
  model->setOperandValue(param318, param318_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy280, param316}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy281, param317}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy282, param318}, {op34});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp, op24_tmp, op34_tmp},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 6, 6});
  OperandType type7(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op14 = model->addOperand(&type40);
  auto op24 = model->addOperand(&type2);
  auto op34 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type7);
  auto op14_tmp = model->addOperand(&type40);
  auto dummy283 = model->addOperand(&type3);
  auto param319 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type2);
  auto dummy284 = model->addOperand(&type3);
  auto param320 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type3);
  auto dummy285 = model->addOperand(&type3);
  auto param321 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float dummy283_init[] = {0.0f};
  model->setOperandValue(dummy283, dummy283_init, sizeof(float) * 1);
  static int32_t param319_init[] = {0};
  model->setOperandValue(param319, param319_init, sizeof(int32_t) * 1);
  static float dummy284_init[] = {0.0f};
  model->setOperandValue(dummy284, dummy284_init, sizeof(float) * 1);
  static int32_t param320_init[] = {0};
  model->setOperandValue(param320, param320_init, sizeof(int32_t) * 1);
  static float dummy285_init[] = {0.0f};
  model->setOperandValue(dummy285, dummy285_init, sizeof(float) * 1);
  static int32_t param321_init[] = {0};
  model->setOperandValue(param321, param321_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy283, param319}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy284, param320}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy285, param321}, {op34});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp, op24_tmp, op34_tmp},
    {op44});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 6, 6}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type41);
  auto op24 = model->addOperand(&type9);
  auto op34 = model->addOperand(&type10);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type34);
  // Phase 2, operations
  static uint8_t op24_init[] = {8, 16, 24, 32};
  model->setOperandValue(op24, op24_init, sizeof(uint8_t) * 4);
  static int32_t op34_init[] = {0};
  model->setOperandValue(op34, op34_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 6, 6}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type41);
  auto op24 = model->addOperand(&type9);
  auto op34 = model->addOperand(&type10);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type11);
  // Phase 2, operations
  static uint8_t op24_init[] = {8, 16, 24, 32};
  model->setOperandValue(op24, op24_init, sizeof(uint8_t) * 4);
  static int32_t op34_init[] = {0};
  model->setOperandValue(op34, op34_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 6, 6}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type41);
  auto op24 = model->addOperand(&type9);
  auto op34 = model->addOperand(&type10);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type34);
  auto op14_tmp = model->addOperand(&type41);
  auto dummy286 = model->addOperand(&type12);
  auto param322 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op24_init[] = {8, 16, 24, 32};
  model->setOperandValue(op24, op24_init, sizeof(uint8_t) * 4);
  static int32_t op34_init[] = {0};
  model->setOperandValue(op34, op34_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static uint8_t dummy286_init[] = {0};
  model->setOperandValue(dummy286, dummy286_init, sizeof(uint8_t) * 1);
  static int32_t param322_init[] = {0};
  model->setOperandValue(param322, param322_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy286, param322}, {op14});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 6, 6}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type41);
  auto op24 = model->addOperand(&type9);
  auto op34 = model->addOperand(&type10);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type11);
  auto op14_tmp = model->addOperand(&type41);
  auto dummy287 = model->addOperand(&type12);
  auto param323 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op24_init[] = {8, 16, 24, 32};
  model->setOperandValue(op24, op24_init, sizeof(uint8_t) * 4);
  static int32_t op34_init[] = {0};
  model->setOperandValue(op34, op34_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static uint8_t dummy287_init[] = {0};
  model->setOperandValue(dummy287, dummy287_init, sizeof(uint8_t) * 1);
  static int32_t param323_init[] = {0};
  model->setOperandValue(param323, param323_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy287, param323}, {op14});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 6, 6}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type41);
  auto op24 = model->addOperand(&type9);
  auto op34 = model->addOperand(&type10);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 6, 6}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type41);
  auto op24 = model->addOperand(&type9);
  auto op34 = model->addOperand(&type10);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 6, 6}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type41);
  auto op24 = model->addOperand(&type9);
  auto op34 = model->addOperand(&type10);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type34);
  auto op14_tmp = model->addOperand(&type41);
  auto dummy288 = model->addOperand(&type12);
  auto param324 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type9);
  auto dummy289 = model->addOperand(&type13);
  auto param325 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static uint8_t dummy288_init[] = {0};
  model->setOperandValue(dummy288, dummy288_init, sizeof(uint8_t) * 1);
  static int32_t param324_init[] = {0};
  model->setOperandValue(param324, param324_init, sizeof(int32_t) * 1);
  static uint8_t dummy289_init[] = {0};
  model->setOperandValue(dummy289, dummy289_init, sizeof(uint8_t) * 1);
  static int32_t param325_init[] = {0};
  model->setOperandValue(param325, param325_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy288, param324}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy289, param325}, {op24});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op34, op14_tmp, op24_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {1}, 0.0625f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.125f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1}, 0.125f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1, 1, 6, 6}, 0.5f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.125f, 0);
  // Phase 1, operands
  auto op14 = model->addOperand(&type41);
  auto op24 = model->addOperand(&type9);
  auto op34 = model->addOperand(&type10);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type11);
  auto op14_tmp = model->addOperand(&type41);
  auto dummy290 = model->addOperand(&type12);
  auto param326 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type9);
  auto dummy291 = model->addOperand(&type13);
  auto param327 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static uint8_t dummy290_init[] = {0};
  model->setOperandValue(dummy290, dummy290_init, sizeof(uint8_t) * 1);
  static int32_t param326_init[] = {0};
  model->setOperandValue(param326, param326_init, sizeof(int32_t) * 1);
  static uint8_t dummy291_init[] = {0};
  model->setOperandValue(dummy291, dummy291_init, sizeof(uint8_t) * 1);
  static int32_t param327_init[] = {0};
  model->setOperandValue(param327, param327_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy290, param326}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy291, param327}, {op24});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op34, op14_tmp, op24_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type4(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT16, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type42);
  auto op24 = model->addOperand(&type15);
  auto op34 = model->addOperand(&type16);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type25);
  // Phase 2, operations
  static _Float16 op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(_Float16) * 4);
  static _Float16 op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(_Float16) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT16, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type42);
  auto op24 = model->addOperand(&type15);
  auto op34 = model->addOperand(&type16);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type17);
  // Phase 2, operations
  static _Float16 op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(_Float16) * 4);
  static _Float16 op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(_Float16) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type4(Type::INT32, {});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type43);
  auto op24 = model->addOperand(&type15);
  auto op34 = model->addOperand(&type16);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type25);
  auto op14_tmp = model->addOperand(&type43);
  auto dummy292 = model->addOperand(&type19);
  auto param328 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(_Float16) * 4);
  static _Float16 op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(_Float16) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static _Float16 dummy292_init[] = {0.0f};
  model->setOperandValue(dummy292, dummy292_init, sizeof(_Float16) * 1);
  static int32_t param328_init[] = {0};
  model->setOperandValue(param328, param328_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy292, param328}, {op14});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::INT32, {});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type43);
  auto op24 = model->addOperand(&type15);
  auto op34 = model->addOperand(&type16);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type17);
  auto op14_tmp = model->addOperand(&type43);
  auto dummy293 = model->addOperand(&type19);
  auto param329 = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 op24_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op24, op24_init, sizeof(_Float16) * 4);
  static _Float16 op34_init[] = {0.0f};
  model->setOperandValue(op34, op34_init, sizeof(_Float16) * 1);
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static _Float16 dummy293_init[] = {0.0f};
  model->setOperandValue(dummy293, dummy293_init, sizeof(_Float16) * 1);
  static int32_t param329_init[] = {0};
  model->setOperandValue(param329, param329_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy293, param329}, {op14});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type4(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT16, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type42);
  auto op24 = model->addOperand(&type20);
  auto op34 = model->addOperand(&type19);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type4(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT16, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type42);
  auto op24 = model->addOperand(&type20);
  auto op34 = model->addOperand(&type19);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14, op24, op34},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type4(Type::INT32, {});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type43);
  auto op24 = model->addOperand(&type20);
  auto op34 = model->addOperand(&type19);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type25);
  auto op14_tmp = model->addOperand(&type43);
  auto dummy294 = model->addOperand(&type19);
  auto param330 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type20);
  auto dummy295 = model->addOperand(&type19);
  auto param331 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type19);
  auto dummy296 = model->addOperand(&type19);
  auto param332 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static _Float16 dummy294_init[] = {0.0f};
  model->setOperandValue(dummy294, dummy294_init, sizeof(_Float16) * 1);
  static int32_t param330_init[] = {0};
  model->setOperandValue(param330, param330_init, sizeof(int32_t) * 1);
  static _Float16 dummy295_init[] = {0.0f};
  model->setOperandValue(dummy295, dummy295_init, sizeof(_Float16) * 1);
  static int32_t param331_init[] = {0};
  model->setOperandValue(param331, param331_init, sizeof(int32_t) * 1);
  static _Float16 dummy296_init[] = {0.0f};
  model->setOperandValue(dummy296, dummy296_init, sizeof(_Float16) * 1);
  static int32_t param332_init[] = {0};
  model->setOperandValue(param332, param332_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy294, param330}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy295, param331}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy296, param332}, {op34});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp, op24_tmp, op34_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
namespace generated_tests::conv2d_dilation {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type19(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type4(Type::INT32, {});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 6, 6});
  // Phase 1, operands
  auto op14 = model->addOperand(&type43);
  auto op24 = model->addOperand(&type20);
  auto op34 = model->addOperand(&type19);
  auto param30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto param34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type4);
  auto op44 = model->addOperand(&type17);
  auto op14_tmp = model->addOperand(&type43);
  auto dummy297 = model->addOperand(&type19);
  auto param333 = model->addOperand(&type4);
  auto op24_tmp = model->addOperand(&type20);
  auto dummy298 = model->addOperand(&type19);
  auto param334 = model->addOperand(&type4);
  auto op34_tmp = model->addOperand(&type19);
  auto dummy299 = model->addOperand(&type19);
  auto param335 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param30_init[] = {1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param34_init[] = {3};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {3};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static _Float16 dummy297_init[] = {0.0f};
  model->setOperandValue(dummy297, dummy297_init, sizeof(_Float16) * 1);
  static int32_t param333_init[] = {0};
  model->setOperandValue(param333, param333_init, sizeof(int32_t) * 1);
  static _Float16 dummy298_init[] = {0.0f};
  model->setOperandValue(dummy298, dummy298_init, sizeof(_Float16) * 1);
  static int32_t param334_init[] = {0};
  model->setOperandValue(param334, param334_init, sizeof(int32_t) * 1);
  static _Float16 dummy299_init[] = {0.0f};
  model->setOperandValue(dummy299, dummy299_init, sizeof(_Float16) * 1);
  static int32_t param335_init[] = {0};
  model->setOperandValue(param335, param335_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op14_tmp, dummy297, param333}, {op14});
  model->addOperation(ANEURALNETWORKS_ADD, {op24_tmp, dummy298, param334}, {op24});
  model->addOperation(ANEURALNETWORKS_ADD, {op34_tmp, dummy299, param335}, {op34});
  model->addOperation(ANEURALNETWORKS_CONV_2D, {op14, op24, op34, param30, param31, param32, param33, layout, param34, param35}, {op44});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op14_tmp, op24_tmp, op34_tmp},
    {op44});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::conv2d_dilation
