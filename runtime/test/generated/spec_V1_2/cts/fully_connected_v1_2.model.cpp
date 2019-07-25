// Generated from fully_connected_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::fully_connected_v1_2 {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type0);
  // Phase 2, operations
  static float op2_init[] = {2.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 1);
  static float b0_init[] = {4.0f};
  model->setOperandValue(b0, b0_init, sizeof(float) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type16);
  // Phase 2, operations
  static float op2_init[] = {2.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 1);
  static float b0_init[] = {4.0f};
  model->setOperandValue(b0, b0_init, sizeof(float) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type0);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type2);
  auto param14 = model->addOperand(&type3);
  // Phase 2, operations
  static float op2_init[] = {2.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 1);
  static float b0_init[] = {4.0f};
  model->setOperandValue(b0, b0_init, sizeof(float) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param14}, {op1});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type3);
  // Phase 2, operations
  static float op2_init[] = {2.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 1);
  static float b0_init[] = {4.0f};
  model->setOperandValue(b0, b0_init, sizeof(float) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param15}, {op1});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, b0},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, b0},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type0);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type3);
  auto op2_tmp = model->addOperand(&type1);
  auto dummy3 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type3);
  auto b0_tmp = model->addOperand(&type2);
  auto dummy4 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(float) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy2, param16}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy3, param17}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {b0_tmp, dummy4, param18}, {b0});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, b0_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy5 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type3);
  auto op2_tmp = model->addOperand(&type1);
  auto dummy6 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type3);
  auto b0_tmp = model->addOperand(&type2);
  auto dummy7 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static float dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static float dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(float) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static float dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(float) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy5, param19}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy6, param20}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {b0_tmp, dummy7, param21}, {b0});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, b0_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type0);
  // Phase 2, operations
  static float op2_init[] = {2.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 1);
  static float b0_init[] = {4.0f};
  model->setOperandValue(b0, b0_init, sizeof(float) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type16);
  // Phase 2, operations
  static float op2_init[] = {2.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 1);
  static float b0_init[] = {4.0f};
  model->setOperandValue(b0, b0_init, sizeof(float) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type0);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy8 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type3);
  // Phase 2, operations
  static float op2_init[] = {2.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 1);
  static float b0_init[] = {4.0f};
  model->setOperandValue(b0, b0_init, sizeof(float) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy8, param22}, {op1});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy9 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type3);
  // Phase 2, operations
  static float op2_init[] = {2.0f};
  model->setOperandValue(op2, op2_init, sizeof(float) * 1);
  static float b0_init[] = {4.0f};
  model->setOperandValue(b0, b0_init, sizeof(float) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy9, param23}, {op1});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_relaxed_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, b0},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, b0},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type0);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy10 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type3);
  auto op2_tmp = model->addOperand(&type1);
  auto dummy11 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type3);
  auto b0_tmp = model->addOperand(&type2);
  auto dummy12 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static float dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(float) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static float dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(float) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static float dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy10, param24}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy11, param25}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {b0_tmp, dummy12, param26}, {b0});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, b0_tmp},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy13 = model->addOperand(&type2);
  auto param27 = model->addOperand(&type3);
  auto op2_tmp = model->addOperand(&type1);
  auto dummy14 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type3);
  auto b0_tmp = model->addOperand(&type2);
  auto dummy15 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static float dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(float) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(float) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(float) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy13, param27}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy14, param28}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {b0_tmp, dummy15, param29}, {b0});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, b0_tmp},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_float16(Model *model) {
  OperandType type17(Type::TENSOR_FLOAT16, {1});
  OperandType type18(Type::TENSOR_FLOAT16, {3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto op2 = model->addOperand(&type19);
  auto b0 = model->addOperand(&type17);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type18);
  // Phase 2, operations
  static _Float16 op2_init[] = {2.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 1);
  static _Float16 b0_init[] = {4.0f};
  model->setOperandValue(b0, b0_init, sizeof(_Float16) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  assert(model->isValid());
}

bool is_ignored_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_float16_dynamic_output_shape(Model *model) {
  OperandType type17(Type::TENSOR_FLOAT16, {1});
  OperandType type18(Type::TENSOR_FLOAT16, {3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto op2 = model->addOperand(&type19);
  auto b0 = model->addOperand(&type17);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 op2_init[] = {2.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 1);
  static _Float16 b0_init[] = {4.0f};
  model->setOperandValue(b0, b0_init, sizeof(_Float16) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_float16_all_inputs_as_internal(Model *model) {
  OperandType type17(Type::TENSOR_FLOAT16, {1});
  OperandType type18(Type::TENSOR_FLOAT16, {3, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 1});
  OperandType type21(Type::TENSOR_FLOAT16, {3, 1});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type19);
  auto b0 = model->addOperand(&type17);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type18);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy16 = model->addOperand(&type22);
  auto param30 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 op2_init[] = {2.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 1);
  static _Float16 b0_init[] = {4.0f};
  model->setOperandValue(b0, b0_init, sizeof(_Float16) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static _Float16 dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(_Float16) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy16, param30}, {op1});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type17(Type::TENSOR_FLOAT16, {1});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type21(Type::TENSOR_FLOAT16, {3, 1});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type19);
  auto b0 = model->addOperand(&type17);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type20);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy17 = model->addOperand(&type22);
  auto param31 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 op2_init[] = {2.0f};
  model->setOperandValue(op2, op2_init, sizeof(_Float16) * 1);
  static _Float16 b0_init[] = {4.0f};
  model->setOperandValue(b0, b0_init, sizeof(_Float16) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static _Float16 dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(_Float16) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy17, param31}, {op1});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_float16_all_tensors_as_inputs(Model *model) {
  OperandType type18(Type::TENSOR_FLOAT16, {3, 1});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type23(Type::TENSOR_FLOAT16, {1, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto op2 = model->addOperand(&type23);
  auto b0 = model->addOperand(&type22);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, b0},
    {op3});
  assert(model->isValid());
}

bool is_ignored_float16_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type18(Type::TENSOR_FLOAT16, {3, 1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type23(Type::TENSOR_FLOAT16, {1, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto op2 = model->addOperand(&type23);
  auto b0 = model->addOperand(&type22);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, b0},
    {op3});
  assert(model->isValid());
}

bool is_ignored_float16_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type18(Type::TENSOR_FLOAT16, {3, 1});
  OperandType type21(Type::TENSOR_FLOAT16, {3, 1});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type23(Type::TENSOR_FLOAT16, {1, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type23);
  auto b0 = model->addOperand(&type22);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type18);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy18 = model->addOperand(&type22);
  auto param32 = model->addOperand(&type3);
  auto op2_tmp = model->addOperand(&type23);
  auto dummy19 = model->addOperand(&type22);
  auto param33 = model->addOperand(&type3);
  auto b0_tmp = model->addOperand(&type22);
  auto dummy20 = model->addOperand(&type22);
  auto param34 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static _Float16 dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(_Float16) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static _Float16 dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(_Float16) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static _Float16 dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(_Float16) * 1);
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy18, param32}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy19, param33}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {b0_tmp, dummy20, param34}, {b0});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, b0_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_float16_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type21(Type::TENSOR_FLOAT16, {3, 1});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type23(Type::TENSOR_FLOAT16, {1, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto op2 = model->addOperand(&type23);
  auto b0 = model->addOperand(&type22);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type20);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy21 = model->addOperand(&type22);
  auto param35 = model->addOperand(&type3);
  auto op2_tmp = model->addOperand(&type23);
  auto dummy22 = model->addOperand(&type22);
  auto param36 = model->addOperand(&type3);
  auto b0_tmp = model->addOperand(&type22);
  auto dummy23 = model->addOperand(&type22);
  auto param37 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static _Float16 dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(_Float16) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static _Float16 dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(_Float16) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static _Float16 dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(_Float16) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy21, param35}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy22, param36}, {op2});
  model->addOperation(ANEURALNETWORKS_ADD, {b0_tmp, dummy23, param37}, {b0});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp, b0_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_quant8_mult_gt_1(Model *model) {
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {3, 1}, 0.5f, 127);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 1}, 0.5f, 120);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {3, 1}, 0.1f, 128);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type26);
  auto b0 = model->addOperand(&type24);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type27);
  // Phase 2, operations
  static uint8_t op2_init[] = {124};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 1);
  static int32_t b0_init[] = {16};
  model->setOperandValue(b0, b0_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  assert(model->isValid());
}

