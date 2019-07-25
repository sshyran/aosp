// Generated from resize_bilinear_2_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::resize_bilinear_2_relaxed {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto width = model->addOperand(&type2);
  auto height = model->addOperand(&type2);
  auto op2 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t width_init[] = {3};
  model->setOperandValue(width, width_init, sizeof(int32_t) * 1);
  static int32_t height_init[] = {3};
  model->setOperandValue(height, height_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, width, height}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_2_relaxed
namespace generated_tests::resize_bilinear_2_relaxed {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto width = model->addOperand(&type2);
  auto height = model->addOperand(&type2);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t width_init[] = {3};
  model->setOperandValue(width, width_init, sizeof(int32_t) * 1);
  static int32_t height_init[] = {3};
  model->setOperandValue(height, height_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, width, height}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_2_relaxed
namespace generated_tests::resize_bilinear_2_relaxed {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  OperandType type2(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto width = model->addOperand(&type2);
  auto height = model->addOperand(&type2);
  auto op2 = model->addOperand(&type1);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type4);
  auto param = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t width_init[] = {3};
  model->setOperandValue(width, width_init, sizeof(int32_t) * 1);
  static int32_t height_init[] = {3};
  model->setOperandValue(height, height_init, sizeof(int32_t) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, width, height}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_2_relaxed
namespace generated_tests::resize_bilinear_2_relaxed {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto width = model->addOperand(&type2);
  auto height = model->addOperand(&type2);
  auto op2 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t width_init[] = {3};
  model->setOperandValue(width, width_init, sizeof(int32_t) * 1);
  static int32_t height_init[] = {3};
  model->setOperandValue(height, height_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param1}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, width, height}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_2_relaxed
