// Generated from strided_slice_float_4.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::strided_slice_float_4 {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {4});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto begins = model->addOperand(&type1);
  auto ends = model->addOperand(&type1);
  auto strides = model->addOperand(&type1);
  auto beginMask = model->addOperand(&type2);
  auto endMask = model->addOperand(&type2);
  auto shrinkAxisMask = model->addOperand(&type2);
  auto output = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t begins_init[] = {1};
  model->setOperandValue(begins, begins_init, sizeof(int32_t) * 1);
  static int32_t ends_init[] = {-2};
  model->setOperandValue(ends, ends_init, sizeof(int32_t) * 1);
  static int32_t strides_init[] = {1};
  model->setOperandValue(strides, strides_init, sizeof(int32_t) * 1);
  static int32_t beginMask_init[] = {0};
  model->setOperandValue(beginMask, beginMask_init, sizeof(int32_t) * 1);
  static int32_t endMask_init[] = {0};
  model->setOperandValue(endMask, endMask_init, sizeof(int32_t) * 1);
  static int32_t shrinkAxisMask_init[] = {0};
  model->setOperandValue(shrinkAxisMask, shrinkAxisMask_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_STRIDED_SLICE, {input, begins, ends, strides, beginMask, endMask, shrinkAxisMask}, {output});
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

} // namespace generated_tests::strided_slice_float_4
namespace generated_tests::strided_slice_float_4 {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {4});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto begins = model->addOperand(&type1);
  auto ends = model->addOperand(&type1);
  auto strides = model->addOperand(&type1);
  auto beginMask = model->addOperand(&type2);
  auto endMask = model->addOperand(&type2);
  auto shrinkAxisMask = model->addOperand(&type2);
  auto output = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t begins_init[] = {1};
  model->setOperandValue(begins, begins_init, sizeof(int32_t) * 1);
  static int32_t ends_init[] = {-2};
  model->setOperandValue(ends, ends_init, sizeof(int32_t) * 1);
  static int32_t strides_init[] = {1};
  model->setOperandValue(strides, strides_init, sizeof(int32_t) * 1);
  static int32_t beginMask_init[] = {0};
  model->setOperandValue(beginMask, beginMask_init, sizeof(int32_t) * 1);
  static int32_t endMask_init[] = {0};
  model->setOperandValue(endMask, endMask_init, sizeof(int32_t) * 1);
  static int32_t shrinkAxisMask_init[] = {0};
  model->setOperandValue(shrinkAxisMask, shrinkAxisMask_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_STRIDED_SLICE, {input, begins, ends, strides, beginMask, endMask, shrinkAxisMask}, {output});
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

} // namespace generated_tests::strided_slice_float_4
namespace generated_tests::strided_slice_float_4 {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {4});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto begins = model->addOperand(&type1);
  auto ends = model->addOperand(&type1);
  auto strides = model->addOperand(&type1);
  auto beginMask = model->addOperand(&type2);
  auto endMask = model->addOperand(&type2);
  auto shrinkAxisMask = model->addOperand(&type2);
  auto output = model->addOperand(&type3);
  auto input_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type3);
  auto param = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t begins_init[] = {1};
  model->setOperandValue(begins, begins_init, sizeof(int32_t) * 1);
  static int32_t ends_init[] = {-2};
  model->setOperandValue(ends, ends_init, sizeof(int32_t) * 1);
  static int32_t strides_init[] = {1};
  model->setOperandValue(strides, strides_init, sizeof(int32_t) * 1);
  static int32_t beginMask_init[] = {0};
  model->setOperandValue(beginMask, beginMask_init, sizeof(int32_t) * 1);
  static int32_t endMask_init[] = {0};
  model->setOperandValue(endMask, endMask_init, sizeof(int32_t) * 1);
  static int32_t shrinkAxisMask_init[] = {0};
  model->setOperandValue(shrinkAxisMask, shrinkAxisMask_init, sizeof(int32_t) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy, param}, {input});
  model->addOperation(ANEURALNETWORKS_STRIDED_SLICE, {input, begins, ends, strides, beginMask, endMask, shrinkAxisMask}, {output});
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

} // namespace generated_tests::strided_slice_float_4
namespace generated_tests::strided_slice_float_4 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {4});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto begins = model->addOperand(&type1);
  auto ends = model->addOperand(&type1);
  auto strides = model->addOperand(&type1);
  auto beginMask = model->addOperand(&type2);
  auto endMask = model->addOperand(&type2);
  auto shrinkAxisMask = model->addOperand(&type2);
  auto output = model->addOperand(&type4);
  auto input_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type3);
  auto param1 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t begins_init[] = {1};
  model->setOperandValue(begins, begins_init, sizeof(int32_t) * 1);
  static int32_t ends_init[] = {-2};
  model->setOperandValue(ends, ends_init, sizeof(int32_t) * 1);
  static int32_t strides_init[] = {1};
  model->setOperandValue(strides, strides_init, sizeof(int32_t) * 1);
  static int32_t beginMask_init[] = {0};
  model->setOperandValue(beginMask, beginMask_init, sizeof(int32_t) * 1);
  static int32_t endMask_init[] = {0};
  model->setOperandValue(endMask, endMask_init, sizeof(int32_t) * 1);
  static int32_t shrinkAxisMask_init[] = {0};
  model->setOperandValue(shrinkAxisMask, shrinkAxisMask_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy1, param1}, {input});
  model->addOperation(ANEURALNETWORKS_STRIDED_SLICE, {input, begins, ends, strides, beginMask, endMask, shrinkAxisMask}, {output});
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

} // namespace generated_tests::strided_slice_float_4
namespace generated_tests::strided_slice_float_4 {

void CreateModel_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {4});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto begins = model->addOperand(&type1);
  auto ends = model->addOperand(&type1);
  auto strides = model->addOperand(&type1);
  auto beginMask = model->addOperand(&type2);
  auto endMask = model->addOperand(&type2);
  auto shrinkAxisMask = model->addOperand(&type2);
  auto output = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t beginMask_init[] = {0};
  model->setOperandValue(beginMask, beginMask_init, sizeof(int32_t) * 1);
  static int32_t endMask_init[] = {0};
  model->setOperandValue(endMask, endMask_init, sizeof(int32_t) * 1);
  static int32_t shrinkAxisMask_init[] = {0};
  model->setOperandValue(shrinkAxisMask, shrinkAxisMask_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_STRIDED_SLICE, {input, begins, ends, strides, beginMask, endMask, shrinkAxisMask}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, begins, ends, strides},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::strided_slice_float_4
