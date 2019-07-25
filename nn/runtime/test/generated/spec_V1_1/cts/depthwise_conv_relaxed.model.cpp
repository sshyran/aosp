// Generated from depthwise_conv_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::depthwise_conv_relaxed {

void CreateModel(Model *model) {
  OperandType type0(Type::INT32, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op2 = model->addOperand(&type1);
  auto op0 = model->addOperand(&type2);
  auto op1 = model->addOperand(&type3);
  auto b4 = model->addOperand(&type0);
  auto b5 = model->addOperand(&type0);
  auto b6 = model->addOperand(&type0);
  auto b7 = model->addOperand(&type0);
  auto b8 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type1);
  // Phase 2, operations
  static float op0_init[] = {-0.966213f, -0.467474f, -0.82203f};
  model->setOperandValue(op0, op0_init, sizeof(float) * 3);
  static float op1_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op1, op1_init, sizeof(float) * 3);
  static int32_t b4_init[] = {1};
  model->setOperandValue(b4, b4_init, sizeof(int32_t) * 1);
  static int32_t b5_init[] = {1};
  model->setOperandValue(b5, b5_init, sizeof(int32_t) * 1);
  static int32_t b6_init[] = {1};
  model->setOperandValue(b6, b6_init, sizeof(int32_t) * 1);
  static int32_t b7_init[] = {1};
  model->setOperandValue(b7, b7_init, sizeof(int32_t) * 1);
  static int32_t b8_init[] = {0};
  model->setOperandValue(b8, b8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op2, op0, op1, b4, b5, b6, b7, b8}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv_relaxed
namespace generated_tests::depthwise_conv_relaxed {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::INT32, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op2 = model->addOperand(&type1);
  auto op0 = model->addOperand(&type2);
  auto op1 = model->addOperand(&type3);
  auto b4 = model->addOperand(&type0);
  auto b5 = model->addOperand(&type0);
  auto b6 = model->addOperand(&type0);
  auto b7 = model->addOperand(&type0);
  auto b8 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type4);
  // Phase 2, operations
  static float op0_init[] = {-0.966213f, -0.467474f, -0.82203f};
  model->setOperandValue(op0, op0_init, sizeof(float) * 3);
  static float op1_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op1, op1_init, sizeof(float) * 3);
  static int32_t b4_init[] = {1};
  model->setOperandValue(b4, b4_init, sizeof(int32_t) * 1);
  static int32_t b5_init[] = {1};
  model->setOperandValue(b5, b5_init, sizeof(int32_t) * 1);
  static int32_t b6_init[] = {1};
  model->setOperandValue(b6, b6_init, sizeof(int32_t) * 1);
  static int32_t b7_init[] = {1};
  model->setOperandValue(b7, b7_init, sizeof(int32_t) * 1);
  static int32_t b8_init[] = {0};
  model->setOperandValue(b8, b8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op2, op0, op1, b4, b5, b6, b7, b8}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv_relaxed
namespace generated_tests::depthwise_conv_relaxed {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::INT32, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op2 = model->addOperand(&type1);
  auto op0 = model->addOperand(&type2);
  auto op1 = model->addOperand(&type3);
  auto b4 = model->addOperand(&type0);
  auto b5 = model->addOperand(&type0);
  auto b6 = model->addOperand(&type0);
  auto b7 = model->addOperand(&type0);
  auto b8 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type1);
  auto op2_tmp = model->addOperand(&type1);
  auto dummy = model->addOperand(&type5);
  auto param = model->addOperand(&type0);
  // Phase 2, operations
  static float op0_init[] = {-0.966213f, -0.467474f, -0.82203f};
  model->setOperandValue(op0, op0_init, sizeof(float) * 3);
  static float op1_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op1, op1_init, sizeof(float) * 3);
  static int32_t b4_init[] = {1};
  model->setOperandValue(b4, b4_init, sizeof(int32_t) * 1);
  static int32_t b5_init[] = {1};
  model->setOperandValue(b5, b5_init, sizeof(int32_t) * 1);
  static int32_t b6_init[] = {1};
  model->setOperandValue(b6, b6_init, sizeof(int32_t) * 1);
  static int32_t b7_init[] = {1};
  model->setOperandValue(b7, b7_init, sizeof(int32_t) * 1);
  static int32_t b8_init[] = {0};
  model->setOperandValue(b8, b8_init, sizeof(int32_t) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy, param}, {op2});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op2, op0, op1, b4, b5, b6, b7, b8}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2_tmp},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv_relaxed
