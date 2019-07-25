// Generated from maximum.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::maximum {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input0, input1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1, 2});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type4);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input0, input1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type0);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type5);
  auto param = model->addOperand(&type6);
  auto input1_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type6);
  // Phase 2, operations
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy, param}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy1, param1}, {input1});
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input0, input1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1, 2});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type4);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type6);
  auto input1_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  // Phase 2, operations
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy2, param2}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy3, param3}, {input1});
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input0, input1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input0, input1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1, 2});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type4);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input0, input1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type0);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy4 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type6);
  auto input1_tmp = model->addOperand(&type0);
  auto dummy5 = model->addOperand(&type5);
  auto param5 = model->addOperand(&type6);
  // Phase 2, operations
  static float dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(float) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static float dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(float) * 1);
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy4, param4}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy5, param5}, {input1});
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input0, input1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1, 2});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type4);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy6 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type6);
  auto input1_tmp = model->addOperand(&type0);
  auto dummy7 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type6);
  // Phase 2, operations
  static float dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(float) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static float dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(float) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy6, param6}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy7, param7}, {input1});
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input0, input1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_float16(Model *model) {
  OperandType type7(Type::TENSOR_FLOAT16, {3, 1, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type7);
  auto input1 = model->addOperand(&type7);
  auto output0 = model->addOperand(&type7);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input0, input1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_float16_dynamic_output_shape(Model *model) {
  OperandType type7(Type::TENSOR_FLOAT16, {3, 1, 2});
  OperandType type8(Type::TENSOR_FLOAT16, {0, 0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type7);
  auto input1 = model->addOperand(&type7);
  auto output0 = model->addOperand(&type8);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input0, input1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_float16_all_inputs_as_internal(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT16, {1});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT16, {3, 1, 2});
  OperandType type9(Type::TENSOR_FLOAT16, {3, 1, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type9);
  auto input1 = model->addOperand(&type9);
  auto output0 = model->addOperand(&type7);
  auto input0_tmp = model->addOperand(&type9);
  auto dummy8 = model->addOperand(&type10);
  auto param8 = model->addOperand(&type6);
  auto input1_tmp = model->addOperand(&type9);
  auto dummy9 = model->addOperand(&type10);
  auto param9 = model->addOperand(&type6);
  // Phase 2, operations
  static _Float16 dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(_Float16) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(_Float16) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy8, param8}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy9, param9}, {input1});
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input0, input1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT16, {1});
  OperandType type6(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT16, {3, 1, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type9);
  auto input1 = model->addOperand(&type9);
  auto output0 = model->addOperand(&type8);
  auto input0_tmp = model->addOperand(&type9);
  auto dummy10 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type6);
  auto input1_tmp = model->addOperand(&type9);
  auto dummy11 = model->addOperand(&type10);
  auto param11 = model->addOperand(&type6);
  // Phase 2, operations
  static _Float16 dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(_Float16) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static _Float16 dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(_Float16) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy10, param10}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy11, param11}, {input1});
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input0, input1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_int32(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 1, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type11);
  auto input1 = model->addOperand(&type11);
  auto output0 = model->addOperand(&type11);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input0, input1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_int32(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_int32_dynamic_output_shape(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 1, 2});
  OperandType type12(Type::TENSOR_INT32, {0, 0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type11);
  auto input1 = model->addOperand(&type11);
  auto output0 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input0, input1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_int32_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_quant8(Model *model) {
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {3, 1, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 1, 2}, 1.0f, 100);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {3, 1, 2}, 2.0f, 80);
  // Phase 1, operands
  auto input0 = model->addOperand(&type13);
  auto input1 = model->addOperand(&type14);
  auto output0 = model->addOperand(&type15);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input0, input1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_quant8_dynamic_output_shape(Model *model) {
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {3, 1, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 1, 2}, 1.0f, 100);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 2.0f, 80);
  // Phase 1, operands
  auto input0 = model->addOperand(&type13);
  auto input1 = model->addOperand(&type14);
  auto output0 = model->addOperand(&type16);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input0, input1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1},
    {output0});
  assert(model->isValid());
}

