// Generated from pad_low_rank.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::pad_low_rank {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {7});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t paddings_init[] = {3, 1};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 2);
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

} // namespace generated_tests::pad_low_rank
namespace generated_tests::pad_low_rank {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t paddings_init[] = {3, 1};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 2);
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

} // namespace generated_tests::pad_low_rank
namespace generated_tests::pad_low_rank {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {7});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type2);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type4);
  auto param = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t paddings_init[] = {3, 1};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 2);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
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

} // namespace generated_tests::pad_low_rank
namespace generated_tests::pad_low_rank {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type3);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t paddings_init[] = {3, 1};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 2);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
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

} // namespace generated_tests::pad_low_rank
namespace generated_tests::pad_low_rank {

void CreateModel_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {7});
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

} // namespace generated_tests::pad_low_rank
namespace generated_tests::pad_low_rank {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {0});
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

} // namespace generated_tests::pad_low_rank
namespace generated_tests::pad_low_rank {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {7});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type2);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type5);
  // Phase 2, operations
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
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

} // namespace generated_tests::pad_low_rank
namespace generated_tests::pad_low_rank {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {3});
  OperandType type1(Type::TENSOR_INT32, {1, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type3);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type5);
  // Phase 2, operations
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
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

} // namespace generated_tests::pad_low_rank
namespace generated_tests::pad_low_rank {

void CreateModel_float16(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {1, 2});
  OperandType type6(Type::TENSOR_FLOAT16, {3});
  OperandType type7(Type::TENSOR_FLOAT16, {7});
  // Phase 1, operands
  auto input0 = model->addOperand(&type6);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t paddings_init[] = {3, 1};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_PAD, {input0, paddings}, {output0});
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

} // namespace generated_tests::pad_low_rank
namespace generated_tests::pad_low_rank {

void CreateModel_float16_dynamic_output_shape(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {1, 2});
  OperandType type6(Type::TENSOR_FLOAT16, {3});
  OperandType type8(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type6);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t paddings_init[] = {3, 1};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_PAD, {input0, paddings}, {output0});
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

} // namespace generated_tests::pad_low_rank
namespace generated_tests::pad_low_rank {

void CreateModel_float16_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {1, 2});
  OperandType type10(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT16, {7});
  OperandType type9(Type::TENSOR_FLOAT16, {3});
  // Phase 1, operands
  auto input0 = model->addOperand(&type9);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type7);
  auto input0_tmp = model->addOperand(&type9);
  auto dummy4 = model->addOperand(&type10);
  auto param4 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t paddings_init[] = {3, 1};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 2);
  static _Float16 dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(_Float16) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy4, param4}, {input0});
  model->addOperation(ANEURALNETWORKS_PAD, {input0, paddings}, {output0});
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

} // namespace generated_tests::pad_low_rank
namespace generated_tests::pad_low_rank {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {1, 2});
  OperandType type10(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT16, {0});
  OperandType type9(Type::TENSOR_FLOAT16, {3});
  // Phase 1, operands
  auto input0 = model->addOperand(&type9);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type8);
  auto input0_tmp = model->addOperand(&type9);
  auto dummy5 = model->addOperand(&type10);
  auto param5 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t paddings_init[] = {3, 1};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 2);
  static _Float16 dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(_Float16) * 1);
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy5, param5}, {input0});
  model->addOperation(ANEURALNETWORKS_PAD, {input0, paddings}, {output0});
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

} // namespace generated_tests::pad_low_rank
namespace generated_tests::pad_low_rank {

void CreateModel_float16_all_tensors_as_inputs(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {1, 2});
  OperandType type6(Type::TENSOR_FLOAT16, {3});
  OperandType type7(Type::TENSOR_FLOAT16, {7});
  // Phase 1, operands
  auto input0 = model->addOperand(&type6);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type7);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_PAD, {input0, paddings}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, paddings},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_low_rank
namespace generated_tests::pad_low_rank {

void CreateModel_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {1, 2});
  OperandType type6(Type::TENSOR_FLOAT16, {3});
  OperandType type8(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type6);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type8);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_PAD, {input0, paddings}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, paddings},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_low_rank
namespace generated_tests::pad_low_rank {

void CreateModel_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {1, 2});
  OperandType type10(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT16, {7});
  OperandType type9(Type::TENSOR_FLOAT16, {3});
  // Phase 1, operands
  auto input0 = model->addOperand(&type9);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type7);
  auto input0_tmp = model->addOperand(&type9);
  auto dummy6 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  // Phase 2, operations
  static _Float16 dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(_Float16) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy6, param6}, {input0});
  model->addOperation(ANEURALNETWORKS_PAD, {input0, paddings}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, input0_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_low_rank
namespace generated_tests::pad_low_rank {

void CreateModel_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::TENSOR_INT32, {1, 2});
  OperandType type10(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT16, {0});
  OperandType type9(Type::TENSOR_FLOAT16, {3});
  // Phase 1, operands
  auto input0 = model->addOperand(&type9);
  auto paddings = model->addOperand(&type1);
  auto output0 = model->addOperand(&type8);
  auto input0_tmp = model->addOperand(&type9);
  auto dummy7 = model->addOperand(&type10);
  auto param7 = model->addOperand(&type5);
  // Phase 2, operations
  static _Float16 dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(_Float16) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy7, param7}, {input0});
  model->addOperation(ANEURALNETWORKS_PAD, {input0, paddings}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, input0_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::pad_low_rank
