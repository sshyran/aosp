// Generated from split_quant8_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::split_quant8_2 {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 2.0f, 3);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {1, 3}, 2.0f, 3);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto axis = model->addOperand(&type1);
  auto num_splits = model->addOperand(&type1);
  auto output0 = model->addOperand(&type2);
  auto output1 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static int32_t num_splits_init[] = {2};
  model->setOperandValue(num_splits, num_splits_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPLIT, {input0, axis, num_splits}, {output0, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0, output1});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::split_quant8_2
namespace generated_tests::split_quant8_2 {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 2.0f, 3);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 2.0f, 3);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto axis = model->addOperand(&type1);
  auto num_splits = model->addOperand(&type1);
  auto output0 = model->addOperand(&type3);
  auto output1 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static int32_t num_splits_init[] = {2};
  model->setOperandValue(num_splits, num_splits_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPLIT, {input0, axis, num_splits}, {output0, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0, output1});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::split_quant8_2
namespace generated_tests::split_quant8_2 {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 2.0f, 3);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {1, 3}, 2.0f, 3);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {1}, 2.0f, 3);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto axis = model->addOperand(&type1);
  auto num_splits = model->addOperand(&type1);
  auto output0 = model->addOperand(&type2);
  auto output1 = model->addOperand(&type2);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type4);
  auto param = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static int32_t num_splits_init[] = {2};
  model->setOperandValue(num_splits, num_splits_init, sizeof(int32_t) * 1);
  static uint8_t dummy_init[] = {3};
  model->setOperandValue(dummy, dummy_init, sizeof(uint8_t) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy, param}, {input0});
  model->addOperation(ANEURALNETWORKS_SPLIT, {input0, axis, num_splits}, {output0, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output0, output1});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::split_quant8_2
namespace generated_tests::split_quant8_2 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 2.0f, 3);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 2.0f, 3);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {1}, 2.0f, 3);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto axis = model->addOperand(&type1);
  auto num_splits = model->addOperand(&type1);
  auto output0 = model->addOperand(&type3);
  auto output1 = model->addOperand(&type3);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static int32_t num_splits_init[] = {2};
  model->setOperandValue(num_splits, num_splits_init, sizeof(int32_t) * 1);
  static uint8_t dummy1_init[] = {3};
  model->setOperandValue(dummy1, dummy1_init, sizeof(uint8_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy1, param1}, {input0});
  model->addOperation(ANEURALNETWORKS_SPLIT, {input0, axis, num_splits}, {output0, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output0, output1});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::split_quant8_2
namespace generated_tests::split_quant8_2 {

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 2.0f, 3);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {1, 3}, 2.0f, 3);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto axis = model->addOperand(&type1);
  auto num_splits = model->addOperand(&type1);
  auto output0 = model->addOperand(&type2);
  auto output1 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static int32_t num_splits_init[] = {2};
  model->setOperandValue(num_splits, num_splits_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPLIT, {input0, axis, num_splits}, {output0, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0, output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::split_quant8_2
namespace generated_tests::split_quant8_2 {

void CreateModel_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 2.0f, 3);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 2.0f, 3);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto axis = model->addOperand(&type1);
  auto num_splits = model->addOperand(&type1);
  auto output0 = model->addOperand(&type3);
  auto output1 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static int32_t num_splits_init[] = {2};
  model->setOperandValue(num_splits, num_splits_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SPLIT, {input0, axis, num_splits}, {output0, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0, output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::split_quant8_2
namespace generated_tests::split_quant8_2 {

void CreateModel_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 2.0f, 3);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {1, 3}, 2.0f, 3);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {1}, 2.0f, 3);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto axis = model->addOperand(&type1);
  auto num_splits = model->addOperand(&type1);
  auto output0 = model->addOperand(&type2);
  auto output1 = model->addOperand(&type2);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static int32_t num_splits_init[] = {2};
  model->setOperandValue(num_splits, num_splits_init, sizeof(int32_t) * 1);
  static uint8_t dummy2_init[] = {3};
  model->setOperandValue(dummy2, dummy2_init, sizeof(uint8_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy2, param2}, {input0});
  model->addOperation(ANEURALNETWORKS_SPLIT, {input0, axis, num_splits}, {output0, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output0, output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::split_quant8_2
namespace generated_tests::split_quant8_2 {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 2.0f, 3);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 2.0f, 3);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {1}, 2.0f, 3);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto axis = model->addOperand(&type1);
  auto num_splits = model->addOperand(&type1);
  auto output0 = model->addOperand(&type3);
  auto output1 = model->addOperand(&type3);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static int32_t num_splits_init[] = {2};
  model->setOperandValue(num_splits, num_splits_init, sizeof(int32_t) * 1);
  static uint8_t dummy3_init[] = {3};
  model->setOperandValue(dummy3, dummy3_init, sizeof(uint8_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy3, param3}, {input0});
  model->addOperation(ANEURALNETWORKS_SPLIT, {input0, axis, num_splits}, {output0, output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output0, output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::split_quant8_2
