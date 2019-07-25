// Generated from gather.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::gather {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type0);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type6);
  auto param16 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy, param16}, {input0});
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type13);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type6);
  auto param17 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy1, param17}, {input0});
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type0);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy2, param18}, {input0});
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type13);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy3, param19}, {input0});
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

bool is_ignored_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

bool is_ignored_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type14);
  auto input0_tmp = model->addOperand(&type14);
  auto dummy4 = model->addOperand(&type16);
  auto param20 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static uint8_t dummy4_init[] = {127};
  model->setOperandValue(dummy4, dummy4_init, sizeof(uint8_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy4, param20}, {input0});
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.5f, 127);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type15);
  auto input0_tmp = model->addOperand(&type14);
  auto dummy5 = model->addOperand(&type16);
  auto param21 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static uint8_t dummy5_init[] = {127};
  model->setOperandValue(dummy5, dummy5_init, sizeof(uint8_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy5, param21}, {input0});
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_int32(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_INT32, {2, 2});
  OperandType type2(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type17);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

bool is_ignored_int32(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_int32_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_INT32, {2, 2});
  OperandType type18(Type::TENSOR_INT32, {0, 0});
  OperandType type2(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type17);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

bool is_ignored_int32_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type2(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type19);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type19);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type21(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type21);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type19);
  auto input0_tmp = model->addOperand(&type21);
  auto dummy6 = model->addOperand(&type22);
  auto param22 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static _Float16 dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(_Float16) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy6, param22}, {input0});
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type21(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type21);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type20);
  auto input0_tmp = model->addOperand(&type21);
  auto dummy7 = model->addOperand(&type22);
  auto param23 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static _Float16 dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(_Float16) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy7, param23}, {input0});
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type3);
  auto input01_tmp = model->addOperand(&type0);
  auto dummy8 = model->addOperand(&type6);
  auto param24 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy8, param24}, {input01});
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type13);
  auto input01_tmp = model->addOperand(&type0);
  auto dummy9 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy9, param25}, {input01});
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type3);
  auto input01_tmp = model->addOperand(&type0);
  auto dummy10 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy10, param26}, {input01});
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type13);
  auto input01_tmp = model->addOperand(&type0);
  auto dummy11 = model->addOperand(&type6);
  auto param27 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(float) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy11, param27}, {input01});
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type14);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

bool is_ignored_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.5f, 127);
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type14);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

bool is_ignored_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type14);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type23);
  auto input01_tmp = model->addOperand(&type14);
  auto dummy12 = model->addOperand(&type16);
  auto param28 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static uint8_t dummy12_init[] = {127};
  model->setOperandValue(dummy12, dummy12_init, sizeof(uint8_t) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy12, param28}, {input01});
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.5f, 127);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type14);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type15);
  auto input01_tmp = model->addOperand(&type14);
  auto dummy13 = model->addOperand(&type16);
  auto param29 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static uint8_t dummy13_init[] = {127};
  model->setOperandValue(dummy13, dummy13_init, sizeof(uint8_t) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy13, param29}, {input01});
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_int32_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_INT32, {2, 2});
  OperandType type24(Type::TENSOR_INT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type17);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type24);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

bool is_ignored_int32_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_int32_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_INT32, {2, 2});
  OperandType type18(Type::TENSOR_INT32, {0, 0});
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type17);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

bool is_ignored_int32_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type19);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type19);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type21(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type21);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type25);
  auto input01_tmp = model->addOperand(&type21);
  auto dummy14 = model->addOperand(&type22);
  auto param30 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(_Float16) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy14, param30}, {input01});
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type21(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type21);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type20);
  auto input01_tmp = model->addOperand(&type21);
  auto dummy15 = model->addOperand(&type22);
  auto param31 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(_Float16) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy15, param31}, {input01});
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input02 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type26(Type::TENSOR_FLOAT32, {0});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto input02 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_all_inputs_as_internal_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input02 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type6);
  auto input02_tmp = model->addOperand(&type5);
  auto dummy16 = model->addOperand(&type6);
  auto param32 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static float dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(float) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input02_tmp, dummy16, param32}, {input02});
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02_tmp},
    {output02});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type26(Type::TENSOR_FLOAT32, {0});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input02 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type26);
  auto input02_tmp = model->addOperand(&type5);
  auto dummy17 = model->addOperand(&type6);
  auto param33 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static float dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(float) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input02_tmp, dummy17, param33}, {input02});
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02_tmp},
    {output02});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input02 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type26(Type::TENSOR_FLOAT32, {0});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto input02 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input02 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type6);
  auto input02_tmp = model->addOperand(&type5);
  auto dummy18 = model->addOperand(&type6);
  auto param34 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input02_tmp, dummy18, param34}, {input02});
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02_tmp},
    {output02});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type26(Type::TENSOR_FLOAT32, {0});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input02 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type26);
  auto input02_tmp = model->addOperand(&type5);
  auto dummy19 = model->addOperand(&type6);
  auto param35 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input02_tmp, dummy19, param35}, {input02});
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02_tmp},
    {output02});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input02 = model->addOperand(&type27);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