namespace generated_tests::depthwise_conv_relaxed {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::INT32, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op2 = model->addOperand(&type1);
  auto op0 = model->addOperand(&type2);
  auto op1 = model->addOperand(&type3);
  auto b4 = model->addOperand(&type0);
  auto b5 = model->addOperand(&type0);
  auto b6 = model->addOperand(&type0);
  auto b7 = model->addOperand(&type0);
  auto b8 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type0);
  // Phase 2, operations
  static float op0_init[] = {-0.966213f, -0.467474f, -0.82203f};
  model->setOperandValue(op0, op0_init, sizeof(float) * 3);
  static float op1_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op1, op1_init, sizeof(float) * 3);
  static int32_t b4_init[] = {1};
  model->setOperandValue(b4, b4_init, sizeof(int32_t) * 1);
  static int32_t b5_init[] = {1};
  model->setOperandValue(b5, b5_init, sizeof(int32_t) * 1);
  static int32_t b6_init[] = {1};
  model->setOperandValue(b6, b6_init, sizeof(int32_t) * 1);
  static int32_t b7_init[] = {1};
  model->setOperandValue(b7, b7_init, sizeof(int32_t) * 1);
  static int32_t b8_init[] = {0};
  model->setOperandValue(b8, b8_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy1, param1}, {op2});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op2, op0, op1, b4, b5, b6, b7, b8}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2_tmp},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv_relaxed
namespace generated_tests::depthwise_conv_relaxed {

void CreateModel_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::INT32, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op2 = model->addOperand(&type1);
  auto op0 = model->addOperand(&type2);
  auto op1 = model->addOperand(&type3);
  auto b4 = model->addOperand(&type0);
  auto b5 = model->addOperand(&type0);
  auto b6 = model->addOperand(&type0);
  auto b7 = model->addOperand(&type0);
  auto b8 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t b4_init[] = {1};
  model->setOperandValue(b4, b4_init, sizeof(int32_t) * 1);
  static int32_t b5_init[] = {1};
  model->setOperandValue(b5, b5_init, sizeof(int32_t) * 1);
  static int32_t b6_init[] = {1};
  model->setOperandValue(b6, b6_init, sizeof(int32_t) * 1);
  static int32_t b7_init[] = {1};
  model->setOperandValue(b7, b7_init, sizeof(int32_t) * 1);
  static int32_t b8_init[] = {0};
  model->setOperandValue(b8, b8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op2, op0, op1, b4, b5, b6, b7, b8}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2, op0, op1},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv_relaxed
namespace generated_tests::depthwise_conv_relaxed {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::INT32, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op2 = model->addOperand(&type1);
  auto op0 = model->addOperand(&type2);
  auto op1 = model->addOperand(&type3);
  auto b4 = model->addOperand(&type0);
  auto b5 = model->addOperand(&type0);
  auto b6 = model->addOperand(&type0);
  auto b7 = model->addOperand(&type0);
  auto b8 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t b4_init[] = {1};
  model->setOperandValue(b4, b4_init, sizeof(int32_t) * 1);
  static int32_t b5_init[] = {1};
  model->setOperandValue(b5, b5_init, sizeof(int32_t) * 1);
  static int32_t b6_init[] = {1};
  model->setOperandValue(b6, b6_init, sizeof(int32_t) * 1);
  static int32_t b7_init[] = {1};
  model->setOperandValue(b7, b7_init, sizeof(int32_t) * 1);
  static int32_t b8_init[] = {0};
  model->setOperandValue(b8, b8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op2, op0, op1, b4, b5, b6, b7, b8}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2, op0, op1},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv_relaxed
