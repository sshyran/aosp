// Generated from dequantize_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::dequantize_v1_2 {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {10}, 0.5f, 127);
  OperandType type1(Type::TENSOR_FLOAT32, {10});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {10}, 0.5f, 127);
  OperandType type25(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type25);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {10}, 0.5f, 127);
  OperandType type1(Type::TENSOR_FLOAT32, {10});
  OperandType type20(Type::INT32, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type1);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type26);
  auto param13 = model->addOperand(&type20);
  // Phase 2, operations
  static uint8_t dummy_init[] = {127};
  model->setOperandValue(dummy, dummy_init, sizeof(uint8_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy, param13}, {input0});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {10}, 0.5f, 127);
  OperandType type20(Type::INT32, {});
  OperandType type25(Type::TENSOR_FLOAT32, {0});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type25);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type26);
  auto param14 = model->addOperand(&type20);
  // Phase 2, operations
  static uint8_t dummy1_init[] = {127};
  model->setOperandValue(dummy1, dummy1_init, sizeof(uint8_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy1, param14}, {input0});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {10}, 0.5f, 127);
  OperandType type1(Type::TENSOR_FLOAT32, {10});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {10}, 0.5f, 127);
  OperandType type25(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type25);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {10}, 0.5f, 127);
  OperandType type1(Type::TENSOR_FLOAT32, {10});
  OperandType type20(Type::INT32, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type1);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type26);
  auto param15 = model->addOperand(&type20);
  // Phase 2, operations
  static uint8_t dummy2_init[] = {127};
  model->setOperandValue(dummy2, dummy2_init, sizeof(uint8_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy2, param15}, {input0});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {10}, 0.5f, 127);
  OperandType type20(Type::INT32, {});
  OperandType type25(Type::TENSOR_FLOAT32, {0});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type25);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type26);
  auto param16 = model->addOperand(&type20);
  // Phase 2, operations
  static uint8_t dummy3_init[] = {127};
  model->setOperandValue(dummy3, dummy3_init, sizeof(uint8_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy3, param16}, {input0});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {10}, 0.5f, 127);
  OperandType type27(Type::TENSOR_FLOAT16, {10});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type27);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {10}, 0.5f, 127);
  OperandType type28(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type28);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {10}, 0.5f, 127);
  OperandType type20(Type::INT32, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type27(Type::TENSOR_FLOAT16, {10});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type27);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy4 = model->addOperand(&type26);
  auto param17 = model->addOperand(&type20);
  // Phase 2, operations
  static uint8_t dummy4_init[] = {127};
  model->setOperandValue(dummy4, dummy4_init, sizeof(uint8_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy4, param17}, {input0});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {10}, 0.5f, 127);
  OperandType type20(Type::INT32, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type28(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type28);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy5 = model->addOperand(&type26);
  auto param18 = model->addOperand(&type20);
  // Phase 2, operations
  static uint8_t dummy5_init[] = {127};
  model->setOperandValue(dummy5, dummy5_init, sizeof(uint8_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy5, param18}, {input0});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input0}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_2(Model *model) {
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.5f, 127);
  OperandType type3(Type::TENSOR_FLOAT32, {2, 5});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_2(Model *model) {
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.5f, 127);
  OperandType type29(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type29);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_all_inputs_as_internal_2(Model *model) {
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.5f, 127);
  OperandType type20(Type::INT32, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type3(Type::TENSOR_FLOAT32, {2, 5});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type3);
  auto input01_tmp = model->addOperand(&type2);
  auto dummy6 = model->addOperand(&type26);
  auto param19 = model->addOperand(&type20);
  // Phase 2, operations
  static uint8_t dummy6_init[] = {127};
  model->setOperandValue(dummy6, dummy6_init, sizeof(uint8_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy6, param19}, {input01});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.5f, 127);
  OperandType type20(Type::INT32, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type29(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type29);
  auto input01_tmp = model->addOperand(&type2);
  auto dummy7 = model->addOperand(&type26);
  auto param20 = model->addOperand(&type20);
  // Phase 2, operations
  static uint8_t dummy7_init[] = {127};
  model->setOperandValue(dummy7, dummy7_init, sizeof(uint8_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy7, param20}, {input01});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed_2(Model *model) {
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.5f, 127);
  OperandType type3(Type::TENSOR_FLOAT32, {2, 5});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.5f, 127);
  OperandType type29(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type29);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.5f, 127);
  OperandType type20(Type::INT32, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type3(Type::TENSOR_FLOAT32, {2, 5});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type3);
  auto input01_tmp = model->addOperand(&type2);
  auto dummy8 = model->addOperand(&type26);
  auto param21 = model->addOperand(&type20);
  // Phase 2, operations
  static uint8_t dummy8_init[] = {127};
  model->setOperandValue(dummy8, dummy8_init, sizeof(uint8_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy8, param21}, {input01});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.5f, 127);
  OperandType type20(Type::INT32, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type29(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type29);
  auto input01_tmp = model->addOperand(&type2);
  auto dummy9 = model->addOperand(&type26);
  auto param22 = model->addOperand(&type20);
  // Phase 2, operations
  static uint8_t dummy9_init[] = {127};
  model->setOperandValue(dummy9, dummy9_init, sizeof(uint8_t) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy9, param22}, {input01});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16_2(Model *model) {
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.5f, 127);
  OperandType type30(Type::TENSOR_FLOAT16, {2, 5});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type30);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