bool is_ignored_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_dynamic_output_shape_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {0}, 0.5f, 127);
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input02 = model->addOperand(&type27);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

bool is_ignored_quant8_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_all_inputs_as_internal_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input02 = model->addOperand(&type27);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type16);
  auto input02_tmp = model->addOperand(&type27);
  auto dummy20 = model->addOperand(&type16);
  auto param36 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static uint8_t dummy20_init[] = {127};
  model->setOperandValue(dummy20, dummy20_init, sizeof(uint8_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input02_tmp, dummy20, param36}, {input02});
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02_tmp},
    {output02});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {0}, 0.5f, 127);
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input02 = model->addOperand(&type27);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type28);
  auto input02_tmp = model->addOperand(&type27);
  auto dummy21 = model->addOperand(&type16);
  auto param37 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static uint8_t dummy21_init[] = {127};
  model->setOperandValue(dummy21, dummy21_init, sizeof(uint8_t) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input02_tmp, dummy21, param37}, {input02});
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02_tmp},
    {output02});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_int32_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type29(Type::TENSOR_INT32, {3});
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input02 = model->addOperand(&type29);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

bool is_ignored_int32_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_int32_dynamic_output_shape_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type29(Type::TENSOR_INT32, {3});
  OperandType type30(Type::TENSOR_INT32, {0});
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input02 = model->addOperand(&type29);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

bool is_ignored_int32_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type31(Type::TENSOR_FLOAT16, {3});
  OperandType type32(Type::TENSOR_FLOAT16, {1});
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input02 = model->addOperand(&type31);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_dynamic_output_shape_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type31(Type::TENSOR_FLOAT16, {3});
  OperandType type33(Type::TENSOR_FLOAT16, {0});
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input02 = model->addOperand(&type31);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type33);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type32(Type::TENSOR_FLOAT16, {1});
  OperandType type34(Type::TENSOR_FLOAT16, {3});
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input02 = model->addOperand(&type34);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type32);
  auto input02_tmp = model->addOperand(&type34);
  auto dummy22 = model->addOperand(&type22);
  auto param38 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static _Float16 dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(_Float16) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input02_tmp, dummy22, param38}, {input02});
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02_tmp},
    {output02});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type33(Type::TENSOR_FLOAT16, {0});
  OperandType type34(Type::TENSOR_FLOAT16, {3});
  OperandType type4(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto input02 = model->addOperand(&type34);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type33);
  auto input02_tmp = model->addOperand(&type34);
  auto dummy23 = model->addOperand(&type22);
  auto param39 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static _Float16 dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(_Float16) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input02_tmp, dummy23, param39}, {input02});
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02_tmp},
    {output02});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  // Phase 1, operands
  auto input03 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type26(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto input03 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_all_inputs_as_internal_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  // Phase 1, operands
  auto input03 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type7);
  auto input03_tmp = model->addOperand(&type5);
  auto dummy24 = model->addOperand(&type6);
  auto param40 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  static float dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(float) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy24, param40}, {input03});
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03_tmp},
    {output03});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type26(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input03 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type26);
  auto input03_tmp = model->addOperand(&type5);
  auto dummy25 = model->addOperand(&type6);
  auto param41 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  static float dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(float) * 1);
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy25, param41}, {input03});
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03_tmp},
    {output03});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  // Phase 1, operands
  auto input03 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_dynamic_output_shape_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type26(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  // Phase 1, operands
  auto input03 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_all_inputs_as_internal_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  // Phase 1, operands
  auto input03 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type7);
  auto input03_tmp = model->addOperand(&type5);
  auto dummy26 = model->addOperand(&type6);
  auto param42 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  static float dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(float) * 1);
  static int32_t param42_init[] = {0};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy26, param42}, {input03});
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03_tmp},
    {output03});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type26(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input03 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type26);
  auto input03_tmp = model->addOperand(&type5);
  auto dummy27 = model->addOperand(&type6);
  auto param43 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  static float dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(float) * 1);
  static int32_t param43_init[] = {0};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy27, param43}, {input03});
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03_tmp},
    {output03});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 127);
  // Phase 1, operands
  auto input03 = model->addOperand(&type27);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

