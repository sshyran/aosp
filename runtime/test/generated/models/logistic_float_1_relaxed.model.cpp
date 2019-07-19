// Generated from logistic_float_1_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::logistic_float_1_relaxed {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_LOGISTIC, {op1}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::logistic_float_1_relaxed
namespace generated_tests::logistic_float_1_relaxed {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type1(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op3 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_LOGISTIC, {op1}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::logistic_float_1_relaxed
