// Generated from lsh_projection_float16.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::lsh_projection_float16 {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 2});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_FLOAT16, {3});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_INT32, {8});
  // Phase 1, operands
  auto hash = model->addOperand(&type0);
  auto lookup = model->addOperand(&type1);
  auto weight = model->addOperand(&type2);
  auto type_param = model->addOperand(&type3);
  auto output = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 hash_init[] = {0.123f, 0.456f, -0.321f, -0.654f, 1.234f, 5.678f, -4.321f, -8.765f};
  model->setOperandValue(hash, hash_init, sizeof(_Float16) * 8);
  static int32_t type_param_init[] = {2};
  model->setOperandValue(type_param, type_param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_LSH_PROJECTION, {hash, lookup, weight, type_param}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup, weight},
    {output});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::lsh_projection_float16
namespace generated_tests::lsh_projection_float16 {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 2});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_FLOAT16, {3});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_INT32, {0});
  // Phase 1, operands
  auto hash = model->addOperand(&type0);
  auto lookup = model->addOperand(&type1);
  auto weight = model->addOperand(&type2);
  auto type_param = model->addOperand(&type3);
  auto output = model->addOperand(&type5);
  // Phase 2, operations
  static _Float16 hash_init[] = {0.123f, 0.456f, -0.321f, -0.654f, 1.234f, 5.678f, -4.321f, -8.765f};
  model->setOperandValue(hash, hash_init, sizeof(_Float16) * 8);
  static int32_t type_param_init[] = {2};
  model->setOperandValue(type_param, type_param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_LSH_PROJECTION, {hash, lookup, weight, type_param}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup, weight},
    {output});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::lsh_projection_float16
namespace generated_tests::lsh_projection_float16 {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 2});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_FLOAT16, {3});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_INT32, {8});
  OperandType type6(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto hash = model->addOperand(&type0);
  auto lookup = model->addOperand(&type1);
  auto weight = model->addOperand(&type2);
  auto type_param = model->addOperand(&type3);
  auto output = model->addOperand(&type4);
  auto weight_tmp = model->addOperand(&type2);
  auto dummy = model->addOperand(&type6);
  auto param = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 hash_init[] = {0.123f, 0.456f, -0.321f, -0.654f, 1.234f, 5.678f, -4.321f, -8.765f};
  model->setOperandValue(hash, hash_init, sizeof(_Float16) * 8);
  static int32_t type_param_init[] = {2};
  model->setOperandValue(type_param, type_param_init, sizeof(int32_t) * 1);
  static _Float16 dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(_Float16) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {weight_tmp, dummy, param}, {weight});
  model->addOperation(ANEURALNETWORKS_LSH_PROJECTION, {hash, lookup, weight, type_param}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup, weight_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::lsh_projection_float16
namespace generated_tests::lsh_projection_float16 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 2});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_FLOAT16, {3});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_INT32, {0});
  OperandType type6(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto hash = model->addOperand(&type0);
  auto lookup = model->addOperand(&type1);
  auto weight = model->addOperand(&type2);
  auto type_param = model->addOperand(&type3);
  auto output = model->addOperand(&type5);
  auto weight_tmp = model->addOperand(&type2);
  auto dummy1 = model->addOperand(&type6);
  auto param1 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 hash_init[] = {0.123f, 0.456f, -0.321f, -0.654f, 1.234f, 5.678f, -4.321f, -8.765f};
  model->setOperandValue(hash, hash_init, sizeof(_Float16) * 8);
  static int32_t type_param_init[] = {2};
  model->setOperandValue(type_param, type_param_init, sizeof(int32_t) * 1);
  static _Float16 dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(_Float16) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {weight_tmp, dummy1, param1}, {weight});
  model->addOperation(ANEURALNETWORKS_LSH_PROJECTION, {hash, lookup, weight, type_param}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup, weight_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::lsh_projection_float16
namespace generated_tests::lsh_projection_float16 {

void CreateModel_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 2});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_FLOAT16, {3});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_INT32, {8});
  // Phase 1, operands
  auto hash = model->addOperand(&type0);
  auto lookup = model->addOperand(&type1);
  auto weight = model->addOperand(&type2);
  auto type_param = model->addOperand(&type3);
  auto output = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t type_param_init[] = {2};
  model->setOperandValue(type_param, type_param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_LSH_PROJECTION, {hash, lookup, weight, type_param}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {hash, lookup, weight},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::lsh_projection_float16
namespace generated_tests::lsh_projection_float16 {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 2});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_FLOAT16, {3});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_INT32, {0});
  // Phase 1, operands
  auto hash = model->addOperand(&type0);
  auto lookup = model->addOperand(&type1);
  auto weight = model->addOperand(&type2);
  auto type_param = model->addOperand(&type3);
  auto output = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t type_param_init[] = {2};
  model->setOperandValue(type_param, type_param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_LSH_PROJECTION, {hash, lookup, weight, type_param}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {hash, lookup, weight},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::lsh_projection_float16
namespace generated_tests::lsh_projection_float16 {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 2});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_FLOAT16, {3});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_INT32, {8});
  OperandType type6(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto hash = model->addOperand(&type0);
  auto lookup = model->addOperand(&type1);
  auto weight = model->addOperand(&type2);
  auto type_param = model->addOperand(&type3);
  auto output = model->addOperand(&type4);
  auto hash_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type6);
  auto param2 = model->addOperand(&type3);
  auto weight_tmp = model->addOperand(&type2);
  auto dummy3 = model->addOperand(&type6);
  auto param3 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t type_param_init[] = {2};
  model->setOperandValue(type_param, type_param_init, sizeof(int32_t) * 1);
  static _Float16 dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(_Float16) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {hash_tmp, dummy2, param2}, {hash});
  model->addOperation(ANEURALNETWORKS_ADD, {weight_tmp, dummy3, param3}, {weight});
  model->addOperation(ANEURALNETWORKS_LSH_PROJECTION, {hash, lookup, weight, type_param}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup, hash_tmp, weight_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::lsh_projection_float16
namespace generated_tests::lsh_projection_float16 {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 2});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_FLOAT16, {3});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_INT32, {0});
  OperandType type6(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto hash = model->addOperand(&type0);
  auto lookup = model->addOperand(&type1);
  auto weight = model->addOperand(&type2);
  auto type_param = model->addOperand(&type3);
  auto output = model->addOperand(&type5);
  auto hash_tmp = model->addOperand(&type0);
  auto dummy4 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type3);
  auto weight_tmp = model->addOperand(&type2);
  auto dummy5 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t type_param_init[] = {2};
  model->setOperandValue(type_param, type_param_init, sizeof(int32_t) * 1);
  static _Float16 dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(_Float16) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static _Float16 dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(_Float16) * 1);
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {hash_tmp, dummy4, param4}, {hash});
  model->addOperation(ANEURALNETWORKS_ADD, {weight_tmp, dummy5, param5}, {weight});
  model->addOperation(ANEURALNETWORKS_LSH_PROJECTION, {hash, lookup, weight, type_param}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup, hash_tmp, weight_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::lsh_projection_float16
namespace generated_tests::lsh_projection_float16 {

void CreateModel_float16(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 2});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_FLOAT16, {3});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_INT32, {8});
  // Phase 1, operands
  auto hash = model->addOperand(&type0);
  auto lookup = model->addOperand(&type1);
  auto weight = model->addOperand(&type2);
  auto type_param = model->addOperand(&type3);
  auto output = model->addOperand(&type4);
  // Phase 2, operations
  static _Float16 hash_init[] = {0.123f, 0.456f, -0.321f, -0.654f, 1.234f, 5.678f, -4.321f, -8.765f};
  model->setOperandValue(hash, hash_init, sizeof(_Float16) * 8);
  static int32_t type_param_init[] = {2};
  model->setOperandValue(type_param, type_param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_LSH_PROJECTION, {hash, lookup, weight, type_param}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup, weight},
    {output});
  assert(model->isValid());
}

