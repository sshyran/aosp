// Generated from pad_quant8.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::pad_quant8 {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 1}, 2.3f, 0);
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {1, 4, 7, 1}, 2.3f, 0);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t paddings_init[] = {0, 0, 0, 2, 1, 3, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 8);
  model->addOperation(ANEURALNETWORKS_PAD, {input0, paddings}, {output0});
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

} // namespace generated_tests::pad_quant8
namespace generated_tests::pad_quant8 {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 1}, 2.3f, 0);
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 2.3f, 0);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t paddings_init[] = {0, 0, 0, 2, 1, 3, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 8);
  model->addOperation(ANEURALNETWORKS_PAD, {input0, paddings}, {output0});
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

} // namespace generated_tests::pad_quant8
namespace generated_tests::pad_quant8 {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 1}, 2.3f, 0);
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {1, 4, 7, 1}, 2.3f, 0);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {1}, 2.3f, 0);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type2);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t paddings_init[] = {0, 0, 0, 2, 1, 3, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 8);
  static uint8_t dummy_init[] = {0};
  model->setOperandValue(dummy, dummy_init, sizeof(uint8_t) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy, param}, {input0});
  model->addOperation(ANEURALNETWORKS_PAD, {input0, paddings}, {output0});
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

} // namespace generated_tests::pad_quant8
namespace generated_tests::pad_quant8 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 1}, 2.3f, 0);
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 2.3f, 0);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {1}, 2.3f, 0);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type3);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t paddings_init[] = {0, 0, 0, 2, 1, 3, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 8);
  static uint8_t dummy1_init[] = {0};
  model->setOperandValue(dummy1, dummy1_init, sizeof(uint8_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy1, param1}, {input0});
  model->addOperation(ANEURALNETWORKS_PAD, {input0, paddings}, {output0});
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

} // namespace generated_tests::pad_quant8
namespace generated_tests::pad_quant8 {

void CreateModel_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 1}, 2.3f, 0);
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {1, 4, 7, 1}, 2.3f, 0);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_PAD, {input0, paddings}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, paddings},
    {output0});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_quant8
namespace generated_tests::pad_quant8 {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 1}, 2.3f, 0);
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 2.3f, 0);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_PAD, {input0, paddings}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, paddings},
    {output0});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_quant8
namespace generated_tests::pad_quant8 {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 1}, 2.3f, 0);
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {1, 4, 7, 1}, 2.3f, 0);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {1}, 2.3f, 0);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type2);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type5);
  // Phase 2, operations
  static uint8_t dummy2_init[] = {0};
  model->setOperandValue(dummy2, dummy2_init, sizeof(uint8_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy2, param2}, {input0});
  model->addOperation(ANEURALNETWORKS_PAD, {input0, paddings}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, input0_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_quant8
namespace generated_tests::pad_quant8 {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 1}, 2.3f, 0);
  OperandType type1(Type::TENSOR_INT32, {4, 2});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 2.3f, 0);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {1}, 2.3f, 0);
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type3);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  // Phase 2, operations
  static uint8_t dummy3_init[] = {0};
  model->setOperandValue(dummy3, dummy3_init, sizeof(uint8_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy3, param3}, {input0});
  model->addOperation(ANEURALNETWORKS_PAD, {input0, paddings}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, input0_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_quant8