namespace generated_tests::depthwise_conv_relaxed {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::INT32, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op2 = model->addOperand(&type1);
  auto op0 = model->addOperand(&type2);
  auto op1 = model->addOperand(&type3);
  auto b4 = model->addOperand(&type0);
  auto b5 = model->addOperand(&type0);
  auto b6 = model->addOperand(&type0);
  auto b7 = model->addOperand(&type0);
  auto b8 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type1);
  auto op2_tmp = model->addOperand(&type1);
  auto dummy2 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type0);
  auto op0_tmp = model->addOperand(&type2);
  auto dummy3 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type0);
  auto op1_tmp = model->addOperand(&type3);
  auto dummy4 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t b4_init[] = {1};
  model->setOperandValue(b4, b4_init, sizeof(int32_t) * 1);
  static int32_t b5_init[] = {1};
  model->setOperandValue(b5, b5_init, sizeof(int32_t) * 1);
  static int32_t b6_init[] = {1};
  model->setOperandValue(b6, b6_init, sizeof(int32_t) * 1);
  static int32_t b7_init[] = {1};
  model->setOperandValue(b7, b7_init, sizeof(int32_t) * 1);
  static int32_t b8_init[] = {0};
  model->setOperandValue(b8, b8_init, sizeof(int32_t) * 1);
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
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy2, param2}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op0_tmp, dummy3, param3}, {op0});
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy4, param4}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op2, op0, op1, b4, b5, b6, b7, b8}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2_tmp, op0_tmp, op1_tmp},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv_relaxed
namespace generated_tests::depthwise_conv_relaxed {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::INT32, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op2 = model->addOperand(&type1);
  auto op0 = model->addOperand(&type2);
  auto op1 = model->addOperand(&type3);
  auto b4 = model->addOperand(&type0);
  auto b5 = model->addOperand(&type0);
  auto b6 = model->addOperand(&type0);
  auto b7 = model->addOperand(&type0);
  auto b8 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type1);
  auto dummy5 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type0);
  auto op0_tmp = model->addOperand(&type2);
  auto dummy6 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type0);
  auto op1_tmp = model->addOperand(&type3);
  auto dummy7 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t b4_init[] = {1};
  model->setOperandValue(b4, b4_init, sizeof(int32_t) * 1);
  static int32_t b5_init[] = {1};
  model->setOperandValue(b5, b5_init, sizeof(int32_t) * 1);
  static int32_t b6_init[] = {1};
  model->setOperandValue(b6, b6_init, sizeof(int32_t) * 1);
  static int32_t b7_init[] = {1};
  model->setOperandValue(b7, b7_init, sizeof(int32_t) * 1);
  static int32_t b8_init[] = {0};
  model->setOperandValue(b8, b8_init, sizeof(int32_t) * 1);
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
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy5, param5}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op0_tmp, dummy6, param6}, {op0});
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy7, param7}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op2, op0, op1, b4, b5, b6, b7, b8}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2_tmp, op0_tmp, op1_tmp},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv_relaxed
namespace generated_tests::depthwise_conv_relaxed {

void CreateModel_2(Model *model) {
  OperandType type0(Type::INT32, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op2 = model->addOperand(&type1);
  auto op0 = model->addOperand(&type2);
  auto op1 = model->addOperand(&type3);
  auto b4 = model->addOperand(&type0);
  auto b5 = model->addOperand(&type0);
  auto b6 = model->addOperand(&type0);
  auto b7 = model->addOperand(&type0);
  auto b8 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type1);
  // Phase 2, operations
  static float op0_init[] = {-0.966213f, -0.467474f, -0.82203f};
  model->setOperandValue(op0, op0_init, sizeof(float) * 3);
  static float op1_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op1, op1_init, sizeof(float) * 3);
  static int32_t b4_init[] = {1};
  model->setOperandValue(b4, b4_init, sizeof(int32_t) * 1);
  static int32_t b5_init[] = {1};
  model->setOperandValue(b5, b5_init, sizeof(int32_t) * 1);
  static int32_t b6_init[] = {1};
  model->setOperandValue(b6, b6_init, sizeof(int32_t) * 1);
  static int32_t b7_init[] = {1};
  model->setOperandValue(b7, b7_init, sizeof(int32_t) * 1);
  static int32_t b8_init[] = {0};
  model->setOperandValue(b8, b8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op2, op0, op1, b4, b5, b6, b7, b8}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv_relaxed
namespace generated_tests::depthwise_conv_relaxed {

void CreateModel_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::INT32, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op2 = model->addOperand(&type1);
  auto op0 = model->addOperand(&type2);
  auto op1 = model->addOperand(&type3);
  auto b4 = model->addOperand(&type0);
  auto b5 = model->addOperand(&type0);
  auto b6 = model->addOperand(&type0);
  auto b7 = model->addOperand(&type0);
  auto b8 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type4);
  // Phase 2, operations
  static float op0_init[] = {-0.966213f, -0.467474f, -0.82203f};
  model->setOperandValue(op0, op0_init, sizeof(float) * 3);
  static float op1_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op1, op1_init, sizeof(float) * 3);
  static int32_t b4_init[] = {1};
  model->setOperandValue(b4, b4_init, sizeof(int32_t) * 1);
  static int32_t b5_init[] = {1};
  model->setOperandValue(b5, b5_init, sizeof(int32_t) * 1);
  static int32_t b6_init[] = {1};
  model->setOperandValue(b6, b6_init, sizeof(int32_t) * 1);
  static int32_t b7_init[] = {1};
  model->setOperandValue(b7, b7_init, sizeof(int32_t) * 1);
  static int32_t b8_init[] = {0};
  model->setOperandValue(b8, b8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op2, op0, op1, b4, b5, b6, b7, b8}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv_relaxed