bool is_ignored_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::lsh_projection_float16
namespace generated_tests::lsh_projection_float16 {

void CreateModel_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 2});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_FLOAT16, {3});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_INT32, {0});
  // Phase 1, operands
  auto hash = model->addOperand(&type0);
  auto lookup = model->addOperand(&type1);
  auto weight = model->addOperand(&type2);
  auto type_param = model->addOperand(&type3);
  auto output = model->addOperand(&type5);
  // Phase 2, operations
  static _Float16 hash_init[] = {0.123f, 0.456f, -0.321f, -0.654f, 1.234f, 5.678f, -4.321f, -8.765f};
  model->setOperandValue(hash, hash_init, sizeof(_Float16) * 8);
  static int32_t type_param_init[] = {2};
  model->setOperandValue(type_param, type_param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_LSH_PROJECTION, {hash, lookup, weight, type_param}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup, weight},
    {output});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::lsh_projection_float16
namespace generated_tests::lsh_projection_float16 {

void CreateModel_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 2});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_FLOAT16, {3});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_INT32, {8});
  OperandType type6(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto hash = model->addOperand(&type0);
  auto lookup = model->addOperand(&type1);
  auto weight = model->addOperand(&type2);
  auto type_param = model->addOperand(&type3);
  auto output = model->addOperand(&type4);
  auto weight_tmp = model->addOperand(&type2);
  auto dummy6 = model->addOperand(&type6);
  auto param6 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 hash_init[] = {0.123f, 0.456f, -0.321f, -0.654f, 1.234f, 5.678f, -4.321f, -8.765f};
  model->setOperandValue(hash, hash_init, sizeof(_Float16) * 8);
  static int32_t type_param_init[] = {2};
  model->setOperandValue(type_param, type_param_init, sizeof(int32_t) * 1);
  static _Float16 dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(_Float16) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {weight_tmp, dummy6, param6}, {weight});
  model->addOperation(ANEURALNETWORKS_LSH_PROJECTION, {hash, lookup, weight, type_param}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup, weight_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::lsh_projection_float16
namespace generated_tests::lsh_projection_float16 {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 2});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_FLOAT16, {3});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_INT32, {0});
  OperandType type6(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto hash = model->addOperand(&type0);
  auto lookup = model->addOperand(&type1);
  auto weight = model->addOperand(&type2);
  auto type_param = model->addOperand(&type3);
  auto output = model->addOperand(&type5);
  auto weight_tmp = model->addOperand(&type2);
  auto dummy7 = model->addOperand(&type6);
  auto param7 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 hash_init[] = {0.123f, 0.456f, -0.321f, -0.654f, 1.234f, 5.678f, -4.321f, -8.765f};
  model->setOperandValue(hash, hash_init, sizeof(_Float16) * 8);
  static int32_t type_param_init[] = {2};
  model->setOperandValue(type_param, type_param_init, sizeof(int32_t) * 1);
  static _Float16 dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(_Float16) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {weight_tmp, dummy7, param7}, {weight});
  model->addOperation(ANEURALNETWORKS_LSH_PROJECTION, {hash, lookup, weight, type_param}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup, weight_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::lsh_projection_float16
namespace generated_tests::lsh_projection_float16 {

void CreateModel_float16_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 2});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_FLOAT16, {3});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_INT32, {8});
  // Phase 1, operands
  auto hash = model->addOperand(&type0);
  auto lookup = model->addOperand(&type1);
  auto weight = model->addOperand(&type2);
  auto type_param = model->addOperand(&type3);
  auto output = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t type_param_init[] = {2};
  model->setOperandValue(type_param, type_param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_LSH_PROJECTION, {hash, lookup, weight, type_param}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {hash, lookup, weight},
    {output});
  assert(model->isValid());
}