bool is_ignored_quant8_mult_gt_1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_quant8_mult_gt_1_dynamic_output_shape(Model *model) {
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {3, 1}, 0.5f, 127);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 1}, 0.5f, 120);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.1f, 128);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type26);
  auto b0 = model->addOperand(&type24);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type28);
  // Phase 2, operations
  static uint8_t op2_init[] = {124};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 1);
  static int32_t b0_init[] = {16};
  model->setOperandValue(b0, b0_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  assert(model->isValid());
}

bool is_ignored_quant8_mult_gt_1_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_quant8_mult_gt_1_all_inputs_as_internal(Model *model) {
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {3, 1}, 0.5f, 127);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 1}, 0.5f, 120);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {3, 1}, 0.1f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type26);
  auto b0 = model->addOperand(&type24);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type27);
  auto op1_tmp = model->addOperand(&type25);
  auto dummy24 = model->addOperand(&type29);
  auto param38 = model->addOperand(&type3);
  // Phase 2, operations
  static uint8_t op2_init[] = {124};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 1);
  static int32_t b0_init[] = {16};
  model->setOperandValue(b0, b0_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static uint8_t dummy24_init[] = {127};
  model->setOperandValue(dummy24, dummy24_init, sizeof(uint8_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy24, param38}, {op1});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_quant8_mult_gt_1_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_quant8_mult_gt_1_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {3, 1}, 0.5f, 127);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 1}, 0.5f, 120);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.1f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type26);
  auto b0 = model->addOperand(&type24);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type28);
  auto op1_tmp = model->addOperand(&type25);
  auto dummy25 = model->addOperand(&type29);
  auto param39 = model->addOperand(&type3);
  // Phase 2, operations
  static uint8_t op2_init[] = {124};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 1);
  static int32_t b0_init[] = {16};
  model->setOperandValue(b0, b0_init, sizeof(int32_t) * 1);
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static uint8_t dummy25_init[] = {127};
  model->setOperandValue(dummy25, dummy25_init, sizeof(uint8_t) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy25, param39}, {op1});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_quant8_mult_gt_1_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_quant8_mult_gt_1_all_tensors_as_inputs(Model *model) {
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {3, 1}, 0.5f, 127);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 1}, 0.5f, 120);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {3, 1}, 0.1f, 128);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type26);
  auto b0 = model->addOperand(&type24);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, b0},
    {op3});
  assert(model->isValid());
}

