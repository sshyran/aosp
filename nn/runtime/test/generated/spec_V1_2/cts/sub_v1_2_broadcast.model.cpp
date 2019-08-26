// Generated from sub_v1_2_broadcast.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_none(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_none(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_none_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_none_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_none_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type1);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type6);
  auto param1 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type6);
  auto param2 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy, param1}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy1, param2}, {input1});
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_none_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_none_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type5);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type6);
  auto param3 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type1);
  auto dummy3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy2, param3}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy3, param4}, {input1});
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_none_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_relu(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_relu(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_relu_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_relu_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_relu_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type1);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type1);
  auto dummy5 = model->addOperand(&type6);
  auto param6 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static float dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static float dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(float) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy4, param5}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy5, param6}, {input1});
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_relu_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_relu_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type5);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy6 = model->addOperand(&type6);
  auto param7 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type1);
  auto dummy7 = model->addOperand(&type6);
  auto param8 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static float dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy6, param7}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy7, param8}, {input1});
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_relu_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_relu1(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_relu1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_relu1_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_relu1_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_relu1_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type1);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type1);
  auto dummy9 = model->addOperand(&type6);
  auto param10 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy8, param9}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy9, param10}, {input1});
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_relu1_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_relu1_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type5);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type1);
  auto dummy11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static float dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static float dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy10, param11}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy11, param12}, {input1});
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_relu1_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_relu6(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_relu6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_relu6_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_relu6_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_relu6_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type1);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy12 = model->addOperand(&type6);
  auto param13 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type1);
  auto dummy13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static float dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(float) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static float dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy12, param13}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy13, param14}, {input1});
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_relu6_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_relu6_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type5);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy14 = model->addOperand(&type6);
  auto param15 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type1);
  auto dummy15 = model->addOperand(&type6);
  auto param16 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static float dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(float) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(float) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy14, param15}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy15, param16}, {input1});
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_relu6_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_float16_none(Model *model) {
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT16, {2, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type7);
  auto input1 = model->addOperand(&type8);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_none(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_float16_none_dynamic_output_shape(Model *model) {
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type9(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type7);
  auto input1 = model->addOperand(&type8);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_none_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_float16_none_all_inputs_as_internal(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type11(Type::TENSOR_FLOAT16, {1});
  OperandType type12(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT16, {2, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type10);
  auto input1 = model->addOperand(&type12);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type8);
  auto input0_tmp = model->addOperand(&type10);
  auto dummy16 = model->addOperand(&type11);
  auto param17 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type12);
  auto dummy17 = model->addOperand(&type11);
  auto param18 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static _Float16 dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(_Float16) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static _Float16 dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(_Float16) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy16, param17}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy17, param18}, {input1});
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_none_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_float16_none_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type11(Type::TENSOR_FLOAT16, {1});
  OperandType type12(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type10);
  auto input1 = model->addOperand(&type12);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type9);
  auto input0_tmp = model->addOperand(&type10);
  auto dummy18 = model->addOperand(&type11);
  auto param19 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type12);
  auto dummy19 = model->addOperand(&type11);
  auto param20 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static _Float16 dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(_Float16) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static _Float16 dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(_Float16) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy18, param19}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy19, param20}, {input1});
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_none_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_float16_relu(Model *model) {
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT16, {2, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type7);
  auto input1 = model->addOperand(&type8);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_relu(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_float16_relu_dynamic_output_shape(Model *model) {
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type9(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type7);
  auto input1 = model->addOperand(&type8);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_relu_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_float16_relu_all_inputs_as_internal(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type11(Type::TENSOR_FLOAT16, {1});
  OperandType type12(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT16, {2, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type10);
  auto input1 = model->addOperand(&type12);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type8);
  auto input0_tmp = model->addOperand(&type10);
  auto dummy20 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type12);
  auto dummy21 = model->addOperand(&type11);
  auto param22 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static _Float16 dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(_Float16) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static _Float16 dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(_Float16) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy20, param21}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy21, param22}, {input1});
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_relu_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_float16_relu_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type11(Type::TENSOR_FLOAT16, {1});
  OperandType type12(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type10);
  auto input1 = model->addOperand(&type12);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type9);
  auto input0_tmp = model->addOperand(&type10);
  auto dummy22 = model->addOperand(&type11);
  auto param23 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type12);
  auto dummy23 = model->addOperand(&type11);
  auto param24 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t act_init[] = {1};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static _Float16 dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(_Float16) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(_Float16) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy22, param23}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy23, param24}, {input1});
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_relu_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_float16_relu1(Model *model) {
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT16, {2, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type7);
  auto input1 = model->addOperand(&type8);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_relu1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_float16_relu1_dynamic_output_shape(Model *model) {
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type9(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type7);
  auto input1 = model->addOperand(&type8);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_relu1_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_float16_relu1_all_inputs_as_internal(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type11(Type::TENSOR_FLOAT16, {1});
  OperandType type12(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT16, {2, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type10);
  auto input1 = model->addOperand(&type12);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type8);
  auto input0_tmp = model->addOperand(&type10);
  auto dummy24 = model->addOperand(&type11);
  auto param25 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type12);
  auto dummy25 = model->addOperand(&type11);
  auto param26 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static _Float16 dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(_Float16) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static _Float16 dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy24, param25}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy25, param26}, {input1});
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_relu1_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_float16_relu1_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type11(Type::TENSOR_FLOAT16, {1});
  OperandType type12(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type10);
  auto input1 = model->addOperand(&type12);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type9);
  auto input0_tmp = model->addOperand(&type10);
  auto dummy26 = model->addOperand(&type11);
  auto param27 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type12);
  auto dummy27 = model->addOperand(&type11);
  auto param28 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t act_init[] = {2};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static _Float16 dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(_Float16) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static _Float16 dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(_Float16) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy26, param27}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy27, param28}, {input1});
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_relu1_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_float16_relu6(Model *model) {
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT16, {2, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type7);
  auto input1 = model->addOperand(&type8);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_relu6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_float16_relu6_dynamic_output_shape(Model *model) {
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type9(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type7);
  auto input1 = model->addOperand(&type8);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_relu6_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_float16_relu6_all_inputs_as_internal(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type11(Type::TENSOR_FLOAT16, {1});
  OperandType type12(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT16, {2, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type10);
  auto input1 = model->addOperand(&type12);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type8);
  auto input0_tmp = model->addOperand(&type10);
  auto dummy28 = model->addOperand(&type11);
  auto param29 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type12);
  auto dummy29 = model->addOperand(&type11);
  auto param30 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static _Float16 dummy28_init[] = {0.0f};
  model->setOperandValue(dummy28, dummy28_init, sizeof(_Float16) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static _Float16 dummy29_init[] = {0.0f};
  model->setOperandValue(dummy29, dummy29_init, sizeof(_Float16) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy28, param29}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy29, param30}, {input1});
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_relu6_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_float16_relu6_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type11(Type::TENSOR_FLOAT16, {1});
  OperandType type12(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type10);
  auto input1 = model->addOperand(&type12);
  auto act = model->addOperand(&type2);
  auto output0 = model->addOperand(&type9);
  auto input0_tmp = model->addOperand(&type10);
  auto dummy30 = model->addOperand(&type11);
  auto param31 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type12);
  auto dummy31 = model->addOperand(&type11);
  auto param32 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t act_init[] = {3};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static _Float16 dummy30_init[] = {0.0f};
  model->setOperandValue(dummy30, dummy30_init, sizeof(_Float16) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static _Float16 dummy31_init[] = {0.0f};
  model->setOperandValue(dummy31, dummy31_init, sizeof(_Float16) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy30, param31}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy31, param32}, {input1});
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, act}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_relu6_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_quant8(Model *model) {
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 1.0f, 0);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 1.0f, 0);
  // Phase 1, operands
  auto input01 = model->addOperand(&type3);
  auto input11 = model->addOperand(&type4);
  auto param = model->addOperand(&type2);
  auto output01 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input01, input11, param}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11},
    {output01});
  assert(model->isValid());
}

