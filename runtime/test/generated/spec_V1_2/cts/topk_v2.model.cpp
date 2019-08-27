// Generated from topk_v2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::topk_v2 {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto k = model->addOperand(&type1);
  auto out_values = model->addOperand(&type0);
  auto out_indices = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t k_init[] = {2};
  model->setOperandValue(k, k_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input, k}, {out_values, out_indices});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input},
    {out_values, out_indices});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto k = model->addOperand(&type1);
  auto out_values = model->addOperand(&type11);
  auto out_indices = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t k_init[] = {2};
  model->setOperandValue(k, k_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input, k}, {out_values, out_indices});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input},
    {out_values, out_indices});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto k = model->addOperand(&type1);
  auto out_values = model->addOperand(&type0);
  auto out_indices = model->addOperand(&type2);
  auto input_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type13);
  auto param = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k_init[] = {2};
  model->setOperandValue(k, k_init, sizeof(int32_t) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy, param}, {input});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input, k}, {out_values, out_indices});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_tmp},
    {out_values, out_indices});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto k = model->addOperand(&type1);
  auto out_values = model->addOperand(&type11);
  auto out_indices = model->addOperand(&type12);
  auto input_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type13);
  auto param1 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k_init[] = {2};
  model->setOperandValue(k, k_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy1, param1}, {input});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input, k}, {out_values, out_indices});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_tmp},
    {out_values, out_indices});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto k = model->addOperand(&type1);
  auto out_values = model->addOperand(&type0);
  auto out_indices = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t k_init[] = {2};
  model->setOperandValue(k, k_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input, k}, {out_values, out_indices});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input},
    {out_values, out_indices});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto k = model->addOperand(&type1);
  auto out_values = model->addOperand(&type11);
  auto out_indices = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t k_init[] = {2};
  model->setOperandValue(k, k_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input, k}, {out_values, out_indices});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input},
    {out_values, out_indices});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto k = model->addOperand(&type1);
  auto out_values = model->addOperand(&type0);
  auto out_indices = model->addOperand(&type2);
  auto input_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type13);
  auto param2 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k_init[] = {2};
  model->setOperandValue(k, k_init, sizeof(int32_t) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy2, param2}, {input});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input, k}, {out_values, out_indices});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_tmp},
    {out_values, out_indices});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto k = model->addOperand(&type1);
  auto out_values = model->addOperand(&type11);
  auto out_indices = model->addOperand(&type12);
  auto input_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type13);
  auto param3 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k_init[] = {2};
  model->setOperandValue(k, k_init, sizeof(int32_t) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy3, param3}, {input});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input, k}, {out_values, out_indices});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_tmp},
    {out_values, out_indices});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  // Phase 1, operands
  auto input = model->addOperand(&type14);
  auto k = model->addOperand(&type1);
  auto out_values = model->addOperand(&type14);
  auto out_indices = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t k_init[] = {2};
  model->setOperandValue(k, k_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input, k}, {out_values, out_indices});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input},
    {out_values, out_indices});
  assert(model->isValid());
}

bool is_ignored_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type15(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input = model->addOperand(&type14);
  auto k = model->addOperand(&type1);
  auto out_values = model->addOperand(&type15);
  auto out_indices = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t k_init[] = {2};
  model->setOperandValue(k, k_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input, k}, {out_values, out_indices});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input},
    {out_values, out_indices});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type16(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type17(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  // Phase 1, operands
  auto input = model->addOperand(&type16);
  auto k = model->addOperand(&type1);
  auto out_values = model->addOperand(&type14);
  auto out_indices = model->addOperand(&type2);
  auto input_tmp = model->addOperand(&type16);
  auto dummy4 = model->addOperand(&type17);
  auto param4 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k_init[] = {2};
  model->setOperandValue(k, k_init, sizeof(int32_t) * 1);
  static _Float16 dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(_Float16) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy4, param4}, {input});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input, k}, {out_values, out_indices});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_tmp},
    {out_values, out_indices});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type15(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type16(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type17(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto input = model->addOperand(&type16);
  auto k = model->addOperand(&type1);
  auto out_values = model->addOperand(&type15);
  auto out_indices = model->addOperand(&type12);
  auto input_tmp = model->addOperand(&type16);
  auto dummy5 = model->addOperand(&type17);
  auto param5 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k_init[] = {2};
  model->setOperandValue(k, k_init, sizeof(int32_t) * 1);
  static _Float16 dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(_Float16) * 1);
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy5, param5}, {input});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input, k}, {out_values, out_indices});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input_tmp},
    {out_values, out_indices});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto input1 = model->addOperand(&type3);
  auto k1 = model->addOperand(&type1);
  auto out_values1 = model->addOperand(&type0);
  auto out_indices1 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t k1_init[] = {2};
  model->setOperandValue(k1, k1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input1, k1}, {out_values1, out_indices1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1},
    {out_values1, out_indices1});
  assert(model->isValid());
}

bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto input1 = model->addOperand(&type3);
  auto k1 = model->addOperand(&type1);
  auto out_values1 = model->addOperand(&type11);
  auto out_indices1 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t k1_init[] = {2};
  model->setOperandValue(k1, k1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input1, k1}, {out_values1, out_indices1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1},
    {out_values1, out_indices1});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto input1 = model->addOperand(&type3);
  auto k1 = model->addOperand(&type1);
  auto out_values1 = model->addOperand(&type0);
  auto out_indices1 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type3);
  auto dummy6 = model->addOperand(&type13);
  auto param6 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k1_init[] = {2};
  model->setOperandValue(k1, k1_init, sizeof(int32_t) * 1);
  static float dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(float) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy6, param6}, {input1});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input1, k1}, {out_values1, out_indices1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1_tmp},
    {out_values1, out_indices1});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto input1 = model->addOperand(&type3);
  auto k1 = model->addOperand(&type1);
  auto out_values1 = model->addOperand(&type11);
  auto out_indices1 = model->addOperand(&type12);
  auto input1_tmp = model->addOperand(&type3);
  auto dummy7 = model->addOperand(&type13);
  auto param7 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k1_init[] = {2};
  model->setOperandValue(k1, k1_init, sizeof(int32_t) * 1);
  static float dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(float) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy7, param7}, {input1});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input1, k1}, {out_values1, out_indices1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1_tmp},
    {out_values1, out_indices1});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto input1 = model->addOperand(&type3);
  auto k1 = model->addOperand(&type1);
  auto out_values1 = model->addOperand(&type0);
  auto out_indices1 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t k1_init[] = {2};
  model->setOperandValue(k1, k1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input1, k1}, {out_values1, out_indices1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1},
    {out_values1, out_indices1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto input1 = model->addOperand(&type3);
  auto k1 = model->addOperand(&type1);
  auto out_values1 = model->addOperand(&type11);
  auto out_indices1 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t k1_init[] = {2};
  model->setOperandValue(k1, k1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input1, k1}, {out_values1, out_indices1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1},
    {out_values1, out_indices1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto input1 = model->addOperand(&type3);
  auto k1 = model->addOperand(&type1);
  auto out_values1 = model->addOperand(&type0);
  auto out_indices1 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type3);
  auto dummy8 = model->addOperand(&type13);
  auto param8 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k1_init[] = {2};
  model->setOperandValue(k1, k1_init, sizeof(int32_t) * 1);
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy8, param8}, {input1});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input1, k1}, {out_values1, out_indices1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1_tmp},
    {out_values1, out_indices1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto input1 = model->addOperand(&type3);
  auto k1 = model->addOperand(&type1);
  auto out_values1 = model->addOperand(&type11);
  auto out_indices1 = model->addOperand(&type12);
  auto input1_tmp = model->addOperand(&type3);
  auto dummy9 = model->addOperand(&type13);
  auto param9 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k1_init[] = {2};
  model->setOperandValue(k1, k1_init, sizeof(int32_t) * 1);
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy9, param9}, {input1});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input1, k1}, {out_values1, out_indices1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1_tmp},
    {out_values1, out_indices1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type18(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  // Phase 1, operands
  auto input1 = model->addOperand(&type18);
  auto k1 = model->addOperand(&type1);
  auto out_values1 = model->addOperand(&type14);
  auto out_indices1 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t k1_init[] = {2};
  model->setOperandValue(k1, k1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input1, k1}, {out_values1, out_indices1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1},
    {out_values1, out_indices1});
  assert(model->isValid());
}