namespace generated_tests::depthwise_conv_relaxed {

void CreateModel_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::INT32, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op2 = model->addOperand(&type1);
  auto op0 = model->addOperand(&type2);
  auto op1 = model->addOperand(&type3);
  auto b4 = model->addOperand(&type0);
  auto b5 = model->addOperand(&type0);
  auto b6 = model->addOperand(&type0);
  auto b7 = model->addOperand(&type0);
  auto b8 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type1);
  auto op2_tmp = model->addOperand(&type1);
  auto dummy8 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type0);
  // Phase 2, operations
  static float op0_init[] = {-0.966213f, -0.467474f, -0.82203f};
  model->setOperandValue(op0, op0_init, sizeof(float) * 3);
  static float op1_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op1, op1_init, sizeof(float) * 3);
  static int32_t b4_init[] = {1};
  model->setOperandValue(b4, b4_init, sizeof(int32_t) * 1);
  static int32_t b5_init[] = {1};
  model->setOperandValue(b5, b5_init, sizeof(int32_t) * 1);
  static int32_t b6_init[] = {1};
  model->setOperandValue(b6, b6_init, sizeof(int32_t) * 1);
  static int32_t b7_init[] = {1};
  model->setOperandValue(b7, b7_init, sizeof(int32_t) * 1);
  static int32_t b8_init[] = {0};
  model->setOperandValue(b8, b8_init, sizeof(int32_t) * 1);
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy8, param8}, {op2});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op2, op0, op1, b4, b5, b6, b7, b8}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2_tmp},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv_relaxed
namespace generated_tests::depthwise_conv_relaxed {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::INT32, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op2 = model->addOperand(&type1);
  auto op0 = model->addOperand(&type2);
  auto op1 = model->addOperand(&type3);
  auto b4 = model->addOperand(&type0);
  auto b5 = model->addOperand(&type0);
  auto b6 = model->addOperand(&type0);
  auto b7 = model->addOperand(&type0);
  auto b8 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type1);
  auto dummy9 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type0);
  // Phase 2, operations
  static float op0_init[] = {-0.966213f, -0.467474f, -0.82203f};
  model->setOperandValue(op0, op0_init, sizeof(float) * 3);
  static float op1_init[] = {0.0f, 0.0f, 0.0f};
  model->setOperandValue(op1, op1_init, sizeof(float) * 3);
  static int32_t b4_init[] = {1};
  model->setOperandValue(b4, b4_init, sizeof(int32_t) * 1);
  static int32_t b5_init[] = {1};
  model->setOperandValue(b5, b5_init, sizeof(int32_t) * 1);
  static int32_t b6_init[] = {1};
  model->setOperandValue(b6, b6_init, sizeof(int32_t) * 1);
  static int32_t b7_init[] = {1};
  model->setOperandValue(b7, b7_init, sizeof(int32_t) * 1);
  static int32_t b8_init[] = {0};
  model->setOperandValue(b8, b8_init, sizeof(int32_t) * 1);
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy9, param9}, {op2});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op2, op0, op1, b4, b5, b6, b7, b8}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2_tmp},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv_relaxed
namespace generated_tests::depthwise_conv_relaxed {

void CreateModel_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::INT32, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op2 = model->addOperand(&type1);
  auto op0 = model->addOperand(&type2);
  auto op1 = model->addOperand(&type3);
  auto b4 = model->addOperand(&type0);
  auto b5 = model->addOperand(&type0);
  auto b6 = model->addOperand(&type0);
  auto b7 = model->addOperand(&type0);
  auto b8 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t b4_init[] = {1};
  model->setOperandValue(b4, b4_init, sizeof(int32_t) * 1);
  static int32_t b5_init[] = {1};
  model->setOperandValue(b5, b5_init, sizeof(int32_t) * 1);
  static int32_t b6_init[] = {1};
  model->setOperandValue(b6, b6_init, sizeof(int32_t) * 1);
  static int32_t b7_init[] = {1};
  model->setOperandValue(b7, b7_init, sizeof(int32_t) * 1);
  static int32_t b8_init[] = {0};
  model->setOperandValue(b8, b8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op2, op0, op1, b4, b5, b6, b7, b8}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2, op0, op1},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv_relaxed
