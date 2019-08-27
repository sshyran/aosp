// Generated from select_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::select_v1_2 {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_BOOL8, {3});
  OperandType type1(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto input2 = model->addOperand(&type1);
  auto output0 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input0, input1, input2}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1, input2},
    {output0});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_BOOL8, {3});
  OperandType type1(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto input2 = model->addOperand(&type1);
  auto output0 = model->addOperand(&type6);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input0, input1, input2}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1, input2},
    {output0});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_BOOL8, {3});
  OperandType type1(Type::TENSOR_FLOAT32, {3});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto input2 = model->addOperand(&type1);
  auto output0 = model->addOperand(&type1);
  auto input1_tmp = model->addOperand(&type1);
  auto dummy = model->addOperand(&type7);
  auto param = model->addOperand(&type8);
  auto input2_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type7);
  auto param1 = model->addOperand(&type8);
  // Phase 2, operations
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy, param}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy1, param1}, {input2});
  model->addOperation(ANEURALNETWORKS_SELECT, {input0, input1, input2}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1_tmp, input2_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_BOOL8, {3});
  OperandType type1(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto input2 = model->addOperand(&type1);
  auto output0 = model->addOperand(&type6);
  auto input1_tmp = model->addOperand(&type1);
  auto dummy2 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type8);
  auto input2_tmp = model->addOperand(&type1);
  auto dummy3 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type8);
  // Phase 2, operations
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy2, param2}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy3, param3}, {input2});
  model->addOperation(ANEURALNETWORKS_SELECT, {input0, input1, input2}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1_tmp, input2_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_int32(Model *model) {
  OperandType type0(Type::TENSOR_BOOL8, {3});
  OperandType type9(Type::TENSOR_INT32, {3});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type9);
  auto input2 = model->addOperand(&type9);
  auto output0 = model->addOperand(&type9);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input0, input1, input2}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1, input2},
    {output0});
  assert(model->isValid());
}

bool is_ignored_int32(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_int32_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_BOOL8, {3});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type9(Type::TENSOR_INT32, {3});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type9);
  auto input2 = model->addOperand(&type9);
  auto output0 = model->addOperand(&type10);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input0, input1, input2}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1, input2},
    {output0});
  assert(model->isValid());
}

