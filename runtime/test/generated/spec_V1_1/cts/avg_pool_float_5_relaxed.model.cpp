// Generated from avg_pool_float_5_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::avg_pool_float_5_relaxed {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto pad_same = model->addOperand(&type1);
  auto cons2 = model->addOperand(&type1);
  auto act_none = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t pad_same_init[] = {1};
  model->setOperandValue(pad_same, pad_same_init, sizeof(int32_t) * 1);
  static int32_t cons2_init[] = {2};
  model->setOperandValue(cons2, cons2_init, sizeof(int32_t) * 1);
  static int32_t act_none_init[] = {0};
  model->setOperandValue(act_none, act_none_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_AVERAGE_POOL_2D, {op1, pad_same, cons2, cons2, cons2, cons2, act_none}, {op3});
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

} // namespace generated_tests::avg_pool_float_5_relaxed
namespace generated_tests::avg_pool_float_5_relaxed {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto pad_same = model->addOperand(&type1);
  auto cons2 = model->addOperand(&type1);
  auto act_none = model->addOperand(&type1);
  auto op3 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t pad_same_init[] = {1};
  model->setOperandValue(pad_same, pad_same_init, sizeof(int32_t) * 1);
  static int32_t cons2_init[] = {2};
  model->setOperandValue(cons2, cons2_init, sizeof(int32_t) * 1);
  static int32_t act_none_init[] = {0};
  model->setOperandValue(act_none, act_none_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_AVERAGE_POOL_2D, {op1, pad_same, cons2, cons2, cons2, cons2, act_none}, {op3});
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

} // namespace generated_tests::avg_pool_float_5_relaxed
namespace generated_tests::avg_pool_float_5_relaxed {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto pad_same = model->addOperand(&type1);
  auto cons2 = model->addOperand(&type1);
  auto act_none = model->addOperand(&type1);
  auto op3 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type4);
  auto param = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t pad_same_init[] = {1};
  model->setOperandValue(pad_same, pad_same_init, sizeof(int32_t) * 1);
  static int32_t cons2_init[] = {2};
  model->setOperandValue(cons2, cons2_init, sizeof(int32_t) * 1);
  static int32_t act_none_init[] = {0};
  model->setOperandValue(act_none, act_none_init, sizeof(int32_t) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param}, {op1});
  model->addOperation(ANEURALNETWORKS_AVERAGE_POOL_2D, {op1, pad_same, cons2, cons2, cons2, cons2, act_none}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::avg_pool_float_5_relaxed
namespace generated_tests::avg_pool_float_5_relaxed {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto pad_same = model->addOperand(&type1);
  auto cons2 = model->addOperand(&type1);
  auto act_none = model->addOperand(&type1);
  auto op3 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t pad_same_init[] = {1};
  model->setOperandValue(pad_same, pad_same_init, sizeof(int32_t) * 1);
  static int32_t cons2_init[] = {2};
  model->setOperandValue(cons2, cons2_init, sizeof(int32_t) * 1);
  static int32_t act_none_init[] = {0};
  model->setOperandValue(act_none, act_none_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param1}, {op1});
  model->addOperation(ANEURALNETWORKS_AVERAGE_POOL_2D, {op1, pad_same, cons2, cons2, cons2, cons2, act_none}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::avg_pool_float_5_relaxed
