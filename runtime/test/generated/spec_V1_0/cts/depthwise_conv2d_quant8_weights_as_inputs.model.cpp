// Generated from depthwise_conv2d_quant8_weights_as_inputs.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::depthwise_conv2d_quant8_weights_as_inputs {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 0);
  OperandType type1(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 2}, 1.0f, 0);
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

} // namespace generated_tests::depthwise_conv2d_quant8_weights_as_inputs
namespace generated_tests::depthwise_conv2d_quant8_weights_as_inputs {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 0);
  OperandType type1(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type2(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 0);
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

} // namespace generated_tests::depthwise_conv2d_quant8_weights_as_inputs
namespace generated_tests::depthwise_conv2d_quant8_weights_as_inputs {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 0);
  OperandType type1(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 2}, 1.0f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
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
  // Phase 2, operations
  static int32_t pad0_init[] = {0};
  model->setOperandValue(pad0, pad0_init, sizeof(int32_t) * 1);
  static int32_t stride_init[] = {1};
  model->setOperandValue(stride, stride_init, sizeof(int32_t) * 1);
  static int32_t channelMultiplier_init[] = {1};
  model->setOperandValue(channelMultiplier, channelMultiplier_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static uint8_t dummy_init[] = {0};
  model->setOperandValue(dummy, dummy_init, sizeof(uint8_t) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static uint8_t dummy1_init[] = {0};
  model->setOperandValue(dummy1, dummy1_init, sizeof(uint8_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy1, param1}, {op2});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, pad0, pad0, pad0, pad0, stride, stride, channelMultiplier, act}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op3, op1_tmp, op2_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_quant8_weights_as_inputs
namespace generated_tests::depthwise_conv2d_quant8_weights_as_inputs {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 0);
  OperandType type1(Type::TENSOR_INT32, {2}, 0.25f, 0);
  OperandType type2(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
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
  auto dummy2 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type2);
  auto op2_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t pad0_init[] = {0};
  model->setOperandValue(pad0, pad0_init, sizeof(int32_t) * 1);
  static int32_t stride_init[] = {1};
  model->setOperandValue(stride, stride_init, sizeof(int32_t) * 1);
  static int32_t channelMultiplier_init[] = {1};
  model->setOperandValue(channelMultiplier, channelMultiplier_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static uint8_t dummy2_init[] = {0};
  model->setOperandValue(dummy2, dummy2_init, sizeof(uint8_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static uint8_t dummy3_init[] = {0};
  model->setOperandValue(dummy3, dummy3_init, sizeof(uint8_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy2, param2}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy3, param3}, {op2});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, pad0, pad0, pad0, pad0, stride, stride, channelMultiplier, act}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op3, op1_tmp, op2_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_quant8_weights_as_inputs