bool is_ignored_int32_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_float16(Model *model) {
  OperandType type0(Type::TENSOR_BOOL8, {3});
  OperandType type11(Type::TENSOR_FLOAT16, {3});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type11);
  auto input2 = model->addOperand(&type11);
  auto output0 = model->addOperand(&type11);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input0, input1, input2}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1, input2},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_BOOL8, {3});
  OperandType type11(Type::TENSOR_FLOAT16, {3});
  OperandType type12(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type11);
  auto input2 = model->addOperand(&type11);
  auto output0 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input0, input1, input2}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1, input2},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_BOOL8, {3});
  OperandType type11(Type::TENSOR_FLOAT16, {3});
  OperandType type13(Type::TENSOR_FLOAT16, {3});
  OperandType type14(Type::TENSOR_FLOAT16, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type13);
  auto input2 = model->addOperand(&type13);
  auto output0 = model->addOperand(&type11);
  auto input1_tmp = model->addOperand(&type13);
  auto dummy4 = model->addOperand(&type14);
  auto param4 = model->addOperand(&type8);
  auto input2_tmp = model->addOperand(&type13);
  auto dummy5 = model->addOperand(&type14);
  auto param5 = model->addOperand(&type8);
  // Phase 2, operations
  static _Float16 dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(_Float16) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static _Float16 dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(_Float16) * 1);
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy4, param4}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy5, param5}, {input2});
  model->addOperation(ANEURALNETWORKS_SELECT, {input0, input1, input2}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1_tmp, input2_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_BOOL8, {3});
  OperandType type12(Type::TENSOR_FLOAT16, {0});
  OperandType type13(Type::TENSOR_FLOAT16, {3});
  OperandType type14(Type::TENSOR_FLOAT16, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type13);
  auto input2 = model->addOperand(&type13);
  auto output0 = model->addOperand(&type12);
  auto input1_tmp = model->addOperand(&type13);
  auto dummy6 = model->addOperand(&type14);
  auto param6 = model->addOperand(&type8);
  auto input2_tmp = model->addOperand(&type13);
  auto dummy7 = model->addOperand(&type14);
  auto param7 = model->addOperand(&type8);
  // Phase 2, operations
  static _Float16 dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(_Float16) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static _Float16 dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(_Float16) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy6, param6}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy7, param7}, {input2});
  model->addOperation(ANEURALNETWORKS_SELECT, {input0, input1, input2}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1_tmp, input2_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_BOOL8, {3});
  OperandType type1(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto input2 = model->addOperand(&type1);
  auto output0 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input0, input1, input2}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1, input2},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_BOOL8, {3});
  OperandType type1(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto input2 = model->addOperand(&type1);
  auto output0 = model->addOperand(&type6);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input0, input1, input2}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1, input2},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_BOOL8, {3});
  OperandType type1(Type::TENSOR_FLOAT32, {3});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto input2 = model->addOperand(&type1);
  auto output0 = model->addOperand(&type1);
  auto input1_tmp = model->addOperand(&type1);
  auto dummy8 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type8);
  auto input2_tmp = model->addOperand(&type1);
  auto dummy9 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type8);
  // Phase 2, operations
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy8, param8}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy9, param9}, {input2});
  model->addOperation(ANEURALNETWORKS_SELECT, {input0, input1, input2}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1_tmp, input2_tmp},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_BOOL8, {3});
  OperandType type1(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type1);
  auto input2 = model->addOperand(&type1);
  auto output0 = model->addOperand(&type6);
  auto input1_tmp = model->addOperand(&type1);
  auto dummy10 = model->addOperand(&type7);
  auto param10 = model->addOperand(&type8);
  auto input2_tmp = model->addOperand(&type1);
  auto dummy11 = model->addOperand(&type7);
  auto param11 = model->addOperand(&type8);
  // Phase 2, operations
  static float dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(float) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static float dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(float) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy10, param10}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy11, param11}, {input2});
  model->addOperation(ANEURALNETWORKS_SELECT, {input0, input1, input2}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1_tmp, input2_tmp},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_quant8(Model *model) {
  OperandType type0(Type::TENSOR_BOOL8, {3});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {3}, 1.5f, 129);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 1.0f, 128);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type15);
  auto input2 = model->addOperand(&type16);
  auto output0 = model->addOperand(&type17);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input0, input1, input2}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1, input2},
    {output0});
  assert(model->isValid());
}

bool is_ignored_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_BOOL8, {3});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {3}, 1.5f, 129);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 128);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type15);
  auto input2 = model->addOperand(&type16);
  auto output0 = model->addOperand(&type18);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input0, input1, input2}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1, input2},
    {output0});
  assert(model->isValid());
}

bool is_ignored_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_BOOL8, {3});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {3}, 1.5f, 129);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 1.0f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 1.5f, 129);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type15);
  auto input2 = model->addOperand(&type16);
  auto output0 = model->addOperand(&type17);
  auto input1_tmp = model->addOperand(&type15);
  auto dummy12 = model->addOperand(&type19);
  auto param12 = model->addOperand(&type8);
  auto input2_tmp = model->addOperand(&type16);
  auto dummy13 = model->addOperand(&type20);
  auto param13 = model->addOperand(&type8);
  // Phase 2, operations
  static uint8_t dummy12_init[] = {129};
  model->setOperandValue(dummy12, dummy12_init, sizeof(uint8_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static uint8_t dummy13_init[] = {127};
  model->setOperandValue(dummy13, dummy13_init, sizeof(uint8_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy12, param12}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy13, param13}, {input2});
  model->addOperation(ANEURALNETWORKS_SELECT, {input0, input1, input2}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1_tmp, input2_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_BOOL8, {3});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {3}, 1.5f, 129);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 1.5f, 129);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type15);
  auto input2 = model->addOperand(&type16);
  auto output0 = model->addOperand(&type18);
  auto input1_tmp = model->addOperand(&type15);
  auto dummy14 = model->addOperand(&type19);
  auto param14 = model->addOperand(&type8);
  auto input2_tmp = model->addOperand(&type16);
  auto dummy15 = model->addOperand(&type20);
  auto param15 = model->addOperand(&type8);
  // Phase 2, operations
  static uint8_t dummy14_init[] = {129};
  model->setOperandValue(dummy14, dummy14_init, sizeof(uint8_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static uint8_t dummy15_init[] = {127};
  model->setOperandValue(dummy15, dummy15_init, sizeof(uint8_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy14, param14}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy15, param15}, {input2});
  model->addOperation(ANEURALNETWORKS_SELECT, {input0, input1, input2}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1_tmp, input2_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_2(Model *model) {
  OperandType type2(Type::TENSOR_BOOL8, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 2});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto input11 = model->addOperand(&type3);
  auto input21 = model->addOperand(&type3);
  auto output01 = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input01, input11, input21}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11, input21},
    {output01});
  assert(model->isValid());
}

bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_dynamic_output_shape_2(Model *model) {
  OperandType type2(Type::TENSOR_BOOL8, {2, 2});
  OperandType type21(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 2});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto input11 = model->addOperand(&type3);
  auto input21 = model->addOperand(&type3);
  auto output01 = model->addOperand(&type21);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input01, input11, input21}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11, input21},
    {output01});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_all_inputs_as_internal_2(Model *model) {
  OperandType type2(Type::TENSOR_BOOL8, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto input11 = model->addOperand(&type3);
  auto input21 = model->addOperand(&type3);
  auto output01 = model->addOperand(&type3);
  auto input11_tmp = model->addOperand(&type3);
  auto dummy16 = model->addOperand(&type7);
  auto param16 = model->addOperand(&type8);
  auto input21_tmp = model->addOperand(&type3);
  auto dummy17 = model->addOperand(&type7);
  auto param17 = model->addOperand(&type8);
  // Phase 2, operations
  static float dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(float) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(float) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input11_tmp, dummy16, param16}, {input11});
  model->addOperation(ANEURALNETWORKS_ADD, {input21_tmp, dummy17, param17}, {input21});
  model->addOperation(ANEURALNETWORKS_SELECT, {input01, input11, input21}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11_tmp, input21_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type2(Type::TENSOR_BOOL8, {2, 2});
  OperandType type21(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto input11 = model->addOperand(&type3);
  auto input21 = model->addOperand(&type3);
  auto output01 = model->addOperand(&type21);
  auto input11_tmp = model->addOperand(&type3);
  auto dummy18 = model->addOperand(&type7);
  auto param18 = model->addOperand(&type8);
  auto input21_tmp = model->addOperand(&type3);
  auto dummy19 = model->addOperand(&type7);
  auto param19 = model->addOperand(&type8);
  // Phase 2, operations
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input11_tmp, dummy18, param18}, {input11});
  model->addOperation(ANEURALNETWORKS_ADD, {input21_tmp, dummy19, param19}, {input21});
  model->addOperation(ANEURALNETWORKS_SELECT, {input01, input11, input21}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11_tmp, input21_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_int32_2(Model *model) {
  OperandType type2(Type::TENSOR_BOOL8, {2, 2});
  OperandType type22(Type::TENSOR_INT32, {2, 2});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto input11 = model->addOperand(&type22);
  auto input21 = model->addOperand(&type22);
  auto output01 = model->addOperand(&type22);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input01, input11, input21}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11, input21},
    {output01});
  assert(model->isValid());
}

bool is_ignored_int32_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_int32_dynamic_output_shape_2(Model *model) {
  OperandType type2(Type::TENSOR_BOOL8, {2, 2});
  OperandType type22(Type::TENSOR_INT32, {2, 2});
  OperandType type23(Type::TENSOR_INT32, {0, 0});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto input11 = model->addOperand(&type22);
  auto input21 = model->addOperand(&type22);
  auto output01 = model->addOperand(&type23);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input01, input11, input21}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11, input21},
    {output01});
  assert(model->isValid());
}

bool is_ignored_int32_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_float16_2(Model *model) {
  OperandType type2(Type::TENSOR_BOOL8, {2, 2});
  OperandType type24(Type::TENSOR_FLOAT16, {2, 2});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto input11 = model->addOperand(&type24);
  auto input21 = model->addOperand(&type24);
  auto output01 = model->addOperand(&type24);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input01, input11, input21}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11, input21},
    {output01});
  assert(model->isValid());
}