bool is_ignored_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type15(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {2, 3});
  // Phase 1, operands
  auto input1 = model->addOperand(&type18);
  auto k1 = model->addOperand(&type1);
  auto out_values1 = model->addOperand(&type15);
  auto out_indices1 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t k1_init[] = {2};
  model->setOperandValue(k1, k1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input1, k1}, {out_values1, out_indices1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1},
    {out_values1, out_indices1});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type17(Type::TENSOR_FLOAT16, {1});
  OperandType type19(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  // Phase 1, operands
  auto input1 = model->addOperand(&type19);
  auto k1 = model->addOperand(&type1);
  auto out_values1 = model->addOperand(&type14);
  auto out_indices1 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type19);
  auto dummy10 = model->addOperand(&type17);
  auto param10 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k1_init[] = {2};
  model->setOperandValue(k1, k1_init, sizeof(int32_t) * 1);
  static _Float16 dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(_Float16) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy10, param10}, {input1});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input1, k1}, {out_values1, out_indices1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1_tmp},
    {out_values1, out_indices1});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type15(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type17(Type::TENSOR_FLOAT16, {1});
  OperandType type19(Type::TENSOR_FLOAT16, {2, 3});
  // Phase 1, operands
  auto input1 = model->addOperand(&type19);
  auto k1 = model->addOperand(&type1);
  auto out_values1 = model->addOperand(&type15);
  auto out_indices1 = model->addOperand(&type12);
  auto input1_tmp = model->addOperand(&type19);
  auto dummy11 = model->addOperand(&type17);
  auto param11 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k1_init[] = {2};
  model->setOperandValue(k1, k1_init, sizeof(int32_t) * 1);
  static _Float16 dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(_Float16) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy11, param11}, {input1});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input1, k1}, {out_values1, out_indices1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1_tmp},
    {out_values1, out_indices1});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 4});
  // Phase 1, operands
  auto input2 = model->addOperand(&type4);
  auto k2 = model->addOperand(&type1);
  auto out_values2 = model->addOperand(&type0);
  auto out_indices2 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t k2_init[] = {2};
  model->setOperandValue(k2, k2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input2, k2}, {out_values2, out_indices2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2},
    {out_values2, out_indices2});
  assert(model->isValid());
}

bool is_ignored_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_dynamic_output_shape_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 4});
  // Phase 1, operands
  auto input2 = model->addOperand(&type4);
  auto k2 = model->addOperand(&type1);
  auto out_values2 = model->addOperand(&type11);
  auto out_indices2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t k2_init[] = {2};
  model->setOperandValue(k2, k2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input2, k2}, {out_values2, out_indices2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2},
    {out_values2, out_indices2});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 4});
  // Phase 1, operands
  auto input2 = model->addOperand(&type4);
  auto k2 = model->addOperand(&type1);
  auto out_values2 = model->addOperand(&type0);
  auto out_indices2 = model->addOperand(&type2);
  auto input2_tmp = model->addOperand(&type4);
  auto dummy12 = model->addOperand(&type13);
  auto param12 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k2_init[] = {2};
  model->setOperandValue(k2, k2_init, sizeof(int32_t) * 1);
  static float dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(float) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy12, param12}, {input2});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input2, k2}, {out_values2, out_indices2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2_tmp},
    {out_values2, out_indices2});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 4});
  // Phase 1, operands
  auto input2 = model->addOperand(&type4);
  auto k2 = model->addOperand(&type1);
  auto out_values2 = model->addOperand(&type11);
  auto out_indices2 = model->addOperand(&type12);
  auto input2_tmp = model->addOperand(&type4);
  auto dummy13 = model->addOperand(&type13);
  auto param13 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k2_init[] = {2};
  model->setOperandValue(k2, k2_init, sizeof(int32_t) * 1);
  static float dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(float) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy13, param13}, {input2});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input2, k2}, {out_values2, out_indices2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2_tmp},
    {out_values2, out_indices2});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 4});
  // Phase 1, operands
  auto input2 = model->addOperand(&type4);
  auto k2 = model->addOperand(&type1);
  auto out_values2 = model->addOperand(&type0);
  auto out_indices2 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t k2_init[] = {2};
  model->setOperandValue(k2, k2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input2, k2}, {out_values2, out_indices2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2},
    {out_values2, out_indices2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 4});
  // Phase 1, operands
  auto input2 = model->addOperand(&type4);
  auto k2 = model->addOperand(&type1);
  auto out_values2 = model->addOperand(&type11);
  auto out_indices2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t k2_init[] = {2};
  model->setOperandValue(k2, k2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input2, k2}, {out_values2, out_indices2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2},
    {out_values2, out_indices2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 4});
  // Phase 1, operands
  auto input2 = model->addOperand(&type4);
  auto k2 = model->addOperand(&type1);
  auto out_values2 = model->addOperand(&type0);
  auto out_indices2 = model->addOperand(&type2);
  auto input2_tmp = model->addOperand(&type4);
  auto dummy14 = model->addOperand(&type13);
  auto param14 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k2_init[] = {2};
  model->setOperandValue(k2, k2_init, sizeof(int32_t) * 1);
  static float dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(float) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy14, param14}, {input2});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input2, k2}, {out_values2, out_indices2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2_tmp},
    {out_values2, out_indices2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_FLOAT32, {2, 4});
  // Phase 1, operands
  auto input2 = model->addOperand(&type4);
  auto k2 = model->addOperand(&type1);
  auto out_values2 = model->addOperand(&type11);
  auto out_indices2 = model->addOperand(&type12);
  auto input2_tmp = model->addOperand(&type4);
  auto dummy15 = model->addOperand(&type13);
  auto param15 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k2_init[] = {2};
  model->setOperandValue(k2, k2_init, sizeof(int32_t) * 1);
  static float dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(float) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy15, param15}, {input2});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input2, k2}, {out_values2, out_indices2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2_tmp},
    {out_values2, out_indices2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type20(Type::TENSOR_FLOAT16, {2, 4});
  // Phase 1, operands
  auto input2 = model->addOperand(&type20);
  auto k2 = model->addOperand(&type1);
  auto out_values2 = model->addOperand(&type14);
  auto out_indices2 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t k2_init[] = {2};
  model->setOperandValue(k2, k2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input2, k2}, {out_values2, out_indices2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2},
    {out_values2, out_indices2});
  assert(model->isValid());
}

