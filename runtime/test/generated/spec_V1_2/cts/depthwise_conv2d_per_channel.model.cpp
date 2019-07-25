// Generated from depthwise_conv2d_per_channel.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_same(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 0);
  OperandType type1(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 2}, SymmPerChannelQuantParams({0.5f, 0.5f},3));
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 2}, 1.0f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type3);
  // Phase 2, operations
  static int8_t op2_init[] = {2, 4, 2, 0, 2, 2, 2, 0};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 8);
  static int32_t op3_init[] = {0, 0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
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
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_same(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_same_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 0);
  OperandType type1(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 2}, SymmPerChannelQuantParams({0.5f, 0.5f},3));
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 0);
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type11);
  // Phase 2, operations
  static int8_t op2_init[] = {2, 4, 2, 0, 2, 2, 2, 0};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 8);
  static int32_t op3_init[] = {0, 0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
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
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_same_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_same_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 0);
  OperandType type1(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 2}, SymmPerChannelQuantParams({0.5f, 0.5f},3));
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 2}, 1.0f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type12);
  auto param24 = model->addOperand(&type4);
  // Phase 2, operations
  static int8_t op2_init[] = {2, 4, 2, 0, 2, 2, 2, 0};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 8);
  static int32_t op3_init[] = {0, 0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
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
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static uint8_t dummy_init[] = {0};
  model->setOperandValue(dummy, dummy_init, sizeof(uint8_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param24}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_same_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_same_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 0);
  OperandType type1(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 2}, SymmPerChannelQuantParams({0.5f, 0.5f},3));
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type12);
  auto param25 = model->addOperand(&type4);
  // Phase 2, operations
  static int8_t op2_init[] = {2, 4, 2, 0, 2, 2, 2, 0};
  model->setOperandValue(op2, op2_init, sizeof(int8_t) * 8);
  static int32_t op3_init[] = {0, 0};
  model->setOperandValue(op3, op3_init, sizeof(int32_t) * 2);
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
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static uint8_t dummy1_init[] = {0};
  model->setOperandValue(dummy1, dummy1_init, sizeof(uint8_t) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param25}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_same_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_same_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 0);
  OperandType type13(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 2}, SymmPerChannelQuantParams({0.5f, 0.5f},3));
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 2}, 1.0f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type13);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type3);
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
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored_same_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_same_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 0);
  OperandType type14(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 2}, SymmPerChannelQuantParams({0.5f, 0.5f},3));
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type14);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  assert(model->isValid());
}

bool is_ignored_same_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_same_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type15(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 2}, SymmPerChannelQuantParams({0.5f, 0.5f},3));
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 2}, 1.0f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type15);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type12);
  auto param26 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static uint8_t dummy2_init[] = {0};
  model->setOperandValue(dummy2, dummy2_init, sizeof(uint8_t) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy2, param26}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2, op3, op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_same_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_same_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.5f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 0);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type16(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 2}, SymmPerChannelQuantParams({0.5f, 0.5f},3));
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type16);
  auto op3 = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto op4 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type12);
  auto param27 = model->addOperand(&type4);
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
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static uint8_t dummy3_init[] = {0};
  model->setOperandValue(dummy3, dummy3_init, sizeof(uint8_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy3, param27}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, param, param1, param2, param3, param4, param5, param6, param7}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2, op3, op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_same_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_different(Model *model) {
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type6(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 1.0f, 128);
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type6);
  auto op31 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type8);
  // Phase 2, operations
  static int8_t op21_init[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  model->setOperandValue(op21, op21_init, sizeof(int8_t) * 16);
  static int32_t op31_init[] = {4, 4, 4, 4};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {2};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param8, param9, param10, param11, param12, param13, param14, param15}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_different(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_different_dynamic_output_shape(Model *model) {
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type6(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type7(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type6);
  auto op31 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type17);
  // Phase 2, operations
  static int8_t op21_init[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  model->setOperandValue(op21, op21_init, sizeof(int8_t) * 16);
  static int32_t op31_init[] = {4, 4, 4, 4};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {2};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param8, param9, param10, param11, param12, param13, param14, param15}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_different_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_different_all_inputs_as_internal(Model *model) {
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type6(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 1.0f, 128);
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type6);
  auto op31 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type8);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy4 = model->addOperand(&type18);
  auto param28 = model->addOperand(&type4);
  // Phase 2, operations
  static int8_t op21_init[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  model->setOperandValue(op21, op21_init, sizeof(int8_t) * 16);
  static int32_t op31_init[] = {4, 4, 4, 4};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {2};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static uint8_t dummy4_init[] = {128};
  model->setOperandValue(dummy4, dummy4_init, sizeof(uint8_t) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy4, param28}, {op11});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param8, param9, param10, param11, param12, param13, param14, param15}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_different_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_different_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type6(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type7(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type6);
  auto op31 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type17);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy5 = model->addOperand(&type18);
  auto param29 = model->addOperand(&type4);
  // Phase 2, operations
  static int8_t op21_init[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  model->setOperandValue(op21, op21_init, sizeof(int8_t) * 16);
  static int32_t op31_init[] = {4, 4, 4, 4};
  model->setOperandValue(op31, op31_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {2};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static uint8_t dummy5_init[] = {128};
  model->setOperandValue(dummy5, dummy5_init, sizeof(uint8_t) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy5, param29}, {op11});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param8, param9, param10, param11, param12, param13, param14, param15}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_different_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_different_all_tensors_as_inputs(Model *model) {
  OperandType type19(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 1.0f, 128);
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type19);
  auto op31 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {2};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param8, param9, param10, param11, param12, param13, param14, param15}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