bool is_ignored_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_quant8_all_inputs_as_internal(Model *model) {
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {3, 1, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 1, 2}, 1.0f, 100);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {3, 1, 2}, 2.0f, 80);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 100);
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type13);
  auto input1 = model->addOperand(&type14);
  auto output0 = model->addOperand(&type15);
  auto input0_tmp = model->addOperand(&type13);
  auto dummy12 = model->addOperand(&type17);
  auto param12 = model->addOperand(&type6);
  auto input1_tmp = model->addOperand(&type14);
  auto dummy13 = model->addOperand(&type18);
  auto param13 = model->addOperand(&type6);
  // Phase 2, operations
  static uint8_t dummy12_init[] = {127};
  model->setOperandValue(dummy12, dummy12_init, sizeof(uint8_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static uint8_t dummy13_init[] = {100};
  model->setOperandValue(dummy13, dummy13_init, sizeof(uint8_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy12, param12}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy13, param13}, {input1});
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input0, input1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {3, 1, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {3, 1, 2}, 1.0f, 100);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 2.0f, 80);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 100);
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type13);
  auto input1 = model->addOperand(&type14);
  auto output0 = model->addOperand(&type16);
  auto input0_tmp = model->addOperand(&type13);
  auto dummy14 = model->addOperand(&type17);
  auto param14 = model->addOperand(&type6);
  auto input1_tmp = model->addOperand(&type14);
  auto dummy15 = model->addOperand(&type18);
  auto param15 = model->addOperand(&type6);
  // Phase 2, operations
  static uint8_t dummy14_init[] = {127};
  model->setOperandValue(dummy14, dummy14_init, sizeof(uint8_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static uint8_t dummy15_init[] = {100};
  model->setOperandValue(dummy15, dummy15_init, sizeof(uint8_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy14, param14}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy15, param15}, {input1});
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input0, input1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2});
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto input11 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input01, input11}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11},
    {output01});
  assert(model->isValid());
}

bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto input11 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type4);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input01, input11}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11},
    {output01});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto input11 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type0);
  auto input01_tmp = model->addOperand(&type0);
  auto dummy16 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type6);
  auto input11_tmp = model->addOperand(&type1);
  auto dummy17 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  // Phase 2, operations
  static float dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(float) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(float) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy16, param16}, {input01});
  model->addOperation(ANEURALNETWORKS_ADD, {input11_tmp, dummy17, param17}, {input11});
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input01, input11}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp, input11_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto input11 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type4);
  auto input01_tmp = model->addOperand(&type0);
  auto dummy18 = model->addOperand(&type5);
  auto param18 = model->addOperand(&type6);
  auto input11_tmp = model->addOperand(&type1);
  auto dummy19 = model->addOperand(&type5);
  auto param19 = model->addOperand(&type6);
  // Phase 2, operations
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy18, param18}, {input01});
  model->addOperation(ANEURALNETWORKS_ADD, {input11_tmp, dummy19, param19}, {input11});
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input01, input11}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp, input11_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2});
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto input11 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input01, input11}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto input11 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type4);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input01, input11}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto input11 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type0);
  auto input01_tmp = model->addOperand(&type0);
  auto dummy20 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type6);
  auto input11_tmp = model->addOperand(&type1);
  auto dummy21 = model->addOperand(&type5);
  auto param21 = model->addOperand(&type6);
  // Phase 2, operations
  static float dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(float) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static float dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(float) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy20, param20}, {input01});
  model->addOperation(ANEURALNETWORKS_ADD, {input11_tmp, dummy21, param21}, {input11});
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input01, input11}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp, input11_tmp},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3, 1, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {2});
  OperandType type4(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto input11 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type4);
  auto input01_tmp = model->addOperand(&type0);
  auto dummy22 = model->addOperand(&type5);
  auto param22 = model->addOperand(&type6);
  auto input11_tmp = model->addOperand(&type1);
  auto dummy23 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type6);
  // Phase 2, operations
  static float dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(float) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static float dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(float) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy22, param22}, {input01});
  model->addOperation(ANEURALNETWORKS_ADD, {input11_tmp, dummy23, param23}, {input11});
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input01, input11}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp, input11_tmp},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_float16_2(Model *model) {
  OperandType type19(Type::TENSOR_FLOAT16, {2});
  OperandType type7(Type::TENSOR_FLOAT16, {3, 1, 2});
  // Phase 1, operands
  auto input01 = model->addOperand(&type7);
  auto input11 = model->addOperand(&type19);
  auto output01 = model->addOperand(&type7);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input01, input11}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11},
    {output01});
  assert(model->isValid());
}

