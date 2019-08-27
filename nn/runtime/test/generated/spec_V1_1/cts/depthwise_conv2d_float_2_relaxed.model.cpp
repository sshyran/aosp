// Generated from depthwise_conv2d_float_2_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::depthwise_conv2d_float_2_relaxed {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 3, 2, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {4});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2, 1, 4});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto pad_valid = model->addOperand(&type3);
  auto stride = model->addOperand(&type3);
  auto channelMultiplier = model->addOperand(&type3);
  auto act_none = model->addOperand(&type3);
  auto op4 = model->addOperand(&type4);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 2.0f, 3.0f, 4.0f, -9.0f, 10.0f, -11.0f, 12.0f, 5.0f, 6.0f, 7.0f, 8.0f, 13.0f, -14.0f, 15.0f, -16.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 16);
  static float op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 4);
  static int32_t pad_valid_init[] = {2};
  model->setOperandValue(pad_valid, pad_valid_init, sizeof(int32_t) * 1);
  static int32_t stride_init[] = {1};
  model->setOperandValue(stride, stride_init, sizeof(int32_t) * 1);
  static int32_t channelMultiplier_init[] = {2};
  model->setOperandValue(channelMultiplier, channelMultiplier_init, sizeof(int32_t) * 1);
  static int32_t act_none_init[] = {0};
  model->setOperandValue(act_none, act_none_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, pad_valid, stride, stride, channelMultiplier, act_none}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_float_2_relaxed
namespace generated_tests::depthwise_conv2d_float_2_relaxed {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 3, 2, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {4});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto pad_valid = model->addOperand(&type3);
  auto stride = model->addOperand(&type3);
  auto channelMultiplier = model->addOperand(&type3);
  auto act_none = model->addOperand(&type3);
  auto op4 = model->addOperand(&type5);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 2.0f, 3.0f, 4.0f, -9.0f, 10.0f, -11.0f, 12.0f, 5.0f, 6.0f, 7.0f, 8.0f, 13.0f, -14.0f, 15.0f, -16.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 16);
  static float op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 4);
  static int32_t pad_valid_init[] = {2};
  model->setOperandValue(pad_valid, pad_valid_init, sizeof(int32_t) * 1);
  static int32_t stride_init[] = {1};
  model->setOperandValue(stride, stride_init, sizeof(int32_t) * 1);
  static int32_t channelMultiplier_init[] = {2};
  model->setOperandValue(channelMultiplier, channelMultiplier_init, sizeof(int32_t) * 1);
  static int32_t act_none_init[] = {0};
  model->setOperandValue(act_none, act_none_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, pad_valid, stride, stride, channelMultiplier, act_none}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_float_2_relaxed
namespace generated_tests::depthwise_conv2d_float_2_relaxed {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 3, 2, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {4});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2, 1, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto pad_valid = model->addOperand(&type3);
  auto stride = model->addOperand(&type3);
  auto channelMultiplier = model->addOperand(&type3);
  auto act_none = model->addOperand(&type3);
  auto op4 = model->addOperand(&type4);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type6);
  auto param = model->addOperand(&type3);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 2.0f, 3.0f, 4.0f, -9.0f, 10.0f, -11.0f, 12.0f, 5.0f, 6.0f, 7.0f, 8.0f, 13.0f, -14.0f, 15.0f, -16.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 16);
  static float op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 4);
  static int32_t pad_valid_init[] = {2};
  model->setOperandValue(pad_valid, pad_valid_init, sizeof(int32_t) * 1);
  static int32_t stride_init[] = {1};
  model->setOperandValue(stride, stride_init, sizeof(int32_t) * 1);
  static int32_t channelMultiplier_init[] = {2};
  model->setOperandValue(channelMultiplier, channelMultiplier_init, sizeof(int32_t) * 1);
  static int32_t act_none_init[] = {0};
  model->setOperandValue(act_none, act_none_init, sizeof(int32_t) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, pad_valid, stride, stride, channelMultiplier, act_none}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_float_2_relaxed
namespace generated_tests::depthwise_conv2d_float_2_relaxed {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 3, 2, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {4});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto pad_valid = model->addOperand(&type3);
  auto stride = model->addOperand(&type3);
  auto channelMultiplier = model->addOperand(&type3);
  auto act_none = model->addOperand(&type3);
  auto op4 = model->addOperand(&type5);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type6);
  auto param1 = model->addOperand(&type3);
  // Phase 2, operations
  static float op2_init[] = {1.0f, 2.0f, 3.0f, 4.0f, -9.0f, 10.0f, -11.0f, 12.0f, 5.0f, 6.0f, 7.0f, 8.0f, 13.0f, -14.0f, 15.0f, -16.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 16);
  static float op3_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op3, op3_init, sizeof(float) * 4);
  static int32_t pad_valid_init[] = {2};
  model->setOperandValue(pad_valid, pad_valid_init, sizeof(int32_t) * 1);
  static int32_t stride_init[] = {1};
  model->setOperandValue(stride, stride_init, sizeof(int32_t) * 1);
  static int32_t channelMultiplier_init[] = {2};
  model->setOperandValue(channelMultiplier, channelMultiplier_init, sizeof(int32_t) * 1);
  static int32_t act_none_init[] = {0};
  model->setOperandValue(act_none, act_none_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param1}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, pad_valid, stride, stride, channelMultiplier, act_none}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_float_2_relaxed
