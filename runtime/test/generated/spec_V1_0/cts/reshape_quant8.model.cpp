// Generated from reshape_quant8.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::reshape_quant8 {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 1.0f, 0);
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {9}, 1.0f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t op2_init[] = {-1};
  model->setOperandValue(op2, op2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_RESHAPE, {op1, op2}, {op3});
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

} // namespace generated_tests::reshape_quant8
namespace generated_tests::reshape_quant8 {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 1.0f, 0);
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t op2_init[] = {-1};
  model->setOperandValue(op2, op2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_RESHAPE, {op1, op2}, {op3});
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

} // namespace generated_tests::reshape_quant8
namespace generated_tests::reshape_quant8 {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 1.0f, 0);
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {9}, 1.0f, 0);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t op2_init[] = {-1};
  model->setOperandValue(op2, op2_init, sizeof(int32_t) * 1);
  static uint8_t dummy_init[] = {0};
  model->setOperandValue(dummy, dummy_init, sizeof(uint8_t) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param}, {op1});
  model->addOperation(ANEURALNETWORKS_RESHAPE, {op1, op2}, {op3});
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

} // namespace generated_tests::reshape_quant8
namespace generated_tests::reshape_quant8 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 1.0f, 0);
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t op2_init[] = {-1};
  model->setOperandValue(op2, op2_init, sizeof(int32_t) * 1);
  static uint8_t dummy1_init[] = {0};
  model->setOperandValue(dummy1, dummy1_init, sizeof(uint8_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param1}, {op1});
  model->addOperation(ANEURALNETWORKS_RESHAPE, {op1, op2}, {op3});
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

} // namespace generated_tests::reshape_quant8
namespace generated_tests::reshape_quant8 {

void CreateModel_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 1.0f, 0);
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {9}, 1.0f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_RESHAPE, {op1, op2}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::reshape_quant8
namespace generated_tests::reshape_quant8 {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 1.0f, 0);
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_RESHAPE, {op1, op2}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::reshape_quant8
namespace generated_tests::reshape_quant8 {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 1.0f, 0);
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {9}, 1.0f, 0);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type5);
  // Phase 2, operations
  static uint8_t dummy2_init[] = {0};
  model->setOperandValue(dummy2, dummy2_init, sizeof(uint8_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy2, param2}, {op1});
  model->addOperation(ANEURALNETWORKS_RESHAPE, {op1, op2}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2, op1_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::reshape_quant8
namespace generated_tests::reshape_quant8 {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 1.0f, 0);
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op3 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  // Phase 2, operations
  static uint8_t dummy3_init[] = {0};
  model->setOperandValue(dummy3, dummy3_init, sizeof(uint8_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy3, param3}, {op1});
  model->addOperation(ANEURALNETWORKS_RESHAPE, {op1, op2}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op2, op1_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::reshape_quant8
