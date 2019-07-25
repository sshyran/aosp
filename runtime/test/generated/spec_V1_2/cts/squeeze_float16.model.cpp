// Generated from squeeze_float16.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::squeeze_float16 {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 1, 1, 2});
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::TENSOR_FLOAT16, {4, 2});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto squeezeDims = model->addOperand(&type1);
  auto output = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t squeezeDims_init[] = {1, 2};
  model->setOperandValue(squeezeDims, squeezeDims_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_SQUEEZE, {input, squeezeDims}, {output});
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

} // namespace generated_tests::squeeze_float16
namespace generated_tests::squeeze_float16 {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 1, 1, 2});
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto squeezeDims = model->addOperand(&type1);
  auto output = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t squeezeDims_init[] = {1, 2};
  model->setOperandValue(squeezeDims, squeezeDims_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_SQUEEZE, {input, squeezeDims}, {output});
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

} // namespace generated_tests::squeeze_float16
namespace generated_tests::squeeze_float16 {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 1, 1, 2});
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::TENSOR_FLOAT16, {4, 2});
  OperandType type4(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto squeezeDims = model->addOperand(&type1);
  auto output = model->addOperand(&type2);
  auto input_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t squeezeDims_init[] = {1, 2};
  model->setOperandValue(squeezeDims, squeezeDims_init, sizeof(int32_t) * 2);
  static _Float16 dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(_Float16) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy, param}, {input});
  model->addOperation(ANEURALNETWORKS_SQUEEZE, {input, squeezeDims}, {output});
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

} // namespace generated_tests::squeeze_float16
namespace generated_tests::squeeze_float16 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 1, 1, 2});
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto squeezeDims = model->addOperand(&type1);
  auto output = model->addOperand(&type3);
  auto input_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t squeezeDims_init[] = {1, 2};
  model->setOperandValue(squeezeDims, squeezeDims_init, sizeof(int32_t) * 2);
  static _Float16 dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(_Float16) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy1, param1}, {input});
  model->addOperation(ANEURALNETWORKS_SQUEEZE, {input, squeezeDims}, {output});
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

} // namespace generated_tests::squeeze_float16
namespace generated_tests::squeeze_float16 {

void CreateModel_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 1, 1, 2});
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::TENSOR_FLOAT16, {4, 2});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto squeezeDims = model->addOperand(&type1);
  auto output = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SQUEEZE, {input, squeezeDims}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, squeezeDims},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::squeeze_float16
namespace generated_tests::squeeze_float16 {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 1, 1, 2});
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto squeezeDims = model->addOperand(&type1);
  auto output = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SQUEEZE, {input, squeezeDims}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, squeezeDims},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::squeeze_float16
namespace generated_tests::squeeze_float16 {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 1, 1, 2});
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::TENSOR_FLOAT16, {4, 2});
  OperandType type4(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto squeezeDims = model->addOperand(&type1);
  auto output = model->addOperand(&type2);
  auto input_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type5);
  // Phase 2, operations
  static _Float16 dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy2, param2}, {input});
  model->addOperation(ANEURALNETWORKS_SQUEEZE, {input, squeezeDims}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {squeezeDims, input_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::squeeze_float16
namespace generated_tests::squeeze_float16 {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 1, 1, 2});
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto squeezeDims = model->addOperand(&type1);
  auto output = model->addOperand(&type3);
  auto input_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  // Phase 2, operations
  static _Float16 dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(_Float16) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy3, param3}, {input});
  model->addOperation(ANEURALNETWORKS_SQUEEZE, {input, squeezeDims}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {squeezeDims, input_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::squeeze_float16