bool is_ignored_different_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_different_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type20(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type7(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type20);
  auto op31 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {2};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param8, param9, param10, param11, param12, param13, param14, param15}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21, op31},
    {op41});
  assert(model->isValid());
}

bool is_ignored_different_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_different_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type21(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 1.0f, 128);
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type21);
  auto op31 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type8);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy6 = model->addOperand(&type18);
  auto param30 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {2};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static uint8_t dummy6_init[] = {128};
  model->setOperandValue(dummy6, dummy6_init, sizeof(uint8_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy6, param30}, {op11});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param8, param9, param10, param11, param12, param13, param14, param15}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op21, op31, op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_different_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_different_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type22(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type7(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto op21 = model->addOperand(&type22);
  auto op31 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type4);
  auto op41 = model->addOperand(&type17);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy7 = model->addOperand(&type18);
  auto param31 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {2};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static uint8_t dummy7_init[] = {128};
  model->setOperandValue(dummy7, dummy7_init, sizeof(uint8_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy7, param31}, {op11});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op11, op21, op31, param8, param9, param10, param11, param12, param13, param14, param15}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op21, op31, op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_different_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_layout_nhwc(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 1.0f, 128);
  OperandType type9(Type::BOOL, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type5);
  auto op22 = model->addOperand(&type10);
  auto op32 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type9);
  auto op42 = model->addOperand(&type8);
  // Phase 2, operations
  static int8_t op22_init[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  model->setOperandValue(op22, op22_init, sizeof(int8_t) * 16);
  static int32_t op32_init[] = {4, 4, 4, 4};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 4);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_layout_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_layout_nhwc_dynamic_output_shape(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type9(Type::BOOL, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type5);
  auto op22 = model->addOperand(&type10);
  auto op32 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type9);
  auto op42 = model->addOperand(&type17);
  // Phase 2, operations
  static int8_t op22_init[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  model->setOperandValue(op22, op22_init, sizeof(int8_t) * 16);
  static int32_t op32_init[] = {4, 4, 4, 4};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 4);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_layout_nhwc_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_layout_nhwc_all_inputs_as_internal(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 1.0f, 128);
  OperandType type9(Type::BOOL, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type5);
  auto op22 = model->addOperand(&type10);
  auto op32 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type9);
  auto op42 = model->addOperand(&type8);
  auto op12_tmp = model->addOperand(&type5);
  auto dummy8 = model->addOperand(&type18);
  auto param32 = model->addOperand(&type4);
  // Phase 2, operations
  static int8_t op22_init[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  model->setOperandValue(op22, op22_init, sizeof(int8_t) * 16);
  static int32_t op32_init[] = {4, 4, 4, 4};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 4);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy8_init[] = {128};
  model->setOperandValue(dummy8, dummy8_init, sizeof(uint8_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy8, param32}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_layout_nhwc_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_layout_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type9(Type::BOOL, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type5);
  auto op22 = model->addOperand(&type10);
  auto op32 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type9);
  auto op42 = model->addOperand(&type17);
  auto op12_tmp = model->addOperand(&type5);
  auto dummy9 = model->addOperand(&type18);
  auto param33 = model->addOperand(&type4);
  // Phase 2, operations
  static int8_t op22_init[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  model->setOperandValue(op22, op22_init, sizeof(int8_t) * 16);
  static int32_t op32_init[] = {4, 4, 4, 4};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 4);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy9_init[] = {128};
  model->setOperandValue(dummy9, dummy9_init, sizeof(uint8_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy9, param33}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_layout_nhwc_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_layout_nhwc_all_tensors_as_inputs(Model *model) {
  OperandType type23(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 1.0f, 128);
  OperandType type9(Type::BOOL, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type5);
  auto op22 = model->addOperand(&type23);
  auto op32 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type9);
  auto op42 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_layout_nhwc_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_layout_nhwc_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type24(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type9(Type::BOOL, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type5);
  auto op22 = model->addOperand(&type24);
  auto op32 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type9);
  auto op42 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_layout_nhwc_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type25(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 1.0f, 128);
  OperandType type9(Type::BOOL, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type5);
  auto op22 = model->addOperand(&type25);
  auto op32 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type9);
  auto op42 = model->addOperand(&type8);
  auto op12_tmp = model->addOperand(&type5);
  auto dummy10 = model->addOperand(&type18);
  auto param34 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy10_init[] = {128};
  model->setOperandValue(dummy10, dummy10_init, sizeof(uint8_t) * 1);
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy10, param34}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op22, op32, op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type26(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.5f, 128);
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type9(Type::BOOL, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type5);
  auto op22 = model->addOperand(&type26);
  auto op32 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type9);
  auto op42 = model->addOperand(&type17);
  auto op12_tmp = model->addOperand(&type5);
  auto dummy11 = model->addOperand(&type18);
  auto param35 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy11_init[] = {128};
  model->setOperandValue(dummy11, dummy11_init, sizeof(uint8_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy11, param35}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op22, op32, op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_layout_nchw(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 128);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 2}, 1.0f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type9(Type::BOOL, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type27);
  auto op22 = model->addOperand(&type10);
  auto op32 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type9);
  auto op42 = model->addOperand(&type28);
  // Phase 2, operations
  static int8_t op22_init[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  model->setOperandValue(op22, op22_init, sizeof(int8_t) * 16);
  static int32_t op32_init[] = {4, 4, 4, 4};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 4);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_layout_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_layout_nchw_dynamic_output_shape(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type9(Type::BOOL, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type27);
  auto op22 = model->addOperand(&type10);
  auto op32 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type9);
  auto op42 = model->addOperand(&type17);
  // Phase 2, operations
  static int8_t op22_init[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  model->setOperandValue(op22, op22_init, sizeof(int8_t) * 16);
  static int32_t op32_init[] = {4, 4, 4, 4};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 4);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_layout_nchw_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_layout_nchw_all_inputs_as_internal(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 128);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 2}, 1.0f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type9(Type::BOOL, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type27);
  auto op22 = model->addOperand(&type10);
  auto op32 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type9);
  auto op42 = model->addOperand(&type28);
  auto op12_tmp = model->addOperand(&type27);
  auto dummy12 = model->addOperand(&type18);
  auto param36 = model->addOperand(&type4);
  // Phase 2, operations
  static int8_t op22_init[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  model->setOperandValue(op22, op22_init, sizeof(int8_t) * 16);
  static int32_t op32_init[] = {4, 4, 4, 4};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 4);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy12_init[] = {128};
  model->setOperandValue(dummy12, dummy12_init, sizeof(uint8_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy12, param36}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_layout_nchw_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_layout_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 128);
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type9(Type::BOOL, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type27);
  auto op22 = model->addOperand(&type10);
  auto op32 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type9);
  auto op42 = model->addOperand(&type17);
  auto op12_tmp = model->addOperand(&type27);
  auto dummy13 = model->addOperand(&type18);
  auto param37 = model->addOperand(&type4);
  // Phase 2, operations
  static int8_t op22_init[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  model->setOperandValue(op22, op22_init, sizeof(int8_t) * 16);
  static int32_t op32_init[] = {4, 4, 4, 4};
  model->setOperandValue(op32, op32_init, sizeof(int32_t) * 4);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy13_init[] = {128};
  model->setOperandValue(dummy13, dummy13_init, sizeof(uint8_t) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy13, param37}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_layout_nchw_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_layout_nchw_all_tensors_as_inputs(Model *model) {
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 128);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 2}, 1.0f, 128);
  OperandType type29(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type9(Type::BOOL, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type27);
  auto op22 = model->addOperand(&type29);
  auto op32 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type9);
  auto op42 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_layout_nchw_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_layout_nchw_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 128);
  OperandType type30(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type9(Type::BOOL, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type27);
  auto op22 = model->addOperand(&type30);
  auto op32 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type9);
  auto op42 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, op22, op32},
    {op42});
  assert(model->isValid());
}

