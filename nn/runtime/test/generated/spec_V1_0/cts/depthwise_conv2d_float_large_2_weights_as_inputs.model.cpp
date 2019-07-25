// Generated from depthwise_conv2d_float_large_2_weights_as_inputs.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::depthwise_conv2d_float_large_2_weights_as_inputs {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {4});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 1, 1, 4});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type1);
  auto pad0 = model->addOperand(&type2);
  auto stride = model->addOperand(&type2);
  auto channelMultiplier = model->addOperand(&type2);
  auto act = model->addOperand(&type2);
  auto op4 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t pad0_init[] = {0};
  model->setOperandValue(pad0, pad0_init, sizeof(int32_t) * 1);
  static int32_t stride_init[] = {1};
  model->setOperandValue(stride, stride_init, sizeof(int32_t) * 1);
  static int32_t channelMultiplier_init[] = {1};
  model->setOperandValue(channelMultiplier, channelMultiplier_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, pad0, pad0, pad0, pad0, stride, stride, channelMultiplier, act}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_float_large_2_weights_as_inputs
namespace generated_tests::depthwise_conv2d_float_large_2_weights_as_inputs {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {4});
  OperandType type2(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type1);
  auto pad0 = model->addOperand(&type2);
  auto stride = model->addOperand(&type2);
  auto channelMultiplier = model->addOperand(&type2);
  auto act = model->addOperand(&type2);
  auto op4 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t pad0_init[] = {0};
  model->setOperandValue(pad0, pad0_init, sizeof(int32_t) * 1);
  static int32_t stride_init[] = {1};
  model->setOperandValue(stride, stride_init, sizeof(int32_t) * 1);
  static int32_t channelMultiplier_init[] = {1};
  model->setOperandValue(channelMultiplier, channelMultiplier_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, pad0, pad0, pad0, pad0, stride, stride, channelMultiplier, act}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_float_large_2_weights_as_inputs
namespace generated_tests::depthwise_conv2d_float_large_2_weights_as_inputs {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {4});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 1, 1, 4});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type1);
  auto pad0 = model->addOperand(&type2);
  auto stride = model->addOperand(&type2);
  auto channelMultiplier = model->addOperand(&type2);
  auto act = model->addOperand(&type2);
  auto op4 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type5);
  auto param = model->addOperand(&type2);
  auto op2_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type2);
  auto op3_tmp = model->addOperand(&type1);
  auto dummy2 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t pad0_init[] = {0};
  model->setOperandValue(pad0, pad0_init, sizeof(int32_t) * 1);
  static int32_t stride_init[] = {1};
  model->setOperandValue(stride, stride_init, sizeof(int32_t) * 1);
  static int32_t channelMultiplier_init[] = {1};
  model->setOperandValue(channelMultiplier, channelMultiplier_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
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
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy1, param1}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy2, param2}, {op3});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, pad0, pad0, pad0, pad0, stride, stride, channelMultiplier, act}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, op3_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_float_large_2_weights_as_inputs
namespace generated_tests::depthwise_conv2d_float_large_2_weights_as_inputs {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {4});
  OperandType type2(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type1);
  auto pad0 = model->addOperand(&type2);
  auto stride = model->addOperand(&type2);
  auto channelMultiplier = model->addOperand(&type2);
  auto act = model->addOperand(&type2);
  auto op4 = model->addOperand(&type4);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type2);
  auto op2_tmp = model->addOperand(&type0);
  auto dummy4 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type2);
  auto op3_tmp = model->addOperand(&type1);
  auto dummy5 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t pad0_init[] = {0};
  model->setOperandValue(pad0, pad0_init, sizeof(int32_t) * 1);
  static int32_t stride_init[] = {1};
  model->setOperandValue(stride, stride_init, sizeof(int32_t) * 1);
  static int32_t channelMultiplier_init[] = {1};
  model->setOperandValue(channelMultiplier, channelMultiplier_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
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
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy3, param3}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy4, param4}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy5, param5}, {op3});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, pad0, pad0, pad0, pad0, stride, stride, channelMultiplier, act}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, op3_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_float_large_2_weights_as_inputs