bool is_ignored_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16_dynamic_output_shape_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type15(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type20(Type::TENSOR_FLOAT16, {2, 4});
  // Phase 1, operands
  auto input2 = model->addOperand(&type20);
  auto k2 = model->addOperand(&type1);
  auto out_values2 = model->addOperand(&type15);
  auto out_indices2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t k2_init[] = {2};
  model->setOperandValue(k2, k2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input2, k2}, {out_values2, out_indices2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2},
    {out_values2, out_indices2});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type17(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type21(Type::TENSOR_FLOAT16, {2, 4});
  // Phase 1, operands
  auto input2 = model->addOperand(&type21);
  auto k2 = model->addOperand(&type1);
  auto out_values2 = model->addOperand(&type14);
  auto out_indices2 = model->addOperand(&type2);
  auto input2_tmp = model->addOperand(&type21);
  auto dummy16 = model->addOperand(&type17);
  auto param16 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k2_init[] = {2};
  model->setOperandValue(k2, k2_init, sizeof(int32_t) * 1);
  static _Float16 dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(_Float16) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy16, param16}, {input2});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input2, k2}, {out_values2, out_indices2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2_tmp},
    {out_values2, out_indices2});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type15(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type17(Type::TENSOR_FLOAT16, {1});
  OperandType type21(Type::TENSOR_FLOAT16, {2, 4});
  // Phase 1, operands
  auto input2 = model->addOperand(&type21);
  auto k2 = model->addOperand(&type1);
  auto out_values2 = model->addOperand(&type15);
  auto out_indices2 = model->addOperand(&type12);
  auto input2_tmp = model->addOperand(&type21);
  auto dummy17 = model->addOperand(&type17);
  auto param17 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k2_init[] = {2};
  model->setOperandValue(k2, k2_init, sizeof(int32_t) * 1);
  static _Float16 dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(_Float16) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy17, param17}, {input2});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input2, k2}, {out_values2, out_indices2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2_tmp},
    {out_values2, out_indices2});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {8});
  OperandType type6(Type::TENSOR_FLOAT32, {2});
  OperandType type7(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input3 = model->addOperand(&type5);
  auto k3 = model->addOperand(&type1);
  auto out_values3 = model->addOperand(&type6);
  auto out_indices3 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t k3_init[] = {2};
  model->setOperandValue(k3, k3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input3, k3}, {out_values3, out_indices3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3},
    {out_values3, out_indices3});
  assert(model->isValid());
}