bool is_ignored_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_float16_dynamic_output_shape_2(Model *model) {
  OperandType type2(Type::TENSOR_BOOL8, {2, 2});
  OperandType type24(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type25(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto input11 = model->addOperand(&type24);
  auto input21 = model->addOperand(&type24);
  auto output01 = model->addOperand(&type25);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input01, input11, input21}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11, input21},
    {output01});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type14(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_BOOL8, {2, 2});
  OperandType type24(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type26(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto input11 = model->addOperand(&type26);
  auto input21 = model->addOperand(&type26);
  auto output01 = model->addOperand(&type24);
  auto input11_tmp = model->addOperand(&type26);
  auto dummy20 = model->addOperand(&type14);
  auto param20 = model->addOperand(&type8);
  auto input21_tmp = model->addOperand(&type26);
  auto dummy21 = model->addOperand(&type14);
  auto param21 = model->addOperand(&type8);
  // Phase 2, operations
  static _Float16 dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(_Float16) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static _Float16 dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(_Float16) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input11_tmp, dummy20, param20}, {input11});
  model->addOperation(ANEURALNETWORKS_ADD, {input21_tmp, dummy21, param21}, {input21});
  model->addOperation(ANEURALNETWORKS_SELECT, {input01, input11, input21}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11_tmp, input21_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type14(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_BOOL8, {2, 2});
  OperandType type25(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type26(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto input11 = model->addOperand(&type26);
  auto input21 = model->addOperand(&type26);
  auto output01 = model->addOperand(&type25);
  auto input11_tmp = model->addOperand(&type26);
  auto dummy22 = model->addOperand(&type14);
  auto param22 = model->addOperand(&type8);
  auto input21_tmp = model->addOperand(&type26);
  auto dummy23 = model->addOperand(&type14);
  auto param23 = model->addOperand(&type8);
  // Phase 2, operations
  static _Float16 dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(_Float16) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static _Float16 dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(_Float16) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input11_tmp, dummy22, param22}, {input11});
  model->addOperation(ANEURALNETWORKS_ADD, {input21_tmp, dummy23, param23}, {input21});
  model->addOperation(ANEURALNETWORKS_SELECT, {input01, input11, input21}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11_tmp, input21_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_relaxed_2(Model *model) {
  OperandType type2(Type::TENSOR_BOOL8, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 2});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto input11 = model->addOperand(&type3);
  auto input21 = model->addOperand(&type3);
  auto output01 = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input01, input11, input21}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11, input21},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type2(Type::TENSOR_BOOL8, {2, 2});
  OperandType type21(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 2});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto input11 = model->addOperand(&type3);
  auto input21 = model->addOperand(&type3);
  auto output01 = model->addOperand(&type21);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input01, input11, input21}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11, input21},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type2(Type::TENSOR_BOOL8, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto input11 = model->addOperand(&type3);
  auto input21 = model->addOperand(&type3);
  auto output01 = model->addOperand(&type3);
  auto input11_tmp = model->addOperand(&type3);
  auto dummy24 = model->addOperand(&type7);
  auto param24 = model->addOperand(&type8);
  auto input21_tmp = model->addOperand(&type3);
  auto dummy25 = model->addOperand(&type7);
  auto param25 = model->addOperand(&type8);
  // Phase 2, operations
  static float dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(float) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static float dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(float) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input11_tmp, dummy24, param24}, {input11});
  model->addOperation(ANEURALNETWORKS_ADD, {input21_tmp, dummy25, param25}, {input21});
  model->addOperation(ANEURALNETWORKS_SELECT, {input01, input11, input21}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11_tmp, input21_tmp},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type2(Type::TENSOR_BOOL8, {2, 2});
  OperandType type21(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto input11 = model->addOperand(&type3);
  auto input21 = model->addOperand(&type3);
  auto output01 = model->addOperand(&type21);
  auto input11_tmp = model->addOperand(&type3);
  auto dummy26 = model->addOperand(&type7);
  auto param26 = model->addOperand(&type8);
  auto input21_tmp = model->addOperand(&type3);
  auto dummy27 = model->addOperand(&type7);
  auto param27 = model->addOperand(&type8);
  // Phase 2, operations
  static float dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static float dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(float) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input11_tmp, dummy26, param26}, {input11});
  model->addOperation(ANEURALNETWORKS_ADD, {input21_tmp, dummy27, param27}, {input21});
  model->addOperation(ANEURALNETWORKS_SELECT, {input01, input11, input21}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11_tmp, input21_tmp},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_quant8_2(Model *model) {
  OperandType type2(Type::TENSOR_BOOL8, {2, 2});
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 1.5f, 129);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 1.0f, 128);
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto input11 = model->addOperand(&type27);
  auto input21 = model->addOperand(&type28);
  auto output01 = model->addOperand(&type29);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input01, input11, input21}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11, input21},
    {output01});
  assert(model->isValid());
}

