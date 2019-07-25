// Generated from slice.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::slice {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {4});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto begin = model->addOperand(&type1);
  auto size = model->addOperand(&type1);
  auto output = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input, begin, size}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, begin, size},
    {output});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {4});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type17(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto begin = model->addOperand(&type1);
  auto size = model->addOperand(&type1);
  auto output = model->addOperand(&type17);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input, begin, size}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, begin, size},
    {output});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {4});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type22(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto begin = model->addOperand(&type1);
  auto size = model->addOperand(&type1);
  auto output = model->addOperand(&type2);
  auto input_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type28);
  auto param15 = model->addOperand(&type22);
  // Phase 2, operations
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy, param15}, {input});
  model->addOperation(ANEURALNETWORKS_SLICE, {input, begin, size}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin, size, input_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {4});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type17(Type::TENSOR_FLOAT32, {0});
  OperandType type22(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto begin = model->addOperand(&type1);
  auto size = model->addOperand(&type1);
  auto output = model->addOperand(&type17);
  auto input_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type28);
  auto param16 = model->addOperand(&type22);
  // Phase 2, operations
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy1, param16}, {input});
  model->addOperation(ANEURALNETWORKS_SLICE, {input, begin, size}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin, size, input_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {4});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto begin = model->addOperand(&type1);
  auto size = model->addOperand(&type1);
  auto output = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input, begin, size}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, begin, size},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {4});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type17(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto begin = model->addOperand(&type1);
  auto size = model->addOperand(&type1);
  auto output = model->addOperand(&type17);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input, begin, size}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, begin, size},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {4});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {2});
  OperandType type22(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto begin = model->addOperand(&type1);
  auto size = model->addOperand(&type1);
  auto output = model->addOperand(&type2);
  auto input_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type28);
  auto param17 = model->addOperand(&type22);
  // Phase 2, operations
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy2, param17}, {input});
  model->addOperation(ANEURALNETWORKS_SLICE, {input, begin, size}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin, size, input_tmp},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {4});
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type17(Type::TENSOR_FLOAT32, {0});
  OperandType type22(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto begin = model->addOperand(&type1);
  auto size = model->addOperand(&type1);
  auto output = model->addOperand(&type17);
  auto input_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type28);
  auto param18 = model->addOperand(&type22);
  // Phase 2, operations
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy3, param18}, {input});
  model->addOperation(ANEURALNETWORKS_SLICE, {input, begin, size}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin, size, input_tmp},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type29(Type::TENSOR_FLOAT16, {4});
  OperandType type30(Type::TENSOR_FLOAT16, {2});
  // Phase 1, operands
  auto input = model->addOperand(&type29);
  auto begin = model->addOperand(&type1);
  auto size = model->addOperand(&type1);
  auto output = model->addOperand(&type30);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input, begin, size}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, begin, size},
    {output});
  assert(model->isValid());
}

bool is_ignored_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_dynamic_output_shape(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type29(Type::TENSOR_FLOAT16, {4});
  OperandType type31(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto input = model->addOperand(&type29);
  auto begin = model->addOperand(&type1);
  auto size = model->addOperand(&type1);
  auto output = model->addOperand(&type31);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input, begin, size}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input, begin, size},
    {output});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type22(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT16, {2});
  OperandType type32(Type::TENSOR_FLOAT16, {4});
  OperandType type33(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto input = model->addOperand(&type32);
  auto begin = model->addOperand(&type1);
  auto size = model->addOperand(&type1);
  auto output = model->addOperand(&type30);
  auto input_tmp = model->addOperand(&type32);
  auto dummy4 = model->addOperand(&type33);
  auto param19 = model->addOperand(&type22);
  // Phase 2, operations
  static _Float16 dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(_Float16) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy4, param19}, {input});
  model->addOperation(ANEURALNETWORKS_SLICE, {input, begin, size}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin, size, input_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {1});
  OperandType type22(Type::INT32, {});
  OperandType type31(Type::TENSOR_FLOAT16, {0});
  OperandType type32(Type::TENSOR_FLOAT16, {4});
  OperandType type33(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto input = model->addOperand(&type32);
  auto begin = model->addOperand(&type1);
  auto size = model->addOperand(&type1);
  auto output = model->addOperand(&type31);
  auto input_tmp = model->addOperand(&type32);
  auto dummy5 = model->addOperand(&type33);
  auto param20 = model->addOperand(&type22);
  // Phase 2, operations
  static _Float16 dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(_Float16) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input_tmp, dummy5, param20}, {input});
  model->addOperation(ANEURALNETWORKS_SLICE, {input, begin, size}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin, size, input_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_2(Model *model) {
  OperandType type3(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2});
  // Phase 1, operands
  auto input1 = model->addOperand(&type3);
  auto begin1 = model->addOperand(&type4);
  auto size1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input1, begin1, size1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, begin1, size1},
    {output1});
  assert(model->isValid());
}

bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_dynamic_output_shape_2(Model *model) {
  OperandType type3(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type34(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input1 = model->addOperand(&type3);
  auto begin1 = model->addOperand(&type4);
  auto size1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type34);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input1, begin1, size1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, begin1, size1},
    {output1});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_all_inputs_as_internal_2(Model *model) {
  OperandType type22(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2});
  // Phase 1, operands
  auto input1 = model->addOperand(&type3);
  auto begin1 = model->addOperand(&type4);
  auto size1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type5);
  auto input1_tmp = model->addOperand(&type3);
  auto dummy6 = model->addOperand(&type28);
  auto param21 = model->addOperand(&type22);
  // Phase 2, operations
  static float dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(float) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy6, param21}, {input1});
  model->addOperation(ANEURALNETWORKS_SLICE, {input1, begin1, size1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin1, size1, input1_tmp},
    {output1});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type22(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type34(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input1 = model->addOperand(&type3);
  auto begin1 = model->addOperand(&type4);
  auto size1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type34);
  auto input1_tmp = model->addOperand(&type3);
  auto dummy7 = model->addOperand(&type28);
  auto param22 = model->addOperand(&type22);
  // Phase 2, operations
  static float dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(float) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy7, param22}, {input1});
  model->addOperation(ANEURALNETWORKS_SLICE, {input1, begin1, size1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin1, size1, input1_tmp},
    {output1});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_2(Model *model) {
  OperandType type3(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2});
  // Phase 1, operands
  auto input1 = model->addOperand(&type3);
  auto begin1 = model->addOperand(&type4);
  auto size1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input1, begin1, size1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, begin1, size1},
    {output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type3(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type34(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input1 = model->addOperand(&type3);
  auto begin1 = model->addOperand(&type4);
  auto size1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type34);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input1, begin1, size1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, begin1, size1},
    {output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type22(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2});
  // Phase 1, operands
  auto input1 = model->addOperand(&type3);
  auto begin1 = model->addOperand(&type4);
  auto size1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type5);
  auto input1_tmp = model->addOperand(&type3);
  auto dummy8 = model->addOperand(&type28);
  auto param23 = model->addOperand(&type22);
  // Phase 2, operations
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy8, param23}, {input1});
  model->addOperation(ANEURALNETWORKS_SLICE, {input1, begin1, size1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin1, size1, input1_tmp},
    {output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type22(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type34(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input1 = model->addOperand(&type3);
  auto begin1 = model->addOperand(&type4);
  auto size1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type34);
  auto input1_tmp = model->addOperand(&type3);
  auto dummy9 = model->addOperand(&type28);
  auto param24 = model->addOperand(&type22);
  // Phase 2, operations
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy9, param24}, {input1});
  model->addOperation(ANEURALNETWORKS_SLICE, {input1, begin1, size1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin1, size1, input1_tmp},
    {output1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_2(Model *model) {
  OperandType type35(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input1 = model->addOperand(&type35);
  auto begin1 = model->addOperand(&type4);
  auto size1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type36);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input1, begin1, size1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, begin1, size1},
    {output1});
  assert(model->isValid());
}

bool is_ignored_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_dynamic_output_shape_2(Model *model) {
  OperandType type35(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type37(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input1 = model->addOperand(&type35);
  auto begin1 = model->addOperand(&type4);
  auto size1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type37);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input1, begin1, size1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input1, begin1, size1},
    {output1});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type22(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type38(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input1 = model->addOperand(&type38);
  auto begin1 = model->addOperand(&type4);
  auto size1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type36);
  auto input1_tmp = model->addOperand(&type38);
  auto dummy10 = model->addOperand(&type33);
  auto param25 = model->addOperand(&type22);
  // Phase 2, operations
  static _Float16 dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(_Float16) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy10, param25}, {input1});
  model->addOperation(ANEURALNETWORKS_SLICE, {input1, begin1, size1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin1, size1, input1_tmp},
    {output1});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type22(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1});
  OperandType type37(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type38(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input1 = model->addOperand(&type38);
  auto begin1 = model->addOperand(&type4);
  auto size1 = model->addOperand(&type4);
  auto output1 = model->addOperand(&type37);
  auto input1_tmp = model->addOperand(&type38);
  auto dummy11 = model->addOperand(&type33);
  auto param26 = model->addOperand(&type22);
  // Phase 2, operations
  static _Float16 dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy11, param26}, {input1});
  model->addOperation(ANEURALNETWORKS_SLICE, {input1, begin1, size1}, {output1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin1, size1, input1_tmp},
    {output1});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_3(Model *model) {
  OperandType type6(Type::TENSOR_FLOAT32, {2, 3, 2});
  OperandType type7(Type::TENSOR_INT32, {3});
  // Phase 1, operands
  auto input2 = model->addOperand(&type6);
  auto begin2 = model->addOperand(&type7);
  auto size2 = model->addOperand(&type7);
  auto output2 = model->addOperand(&type6);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input2, begin2, size2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2, begin2, size2},
    {output2});
  assert(model->isValid());
}

bool is_ignored_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_dynamic_output_shape_3(Model *model) {
  OperandType type39(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 3, 2});
  OperandType type7(Type::TENSOR_INT32, {3});
  // Phase 1, operands
  auto input2 = model->addOperand(&type6);
  auto begin2 = model->addOperand(&type7);
  auto size2 = model->addOperand(&type7);
  auto output2 = model->addOperand(&type39);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input2, begin2, size2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2, begin2, size2},
    {output2});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_all_inputs_as_internal_3(Model *model) {
  OperandType type22(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 3, 2});
  OperandType type7(Type::TENSOR_INT32, {3});
  // Phase 1, operands
  auto input2 = model->addOperand(&type6);
  auto begin2 = model->addOperand(&type7);
  auto size2 = model->addOperand(&type7);
  auto output2 = model->addOperand(&type6);
  auto input2_tmp = model->addOperand(&type6);
  auto dummy12 = model->addOperand(&type28);
  auto param27 = model->addOperand(&type22);
  // Phase 2, operations
  static float dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(float) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy12, param27}, {input2});
  model->addOperation(ANEURALNETWORKS_SLICE, {input2, begin2, size2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin2, size2, input2_tmp},
    {output2});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type22(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {1});
  OperandType type39(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 3, 2});
  OperandType type7(Type::TENSOR_INT32, {3});
  // Phase 1, operands
  auto input2 = model->addOperand(&type6);
  auto begin2 = model->addOperand(&type7);
  auto size2 = model->addOperand(&type7);
  auto output2 = model->addOperand(&type39);
  auto input2_tmp = model->addOperand(&type6);
  auto dummy13 = model->addOperand(&type28);
  auto param28 = model->addOperand(&type22);
  // Phase 2, operations
  static float dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(float) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy13, param28}, {input2});
  model->addOperation(ANEURALNETWORKS_SLICE, {input2, begin2, size2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin2, size2, input2_tmp},
    {output2});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_3(Model *model) {
  OperandType type6(Type::TENSOR_FLOAT32, {2, 3, 2});
  OperandType type7(Type::TENSOR_INT32, {3});
  // Phase 1, operands
  auto input2 = model->addOperand(&type6);
  auto begin2 = model->addOperand(&type7);
  auto size2 = model->addOperand(&type7);
  auto output2 = model->addOperand(&type6);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input2, begin2, size2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2, begin2, size2},
    {output2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type39(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 3, 2});
  OperandType type7(Type::TENSOR_INT32, {3});
  // Phase 1, operands
  auto input2 = model->addOperand(&type6);
  auto begin2 = model->addOperand(&type7);
  auto size2 = model->addOperand(&type7);
  auto output2 = model->addOperand(&type39);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input2, begin2, size2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2, begin2, size2},
    {output2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type22(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 3, 2});
  OperandType type7(Type::TENSOR_INT32, {3});
  // Phase 1, operands
  auto input2 = model->addOperand(&type6);
  auto begin2 = model->addOperand(&type7);
  auto size2 = model->addOperand(&type7);
  auto output2 = model->addOperand(&type6);
  auto input2_tmp = model->addOperand(&type6);
  auto dummy14 = model->addOperand(&type28);
  auto param29 = model->addOperand(&type22);
  // Phase 2, operations
  static float dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(float) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy14, param29}, {input2});
  model->addOperation(ANEURALNETWORKS_SLICE, {input2, begin2, size2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin2, size2, input2_tmp},
    {output2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type22(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {1});
  OperandType type39(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 3, 2});
  OperandType type7(Type::TENSOR_INT32, {3});
  // Phase 1, operands
  auto input2 = model->addOperand(&type6);
  auto begin2 = model->addOperand(&type7);
  auto size2 = model->addOperand(&type7);
  auto output2 = model->addOperand(&type39);
  auto input2_tmp = model->addOperand(&type6);
  auto dummy15 = model->addOperand(&type28);
  auto param30 = model->addOperand(&type22);
  // Phase 2, operations
  static float dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(float) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy15, param30}, {input2});
  model->addOperation(ANEURALNETWORKS_SLICE, {input2, begin2, size2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin2, size2, input2_tmp},
    {output2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_3(Model *model) {
  OperandType type40(Type::TENSOR_FLOAT16, {2, 3, 2});
  OperandType type7(Type::TENSOR_INT32, {3});
  // Phase 1, operands
  auto input2 = model->addOperand(&type40);
  auto begin2 = model->addOperand(&type7);
  auto size2 = model->addOperand(&type7);
  auto output2 = model->addOperand(&type40);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input2, begin2, size2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2, begin2, size2},
    {output2});
  assert(model->isValid());
}

