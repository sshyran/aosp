// Generated from fully_connected_quant8_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::fully_connected_quant8_2 {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {4, 1, 5, 1}, 0.5f, 127);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {3, 10}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {3}, 0.25f, 0);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 1.0f, 127);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act_relu = model->addOperand(&type4);
  auto op3 = model->addOperand(&type3);
  // Phase 2, operations
  static uint8_t op2_init[] = {129, 131, 133, 135, 137, 139, 141, 143, 145, 147, 129, 131, 133, 135, 137, 139, 141, 143, 145, 147, 129, 131, 133, 135, 137, 139, 141, 143, 145, 147};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 30);
  static int32_t b0_init[] = {4, 8, 12};
  model->setOperandValue(b0, b0_init, sizeof(int32_t) * 3);
  static int32_t act_relu_init[] = {1};
  model->setOperandValue(act_relu, act_relu_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act_relu}, {op3});
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

} // namespace generated_tests::fully_connected_quant8_2
namespace generated_tests::fully_connected_quant8_2 {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {4, 1, 5, 1}, 0.5f, 127);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {3, 10}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {3}, 0.25f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 1.0f, 127);
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act_relu = model->addOperand(&type4);
  auto op3 = model->addOperand(&type5);
  // Phase 2, operations
  static uint8_t op2_init[] = {129, 131, 133, 135, 137, 139, 141, 143, 145, 147, 129, 131, 133, 135, 137, 139, 141, 143, 145, 147, 129, 131, 133, 135, 137, 139, 141, 143, 145, 147};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 30);
  static int32_t b0_init[] = {4, 8, 12};
  model->setOperandValue(b0, b0_init, sizeof(int32_t) * 3);
  static int32_t act_relu_init[] = {1};
  model->setOperandValue(act_relu, act_relu_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act_relu}, {op3});
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

} // namespace generated_tests::fully_connected_quant8_2
namespace generated_tests::fully_connected_quant8_2 {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {4, 1, 5, 1}, 0.5f, 127);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {3, 10}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {3}, 0.25f, 0);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 1.0f, 127);
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act_relu = model->addOperand(&type4);
  auto op3 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type6);
  auto param = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op2_init[] = {129, 131, 133, 135, 137, 139, 141, 143, 145, 147, 129, 131, 133, 135, 137, 139, 141, 143, 145, 147, 129, 131, 133, 135, 137, 139, 141, 143, 145, 147};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 30);
  static int32_t b0_init[] = {4, 8, 12};
  model->setOperandValue(b0, b0_init, sizeof(int32_t) * 3);
  static int32_t act_relu_init[] = {1};
  model->setOperandValue(act_relu, act_relu_init, sizeof(int32_t) * 1);
  static uint8_t dummy_init[] = {127};
  model->setOperandValue(dummy, dummy_init, sizeof(uint8_t) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param}, {op1});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act_relu}, {op3});
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

} // namespace generated_tests::fully_connected_quant8_2
namespace generated_tests::fully_connected_quant8_2 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {4, 1, 5, 1}, 0.5f, 127);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {3, 10}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {3}, 0.25f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 1.0f, 127);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act_relu = model->addOperand(&type4);
  auto op3 = model->addOperand(&type5);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type6);
  auto param1 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t op2_init[] = {129, 131, 133, 135, 137, 139, 141, 143, 145, 147, 129, 131, 133, 135, 137, 139, 141, 143, 145, 147, 129, 131, 133, 135, 137, 139, 141, 143, 145, 147};
  model->setOperandValue(op2, op2_init, sizeof(uint8_t) * 30);
  static int32_t b0_init[] = {4, 8, 12};
  model->setOperandValue(b0, b0_init, sizeof(int32_t) * 3);
  static int32_t act_relu_init[] = {1};
  model->setOperandValue(act_relu, act_relu_init, sizeof(int32_t) * 1);
  static uint8_t dummy1_init[] = {127};
  model->setOperandValue(dummy1, dummy1_init, sizeof(uint8_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param1}, {op1});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act_relu}, {op3});
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

} // namespace generated_tests::fully_connected_quant8_2
namespace generated_tests::fully_connected_quant8_2 {

void CreateModel_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {4, 1, 5, 1}, 0.5f, 127);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {3, 10}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {3}, 0.25f, 0);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 1.0f, 127);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act_relu = model->addOperand(&type4);
  auto op3 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t act_relu_init[] = {1};
  model->setOperandValue(act_relu, act_relu_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act_relu}, {op3});
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

} // namespace generated_tests::fully_connected_quant8_2
namespace generated_tests::fully_connected_quant8_2 {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {4, 1, 5, 1}, 0.5f, 127);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {3, 10}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {3}, 0.25f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 1.0f, 127);
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act_relu = model->addOperand(&type4);
  auto op3 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t act_relu_init[] = {1};
  model->setOperandValue(act_relu, act_relu_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act_relu}, {op3});
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

} // namespace generated_tests::fully_connected_quant8_2
namespace generated_tests::fully_connected_quant8_2 {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {4, 1, 5, 1}, 0.5f, 127);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {3, 10}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {3}, 0.25f, 0);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 1.0f, 127);
  OperandType type4(Type::INT32, {});
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act_relu = model->addOperand(&type4);
  auto op3 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type6);
  auto param2 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type1);
  auto dummy3 = model->addOperand(&type6);
  auto param3 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t act_relu_init[] = {1};
  model->setOperandValue(act_relu, act_relu_init, sizeof(int32_t) * 1);
  static uint8_t dummy2_init[] = {127};
  model->setOperandValue(dummy2, dummy2_init, sizeof(uint8_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static uint8_t dummy3_init[] = {127};
  model->setOperandValue(dummy3, dummy3_init, sizeof(uint8_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy2, param2}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy3, param3}, {op2});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act_relu}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {b0, op1_tmp, op2_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_quant8_2
namespace generated_tests::fully_connected_quant8_2 {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {4, 1, 5, 1}, 0.5f, 127);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {3, 10}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {3}, 0.25f, 0);
  OperandType type4(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 1.0f, 127);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto b0 = model->addOperand(&type2);
  auto act_relu = model->addOperand(&type4);
  auto op3 = model->addOperand(&type5);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy4 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type4);
  auto op2_tmp = model->addOperand(&type1);
  auto dummy5 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t act_relu_init[] = {1};
  model->setOperandValue(act_relu, act_relu_init, sizeof(int32_t) * 1);
  static uint8_t dummy4_init[] = {127};
  model->setOperandValue(dummy4, dummy4_init, sizeof(uint8_t) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static uint8_t dummy5_init[] = {127};
  model->setOperandValue(dummy5, dummy5_init, sizeof(uint8_t) * 1);
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy4, param4}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy5, param5}, {op2});
  model->addOperation(ANEURALNETWORKS_FULLY_CONNECTED, {op1, op2, b0, act_relu}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {b0, op1_tmp, op2_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::fully_connected_quant8_2
