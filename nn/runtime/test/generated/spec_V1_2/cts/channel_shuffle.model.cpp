// Generated from channel_shuffle.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis0_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis0_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis0_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type2);
  auto dummy = model->addOperand(&type4);
  auto param1 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param1}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis0_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis0_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type2);
  auto dummy1 = model->addOperand(&type4);
  auto param2 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param2}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis0_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis0_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis0_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis0_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type2);
  auto dummy2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy2, param3}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis0_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type2);
  auto dummy3 = model->addOperand(&type4);
  auto param4 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy3, param4}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis1_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis1_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis1_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type5);
  auto op1_tmp = model->addOperand(&type5);
  auto dummy4 = model->addOperand(&type4);
  auto param5 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy4, param5}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis1_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis1_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type5);
  auto dummy5 = model->addOperand(&type4);
  auto param6 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(float) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy5, param6}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis1_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis1_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis1_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis1_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type5);
  auto op1_tmp = model->addOperand(&type5);
  auto dummy6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy6, param7}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis1_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type5);
  auto dummy7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy7, param8}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis2_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis2_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis2_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type6);
  auto op1_tmp = model->addOperand(&type6);
  auto dummy8 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy8, param9}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis2_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis2_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type6);
  auto dummy9 = model->addOperand(&type4);
  auto param10 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy9, param10}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis2_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis2_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis2_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis2_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type6);
  auto op1_tmp = model->addOperand(&type6);
  auto dummy10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(float) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy10, param11}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis2_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type6);
  auto dummy11 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy11, param12}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis3_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis3_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy12 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(float) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy12, param13}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy13, param14}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis3_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis3_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis3_neg_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis3_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis3_neg_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(float) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy14, param15}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis3_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy15 = model->addOperand(&type4);
  auto param16 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(float) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy15, param16}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis0_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis0_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis0_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type7);
  auto op1_tmp = model->addOperand(&type7);
  auto dummy16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(float) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy16, param17}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis0_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis0_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  auto op1_tmp = model->addOperand(&type7);
  auto dummy17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(float) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy17, param18}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis0_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis0_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis0_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis0_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type7);
  auto op1_tmp = model->addOperand(&type7);
  auto dummy18 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy18, param19}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis0_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  auto op1_tmp = model->addOperand(&type7);
  auto dummy19 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy19, param20}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis1_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis1_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis1_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type9);
  auto op1_tmp = model->addOperand(&type9);
  auto dummy20 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(float) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy20, param21}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis1_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis1_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  auto op1_tmp = model->addOperand(&type9);
  auto dummy21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(float) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy21, param22}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis1_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis1_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis1_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis1_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type9);
  auto op1_tmp = model->addOperand(&type9);
  auto dummy22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(float) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy22, param23}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis1_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  auto op1_tmp = model->addOperand(&type9);
  auto dummy23 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(float) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy23, param24}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis2_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis2_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  auto op1_tmp = model->addOperand(&type10);
  auto dummy24 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(float) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy24, param25}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  auto op1_tmp = model->addOperand(&type10);
  auto dummy25 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy25, param26}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis2_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis2_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis2_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  auto op1_tmp = model->addOperand(&type10);
  auto dummy26 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(float) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy26, param27}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis2_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  auto op1_tmp = model->addOperand(&type10);
  auto dummy27 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(float) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy27, param28}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim2_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim2_axis0_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis0_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim2_axis0_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type11);
  auto dummy28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy28_init[] = {0.0f};
  model->setOperandValue(dummy28, dummy28_init, sizeof(float) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy28, param29}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis0_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim2_axis0_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  auto op1_tmp = model->addOperand(&type11);
  auto dummy29 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy29_init[] = {0.0f};
  model->setOperandValue(dummy29, dummy29_init, sizeof(float) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy29, param30}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis0_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim2_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim2_axis0_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis0_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim2_axis0_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type11);
  auto dummy30 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy30_init[] = {0.0f};
  model->setOperandValue(dummy30, dummy30_init, sizeof(float) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy30, param31}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis0_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  auto op1_tmp = model->addOperand(&type11);
  auto dummy31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy31_init[] = {0.0f};
  model->setOperandValue(dummy31, dummy31_init, sizeof(float) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy31, param32}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim2_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim2_axis1_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim2_axis1_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {3, 12});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  auto op1_tmp = model->addOperand(&type13);
  auto dummy32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy32_init[] = {0.0f};
  model->setOperandValue(dummy32, dummy32_init, sizeof(float) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy32, param33}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {3, 12});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  auto op1_tmp = model->addOperand(&type13);
  auto dummy33 = model->addOperand(&type4);
  auto param34 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy33_init[] = {0.0f};
  model->setOperandValue(dummy33, dummy33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy33, param34}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim2_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim2_axis1_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis1_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim2_axis1_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {3, 12});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  auto op1_tmp = model->addOperand(&type13);
  auto dummy34 = model->addOperand(&type4);
  auto param35 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy34_init[] = {0.0f};
  model->setOperandValue(dummy34, dummy34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy34, param35}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis1_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {3, 12});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  auto op1_tmp = model->addOperand(&type13);
  auto dummy35 = model->addOperand(&type4);
  auto param36 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy35_init[] = {0.0f};
  model->setOperandValue(dummy35, dummy35_init, sizeof(float) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy35, param36}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim1_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim1_axis0_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {12});
  OperandType type15(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim1_axis0_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {12});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  auto op1_tmp = model->addOperand(&type14);
  auto dummy36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy36_init[] = {0.0f};
  model->setOperandValue(dummy36, dummy36_init, sizeof(float) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy36, param37}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {12});
  OperandType type15(Type::TENSOR_FLOAT32, {0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  auto op1_tmp = model->addOperand(&type14);
  auto dummy37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy37_init[] = {0.0f};
  model->setOperandValue(dummy37, dummy37_init, sizeof(float) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy37, param38}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim1_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim1_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim1_axis0_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {12});
  OperandType type15(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim1_axis0_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim1_axis0_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {12});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  auto op1_tmp = model->addOperand(&type14);
  auto dummy38 = model->addOperand(&type4);
  auto param39 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy38_init[] = {0.0f};
  model->setOperandValue(dummy38, dummy38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy38, param39}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim1_axis0_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {12});
  OperandType type15(Type::TENSOR_FLOAT32, {0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  auto op1_tmp = model->addOperand(&type14);
  auto dummy39 = model->addOperand(&type4);
  auto param40 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy39_init[] = {0.0f};
  model->setOperandValue(dummy39, dummy39_init, sizeof(float) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy39, param40}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis0_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis0_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis0_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type2);
  auto dummy40 = model->addOperand(&type4);
  auto param41 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy40_init[] = {0.0f};
  model->setOperandValue(dummy40, dummy40_init, sizeof(float) * 1);
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy40, param41}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis0_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type2);
  auto dummy41 = model->addOperand(&type4);
  auto param42 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy41_init[] = {0.0f};
  model->setOperandValue(dummy41, dummy41_init, sizeof(float) * 1);
  static int32_t param42_init[] = {0};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy41, param42}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis0_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis0_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis0_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type2);
  auto dummy42 = model->addOperand(&type4);
  auto param43 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy42_init[] = {0.0f};
  model->setOperandValue(dummy42, dummy42_init, sizeof(float) * 1);
  static int32_t param43_init[] = {0};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy42, param43}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis0_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {12, 2, 2, 3});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type2);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type2);
  auto dummy43 = model->addOperand(&type4);
  auto param44 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy43_init[] = {0.0f};
  model->setOperandValue(dummy43, dummy43_init, sizeof(float) * 1);
  static int32_t param44_init[] = {0};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy43, param44}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis1_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis1_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis1_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type5);
  auto op1_tmp = model->addOperand(&type5);
  auto dummy44 = model->addOperand(&type4);
  auto param45 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy44_init[] = {0.0f};
  model->setOperandValue(dummy44, dummy44_init, sizeof(float) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy44, param45}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis1_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type5);
  auto dummy45 = model->addOperand(&type4);
  auto param46 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy45_init[] = {0.0f};
  model->setOperandValue(dummy45, dummy45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy45, param46}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis1_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis1_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis1_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type5);
  auto op1_tmp = model->addOperand(&type5);
  auto dummy46 = model->addOperand(&type4);
  auto param47 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy46_init[] = {0.0f};
  model->setOperandValue(dummy46, dummy46_init, sizeof(float) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy46, param47}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis1_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type5);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type5);
  auto dummy47 = model->addOperand(&type4);
  auto param48 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy47_init[] = {0.0f};
  model->setOperandValue(dummy47, dummy47_init, sizeof(float) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy47, param48}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis2_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis2_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis2_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type6);
  auto op1_tmp = model->addOperand(&type6);
  auto dummy48 = model->addOperand(&type4);
  auto param49 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy48_init[] = {0.0f};
  model->setOperandValue(dummy48, dummy48_init, sizeof(float) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy48, param49}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis2_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type6);
  auto dummy49 = model->addOperand(&type4);
  auto param50 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy49_init[] = {0.0f};
  model->setOperandValue(dummy49, dummy49_init, sizeof(float) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy49, param50}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis2_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis2_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis2_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type6);
  auto op1_tmp = model->addOperand(&type6);
  auto dummy50 = model->addOperand(&type4);
  auto param51 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy50_init[] = {0.0f};
  model->setOperandValue(dummy50, dummy50_init, sizeof(float) * 1);
  static int32_t param51_init[] = {0};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy50, param51}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis2_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type6);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type6);
  auto dummy51 = model->addOperand(&type4);
  auto param52 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy51_init[] = {0.0f};
  model->setOperandValue(dummy51, dummy51_init, sizeof(float) * 1);
  static int32_t param52_init[] = {0};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy51, param52}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis3_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis3_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy52 = model->addOperand(&type4);
  auto param53 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy52_init[] = {0.0f};
  model->setOperandValue(dummy52, dummy52_init, sizeof(float) * 1);
  static int32_t param53_init[] = {0};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy52, param53}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy53 = model->addOperand(&type4);
  auto param54 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy53_init[] = {0.0f};
  model->setOperandValue(dummy53, dummy53_init, sizeof(float) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy53, param54}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis3_neg(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis3_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis3_neg_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis3_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis3_neg_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type0);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy54 = model->addOperand(&type4);
  auto param55 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy54_init[] = {0.0f};
  model->setOperandValue(dummy54, dummy54_init, sizeof(float) * 1);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy54, param55}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis3_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2, 3, 12});
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy55 = model->addOperand(&type4);
  auto param56 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy55_init[] = {0.0f};
  model->setOperandValue(dummy55, dummy55_init, sizeof(float) * 1);
  static int32_t param56_init[] = {0};
  model->setOperandValue(param56, param56_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy55, param56}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis0_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis0_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis0_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type7);
  auto op1_tmp = model->addOperand(&type7);
  auto dummy56 = model->addOperand(&type4);
  auto param57 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy56_init[] = {0.0f};
  model->setOperandValue(dummy56, dummy56_init, sizeof(float) * 1);
  static int32_t param57_init[] = {0};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy56, param57}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis0_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  auto op1_tmp = model->addOperand(&type7);
  auto dummy57 = model->addOperand(&type4);
  auto param58 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy57_init[] = {0.0f};
  model->setOperandValue(dummy57, dummy57_init, sizeof(float) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy57, param58}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis0_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis0_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis0_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type7);
  auto op1_tmp = model->addOperand(&type7);
  auto dummy58 = model->addOperand(&type4);
  auto param59 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy58_init[] = {0.0f};
  model->setOperandValue(dummy58, dummy58_init, sizeof(float) * 1);
  static int32_t param59_init[] = {0};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy58, param59}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis0_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {12, 2, 3});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type7);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  auto op1_tmp = model->addOperand(&type7);
  auto dummy59 = model->addOperand(&type4);
  auto param60 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy59_init[] = {0.0f};
  model->setOperandValue(dummy59, dummy59_init, sizeof(float) * 1);
  static int32_t param60_init[] = {0};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy59, param60}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis1_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis1_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis1_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type9);
  auto op1_tmp = model->addOperand(&type9);
  auto dummy60 = model->addOperand(&type4);
  auto param61 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy60_init[] = {0.0f};
  model->setOperandValue(dummy60, dummy60_init, sizeof(float) * 1);
  static int32_t param61_init[] = {0};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy60, param61}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis1_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  auto op1_tmp = model->addOperand(&type9);
  auto dummy61 = model->addOperand(&type4);
  auto param62 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy61_init[] = {0.0f};
  model->setOperandValue(dummy61, dummy61_init, sizeof(float) * 1);
  static int32_t param62_init[] = {0};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy61, param62}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis1_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis1_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis1_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type9);
  auto op1_tmp = model->addOperand(&type9);
  auto dummy62 = model->addOperand(&type4);
  auto param63 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy62_init[] = {0.0f};
  model->setOperandValue(dummy62, dummy62_init, sizeof(float) * 1);
  static int32_t param63_init[] = {0};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy62, param63}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis1_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  auto op1_tmp = model->addOperand(&type9);
  auto dummy63 = model->addOperand(&type4);
  auto param64 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy63_init[] = {0.0f};
  model->setOperandValue(dummy63, dummy63_init, sizeof(float) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy63, param64}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis2_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis2_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  auto op1_tmp = model->addOperand(&type10);
  auto dummy64 = model->addOperand(&type4);
  auto param65 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy64_init[] = {0.0f};
  model->setOperandValue(dummy64, dummy64_init, sizeof(float) * 1);
  static int32_t param65_init[] = {0};
  model->setOperandValue(param65, param65_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy64, param65}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  auto op1_tmp = model->addOperand(&type10);
  auto dummy65 = model->addOperand(&type4);
  auto param66 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy65_init[] = {0.0f};
  model->setOperandValue(dummy65, dummy65_init, sizeof(float) * 1);
  static int32_t param66_init[] = {0};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy65, param66}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis2_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis2_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis2_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type10);
  auto op1_tmp = model->addOperand(&type10);
  auto dummy66 = model->addOperand(&type4);
  auto param67 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy66_init[] = {0.0f};
  model->setOperandValue(dummy66, dummy66_init, sizeof(float) * 1);
  static int32_t param67_init[] = {0};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy66, param67}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis2_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 3, 12});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type8);
  auto op1_tmp = model->addOperand(&type10);
  auto dummy67 = model->addOperand(&type4);
  auto param68 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy67_init[] = {0.0f};
  model->setOperandValue(dummy67, dummy67_init, sizeof(float) * 1);
  static int32_t param68_init[] = {0};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy67, param68}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim2_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim2_axis0_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis0_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim2_axis0_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type11);
  auto dummy68 = model->addOperand(&type4);
  auto param69 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy68_init[] = {0.0f};
  model->setOperandValue(dummy68, dummy68_init, sizeof(float) * 1);
  static int32_t param69_init[] = {0};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy68, param69}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis0_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  auto op1_tmp = model->addOperand(&type11);
  auto dummy69 = model->addOperand(&type4);
  auto param70 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy69_init[] = {0.0f};
  model->setOperandValue(dummy69, dummy69_init, sizeof(float) * 1);
  static int32_t param70_init[] = {0};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy69, param70}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim2_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim2_axis0_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis0_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim2_axis0_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type11);
  auto dummy70 = model->addOperand(&type4);
  auto param71 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy70_init[] = {0.0f};
  model->setOperandValue(dummy70, dummy70_init, sizeof(float) * 1);
  static int32_t param71_init[] = {0};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy70, param71}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis0_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {12, 3});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type11);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  auto op1_tmp = model->addOperand(&type11);
  auto dummy71 = model->addOperand(&type4);
  auto param72 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy71_init[] = {0.0f};
  model->setOperandValue(dummy71, dummy71_init, sizeof(float) * 1);
  static int32_t param72_init[] = {0};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy71, param72}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim2_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim2_axis1_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim2_axis1_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {3, 12});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  auto op1_tmp = model->addOperand(&type13);
  auto dummy72 = model->addOperand(&type4);
  auto param73 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy72_init[] = {0.0f};
  model->setOperandValue(dummy72, dummy72_init, sizeof(float) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy72, param73}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {3, 12});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  auto op1_tmp = model->addOperand(&type13);
  auto dummy73 = model->addOperand(&type4);
  auto param74 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy73_init[] = {0.0f};
  model->setOperandValue(dummy73, dummy73_init, sizeof(float) * 1);
  static int32_t param74_init[] = {0};
  model->setOperandValue(param74, param74_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy73, param74}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim2_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim2_axis1_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis1_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim2_axis1_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type13(Type::TENSOR_FLOAT32, {3, 12});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type13);
  auto op1_tmp = model->addOperand(&type13);
  auto dummy74 = model->addOperand(&type4);
  auto param75 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy74_init[] = {0.0f};
  model->setOperandValue(dummy74, dummy74_init, sizeof(float) * 1);
  static int32_t param75_init[] = {0};
  model->setOperandValue(param75, param75_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy74, param75}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis1_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {3, 12});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type12);
  auto op1_tmp = model->addOperand(&type13);
  auto dummy75 = model->addOperand(&type4);
  auto param76 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy75_init[] = {0.0f};
  model->setOperandValue(dummy75, dummy75_init, sizeof(float) * 1);
  static int32_t param76_init[] = {0};
  model->setOperandValue(param76, param76_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy75, param76}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim1_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim1_axis0_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {12});
  OperandType type15(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim1_axis0_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {12});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  auto op1_tmp = model->addOperand(&type14);
  auto dummy76 = model->addOperand(&type4);
  auto param77 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy76_init[] = {0.0f};
  model->setOperandValue(dummy76, dummy76_init, sizeof(float) * 1);
  static int32_t param77_init[] = {0};
  model->setOperandValue(param77, param77_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy76, param77}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {12});
  OperandType type15(Type::TENSOR_FLOAT32, {0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  auto op1_tmp = model->addOperand(&type14);
  auto dummy77 = model->addOperand(&type4);
  auto param78 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy77_init[] = {0.0f};
  model->setOperandValue(dummy77, dummy77_init, sizeof(float) * 1);
  static int32_t param78_init[] = {0};
  model->setOperandValue(param78, param78_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy77, param78}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
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

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim1_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim1_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim1_axis0_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {12});
  OperandType type15(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim1_axis0_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim1_axis0_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {12});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type14);
  auto op1_tmp = model->addOperand(&type14);
  auto dummy78 = model->addOperand(&type4);
  auto param79 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy78_init[] = {0.0f};
  model->setOperandValue(dummy78, dummy78_init, sizeof(float) * 1);
  static int32_t param79_init[] = {0};
  model->setOperandValue(param79, param79_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy78, param79}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim1_axis0_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {12});
  OperandType type15(Type::TENSOR_FLOAT32, {0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type15);
  auto op1_tmp = model->addOperand(&type14);
  auto dummy79 = model->addOperand(&type4);
  auto param80 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static float dummy79_init[] = {0.0f};
  model->setOperandValue(dummy79, dummy79_init, sizeof(float) * 1);
  static int32_t param80_init[] = {0};
  model->setOperandValue(param80, param80_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy79, param80}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis0_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis0_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis0_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type17);
  auto op1_tmp = model->addOperand(&type17);
  auto dummy80 = model->addOperand(&type19);
  auto param81 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy80_init[] = {128};
  model->setOperandValue(dummy80, dummy80_init, sizeof(uint8_t) * 1);
  static int32_t param81_init[] = {0};
  model->setOperandValue(param81, param81_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy80, param81}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis0_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  auto op1_tmp = model->addOperand(&type17);
  auto dummy81 = model->addOperand(&type19);
  auto param82 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy81_init[] = {128};
  model->setOperandValue(dummy81, dummy81_init, sizeof(uint8_t) * 1);
  static int32_t param82_init[] = {0};
  model->setOperandValue(param82, param82_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy81, param82}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis0_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis0_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis0_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis0_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type17);
  auto op1_tmp = model->addOperand(&type17);
  auto dummy82 = model->addOperand(&type19);
  auto param83 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy82_init[] = {128};
  model->setOperandValue(dummy82, dummy82_init, sizeof(uint8_t) * 1);
  static int32_t param83_init[] = {0};
  model->setOperandValue(param83, param83_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy82, param83}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis0_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {12, 2, 2, 3}, 0.25f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  auto op1_tmp = model->addOperand(&type17);
  auto dummy83 = model->addOperand(&type19);
  auto param84 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy83_init[] = {128};
  model->setOperandValue(dummy83, dummy83_init, sizeof(uint8_t) * 1);
  static int32_t param84_init[] = {0};
  model->setOperandValue(param84, param84_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy83, param84}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis1_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis1_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis1_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type20);
  auto op1_tmp = model->addOperand(&type20);
  auto dummy84 = model->addOperand(&type19);
  auto param85 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy84_init[] = {128};
  model->setOperandValue(dummy84, dummy84_init, sizeof(uint8_t) * 1);
  static int32_t param85_init[] = {0};
  model->setOperandValue(param85, param85_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy84, param85}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis1_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  auto op1_tmp = model->addOperand(&type20);
  auto dummy85 = model->addOperand(&type19);
  auto param86 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy85_init[] = {128};
  model->setOperandValue(dummy85, dummy85_init, sizeof(uint8_t) * 1);
  static int32_t param86_init[] = {0};
  model->setOperandValue(param86, param86_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy85, param86}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis1_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis1_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis1_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis1_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type20);
  auto op1_tmp = model->addOperand(&type20);
  auto dummy86 = model->addOperand(&type19);
  auto param87 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy86_init[] = {128};
  model->setOperandValue(dummy86, dummy86_init, sizeof(uint8_t) * 1);
  static int32_t param87_init[] = {0};
  model->setOperandValue(param87, param87_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy86, param87}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis1_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2, 12, 2, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  auto op1_tmp = model->addOperand(&type20);
  auto dummy87 = model->addOperand(&type19);
  auto param88 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy87_init[] = {128};
  model->setOperandValue(dummy87, dummy87_init, sizeof(uint8_t) * 1);
  static int32_t param88_init[] = {0};
  model->setOperandValue(param88, param88_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy87, param88}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis2_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis2_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis2_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type21);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy88 = model->addOperand(&type19);
  auto param89 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy88_init[] = {128};
  model->setOperandValue(dummy88, dummy88_init, sizeof(uint8_t) * 1);
  static int32_t param89_init[] = {0};
  model->setOperandValue(param89, param89_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy88, param89}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis2_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy89 = model->addOperand(&type19);
  auto param90 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy89_init[] = {128};
  model->setOperandValue(dummy89, dummy89_init, sizeof(uint8_t) * 1);
  static int32_t param90_init[] = {0};
  model->setOperandValue(param90, param90_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy89, param90}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis2_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis2_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis2_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis2_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type21);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy90 = model->addOperand(&type19);
  auto param91 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy90_init[] = {128};
  model->setOperandValue(dummy90, dummy90_init, sizeof(uint8_t) * 1);
  static int32_t param91_init[] = {0};
  model->setOperandValue(param91, param91_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy90, param91}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis2_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {2, 2, 12, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy91 = model->addOperand(&type19);
  auto param92 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy91_init[] = {128};
  model->setOperandValue(dummy91, dummy91_init, sizeof(uint8_t) * 1);
  static int32_t param92_init[] = {0};
  model->setOperandValue(param92, param92_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy91, param92}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis3_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis3_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis3_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type16);
  auto dummy92 = model->addOperand(&type19);
  auto param93 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy92_init[] = {128};
  model->setOperandValue(dummy92, dummy92_init, sizeof(uint8_t) * 1);
  static int32_t param93_init[] = {0};
  model->setOperandValue(param93, param93_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy92, param93}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis3_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  auto op1_tmp = model->addOperand(&type16);
  auto dummy93 = model->addOperand(&type19);
  auto param94 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy93_init[] = {128};
  model->setOperandValue(dummy93, dummy93_init, sizeof(uint8_t) * 1);
  static int32_t param94_init[] = {0};
  model->setOperandValue(param94, param94_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy93, param94}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis3_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis3_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis3_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis3_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis3_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type16);
  auto dummy94 = model->addOperand(&type19);
  auto param95 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy94_init[] = {128};
  model->setOperandValue(dummy94, dummy94_init, sizeof(uint8_t) * 1);
  static int32_t param95_init[] = {0};
  model->setOperandValue(param95, param95_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy94, param95}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis3_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {2, 2, 3, 12}, 0.25f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type16);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type18);
  auto op1_tmp = model->addOperand(&type16);
  auto dummy95 = model->addOperand(&type19);
  auto param96 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy95_init[] = {128};
  model->setOperandValue(dummy95, dummy95_init, sizeof(uint8_t) * 1);
  static int32_t param96_init[] = {0};
  model->setOperandValue(param96, param96_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy95, param96}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {12, 2, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis0_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {12, 2, 3}, 0.25f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis0_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis0_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {12, 2, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type22);
  auto op1_tmp = model->addOperand(&type22);
  auto dummy96 = model->addOperand(&type19);
  auto param97 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy96_init[] = {128};
  model->setOperandValue(dummy96, dummy96_init, sizeof(uint8_t) * 1);
  static int32_t param97_init[] = {0};
  model->setOperandValue(param97, param97_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy96, param97}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis0_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {12, 2, 3}, 0.25f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type23);
  auto op1_tmp = model->addOperand(&type22);
  auto dummy97 = model->addOperand(&type19);
  auto param98 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy97_init[] = {128};
  model->setOperandValue(dummy97, dummy97_init, sizeof(uint8_t) * 1);
  static int32_t param98_init[] = {0};
  model->setOperandValue(param98, param98_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy97, param98}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis0_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {12, 2, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis0_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {12, 2, 3}, 0.25f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis0_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis0_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {12, 2, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type22);
  auto op1_tmp = model->addOperand(&type22);
  auto dummy98 = model->addOperand(&type19);
  auto param99 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy98_init[] = {128};
  model->setOperandValue(dummy98, dummy98_init, sizeof(uint8_t) * 1);
  static int32_t param99_init[] = {0};
  model->setOperandValue(param99, param99_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy98, param99}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis0_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {12, 2, 3}, 0.25f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type23);
  auto op1_tmp = model->addOperand(&type22);
  auto dummy99 = model->addOperand(&type19);
  auto param100 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy99_init[] = {128};
  model->setOperandValue(dummy99, dummy99_init, sizeof(uint8_t) * 1);
  static int32_t param100_init[] = {0};
  model->setOperandValue(param100, param100_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy99, param100}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {2, 12, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type24);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis1_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.25f, 128);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {2, 12, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis1_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis1_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {2, 12, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type24);
  auto op1_tmp = model->addOperand(&type24);
  auto dummy100 = model->addOperand(&type19);
  auto param101 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy100_init[] = {128};
  model->setOperandValue(dummy100, dummy100_init, sizeof(uint8_t) * 1);
  static int32_t param101_init[] = {0};
  model->setOperandValue(param101, param101_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy100, param101}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis1_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.25f, 128);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {2, 12, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type23);
  auto op1_tmp = model->addOperand(&type24);
  auto dummy101 = model->addOperand(&type19);
  auto param102 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy101_init[] = {128};
  model->setOperandValue(dummy101, dummy101_init, sizeof(uint8_t) * 1);
  static int32_t param102_init[] = {0};
  model->setOperandValue(param102, param102_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy101, param102}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis1_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {2, 12, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type24);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis1_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.25f, 128);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {2, 12, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis1_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis1_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {2, 12, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type24);
  auto op1_tmp = model->addOperand(&type24);
  auto dummy102 = model->addOperand(&type19);
  auto param103 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy102_init[] = {128};
  model->setOperandValue(dummy102, dummy102_init, sizeof(uint8_t) * 1);
  static int32_t param103_init[] = {0};
  model->setOperandValue(param103, param103_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy102, param103}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis1_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.25f, 128);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {2, 12, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type23);
  auto op1_tmp = model->addOperand(&type24);
  auto dummy103 = model->addOperand(&type19);
  auto param104 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy103_init[] = {128};
  model->setOperandValue(dummy103, dummy103_init, sizeof(uint8_t) * 1);
  static int32_t param104_init[] = {0};
  model->setOperandValue(param104, param104_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy103, param104}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {2, 3, 12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis2_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.25f, 128);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {2, 3, 12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis2_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis2_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {2, 3, 12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type25);
  auto op1_tmp = model->addOperand(&type25);
  auto dummy104 = model->addOperand(&type19);
  auto param105 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy104_init[] = {128};
  model->setOperandValue(dummy104, dummy104_init, sizeof(uint8_t) * 1);
  static int32_t param105_init[] = {0};
  model->setOperandValue(param105, param105_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy104, param105}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis2_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.25f, 128);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {2, 3, 12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type23);
  auto op1_tmp = model->addOperand(&type25);
  auto dummy105 = model->addOperand(&type19);
  auto param106 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy105_init[] = {128};
  model->setOperandValue(dummy105, dummy105_init, sizeof(uint8_t) * 1);
  static int32_t param106_init[] = {0};
  model->setOperandValue(param106, param106_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy105, param106}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {2, 3, 12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis2_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.25f, 128);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {2, 3, 12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis2_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis2_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {2, 3, 12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type25);
  auto op1_tmp = model->addOperand(&type25);
  auto dummy106 = model->addOperand(&type19);
  auto param107 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy106_init[] = {128};
  model->setOperandValue(dummy106, dummy106_init, sizeof(uint8_t) * 1);
  static int32_t param107_init[] = {0};
  model->setOperandValue(param107, param107_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy106, param107}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis2_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.25f, 128);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {2, 3, 12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type23);
  auto op1_tmp = model->addOperand(&type25);
  auto dummy107 = model->addOperand(&type19);
  auto param108 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy107_init[] = {128};
  model->setOperandValue(dummy107, dummy107_init, sizeof(uint8_t) * 1);
  static int32_t param108_init[] = {0};
  model->setOperandValue(param108, param108_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy107, param108}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim2_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {12, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim2_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim2_axis0_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {12, 3}, 0.25f, 128);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim2_axis0_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim2_axis0_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {12, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type26);
  auto op1_tmp = model->addOperand(&type26);
  auto dummy108 = model->addOperand(&type19);
  auto param109 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy108_init[] = {128};
  model->setOperandValue(dummy108, dummy108_init, sizeof(uint8_t) * 1);
  static int32_t param109_init[] = {0};
  model->setOperandValue(param109, param109_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy108, param109}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim2_axis0_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {12, 3}, 0.25f, 128);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  auto op1_tmp = model->addOperand(&type26);
  auto dummy109 = model->addOperand(&type19);
  auto param110 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy109_init[] = {128};
  model->setOperandValue(dummy109, dummy109_init, sizeof(uint8_t) * 1);
  static int32_t param110_init[] = {0};
  model->setOperandValue(param110, param110_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy109, param110}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim2_axis0_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim2_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {12, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim2_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim2_axis0_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {12, 3}, 0.25f, 128);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim2_axis0_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim2_axis0_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {12, 3}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type26);
  auto op1_tmp = model->addOperand(&type26);
  auto dummy110 = model->addOperand(&type19);
  auto param111 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy110_init[] = {128};
  model->setOperandValue(dummy110, dummy110_init, sizeof(uint8_t) * 1);
  static int32_t param111_init[] = {0};
  model->setOperandValue(param111, param111_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy110, param111}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim2_axis0_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {12, 3}, 0.25f, 128);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  auto op1_tmp = model->addOperand(&type26);
  auto dummy111 = model->addOperand(&type19);
  auto param112 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy111_init[] = {128};
  model->setOperandValue(dummy111, dummy111_init, sizeof(uint8_t) * 1);
  static int32_t param112_init[] = {0};
  model->setOperandValue(param112, param112_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy111, param112}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim2_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {3, 12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim2_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim2_axis1_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.25f, 128);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {3, 12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim2_axis1_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim2_axis1_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {3, 12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type28);
  auto op1_tmp = model->addOperand(&type28);
  auto dummy112 = model->addOperand(&type19);
  auto param113 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy112_init[] = {128};
  model->setOperandValue(dummy112, dummy112_init, sizeof(uint8_t) * 1);
  static int32_t param113_init[] = {0};
  model->setOperandValue(param113, param113_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy112, param113}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim2_axis1_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.25f, 128);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {3, 12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  auto op1_tmp = model->addOperand(&type28);
  auto dummy113 = model->addOperand(&type19);
  auto param114 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy113_init[] = {128};
  model->setOperandValue(dummy113, dummy113_init, sizeof(uint8_t) * 1);
  static int32_t param114_init[] = {0};
  model->setOperandValue(param114, param114_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy113, param114}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim2_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {3, 12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim2_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim2_axis1_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.25f, 128);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {3, 12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim2_axis1_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim2_axis1_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {3, 12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type28);
  auto op1_tmp = model->addOperand(&type28);
  auto dummy114 = model->addOperand(&type19);
  auto param115 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy114_init[] = {128};
  model->setOperandValue(dummy114, dummy114_init, sizeof(uint8_t) * 1);
  static int32_t param115_init[] = {0};
  model->setOperandValue(param115, param115_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy114, param115}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim2_axis1_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.25f, 128);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {3, 12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type27);
  auto op1_tmp = model->addOperand(&type28);
  auto dummy115 = model->addOperand(&type19);
  auto param116 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy115_init[] = {128};
  model->setOperandValue(dummy115, dummy115_init, sizeof(uint8_t) * 1);
  static int32_t param116_init[] = {0};
  model->setOperandValue(param116, param116_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy115, param116}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim1_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type29);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type29);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim1_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim1_axis0_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {12}, 0.25f, 128);
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {0}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type29);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim1_axis0_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim1_axis0_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type29);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type29);
  auto op1_tmp = model->addOperand(&type29);
  auto dummy116 = model->addOperand(&type19);
  auto param117 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy116_init[] = {128};
  model->setOperandValue(dummy116, dummy116_init, sizeof(uint8_t) * 1);
  static int32_t param117_init[] = {0};
  model->setOperandValue(param117, param117_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy116, param117}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim1_axis0_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {12}, 0.25f, 128);
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {0}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type29);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type30);
  auto op1_tmp = model->addOperand(&type29);
  auto dummy117 = model->addOperand(&type19);
  auto param118 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy117_init[] = {128};
  model->setOperandValue(dummy117, dummy117_init, sizeof(uint8_t) * 1);
  static int32_t param118_init[] = {0};
  model->setOperandValue(param118, param118_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy117, param118}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim1_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type29);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type29);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim1_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim1_axis0_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {12}, 0.25f, 128);
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {0}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type29);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim1_axis0_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim1_axis0_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {12}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type29);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type29);
  auto op1_tmp = model->addOperand(&type29);
  auto dummy118 = model->addOperand(&type19);
  auto param119 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy118_init[] = {128};
  model->setOperandValue(dummy118, dummy118_init, sizeof(uint8_t) * 1);
  static int32_t param119_init[] = {0};
  model->setOperandValue(param119, param119_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy118, param119}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim1_axis0_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {12}, 0.25f, 128);
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {0}, 0.25f, 128);
  // Phase 1, operands
  auto op1 = model->addOperand(&type29);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type30);
  auto op1_tmp = model->addOperand(&type29);
  auto dummy119 = model->addOperand(&type19);
  auto param120 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static uint8_t dummy119_init[] = {128};
  model->setOperandValue(dummy119, dummy119_init, sizeof(uint8_t) * 1);
  static int32_t param120_init[] = {0};
  model->setOperandValue(param120, param120_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy119, param120}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_quant8_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {12, 2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type32);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis0_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {12, 2, 2, 3});
  OperandType type33(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type32);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type33);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis0_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis0_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {12, 2, 2, 3});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type32);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type32);
  auto op1_tmp = model->addOperand(&type32);
  auto dummy120 = model->addOperand(&type34);
  auto param121 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy120_init[] = {0.0f};
  model->setOperandValue(dummy120, dummy120_init, sizeof(_Float16) * 1);
  static int32_t param121_init[] = {0};
  model->setOperandValue(param121, param121_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy120, param121}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis0_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {12, 2, 2, 3});
  OperandType type33(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type32);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type33);
  auto op1_tmp = model->addOperand(&type32);
  auto dummy121 = model->addOperand(&type34);
  auto param122 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy121_init[] = {0.0f};
  model->setOperandValue(dummy121, dummy121_init, sizeof(_Float16) * 1);
  static int32_t param122_init[] = {0};
  model->setOperandValue(param122, param122_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy121, param122}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis0_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {12, 2, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type32);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis0_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {12, 2, 2, 3});
  OperandType type33(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type32);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type33);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis0_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis0_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {12, 2, 2, 3});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type32);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type32);
  auto op1_tmp = model->addOperand(&type32);
  auto dummy122 = model->addOperand(&type34);
  auto param123 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy122_init[] = {0.0f};
  model->setOperandValue(dummy122, dummy122_init, sizeof(_Float16) * 1);
  static int32_t param123_init[] = {0};
  model->setOperandValue(param123, param123_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy122, param123}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis0_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {12, 2, 2, 3});
  OperandType type33(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type32);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type33);
  auto op1_tmp = model->addOperand(&type32);
  auto dummy123 = model->addOperand(&type34);
  auto param124 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-4};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy123_init[] = {0.0f};
  model->setOperandValue(dummy123, dummy123_init, sizeof(_Float16) * 1);
  static int32_t param124_init[] = {0};
  model->setOperandValue(param124, param124_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy123, param124}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type35(Type::TENSOR_FLOAT16, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type35);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis1_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type35(Type::TENSOR_FLOAT16, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type35);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type33);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis1_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis1_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type35(Type::TENSOR_FLOAT16, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type35);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type35);
  auto op1_tmp = model->addOperand(&type35);
  auto dummy124 = model->addOperand(&type34);
  auto param125 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy124_init[] = {0.0f};
  model->setOperandValue(dummy124, dummy124_init, sizeof(_Float16) * 1);
  static int32_t param125_init[] = {0};
  model->setOperandValue(param125, param125_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy124, param125}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis1_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type35(Type::TENSOR_FLOAT16, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type35);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type33);
  auto op1_tmp = model->addOperand(&type35);
  auto dummy125 = model->addOperand(&type34);
  auto param126 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy125_init[] = {0.0f};
  model->setOperandValue(dummy125, dummy125_init, sizeof(_Float16) * 1);
  static int32_t param126_init[] = {0};
  model->setOperandValue(param126, param126_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy125, param126}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis1_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type35(Type::TENSOR_FLOAT16, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type35);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis1_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type35(Type::TENSOR_FLOAT16, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type35);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type33);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis1_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis1_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type35(Type::TENSOR_FLOAT16, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type35);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type35);
  auto op1_tmp = model->addOperand(&type35);
  auto dummy126 = model->addOperand(&type34);
  auto param127 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy126_init[] = {0.0f};
  model->setOperandValue(dummy126, dummy126_init, sizeof(_Float16) * 1);
  static int32_t param127_init[] = {0};
  model->setOperandValue(param127, param127_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy126, param127}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis1_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type35(Type::TENSOR_FLOAT16, {2, 12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type35);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type33);
  auto op1_tmp = model->addOperand(&type35);
  auto dummy127 = model->addOperand(&type34);
  auto param128 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy127_init[] = {0.0f};
  model->setOperandValue(dummy127, dummy127_init, sizeof(_Float16) * 1);
  static int32_t param128_init[] = {0};
  model->setOperandValue(param128, param128_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy127, param128}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT16, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type36);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis2_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type36(Type::TENSOR_FLOAT16, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type36);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type33);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis2_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis2_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type36(Type::TENSOR_FLOAT16, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type36);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type36);
  auto op1_tmp = model->addOperand(&type36);
  auto dummy128 = model->addOperand(&type34);
  auto param129 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy128_init[] = {0.0f};
  model->setOperandValue(dummy128, dummy128_init, sizeof(_Float16) * 1);
  static int32_t param129_init[] = {0};
  model->setOperandValue(param129, param129_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy128, param129}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis2_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type36(Type::TENSOR_FLOAT16, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type36);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type33);
  auto op1_tmp = model->addOperand(&type36);
  auto dummy129 = model->addOperand(&type34);
  auto param130 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy129_init[] = {0.0f};
  model->setOperandValue(dummy129, dummy129_init, sizeof(_Float16) * 1);
  static int32_t param130_init[] = {0};
  model->setOperandValue(param130, param130_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy129, param130}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis2_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT16, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type36);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis2_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type36(Type::TENSOR_FLOAT16, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type36);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type33);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis2_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis2_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type36(Type::TENSOR_FLOAT16, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type36);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type36);
  auto op1_tmp = model->addOperand(&type36);
  auto dummy130 = model->addOperand(&type34);
  auto param131 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy130_init[] = {0.0f};
  model->setOperandValue(dummy130, dummy130_init, sizeof(_Float16) * 1);
  static int32_t param131_init[] = {0};
  model->setOperandValue(param131, param131_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy130, param131}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis2_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type36(Type::TENSOR_FLOAT16, {2, 2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type36);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type33);
  auto op1_tmp = model->addOperand(&type36);
  auto dummy131 = model->addOperand(&type34);
  auto param132 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy131_init[] = {0.0f};
  model->setOperandValue(dummy131, dummy131_init, sizeof(_Float16) * 1);
  static int32_t param132_init[] = {0};
  model->setOperandValue(param132, param132_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy131, param132}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis3(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type37(Type::TENSOR_FLOAT16, {2, 2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis3_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type37(Type::TENSOR_FLOAT16, {2, 2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type33);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis3_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis3_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type37(Type::TENSOR_FLOAT16, {2, 2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type37);
  auto op1_tmp = model->addOperand(&type37);
  auto dummy132 = model->addOperand(&type34);
  auto param133 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy132_init[] = {0.0f};
  model->setOperandValue(dummy132, dummy132_init, sizeof(_Float16) * 1);
  static int32_t param133_init[] = {0};
  model->setOperandValue(param133, param133_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy132, param133}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis3_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type37(Type::TENSOR_FLOAT16, {2, 2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type33);
  auto op1_tmp = model->addOperand(&type37);
  auto dummy133 = model->addOperand(&type34);
  auto param134 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy133_init[] = {0.0f};
  model->setOperandValue(dummy133, dummy133_init, sizeof(_Float16) * 1);
  static int32_t param134_init[] = {0};
  model->setOperandValue(param134, param134_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy133, param134}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis3_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type37(Type::TENSOR_FLOAT16, {2, 2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis3_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis3_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type37(Type::TENSOR_FLOAT16, {2, 2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type33);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis3_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis3_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type37(Type::TENSOR_FLOAT16, {2, 2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type37);
  auto op1_tmp = model->addOperand(&type37);
  auto dummy134 = model->addOperand(&type34);
  auto param135 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy134_init[] = {0.0f};
  model->setOperandValue(dummy134, dummy134_init, sizeof(_Float16) * 1);
  static int32_t param135_init[] = {0};
  model->setOperandValue(param135, param135_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy134, param135}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis3_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type37(Type::TENSOR_FLOAT16, {2, 2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type37);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type33);
  auto op1_tmp = model->addOperand(&type37);
  auto dummy135 = model->addOperand(&type34);
  auto param136 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy135_init[] = {0.0f};
  model->setOperandValue(dummy135, dummy135_init, sizeof(_Float16) * 1);
  static int32_t param136_init[] = {0};
  model->setOperandValue(param136, param136_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy135, param136}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type38(Type::TENSOR_FLOAT16, {12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type38);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type38);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis0_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type38(Type::TENSOR_FLOAT16, {12, 2, 3});
  OperandType type39(Type::TENSOR_FLOAT16, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type38);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type39);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis0_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis0_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type38(Type::TENSOR_FLOAT16, {12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type38);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type38);
  auto op1_tmp = model->addOperand(&type38);
  auto dummy136 = model->addOperand(&type34);
  auto param137 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy136_init[] = {0.0f};
  model->setOperandValue(dummy136, dummy136_init, sizeof(_Float16) * 1);
  static int32_t param137_init[] = {0};
  model->setOperandValue(param137, param137_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy136, param137}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis0_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type38(Type::TENSOR_FLOAT16, {12, 2, 3});
  OperandType type39(Type::TENSOR_FLOAT16, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type38);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type39);
  auto op1_tmp = model->addOperand(&type38);
  auto dummy137 = model->addOperand(&type34);
  auto param138 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy137_init[] = {0.0f};
  model->setOperandValue(dummy137, dummy137_init, sizeof(_Float16) * 1);
  static int32_t param138_init[] = {0};
  model->setOperandValue(param138, param138_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy137, param138}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis0_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type38(Type::TENSOR_FLOAT16, {12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type38);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type38);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis0_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type38(Type::TENSOR_FLOAT16, {12, 2, 3});
  OperandType type39(Type::TENSOR_FLOAT16, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type38);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type39);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis0_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis0_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type38(Type::TENSOR_FLOAT16, {12, 2, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type38);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type38);
  auto op1_tmp = model->addOperand(&type38);
  auto dummy138 = model->addOperand(&type34);
  auto param139 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy138_init[] = {0.0f};
  model->setOperandValue(dummy138, dummy138_init, sizeof(_Float16) * 1);
  static int32_t param139_init[] = {0};
  model->setOperandValue(param139, param139_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy138, param139}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis0_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type38(Type::TENSOR_FLOAT16, {12, 2, 3});
  OperandType type39(Type::TENSOR_FLOAT16, {0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type38);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type39);
  auto op1_tmp = model->addOperand(&type38);
  auto dummy139 = model->addOperand(&type34);
  auto param140 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-3};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy139_init[] = {0.0f};
  model->setOperandValue(dummy139, dummy139_init, sizeof(_Float16) * 1);
  static int32_t param140_init[] = {0};
  model->setOperandValue(param140, param140_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy139, param140}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT16, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type40);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis1_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type39(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type40(Type::TENSOR_FLOAT16, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type40);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type39);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis1_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis1_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type40(Type::TENSOR_FLOAT16, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type40);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type40);
  auto op1_tmp = model->addOperand(&type40);
  auto dummy140 = model->addOperand(&type34);
  auto param141 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy140_init[] = {0.0f};
  model->setOperandValue(dummy140, dummy140_init, sizeof(_Float16) * 1);
  static int32_t param141_init[] = {0};
  model->setOperandValue(param141, param141_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy140, param141}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis1_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type39(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type40(Type::TENSOR_FLOAT16, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type40);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type39);
  auto op1_tmp = model->addOperand(&type40);
  auto dummy141 = model->addOperand(&type34);
  auto param142 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy141_init[] = {0.0f};
  model->setOperandValue(dummy141, dummy141_init, sizeof(_Float16) * 1);
  static int32_t param142_init[] = {0};
  model->setOperandValue(param142, param142_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy141, param142}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis1_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT16, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type40);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis1_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type39(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type40(Type::TENSOR_FLOAT16, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type40);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type39);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis1_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis1_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type40(Type::TENSOR_FLOAT16, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type40);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type40);
  auto op1_tmp = model->addOperand(&type40);
  auto dummy142 = model->addOperand(&type34);
  auto param143 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy142_init[] = {0.0f};
  model->setOperandValue(dummy142, dummy142_init, sizeof(_Float16) * 1);
  static int32_t param143_init[] = {0};
  model->setOperandValue(param143, param143_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy142, param143}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis1_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type39(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type40(Type::TENSOR_FLOAT16, {2, 12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type40);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type39);
  auto op1_tmp = model->addOperand(&type40);
  auto dummy143 = model->addOperand(&type34);
  auto param144 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy143_init[] = {0.0f};
  model->setOperandValue(dummy143, dummy143_init, sizeof(_Float16) * 1);
  static int32_t param144_init[] = {0};
  model->setOperandValue(param144, param144_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy143, param144}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type41(Type::TENSOR_FLOAT16, {2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type41);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis2_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type39(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type41(Type::TENSOR_FLOAT16, {2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type39);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis2_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis2_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type41(Type::TENSOR_FLOAT16, {2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type41);
  auto op1_tmp = model->addOperand(&type41);
  auto dummy144 = model->addOperand(&type34);
  auto param145 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy144_init[] = {0.0f};
  model->setOperandValue(dummy144, dummy144_init, sizeof(_Float16) * 1);
  static int32_t param145_init[] = {0};
  model->setOperandValue(param145, param145_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy144, param145}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis2_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type39(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type41(Type::TENSOR_FLOAT16, {2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type39);
  auto op1_tmp = model->addOperand(&type41);
  auto dummy145 = model->addOperand(&type34);
  auto param146 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy145_init[] = {0.0f};
  model->setOperandValue(dummy145, dummy145_init, sizeof(_Float16) * 1);
  static int32_t param146_init[] = {0};
  model->setOperandValue(param146, param146_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy145, param146}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis2_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type41(Type::TENSOR_FLOAT16, {2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type41);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis2_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type39(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type41(Type::TENSOR_FLOAT16, {2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type39);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis2_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis2_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type41(Type::TENSOR_FLOAT16, {2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type41);
  auto op1_tmp = model->addOperand(&type41);
  auto dummy146 = model->addOperand(&type34);
  auto param147 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy146_init[] = {0.0f};
  model->setOperandValue(dummy146, dummy146_init, sizeof(_Float16) * 1);
  static int32_t param147_init[] = {0};
  model->setOperandValue(param147, param147_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy146, param147}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis2_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type39(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type41(Type::TENSOR_FLOAT16, {2, 3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type41);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type39);
  auto op1_tmp = model->addOperand(&type41);
  auto dummy147 = model->addOperand(&type34);
  auto param148 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy147_init[] = {0.0f};
  model->setOperandValue(dummy147, dummy147_init, sizeof(_Float16) * 1);
  static int32_t param148_init[] = {0};
  model->setOperandValue(param148, param148_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy147, param148}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim2_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT16, {12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type42);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type42);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim2_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim2_axis0_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT16, {12, 3});
  OperandType type43(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type42);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type43);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim2_axis0_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim2_axis0_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type42(Type::TENSOR_FLOAT16, {12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type42);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type42);
  auto op1_tmp = model->addOperand(&type42);
  auto dummy148 = model->addOperand(&type34);
  auto param149 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy148_init[] = {0.0f};
  model->setOperandValue(dummy148, dummy148_init, sizeof(_Float16) * 1);
  static int32_t param149_init[] = {0};
  model->setOperandValue(param149, param149_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy148, param149}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim2_axis0_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type42(Type::TENSOR_FLOAT16, {12, 3});
  OperandType type43(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type42);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type43);
  auto op1_tmp = model->addOperand(&type42);
  auto dummy149 = model->addOperand(&type34);
  auto param150 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy149_init[] = {0.0f};
  model->setOperandValue(dummy149, dummy149_init, sizeof(_Float16) * 1);
  static int32_t param150_init[] = {0};
  model->setOperandValue(param150, param150_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy149, param150}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim2_axis0_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim2_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT16, {12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type42);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type42);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim2_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim2_axis0_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT16, {12, 3});
  OperandType type43(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type42);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type43);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim2_axis0_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim2_axis0_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type42(Type::TENSOR_FLOAT16, {12, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type42);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type42);
  auto op1_tmp = model->addOperand(&type42);
  auto dummy150 = model->addOperand(&type34);
  auto param151 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy150_init[] = {0.0f};
  model->setOperandValue(dummy150, dummy150_init, sizeof(_Float16) * 1);
  static int32_t param151_init[] = {0};
  model->setOperandValue(param151, param151_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy150, param151}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim2_axis0_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type42(Type::TENSOR_FLOAT16, {12, 3});
  OperandType type43(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type42);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type43);
  auto op1_tmp = model->addOperand(&type42);
  auto dummy151 = model->addOperand(&type34);
  auto param152 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-2};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy151_init[] = {0.0f};
  model->setOperandValue(dummy151, dummy151_init, sizeof(_Float16) * 1);
  static int32_t param152_init[] = {0};
  model->setOperandValue(param152, param152_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy151, param152}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim2_axis1(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type44(Type::TENSOR_FLOAT16, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type44);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type44);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim2_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim2_axis1_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type43(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type44(Type::TENSOR_FLOAT16, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type44);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type43);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim2_axis1_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim2_axis1_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type44(Type::TENSOR_FLOAT16, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type44);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type44);
  auto op1_tmp = model->addOperand(&type44);
  auto dummy152 = model->addOperand(&type34);
  auto param153 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy152_init[] = {0.0f};
  model->setOperandValue(dummy152, dummy152_init, sizeof(_Float16) * 1);
  static int32_t param153_init[] = {0};
  model->setOperandValue(param153, param153_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy152, param153}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim2_axis1_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type43(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type44(Type::TENSOR_FLOAT16, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type44);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type43);
  auto op1_tmp = model->addOperand(&type44);
  auto dummy153 = model->addOperand(&type34);
  auto param154 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy153_init[] = {0.0f};
  model->setOperandValue(dummy153, dummy153_init, sizeof(_Float16) * 1);
  static int32_t param154_init[] = {0};
  model->setOperandValue(param154, param154_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy153, param154}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim2_axis1_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type44(Type::TENSOR_FLOAT16, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type44);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type44);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim2_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim2_axis1_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type43(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type44(Type::TENSOR_FLOAT16, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type44);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type43);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim2_axis1_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim2_axis1_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type44(Type::TENSOR_FLOAT16, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type44);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type44);
  auto op1_tmp = model->addOperand(&type44);
  auto dummy154 = model->addOperand(&type34);
  auto param155 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy154_init[] = {0.0f};
  model->setOperandValue(dummy154, dummy154_init, sizeof(_Float16) * 1);
  static int32_t param155_init[] = {0};
  model->setOperandValue(param155, param155_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy154, param155}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim2_axis1_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type43(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type44(Type::TENSOR_FLOAT16, {3, 12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type44);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type43);
  auto op1_tmp = model->addOperand(&type44);
  auto dummy155 = model->addOperand(&type34);
  auto param156 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy155_init[] = {0.0f};
  model->setOperandValue(dummy155, dummy155_init, sizeof(_Float16) * 1);
  static int32_t param156_init[] = {0};
  model->setOperandValue(param156, param156_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy155, param156}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim1_axis0(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type45(Type::TENSOR_FLOAT16, {12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type45);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim1_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim1_axis0_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type45(Type::TENSOR_FLOAT16, {12});
  OperandType type46(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim1_axis0_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim1_axis0_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type45(Type::TENSOR_FLOAT16, {12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type45);
  auto op1_tmp = model->addOperand(&type45);
  auto dummy156 = model->addOperand(&type34);
  auto param157 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy156_init[] = {0.0f};
  model->setOperandValue(dummy156, dummy156_init, sizeof(_Float16) * 1);
  static int32_t param157_init[] = {0};
  model->setOperandValue(param157, param157_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy156, param157}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim1_axis0_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type45(Type::TENSOR_FLOAT16, {12});
  OperandType type46(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type46);
  auto op1_tmp = model->addOperand(&type45);
  auto dummy157 = model->addOperand(&type34);
  auto param158 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {0};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy157_init[] = {0.0f};
  model->setOperandValue(dummy157, dummy157_init, sizeof(_Float16) * 1);
  static int32_t param158_init[] = {0};
  model->setOperandValue(param158, param158_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy157, param158}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim1_axis0_neg(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type45(Type::TENSOR_FLOAT16, {12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type45);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim1_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim1_axis0_neg_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type45(Type::TENSOR_FLOAT16, {12});
  OperandType type46(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim1_axis0_neg_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim1_axis0_neg_all_inputs_as_internal(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type45(Type::TENSOR_FLOAT16, {12});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type45);
  auto op1_tmp = model->addOperand(&type45);
  auto dummy158 = model->addOperand(&type34);
  auto param159 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy158_init[] = {0.0f};
  model->setOperandValue(dummy158, dummy158_init, sizeof(_Float16) * 1);
  static int32_t param159_init[] = {0};
  model->setOperandValue(param159, param159_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy158, param159}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim1_axis0_neg_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
namespace generated_tests::channel_shuffle {

void CreateModel_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1});
  OperandType type45(Type::TENSOR_FLOAT16, {12});
  OperandType type46(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type45);
  auto param = model->addOperand(&type1);
  auto axis = model->addOperand(&type1);
  auto op2 = model->addOperand(&type46);
  auto op1_tmp = model->addOperand(&type45);
  auto dummy159 = model->addOperand(&type34);
  auto param160 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t axis_init[] = {-1};
  model->setOperandValue(axis, axis_init, sizeof(int32_t) * 1);
  static _Float16 dummy159_init[] = {0.0f};
  model->setOperandValue(dummy159, dummy159_init, sizeof(_Float16) * 1);
  static int32_t param160_init[] = {0};
  model->setOperandValue(param160, param160_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy159, param160}, {op1});
  model->addOperation(ANEURALNETWORKS_CHANNEL_SHUFFLE, {op1, param, axis}, {op2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op2});
  assert(model->isValid());
}

bool is_ignored_float16_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::channel_shuffle