bool is_ignored_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_dynamic_output_shape_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {0}, 0.5f, 127);
  // Phase 1, operands
  auto input03 = model->addOperand(&type27);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

bool is_ignored_quant8_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_all_inputs_as_internal_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 127);
  // Phase 1, operands
  auto input03 = model->addOperand(&type27);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type35);
  auto input03_tmp = model->addOperand(&type27);
  auto dummy28 = model->addOperand(&type16);
  auto param44 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  static uint8_t dummy28_init[] = {127};
  model->setOperandValue(dummy28, dummy28_init, sizeof(uint8_t) * 1);
  static int32_t param44_init[] = {0};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy28, param44}, {input03});
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03_tmp},
    {output03});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {0}, 0.5f, 127);
  // Phase 1, operands
  auto input03 = model->addOperand(&type27);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type28);
  auto input03_tmp = model->addOperand(&type27);
  auto dummy29 = model->addOperand(&type16);
  auto param45 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  static uint8_t dummy29_init[] = {127};
  model->setOperandValue(dummy29, dummy29_init, sizeof(uint8_t) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy29, param45}, {input03});
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03_tmp},
    {output03});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_int32_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type29(Type::TENSOR_INT32, {3});
  // Phase 1, operands
  auto input03 = model->addOperand(&type29);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

bool is_ignored_int32_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_int32_dynamic_output_shape_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type29(Type::TENSOR_INT32, {3});
  OperandType type30(Type::TENSOR_INT32, {0});
  // Phase 1, operands
  auto input03 = model->addOperand(&type29);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

bool is_ignored_int32_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type31(Type::TENSOR_FLOAT16, {3});
  OperandType type36(Type::TENSOR_FLOAT16, {2});
  // Phase 1, operands
  auto input03 = model->addOperand(&type31);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_dynamic_output_shape_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type31(Type::TENSOR_FLOAT16, {3});
  OperandType type33(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto input03 = model->addOperand(&type31);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type33);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_all_inputs_as_internal_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type34(Type::TENSOR_FLOAT16, {3});
  OperandType type36(Type::TENSOR_FLOAT16, {2});
  // Phase 1, operands
  auto input03 = model->addOperand(&type34);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type36);
  auto input03_tmp = model->addOperand(&type34);
  auto dummy30 = model->addOperand(&type22);
  auto param46 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  static _Float16 dummy30_init[] = {0.0f};
  model->setOperandValue(dummy30, dummy30_init, sizeof(_Float16) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy30, param46}, {input03});
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03_tmp},
    {output03});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type33(Type::TENSOR_FLOAT16, {0});
  OperandType type34(Type::TENSOR_FLOAT16, {3});
  // Phase 1, operands
  auto input03 = model->addOperand(&type34);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type33);
  auto input03_tmp = model->addOperand(&type34);
  auto dummy31 = model->addOperand(&type22);
  auto param47 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  static _Float16 dummy31_init[] = {0.0f};
  model->setOperandValue(dummy31, dummy31_init, sizeof(_Float16) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy31, param47}, {input03});
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03_tmp},
    {output03});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_all_inputs_as_internal_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type9);
  auto input04_tmp = model->addOperand(&type8);
  auto dummy32 = model->addOperand(&type6);
  auto param48 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  static float dummy32_init[] = {0.0f};
  model->setOperandValue(dummy32, dummy32_init, sizeof(float) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input04_tmp, dummy32, param48}, {input04});
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04_tmp},
    {output04});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type37);
  auto input04_tmp = model->addOperand(&type8);
  auto dummy33 = model->addOperand(&type6);
  auto param49 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  static float dummy33_init[] = {0.0f};
  model->setOperandValue(dummy33, dummy33_init, sizeof(float) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input04_tmp, dummy33, param49}, {input04});
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04_tmp},
    {output04});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_dynamic_output_shape_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_all_inputs_as_internal_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type9);
  auto input04_tmp = model->addOperand(&type8);
  auto dummy34 = model->addOperand(&type6);
  auto param50 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  static float dummy34_init[] = {0.0f};
  model->setOperandValue(dummy34, dummy34_init, sizeof(float) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input04_tmp, dummy34, param50}, {input04});
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04_tmp},
    {output04});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type37);
  auto input04_tmp = model->addOperand(&type8);
  auto dummy35 = model->addOperand(&type6);
  auto param51 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  static float dummy35_init[] = {0.0f};
  model->setOperandValue(dummy35, dummy35_init, sizeof(float) * 1);
  static int32_t param51_init[] = {0};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input04_tmp, dummy35, param51}, {input04});
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04_tmp},
    {output04});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2}, 0.5f, 127);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2}, 0.5f, 127);
  // Phase 1, operands
  auto input04 = model->addOperand(&type38);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type39);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  assert(model->isValid());
}