bool is_ignored_float16_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::lsh_projection_float16
namespace generated_tests::lsh_projection_float16 {

void CreateModel_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 2});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_FLOAT16, {3});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_INT32, {0});
  // Phase 1, operands
  auto hash = model->addOperand(&type0);
  auto lookup = model->addOperand(&type1);
  auto weight = model->addOperand(&type2);
  auto type_param = model->addOperand(&type3);
  auto output = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t type_param_init[] = {2};
  model->setOperandValue(type_param, type_param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_LSH_PROJECTION, {hash, lookup, weight, type_param}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {hash, lookup, weight},
    {output});
  assert(model->isValid());
}

bool is_ignored_float16_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::lsh_projection_float16
namespace generated_tests::lsh_projection_float16 {

void CreateModel_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 2});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_FLOAT16, {3});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_INT32, {8});
  OperandType type6(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto hash = model->addOperand(&type0);
  auto lookup = model->addOperand(&type1);
  auto weight = model->addOperand(&type2);
  auto type_param = model->addOperand(&type3);
  auto output = model->addOperand(&type4);
  auto hash_tmp = model->addOperand(&type0);
  auto dummy8 = model->addOperand(&type6);
  auto param8 = model->addOperand(&type3);
  auto weight_tmp = model->addOperand(&type2);
  auto dummy9 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t type_param_init[] = {2};
  model->setOperandValue(type_param, type_param_init, sizeof(int32_t) * 1);
  static _Float16 dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(_Float16) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(_Float16) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {hash_tmp, dummy8, param8}, {hash});
  model->addOperation(ANEURALNETWORKS_ADD, {weight_tmp, dummy9, param9}, {weight});
  model->addOperation(ANEURALNETWORKS_LSH_PROJECTION, {hash, lookup, weight, type_param}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup, hash_tmp, weight_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_float16_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::lsh_projection_float16
namespace generated_tests::lsh_projection_float16 {

void CreateModel_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {4, 2});
  OperandType type1(Type::TENSOR_INT32, {3, 2});
  OperandType type2(Type::TENSOR_FLOAT16, {3});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_INT32, {0});
  OperandType type6(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto hash = model->addOperand(&type0);
  auto lookup = model->addOperand(&type1);
  auto weight = model->addOperand(&type2);
  auto type_param = model->addOperand(&type3);
  auto output = model->addOperand(&type5);
  auto hash_tmp = model->addOperand(&type0);
  auto dummy10 = model->addOperand(&type6);
  auto param10 = model->addOperand(&type3);
  auto weight_tmp = model->addOperand(&type2);
  auto dummy11 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t type_param_init[] = {2};
  model->setOperandValue(type_param, type_param_init, sizeof(int32_t) * 1);
  static _Float16 dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(_Float16) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static _Float16 dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(_Float16) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {hash_tmp, dummy10, param10}, {hash});
  model->addOperation(ANEURALNETWORKS_ADD, {weight_tmp, dummy11, param11}, {weight});
  model->addOperation(ANEURALNETWORKS_LSH_PROJECTION, {hash, lookup, weight, type_param}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {lookup, hash_tmp, weight_tmp},
    {output});
  assert(model->isValid());
}

bool is_ignored_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::lsh_projection_float16
