// Generated from avg_pool_float_4_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::avg_pool_float_4_relaxed {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 52, 60, 3});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 11, 13, 3});
  // Phase 1, operands
  auto i0 = model->addOperand(&type0);
  auto padding = model->addOperand(&type1);
  auto stride = model->addOperand(&type1);
  auto filter = model->addOperand(&type1);
  auto relu6_activation = model->addOperand(&type1);
  auto output = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t padding_init[] = {50};
  model->setOperandValue(padding, padding_init, sizeof(int32_t) * 1);
  static int32_t stride_init[] = {5};
  model->setOperandValue(stride, stride_init, sizeof(int32_t) * 1);
  static int32_t filter_init[] = {100};
  model->setOperandValue(filter, filter_init, sizeof(int32_t) * 1);
  static int32_t relu6_activation_init[] = {3};
  model->setOperandValue(relu6_activation, relu6_activation_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_AVERAGE_POOL_2D, {i0, padding, padding, padding, padding, stride, stride, filter, filter, relu6_activation}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {i0},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::avg_pool_float_4_relaxed
namespace generated_tests::avg_pool_float_4_relaxed {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 52, 60, 3});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto i0 = model->addOperand(&type0);
  auto padding = model->addOperand(&type1);
  auto stride = model->addOperand(&type1);
  auto filter = model->addOperand(&type1);
  auto relu6_activation = model->addOperand(&type1);
  auto output = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t padding_init[] = {50};
  model->setOperandValue(padding, padding_init, sizeof(int32_t) * 1);
  static int32_t stride_init[] = {5};
  model->setOperandValue(stride, stride_init, sizeof(int32_t) * 1);
  static int32_t filter_init[] = {100};
  model->setOperandValue(filter, filter_init, sizeof(int32_t) * 1);
  static int32_t relu6_activation_init[] = {3};
  model->setOperandValue(relu6_activation, relu6_activation_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_AVERAGE_POOL_2D, {i0, padding, padding, padding, padding, stride, stride, filter, filter, relu6_activation}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {i0},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::avg_pool_float_4_relaxed
namespace generated_tests::avg_pool_float_4_relaxed {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 52, 60, 3});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 11, 13, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto i0 = model->addOperand(&type0);
  auto padding = model->addOperand(&type1);
  auto stride = model->addOperand(&type1);
  auto filter = model->addOperand(&type1);
  auto relu6_activation = model->addOperand(&type1);
  auto output = model->addOperand(&type2);
  auto i0_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type4);
  auto param = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t padding_init[] = {50};
  model->setOperandValue(padding, padding_init, sizeof(int32_t) * 1);
  static int32_t stride_init[] = {5};
  model->setOperandValue(stride, stride_init, sizeof(int32_t) * 1);
  static int32_t filter_init[] = {100};
  model->setOperandValue(filter, filter_init, sizeof(int32_t) * 1);
  static int32_t relu6_activation_init[] = {3};
  model->setOperandValue(relu6_activation, relu6_activation_init, sizeof(int32_t) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {i0_tmp, dummy, param}, {i0});
  model->addOperation(ANEURALNETWORKS_AVERAGE_POOL_2D, {i0, padding, padding, padding, padding, stride, stride, filter, filter, relu6_activation}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {i0_tmp},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::avg_pool_float_4_relaxed
namespace generated_tests::avg_pool_float_4_relaxed {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 52, 60, 3});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto i0 = model->addOperand(&type0);
  auto padding = model->addOperand(&type1);
  auto stride = model->addOperand(&type1);
  auto filter = model->addOperand(&type1);
  auto relu6_activation = model->addOperand(&type1);
  auto output = model->addOperand(&type3);
  auto i0_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t padding_init[] = {50};
  model->setOperandValue(padding, padding_init, sizeof(int32_t) * 1);
  static int32_t stride_init[] = {5};
  model->setOperandValue(stride, stride_init, sizeof(int32_t) * 1);
  static int32_t filter_init[] = {100};
  model->setOperandValue(filter, filter_init, sizeof(int32_t) * 1);
  static int32_t relu6_activation_init[] = {3};
  model->setOperandValue(relu6_activation, relu6_activation_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {i0_tmp, dummy1, param1}, {i0});
  model->addOperation(ANEURALNETWORKS_AVERAGE_POOL_2D, {i0, padding, padding, padding, padding, stride, stride, filter, filter, relu6_activation}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {i0_tmp},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::avg_pool_float_4_relaxed
