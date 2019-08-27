// Generated from embedding_lookup_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::embedding_lookup_relaxed {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_FLOAT32, {3, 2, 4});
  // Phase 1, operands
  auto index = model->addOperand(&type0);
  auto value = model->addOperand(&type1);
  auto output = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP, {index, value}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {index, value},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::embedding_lookup_relaxed
namespace generated_tests::embedding_lookup_relaxed {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_FLOAT32, {3, 2, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto index = model->addOperand(&type0);
  auto value = model->addOperand(&type1);
  auto output = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP, {index, value}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {index, value},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::embedding_lookup_relaxed
namespace generated_tests::embedding_lookup_relaxed {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_FLOAT32, {3, 2, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto index = model->addOperand(&type0);
  auto value = model->addOperand(&type1);
  auto output = model->addOperand(&type1);
  auto value_tmp = model->addOperand(&type1);
  auto dummy = model->addOperand(&type3);
  auto param = model->addOperand(&type4);
  // Phase 2, operations
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {value_tmp, dummy, param}, {value});
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP, {index, value}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {index, value_tmp},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::embedding_lookup_relaxed
namespace generated_tests::embedding_lookup_relaxed {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {3});
  OperandType type1(Type::TENSOR_FLOAT32, {3, 2, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::INT32, {});
  // Phase 1, operands
  auto index = model->addOperand(&type0);
  auto value = model->addOperand(&type1);
  auto output = model->addOperand(&type2);
  auto value_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type3);
  auto param1 = model->addOperand(&type4);
  // Phase 2, operations
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {value_tmp, dummy1, param1}, {value});
  model->addOperation(ANEURALNETWORKS_EMBEDDING_LOOKUP, {index, value}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {index, value_tmp},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::embedding_lookup_relaxed