bool is_ignored_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_float16_dynamic_output_shape_2(Model *model) {
  OperandType type19(Type::TENSOR_FLOAT16, {2});
  OperandType type7(Type::TENSOR_FLOAT16, {3, 1, 2});
  OperandType type8(Type::TENSOR_FLOAT16, {0, 0, 0});
  // Phase 1, operands
  auto input01 = model->addOperand(&type7);
  auto input11 = model->addOperand(&type19);
  auto output01 = model->addOperand(&type8);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input01, input11}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11},
    {output01});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {2});
  OperandType type6(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT16, {3, 1, 2});
  OperandType type9(Type::TENSOR_FLOAT16, {3, 1, 2});
  // Phase 1, operands
  auto input01 = model->addOperand(&type9);
  auto input11 = model->addOperand(&type20);
  auto output01 = model->addOperand(&type7);
  auto input01_tmp = model->addOperand(&type9);
  auto dummy24 = model->addOperand(&type10);
  auto param24 = model->addOperand(&type6);
  auto input11_tmp = model->addOperand(&type20);
  auto dummy25 = model->addOperand(&type10);
  auto param25 = model->addOperand(&type6);
  // Phase 2, operations
  static _Float16 dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(_Float16) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static _Float16 dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(_Float16) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy24, param24}, {input01});
  model->addOperation(ANEURALNETWORKS_ADD, {input11_tmp, dummy25, param25}, {input11});
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input01, input11}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp, input11_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {2});
  OperandType type6(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT16, {3, 1, 2});
  // Phase 1, operands
  auto input01 = model->addOperand(&type9);
  auto input11 = model->addOperand(&type20);
  auto output01 = model->addOperand(&type8);
  auto input01_tmp = model->addOperand(&type9);
  auto dummy26 = model->addOperand(&type10);
  auto param26 = model->addOperand(&type6);
  auto input11_tmp = model->addOperand(&type20);
  auto dummy27 = model->addOperand(&type10);
  auto param27 = model->addOperand(&type6);
  // Phase 2, operations
  static _Float16 dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static _Float16 dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(_Float16) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy26, param26}, {input01});
  model->addOperation(ANEURALNETWORKS_ADD, {input11_tmp, dummy27, param27}, {input11});
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input01, input11}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp, input11_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_int32_2(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 1, 2});
  OperandType type21(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input01 = model->addOperand(&type11);
  auto input11 = model->addOperand(&type21);
  auto output01 = model->addOperand(&type11);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input01, input11}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11},
    {output01});
  assert(model->isValid());
}

bool is_ignored_int32_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_int32_dynamic_output_shape_2(Model *model) {
  OperandType type11(Type::TENSOR_INT32, {3, 1, 2});
  OperandType type12(Type::TENSOR_INT32, {0, 0, 0});
  OperandType type21(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input01 = model->addOperand(&type11);
  auto input11 = model->addOperand(&type21);
  auto output01 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input01, input11}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11},
    {output01});
  assert(model->isValid());
}

bool is_ignored_int32_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_quant8_2(Model *model) {
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {3, 1, 2}, 0.5f, 127);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {3, 1, 2}, 2.0f, 80);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2}, 1.0f, 100);
  // Phase 1, operands
  auto input01 = model->addOperand(&type13);
  auto input11 = model->addOperand(&type22);
  auto output01 = model->addOperand(&type15);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input01, input11}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11},
    {output01});
  assert(model->isValid());
}

bool is_ignored_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {3, 1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 2.0f, 80);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2}, 1.0f, 100);
  // Phase 1, operands
  auto input01 = model->addOperand(&type13);
  auto input11 = model->addOperand(&type22);
  auto output01 = model->addOperand(&type16);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input01, input11}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01, input11},
    {output01});
  assert(model->isValid());
}