bool is_ignored_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_dynamic_output_shape_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2}, 0.5f, 127);
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.5f, 127);
  // Phase 1, operands
  auto input04 = model->addOperand(&type38);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  assert(model->isValid());
}

bool is_ignored_quant8_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_all_inputs_as_internal_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2}, 0.5f, 127);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2}, 0.5f, 127);
  // Phase 1, operands
  auto input04 = model->addOperand(&type38);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type39);
  auto input04_tmp = model->addOperand(&type38);
  auto dummy36 = model->addOperand(&type16);
  auto param52 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  static uint8_t dummy36_init[] = {127};
  model->setOperandValue(dummy36, dummy36_init, sizeof(uint8_t) * 1);
  static int32_t param52_init[] = {0};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input04_tmp, dummy36, param52}, {input04});
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04_tmp},
    {output04});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2}, 0.5f, 127);
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.5f, 127);
  // Phase 1, operands
  auto input04 = model->addOperand(&type38);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type40);
  auto input04_tmp = model->addOperand(&type38);
  auto dummy37 = model->addOperand(&type16);
  auto param53 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  static uint8_t dummy37_init[] = {127};
  model->setOperandValue(dummy37, dummy37_init, sizeof(uint8_t) * 1);
  static int32_t param53_init[] = {0};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input04_tmp, dummy37, param53}, {input04});
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04_tmp},
    {output04});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_int32_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type41(Type::TENSOR_INT32, {1, 2, 2});
  OperandType type42(Type::TENSOR_INT32, {2, 2, 2});
  // Phase 1, operands
  auto input04 = model->addOperand(&type41);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type42);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  assert(model->isValid());
}

bool is_ignored_int32_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_int32_dynamic_output_shape_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type41(Type::TENSOR_INT32, {1, 2, 2});
  OperandType type43(Type::TENSOR_INT32, {0, 0, 0});
  // Phase 1, operands
  auto input04 = model->addOperand(&type41);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type43);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  assert(model->isValid());
}

bool is_ignored_int32_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type44(Type::TENSOR_FLOAT16, {1, 2, 2});
  OperandType type45(Type::TENSOR_FLOAT16, {2, 2, 2});
  // Phase 1, operands
  auto input04 = model->addOperand(&type44);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type45);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_dynamic_output_shape_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type44(Type::TENSOR_FLOAT16, {1, 2, 2});
  OperandType type46(Type::TENSOR_FLOAT16, {0, 0, 0});
  // Phase 1, operands
  auto input04 = model->addOperand(&type44);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_all_inputs_as_internal_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type45(Type::TENSOR_FLOAT16, {2, 2, 2});
  OperandType type47(Type::TENSOR_FLOAT16, {1, 2, 2});
  // Phase 1, operands
  auto input04 = model->addOperand(&type47);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type45);
  auto input04_tmp = model->addOperand(&type47);
  auto dummy38 = model->addOperand(&type22);
  auto param54 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  static _Float16 dummy38_init[] = {0.0f};
  model->setOperandValue(dummy38, dummy38_init, sizeof(_Float16) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input04_tmp, dummy38, param54}, {input04});
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04_tmp},
    {output04});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type46(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type47(Type::TENSOR_FLOAT16, {1, 2, 2});
  // Phase 1, operands
  auto input04 = model->addOperand(&type47);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type46);
  auto input04_tmp = model->addOperand(&type47);
  auto dummy39 = model->addOperand(&type22);
  auto param55 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  static _Float16 dummy39_init[] = {0.0f};
  model->setOperandValue(dummy39, dummy39_init, sizeof(_Float16) * 1);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input04_tmp, dummy39, param55}, {input04});
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04_tmp},
    {output04});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type2(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_all_inputs_as_internal_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type11);
  auto input05_tmp = model->addOperand(&type10);
  auto dummy40 = model->addOperand(&type6);
  auto param56 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  static float dummy40_init[] = {0.0f};
  model->setOperandValue(dummy40, dummy40_init, sizeof(float) * 1);
  static int32_t param56_init[] = {0};
  model->setOperandValue(param56, param56_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input05_tmp, dummy40, param56}, {input05});
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05_tmp},
    {output05});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type13);
  auto input05_tmp = model->addOperand(&type10);
  auto dummy41 = model->addOperand(&type6);
  auto param57 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  static float dummy41_init[] = {0.0f};
  model->setOperandValue(dummy41, dummy41_init, sizeof(float) * 1);
  static int32_t param57_init[] = {0};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input05_tmp, dummy41, param57}, {input05});
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05_tmp},
    {output05});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type2(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_dynamic_output_shape_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_all_inputs_as_internal_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type11);
  auto input05_tmp = model->addOperand(&type10);
  auto dummy42 = model->addOperand(&type6);
  auto param58 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  static float dummy42_init[] = {0.0f};
  model->setOperandValue(dummy42, dummy42_init, sizeof(float) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input05_tmp, dummy42, param58}, {input05});
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05_tmp},
    {output05});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type13);
  auto input05_tmp = model->addOperand(&type10);
  auto dummy43 = model->addOperand(&type6);
  auto param59 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  static float dummy43_init[] = {0.0f};
  model->setOperandValue(dummy43, dummy43_init, sizeof(float) * 1);
  static int32_t param59_init[] = {0};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input05_tmp, dummy43, param59}, {input05});
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05_tmp},
    {output05});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {4, 1}, 0.5f, 127);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {2, 1}, 0.5f, 127);
  // Phase 1, operands
  auto input05 = model->addOperand(&type48);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type49);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  assert(model->isValid());
}