bool is_ignored_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_dynamic_output_shape_3(Model *model) {
  OperandType type40(Type::TENSOR_FLOAT16, {2, 3, 2});
  OperandType type41(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type7(Type::TENSOR_INT32, {3});
  // Phase 1, operands
  auto input2 = model->addOperand(&type40);
  auto begin2 = model->addOperand(&type7);
  auto size2 = model->addOperand(&type7);
  auto output2 = model->addOperand(&type41);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input2, begin2, size2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input2, begin2, size2},
    {output2});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type22(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1});
  OperandType type40(Type::TENSOR_FLOAT16, {2, 3, 2});
  OperandType type42(Type::TENSOR_FLOAT16, {2, 3, 2});
  OperandType type7(Type::TENSOR_INT32, {3});
  // Phase 1, operands
  auto input2 = model->addOperand(&type42);
  auto begin2 = model->addOperand(&type7);
  auto size2 = model->addOperand(&type7);
  auto output2 = model->addOperand(&type40);
  auto input2_tmp = model->addOperand(&type42);
  auto dummy16 = model->addOperand(&type33);
  auto param31 = model->addOperand(&type22);
  // Phase 2, operations
  static _Float16 dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(_Float16) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy16, param31}, {input2});
  model->addOperation(ANEURALNETWORKS_SLICE, {input2, begin2, size2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin2, size2, input2_tmp},
    {output2});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type22(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1});
  OperandType type41(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type42(Type::TENSOR_FLOAT16, {2, 3, 2});
  OperandType type7(Type::TENSOR_INT32, {3});
  // Phase 1, operands
  auto input2 = model->addOperand(&type42);
  auto begin2 = model->addOperand(&type7);
  auto size2 = model->addOperand(&type7);
  auto output2 = model->addOperand(&type41);
  auto input2_tmp = model->addOperand(&type42);
  auto dummy17 = model->addOperand(&type33);
  auto param32 = model->addOperand(&type22);
  // Phase 2, operations
  static _Float16 dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(_Float16) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy17, param32}, {input2});
  model->addOperation(ANEURALNETWORKS_SLICE, {input2, begin2, size2}, {output2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin2, size2, input2_tmp},
    {output2});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_4(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT32, {3, 1, 1, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 1, 1, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input3 = model->addOperand(&type8);
  auto begin3 = model->addOperand(&type9);
  auto size3 = model->addOperand(&type9);
  auto output3 = model->addOperand(&type10);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input3, begin3, size3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3, begin3, size3},
    {output3});
  assert(model->isValid());
}