bool is_ignored_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_dynamic_output_shape_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT32, {0});
  OperandType type23(Type::TENSOR_INT32, {0});
  OperandType type5(Type::TENSOR_FLOAT32, {8});
  // Phase 1, operands
  auto input3 = model->addOperand(&type5);
  auto k3 = model->addOperand(&type1);
  auto out_values3 = model->addOperand(&type22);
  auto out_indices3 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t k3_init[] = {2};
  model->setOperandValue(k3, k3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input3, k3}, {out_values3, out_indices3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3},
    {out_values3, out_indices3});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_all_inputs_as_internal_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {8});
  OperandType type6(Type::TENSOR_FLOAT32, {2});
  OperandType type7(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input3 = model->addOperand(&type5);
  auto k3 = model->addOperand(&type1);
  auto out_values3 = model->addOperand(&type6);
  auto out_indices3 = model->addOperand(&type7);
  auto input3_tmp = model->addOperand(&type5);
  auto dummy18 = model->addOperand(&type13);
  auto param18 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k3_init[] = {2};
  model->setOperandValue(k3, k3_init, sizeof(int32_t) * 1);
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy18, param18}, {input3});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input3, k3}, {out_values3, out_indices3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3_tmp},
    {out_values3, out_indices3});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type22(Type::TENSOR_FLOAT32, {0});
  OperandType type23(Type::TENSOR_INT32, {0});
  OperandType type5(Type::TENSOR_FLOAT32, {8});
  // Phase 1, operands
  auto input3 = model->addOperand(&type5);
  auto k3 = model->addOperand(&type1);
  auto out_values3 = model->addOperand(&type22);
  auto out_indices3 = model->addOperand(&type23);
  auto input3_tmp = model->addOperand(&type5);
  auto dummy19 = model->addOperand(&type13);
  auto param19 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k3_init[] = {2};
  model->setOperandValue(k3, k3_init, sizeof(int32_t) * 1);
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy19, param19}, {input3});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input3, k3}, {out_values3, out_indices3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3_tmp},
    {out_values3, out_indices3});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {8});
  OperandType type6(Type::TENSOR_FLOAT32, {2});
  OperandType type7(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input3 = model->addOperand(&type5);
  auto k3 = model->addOperand(&type1);
  auto out_values3 = model->addOperand(&type6);
  auto out_indices3 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t k3_init[] = {2};
  model->setOperandValue(k3, k3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input3, k3}, {out_values3, out_indices3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3},
    {out_values3, out_indices3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed_dynamic_output_shape_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT32, {0});
  OperandType type23(Type::TENSOR_INT32, {0});
  OperandType type5(Type::TENSOR_FLOAT32, {8});
  // Phase 1, operands
  auto input3 = model->addOperand(&type5);
  auto k3 = model->addOperand(&type1);
  auto out_values3 = model->addOperand(&type22);
  auto out_indices3 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t k3_init[] = {2};
  model->setOperandValue(k3, k3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input3, k3}, {out_values3, out_indices3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3},
    {out_values3, out_indices3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed_all_inputs_as_internal_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {8});
  OperandType type6(Type::TENSOR_FLOAT32, {2});
  OperandType type7(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input3 = model->addOperand(&type5);
  auto k3 = model->addOperand(&type1);
  auto out_values3 = model->addOperand(&type6);
  auto out_indices3 = model->addOperand(&type7);
  auto input3_tmp = model->addOperand(&type5);
  auto dummy20 = model->addOperand(&type13);
  auto param20 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k3_init[] = {2};
  model->setOperandValue(k3, k3_init, sizeof(int32_t) * 1);
  static float dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(float) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy20, param20}, {input3});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input3, k3}, {out_values3, out_indices3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3_tmp},
    {out_values3, out_indices3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type22(Type::TENSOR_FLOAT32, {0});
  OperandType type23(Type::TENSOR_INT32, {0});
  OperandType type5(Type::TENSOR_FLOAT32, {8});
  // Phase 1, operands
  auto input3 = model->addOperand(&type5);
  auto k3 = model->addOperand(&type1);
  auto out_values3 = model->addOperand(&type22);
  auto out_indices3 = model->addOperand(&type23);
  auto input3_tmp = model->addOperand(&type5);
  auto dummy21 = model->addOperand(&type13);
  auto param21 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k3_init[] = {2};
  model->setOperandValue(k3, k3_init, sizeof(int32_t) * 1);
  static float dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(float) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy21, param21}, {input3});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input3, k3}, {out_values3, out_indices3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3_tmp},
    {out_values3, out_indices3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type24(Type::TENSOR_FLOAT16, {8});
  OperandType type25(Type::TENSOR_FLOAT16, {2});
  OperandType type7(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input3 = model->addOperand(&type24);
  auto k3 = model->addOperand(&type1);
  auto out_values3 = model->addOperand(&type25);
  auto out_indices3 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t k3_init[] = {2};
  model->setOperandValue(k3, k3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input3, k3}, {out_values3, out_indices3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3},
    {out_values3, out_indices3});
  assert(model->isValid());
}