bool is_ignored_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_dynamic_output_shape_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {4, 1}, 0.5f, 127);
  // Phase 1, operands
  auto input05 = model->addOperand(&type48);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  assert(model->isValid());
}

bool is_ignored_quant8_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_all_inputs_as_internal_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {4, 1}, 0.5f, 127);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {2, 1}, 0.5f, 127);
  // Phase 1, operands
  auto input05 = model->addOperand(&type48);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type49);
  auto input05_tmp = model->addOperand(&type48);
  auto dummy44 = model->addOperand(&type16);
  auto param60 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  static uint8_t dummy44_init[] = {127};
  model->setOperandValue(dummy44, dummy44_init, sizeof(uint8_t) * 1);
  static int32_t param60_init[] = {0};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input05_tmp, dummy44, param60}, {input05});
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05_tmp},
    {output05});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.5f, 127);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {4, 1}, 0.5f, 127);
  // Phase 1, operands
  auto input05 = model->addOperand(&type48);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type15);
  auto input05_tmp = model->addOperand(&type48);
  auto dummy45 = model->addOperand(&type16);
  auto param61 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  static uint8_t dummy45_init[] = {127};
  model->setOperandValue(dummy45, dummy45_init, sizeof(uint8_t) * 1);
  static int32_t param61_init[] = {0};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input05_tmp, dummy45, param61}, {input05});
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05_tmp},
    {output05});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_int32_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type50(Type::TENSOR_INT32, {4, 1});
  OperandType type51(Type::TENSOR_INT32, {2, 1});
  // Phase 1, operands
  auto input05 = model->addOperand(&type50);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type51);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  assert(model->isValid());
}

bool is_ignored_int32_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_int32_dynamic_output_shape_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type18(Type::TENSOR_INT32, {0, 0});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type50(Type::TENSOR_INT32, {4, 1});
  // Phase 1, operands
  auto input05 = model->addOperand(&type50);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  assert(model->isValid());
}

bool is_ignored_int32_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type52(Type::TENSOR_FLOAT16, {4, 1});
  OperandType type53(Type::TENSOR_FLOAT16, {2, 1});
  // Phase 1, operands
  auto input05 = model->addOperand(&type52);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_dynamic_output_shape_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type52(Type::TENSOR_FLOAT16, {4, 1});
  // Phase 1, operands
  auto input05 = model->addOperand(&type52);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
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

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_all_inputs_as_internal_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type53(Type::TENSOR_FLOAT16, {2, 1});
  OperandType type54(Type::TENSOR_FLOAT16, {4, 1});
  // Phase 1, operands
  auto input05 = model->addOperand(&type54);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type53);
  auto input05_tmp = model->addOperand(&type54);
  auto dummy46 = model->addOperand(&type22);
  auto param62 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  static _Float16 dummy46_init[] = {0.0f};
  model->setOperandValue(dummy46, dummy46_init, sizeof(_Float16) * 1);
  static int32_t param62_init[] = {0};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input05_tmp, dummy46, param62}, {input05});
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05_tmp},
    {output05});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type54(Type::TENSOR_FLOAT16, {4, 1});
  // Phase 1, operands
  auto input05 = model->addOperand(&type54);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type20);
  auto input05_tmp = model->addOperand(&type54);
  auto dummy47 = model->addOperand(&type22);
  auto param63 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  static _Float16 dummy47_init[] = {0.0f};
  model->setOperandValue(dummy47, dummy47_init, sizeof(_Float16) * 1);
  static int32_t param63_init[] = {0};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input05_tmp, dummy47, param63}, {input05});
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05_tmp},
    {output05});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_7(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type2(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input06 = model->addOperand(&type12);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06},
    {output06});
  assert(model->isValid());
}