bool is_ignored_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_dynamic_output_shape_4(Model *model) {
  OperandType type43(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 1, 1, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input3 = model->addOperand(&type8);
  auto begin3 = model->addOperand(&type9);
  auto size3 = model->addOperand(&type9);
  auto output3 = model->addOperand(&type43);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input3, begin3, size3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3, begin3, size3},
    {output3});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_all_inputs_as_internal_4(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT32, {3, 1, 1, 1});
  OperandType type22(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 1, 1, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input3 = model->addOperand(&type8);
  auto begin3 = model->addOperand(&type9);
  auto size3 = model->addOperand(&type9);
  auto output3 = model->addOperand(&type10);
  auto input3_tmp = model->addOperand(&type8);
  auto dummy18 = model->addOperand(&type28);
  auto param33 = model->addOperand(&type22);
  // Phase 2, operations
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy18, param33}, {input3});
  model->addOperation(ANEURALNETWORKS_SLICE, {input3, begin3, size3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin3, size3, input3_tmp},
    {output3});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type22(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {1});
  OperandType type43(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 1, 1, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input3 = model->addOperand(&type8);
  auto begin3 = model->addOperand(&type9);
  auto size3 = model->addOperand(&type9);
  auto output3 = model->addOperand(&type43);
  auto input3_tmp = model->addOperand(&type8);
  auto dummy19 = model->addOperand(&type28);
  auto param34 = model->addOperand(&type22);
  // Phase 2, operations
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy19, param34}, {input3});
  model->addOperation(ANEURALNETWORKS_SLICE, {input3, begin3, size3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin3, size3, input3_tmp},
    {output3});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_4(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT32, {3, 1, 1, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 1, 1, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input3 = model->addOperand(&type8);
  auto begin3 = model->addOperand(&type9);
  auto size3 = model->addOperand(&type9);
  auto output3 = model->addOperand(&type10);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input3, begin3, size3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3, begin3, size3},
    {output3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_dynamic_output_shape_4(Model *model) {
  OperandType type43(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 1, 1, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input3 = model->addOperand(&type8);
  auto begin3 = model->addOperand(&type9);
  auto size3 = model->addOperand(&type9);
  auto output3 = model->addOperand(&type43);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input3, begin3, size3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3, begin3, size3},
    {output3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_all_inputs_as_internal_4(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT32, {3, 1, 1, 1});
  OperandType type22(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 1, 1, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input3 = model->addOperand(&type8);
  auto begin3 = model->addOperand(&type9);
  auto size3 = model->addOperand(&type9);
  auto output3 = model->addOperand(&type10);
  auto input3_tmp = model->addOperand(&type8);
  auto dummy20 = model->addOperand(&type28);
  auto param35 = model->addOperand(&type22);
  // Phase 2, operations
  static float dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(float) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy20, param35}, {input3});
  model->addOperation(ANEURALNETWORKS_SLICE, {input3, begin3, size3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin3, size3, input3_tmp},
    {output3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type22(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {1});
  OperandType type43(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 1, 1, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input3 = model->addOperand(&type8);
  auto begin3 = model->addOperand(&type9);
  auto size3 = model->addOperand(&type9);
  auto output3 = model->addOperand(&type43);
  auto input3_tmp = model->addOperand(&type8);
  auto dummy21 = model->addOperand(&type28);
  auto param36 = model->addOperand(&type22);
  // Phase 2, operations
  static float dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(float) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy21, param36}, {input3});
  model->addOperation(ANEURALNETWORKS_SLICE, {input3, begin3, size3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin3, size3, input3_tmp},
    {output3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_4(Model *model) {
  OperandType type44(Type::TENSOR_FLOAT16, {4, 1, 1, 1});
  OperandType type45(Type::TENSOR_FLOAT16, {3, 1, 1, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input3 = model->addOperand(&type44);
  auto begin3 = model->addOperand(&type9);
  auto size3 = model->addOperand(&type9);
  auto output3 = model->addOperand(&type45);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input3, begin3, size3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3, begin3, size3},
    {output3});
  assert(model->isValid());
}

bool is_ignored_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_dynamic_output_shape_4(Model *model) {
  OperandType type44(Type::TENSOR_FLOAT16, {4, 1, 1, 1});
  OperandType type46(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input3 = model->addOperand(&type44);
  auto begin3 = model->addOperand(&type9);
  auto size3 = model->addOperand(&type9);
  auto output3 = model->addOperand(&type46);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input3, begin3, size3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input3, begin3, size3},
    {output3});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_all_inputs_as_internal_4(Model *model) {
  OperandType type22(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1});
  OperandType type45(Type::TENSOR_FLOAT16, {3, 1, 1, 1});
  OperandType type47(Type::TENSOR_FLOAT16, {4, 1, 1, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input3 = model->addOperand(&type47);
  auto begin3 = model->addOperand(&type9);
  auto size3 = model->addOperand(&type9);
  auto output3 = model->addOperand(&type45);
  auto input3_tmp = model->addOperand(&type47);
  auto dummy22 = model->addOperand(&type33);
  auto param37 = model->addOperand(&type22);
  // Phase 2, operations
  static _Float16 dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(_Float16) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy22, param37}, {input3});
  model->addOperation(ANEURALNETWORKS_SLICE, {input3, begin3, size3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin3, size3, input3_tmp},
    {output3});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type22(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1});
  OperandType type46(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type47(Type::TENSOR_FLOAT16, {4, 1, 1, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input3 = model->addOperand(&type47);
  auto begin3 = model->addOperand(&type9);
  auto size3 = model->addOperand(&type9);
  auto output3 = model->addOperand(&type46);
  auto input3_tmp = model->addOperand(&type47);
  auto dummy23 = model->addOperand(&type33);
  auto param38 = model->addOperand(&type22);
  // Phase 2, operations
  static _Float16 dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(_Float16) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy23, param38}, {input3});
  model->addOperation(ANEURALNETWORKS_SLICE, {input3, begin3, size3}, {output3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin3, size3, input3_tmp},
    {output3});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_5(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type12(Type::TENSOR_INT32, {1, 1, 3, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input4 = model->addOperand(&type11);
  auto begin4 = model->addOperand(&type9);
  auto size4 = model->addOperand(&type9);
  auto output4 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input4, begin4, size4}, {output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4, begin4, size4},
    {output4});
  assert(model->isValid());
}

bool is_ignored_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_dynamic_output_shape_5(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type48(Type::TENSOR_INT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input4 = model->addOperand(&type11);
  auto begin4 = model->addOperand(&type9);
  auto size4 = model->addOperand(&type9);
  auto output4 = model->addOperand(&type48);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input4, begin4, size4}, {output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4, begin4, size4},
    {output4});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_5(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type12(Type::TENSOR_INT32, {1, 1, 3, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input4 = model->addOperand(&type11);
  auto begin4 = model->addOperand(&type9);
  auto size4 = model->addOperand(&type9);
  auto output4 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input4, begin4, size4}, {output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4, begin4, size4},
    {output4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_dynamic_output_shape_5(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type48(Type::TENSOR_INT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input4 = model->addOperand(&type11);
  auto begin4 = model->addOperand(&type9);
  auto size4 = model->addOperand(&type9);
  auto output4 = model->addOperand(&type48);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input4, begin4, size4}, {output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4, begin4, size4},
    {output4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_5(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type12(Type::TENSOR_INT32, {1, 1, 3, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input4 = model->addOperand(&type11);
  auto begin4 = model->addOperand(&type9);
  auto size4 = model->addOperand(&type9);
  auto output4 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input4, begin4, size4}, {output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4, begin4, size4},
    {output4});
  assert(model->isValid());
}

bool is_ignored_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_dynamic_output_shape_5(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type48(Type::TENSOR_INT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input4 = model->addOperand(&type11);
  auto begin4 = model->addOperand(&type9);
  auto size4 = model->addOperand(&type9);
  auto output4 = model->addOperand(&type48);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input4, begin4, size4}, {output4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input4, begin4, size4},
    {output4});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_6(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type13(Type::TENSOR_INT32, {2, 1, 3, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input5 = model->addOperand(&type11);
  auto begin5 = model->addOperand(&type9);
  auto size5 = model->addOperand(&type9);
  auto output5 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input5, begin5, size5}, {output5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5, begin5, size5},
    {output5});
  assert(model->isValid());
}

bool is_ignored_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_dynamic_output_shape_6(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type48(Type::TENSOR_INT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input5 = model->addOperand(&type11);
  auto begin5 = model->addOperand(&type9);
  auto size5 = model->addOperand(&type9);
  auto output5 = model->addOperand(&type48);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input5, begin5, size5}, {output5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5, begin5, size5},
    {output5});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_6(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type13(Type::TENSOR_INT32, {2, 1, 3, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input5 = model->addOperand(&type11);
  auto begin5 = model->addOperand(&type9);
  auto size5 = model->addOperand(&type9);
  auto output5 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input5, begin5, size5}, {output5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5, begin5, size5},
    {output5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_dynamic_output_shape_6(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type48(Type::TENSOR_INT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input5 = model->addOperand(&type11);
  auto begin5 = model->addOperand(&type9);
  auto size5 = model->addOperand(&type9);
  auto output5 = model->addOperand(&type48);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input5, begin5, size5}, {output5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5, begin5, size5},
    {output5});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_6(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type13(Type::TENSOR_INT32, {2, 1, 3, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input5 = model->addOperand(&type11);
  auto begin5 = model->addOperand(&type9);
  auto size5 = model->addOperand(&type9);
  auto output5 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input5, begin5, size5}, {output5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5, begin5, size5},
    {output5});
  assert(model->isValid());
}

bool is_ignored_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_dynamic_output_shape_6(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type48(Type::TENSOR_INT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input5 = model->addOperand(&type11);
  auto begin5 = model->addOperand(&type9);
  auto size5 = model->addOperand(&type9);
  auto output5 = model->addOperand(&type48);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input5, begin5, size5}, {output5});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input5, begin5, size5},
    {output5});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_7(Model *model) {
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 2, 3, 1}, 2.0f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 1, 3, 1}, 2.0f, 128);
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input6 = model->addOperand(&type14);
  auto begin6 = model->addOperand(&type9);
  auto size6 = model->addOperand(&type9);
  auto output6 = model->addOperand(&type15);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input6, begin6, size6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input6, begin6, size6},
    {output6});
  assert(model->isValid());
}

bool is_ignored_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_dynamic_output_shape_7(Model *model) {
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 2, 3, 1}, 2.0f, 128);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 2.0f, 128);
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input6 = model->addOperand(&type14);
  auto begin6 = model->addOperand(&type9);
  auto size6 = model->addOperand(&type9);
  auto output6 = model->addOperand(&type49);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input6, begin6, size6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input6, begin6, size6},
    {output6});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_all_inputs_as_internal_5(Model *model) {
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 2, 3, 1}, 2.0f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 1, 3, 1}, 2.0f, 128);
  OperandType type22(Type::INT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1}, 2.0f, 128);
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input6 = model->addOperand(&type14);
  auto begin6 = model->addOperand(&type9);
  auto size6 = model->addOperand(&type9);
  auto output6 = model->addOperand(&type15);
  auto input6_tmp = model->addOperand(&type14);
  auto dummy24 = model->addOperand(&type50);
  auto param39 = model->addOperand(&type22);
  // Phase 2, operations
  static uint8_t dummy24_init[] = {128};
  model->setOperandValue(dummy24, dummy24_init, sizeof(uint8_t) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input6_tmp, dummy24, param39}, {input6});
  model->addOperation(ANEURALNETWORKS_SLICE, {input6, begin6, size6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin6, size6, input6_tmp},
    {output6});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 2, 3, 1}, 2.0f, 128);
  OperandType type22(Type::INT32, {});
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 2.0f, 128);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1}, 2.0f, 128);
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input6 = model->addOperand(&type14);
  auto begin6 = model->addOperand(&type9);
  auto size6 = model->addOperand(&type9);
  auto output6 = model->addOperand(&type49);
  auto input6_tmp = model->addOperand(&type14);
  auto dummy25 = model->addOperand(&type50);
  auto param40 = model->addOperand(&type22);
  // Phase 2, operations
  static uint8_t dummy25_init[] = {128};
  model->setOperandValue(dummy25, dummy25_init, sizeof(uint8_t) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input6_tmp, dummy25, param40}, {input6});
  model->addOperation(ANEURALNETWORKS_SLICE, {input6, begin6, size6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin6, size6, input6_tmp},
    {output6});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_7(Model *model) {
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 2, 3, 1}, 2.0f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 1, 3, 1}, 2.0f, 128);
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input6 = model->addOperand(&type14);
  auto begin6 = model->addOperand(&type9);
  auto size6 = model->addOperand(&type9);
  auto output6 = model->addOperand(&type15);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input6, begin6, size6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input6, begin6, size6},
    {output6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_dynamic_output_shape_7(Model *model) {
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 2, 3, 1}, 2.0f, 128);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 2.0f, 128);
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input6 = model->addOperand(&type14);
  auto begin6 = model->addOperand(&type9);
  auto size6 = model->addOperand(&type9);
  auto output6 = model->addOperand(&type49);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input6, begin6, size6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input6, begin6, size6},
    {output6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_all_inputs_as_internal_5(Model *model) {
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 2, 3, 1}, 2.0f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 1, 3, 1}, 2.0f, 128);
  OperandType type22(Type::INT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1}, 2.0f, 128);
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input6 = model->addOperand(&type14);
  auto begin6 = model->addOperand(&type9);
  auto size6 = model->addOperand(&type9);
  auto output6 = model->addOperand(&type15);
  auto input6_tmp = model->addOperand(&type14);
  auto dummy26 = model->addOperand(&type50);
  auto param41 = model->addOperand(&type22);
  // Phase 2, operations
  static uint8_t dummy26_init[] = {128};
  model->setOperandValue(dummy26, dummy26_init, sizeof(uint8_t) * 1);
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input6_tmp, dummy26, param41}, {input6});
  model->addOperation(ANEURALNETWORKS_SLICE, {input6, begin6, size6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin6, size6, input6_tmp},
    {output6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 2, 3, 1}, 2.0f, 128);
  OperandType type22(Type::INT32, {});
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 2.0f, 128);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1}, 2.0f, 128);
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input6 = model->addOperand(&type14);
  auto begin6 = model->addOperand(&type9);
  auto size6 = model->addOperand(&type9);
  auto output6 = model->addOperand(&type49);
  auto input6_tmp = model->addOperand(&type14);
  auto dummy27 = model->addOperand(&type50);
  auto param42 = model->addOperand(&type22);
  // Phase 2, operations
  static uint8_t dummy27_init[] = {128};
  model->setOperandValue(dummy27, dummy27_init, sizeof(uint8_t) * 1);
  static int32_t param42_init[] = {0};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input6_tmp, dummy27, param42}, {input6});
  model->addOperation(ANEURALNETWORKS_SLICE, {input6, begin6, size6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin6, size6, input6_tmp},
    {output6});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_7(Model *model) {
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 2, 3, 1}, 2.0f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 1, 3, 1}, 2.0f, 128);
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input6 = model->addOperand(&type14);
  auto begin6 = model->addOperand(&type9);
  auto size6 = model->addOperand(&type9);
  auto output6 = model->addOperand(&type15);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input6, begin6, size6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input6, begin6, size6},
    {output6});
  assert(model->isValid());
}