namespace generated_tests::depthwise_conv2d_float_2_relaxed {

void CreateModel_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 3, 2, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {4});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2, 1, 4});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto pad_valid = model->addOperand(&type3);
  auto stride = model->addOperand(&type3);
  auto channelMultiplier = model->addOperand(&type3);
  auto act_none = model->addOperand(&type3);
  auto op4 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t pad_valid_init[] = {2};
  model->setOperandValue(pad_valid, pad_valid_init, sizeof(int32_t) * 1);
  static int32_t stride_init[] = {1};
  model->setOperandValue(stride, stride_init, sizeof(int32_t) * 1);
  static int32_t channelMultiplier_init[] = {2};
  model->setOperandValue(channelMultiplier, channelMultiplier_init, sizeof(int32_t) * 1);
  static int32_t act_none_init[] = {0};
  model->setOperandValue(act_none, act_none_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, pad_valid, stride, stride, channelMultiplier, act_none}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_float_2_relaxed
namespace generated_tests::depthwise_conv2d_float_2_relaxed {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 3, 2, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {4});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto pad_valid = model->addOperand(&type3);
  auto stride = model->addOperand(&type3);
  auto channelMultiplier = model->addOperand(&type3);
  auto act_none = model->addOperand(&type3);
  auto op4 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t pad_valid_init[] = {2};
  model->setOperandValue(pad_valid, pad_valid_init, sizeof(int32_t) * 1);
  static int32_t stride_init[] = {1};
  model->setOperandValue(stride, stride_init, sizeof(int32_t) * 1);
  static int32_t channelMultiplier_init[] = {2};
  model->setOperandValue(channelMultiplier, channelMultiplier_init, sizeof(int32_t) * 1);
  static int32_t act_none_init[] = {0};
  model->setOperandValue(act_none, act_none_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, pad_valid, stride, stride, channelMultiplier, act_none}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, op3},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_float_2_relaxed
namespace generated_tests::depthwise_conv2d_float_2_relaxed {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 3, 2, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {4});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2, 1, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto pad_valid = model->addOperand(&type3);
  auto stride = model->addOperand(&type3);
  auto channelMultiplier = model->addOperand(&type3);
  auto act_none = model->addOperand(&type3);
  auto op4 = model->addOperand(&type4);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type6);
  auto param2 = model->addOperand(&type3);
  auto op2_tmp = model->addOperand(&type1);
  auto dummy3 = model->addOperand(&type6);
  auto param3 = model->addOperand(&type3);
  auto op3_tmp = model->addOperand(&type2);
  auto dummy4 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t pad_valid_init[] = {2};
  model->setOperandValue(pad_valid, pad_valid_init, sizeof(int32_t) * 1);
  static int32_t stride_init[] = {1};
  model->setOperandValue(stride, stride_init, sizeof(int32_t) * 1);
  static int32_t channelMultiplier_init[] = {2};
  model->setOperandValue(channelMultiplier, channelMultiplier_init, sizeof(int32_t) * 1);
  static int32_t act_none_init[] = {0};
  model->setOperandValue(act_none, act_none_init, sizeof(int32_t) * 1);
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
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy2, param2}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy3, param3}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy4, param4}, {op3});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, pad_valid, stride, stride, channelMultiplier, act_none}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, op3_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_float_2_relaxed
namespace generated_tests::depthwise_conv2d_float_2_relaxed {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 3, 2, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {4});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto pad_valid = model->addOperand(&type3);
  auto stride = model->addOperand(&type3);
  auto channelMultiplier = model->addOperand(&type3);
  auto act_none = model->addOperand(&type3);
  auto op4 = model->addOperand(&type5);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy5 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type3);
  auto op2_tmp = model->addOperand(&type1);
  auto dummy6 = model->addOperand(&type6);
  auto param6 = model->addOperand(&type3);
  auto op3_tmp = model->addOperand(&type2);
  auto dummy7 = model->addOperand(&type6);
  auto param7 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t pad_valid_init[] = {2};
  model->setOperandValue(pad_valid, pad_valid_init, sizeof(int32_t) * 1);
  static int32_t stride_init[] = {1};
  model->setOperandValue(stride, stride_init, sizeof(int32_t) * 1);
  static int32_t channelMultiplier_init[] = {2};
  model->setOperandValue(channelMultiplier, channelMultiplier_init, sizeof(int32_t) * 1);
  static int32_t act_none_init[] = {0};
  model->setOperandValue(act_none, act_none_init, sizeof(int32_t) * 1);
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
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy5, param5}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy6, param6}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op3_tmp, dummy7, param7}, {op3});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op1, op2, op3, pad_valid, stride, stride, channelMultiplier, act_none}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, op3_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv2d_float_2_relaxed