bool is_ignored_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_7(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto input06 = model->addOperand(&type12);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06},
    {output06});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_all_inputs_as_internal_7(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input06 = model->addOperand(&type12);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type12);
  auto input06_tmp = model->addOperand(&type12);
  auto dummy48 = model->addOperand(&type6);
  auto param64 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  static float dummy48_init[] = {0.0f};
  model->setOperandValue(dummy48, dummy48_init, sizeof(float) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input06_tmp, dummy48, param64}, {input06});
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06_tmp},
    {output06});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input06 = model->addOperand(&type12);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type37);
  auto input06_tmp = model->addOperand(&type12);
  auto dummy49 = model->addOperand(&type6);
  auto param65 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  static float dummy49_init[] = {0.0f};
  model->setOperandValue(dummy49, dummy49_init, sizeof(float) * 1);
  static int32_t param65_init[] = {0};
  model->setOperandValue(param65, param65_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input06_tmp, dummy49, param65}, {input06});
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06_tmp},
    {output06});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_7(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type2(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input06 = model->addOperand(&type12);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06},
    {output06});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_dynamic_output_shape_7(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto input06 = model->addOperand(&type12);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06},
    {output06});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_all_inputs_as_internal_7(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input06 = model->addOperand(&type12);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type12);
  auto input06_tmp = model->addOperand(&type12);
  auto dummy50 = model->addOperand(&type6);
  auto param66 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  static float dummy50_init[] = {0.0f};
  model->setOperandValue(dummy50, dummy50_init, sizeof(float) * 1);
  static int32_t param66_init[] = {0};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input06_tmp, dummy50, param66}, {input06});
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06_tmp},
    {output06});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input06 = model->addOperand(&type12);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type37);
  auto input06_tmp = model->addOperand(&type12);
  auto dummy51 = model->addOperand(&type6);
  auto param67 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  static float dummy51_init[] = {0.0f};
  model->setOperandValue(dummy51, dummy51_init, sizeof(float) * 1);
  static int32_t param67_init[] = {0};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input06_tmp, dummy51, param67}, {input06});
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06_tmp},
    {output06});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_7(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3}, 0.5f, 127);
  // Phase 1, operands
  auto input06 = model->addOperand(&type55);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type55);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06},
    {output06});
  assert(model->isValid());
}

bool is_ignored_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_dynamic_output_shape_7(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.5f, 127);
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3}, 0.5f, 127);
  // Phase 1, operands
  auto input06 = model->addOperand(&type55);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06},
    {output06});
  assert(model->isValid());
}

bool is_ignored_quant8_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_all_inputs_as_internal_7(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3}, 0.5f, 127);
  // Phase 1, operands
  auto input06 = model->addOperand(&type55);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type55);
  auto input06_tmp = model->addOperand(&type55);
  auto dummy52 = model->addOperand(&type16);
  auto param68 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  static uint8_t dummy52_init[] = {127};
  model->setOperandValue(dummy52, dummy52_init, sizeof(uint8_t) * 1);
  static int32_t param68_init[] = {0};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input06_tmp, dummy52, param68}, {input06});
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06_tmp},
    {output06});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.5f, 127);
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3}, 0.5f, 127);
  // Phase 1, operands
  auto input06 = model->addOperand(&type55);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type40);
  auto input06_tmp = model->addOperand(&type55);
  auto dummy53 = model->addOperand(&type16);
  auto param69 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  static uint8_t dummy53_init[] = {127};
  model->setOperandValue(dummy53, dummy53_init, sizeof(uint8_t) * 1);
  static int32_t param69_init[] = {0};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input06_tmp, dummy53, param69}, {input06});
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06_tmp},
    {output06});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_int32_7(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type56(Type::TENSOR_INT32, {1, 2, 3});
  // Phase 1, operands
  auto input06 = model->addOperand(&type56);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type56);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06},
    {output06});
  assert(model->isValid());
}