bool is_ignored_float16_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_dynamic_output_shape_7(Model *model) {
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 2, 3, 1}, 2.0f, 128);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 2.0f, 128);
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input6 = model->addOperand(&type14);
  auto begin6 = model->addOperand(&type9);
  auto size6 = model->addOperand(&type9);
  auto output6 = model->addOperand(&type49);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input6, begin6, size6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input6, begin6, size6},
    {output6});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_all_inputs_as_internal_5(Model *model) {
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 2, 3, 1}, 2.0f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {2, 1, 3, 1}, 2.0f, 128);
  OperandType type22(Type::INT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1}, 2.0f, 128);
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input6 = model->addOperand(&type14);
  auto begin6 = model->addOperand(&type9);
  auto size6 = model->addOperand(&type9);
  auto output6 = model->addOperand(&type15);
  auto input6_tmp = model->addOperand(&type14);
  auto dummy28 = model->addOperand(&type50);
  auto param43 = model->addOperand(&type22);
  // Phase 2, operations
  static uint8_t dummy28_init[] = {128};
  model->setOperandValue(dummy28, dummy28_init, sizeof(uint8_t) * 1);
  static int32_t param43_init[] = {0};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input6_tmp, dummy28, param43}, {input6});
  model->addOperation(ANEURALNETWORKS_SLICE, {input6, begin6, size6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin6, size6, input6_tmp},
    {output6});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 2, 3, 1}, 2.0f, 128);
  OperandType type22(Type::INT32, {});
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 2.0f, 128);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1}, 2.0f, 128);
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input6 = model->addOperand(&type14);
  auto begin6 = model->addOperand(&type9);
  auto size6 = model->addOperand(&type9);
  auto output6 = model->addOperand(&type49);
  auto input6_tmp = model->addOperand(&type14);
  auto dummy29 = model->addOperand(&type50);
  auto param44 = model->addOperand(&type22);
  // Phase 2, operations
  static uint8_t dummy29_init[] = {128};
  model->setOperandValue(dummy29, dummy29_init, sizeof(uint8_t) * 1);
  static int32_t param44_init[] = {0};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input6_tmp, dummy29, param44}, {input6});
  model->addOperation(ANEURALNETWORKS_SLICE, {input6, begin6, size6}, {output6});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {begin6, size6, input6_tmp},
    {output6});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_8(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type13(Type::TENSOR_INT32, {2, 1, 3, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input7 = model->addOperand(&type11);
  auto begin7 = model->addOperand(&type9);
  auto size7 = model->addOperand(&type9);
  auto output7 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input7, begin7, size7}, {output7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input7, begin7, size7},
    {output7});
  assert(model->isValid());
}

