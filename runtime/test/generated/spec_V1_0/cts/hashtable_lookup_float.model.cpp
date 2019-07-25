// Generated from hashtable_lookup_float.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::hashtable_lookup_float {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {4});
  OperandType type1(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_FLOAT32, {3, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 2});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {4}, 1.0f, 0);
  // Phase 1, operands
  auto lookup = model->addOperand(&type0);
  auto key = model->addOperand(&type1);
  auto value = model->addOperand(&type2);
  auto output = model->addOperand(&type3);
  auto hits = model->addOperand(&type4);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_HASHTABLE_LOOKUP, {lookup, key, value}, {output, hits});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup, key, value},
    {output, hits});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::hashtable_lookup_float
namespace generated_tests::hashtable_lookup_float {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {4});
  OperandType type1(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_FLOAT32, {3, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto lookup = model->addOperand(&type0);
  auto key = model->addOperand(&type1);
  auto value = model->addOperand(&type2);
  auto output = model->addOperand(&type5);
  auto hits = model->addOperand(&type6);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_HASHTABLE_LOOKUP, {lookup, key, value}, {output, hits});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup, key, value},
    {output, hits});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::hashtable_lookup_float
namespace generated_tests::hashtable_lookup_float {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {4});
  OperandType type1(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_FLOAT32, {3, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 2});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {4}, 1.0f, 0);
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto lookup = model->addOperand(&type0);
  auto key = model->addOperand(&type1);
  auto value = model->addOperand(&type2);
  auto output = model->addOperand(&type3);
  auto hits = model->addOperand(&type4);
  auto value_tmp = model->addOperand(&type2);
  auto dummy = model->addOperand(&type7);
  auto param = model->addOperand(&type8);
  // Phase 2, operations
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {value_tmp, dummy, param}, {value});
  model->addOperation(ANEURALNETWORKS_HASHTABLE_LOOKUP, {lookup, key, value}, {output, hits});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup, key, value_tmp},
    {output, hits});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::hashtable_lookup_float
namespace generated_tests::hashtable_lookup_float {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_INT32, {4});
  OperandType type1(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_FLOAT32, {3, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto lookup = model->addOperand(&type0);
  auto key = model->addOperand(&type1);
  auto value = model->addOperand(&type2);
  auto output = model->addOperand(&type5);
  auto hits = model->addOperand(&type6);
  auto value_tmp = model->addOperand(&type2);
  auto dummy1 = model->addOperand(&type7);
  auto param1 = model->addOperand(&type8);
  // Phase 2, operations
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {value_tmp, dummy1, param1}, {value});
  model->addOperation(ANEURALNETWORKS_HASHTABLE_LOOKUP, {lookup, key, value}, {output, hits});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup, key, value_tmp},
    {output, hits});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::hashtable_lookup_float