bool is_ignored_int32_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_int32_dynamic_output_shape_7(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type43(Type::TENSOR_INT32, {0, 0, 0});
  OperandType type56(Type::TENSOR_INT32, {1, 2, 3});
  // Phase 1, operands
  auto input06 = model->addOperand(&type56);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type43);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06},
    {output06});
  assert(model->isValid());
}

bool is_ignored_int32_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_7(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type57(Type::TENSOR_FLOAT16, {1, 2, 3});
  // Phase 1, operands
  auto input06 = model->addOperand(&type57);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type57);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06},
    {output06});
  assert(model->isValid());
}

bool is_ignored_float16_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_dynamic_output_shape_7(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type46(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type57(Type::TENSOR_FLOAT16, {1, 2, 3});
  // Phase 1, operands
  auto input06 = model->addOperand(&type57);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06},
    {output06});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_all_inputs_as_internal_7(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type57(Type::TENSOR_FLOAT16, {1, 2, 3});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 2, 3});
  // Phase 1, operands
  auto input06 = model->addOperand(&type58);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type57);
  auto input06_tmp = model->addOperand(&type58);
  auto dummy54 = model->addOperand(&type22);
  auto param70 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  static _Float16 dummy54_init[] = {0.0f};
  model->setOperandValue(dummy54, dummy54_init, sizeof(_Float16) * 1);
  static int32_t param70_init[] = {0};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input06_tmp, dummy54, param70}, {input06});
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06_tmp},
    {output06});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type46(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 2, 3});
  // Phase 1, operands
  auto input06 = model->addOperand(&type58);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type46);
  auto input06_tmp = model->addOperand(&type58);
  auto dummy55 = model->addOperand(&type22);
  auto param71 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  static _Float16 dummy55_init[] = {0.0f};
  model->setOperandValue(dummy55, dummy55_init, sizeof(_Float16) * 1);
  static int32_t param71_init[] = {0};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input06_tmp, dummy55, param71}, {input06});
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06_tmp},
    {output06});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_8(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  // Phase 1, operands
  auto input07 = model->addOperand(&type12);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07},
    {output07});
  assert(model->isValid());
}

bool is_ignored_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_8(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto input07 = model->addOperand(&type12);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07},
    {output07});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_all_inputs_as_internal_8(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  // Phase 1, operands
  auto input07 = model->addOperand(&type12);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type8);
  auto input07_tmp = model->addOperand(&type12);
  auto dummy56 = model->addOperand(&type6);
  auto param72 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  static float dummy56_init[] = {0.0f};
  model->setOperandValue(dummy56, dummy56_init, sizeof(float) * 1);
  static int32_t param72_init[] = {0};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input07_tmp, dummy56, param72}, {input07});
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07_tmp},
    {output07});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input07 = model->addOperand(&type12);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type37);
  auto input07_tmp = model->addOperand(&type12);
  auto dummy57 = model->addOperand(&type6);
  auto param73 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  static float dummy57_init[] = {0.0f};
  model->setOperandValue(dummy57, dummy57_init, sizeof(float) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input07_tmp, dummy57, param73}, {input07});
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07_tmp},
    {output07});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_8(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  // Phase 1, operands
  auto input07 = model->addOperand(&type12);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07},
    {output07});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_dynamic_output_shape_8(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto input07 = model->addOperand(&type12);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07},
    {output07});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_all_inputs_as_internal_8(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  // Phase 1, operands
  auto input07 = model->addOperand(&type12);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type8);
  auto input07_tmp = model->addOperand(&type12);
  auto dummy58 = model->addOperand(&type6);
  auto param74 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  static float dummy58_init[] = {0.0f};
  model->setOperandValue(dummy58, dummy58_init, sizeof(float) * 1);
  static int32_t param74_init[] = {0};
  model->setOperandValue(param74, param74_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input07_tmp, dummy58, param74}, {input07});
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07_tmp},
    {output07});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type37(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input07 = model->addOperand(&type12);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type37);
  auto input07_tmp = model->addOperand(&type12);
  auto dummy59 = model->addOperand(&type6);
  auto param75 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  static float dummy59_init[] = {0.0f};
  model->setOperandValue(dummy59, dummy59_init, sizeof(float) * 1);
  static int32_t param75_init[] = {0};
  model->setOperandValue(param75, param75_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input07_tmp, dummy59, param75}, {input07});
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07_tmp},
    {output07});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_8(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2}, 0.5f, 127);
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3}, 0.5f, 127);
  // Phase 1, operands
  auto input07 = model->addOperand(&type55);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type38);
  // Phase 2, operations
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07},
    {output07});
  assert(model->isValid());
}