bool is_ignored_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_dynamic_output_shape_8(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type48(Type::TENSOR_INT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input7 = model->addOperand(&type11);
  auto begin7 = model->addOperand(&type9);
  auto size7 = model->addOperand(&type9);
  auto output7 = model->addOperand(&type48);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input7, begin7, size7}, {output7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input7, begin7, size7},
    {output7});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_8(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type13(Type::TENSOR_INT32, {2, 1, 3, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input7 = model->addOperand(&type11);
  auto begin7 = model->addOperand(&type9);
  auto size7 = model->addOperand(&type9);
  auto output7 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input7, begin7, size7}, {output7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input7, begin7, size7},
    {output7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_relaxed_dynamic_output_shape_8(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type48(Type::TENSOR_INT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input7 = model->addOperand(&type11);
  auto begin7 = model->addOperand(&type9);
  auto size7 = model->addOperand(&type9);
  auto output7 = model->addOperand(&type48);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input7, begin7, size7}, {output7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input7, begin7, size7},
    {output7});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_8(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type13(Type::TENSOR_INT32, {2, 1, 3, 1});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input7 = model->addOperand(&type11);
  auto begin7 = model->addOperand(&type9);
  auto size7 = model->addOperand(&type9);
  auto output7 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input7, begin7, size7}, {output7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input7, begin7, size7},
    {output7});
  assert(model->isValid());
}

bool is_ignored_float16_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_float16_dynamic_output_shape_8(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 2, 3, 1});
  OperandType type48(Type::TENSOR_INT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_INT32, {4});
  // Phase 1, operands
  auto input7 = model->addOperand(&type11);
  auto begin7 = model->addOperand(&type9);
  auto size7 = model->addOperand(&type9);
  auto output7 = model->addOperand(&type48);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SLICE, {input7, begin7, size7}, {output7});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input7, begin7, size7},
    {output7});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_zero_sized(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type17(Type::TENSOR_FLOAT32, {0});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type20(Type::TENSOR_INT32, {1});
  OperandType type21(Type::FLOAT32, {});
  OperandType type22(Type::INT32, {});
  OperandType type23(Type::BOOL, {});
  OperandType type24(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type26(Type::TENSOR_FLOAT32, {0, 1, 1, 1});
  OperandType type27(Type::TENSOR_INT32, {4});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2});
  // Phase 1, operands
  auto scores = model->addOperand(&type5);
  auto roi = model->addOperand(&type16);
  auto param = model->addOperand(&type20);
  auto param1 = model->addOperand(&type21);
  auto param2 = model->addOperand(&type22);
  auto param3 = model->addOperand(&type22);
  auto param4 = model->addOperand(&type21);
  auto param5 = model->addOperand(&type21);
  auto param6 = model->addOperand(&type21);
  auto scoresOut = model->addOperand(&type17);
  auto roiOut = model->addOperand(&type19);
  auto classesOut = model->addOperand(&type18);
  auto batchSplitOut = model->addOperand(&type18);
  auto in = model->addOperand(&type24);
  auto param7 = model->addOperand(&type22);
  auto param8 = model->addOperand(&type22);
  auto param9 = model->addOperand(&type21);
  auto param10 = model->addOperand(&type21);
  auto param11 = model->addOperand(&type22);
  auto param12 = model->addOperand(&type22);
  auto layout = model->addOperand(&type23);
  auto featureMap = model->addOperand(&type25);
  auto param13 = model->addOperand(&type27);
  auto param14 = model->addOperand(&type27);
  auto out = model->addOperand(&type26);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param13_init[] = {0, 1, 1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 4);
  static int32_t param14_init[] = {-1, 1, -1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_SLICE, {featureMap, param13, param14}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_zero_sized_dynamic_output_shape(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type17(Type::TENSOR_FLOAT32, {0});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type20(Type::TENSOR_INT32, {1});
  OperandType type21(Type::FLOAT32, {});
  OperandType type22(Type::INT32, {});
  OperandType type23(Type::BOOL, {});
  OperandType type24(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type27(Type::TENSOR_INT32, {4});
  OperandType type43(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2});
  // Phase 1, operands
  auto scores = model->addOperand(&type5);
  auto roi = model->addOperand(&type16);
  auto param = model->addOperand(&type20);
  auto param1 = model->addOperand(&type21);
  auto param2 = model->addOperand(&type22);
  auto param3 = model->addOperand(&type22);
  auto param4 = model->addOperand(&type21);
  auto param5 = model->addOperand(&type21);
  auto param6 = model->addOperand(&type21);
  auto scoresOut = model->addOperand(&type17);
  auto roiOut = model->addOperand(&type19);
  auto classesOut = model->addOperand(&type18);
  auto batchSplitOut = model->addOperand(&type18);
  auto in = model->addOperand(&type24);
  auto param7 = model->addOperand(&type22);
  auto param8 = model->addOperand(&type22);
  auto param9 = model->addOperand(&type21);
  auto param10 = model->addOperand(&type21);
  auto param11 = model->addOperand(&type22);
  auto param12 = model->addOperand(&type22);
  auto layout = model->addOperand(&type23);
  auto featureMap = model->addOperand(&type25);
  auto param13 = model->addOperand(&type27);
  auto param14 = model->addOperand(&type27);
  auto out = model->addOperand(&type43);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param13_init[] = {0, 1, 1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 4);
  static int32_t param14_init[] = {-1, 1, -1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_SLICE, {featureMap, param13, param14}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_zero_sized_relaxed(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type17(Type::TENSOR_FLOAT32, {0});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type20(Type::TENSOR_INT32, {1});
  OperandType type21(Type::FLOAT32, {});
  OperandType type22(Type::INT32, {});
  OperandType type23(Type::BOOL, {});
  OperandType type24(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type26(Type::TENSOR_FLOAT32, {0, 1, 1, 1});
  OperandType type27(Type::TENSOR_INT32, {4});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2});
  // Phase 1, operands
  auto scores = model->addOperand(&type5);
  auto roi = model->addOperand(&type16);
  auto param = model->addOperand(&type20);
  auto param1 = model->addOperand(&type21);
  auto param2 = model->addOperand(&type22);
  auto param3 = model->addOperand(&type22);
  auto param4 = model->addOperand(&type21);
  auto param5 = model->addOperand(&type21);
  auto param6 = model->addOperand(&type21);
  auto scoresOut = model->addOperand(&type17);
  auto roiOut = model->addOperand(&type19);
  auto classesOut = model->addOperand(&type18);
  auto batchSplitOut = model->addOperand(&type18);
  auto in = model->addOperand(&type24);
  auto param7 = model->addOperand(&type22);
  auto param8 = model->addOperand(&type22);
  auto param9 = model->addOperand(&type21);
  auto param10 = model->addOperand(&type21);
  auto param11 = model->addOperand(&type22);
  auto param12 = model->addOperand(&type22);
  auto layout = model->addOperand(&type23);
  auto featureMap = model->addOperand(&type25);
  auto param13 = model->addOperand(&type27);
  auto param14 = model->addOperand(&type27);
  auto out = model->addOperand(&type26);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param13_init[] = {0, 1, 1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 4);
  static int32_t param14_init[] = {-1, 1, -1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_SLICE, {featureMap, param13, param14}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_zero_sized_relaxed_dynamic_output_shape(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type17(Type::TENSOR_FLOAT32, {0});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type20(Type::TENSOR_INT32, {1});
  OperandType type21(Type::FLOAT32, {});
  OperandType type22(Type::INT32, {});
  OperandType type23(Type::BOOL, {});
  OperandType type24(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type27(Type::TENSOR_INT32, {4});
  OperandType type43(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2});
  // Phase 1, operands
  auto scores = model->addOperand(&type5);
  auto roi = model->addOperand(&type16);
  auto param = model->addOperand(&type20);
  auto param1 = model->addOperand(&type21);
  auto param2 = model->addOperand(&type22);
  auto param3 = model->addOperand(&type22);
  auto param4 = model->addOperand(&type21);
  auto param5 = model->addOperand(&type21);
  auto param6 = model->addOperand(&type21);
  auto scoresOut = model->addOperand(&type17);
  auto roiOut = model->addOperand(&type19);
  auto classesOut = model->addOperand(&type18);
  auto batchSplitOut = model->addOperand(&type18);
  auto in = model->addOperand(&type24);
  auto param7 = model->addOperand(&type22);
  auto param8 = model->addOperand(&type22);
  auto param9 = model->addOperand(&type21);
  auto param10 = model->addOperand(&type21);
  auto param11 = model->addOperand(&type22);
  auto param12 = model->addOperand(&type22);
  auto layout = model->addOperand(&type23);
  auto featureMap = model->addOperand(&type25);
  auto param13 = model->addOperand(&type27);
  auto param14 = model->addOperand(&type27);
  auto out = model->addOperand(&type43);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param13_init[] = {0, 1, 1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 4);
  static int32_t param14_init[] = {-1, 1, -1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_SLICE, {featureMap, param13, param14}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_zero_sized_quant8(Model *model) {
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type20(Type::TENSOR_INT32, {1});
  OperandType type21(Type::FLOAT32, {});
  OperandType type22(Type::INT32, {});
  OperandType type23(Type::BOOL, {});
  OperandType type27(Type::TENSOR_INT32, {4});
  OperandType type51(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type53(Type::TENSOR_QUANT8_ASYMM, {0, 1, 1, 1}, 0.1f, 128);
  OperandType type54(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type55(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type56(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type56);
  auto roi = model->addOperand(&type54);
  auto param = model->addOperand(&type20);
  auto param1 = model->addOperand(&type21);
  auto param2 = model->addOperand(&type22);
  auto param3 = model->addOperand(&type22);
  auto param4 = model->addOperand(&type21);
  auto param5 = model->addOperand(&type21);
  auto param6 = model->addOperand(&type21);
  auto scoresOut = model->addOperand(&type57);
  auto roiOut = model->addOperand(&type55);
  auto classesOut = model->addOperand(&type18);
  auto batchSplitOut = model->addOperand(&type18);
  auto in = model->addOperand(&type52);
  auto param7 = model->addOperand(&type22);
  auto param8 = model->addOperand(&type22);
  auto param9 = model->addOperand(&type21);
  auto param10 = model->addOperand(&type21);
  auto param11 = model->addOperand(&type22);
  auto param12 = model->addOperand(&type22);
  auto layout = model->addOperand(&type23);
  auto featureMap = model->addOperand(&type51);
  auto param13 = model->addOperand(&type27);
  auto param14 = model->addOperand(&type27);
  auto out = model->addOperand(&type53);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param13_init[] = {0, 1, 1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 4);
  static int32_t param14_init[] = {-1, 1, -1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_SLICE, {featureMap, param13, param14}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_zero_sized_quant8_dynamic_output_shape(Model *model) {
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type20(Type::TENSOR_INT32, {1});
  OperandType type21(Type::FLOAT32, {});
  OperandType type22(Type::INT32, {});
  OperandType type23(Type::BOOL, {});
  OperandType type27(Type::TENSOR_INT32, {4});
  OperandType type51(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type54(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type55(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type56(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type58(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type56);
  auto roi = model->addOperand(&type54);
  auto param = model->addOperand(&type20);
  auto param1 = model->addOperand(&type21);
  auto param2 = model->addOperand(&type22);
  auto param3 = model->addOperand(&type22);
  auto param4 = model->addOperand(&type21);
  auto param5 = model->addOperand(&type21);
  auto param6 = model->addOperand(&type21);
  auto scoresOut = model->addOperand(&type57);
  auto roiOut = model->addOperand(&type55);
  auto classesOut = model->addOperand(&type18);
  auto batchSplitOut = model->addOperand(&type18);
  auto in = model->addOperand(&type52);
  auto param7 = model->addOperand(&type22);
  auto param8 = model->addOperand(&type22);
  auto param9 = model->addOperand(&type21);
  auto param10 = model->addOperand(&type21);
  auto param11 = model->addOperand(&type22);
  auto param12 = model->addOperand(&type22);
  auto layout = model->addOperand(&type23);
  auto featureMap = model->addOperand(&type51);
  auto param13 = model->addOperand(&type27);
  auto param14 = model->addOperand(&type27);
  auto out = model->addOperand(&type58);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float param1_init[] = {0.3f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.4f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param13_init[] = {0, 1, 1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 4);
  static int32_t param14_init[] = {-1, 1, -1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_SLICE, {featureMap, param13, param14}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_zero_sized_float16(Model *model) {
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type20(Type::TENSOR_INT32, {1});
  OperandType type22(Type::INT32, {});
  OperandType type23(Type::BOOL, {});
  OperandType type27(Type::TENSOR_INT32, {4});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type59(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type60(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type61(Type::TENSOR_FLOAT16, {0, 1, 1, 1});
  OperandType type62(Type::FLOAT16, {});
  OperandType type63(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type64(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type65(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type36);
  auto roi = model->addOperand(&type63);
  auto param = model->addOperand(&type20);
  auto param1 = model->addOperand(&type62);
  auto param2 = model->addOperand(&type22);
  auto param3 = model->addOperand(&type22);
  auto param4 = model->addOperand(&type62);
  auto param5 = model->addOperand(&type62);
  auto param6 = model->addOperand(&type62);
  auto scoresOut = model->addOperand(&type65);
  auto roiOut = model->addOperand(&type64);
  auto classesOut = model->addOperand(&type18);
  auto batchSplitOut = model->addOperand(&type18);
  auto in = model->addOperand(&type60);
  auto param7 = model->addOperand(&type22);
  auto param8 = model->addOperand(&type22);
  auto param9 = model->addOperand(&type62);
  auto param10 = model->addOperand(&type62);
  auto param11 = model->addOperand(&type22);
  auto param12 = model->addOperand(&type22);
  auto layout = model->addOperand(&type23);
  auto featureMap = model->addOperand(&type59);
  auto param13 = model->addOperand(&type27);
  auto param14 = model->addOperand(&type27);
  auto out = model->addOperand(&type61);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static _Float16 param1_init[] = {0.30000001192092896f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.4000000059604645f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static _Float16 param6_init[] = {0.30000001192092896f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static _Float16 param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param13_init[] = {0, 1, 1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 4);
  static int32_t param14_init[] = {-1, 1, -1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_SLICE, {featureMap, param13, param14}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
namespace generated_tests::slice {

void CreateModel_zero_sized_float16_dynamic_output_shape(Model *model) {
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type20(Type::TENSOR_INT32, {1});
  OperandType type22(Type::INT32, {});
  OperandType type23(Type::BOOL, {});
  OperandType type27(Type::TENSOR_INT32, {4});
  OperandType type31(Type::TENSOR_FLOAT16, {0});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type46(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type59(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type60(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type62(Type::FLOAT16, {});
  OperandType type63(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type64(Type::TENSOR_FLOAT16, {0, 4});
  // Phase 1, operands
  auto scores = model->addOperand(&type36);
  auto roi = model->addOperand(&type63);
  auto param = model->addOperand(&type20);
  auto param1 = model->addOperand(&type62);
  auto param2 = model->addOperand(&type22);
  auto param3 = model->addOperand(&type22);
  auto param4 = model->addOperand(&type62);
  auto param5 = model->addOperand(&type62);
  auto param6 = model->addOperand(&type62);
  auto scoresOut = model->addOperand(&type31);
  auto roiOut = model->addOperand(&type64);
  auto classesOut = model->addOperand(&type18);
  auto batchSplitOut = model->addOperand(&type18);
  auto in = model->addOperand(&type60);
  auto param7 = model->addOperand(&type22);
  auto param8 = model->addOperand(&type22);
  auto param9 = model->addOperand(&type62);
  auto param10 = model->addOperand(&type62);
  auto param11 = model->addOperand(&type22);
  auto param12 = model->addOperand(&type22);
  auto layout = model->addOperand(&type23);
  auto featureMap = model->addOperand(&type59);
  auto param13 = model->addOperand(&type27);
  auto param14 = model->addOperand(&type27);
  auto out = model->addOperand(&type46);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static _Float16 param1_init[] = {0.30000001192092896f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.4000000059604645f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static _Float16 param6_init[] = {0.30000001192092896f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static _Float16 param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param13_init[] = {0, 1, 1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 4);
  static int32_t param14_init[] = {-1, 1, -1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_SLICE, {featureMap, param13, param14}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::slice