bool is_ignored_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_quant8_dynamic_output_shape(Model *model) {
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 1.0f, 0);
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 1.0f, 0);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 1.0f, 0);
  // Phase 1, operands
  auto input01 = model->addOperand(&type3);
  auto input11 = model->addOperand(&type4);
  auto param = model->addOperand(&type2);
  auto output01 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input01, input11, param}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11},
    {output01});
  assert(model->isValid());
}

bool is_ignored_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_quant8_all_inputs_as_internal(Model *model) {
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 1.0f, 0);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 1.0f, 0);
  // Phase 1, operands
  auto input01 = model->addOperand(&type3);
  auto input11 = model->addOperand(&type4);
  auto param = model->addOperand(&type2);
  auto output01 = model->addOperand(&type4);
  auto input01_tmp = model->addOperand(&type3);
  auto dummy32 = model->addOperand(&type14);
  auto param33 = model->addOperand(&type2);
  auto input11_tmp = model->addOperand(&type4);
  auto dummy33 = model->addOperand(&type14);
  auto param34 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static uint8_t dummy32_init[] = {0};
  model->setOperandValue(dummy32, dummy32_init, sizeof(uint8_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static uint8_t dummy33_init[] = {0};
  model->setOperandValue(dummy33, dummy33_init, sizeof(uint8_t) * 1);
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy32, param33}, {input01});
  model->addOperation(ANEURALNETWORKS_ADD, {input11_tmp, dummy33, param34}, {input11});
  model->addOperation(ANEURALNETWORKS_SUB, {input01, input11, param}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp, input11_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
namespace generated_tests::sub_v1_2_broadcast {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 1.0f, 0);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 1.0f, 0);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 1.0f, 0);
  // Phase 1, operands
  auto input01 = model->addOperand(&type3);
  auto input11 = model->addOperand(&type4);
  auto param = model->addOperand(&type2);
  auto output01 = model->addOperand(&type13);
  auto input01_tmp = model->addOperand(&type3);
  auto dummy34 = model->addOperand(&type14);
  auto param35 = model->addOperand(&type2);
  auto input11_tmp = model->addOperand(&type4);
  auto dummy35 = model->addOperand(&type14);
  auto param36 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static uint8_t dummy34_init[] = {0};
  model->setOperandValue(dummy34, dummy34_init, sizeof(uint8_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static uint8_t dummy35_init[] = {0};
  model->setOperandValue(dummy35, dummy35_init, sizeof(uint8_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy34, param35}, {input01});
  model->addOperation(ANEURALNETWORKS_ADD, {input11_tmp, dummy35, param36}, {input11});
  model->addOperation(ANEURALNETWORKS_SUB, {input01, input11, param}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp, input11_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_v1_2_broadcast