bool is_ignored_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_dynamic_output_shape_8(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.5f, 127);
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3}, 0.5f, 127);
  // Phase 1, operands
  auto input07 = model->addOperand(&type55);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07},
    {output07});
  assert(model->isValid());
}

bool is_ignored_quant8_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_all_inputs_as_internal_8(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2}, 0.5f, 127);
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3}, 0.5f, 127);
  // Phase 1, operands
  auto input07 = model->addOperand(&type55);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type38);
  auto input07_tmp = model->addOperand(&type55);
  auto dummy60 = model->addOperand(&type16);
  auto param76 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  static uint8_t dummy60_init[] = {127};
  model->setOperandValue(dummy60, dummy60_init, sizeof(uint8_t) * 1);
  static int32_t param76_init[] = {0};
  model->setOperandValue(param76, param76_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input07_tmp, dummy60, param76}, {input07});
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07_tmp},
    {output07});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.5f, 127);
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3}, 0.5f, 127);
  // Phase 1, operands
  auto input07 = model->addOperand(&type55);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type40);
  auto input07_tmp = model->addOperand(&type55);
  auto dummy61 = model->addOperand(&type16);
  auto param77 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  static uint8_t dummy61_init[] = {127};
  model->setOperandValue(dummy61, dummy61_init, sizeof(uint8_t) * 1);
  static int32_t param77_init[] = {0};
  model->setOperandValue(param77, param77_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input07_tmp, dummy61, param77}, {input07});
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07_tmp},
    {output07});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_int32_8(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type41(Type::TENSOR_INT32, {1, 2, 2});
  OperandType type56(Type::TENSOR_INT32, {1, 2, 3});
  // Phase 1, operands
  auto input07 = model->addOperand(&type56);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type41);
  // Phase 2, operations
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07},
    {output07});
  assert(model->isValid());
}

bool is_ignored_int32_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_int32_dynamic_output_shape_8(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type43(Type::TENSOR_INT32, {0, 0, 0});
  OperandType type56(Type::TENSOR_INT32, {1, 2, 3});
  // Phase 1, operands
  auto input07 = model->addOperand(&type56);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type43);
  // Phase 2, operations
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07},
    {output07});
  assert(model->isValid());
}

bool is_ignored_int32_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_8(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type44(Type::TENSOR_FLOAT16, {1, 2, 2});
  OperandType type57(Type::TENSOR_FLOAT16, {1, 2, 3});
  // Phase 1, operands
  auto input07 = model->addOperand(&type57);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type44);
  // Phase 2, operations
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07},
    {output07});
  assert(model->isValid());
}

bool is_ignored_float16_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_dynamic_output_shape_8(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type46(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type57(Type::TENSOR_FLOAT16, {1, 2, 3});
  // Phase 1, operands
  auto input07 = model->addOperand(&type57);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07},
    {output07});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_all_inputs_as_internal_8(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type44(Type::TENSOR_FLOAT16, {1, 2, 2});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 2, 3});
  // Phase 1, operands
  auto input07 = model->addOperand(&type58);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type44);
  auto input07_tmp = model->addOperand(&type58);
  auto dummy62 = model->addOperand(&type22);
  auto param78 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  static _Float16 dummy62_init[] = {0.0f};
  model->setOperandValue(dummy62, dummy62_init, sizeof(_Float16) * 1);
  static int32_t param78_init[] = {0};
  model->setOperandValue(param78, param78_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input07_tmp, dummy62, param78}, {input07});
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07_tmp},
    {output07});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
namespace generated_tests::gather {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type46(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 2, 3});
  // Phase 1, operands
  auto input07 = model->addOperand(&type58);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type46);
  auto input07_tmp = model->addOperand(&type58);
  auto dummy63 = model->addOperand(&type22);
  auto param79 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  static _Float16 dummy63_init[] = {0.0f};
  model->setOperandValue(dummy63, dummy63_init, sizeof(_Float16) * 1);
  static int32_t param79_init[] = {0};
  model->setOperandValue(param79, param79_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input07_tmp, dummy63, param79}, {input07});
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07_tmp},
    {output07});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::gather
