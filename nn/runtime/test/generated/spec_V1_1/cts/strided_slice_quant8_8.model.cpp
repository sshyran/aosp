// Generated from strided_slice_quant8_8.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::strided_slice_quant8_8 {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 1.0f, 0);
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 3}, 1.0f, 0);
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
  static int32_t begins_init[] = {1, -1};
  model->setOperandValue(begins, begins_init, sizeof(int32_t) * 2);
  static int32_t ends_init[] = {2, -4};
  model->setOperandValue(ends, ends_init, sizeof(int32_t) * 2);
  static int32_t strides_init[] = {2, -1};
  model->setOperandValue(strides, strides_init, sizeof(int32_t) * 2);
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

} // namespace generated_tests::strided_slice_quant8_8
namespace generated_tests::strided_slice_quant8_8 {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 1.0f, 0);
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 1.0f, 0);
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
  static int32_t begins_init[] = {1, -1};
  model->setOperandValue(begins, begins_init, sizeof(int32_t) * 2);
  static int32_t ends_init[] = {2, -4};
  model->setOperandValue(ends, ends_init, sizeof(int32_t) * 2);
  static int32_t strides_init[] = {2, -1};
  model->setOperandValue(strides, strides_init, sizeof(int32_t) * 2);
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

} // namespace generated_tests::strided_slice_quant8_8
namespace generated_tests::strided_slice_quant8_8 {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 1.0f, 0);
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 3}, 1.0f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
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
  auto dummy = model->addOperand(&type5);
  auto param = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t begins_init[] = {1, -1};
  model->setOperandValue(begins, begins_init, sizeof(int32_t) * 2);
  static int32_t ends_init[] = {2, -4};
  model->setOperandValue(ends, ends_init, sizeof(int32_t) * 2);
  static int32_t strides_init[] = {2, -1};
  model->setOperandValue(strides, strides_init, sizeof(int32_t) * 2);
  static int32_t beginMask_init[] = {0};
  model->setOperandValue(beginMask, beginMask_init, sizeof(int32_t) * 1);
  static int32_t endMask_init[] = {0};
  model->setOperandValue(endMask, endMask_init, sizeof(int32_t) * 1);
  static int32_t shrinkAxisMask_init[] = {0};
  model->setOperandValue(shrinkAxisMask, shrinkAxisMask_init, sizeof(int32_t) * 1);
  static uint8_t dummy_init[] = {0};
  model->setOperandValue(dummy, dummy_init, sizeof(uint8_t) * 1);
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

} // namespace generated_tests::strided_slice_quant8_8
namespace generated_tests::strided_slice_quant8_8 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 1.0f, 0);
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 1.0f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
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
  auto dummy1 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t begins_init[] = {1, -1};
  model->setOperandValue(begins, begins_init, sizeof(int32_t) * 2);
  static int32_t ends_init[] = {2, -4};
  model->setOperandValue(ends, ends_init, sizeof(int32_t) * 2);
  static int32_t strides_init[] = {2, -1};
  model->setOperandValue(strides, strides_init, sizeof(int32_t) * 2);
  static int32_t beginMask_init[] = {0};
  model->setOperandValue(beginMask, beginMask_init, sizeof(int32_t) * 1);
  static int32_t endMask_init[] = {0};
  model->setOperandValue(endMask, endMask_init, sizeof(int32_t) * 1);
  static int32_t shrinkAxisMask_init[] = {0};
  model->setOperandValue(shrinkAxisMask, shrinkAxisMask_init, sizeof(int32_t) * 1);
  static uint8_t dummy1_init[] = {0};
  model->setOperandValue(dummy1, dummy1_init, sizeof(uint8_t) * 1);
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

} // namespace generated_tests::strided_slice_quant8_8
namespace generated_tests::strided_slice_quant8_8 {

void CreateModel_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 1.0f, 0);
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 3}, 1.0f, 0);
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

} // namespace generated_tests::strided_slice_quant8_8
namespace generated_tests::strided_slice_quant8_8 {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 1.0f, 0);
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 1.0f, 0);
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

} // namespace generated_tests::strided_slice_quant8_8
namespace generated_tests::strided_slice_quant8_8 {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 1.0f, 0);
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 3}, 1.0f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
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
  auto dummy2 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t beginMask_init[] = {0};
  model->setOperandValue(beginMask, beginMask_init, sizeof(int32_t) * 1);
  static int32_t endMask_init[] = {0};
  model->setOperandValue(endMask, endMask_init, sizeof(int32_t) * 1);
  static int32_t shrinkAxisMask_init[] = {0};
  model->setOperandValue(shrinkAxisMask, shrinkAxisMask_init, sizeof(int32_t) * 1);
  static uint8_t dummy2_init[] = {0};
  model->setOperandValue(dummy2, dummy2_init, sizeof(uint8_t) * 1);
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

} // namespace generated_tests::strided_slice_quant8_8
namespace generated_tests::strided_slice_quant8_8 {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 1.0f, 0);
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type2(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 1.0f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
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
  auto dummy3 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t beginMask_init[] = {0};
  model->setOperandValue(beginMask, beginMask_init, sizeof(int32_t) * 1);
  static int32_t endMask_init[] = {0};
  model->setOperandValue(endMask, endMask_init, sizeof(int32_t) * 1);
  static int32_t shrinkAxisMask_init[] = {0};
  model->setOperandValue(shrinkAxisMask, shrinkAxisMask_init, sizeof(int32_t) * 1);
  static uint8_t dummy3_init[] = {0};
  model->setOperandValue(dummy3, dummy3_init, sizeof(uint8_t) * 1);
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

} // namespace generated_tests::strided_slice_quant8_8