namespace generated_tests::depthwise_conv_relaxed {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::INT32, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op2 = model->addOperand(&type1);
  auto op0 = model->addOperand(&type2);
  auto op1 = model->addOperand(&type3);
  auto b4 = model->addOperand(&type0);
  auto b5 = model->addOperand(&type0);
  auto b6 = model->addOperand(&type0);
  auto b7 = model->addOperand(&type0);
  auto b8 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t b4_init[] = {1};
  model->setOperandValue(b4, b4_init, sizeof(int32_t) * 1);
  static int32_t b5_init[] = {1};
  model->setOperandValue(b5, b5_init, sizeof(int32_t) * 1);
  static int32_t b6_init[] = {1};
  model->setOperandValue(b6, b6_init, sizeof(int32_t) * 1);
  static int32_t b7_init[] = {1};
  model->setOperandValue(b7, b7_init, sizeof(int32_t) * 1);
  static int32_t b8_init[] = {0};
  model->setOperandValue(b8, b8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op2, op0, op1, b4, b5, b6, b7, b8}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2, op0, op1},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv_relaxed
namespace generated_tests::depthwise_conv_relaxed {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::INT32, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op2 = model->addOperand(&type1);
  auto op0 = model->addOperand(&type2);
  auto op1 = model->addOperand(&type3);
  auto b4 = model->addOperand(&type0);
  auto b5 = model->addOperand(&type0);
  auto b6 = model->addOperand(&type0);
  auto b7 = model->addOperand(&type0);
  auto b8 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type1);
  auto op2_tmp = model->addOperand(&type1);
  auto dummy10 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type0);
  auto op0_tmp = model->addOperand(&type2);
  auto dummy11 = model->addOperand(&type5);
  auto param11 = model->addOperand(&type0);
  auto op1_tmp = model->addOperand(&type3);
  auto dummy12 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t b4_init[] = {1};
  model->setOperandValue(b4, b4_init, sizeof(int32_t) * 1);
  static int32_t b5_init[] = {1};
  model->setOperandValue(b5, b5_init, sizeof(int32_t) * 1);
  static int32_t b6_init[] = {1};
  model->setOperandValue(b6, b6_init, sizeof(int32_t) * 1);
  static int32_t b7_init[] = {1};
  model->setOperandValue(b7, b7_init, sizeof(int32_t) * 1);
  static int32_t b8_init[] = {0};
  model->setOperandValue(b8, b8_init, sizeof(int32_t) * 1);
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
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy10, param10}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op0_tmp, dummy11, param11}, {op0});
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy12, param12}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op2, op0, op1, b4, b5, b6, b7, b8}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2_tmp, op0_tmp, op1_tmp},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv_relaxed
namespace generated_tests::depthwise_conv_relaxed {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::INT32, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 8, 8, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {3});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op2 = model->addOperand(&type1);
  auto op0 = model->addOperand(&type2);
  auto op1 = model->addOperand(&type3);
  auto b4 = model->addOperand(&type0);
  auto b5 = model->addOperand(&type0);
  auto b6 = model->addOperand(&type0);
  auto b7 = model->addOperand(&type0);
  auto b8 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type1);
  auto dummy13 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type0);
  auto op0_tmp = model->addOperand(&type2);
  auto dummy14 = model->addOperand(&type5);
  auto param14 = model->addOperand(&type0);
  auto op1_tmp = model->addOperand(&type3);
  auto dummy15 = model->addOperand(&type5);
  auto param15 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t b4_init[] = {1};
  model->setOperandValue(b4, b4_init, sizeof(int32_t) * 1);
  static int32_t b5_init[] = {1};
  model->setOperandValue(b5, b5_init, sizeof(int32_t) * 1);
  static int32_t b6_init[] = {1};
  model->setOperandValue(b6, b6_init, sizeof(int32_t) * 1);
  static int32_t b7_init[] = {1};
  model->setOperandValue(b7, b7_init, sizeof(int32_t) * 1);
  static int32_t b8_init[] = {0};
  model->setOperandValue(b8, b8_init, sizeof(int32_t) * 1);
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
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy13, param13}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {op0_tmp, dummy14, param14}, {op0});
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy15, param15}, {op1});
  model->addOperation(ANEURALNETWORKS_DEPTHWISE_CONV_2D, {op2, op0, op1, b4, b5, b6, b7, b8}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2_tmp, op0_tmp, op1_tmp},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::depthwise_conv_relaxed