bool is_ignored_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16_dynamic_output_shape_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type23(Type::TENSOR_INT32, {0});
  OperandType type24(Type::TENSOR_FLOAT16, {8});
  OperandType type26(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto input3 = model->addOperand(&type24);
  auto k3 = model->addOperand(&type1);
  auto out_values3 = model->addOperand(&type26);
  auto out_indices3 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t k3_init[] = {2};
  model->setOperandValue(k3, k3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input3, k3}, {out_values3, out_indices3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3},
    {out_values3, out_indices3});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16_all_inputs_as_internal_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1});
  OperandType type25(Type::TENSOR_FLOAT16, {2});
  OperandType type27(Type::TENSOR_FLOAT16, {8});
  OperandType type7(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input3 = model->addOperand(&type27);
  auto k3 = model->addOperand(&type1);
  auto out_values3 = model->addOperand(&type25);
  auto out_indices3 = model->addOperand(&type7);
  auto input3_tmp = model->addOperand(&type27);
  auto dummy22 = model->addOperand(&type17);
  auto param22 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k3_init[] = {2};
  model->setOperandValue(k3, k3_init, sizeof(int32_t) * 1);
  static _Float16 dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(_Float16) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy22, param22}, {input3});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input3, k3}, {out_values3, out_indices3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3_tmp},
    {out_values3, out_indices3});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1});
  OperandType type23(Type::TENSOR_INT32, {0});
  OperandType type26(Type::TENSOR_FLOAT16, {0});
  OperandType type27(Type::TENSOR_FLOAT16, {8});
  // Phase 1, operands
  auto input3 = model->addOperand(&type27);
  auto k3 = model->addOperand(&type1);
  auto out_values3 = model->addOperand(&type26);
  auto out_indices3 = model->addOperand(&type23);
  auto input3_tmp = model->addOperand(&type27);
  auto dummy23 = model->addOperand(&type17);
  auto param23 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k3_init[] = {2};
  model->setOperandValue(k3, k3_init, sizeof(int32_t) * 1);
  static _Float16 dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(_Float16) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy23, param23}, {input3});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input3, k3}, {out_values3, out_indices3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3_tmp},
    {out_values3, out_indices3});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 2.0f, 128);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 2.0f, 128);
  // Phase 1, operands
  auto input4 = model->addOperand(&type8);
  auto k4 = model->addOperand(&type1);
  auto out_values4 = model->addOperand(&type9);
  auto out_indices4 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t k4_init[] = {2};
  model->setOperandValue(k4, k4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input4, k4}, {out_values4, out_indices4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4},
    {out_values4, out_indices4});
  assert(model->isValid());
}