bool is_ignored_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type2(Type::TENSOR_BOOL8, {2, 2});
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 1.5f, 129);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 1.0f, 128);
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto input11 = model->addOperand(&type27);
  auto input21 = model->addOperand(&type28);
  auto output01 = model->addOperand(&type30);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input01, input11, input21}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11, input21},
    {output01});
  assert(model->isValid());
}

bool is_ignored_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 1.5f, 129);
  OperandType type2(Type::TENSOR_BOOL8, {2, 2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 1.5f, 129);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 1.0f, 128);
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto input11 = model->addOperand(&type27);
  auto input21 = model->addOperand(&type28);
  auto output01 = model->addOperand(&type29);
  auto input11_tmp = model->addOperand(&type27);
  auto dummy28 = model->addOperand(&type19);
  auto param28 = model->addOperand(&type8);
  auto input21_tmp = model->addOperand(&type28);
  auto dummy29 = model->addOperand(&type20);
  auto param29 = model->addOperand(&type8);
  // Phase 2, operations
  static uint8_t dummy28_init[] = {129};
  model->setOperandValue(dummy28, dummy28_init, sizeof(uint8_t) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static uint8_t dummy29_init[] = {127};
  model->setOperandValue(dummy29, dummy29_init, sizeof(uint8_t) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input11_tmp, dummy28, param28}, {input11});
  model->addOperation(ANEURALNETWORKS_ADD, {input21_tmp, dummy29, param29}, {input21});
  model->addOperation(ANEURALNETWORKS_SELECT, {input01, input11, input21}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11_tmp, input21_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 1.5f, 129);
  OperandType type2(Type::TENSOR_BOOL8, {2, 2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 1.5f, 129);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 1.0f, 128);
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto input11 = model->addOperand(&type27);
  auto input21 = model->addOperand(&type28);
  auto output01 = model->addOperand(&type30);
  auto input11_tmp = model->addOperand(&type27);
  auto dummy30 = model->addOperand(&type19);
  auto param30 = model->addOperand(&type8);
  auto input21_tmp = model->addOperand(&type28);
  auto dummy31 = model->addOperand(&type20);
  auto param31 = model->addOperand(&type8);
  // Phase 2, operations
  static uint8_t dummy30_init[] = {129};
  model->setOperandValue(dummy30, dummy30_init, sizeof(uint8_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static uint8_t dummy31_init[] = {127};
  model->setOperandValue(dummy31, dummy31_init, sizeof(uint8_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input11_tmp, dummy30, param30}, {input11});
  model->addOperation(ANEURALNETWORKS_ADD, {input21_tmp, dummy31, param31}, {input21});
  model->addOperation(ANEURALNETWORKS_SELECT, {input01, input11, input21}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11_tmp, input21_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_3(Model *model) {
  OperandType type4(Type::TENSOR_BOOL8, {2, 1, 2, 1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 1, 2, 1, 2});
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto input12 = model->addOperand(&type5);
  auto input22 = model->addOperand(&type5);
  auto output02 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input02, input12, input22}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02, input12, input22},
    {output02});
  assert(model->isValid());
}

