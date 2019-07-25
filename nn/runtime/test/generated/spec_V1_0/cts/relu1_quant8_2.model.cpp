// Generated from relu1_quant8_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::relu1_quant8_2 {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 64, 64, 2}, 1.0f, 128);
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto output = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_RELU1, {input}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input},
    {output});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::relu1_quant8_2
namespace generated_tests::relu1_quant8_2 {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 64, 64, 2}, 1.0f, 128);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto output = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_RELU1, {input}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input},
    {output});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::relu1_quant8_2
namespace generated_tests::relu1_quant8_2 {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 64, 64, 2}, 1.0f, 128);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 128);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto output = model->addOperand(&type0);
  auto input_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type2);
  auto param = model->addOperand(&type3);
  // Phase 2, operations
  static uint8_t dummy_init[] = {128};
  model->setOperandValue(dummy, dummy_init, sizeof(uint8_t) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy, param}, {input});
  model->addOperation(ANEURALNETWORKS_RELU1, {input}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::relu1_quant8_2
namespace generated_tests::relu1_quant8_2 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 64, 64, 2}, 1.0f, 128);
  OperandType type1(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 128);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 128);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto output = model->addOperand(&type1);
  auto input_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type2);
  auto param1 = model->addOperand(&type3);
  // Phase 2, operations
  static uint8_t dummy1_init[] = {128};
  model->setOperandValue(dummy1, dummy1_init, sizeof(uint8_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy1, param1}, {input});
  model->addOperation(ANEURALNETWORKS_RELU1, {input}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::relu1_quant8_2