namespace generated_tests::strided_slice_float_4 {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {4});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto begins = model->addOperand(&type1);
  auto ends = model->addOperand(&type1);
  auto strides = model->addOperand(&type1);
  auto beginMask = model->addOperand(&type2);
  auto endMask = model->addOperand(&type2);
  auto shrinkAxisMask = model->addOperand(&type2);
  auto output = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t beginMask_init[] = {0};
  model->setOperandValue(beginMask, beginMask_init, sizeof(int32_t) * 1);
  static int32_t endMask_init[] = {0};
  model->setOperandValue(endMask, endMask_init, sizeof(int32_t) * 1);
  static int32_t shrinkAxisMask_init[] = {0};
  model->setOperandValue(shrinkAxisMask, shrinkAxisMask_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_STRIDED_SLICE, {input, begins, ends, strides, beginMask, endMask, shrinkAxisMask}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, begins, ends, strides},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::strided_slice_float_4
namespace generated_tests::strided_slice_float_4 {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {4});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto begins = model->addOperand(&type1);
  auto ends = model->addOperand(&type1);
  auto strides = model->addOperand(&type1);
  auto beginMask = model->addOperand(&type2);
  auto endMask = model->addOperand(&type2);
  auto shrinkAxisMask = model->addOperand(&type2);
  auto output = model->addOperand(&type3);
  auto input_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type3);
  auto param2 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t beginMask_init[] = {0};
  model->setOperandValue(beginMask, beginMask_init, sizeof(int32_t) * 1);
  static int32_t endMask_init[] = {0};
  model->setOperandValue(endMask, endMask_init, sizeof(int32_t) * 1);
  static int32_t shrinkAxisMask_init[] = {0};
  model->setOperandValue(shrinkAxisMask, shrinkAxisMask_init, sizeof(int32_t) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy2, param2}, {input});
  model->addOperation(ANEURALNETWORKS_STRIDED_SLICE, {input, begins, ends, strides, beginMask, endMask, shrinkAxisMask}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begins, ends, strides, input_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::strided_slice_float_4
namespace generated_tests::strided_slice_float_4 {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {4});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto begins = model->addOperand(&type1);
  auto ends = model->addOperand(&type1);
  auto strides = model->addOperand(&type1);
  auto beginMask = model->addOperand(&type2);
  auto endMask = model->addOperand(&type2);
  auto shrinkAxisMask = model->addOperand(&type2);
  auto output = model->addOperand(&type4);
  auto input_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t beginMask_init[] = {0};
  model->setOperandValue(beginMask, beginMask_init, sizeof(int32_t) * 1);
  static int32_t endMask_init[] = {0};
  model->setOperandValue(endMask, endMask_init, sizeof(int32_t) * 1);
  static int32_t shrinkAxisMask_init[] = {0};
  model->setOperandValue(shrinkAxisMask, shrinkAxisMask_init, sizeof(int32_t) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy3, param3}, {input});
  model->addOperation(ANEURALNETWORKS_STRIDED_SLICE, {input, begins, ends, strides, beginMask, endMask, shrinkAxisMask}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begins, ends, strides, input_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::strided_slice_float_4