bool is_ignored_quant8_mult_gt_1_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_quant8_mult_gt_1_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {3, 1}, 0.5f, 127);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 1}, 0.5f, 120);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.1f, 128);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type26);
  auto b0 = model->addOperand(&type24);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2, b0},
    {op3});
  assert(model->isValid());
}

bool is_ignored_quant8_mult_gt_1_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_quant8_mult_gt_1_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {3, 1}, 0.5f, 127);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 1}, 0.5f, 120);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {3, 1}, 0.1f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 120);
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type26);
  auto b0 = model->addOperand(&type24);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type27);
  auto op1_tmp = model->addOperand(&type25);
  auto dummy26 = model->addOperand(&type29);
  auto param40 = model->addOperand(&type3);
  auto op2_tmp = model->addOperand(&type26);
  auto dummy27 = model->addOperand(&type30);
  auto param41 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static uint8_t dummy26_init[] = {127};
  model->setOperandValue(dummy26, dummy26_init, sizeof(uint8_t) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static uint8_t dummy27_init[] = {120};
  model->setOperandValue(dummy27, dummy27_init, sizeof(uint8_t) * 1);
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy26, param40}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy27, param41}, {op2});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {b0, op1_tmp, op2_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_quant8_mult_gt_1_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_quant8_mult_gt_1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type24(Type::TENSOR_INT32, {1}, 0.25f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {3, 1}, 0.5f, 127);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 1}, 0.5f, 120);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.1f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 120);
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type26);
  auto b0 = model->addOperand(&type24);
  auto act = model->addOperand(&type3);
  auto op3 = model->addOperand(&type28);
  auto op1_tmp = model->addOperand(&type25);
  auto dummy28 = model->addOperand(&type29);
  auto param42 = model->addOperand(&type3);
  auto op2_tmp = model->addOperand(&type26);
  auto dummy29 = model->addOperand(&type30);
  auto param43 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static uint8_t dummy28_init[] = {127};
  model->setOperandValue(dummy28, dummy28_init, sizeof(uint8_t) * 1);
  static int32_t param42_init[] = {0};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static uint8_t dummy29_init[] = {120};
  model->setOperandValue(dummy29, dummy29_init, sizeof(uint8_t) * 1);
  static int32_t param43_init[] = {0};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy28, param42}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy29, param43}, {op2});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {b0, op1_tmp, op2_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_quant8_mult_gt_1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nhwc(Model *model) {
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 2, 2, 3});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type6(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type4);
  auto roi = model->addOperand(&type5);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type10);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto param4 = model->addOperand(&type10);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type10);
  auto scoresOut = model->addOperand(&type6);
  auto roiOut = model->addOperand(&type8);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type12);
  auto param7 = model->addOperand(&type3);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type10);
  auto param11 = model->addOperand(&type3);
  auto param12 = model->addOperand(&type3);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type13);
  auto weights = model->addOperand(&type14);
  auto bias = model->addOperand(&type2);
  auto param13 = model->addOperand(&type3);
  auto out = model->addOperand(&type15);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float weights_init[] = {1.0f, 2.0f, 3.0f};
  model->setOperandValue(weights, weights_init, sizeof(float) * 3);
  static float bias_init[] = {1.0f};
  model->setOperandValue(bias, bias_init, sizeof(float) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {featureMap, weights, bias, param13}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nhwc_dynamic_output_shape(Model *model) {
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 2, 2, 3});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type6(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type4);
  auto roi = model->addOperand(&type5);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type10);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto param4 = model->addOperand(&type10);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type10);
  auto scoresOut = model->addOperand(&type6);
  auto roiOut = model->addOperand(&type8);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type12);
  auto param7 = model->addOperand(&type3);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type10);
  auto param11 = model->addOperand(&type3);
  auto param12 = model->addOperand(&type3);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type13);
  auto weights = model->addOperand(&type14);
  auto bias = model->addOperand(&type2);
  auto param13 = model->addOperand(&type3);
  auto out = model->addOperand(&type16);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float weights_init[] = {1.0f, 2.0f, 3.0f};
  model->setOperandValue(weights, weights_init, sizeof(float) * 3);
  static float bias_init[] = {1.0f};
  model->setOperandValue(bias, bias_init, sizeof(float) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {featureMap, weights, bias, param13}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nhwc_relaxed(Model *model) {
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 2, 2, 3});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type6(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type4);
  auto roi = model->addOperand(&type5);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type10);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto param4 = model->addOperand(&type10);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type10);
  auto scoresOut = model->addOperand(&type6);
  auto roiOut = model->addOperand(&type8);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type12);
  auto param7 = model->addOperand(&type3);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type10);
  auto param11 = model->addOperand(&type3);
  auto param12 = model->addOperand(&type3);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type13);
  auto weights = model->addOperand(&type14);
  auto bias = model->addOperand(&type2);
  auto param13 = model->addOperand(&type3);
  auto out = model->addOperand(&type15);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float weights_init[] = {1.0f, 2.0f, 3.0f};
  model->setOperandValue(weights, weights_init, sizeof(float) * 3);
  static float bias_init[] = {1.0f};
  model->setOperandValue(bias, bias_init, sizeof(float) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {featureMap, weights, bias, param13}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nhwc_relaxed_dynamic_output_shape(Model *model) {
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 2, 2, 3});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type6(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type4);
  auto roi = model->addOperand(&type5);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type10);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto param4 = model->addOperand(&type10);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type10);
  auto scoresOut = model->addOperand(&type6);
  auto roiOut = model->addOperand(&type8);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type12);
  auto param7 = model->addOperand(&type3);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type10);
  auto param11 = model->addOperand(&type3);
  auto param12 = model->addOperand(&type3);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type13);
  auto weights = model->addOperand(&type14);
  auto bias = model->addOperand(&type2);
  auto param13 = model->addOperand(&type3);
  auto out = model->addOperand(&type16);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float weights_init[] = {1.0f, 2.0f, 3.0f};
  model->setOperandValue(weights, weights_init, sizeof(float) * 3);
  static float bias_init[] = {1.0f};
  model->setOperandValue(bias, bias_init, sizeof(float) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {featureMap, weights, bias, param13}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nhwc_quant8(Model *model) {
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_INT32, {1}, 0.01f, 0);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 3}, 0.1f, 128);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 3}, 0.1f, 128);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 1}, 0.1f, 128);
  OperandType type35(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type36(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 3}, 0.1f, 128);
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type37);
  auto roi = model->addOperand(&type35);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type10);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto param4 = model->addOperand(&type10);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type10);
  auto scoresOut = model->addOperand(&type38);
  auto roiOut = model->addOperand(&type36);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type33);
  auto param7 = model->addOperand(&type3);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type10);
  auto param11 = model->addOperand(&type3);
  auto param12 = model->addOperand(&type3);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type32);
  auto weights = model->addOperand(&type39);
  auto bias = model->addOperand(&type31);
  auto param13 = model->addOperand(&type3);
  auto out = model->addOperand(&type34);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t weights_init[] = {138, 148, 158};
  model->setOperandValue(weights, weights_init, sizeof(uint8_t) * 3);
  static int32_t bias_init[] = {100};
  model->setOperandValue(bias, bias_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {featureMap, weights, bias, param13}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nhwc_quant8_dynamic_output_shape(Model *model) {
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.1f, 128);
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_INT32, {1}, 0.01f, 0);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 3}, 0.1f, 128);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 3}, 0.1f, 128);
  OperandType type35(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type36(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 3}, 0.1f, 128);
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type37);
  auto roi = model->addOperand(&type35);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type10);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto param4 = model->addOperand(&type10);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type10);
  auto scoresOut = model->addOperand(&type38);
  auto roiOut = model->addOperand(&type36);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type33);
  auto param7 = model->addOperand(&type3);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type10);
  auto param11 = model->addOperand(&type3);
  auto param12 = model->addOperand(&type3);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type32);
  auto weights = model->addOperand(&type39);
  auto bias = model->addOperand(&type31);
  auto param13 = model->addOperand(&type3);
  auto out = model->addOperand(&type28);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t weights_init[] = {138, 148, 158};
  model->setOperandValue(weights, weights_init, sizeof(uint8_t) * 3);
  static int32_t bias_init[] = {100};
  model->setOperandValue(bias, bias_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {featureMap, weights, bias, param13}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nhwc_float16(Model *model) {
  OperandType type11(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT16, {0, 2, 2, 3});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 1, 1, 3});
  OperandType type42(Type::TENSOR_FLOAT16, {0, 1});
  OperandType type43(Type::FLOAT16, {});
  OperandType type44(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type45(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type47(Type::TENSOR_FLOAT16, {0});
  OperandType type48(Type::TENSOR_FLOAT16, {1, 3});
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type46);
  auto roi = model->addOperand(&type44);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type43);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto param4 = model->addOperand(&type43);
  auto param5 = model->addOperand(&type43);
  auto param6 = model->addOperand(&type43);
  auto scoresOut = model->addOperand(&type47);
  auto roiOut = model->addOperand(&type45);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type41);
  auto param7 = model->addOperand(&type3);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type43);
  auto param10 = model->addOperand(&type43);
  auto param11 = model->addOperand(&type3);
  auto param12 = model->addOperand(&type3);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type40);
  auto weights = model->addOperand(&type48);
  auto bias = model->addOperand(&type17);
  auto param13 = model->addOperand(&type3);
  auto out = model->addOperand(&type42);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static _Float16 param1_init[] = {0.30000001192092896f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.4000000059604645f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static _Float16 param6_init[] = {0.30000001192092896f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static _Float16 param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 weights_init[] = {1.0f, 2.0f, 3.0f};
  model->setOperandValue(weights, weights_init, sizeof(_Float16) * 3);
  static _Float16 bias_init[] = {1.0f};
  model->setOperandValue(bias, bias_init, sizeof(_Float16) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {featureMap, weights, bias, param13}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type11(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT16, {0, 2, 2, 3});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 1, 1, 3});
  OperandType type43(Type::FLOAT16, {});
  OperandType type44(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type45(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type48(Type::TENSOR_FLOAT16, {1, 3});
  OperandType type49(Type::TENSOR_FLOAT16, {0});
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type46);
  auto roi = model->addOperand(&type44);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type43);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto param4 = model->addOperand(&type43);
  auto param5 = model->addOperand(&type43);
  auto param6 = model->addOperand(&type43);
  auto scoresOut = model->addOperand(&type49);
  auto roiOut = model->addOperand(&type45);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type41);
  auto param7 = model->addOperand(&type3);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type43);
  auto param10 = model->addOperand(&type43);
  auto param11 = model->addOperand(&type3);
  auto param12 = model->addOperand(&type3);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type40);
  auto weights = model->addOperand(&type48);
  auto bias = model->addOperand(&type17);
  auto param13 = model->addOperand(&type3);
  auto out = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static _Float16 param1_init[] = {0.30000001192092896f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.4000000059604645f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static _Float16 param6_init[] = {0.30000001192092896f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static _Float16 param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 weights_init[] = {1.0f, 2.0f, 3.0f};
  model->setOperandValue(weights, weights_init, sizeof(_Float16) * 3);
  static _Float16 bias_init[] = {1.0f};
  model->setOperandValue(bias, bias_init, sizeof(_Float16) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {featureMap, weights, bias, param13}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nchw(Model *model) {
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type50(Type::TENSOR_FLOAT32, {0, 3, 2, 2});
  OperandType type51(Type::TENSOR_FLOAT32, {1, 3, 1, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type4);
  auto roi = model->addOperand(&type5);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type10);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto param4 = model->addOperand(&type10);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type10);
  auto scoresOut = model->addOperand(&type6);
  auto roiOut = model->addOperand(&type8);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type51);
  auto param7 = model->addOperand(&type3);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type10);
  auto param11 = model->addOperand(&type3);
  auto param12 = model->addOperand(&type3);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type50);
  auto weights = model->addOperand(&type14);
  auto bias = model->addOperand(&type2);
  auto param13 = model->addOperand(&type3);
  auto out = model->addOperand(&type15);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float weights_init[] = {1.0f, 2.0f, 3.0f};
  model->setOperandValue(weights, weights_init, sizeof(float) * 3);
  static float bias_init[] = {1.0f};
  model->setOperandValue(bias, bias_init, sizeof(float) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {featureMap, weights, bias, param13}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nchw_dynamic_output_shape(Model *model) {
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type50(Type::TENSOR_FLOAT32, {0, 3, 2, 2});
  OperandType type51(Type::TENSOR_FLOAT32, {1, 3, 1, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type4);
  auto roi = model->addOperand(&type5);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type10);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto param4 = model->addOperand(&type10);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type10);
  auto scoresOut = model->addOperand(&type6);
  auto roiOut = model->addOperand(&type8);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type51);
  auto param7 = model->addOperand(&type3);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type10);
  auto param11 = model->addOperand(&type3);
  auto param12 = model->addOperand(&type3);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type50);
  auto weights = model->addOperand(&type14);
  auto bias = model->addOperand(&type2);
  auto param13 = model->addOperand(&type3);
  auto out = model->addOperand(&type16);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float weights_init[] = {1.0f, 2.0f, 3.0f};
  model->setOperandValue(weights, weights_init, sizeof(float) * 3);
  static float bias_init[] = {1.0f};
  model->setOperandValue(bias, bias_init, sizeof(float) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {featureMap, weights, bias, param13}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nchw_relaxed(Model *model) {
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type50(Type::TENSOR_FLOAT32, {0, 3, 2, 2});
  OperandType type51(Type::TENSOR_FLOAT32, {1, 3, 1, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type4);
  auto roi = model->addOperand(&type5);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type10);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto param4 = model->addOperand(&type10);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type10);
  auto scoresOut = model->addOperand(&type6);
  auto roiOut = model->addOperand(&type8);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type51);
  auto param7 = model->addOperand(&type3);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type10);
  auto param11 = model->addOperand(&type3);
  auto param12 = model->addOperand(&type3);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type50);
  auto weights = model->addOperand(&type14);
  auto bias = model->addOperand(&type2);
  auto param13 = model->addOperand(&type3);
  auto out = model->addOperand(&type15);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float weights_init[] = {1.0f, 2.0f, 3.0f};
  model->setOperandValue(weights, weights_init, sizeof(float) * 3);
  static float bias_init[] = {1.0f};
  model->setOperandValue(bias, bias_init, sizeof(float) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {featureMap, weights, bias, param13}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type50(Type::TENSOR_FLOAT32, {0, 3, 2, 2});
  OperandType type51(Type::TENSOR_FLOAT32, {1, 3, 1, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type4);
  auto roi = model->addOperand(&type5);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type10);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto param4 = model->addOperand(&type10);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type10);
  auto scoresOut = model->addOperand(&type6);
  auto roiOut = model->addOperand(&type8);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type51);
  auto param7 = model->addOperand(&type3);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type10);
  auto param11 = model->addOperand(&type3);
  auto param12 = model->addOperand(&type3);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type50);
  auto weights = model->addOperand(&type14);
  auto bias = model->addOperand(&type2);
  auto param13 = model->addOperand(&type3);
  auto out = model->addOperand(&type16);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float weights_init[] = {1.0f, 2.0f, 3.0f};
  model->setOperandValue(weights, weights_init, sizeof(float) * 3);
  static float bias_init[] = {1.0f};
  model->setOperandValue(bias, bias_init, sizeof(float) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {featureMap, weights, bias, param13}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nchw_quant8(Model *model) {
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_INT32, {1}, 0.01f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {0, 1}, 0.1f, 128);
  OperandType type35(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type36(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 3}, 0.1f, 128);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {0, 3, 2, 2}, 0.1f, 128);
  OperandType type53(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 1}, 0.1f, 128);
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type37);
  auto roi = model->addOperand(&type35);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type10);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto param4 = model->addOperand(&type10);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type10);
  auto scoresOut = model->addOperand(&type38);
  auto roiOut = model->addOperand(&type36);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type53);
  auto param7 = model->addOperand(&type3);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type10);
  auto param11 = model->addOperand(&type3);
  auto param12 = model->addOperand(&type3);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type52);
  auto weights = model->addOperand(&type39);
  auto bias = model->addOperand(&type31);
  auto param13 = model->addOperand(&type3);
  auto out = model->addOperand(&type34);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t weights_init[] = {138, 148, 158};
  model->setOperandValue(weights, weights_init, sizeof(uint8_t) * 3);
  static int32_t bias_init[] = {100};
  model->setOperandValue(bias, bias_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {featureMap, weights, bias, param13}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nchw_quant8_dynamic_output_shape(Model *model) {
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.1f, 128);
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_INT32, {1}, 0.01f, 0);
  OperandType type35(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type36(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 3}, 0.1f, 128);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {0, 3, 2, 2}, 0.1f, 128);
  OperandType type53(Type::TENSOR_QUANT8_ASYMM, {1, 3, 1, 1}, 0.1f, 128);
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type37);
  auto roi = model->addOperand(&type35);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type10);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto param4 = model->addOperand(&type10);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type10);
  auto scoresOut = model->addOperand(&type38);
  auto roiOut = model->addOperand(&type36);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type53);
  auto param7 = model->addOperand(&type3);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type10);
  auto param11 = model->addOperand(&type3);
  auto param12 = model->addOperand(&type3);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type52);
  auto weights = model->addOperand(&type39);
  auto bias = model->addOperand(&type31);
  auto param13 = model->addOperand(&type3);
  auto out = model->addOperand(&type28);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t weights_init[] = {138, 148, 158};
  model->setOperandValue(weights, weights_init, sizeof(uint8_t) * 3);
  static int32_t bias_init[] = {100};
  model->setOperandValue(bias, bias_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {featureMap, weights, bias, param13}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nchw_float16(Model *model) {
  OperandType type11(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT16, {0, 1});
  OperandType type43(Type::FLOAT16, {});
  OperandType type44(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type45(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type47(Type::TENSOR_FLOAT16, {0});
  OperandType type48(Type::TENSOR_FLOAT16, {1, 3});
  OperandType type54(Type::TENSOR_FLOAT16, {0, 3, 2, 2});
  OperandType type55(Type::TENSOR_FLOAT16, {1, 3, 1, 1});
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type46);
  auto roi = model->addOperand(&type44);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type43);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto param4 = model->addOperand(&type43);
  auto param5 = model->addOperand(&type43);
  auto param6 = model->addOperand(&type43);
  auto scoresOut = model->addOperand(&type47);
  auto roiOut = model->addOperand(&type45);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type55);
  auto param7 = model->addOperand(&type3);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type43);
  auto param10 = model->addOperand(&type43);
  auto param11 = model->addOperand(&type3);
  auto param12 = model->addOperand(&type3);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type54);
  auto weights = model->addOperand(&type48);
  auto bias = model->addOperand(&type17);
  auto param13 = model->addOperand(&type3);
  auto out = model->addOperand(&type42);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static _Float16 param1_init[] = {0.30000001192092896f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.4000000059604645f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static _Float16 param6_init[] = {0.30000001192092896f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static _Float16 param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 weights_init[] = {1.0f, 2.0f, 3.0f};
  model->setOperandValue(weights, weights_init, sizeof(_Float16) * 3);
  static _Float16 bias_init[] = {1.0f};
  model->setOperandValue(bias, bias_init, sizeof(_Float16) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {featureMap, weights, bias, param13}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type11(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type43(Type::FLOAT16, {});
  OperandType type44(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type45(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type48(Type::TENSOR_FLOAT16, {1, 3});
  OperandType type49(Type::TENSOR_FLOAT16, {0});
  OperandType type54(Type::TENSOR_FLOAT16, {0, 3, 2, 2});
  OperandType type55(Type::TENSOR_FLOAT16, {1, 3, 1, 1});
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type46);
  auto roi = model->addOperand(&type44);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type43);
  auto param2 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type3);
  auto param4 = model->addOperand(&type43);
  auto param5 = model->addOperand(&type43);
  auto param6 = model->addOperand(&type43);
  auto scoresOut = model->addOperand(&type49);
  auto roiOut = model->addOperand(&type45);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type55);
  auto param7 = model->addOperand(&type3);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type43);
  auto param10 = model->addOperand(&type43);
  auto param11 = model->addOperand(&type3);
  auto param12 = model->addOperand(&type3);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type54);
  auto weights = model->addOperand(&type48);
  auto bias = model->addOperand(&type17);
  auto param13 = model->addOperand(&type3);
  auto out = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static _Float16 param1_init[] = {0.30000001192092896f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.4000000059604645f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static _Float16 param6_init[] = {0.30000001192092896f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static _Float16 param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 weights_init[] = {1.0f, 2.0f, 3.0f};
  model->setOperandValue(weights, weights_init, sizeof(_Float16) * 3);
  static _Float16 bias_init[] = {1.0f};
  model->setOperandValue(bias, bias_init, sizeof(_Float16) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {featureMap, weights, bias, param13}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_v1_2
