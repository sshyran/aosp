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