bool is_ignored_layout_nchw_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 128);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 2}, 1.0f, 128);
  OperandType type31(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type9(Type::BOOL, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type27);
  auto op22 = model->addOperand(&type31);
  auto op32 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type9);
  auto op42 = model->addOperand(&type28);
  auto op12_tmp = model->addOperand(&type27);
  auto dummy14 = model->addOperand(&type18);
  auto param38 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy14_init[] = {128};
  model->setOperandValue(dummy14, dummy14_init, sizeof(uint8_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy14, param38}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op22, op32, op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
namespace generated_tests::depthwise_conv2d_per_channel {

void CreateModel_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.5f, 128);
  OperandType type32(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {1, 2, 2, 4}, SymmPerChannelQuantParams({1.0f, 0.5f, 1.0f, 0.5f},3));
  OperandType type4(Type::INT32, {});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type9(Type::BOOL, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type27);
  auto op22 = model->addOperand(&type32);
  auto op32 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type4);
  auto layout = model->addOperand(&type9);
  auto op42 = model->addOperand(&type17);
  auto op12_tmp = model->addOperand(&type27);
  auto dummy15 = model->addOperand(&type18);
  auto param39 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {1};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy15_init[] = {128};
  model->setOperandValue(dummy15, dummy15_init, sizeof(uint8_t) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy15, param39}, {op12});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op12, op22, op32, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op22, op32, op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_per_channel