bool is_ignored_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_dynamic_output_shape_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 2.0f, 128);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 2.0f, 128);
  // Phase 1, operands
  auto input4 = model->addOperand(&type8);
  auto k4 = model->addOperand(&type1);
  auto out_values4 = model->addOperand(&type28);
  auto out_indices4 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t k4_init[] = {2};
  model->setOperandValue(k4, k4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input4, k4}, {out_values4, out_indices4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4},
    {out_values4, out_indices4});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_all_inputs_as_internal_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1}, 2.0f, 128);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 2.0f, 128);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 2.0f, 128);
  // Phase 1, operands
  auto input4 = model->addOperand(&type8);
  auto k4 = model->addOperand(&type1);
  auto out_values4 = model->addOperand(&type9);
  auto out_indices4 = model->addOperand(&type2);
  auto input4_tmp = model->addOperand(&type8);
  auto dummy24 = model->addOperand(&type29);
  auto param24 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k4_init[] = {2};
  model->setOperandValue(k4, k4_init, sizeof(int32_t) * 1);
  static uint8_t dummy24_init[] = {128};
  model->setOperandValue(dummy24, dummy24_init, sizeof(uint8_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input4_tmp, dummy24, param24}, {input4});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input4, k4}, {out_values4, out_indices4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4_tmp},
    {out_values4, out_indices4});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 2.0f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1}, 2.0f, 128);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 2.0f, 128);
  // Phase 1, operands
  auto input4 = model->addOperand(&type8);
  auto k4 = model->addOperand(&type1);
  auto out_values4 = model->addOperand(&type28);
  auto out_indices4 = model->addOperand(&type12);
  auto input4_tmp = model->addOperand(&type8);
  auto dummy25 = model->addOperand(&type29);
  auto param25 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k4_init[] = {2};
  model->setOperandValue(k4, k4_init, sizeof(int32_t) * 1);
  static uint8_t dummy25_init[] = {128};
  model->setOperandValue(dummy25, dummy25_init, sizeof(uint8_t) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input4_tmp, dummy25, param25}, {input4});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input4, k4}, {out_values4, out_indices4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4_tmp},
    {out_values4, out_indices4});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 2.0f, 128);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 2.0f, 128);
  // Phase 1, operands
  auto input4 = model->addOperand(&type8);
  auto k4 = model->addOperand(&type1);
  auto out_values4 = model->addOperand(&type9);
  auto out_indices4 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t k4_init[] = {2};
  model->setOperandValue(k4, k4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input4, k4}, {out_values4, out_indices4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4},
    {out_values4, out_indices4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed_dynamic_output_shape_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 2.0f, 128);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 2.0f, 128);
  // Phase 1, operands
  auto input4 = model->addOperand(&type8);
  auto k4 = model->addOperand(&type1);
  auto out_values4 = model->addOperand(&type28);
  auto out_indices4 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t k4_init[] = {2};
  model->setOperandValue(k4, k4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input4, k4}, {out_values4, out_indices4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4},
    {out_values4, out_indices4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed_all_inputs_as_internal_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1}, 2.0f, 128);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 2.0f, 128);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 2.0f, 128);
  // Phase 1, operands
  auto input4 = model->addOperand(&type8);
  auto k4 = model->addOperand(&type1);
  auto out_values4 = model->addOperand(&type9);
  auto out_indices4 = model->addOperand(&type2);
  auto input4_tmp = model->addOperand(&type8);
  auto dummy26 = model->addOperand(&type29);
  auto param26 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k4_init[] = {2};
  model->setOperandValue(k4, k4_init, sizeof(int32_t) * 1);
  static uint8_t dummy26_init[] = {128};
  model->setOperandValue(dummy26, dummy26_init, sizeof(uint8_t) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input4_tmp, dummy26, param26}, {input4});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input4, k4}, {out_values4, out_indices4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4_tmp},
    {out_values4, out_indices4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 2.0f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1}, 2.0f, 128);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 2.0f, 128);
  // Phase 1, operands
  auto input4 = model->addOperand(&type8);
  auto k4 = model->addOperand(&type1);
  auto out_values4 = model->addOperand(&type28);
  auto out_indices4 = model->addOperand(&type12);
  auto input4_tmp = model->addOperand(&type8);
  auto dummy27 = model->addOperand(&type29);
  auto param27 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k4_init[] = {2};
  model->setOperandValue(k4, k4_init, sizeof(int32_t) * 1);
  static uint8_t dummy27_init[] = {128};
  model->setOperandValue(dummy27, dummy27_init, sizeof(uint8_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input4_tmp, dummy27, param27}, {input4});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input4, k4}, {out_values4, out_indices4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4_tmp},
    {out_values4, out_indices4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 2.0f, 128);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 2.0f, 128);
  // Phase 1, operands
  auto input4 = model->addOperand(&type8);
  auto k4 = model->addOperand(&type1);
  auto out_values4 = model->addOperand(&type9);
  auto out_indices4 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t k4_init[] = {2};
  model->setOperandValue(k4, k4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input4, k4}, {out_values4, out_indices4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4},
    {out_values4, out_indices4});
  assert(model->isValid());
}

