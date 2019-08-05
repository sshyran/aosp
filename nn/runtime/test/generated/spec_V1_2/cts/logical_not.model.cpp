// Generated from logical_not.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::logical_not {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_BOOL8, {1, 1, 4, 1, 1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_LOGICAL_NOT, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::logical_not
namespace generated_tests::logical_not {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_BOOL8, {1, 1, 4, 1, 1});
  OperandType type1(Type::TENSOR_BOOL8, {0, 0, 0, 0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_LOGICAL_NOT, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::logical_not
