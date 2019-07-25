// Generated from dequantize_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::dequantize_relaxed {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 1.0f, 0);
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_relaxed
namespace generated_tests::dequantize_relaxed {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 1.0f, 0);
  OperandType type2(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_relaxed
namespace generated_tests::dequantize_relaxed {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 1.0f, 0);
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type1);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t dummy_init[] = {0};
  model->setOperandValue(dummy, dummy_init, sizeof(uint8_t) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param}, {op1});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_relaxed
namespace generated_tests::dequantize_relaxed {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 1.0f, 0);
  OperandType type2(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type3);
  auto param1 = model->addOperand(&type4);
  // Phase 2, operations
  static uint8_t dummy1_init[] = {0};
  model->setOperandValue(dummy1, dummy1_init, sizeof(uint8_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param1}, {op1});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_relaxed