bool is_ignored_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16_dynamic_output_shape_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 2.0f, 128);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 2.0f, 128);
  // Phase 1, operands
  auto input4 = model->addOperand(&type8);
  auto k4 = model->addOperand(&type1);
  auto out_values4 = model->addOperand(&type28);
  auto out_indices4 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t k4_init[] = {2};
  model->setOperandValue(k4, k4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input4, k4}, {out_values4, out_indices4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4},
    {out_values4, out_indices4});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16_all_inputs_as_internal_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1}, 2.0f, 128);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 2.0f, 128);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 2.0f, 128);
  // Phase 1, operands
  auto input4 = model->addOperand(&type8);
  auto k4 = model->addOperand(&type1);
  auto out_values4 = model->addOperand(&type9);
  auto out_indices4 = model->addOperand(&type2);
  auto input4_tmp = model->addOperand(&type8);
  auto dummy28 = model->addOperand(&type29);
  auto param28 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k4_init[] = {2};
  model->setOperandValue(k4, k4_init, sizeof(int32_t) * 1);
  static uint8_t dummy28_init[] = {128};
  model->setOperandValue(dummy28, dummy28_init, sizeof(uint8_t) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input4_tmp, dummy28, param28}, {input4});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input4, k4}, {out_values4, out_indices4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4_tmp},
    {out_values4, out_indices4});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 2.0f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1}, 2.0f, 128);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 2.0f, 128);
  // Phase 1, operands
  auto input4 = model->addOperand(&type8);
  auto k4 = model->addOperand(&type1);
  auto out_values4 = model->addOperand(&type28);
  auto out_indices4 = model->addOperand(&type12);
  auto input4_tmp = model->addOperand(&type8);
  auto dummy29 = model->addOperand(&type29);
  auto param29 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t k4_init[] = {2};
  model->setOperandValue(k4, k4_init, sizeof(int32_t) * 1);
  static uint8_t dummy29_init[] = {128};
  model->setOperandValue(dummy29, dummy29_init, sizeof(uint8_t) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input4_tmp, dummy29, param29}, {input4});
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input4, k4}, {out_values4, out_indices4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4_tmp},
    {out_values4, out_indices4});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_INT32, {2, 3});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  // Phase 1, operands
  auto input5 = model->addOperand(&type10);
  auto k5 = model->addOperand(&type1);
  auto out_values5 = model->addOperand(&type2);
  auto out_indices5 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t k5_init[] = {2};
  model->setOperandValue(k5, k5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input5, k5}, {out_values5, out_indices5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5},
    {out_values5, out_indices5});
  assert(model->isValid());
}

bool is_ignored_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_dynamic_output_shape_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_INT32, {2, 3});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  // Phase 1, operands
  auto input5 = model->addOperand(&type10);
  auto k5 = model->addOperand(&type1);
  auto out_values5 = model->addOperand(&type12);
  auto out_indices5 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t k5_init[] = {2};
  model->setOperandValue(k5, k5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input5, k5}, {out_values5, out_indices5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5},
    {out_values5, out_indices5});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_INT32, {2, 3});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  // Phase 1, operands
  auto input5 = model->addOperand(&type10);
  auto k5 = model->addOperand(&type1);
  auto out_values5 = model->addOperand(&type2);
  auto out_indices5 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t k5_init[] = {2};
  model->setOperandValue(k5, k5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input5, k5}, {out_values5, out_indices5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5},
    {out_values5, out_indices5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_relaxed_dynamic_output_shape_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_INT32, {2, 3});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  // Phase 1, operands
  auto input5 = model->addOperand(&type10);
  auto k5 = model->addOperand(&type1);
  auto out_values5 = model->addOperand(&type12);
  auto out_indices5 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t k5_init[] = {2};
  model->setOperandValue(k5, k5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input5, k5}, {out_values5, out_indices5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5},
    {out_values5, out_indices5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_INT32, {2, 3});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  // Phase 1, operands
  auto input5 = model->addOperand(&type10);
  auto k5 = model->addOperand(&type1);
  auto out_values5 = model->addOperand(&type2);
  auto out_indices5 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t k5_init[] = {2};
  model->setOperandValue(k5, k5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input5, k5}, {out_values5, out_indices5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5},
    {out_values5, out_indices5});
  assert(model->isValid());
}

bool is_ignored_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
namespace generated_tests::topk_v2 {

void CreateModel_float16_dynamic_output_shape_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_INT32, {2, 3});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  // Phase 1, operands
  auto input5 = model->addOperand(&type10);
  auto k5 = model->addOperand(&type1);
  auto out_values5 = model->addOperand(&type12);
  auto out_indices5 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t k5_init[] = {2};
  model->setOperandValue(k5, k5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_TOPK_V2, {input5, k5}, {out_values5, out_indices5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5},
    {out_values5, out_indices5});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::topk_v2