bool is_ignored_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_dynamic_output_shape_3(Model *model) {
  OperandType type31(Type::TENSOR_FLOAT32, {0, 0, 0, 0, 0});
  OperandType type4(Type::TENSOR_BOOL8, {2, 1, 2, 1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 1, 2, 1, 2});
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto input12 = model->addOperand(&type5);
  auto input22 = model->addOperand(&type5);
  auto output02 = model->addOperand(&type31);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input02, input12, input22}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02, input12, input22},
    {output02});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_int32_3(Model *model) {
  OperandType type32(Type::TENSOR_INT32, {2, 1, 2, 1, 2});
  OperandType type4(Type::TENSOR_BOOL8, {2, 1, 2, 1, 2});
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto input12 = model->addOperand(&type32);
  auto input22 = model->addOperand(&type32);
  auto output02 = model->addOperand(&type32);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input02, input12, input22}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02, input12, input22},
    {output02});
  assert(model->isValid());
}

bool is_ignored_int32_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_int32_dynamic_output_shape_3(Model *model) {
  OperandType type32(Type::TENSOR_INT32, {2, 1, 2, 1, 2});
  OperandType type33(Type::TENSOR_INT32, {0, 0, 0, 0, 0});
  OperandType type4(Type::TENSOR_BOOL8, {2, 1, 2, 1, 2});
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto input12 = model->addOperand(&type32);
  auto input22 = model->addOperand(&type32);
  auto output02 = model->addOperand(&type33);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input02, input12, input22}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02, input12, input22},
    {output02});
  assert(model->isValid());
}

bool is_ignored_int32_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_float16_3(Model *model) {
  OperandType type34(Type::TENSOR_FLOAT16, {2, 1, 2, 1, 2});
  OperandType type4(Type::TENSOR_BOOL8, {2, 1, 2, 1, 2});
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto input12 = model->addOperand(&type34);
  auto input22 = model->addOperand(&type34);
  auto output02 = model->addOperand(&type34);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input02, input12, input22}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02, input12, input22},
    {output02});
  assert(model->isValid());
}

bool is_ignored_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_float16_dynamic_output_shape_3(Model *model) {
  OperandType type34(Type::TENSOR_FLOAT16, {2, 1, 2, 1, 2});
  OperandType type35(Type::TENSOR_FLOAT16, {0, 0, 0, 0, 0});
  OperandType type4(Type::TENSOR_BOOL8, {2, 1, 2, 1, 2});
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto input12 = model->addOperand(&type34);
  auto input22 = model->addOperand(&type34);
  auto output02 = model->addOperand(&type35);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input02, input12, input22}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02, input12, input22},
    {output02});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_relaxed_3(Model *model) {
  OperandType type4(Type::TENSOR_BOOL8, {2, 1, 2, 1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 1, 2, 1, 2});
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto input12 = model->addOperand(&type5);
  auto input22 = model->addOperand(&type5);
  auto output02 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input02, input12, input22}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02, input12, input22},
    {output02});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type31(Type::TENSOR_FLOAT32, {0, 0, 0, 0, 0});
  OperandType type4(Type::TENSOR_BOOL8, {2, 1, 2, 1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 1, 2, 1, 2});
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto input12 = model->addOperand(&type5);
  auto input22 = model->addOperand(&type5);
  auto output02 = model->addOperand(&type31);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input02, input12, input22}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02, input12, input22},
    {output02});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_quant8_3(Model *model) {
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2, 1, 2}, 1.5f, 129);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2, 1, 2}, 0.5f, 127);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2, 1, 2}, 1.0f, 128);
  OperandType type4(Type::TENSOR_BOOL8, {2, 1, 2, 1, 2});
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto input12 = model->addOperand(&type36);
  auto input22 = model->addOperand(&type37);
  auto output02 = model->addOperand(&type38);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input02, input12, input22}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02, input12, input22},
    {output02});
  assert(model->isValid());
}

bool is_ignored_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
namespace generated_tests::select_v1_2 {

void CreateModel_quant8_dynamic_output_shape_3(Model *model) {
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2, 1, 2}, 1.5f, 129);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2, 1, 2}, 0.5f, 127);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0, 0}, 1.0f, 128);
  OperandType type4(Type::TENSOR_BOOL8, {2, 1, 2, 1, 2});
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto input12 = model->addOperand(&type36);
  auto input22 = model->addOperand(&type37);
  auto output02 = model->addOperand(&type39);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_SELECT, {input02, input12, input22}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02, input12, input22},
    {output02});
  assert(model->isValid());
}

bool is_ignored_quant8_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::select_v1_2
