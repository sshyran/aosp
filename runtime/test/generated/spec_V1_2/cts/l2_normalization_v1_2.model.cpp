// Generated from l2_normalization_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim4_axis3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim4_axis3_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis3_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim4_axis3_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type0);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type3);
  auto param = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis3_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type3);
  auto param1 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param1}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim4_axis3_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dim4_axis3_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim4_axis3_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dim4_axis3_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim4_axis3_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type0);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type3);
  auto param2 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy2, param2}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dim4_axis3_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type3);
  auto param3 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy3, param3}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim4_axis3_float16(Model *model) {
  OperandType type4(Type::TENSOR_FLOAT16, {2, 2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis3_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim4_axis3_float16_dynamic_output_shape(Model *model) {
  OperandType type4(Type::TENSOR_FLOAT16, {2, 2, 2, 3});
  OperandType type5(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto op2 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis3_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim4_axis3_float16_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT16, {2, 2, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT16, {2, 2, 2, 3});
  OperandType type7(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto op2 = model->addOperand(&type4);
  auto op1_tmp = model->addOperand(&type6);
  auto dummy4 = model->addOperand(&type7);
  auto param4 = model->addOperand(&type1);
  // Phase 2, operations
  static _Float16 dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(_Float16) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy4, param4}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis3_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT16, {2, 2, 2, 3});
  OperandType type7(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto op2 = model->addOperand(&type5);
  auto op1_tmp = model->addOperand(&type6);
  auto dummy5 = model->addOperand(&type7);
  auto param5 = model->addOperand(&type1);
  // Phase 2, operations
  static _Float16 dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(_Float16) * 1);
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy5, param5}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim4_axis3_quant8(Model *model) {
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 3}, 0.1f, 32);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 3}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto op2 = model->addOperand(&type9);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis3_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim4_axis3_quant8_dynamic_output_shape(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.0078125f, 128);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 3}, 0.1f, 32);
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis3_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim4_axis3_quant8_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 32);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 3}, 0.1f, 32);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 3}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto op2 = model->addOperand(&type9);
  auto op1_tmp = model->addOperand(&type8);
  auto dummy6 = model->addOperand(&type11);
  auto param6 = model->addOperand(&type1);
  // Phase 2, operations
  static uint8_t dummy6_init[] = {32};
  model->setOperandValue(dummy6, dummy6_init, sizeof(uint8_t) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy6, param6}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis3_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.0078125f, 128);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 32);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 3}, 0.1f, 32);
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto op2 = model->addOperand(&type10);
  auto op1_tmp = model->addOperand(&type8);
  auto dummy7 = model->addOperand(&type11);
  auto param7 = model->addOperand(&type1);
  // Phase 2, operations
  static uint8_t dummy7_init[] = {32};
  model->setOperandValue(dummy7, dummy7_init, sizeof(uint8_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy7, param7}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim3_axis2(Model *model) {
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim3_axis2_dynamic_output_shape(Model *model) {
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2, 3});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis2_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim3_axis2_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type12);
  auto op1_tmp = model->addOperand(&type12);
  auto dummy8 = model->addOperand(&type3);
  auto param8 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy8, param8}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis2_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2, 3});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type13);
  auto op1_tmp = model->addOperand(&type12);
  auto dummy9 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy9, param9}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim3_axis2_relaxed(Model *model) {
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dim3_axis2_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim3_axis2_relaxed_dynamic_output_shape(Model *model) {
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2, 3});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dim3_axis2_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim3_axis2_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type12);
  auto op1_tmp = model->addOperand(&type12);
  auto dummy10 = model->addOperand(&type3);
  auto param10 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(float) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy10, param10}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dim3_axis2_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2, 3});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type13);
  auto op1_tmp = model->addOperand(&type12);
  auto dummy11 = model->addOperand(&type3);
  auto param11 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(float) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy11, param11}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim3_axis2_float16(Model *model) {
  OperandType type14(Type::TENSOR_FLOAT16, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto op2 = model->addOperand(&type14);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis2_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim3_axis2_float16_dynamic_output_shape(Model *model) {
  OperandType type14(Type::TENSOR_FLOAT16, {2, 2, 3});
  OperandType type15(Type::TENSOR_FLOAT16, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto op2 = model->addOperand(&type15);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis2_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim3_axis2_float16_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT16, {2, 2, 3});
  OperandType type16(Type::TENSOR_FLOAT16, {2, 2, 3});
  OperandType type7(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type14);
  auto op1_tmp = model->addOperand(&type16);
  auto dummy12 = model->addOperand(&type7);
  auto param12 = model->addOperand(&type1);
  // Phase 2, operations
  static _Float16 dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(_Float16) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy12, param12}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis2_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type16(Type::TENSOR_FLOAT16, {2, 2, 3});
  OperandType type7(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type15);
  auto op1_tmp = model->addOperand(&type16);
  auto dummy13 = model->addOperand(&type7);
  auto param13 = model->addOperand(&type1);
  // Phase 2, operations
  static _Float16 dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(_Float16) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy13, param13}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim3_axis2_quant8(Model *model) {
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3}, 0.1f, 32);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto op2 = model->addOperand(&type18);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis2_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim3_axis2_quant8_dynamic_output_shape(Model *model) {
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3}, 0.1f, 32);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto op2 = model->addOperand(&type19);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis2_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim3_axis2_quant8_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 32);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3}, 0.1f, 32);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto op2 = model->addOperand(&type18);
  auto op1_tmp = model->addOperand(&type17);
  auto dummy14 = model->addOperand(&type11);
  auto param14 = model->addOperand(&type1);
  // Phase 2, operations
  static uint8_t dummy14_init[] = {32};
  model->setOperandValue(dummy14, dummy14_init, sizeof(uint8_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy14, param14}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis2_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 32);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3}, 0.1f, 32);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto op2 = model->addOperand(&type19);
  auto op1_tmp = model->addOperand(&type17);
  auto dummy15 = model->addOperand(&type11);
  auto param15 = model->addOperand(&type1);
  // Phase 2, operations
  static uint8_t dummy15_init[] = {32};
  model->setOperandValue(dummy15, dummy15_init, sizeof(uint8_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy15, param15}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim2_axis1(Model *model) {
  OperandType type20(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto op2 = model->addOperand(&type20);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim2_axis1_dynamic_output_shape(Model *model) {
  OperandType type20(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type21(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto op2 = model->addOperand(&type21);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis1_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim2_axis1_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto op2 = model->addOperand(&type20);
  auto op1_tmp = model->addOperand(&type20);
  auto dummy16 = model->addOperand(&type3);
  auto param16 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(float) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy16, param16}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis1_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type21(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto op2 = model->addOperand(&type21);
  auto op1_tmp = model->addOperand(&type20);
  auto dummy17 = model->addOperand(&type3);
  auto param17 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(float) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy17, param17}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim2_axis1_relaxed(Model *model) {
  OperandType type20(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto op2 = model->addOperand(&type20);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dim2_axis1_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim2_axis1_relaxed_dynamic_output_shape(Model *model) {
  OperandType type20(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type21(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto op2 = model->addOperand(&type21);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dim2_axis1_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim2_axis1_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto op2 = model->addOperand(&type20);
  auto op1_tmp = model->addOperand(&type20);
  auto dummy18 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy18, param18}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dim2_axis1_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type21(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto op2 = model->addOperand(&type21);
  auto op1_tmp = model->addOperand(&type20);
  auto dummy19 = model->addOperand(&type3);
  auto param19 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy19, param19}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim2_axis1_float16(Model *model) {
  OperandType type22(Type::TENSOR_FLOAT16, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto op2 = model->addOperand(&type22);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim2_axis1_float16_dynamic_output_shape(Model *model) {
  OperandType type22(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto op2 = model->addOperand(&type23);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis1_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim2_axis1_float16_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type24(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type7(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto op2 = model->addOperand(&type22);
  auto op1_tmp = model->addOperand(&type24);
  auto dummy20 = model->addOperand(&type7);
  auto param20 = model->addOperand(&type1);
  // Phase 2, operations
  static _Float16 dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(_Float16) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy20, param20}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis1_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type24(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type7(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto op2 = model->addOperand(&type23);
  auto op1_tmp = model->addOperand(&type24);
  auto dummy21 = model->addOperand(&type7);
  auto param21 = model->addOperand(&type1);
  // Phase 2, operations
  static _Float16 dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(_Float16) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy21, param21}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim2_axis1_quant8(Model *model) {
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 0.1f, 32);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type26);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis1_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim2_axis1_quant8_dynamic_output_shape(Model *model) {
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 0.1f, 32);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis1_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim2_axis1_quant8_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 32);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 0.1f, 32);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type26);
  auto op1_tmp = model->addOperand(&type25);
  auto dummy22 = model->addOperand(&type11);
  auto param22 = model->addOperand(&type1);
  // Phase 2, operations
  static uint8_t dummy22_init[] = {32};
  model->setOperandValue(dummy22, dummy22_init, sizeof(uint8_t) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy22, param22}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis1_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 32);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 0.1f, 32);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type27);
  auto op1_tmp = model->addOperand(&type25);
  auto dummy23 = model->addOperand(&type11);
  auto param23 = model->addOperand(&type1);
  // Phase 2, operations
  static uint8_t dummy23_init[] = {32};
  model->setOperandValue(dummy23, dummy23_init, sizeof(uint8_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy23, param23}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim1_axis0(Model *model) {
  OperandType type28(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim1_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim1_axis0_dynamic_output_shape(Model *model) {
  OperandType type28(Type::TENSOR_FLOAT32, {3});
  OperandType type29(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto op2 = model->addOperand(&type29);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim1_axis0_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim1_axis0_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto op2 = model->addOperand(&type28);
  auto op1_tmp = model->addOperand(&type28);
  auto dummy24 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(float) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy24, param24}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim1_axis0_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {3});
  OperandType type29(Type::TENSOR_FLOAT32, {0});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto op2 = model->addOperand(&type29);
  auto op1_tmp = model->addOperand(&type28);
  auto dummy25 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(float) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy25, param25}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim1_axis0_relaxed(Model *model) {
  OperandType type28(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dim1_axis0_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim1_axis0_relaxed_dynamic_output_shape(Model *model) {
  OperandType type28(Type::TENSOR_FLOAT32, {3});
  OperandType type29(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto op2 = model->addOperand(&type29);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dim1_axis0_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim1_axis0_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto op2 = model->addOperand(&type28);
  auto op1_tmp = model->addOperand(&type28);
  auto dummy26 = model->addOperand(&type3);
  auto param26 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy26, param26}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dim1_axis0_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {3});
  OperandType type29(Type::TENSOR_FLOAT32, {0});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto op2 = model->addOperand(&type29);
  auto op1_tmp = model->addOperand(&type28);
  auto dummy27 = model->addOperand(&type3);
  auto param27 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(float) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy27, param27}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim1_axis0_float16(Model *model) {
  OperandType type30(Type::TENSOR_FLOAT16, {3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type30);
  auto op2 = model->addOperand(&type30);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim1_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim1_axis0_float16_dynamic_output_shape(Model *model) {
  OperandType type30(Type::TENSOR_FLOAT16, {3});
  OperandType type31(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type30);
  auto op2 = model->addOperand(&type31);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim1_axis0_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim1_axis0_float16_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT16, {3});
  OperandType type32(Type::TENSOR_FLOAT16, {3});
  OperandType type7(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type32);
  auto op2 = model->addOperand(&type30);
  auto op1_tmp = model->addOperand(&type32);
  auto dummy28 = model->addOperand(&type7);
  auto param28 = model->addOperand(&type1);
  // Phase 2, operations
  static _Float16 dummy28_init[] = {0.0f};
  model->setOperandValue(dummy28, dummy28_init, sizeof(_Float16) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy28, param28}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim1_axis0_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type31(Type::TENSOR_FLOAT16, {0});
  OperandType type32(Type::TENSOR_FLOAT16, {3});
  OperandType type7(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type32);
  auto op2 = model->addOperand(&type31);
  auto op1_tmp = model->addOperand(&type32);
  auto dummy29 = model->addOperand(&type7);
  auto param29 = model->addOperand(&type1);
  // Phase 2, operations
  static _Float16 dummy29_init[] = {0.0f};
  model->setOperandValue(dummy29, dummy29_init, sizeof(_Float16) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy29, param29}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim1_axis0_quant8(Model *model) {
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {3}, 0.1f, 32);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {3}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type33);
  auto op2 = model->addOperand(&type34);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim1_axis0_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim1_axis0_quant8_dynamic_output_shape(Model *model) {
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {3}, 0.1f, 32);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {0}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type33);
  auto op2 = model->addOperand(&type35);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim1_axis0_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim1_axis0_quant8_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 32);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {3}, 0.1f, 32);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {3}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type33);
  auto op2 = model->addOperand(&type34);
  auto op1_tmp = model->addOperand(&type33);
  auto dummy30 = model->addOperand(&type11);
  auto param30 = model->addOperand(&type1);
  // Phase 2, operations
  static uint8_t dummy30_init[] = {32};
  model->setOperandValue(dummy30, dummy30_init, sizeof(uint8_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy30, param30}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim1_axis0_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 32);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {3}, 0.1f, 32);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {0}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type33);
  auto op2 = model->addOperand(&type35);
  auto op1_tmp = model->addOperand(&type33);
  auto dummy31 = model->addOperand(&type11);
  auto param31 = model->addOperand(&type1);
  // Phase 2, operations
  static uint8_t dummy31_init[] = {32};
  model->setOperandValue(dummy31, dummy31_init, sizeof(uint8_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy31, param31}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim4_axis3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim4_axis3_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis3_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim4_axis3_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type0);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy32 = model->addOperand(&type3);
  auto param32 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy32_init[] = {0.0f};
  model->setOperandValue(dummy32, dummy32_init, sizeof(float) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy32, param32}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis3_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy33 = model->addOperand(&type3);
  auto param33 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy33_init[] = {0.0f};
  model->setOperandValue(dummy33, dummy33_init, sizeof(float) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy33, param33}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim4_axis3_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis3_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim4_axis3_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  OperandType type2(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis3_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim4_axis3_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type0);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy34 = model->addOperand(&type3);
  auto param34 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy34_init[] = {0.0f};
  model->setOperandValue(dummy34, dummy34_init, sizeof(float) * 1);
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy34, param34}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis3_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 2, 3});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy35 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy35_init[] = {0.0f};
  model->setOperandValue(dummy35, dummy35_init, sizeof(float) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy35, param35}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim4_axis3_float16(Model *model) {
  OperandType type4(Type::TENSOR_FLOAT16, {2, 2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto op2 = model->addOperand(&type4);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis3_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim4_axis3_float16_dynamic_output_shape(Model *model) {
  OperandType type4(Type::TENSOR_FLOAT16, {2, 2, 2, 3});
  OperandType type5(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type4);
  auto op2 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis3_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim4_axis3_float16_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT16, {2, 2, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT16, {2, 2, 2, 3});
  OperandType type7(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto op2 = model->addOperand(&type4);
  auto op1_tmp = model->addOperand(&type6);
  auto dummy36 = model->addOperand(&type7);
  auto param36 = model->addOperand(&type1);
  // Phase 2, operations
  static _Float16 dummy36_init[] = {0.0f};
  model->setOperandValue(dummy36, dummy36_init, sizeof(_Float16) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy36, param36}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis3_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT16, {2, 2, 2, 3});
  OperandType type7(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto op2 = model->addOperand(&type5);
  auto op1_tmp = model->addOperand(&type6);
  auto dummy37 = model->addOperand(&type7);
  auto param37 = model->addOperand(&type1);
  // Phase 2, operations
  static _Float16 dummy37_init[] = {0.0f};
  model->setOperandValue(dummy37, dummy37_init, sizeof(_Float16) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy37, param37}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim4_axis3_quant8(Model *model) {
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 3}, 0.1f, 32);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 3}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto op2 = model->addOperand(&type9);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis3_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim4_axis3_quant8_dynamic_output_shape(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.0078125f, 128);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 3}, 0.1f, 32);
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis3_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim4_axis3_quant8_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 32);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 3}, 0.1f, 32);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 3}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto op2 = model->addOperand(&type9);
  auto op1_tmp = model->addOperand(&type8);
  auto dummy38 = model->addOperand(&type11);
  auto param38 = model->addOperand(&type1);
  // Phase 2, operations
  static uint8_t dummy38_init[] = {32};
  model->setOperandValue(dummy38, dummy38_init, sizeof(uint8_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy38, param38}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis3_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.0078125f, 128);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 32);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2, 3}, 0.1f, 32);
  // Phase 1, operands
  auto op1 = model->addOperand(&type8);
  auto op2 = model->addOperand(&type10);
  auto op1_tmp = model->addOperand(&type8);
  auto dummy39 = model->addOperand(&type11);
  auto param39 = model->addOperand(&type1);
  // Phase 2, operations
  static uint8_t dummy39_init[] = {32};
  model->setOperandValue(dummy39, dummy39_init, sizeof(uint8_t) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy39, param39}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim3_axis2(Model *model) {
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim3_axis2_dynamic_output_shape(Model *model) {
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2, 3});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis2_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim3_axis2_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type12);
  auto op1_tmp = model->addOperand(&type12);
  auto dummy40 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy40_init[] = {0.0f};
  model->setOperandValue(dummy40, dummy40_init, sizeof(float) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy40, param40}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis2_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2, 3});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type13);
  auto op1_tmp = model->addOperand(&type12);
  auto dummy41 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy41_init[] = {0.0f};
  model->setOperandValue(dummy41, dummy41_init, sizeof(float) * 1);
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy41, param41}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim3_axis2_relaxed(Model *model) {
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis2_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim3_axis2_relaxed_dynamic_output_shape(Model *model) {
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2, 3});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis2_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim3_axis2_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type12);
  auto op1_tmp = model->addOperand(&type12);
  auto dummy42 = model->addOperand(&type3);
  auto param42 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy42_init[] = {0.0f};
  model->setOperandValue(dummy42, dummy42_init, sizeof(float) * 1);
  static int32_t param42_init[] = {0};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy42, param42}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis2_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2, 3});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto op2 = model->addOperand(&type13);
  auto op1_tmp = model->addOperand(&type12);
  auto dummy43 = model->addOperand(&type3);
  auto param43 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy43_init[] = {0.0f};
  model->setOperandValue(dummy43, dummy43_init, sizeof(float) * 1);
  static int32_t param43_init[] = {0};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy43, param43}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim3_axis2_float16(Model *model) {
  OperandType type14(Type::TENSOR_FLOAT16, {2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto op2 = model->addOperand(&type14);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis2_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim3_axis2_float16_dynamic_output_shape(Model *model) {
  OperandType type14(Type::TENSOR_FLOAT16, {2, 2, 3});
  OperandType type15(Type::TENSOR_FLOAT16, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto op2 = model->addOperand(&type15);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis2_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim3_axis2_float16_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT16, {2, 2, 3});
  OperandType type16(Type::TENSOR_FLOAT16, {2, 2, 3});
  OperandType type7(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type14);
  auto op1_tmp = model->addOperand(&type16);
  auto dummy44 = model->addOperand(&type7);
  auto param44 = model->addOperand(&type1);
  // Phase 2, operations
  static _Float16 dummy44_init[] = {0.0f};
  model->setOperandValue(dummy44, dummy44_init, sizeof(_Float16) * 1);
  static int32_t param44_init[] = {0};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy44, param44}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis2_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type16(Type::TENSOR_FLOAT16, {2, 2, 3});
  OperandType type7(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto op2 = model->addOperand(&type15);
  auto op1_tmp = model->addOperand(&type16);
  auto dummy45 = model->addOperand(&type7);
  auto param45 = model->addOperand(&type1);
  // Phase 2, operations
  static _Float16 dummy45_init[] = {0.0f};
  model->setOperandValue(dummy45, dummy45_init, sizeof(_Float16) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy45, param45}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim3_axis2_quant8(Model *model) {
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3}, 0.1f, 32);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto op2 = model->addOperand(&type18);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis2_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim3_axis2_quant8_dynamic_output_shape(Model *model) {
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3}, 0.1f, 32);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto op2 = model->addOperand(&type19);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis2_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim3_axis2_quant8_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 32);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3}, 0.1f, 32);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto op2 = model->addOperand(&type18);
  auto op1_tmp = model->addOperand(&type17);
  auto dummy46 = model->addOperand(&type11);
  auto param46 = model->addOperand(&type1);
  // Phase 2, operations
  static uint8_t dummy46_init[] = {32};
  model->setOperandValue(dummy46, dummy46_init, sizeof(uint8_t) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy46, param46}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis2_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 32);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3}, 0.1f, 32);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto op2 = model->addOperand(&type19);
  auto op1_tmp = model->addOperand(&type17);
  auto dummy47 = model->addOperand(&type11);
  auto param47 = model->addOperand(&type1);
  // Phase 2, operations
  static uint8_t dummy47_init[] = {32};
  model->setOperandValue(dummy47, dummy47_init, sizeof(uint8_t) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy47, param47}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim2_axis1(Model *model) {
  OperandType type20(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto op2 = model->addOperand(&type20);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim2_axis1_dynamic_output_shape(Model *model) {
  OperandType type20(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type21(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto op2 = model->addOperand(&type21);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis1_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim2_axis1_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto op2 = model->addOperand(&type20);
  auto op1_tmp = model->addOperand(&type20);
  auto dummy48 = model->addOperand(&type3);
  auto param48 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy48_init[] = {0.0f};
  model->setOperandValue(dummy48, dummy48_init, sizeof(float) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy48, param48}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis1_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type21(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto op2 = model->addOperand(&type21);
  auto op1_tmp = model->addOperand(&type20);
  auto dummy49 = model->addOperand(&type3);
  auto param49 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy49_init[] = {0.0f};
  model->setOperandValue(dummy49, dummy49_init, sizeof(float) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy49, param49}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim2_axis1_relaxed(Model *model) {
  OperandType type20(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto op2 = model->addOperand(&type20);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis1_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim2_axis1_relaxed_dynamic_output_shape(Model *model) {
  OperandType type20(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type21(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto op2 = model->addOperand(&type21);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis1_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim2_axis1_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto op2 = model->addOperand(&type20);
  auto op1_tmp = model->addOperand(&type20);
  auto dummy50 = model->addOperand(&type3);
  auto param50 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy50_init[] = {0.0f};
  model->setOperandValue(dummy50, dummy50_init, sizeof(float) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy50, param50}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis1_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type21(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto op2 = model->addOperand(&type21);
  auto op1_tmp = model->addOperand(&type20);
  auto dummy51 = model->addOperand(&type3);
  auto param51 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy51_init[] = {0.0f};
  model->setOperandValue(dummy51, dummy51_init, sizeof(float) * 1);
  static int32_t param51_init[] = {0};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy51, param51}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim2_axis1_float16(Model *model) {
  OperandType type22(Type::TENSOR_FLOAT16, {2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto op2 = model->addOperand(&type22);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis1_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim2_axis1_float16_dynamic_output_shape(Model *model) {
  OperandType type22(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto op2 = model->addOperand(&type23);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis1_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim2_axis1_float16_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type24(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type7(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto op2 = model->addOperand(&type22);
  auto op1_tmp = model->addOperand(&type24);
  auto dummy52 = model->addOperand(&type7);
  auto param52 = model->addOperand(&type1);
  // Phase 2, operations
  static _Float16 dummy52_init[] = {0.0f};
  model->setOperandValue(dummy52, dummy52_init, sizeof(_Float16) * 1);
  static int32_t param52_init[] = {0};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy52, param52}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis1_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type24(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type7(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto op2 = model->addOperand(&type23);
  auto op1_tmp = model->addOperand(&type24);
  auto dummy53 = model->addOperand(&type7);
  auto param53 = model->addOperand(&type1);
  // Phase 2, operations
  static _Float16 dummy53_init[] = {0.0f};
  model->setOperandValue(dummy53, dummy53_init, sizeof(_Float16) * 1);
  static int32_t param53_init[] = {0};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy53, param53}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim2_axis1_quant8(Model *model) {
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 0.1f, 32);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type26);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis1_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim2_axis1_quant8_dynamic_output_shape(Model *model) {
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 0.1f, 32);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis1_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim2_axis1_quant8_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 32);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 0.1f, 32);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type26);
  auto op1_tmp = model->addOperand(&type25);
  auto dummy54 = model->addOperand(&type11);
  auto param54 = model->addOperand(&type1);
  // Phase 2, operations
  static uint8_t dummy54_init[] = {32};
  model->setOperandValue(dummy54, dummy54_init, sizeof(uint8_t) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy54, param54}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis1_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 32);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 0.1f, 32);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto op2 = model->addOperand(&type27);
  auto op1_tmp = model->addOperand(&type25);
  auto dummy55 = model->addOperand(&type11);
  auto param55 = model->addOperand(&type1);
  // Phase 2, operations
  static uint8_t dummy55_init[] = {32};
  model->setOperandValue(dummy55, dummy55_init, sizeof(uint8_t) * 1);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy55, param55}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim1_axis0(Model *model) {
  OperandType type28(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim1_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim1_axis0_dynamic_output_shape(Model *model) {
  OperandType type28(Type::TENSOR_FLOAT32, {3});
  OperandType type29(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto op2 = model->addOperand(&type29);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim1_axis0_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim1_axis0_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto op2 = model->addOperand(&type28);
  auto op1_tmp = model->addOperand(&type28);
  auto dummy56 = model->addOperand(&type3);
  auto param56 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy56_init[] = {0.0f};
  model->setOperandValue(dummy56, dummy56_init, sizeof(float) * 1);
  static int32_t param56_init[] = {0};
  model->setOperandValue(param56, param56_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy56, param56}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim1_axis0_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {3});
  OperandType type29(Type::TENSOR_FLOAT32, {0});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto op2 = model->addOperand(&type29);
  auto op1_tmp = model->addOperand(&type28);
  auto dummy57 = model->addOperand(&type3);
  auto param57 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy57_init[] = {0.0f};
  model->setOperandValue(dummy57, dummy57_init, sizeof(float) * 1);
  static int32_t param57_init[] = {0};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy57, param57}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim1_axis0_relaxed(Model *model) {
  OperandType type28(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim1_axis0_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim1_axis0_relaxed_dynamic_output_shape(Model *model) {
  OperandType type28(Type::TENSOR_FLOAT32, {3});
  OperandType type29(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto op2 = model->addOperand(&type29);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim1_axis0_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim1_axis0_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {3});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto op2 = model->addOperand(&type28);
  auto op1_tmp = model->addOperand(&type28);
  auto dummy58 = model->addOperand(&type3);
  auto param58 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy58_init[] = {0.0f};
  model->setOperandValue(dummy58, dummy58_init, sizeof(float) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy58, param58}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim1_axis0_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT32, {3});
  OperandType type29(Type::TENSOR_FLOAT32, {0});
  OperandType type3(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto op2 = model->addOperand(&type29);
  auto op1_tmp = model->addOperand(&type28);
  auto dummy59 = model->addOperand(&type3);
  auto param59 = model->addOperand(&type1);
  // Phase 2, operations
  static float dummy59_init[] = {0.0f};
  model->setOperandValue(dummy59, dummy59_init, sizeof(float) * 1);
  static int32_t param59_init[] = {0};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy59, param59}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim1_axis0_float16(Model *model) {
  OperandType type30(Type::TENSOR_FLOAT16, {3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type30);
  auto op2 = model->addOperand(&type30);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim1_axis0_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim1_axis0_float16_dynamic_output_shape(Model *model) {
  OperandType type30(Type::TENSOR_FLOAT16, {3});
  OperandType type31(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type30);
  auto op2 = model->addOperand(&type31);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim1_axis0_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim1_axis0_float16_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT16, {3});
  OperandType type32(Type::TENSOR_FLOAT16, {3});
  OperandType type7(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type32);
  auto op2 = model->addOperand(&type30);
  auto op1_tmp = model->addOperand(&type32);
  auto dummy60 = model->addOperand(&type7);
  auto param60 = model->addOperand(&type1);
  // Phase 2, operations
  static _Float16 dummy60_init[] = {0.0f};
  model->setOperandValue(dummy60, dummy60_init, sizeof(_Float16) * 1);
  static int32_t param60_init[] = {0};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy60, param60}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim1_axis0_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type31(Type::TENSOR_FLOAT16, {0});
  OperandType type32(Type::TENSOR_FLOAT16, {3});
  OperandType type7(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type32);
  auto op2 = model->addOperand(&type31);
  auto op1_tmp = model->addOperand(&type32);
  auto dummy61 = model->addOperand(&type7);
  auto param61 = model->addOperand(&type1);
  // Phase 2, operations
  static _Float16 dummy61_init[] = {0.0f};
  model->setOperandValue(dummy61, dummy61_init, sizeof(_Float16) * 1);
  static int32_t param61_init[] = {0};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy61, param61}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim1_axis0_quant8(Model *model) {
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {3}, 0.1f, 32);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {3}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type33);
  auto op2 = model->addOperand(&type34);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim1_axis0_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim1_axis0_quant8_dynamic_output_shape(Model *model) {
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {3}, 0.1f, 32);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {0}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type33);
  auto op2 = model->addOperand(&type35);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim1_axis0_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim1_axis0_quant8_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 32);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {3}, 0.1f, 32);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {3}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type33);
  auto op2 = model->addOperand(&type34);
  auto op1_tmp = model->addOperand(&type33);
  auto dummy62 = model->addOperand(&type11);
  auto param62 = model->addOperand(&type1);
  // Phase 2, operations
  static uint8_t dummy62_init[] = {32};
  model->setOperandValue(dummy62, dummy62_init, sizeof(uint8_t) * 1);
  static int32_t param62_init[] = {0};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy62, param62}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim1_axis0_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
namespace generated_tests::l2_normalization_v1_2 {

void CreateModel_relaxed_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 32);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {3}, 0.1f, 32);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {0}, 0.0078125f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type33);
  auto op2 = model->addOperand(&type35);
  auto op1_tmp = model->addOperand(&type33);
  auto dummy63 = model->addOperand(&type11);
  auto param63 = model->addOperand(&type1);
  // Phase 2, operations
  static uint8_t dummy63_init[] = {32};
  model->setOperandValue(dummy63, dummy63_init, sizeof(uint8_t) * 1);
  static int32_t param63_init[] = {0};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy63, param63}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_NORMALIZATION, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_normalization_v1_2