bool is_ignored_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16_dynamic_output_shape_2(Model *model) {
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.5f, 127);
  OperandType type31(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type31);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.5f, 127);
  OperandType type20(Type::INT32, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type30(Type::TENSOR_FLOAT16, {2, 5});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type30);
  auto input01_tmp = model->addOperand(&type2);
  auto dummy10 = model->addOperand(&type26);
  auto param23 = model->addOperand(&type20);
  // Phase 2, operations
  static uint8_t dummy10_init[] = {127};
  model->setOperandValue(dummy10, dummy10_init, sizeof(uint8_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy10, param23}, {input01});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2, 5}, 0.5f, 127);
  OperandType type20(Type::INT32, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type31(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input01 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type31);
  auto input01_tmp = model->addOperand(&type2);
  auto dummy11 = model->addOperand(&type26);
  auto param24 = model->addOperand(&type20);
  // Phase 2, operations
  static uint8_t dummy11_init[] = {127};
  model->setOperandValue(dummy11, dummy11_init, sizeof(uint8_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy11, param24}, {input01});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_3(Model *model) {
  OperandType type4(Type::TENSOR_QUANT8_SYMM, {2, 2, 2}, 0.5f, 0);
  OperandType type5(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input02}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

bool is_ignored_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_3(Model *model) {
  OperandType type32(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type4(Type::TENSOR_QUANT8_SYMM, {2, 2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type32);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input02}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed_3(Model *model) {
  OperandType type4(Type::TENSOR_QUANT8_SYMM, {2, 2, 2}, 0.5f, 0);
  OperandType type5(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input02}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type32(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type4(Type::TENSOR_QUANT8_SYMM, {2, 2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type32);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input02}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16_3(Model *model) {
  OperandType type33(Type::TENSOR_FLOAT16, {2, 2, 2});
  OperandType type4(Type::TENSOR_QUANT8_SYMM, {2, 2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type33);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input02}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

bool is_ignored_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16_dynamic_output_shape_3(Model *model) {
  OperandType type34(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type4(Type::TENSOR_QUANT8_SYMM, {2, 2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto input02 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type34);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input02}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_4(Model *model) {
  OperandType type6(Type::TENSOR_QUANT8_SYMM, {2, 1, 2, 2}, 0.5f, 0);
  OperandType type7(Type::TENSOR_FLOAT32, {2, 1, 2, 2});
  // Phase 1, operands
  auto input03 = model->addOperand(&type6);
  auto output03 = model->addOperand(&type7);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input03}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

bool is_ignored_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_4(Model *model) {
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type6(Type::TENSOR_QUANT8_SYMM, {2, 1, 2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto input03 = model->addOperand(&type6);
  auto output03 = model->addOperand(&type35);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input03}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed_4(Model *model) {
  OperandType type6(Type::TENSOR_QUANT8_SYMM, {2, 1, 2, 2}, 0.5f, 0);
  OperandType type7(Type::TENSOR_FLOAT32, {2, 1, 2, 2});
  // Phase 1, operands
  auto input03 = model->addOperand(&type6);
  auto output03 = model->addOperand(&type7);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input03}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed_dynamic_output_shape_4(Model *model) {
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type6(Type::TENSOR_QUANT8_SYMM, {2, 1, 2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto input03 = model->addOperand(&type6);
  auto output03 = model->addOperand(&type35);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input03}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16_4(Model *model) {
  OperandType type36(Type::TENSOR_FLOAT16, {2, 1, 2, 2});
  OperandType type6(Type::TENSOR_QUANT8_SYMM, {2, 1, 2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto input03 = model->addOperand(&type6);
  auto output03 = model->addOperand(&type36);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input03}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

bool is_ignored_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16_dynamic_output_shape_4(Model *model) {
  OperandType type37(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type6(Type::TENSOR_QUANT8_SYMM, {2, 1, 2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto input03 = model->addOperand(&type6);
  auto output03 = model->addOperand(&type37);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input03}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_5(Model *model) {
  OperandType type8(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, SymmPerChannelQuantParams({2.0f, 0.5f},0));
  OperandType type9(Type::TENSOR_FLOAT32, {2, 3, 4});
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto output04 = model->addOperand(&type9);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input04}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  assert(model->isValid());
}

bool is_ignored_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_5(Model *model) {
  OperandType type32(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type8(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, SymmPerChannelQuantParams({2.0f, 0.5f},0));
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto output04 = model->addOperand(&type32);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input04}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed_5(Model *model) {
  OperandType type8(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, SymmPerChannelQuantParams({2.0f, 0.5f},0));
  OperandType type9(Type::TENSOR_FLOAT32, {2, 3, 4});
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto output04 = model->addOperand(&type9);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input04}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed_dynamic_output_shape_5(Model *model) {
  OperandType type32(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type8(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, SymmPerChannelQuantParams({2.0f, 0.5f},0));
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto output04 = model->addOperand(&type32);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input04}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16_5(Model *model) {
  OperandType type38(Type::TENSOR_FLOAT16, {2, 3, 4});
  OperandType type8(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, SymmPerChannelQuantParams({2.0f, 0.5f},0));
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto output04 = model->addOperand(&type38);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input04}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  assert(model->isValid());
}

bool is_ignored_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16_dynamic_output_shape_5(Model *model) {
  OperandType type34(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type8(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, SymmPerChannelQuantParams({2.0f, 0.5f},0));
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto output04 = model->addOperand(&type34);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input04}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_6(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, SymmPerChannelQuantParams({2.0f, 1.0f, 0.5f},1));
  OperandType type9(Type::TENSOR_FLOAT32, {2, 3, 4});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto output05 = model->addOperand(&type9);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  assert(model->isValid());
}

bool is_ignored_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_6(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, SymmPerChannelQuantParams({2.0f, 1.0f, 0.5f},1));
  OperandType type32(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto output05 = model->addOperand(&type32);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed_6(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, SymmPerChannelQuantParams({2.0f, 1.0f, 0.5f},1));
  OperandType type9(Type::TENSOR_FLOAT32, {2, 3, 4});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto output05 = model->addOperand(&type9);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed_dynamic_output_shape_6(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, SymmPerChannelQuantParams({2.0f, 1.0f, 0.5f},1));
  OperandType type32(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto output05 = model->addOperand(&type32);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16_6(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, SymmPerChannelQuantParams({2.0f, 1.0f, 0.5f},1));
  OperandType type38(Type::TENSOR_FLOAT16, {2, 3, 4});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto output05 = model->addOperand(&type38);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  assert(model->isValid());
}

bool is_ignored_float16_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16_dynamic_output_shape_6(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_SYMM_PER_CHANNEL, {2, 3, 4}, SymmPerChannelQuantParams({2.0f, 1.0f, 0.5f},1));
  OperandType type34(Type::TENSOR_FLOAT16, {0, 0, 0});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto output05 = model->addOperand(&type34);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_7(Model *model) {
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 1.0f, 0);
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_7(Model *model) {
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 1.0f, 0);
  OperandType type37(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto op2 = model->addOperand(&type37);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_all_inputs_as_internal_3(Model *model) {
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 1.0f, 0);
  OperandType type12(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type20(Type::INT32, {});
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto op2 = model->addOperand(&type12);
  auto op1_tmp = model->addOperand(&type11);
  auto dummy12 = model->addOperand(&type39);
  auto param25 = model->addOperand(&type20);
  // Phase 2, operations
  static uint8_t dummy12_init[] = {0};
  model->setOperandValue(dummy12, dummy12_init, sizeof(uint8_t) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy12, param25}, {op1});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 1.0f, 0);
  OperandType type20(Type::INT32, {});
  OperandType type37(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto op2 = model->addOperand(&type37);
  auto op1_tmp = model->addOperand(&type11);
  auto dummy13 = model->addOperand(&type39);
  auto param26 = model->addOperand(&type20);
  // Phase 2, operations
  static uint8_t dummy13_init[] = {0};
  model->setOperandValue(dummy13, dummy13_init, sizeof(uint8_t) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy13, param26}, {op1});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {op1}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_zero_sized(Model *model) {
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type14(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type16(Type::TENSOR_INT32, {0});
  OperandType type17(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type18(Type::TENSOR_INT32, {1});
  OperandType type19(Type::FLOAT32, {});
  OperandType type20(Type::INT32, {});
  OperandType type21(Type::BOOL, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type24(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  // Phase 1, operands
  auto scores = model->addOperand(&type13);
  auto roi = model->addOperand(&type14);
  auto param = model->addOperand(&type18);
  auto param1 = model->addOperand(&type19);
  auto param2 = model->addOperand(&type20);
  auto param3 = model->addOperand(&type20);
  auto param4 = model->addOperand(&type19);
  auto param5 = model->addOperand(&type19);
  auto param6 = model->addOperand(&type19);
  auto scoresOut = model->addOperand(&type15);
  auto roiOut = model->addOperand(&type17);
  auto classesOut = model->addOperand(&type16);
  auto batchSplitOut = model->addOperand(&type16);
  auto in = model->addOperand(&type22);
  auto param7 = model->addOperand(&type20);
  auto param8 = model->addOperand(&type20);
  auto param9 = model->addOperand(&type19);
  auto param10 = model->addOperand(&type19);
  auto param11 = model->addOperand(&type20);
  auto param12 = model->addOperand(&type20);
  auto layout = model->addOperand(&type21);
  auto featureMap = model->addOperand(&type23);
  auto out = model->addOperand(&type24);
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
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {featureMap}, {out});
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

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_zero_sized_dynamic_output_shape(Model *model) {
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type14(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type16(Type::TENSOR_INT32, {0});
  OperandType type17(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type18(Type::TENSOR_INT32, {1});
  OperandType type19(Type::FLOAT32, {});
  OperandType type20(Type::INT32, {});
  OperandType type21(Type::BOOL, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto scores = model->addOperand(&type13);
  auto roi = model->addOperand(&type14);
  auto param = model->addOperand(&type18);
  auto param1 = model->addOperand(&type19);
  auto param2 = model->addOperand(&type20);
  auto param3 = model->addOperand(&type20);
  auto param4 = model->addOperand(&type19);
  auto param5 = model->addOperand(&type19);
  auto param6 = model->addOperand(&type19);
  auto scoresOut = model->addOperand(&type15);
  auto roiOut = model->addOperand(&type17);
  auto classesOut = model->addOperand(&type16);
  auto batchSplitOut = model->addOperand(&type16);
  auto in = model->addOperand(&type22);
  auto param7 = model->addOperand(&type20);
  auto param8 = model->addOperand(&type20);
  auto param9 = model->addOperand(&type19);
  auto param10 = model->addOperand(&type19);
  auto param11 = model->addOperand(&type20);
  auto param12 = model->addOperand(&type20);
  auto layout = model->addOperand(&type21);
  auto featureMap = model->addOperand(&type23);
  auto out = model->addOperand(&type35);
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
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {featureMap}, {out});
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

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_zero_sized_relaxed(Model *model) {
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type14(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type16(Type::TENSOR_INT32, {0});
  OperandType type17(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type18(Type::TENSOR_INT32, {1});
  OperandType type19(Type::FLOAT32, {});
  OperandType type20(Type::INT32, {});
  OperandType type21(Type::BOOL, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type24(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  // Phase 1, operands
  auto scores = model->addOperand(&type13);
  auto roi = model->addOperand(&type14);
  auto param = model->addOperand(&type18);
  auto param1 = model->addOperand(&type19);
  auto param2 = model->addOperand(&type20);
  auto param3 = model->addOperand(&type20);
  auto param4 = model->addOperand(&type19);
  auto param5 = model->addOperand(&type19);
  auto param6 = model->addOperand(&type19);
  auto scoresOut = model->addOperand(&type15);
  auto roiOut = model->addOperand(&type17);
  auto classesOut = model->addOperand(&type16);
  auto batchSplitOut = model->addOperand(&type16);
  auto in = model->addOperand(&type22);
  auto param7 = model->addOperand(&type20);
  auto param8 = model->addOperand(&type20);
  auto param9 = model->addOperand(&type19);
  auto param10 = model->addOperand(&type19);
  auto param11 = model->addOperand(&type20);
  auto param12 = model->addOperand(&type20);
  auto layout = model->addOperand(&type21);
  auto featureMap = model->addOperand(&type23);
  auto out = model->addOperand(&type24);
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
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {featureMap}, {out});
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

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_zero_sized_relaxed_dynamic_output_shape(Model *model) {
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type14(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type16(Type::TENSOR_INT32, {0});
  OperandType type17(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type18(Type::TENSOR_INT32, {1});
  OperandType type19(Type::FLOAT32, {});
  OperandType type20(Type::INT32, {});
  OperandType type21(Type::BOOL, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type35(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto scores = model->addOperand(&type13);
  auto roi = model->addOperand(&type14);
  auto param = model->addOperand(&type18);
  auto param1 = model->addOperand(&type19);
  auto param2 = model->addOperand(&type20);
  auto param3 = model->addOperand(&type20);
  auto param4 = model->addOperand(&type19);
  auto param5 = model->addOperand(&type19);
  auto param6 = model->addOperand(&type19);
  auto scoresOut = model->addOperand(&type15);
  auto roiOut = model->addOperand(&type17);
  auto classesOut = model->addOperand(&type16);
  auto batchSplitOut = model->addOperand(&type16);
  auto in = model->addOperand(&type22);
  auto param7 = model->addOperand(&type20);
  auto param8 = model->addOperand(&type20);
  auto param9 = model->addOperand(&type19);
  auto param10 = model->addOperand(&type19);
  auto param11 = model->addOperand(&type20);
  auto param12 = model->addOperand(&type20);
  auto layout = model->addOperand(&type21);
  auto featureMap = model->addOperand(&type23);
  auto out = model->addOperand(&type35);
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
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {featureMap}, {out});
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

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_zero_sized_float16(Model *model) {
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type14(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type16(Type::TENSOR_INT32, {0});
  OperandType type17(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type18(Type::TENSOR_INT32, {1});
  OperandType type19(Type::FLOAT32, {});
  OperandType type20(Type::INT32, {});
  OperandType type21(Type::BOOL, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type40(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  // Phase 1, operands
  auto scores = model->addOperand(&type13);
  auto roi = model->addOperand(&type14);
  auto param = model->addOperand(&type18);
  auto param1 = model->addOperand(&type19);
  auto param2 = model->addOperand(&type20);
  auto param3 = model->addOperand(&type20);
  auto param4 = model->addOperand(&type19);
  auto param5 = model->addOperand(&type19);
  auto param6 = model->addOperand(&type19);
  auto scoresOut = model->addOperand(&type15);
  auto roiOut = model->addOperand(&type17);
  auto classesOut = model->addOperand(&type16);
  auto batchSplitOut = model->addOperand(&type16);
  auto in = model->addOperand(&type22);
  auto param7 = model->addOperand(&type20);
  auto param8 = model->addOperand(&type20);
  auto param9 = model->addOperand(&type19);
  auto param10 = model->addOperand(&type19);
  auto param11 = model->addOperand(&type20);
  auto param12 = model->addOperand(&type20);
  auto layout = model->addOperand(&type21);
  auto featureMap = model->addOperand(&type23);
  auto out = model->addOperand(&type40);
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
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {featureMap}, {out});
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

} // namespace generated_tests::dequantize_v1_2
namespace generated_tests::dequantize_v1_2 {

void CreateModel_zero_sized_float16_dynamic_output_shape(Model *model) {
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type14(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type16(Type::TENSOR_INT32, {0});
  OperandType type17(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type18(Type::TENSOR_INT32, {1});
  OperandType type19(Type::FLOAT32, {});
  OperandType type20(Type::INT32, {});
  OperandType type21(Type::BOOL, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type37(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto scores = model->addOperand(&type13);
  auto roi = model->addOperand(&type14);
  auto param = model->addOperand(&type18);
  auto param1 = model->addOperand(&type19);
  auto param2 = model->addOperand(&type20);
  auto param3 = model->addOperand(&type20);
  auto param4 = model->addOperand(&type19);
  auto param5 = model->addOperand(&type19);
  auto param6 = model->addOperand(&type19);
  auto scoresOut = model->addOperand(&type15);
  auto roiOut = model->addOperand(&type17);
  auto classesOut = model->addOperand(&type16);
  auto batchSplitOut = model->addOperand(&type16);
  auto in = model->addOperand(&type22);
  auto param7 = model->addOperand(&type20);
  auto param8 = model->addOperand(&type20);
  auto param9 = model->addOperand(&type19);
  auto param10 = model->addOperand(&type19);
  auto param11 = model->addOperand(&type20);
  auto param12 = model->addOperand(&type20);
  auto layout = model->addOperand(&type21);
  auto featureMap = model->addOperand(&type23);
  auto out = model->addOperand(&type37);
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
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_DEQUANTIZE, {featureMap}, {out});
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

} // namespace generated_tests::dequantize_v1_2