bool is_ignored_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {3, 1, 2}, 0.5f, 127);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {3, 1, 2}, 2.0f, 80);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 100);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2}, 1.0f, 100);
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input01 = model->addOperand(&type13);
  auto input11 = model->addOperand(&type22);
  auto output01 = model->addOperand(&type15);
  auto input01_tmp = model->addOperand(&type13);
  auto dummy28 = model->addOperand(&type17);
  auto param28 = model->addOperand(&type6);
  auto input11_tmp = model->addOperand(&type22);
  auto dummy29 = model->addOperand(&type18);
  auto param29 = model->addOperand(&type6);
  // Phase 2, operations
  static uint8_t dummy28_init[] = {127};
  model->setOperandValue(dummy28, dummy28_init, sizeof(uint8_t) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static uint8_t dummy29_init[] = {100};
  model->setOperandValue(dummy29, dummy29_init, sizeof(uint8_t) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy28, param28}, {input01});
  model->addOperation(ANEURALNETWORKS_ADD, {input11_tmp, dummy29, param29}, {input11});
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input01, input11}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp, input11_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {3, 1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 2.0f, 80);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 100);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2}, 1.0f, 100);
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input01 = model->addOperand(&type13);
  auto input11 = model->addOperand(&type22);
  auto output01 = model->addOperand(&type16);
  auto input01_tmp = model->addOperand(&type13);
  auto dummy30 = model->addOperand(&type17);
  auto param30 = model->addOperand(&type6);
  auto input11_tmp = model->addOperand(&type22);
  auto dummy31 = model->addOperand(&type18);
  auto param31 = model->addOperand(&type6);
  // Phase 2, operations
  static uint8_t dummy30_init[] = {127};
  model->setOperandValue(dummy30, dummy30_init, sizeof(uint8_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static uint8_t dummy31_init[] = {100};
  model->setOperandValue(dummy31, dummy31_init, sizeof(uint8_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy30, param30}, {input01});
  model->addOperation(ANEURALNETWORKS_ADD, {input11_tmp, dummy31, param31}, {input11});
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input01, input11}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp, input11_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_3(Model *model) {
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2}, 1.0f, 128);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 128);
  // Phase 1, operands
  auto input02 = model->addOperand(&type2);
  auto input12 = model->addOperand(&type2);
  auto output02 = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input02, input12}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02, input12},
    {output02});
  assert(model->isValid());
}

bool is_ignored_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_dynamic_output_shape_3(Model *model) {
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2}, 1.0f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0}, 0.5f, 128);
  // Phase 1, operands
  auto input02 = model->addOperand(&type2);
  auto input12 = model->addOperand(&type2);
  auto output02 = model->addOperand(&type23);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input02, input12}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02, input12},
    {output02});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_all_inputs_as_internal_3(Model *model) {
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2}, 1.0f, 128);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 128);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 128);
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input02 = model->addOperand(&type2);
  auto input12 = model->addOperand(&type2);
  auto output02 = model->addOperand(&type3);
  auto input02_tmp = model->addOperand(&type2);
  auto dummy32 = model->addOperand(&type24);
  auto param32 = model->addOperand(&type6);
  auto input12_tmp = model->addOperand(&type2);
  auto dummy33 = model->addOperand(&type24);
  auto param33 = model->addOperand(&type6);
  // Phase 2, operations
  static uint8_t dummy32_init[] = {128};
  model->setOperandValue(dummy32, dummy32_init, sizeof(uint8_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static uint8_t dummy33_init[] = {128};
  model->setOperandValue(dummy33, dummy33_init, sizeof(uint8_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input02_tmp, dummy32, param32}, {input02});
  model->addOperation(ANEURALNETWORKS_ADD, {input12_tmp, dummy33, param33}, {input12});
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input02, input12}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02_tmp, input12_tmp},
    {output02});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
namespace generated_tests::maximum {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {2}, 1.0f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0}, 0.5f, 128);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 128);
  OperandType type6(Type::INT32, {});
  // Phase 1, operands
  auto input02 = model->addOperand(&type2);
  auto input12 = model->addOperand(&type2);
  auto output02 = model->addOperand(&type23);
  auto input02_tmp = model->addOperand(&type2);
  auto dummy34 = model->addOperand(&type24);
  auto param34 = model->addOperand(&type6);
  auto input12_tmp = model->addOperand(&type2);
  auto dummy35 = model->addOperand(&type24);
  auto param35 = model->addOperand(&type6);
  // Phase 2, operations
  static uint8_t dummy34_init[] = {128};
  model->setOperandValue(dummy34, dummy34_init, sizeof(uint8_t) * 1);
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static uint8_t dummy35_init[] = {128};
  model->setOperandValue(dummy35, dummy35_init, sizeof(uint8_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input02_tmp, dummy34, param34}, {input02});
  model->addOperation(ANEURALNETWORKS_ADD, {input12_tmp, dummy35, param35}, {input12});
  model->addOperation(ANEURALNETWORKS_MAXIMUM, {input02, input12}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02_tmp, input12_tmp},
    {output02});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::maximum
