// Generated from cast.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::cast {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output0});
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

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type8(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type8);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output0});
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

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type0);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type9);
  auto param = model->addOperand(&type10);
  // Phase 2, operations
  static _Float16 dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(_Float16) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy, param}, {input0});
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output0});
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

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type9(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type8);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type9);
  auto param1 = model->addOperand(&type10);
  // Phase 2, operations
  static _Float16 dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(_Float16) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy1, param1}, {input0});
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output0});
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

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output01 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output01});
  assert(model->isValid());
}

bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output01 = model->addOperand(&type11);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output01});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output01 = model->addOperand(&type1);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type9);
  auto param2 = model->addOperand(&type10);
  // Phase 2, operations
  static _Float16 dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy2, param2}, {input0});
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type9(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output01 = model->addOperand(&type11);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type10);
  // Phase 2, operations
  static _Float16 dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(_Float16) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy3, param3}, {input0});
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output01 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output01 = model->addOperand(&type11);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output01 = model->addOperand(&type1);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy4 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type10);
  // Phase 2, operations
  static _Float16 dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(_Float16) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy4, param4}, {input0});
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type9(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output01 = model->addOperand(&type11);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy5 = model->addOperand(&type9);
  auto param5 = model->addOperand(&type10);
  // Phase 2, operations
  static _Float16 dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(_Float16) * 1);
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy5, param5}, {input0});
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type2(Type::TENSOR_INT32, {2, 3});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output02 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output02});
  assert(model->isValid());
}

bool is_ignored_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output02 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output02});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 3});
  OperandType type9(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output02 = model->addOperand(&type2);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy6 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type10);
  // Phase 2, operations
  static _Float16 dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(_Float16) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy6, param6}, {input0});
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output02});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type9(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output02 = model->addOperand(&type12);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy7 = model->addOperand(&type9);
  auto param7 = model->addOperand(&type10);
  // Phase 2, operations
  static _Float16 dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(_Float16) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy7, param7}, {input0});
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output02});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output03 = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output03});
  assert(model->isValid());
}

bool is_ignored_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 4.0f, 100);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output03 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output03});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  OperandType type9(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output03 = model->addOperand(&type3);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy8 = model->addOperand(&type9);
  auto param8 = model->addOperand(&type10);
  // Phase 2, operations
  static _Float16 dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(_Float16) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy8, param8}, {input0});
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output03});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 4.0f, 100);
  OperandType type9(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output03 = model->addOperand(&type13);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy9 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type10);
  // Phase 2, operations
  static _Float16 dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(_Float16) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy9, param9}, {input0});
  model->addOperation(ANEURALNETWORKS_CAST, {input0}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp},
    {output03});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_5(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output0});
  assert(model->isValid());
}

bool is_ignored_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_dynamic_output_shape_5(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type8(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output0 = model->addOperand(&type8);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output0});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output0 = model->addOperand(&type0);
  auto input01_tmp = model->addOperand(&type1);
  auto dummy10 = model->addOperand(&type14);
  auto param10 = model->addOperand(&type10);
  // Phase 2, operations
  static float dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(float) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy10, param10}, {input01});
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output0 = model->addOperand(&type8);
  auto input01_tmp = model->addOperand(&type1);
  auto dummy11 = model->addOperand(&type14);
  auto param11 = model->addOperand(&type10);
  // Phase 2, operations
  static float dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(float) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy11, param11}, {input01});
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type8(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output0 = model->addOperand(&type8);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output0 = model->addOperand(&type0);
  auto input01_tmp = model->addOperand(&type1);
  auto dummy12 = model->addOperand(&type14);
  auto param12 = model->addOperand(&type10);
  // Phase 2, operations
  static float dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(float) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy12, param12}, {input01});
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output0 = model->addOperand(&type8);
  auto input01_tmp = model->addOperand(&type1);
  auto dummy13 = model->addOperand(&type14);
  auto param13 = model->addOperand(&type10);
  // Phase 2, operations
  static float dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(float) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy13, param13}, {input01});
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_6(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

bool is_ignored_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_dynamic_output_shape_6(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type11);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_6(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type1);
  auto input01_tmp = model->addOperand(&type1);
  auto dummy14 = model->addOperand(&type14);
  auto param14 = model->addOperand(&type10);
  // Phase 2, operations
  static float dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(float) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy14, param14}, {input01});
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type11);
  auto input01_tmp = model->addOperand(&type1);
  auto dummy15 = model->addOperand(&type14);
  auto param15 = model->addOperand(&type10);
  // Phase 2, operations
  static float dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(float) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy15, param15}, {input01});
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_3(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type11);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type1);
  auto input01_tmp = model->addOperand(&type1);
  auto dummy16 = model->addOperand(&type14);
  auto param16 = model->addOperand(&type10);
  // Phase 2, operations
  static float dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(float) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy16, param16}, {input01});
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type11);
  auto input01_tmp = model->addOperand(&type1);
  auto dummy17 = model->addOperand(&type14);
  auto param17 = model->addOperand(&type10);
  // Phase 2, operations
  static float dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(float) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy17, param17}, {input01});
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_7(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type2(Type::TENSOR_INT32, {2, 3});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output02 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output02});
  assert(model->isValid());
}

bool is_ignored_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_dynamic_output_shape_7(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output02 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output02});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_7(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 3});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output02 = model->addOperand(&type2);
  auto input01_tmp = model->addOperand(&type1);
  auto dummy18 = model->addOperand(&type14);
  auto param18 = model->addOperand(&type10);
  // Phase 2, operations
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy18, param18}, {input01});
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output02});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output02 = model->addOperand(&type12);
  auto input01_tmp = model->addOperand(&type1);
  auto dummy19 = model->addOperand(&type14);
  auto param19 = model->addOperand(&type10);
  // Phase 2, operations
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy19, param19}, {input01});
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output02});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_4(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type2(Type::TENSOR_INT32, {2, 3});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output02 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output02});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_dynamic_output_shape_4(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output02 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output02});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_all_inputs_as_internal_4(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 3});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output02 = model->addOperand(&type2);
  auto input01_tmp = model->addOperand(&type1);
  auto dummy20 = model->addOperand(&type14);
  auto param20 = model->addOperand(&type10);
  // Phase 2, operations
  static float dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(float) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy20, param20}, {input01});
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output02});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output02 = model->addOperand(&type12);
  auto input01_tmp = model->addOperand(&type1);
  auto dummy21 = model->addOperand(&type14);
  auto param21 = model->addOperand(&type10);
  // Phase 2, operations
  static float dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(float) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy21, param21}, {input01});
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output02});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_8(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output03 = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output03});
  assert(model->isValid());
}

bool is_ignored_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_dynamic_output_shape_8(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 4.0f, 100);
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output03 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output03});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_8(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output03 = model->addOperand(&type3);
  auto input01_tmp = model->addOperand(&type1);
  auto dummy22 = model->addOperand(&type14);
  auto param22 = model->addOperand(&type10);
  // Phase 2, operations
  static float dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(float) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy22, param22}, {input01});
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output03});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 4.0f, 100);
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output03 = model->addOperand(&type13);
  auto input01_tmp = model->addOperand(&type1);
  auto dummy23 = model->addOperand(&type14);
  auto param23 = model->addOperand(&type10);
  // Phase 2, operations
  static float dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(float) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy23, param23}, {input01});
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output03});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_5(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output03 = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output03});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_dynamic_output_shape_5(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 4.0f, 100);
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output03 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output03});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_all_inputs_as_internal_5(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output03 = model->addOperand(&type3);
  auto input01_tmp = model->addOperand(&type1);
  auto dummy24 = model->addOperand(&type14);
  auto param24 = model->addOperand(&type10);
  // Phase 2, operations
  static float dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(float) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy24, param24}, {input01});
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output03});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 4.0f, 100);
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto input01 = model->addOperand(&type1);
  auto output03 = model->addOperand(&type13);
  auto input01_tmp = model->addOperand(&type1);
  auto dummy25 = model->addOperand(&type14);
  auto param25 = model->addOperand(&type10);
  // Phase 2, operations
  static float dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(float) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy25, param25}, {input01});
  model->addOperation(ANEURALNETWORKS_CAST, {input01}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01_tmp},
    {output03});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_9(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type2(Type::TENSOR_INT32, {2, 3});
  // Phase 1, operands
  auto input02 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input02}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output0});
  assert(model->isValid());
}

bool is_ignored_9(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_dynamic_output_shape_9(Model *model) {
  OperandType type2(Type::TENSOR_INT32, {2, 3});
  OperandType type8(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input02 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type8);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input02}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output0});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_9(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_10(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type2(Type::TENSOR_INT32, {2, 3});
  // Phase 1, operands
  auto input02 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input02}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output01});
  assert(model->isValid());
}

bool is_ignored_10(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_dynamic_output_shape_10(Model *model) {
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 3});
  // Phase 1, operands
  auto input02 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type11);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input02}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output01});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_10(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_6(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type2(Type::TENSOR_INT32, {2, 3});
  // Phase 1, operands
  auto input02 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input02}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_dynamic_output_shape_6(Model *model) {
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 3});
  // Phase 1, operands
  auto input02 = model->addOperand(&type2);
  auto output01 = model->addOperand(&type11);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input02}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_11(Model *model) {
  OperandType type2(Type::TENSOR_INT32, {2, 3});
  // Phase 1, operands
  auto input02 = model->addOperand(&type2);
  auto output02 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input02}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

bool is_ignored_11(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_dynamic_output_shape_11(Model *model) {
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 3});
  // Phase 1, operands
  auto input02 = model->addOperand(&type2);
  auto output02 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input02}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_11(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_12(Model *model) {
  OperandType type2(Type::TENSOR_INT32, {2, 3});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input02 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input02}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output03});
  assert(model->isValid());
}

bool is_ignored_12(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_dynamic_output_shape_12(Model *model) {
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 4.0f, 100);
  OperandType type2(Type::TENSOR_INT32, {2, 3});
  // Phase 1, operands
  auto input02 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input02}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output03});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_12(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_13(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input03 = model->addOperand(&type3);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input03}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output0});
  assert(model->isValid());
}

bool is_ignored_13(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_dynamic_output_shape_13(Model *model) {
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  OperandType type8(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input03 = model->addOperand(&type3);
  auto output0 = model->addOperand(&type8);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input03}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output0});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_13(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_9(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1}, 4.0f, 100);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input03 = model->addOperand(&type3);
  auto output0 = model->addOperand(&type0);
  auto input03_tmp = model->addOperand(&type3);
  auto dummy26 = model->addOperand(&type15);
  auto param26 = model->addOperand(&type10);
  // Phase 2, operations
  static uint8_t dummy26_init[] = {100};
  model->setOperandValue(dummy26, dummy26_init, sizeof(uint8_t) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy26, param26}, {input03});
  model->addOperation(ANEURALNETWORKS_CAST, {input03}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_9(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_9(Model *model) {
  OperandType type10(Type::INT32, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1}, 4.0f, 100);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  OperandType type8(Type::TENSOR_FLOAT16, {0, 0});
  // Phase 1, operands
  auto input03 = model->addOperand(&type3);
  auto output0 = model->addOperand(&type8);
  auto input03_tmp = model->addOperand(&type3);
  auto dummy27 = model->addOperand(&type15);
  auto param27 = model->addOperand(&type10);
  // Phase 2, operations
  static uint8_t dummy27_init[] = {100};
  model->setOperandValue(dummy27, dummy27_init, sizeof(uint8_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy27, param27}, {input03});
  model->addOperation(ANEURALNETWORKS_CAST, {input03}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_9(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_14(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input03 = model->addOperand(&type3);
  auto output01 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input03}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output01});
  assert(model->isValid());
}

bool is_ignored_14(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_dynamic_output_shape_14(Model *model) {
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input03 = model->addOperand(&type3);
  auto output01 = model->addOperand(&type11);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input03}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output01});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_14(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_10(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1}, 4.0f, 100);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input03 = model->addOperand(&type3);
  auto output01 = model->addOperand(&type1);
  auto input03_tmp = model->addOperand(&type3);
  auto dummy28 = model->addOperand(&type15);
  auto param28 = model->addOperand(&type10);
  // Phase 2, operations
  static uint8_t dummy28_init[] = {100};
  model->setOperandValue(dummy28, dummy28_init, sizeof(uint8_t) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy28, param28}, {input03});
  model->addOperation(ANEURALNETWORKS_CAST, {input03}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_10(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_10(Model *model) {
  OperandType type10(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1}, 4.0f, 100);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input03 = model->addOperand(&type3);
  auto output01 = model->addOperand(&type11);
  auto input03_tmp = model->addOperand(&type3);
  auto dummy29 = model->addOperand(&type15);
  auto param29 = model->addOperand(&type10);
  // Phase 2, operations
  static uint8_t dummy29_init[] = {100};
  model->setOperandValue(dummy29, dummy29_init, sizeof(uint8_t) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy29, param29}, {input03});
  model->addOperation(ANEURALNETWORKS_CAST, {input03}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03_tmp},
    {output01});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_10(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_7(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input03 = model->addOperand(&type3);
  auto output01 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input03}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_dynamic_output_shape_7(Model *model) {
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input03 = model->addOperand(&type3);
  auto output01 = model->addOperand(&type11);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input03}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_all_inputs_as_internal_6(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT32, {2, 3});
  OperandType type10(Type::INT32, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1}, 4.0f, 100);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input03 = model->addOperand(&type3);
  auto output01 = model->addOperand(&type1);
  auto input03_tmp = model->addOperand(&type3);
  auto dummy30 = model->addOperand(&type15);
  auto param30 = model->addOperand(&type10);
  // Phase 2, operations
  static uint8_t dummy30_init[] = {100};
  model->setOperandValue(dummy30, dummy30_init, sizeof(uint8_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy30, param30}, {input03});
  model->addOperation(ANEURALNETWORKS_CAST, {input03}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03_tmp},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type10(Type::INT32, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1}, 4.0f, 100);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input03 = model->addOperand(&type3);
  auto output01 = model->addOperand(&type11);
  auto input03_tmp = model->addOperand(&type3);
  auto dummy31 = model->addOperand(&type15);
  auto param31 = model->addOperand(&type10);
  // Phase 2, operations
  static uint8_t dummy31_init[] = {100};
  model->setOperandValue(dummy31, dummy31_init, sizeof(uint8_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy31, param31}, {input03});
  model->addOperation(ANEURALNETWORKS_CAST, {input03}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03_tmp},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_15(Model *model) {
  OperandType type2(Type::TENSOR_INT32, {2, 3});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input03 = model->addOperand(&type3);
  auto output02 = model->addOperand(&type2);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input03}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output02});
  assert(model->isValid());
}

bool is_ignored_15(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_dynamic_output_shape_15(Model *model) {
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input03 = model->addOperand(&type3);
  auto output02 = model->addOperand(&type12);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input03}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output02});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_15(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_11(Model *model) {
  OperandType type10(Type::INT32, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1}, 4.0f, 100);
  OperandType type2(Type::TENSOR_INT32, {2, 3});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input03 = model->addOperand(&type3);
  auto output02 = model->addOperand(&type2);
  auto input03_tmp = model->addOperand(&type3);
  auto dummy32 = model->addOperand(&type15);
  auto param32 = model->addOperand(&type10);
  // Phase 2, operations
  static uint8_t dummy32_init[] = {100};
  model->setOperandValue(dummy32, dummy32_init, sizeof(uint8_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy32, param32}, {input03});
  model->addOperation(ANEURALNETWORKS_CAST, {input03}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03_tmp},
    {output02});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_11(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_11(Model *model) {
  OperandType type10(Type::INT32, {});
  OperandType type12(Type::TENSOR_INT32, {0, 0});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1}, 4.0f, 100);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input03 = model->addOperand(&type3);
  auto output02 = model->addOperand(&type12);
  auto input03_tmp = model->addOperand(&type3);
  auto dummy33 = model->addOperand(&type15);
  auto param33 = model->addOperand(&type10);
  // Phase 2, operations
  static uint8_t dummy33_init[] = {100};
  model->setOperandValue(dummy33, dummy33_init, sizeof(uint8_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy33, param33}, {input03});
  model->addOperation(ANEURALNETWORKS_CAST, {input03}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03_tmp},
    {output02});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_11(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_16(Model *model) {
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input03 = model->addOperand(&type3);
  auto output03 = model->addOperand(&type3);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input03}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

bool is_ignored_16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_dynamic_output_shape_16(Model *model) {
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 4.0f, 100);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input03 = model->addOperand(&type3);
  auto output03 = model->addOperand(&type13);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input03}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_12(Model *model) {
  OperandType type10(Type::INT32, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1}, 4.0f, 100);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input03 = model->addOperand(&type3);
  auto output03 = model->addOperand(&type3);
  auto input03_tmp = model->addOperand(&type3);
  auto dummy34 = model->addOperand(&type15);
  auto param34 = model->addOperand(&type10);
  // Phase 2, operations
  static uint8_t dummy34_init[] = {100};
  model->setOperandValue(dummy34, dummy34_init, sizeof(uint8_t) * 1);
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy34, param34}, {input03});
  model->addOperation(ANEURALNETWORKS_CAST, {input03}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03_tmp},
    {output03});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_12(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_12(Model *model) {
  OperandType type10(Type::INT32, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 4.0f, 100);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1}, 4.0f, 100);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 3}, 4.0f, 100);
  // Phase 1, operands
  auto input03 = model->addOperand(&type3);
  auto output03 = model->addOperand(&type13);
  auto input03_tmp = model->addOperand(&type3);
  auto dummy35 = model->addOperand(&type15);
  auto param35 = model->addOperand(&type10);
  // Phase 2, operations
  static uint8_t dummy35_init[] = {100};
  model->setOperandValue(dummy35, dummy35_init, sizeof(uint8_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy35, param35}, {input03});
  model->addOperation(ANEURALNETWORKS_CAST, {input03}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03_tmp},
    {output03});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_12(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_17(Model *model) {
  OperandType type4(Type::TENSOR_FLOAT16, {2});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {2}, 4.0f, 100);
  // Phase 1, operands
  auto input04 = model->addOperand(&type4);
  auto output04 = model->addOperand(&type7);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input04}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  assert(model->isValid());
}

bool is_ignored_17(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_dynamic_output_shape_17(Model *model) {
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {0}, 4.0f, 100);
  OperandType type4(Type::TENSOR_FLOAT16, {2});
  // Phase 1, operands
  auto input04 = model->addOperand(&type4);
  auto output04 = model->addOperand(&type16);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input04}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_17(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_13(Model *model) {
  OperandType type10(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT16, {2});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {2}, 4.0f, 100);
  OperandType type9(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto input04 = model->addOperand(&type4);
  auto output04 = model->addOperand(&type7);
  auto input04_tmp = model->addOperand(&type4);
  auto dummy36 = model->addOperand(&type9);
  auto param36 = model->addOperand(&type10);
  // Phase 2, operations
  static _Float16 dummy36_init[] = {0.0f};
  model->setOperandValue(dummy36, dummy36_init, sizeof(_Float16) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input04_tmp, dummy36, param36}, {input04});
  model->addOperation(ANEURALNETWORKS_CAST, {input04}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04_tmp},
    {output04});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_13(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_13(Model *model) {
  OperandType type10(Type::INT32, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {0}, 4.0f, 100);
  OperandType type4(Type::TENSOR_FLOAT16, {2});
  OperandType type9(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto input04 = model->addOperand(&type4);
  auto output04 = model->addOperand(&type16);
  auto input04_tmp = model->addOperand(&type4);
  auto dummy37 = model->addOperand(&type9);
  auto param37 = model->addOperand(&type10);
  // Phase 2, operations
  static _Float16 dummy37_init[] = {0.0f};
  model->setOperandValue(dummy37, dummy37_init, sizeof(_Float16) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input04_tmp, dummy37, param37}, {input04});
  model->addOperation(ANEURALNETWORKS_CAST, {input04}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04_tmp},
    {output04});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_13(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_18(Model *model) {
  OperandType type5(Type::TENSOR_FLOAT32, {2});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {2}, 4.0f, 100);
  // Phase 1, operands
  auto input05 = model->addOperand(&type5);
  auto output05 = model->addOperand(&type7);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  assert(model->isValid());
}

bool is_ignored_18(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_dynamic_output_shape_18(Model *model) {
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {0}, 4.0f, 100);
  OperandType type5(Type::TENSOR_FLOAT32, {2});
  // Phase 1, operands
  auto input05 = model->addOperand(&type5);
  auto output05 = model->addOperand(&type16);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_18(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_14(Model *model) {
  OperandType type10(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {2});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {2}, 4.0f, 100);
  // Phase 1, operands
  auto input05 = model->addOperand(&type5);
  auto output05 = model->addOperand(&type7);
  auto input05_tmp = model->addOperand(&type5);
  auto dummy38 = model->addOperand(&type14);
  auto param38 = model->addOperand(&type10);
  // Phase 2, operations
  static float dummy38_init[] = {0.0f};
  model->setOperandValue(dummy38, dummy38_init, sizeof(float) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input05_tmp, dummy38, param38}, {input05});
  model->addOperation(ANEURALNETWORKS_CAST, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05_tmp},
    {output05});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_14(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_14(Model *model) {
  OperandType type10(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {0}, 4.0f, 100);
  OperandType type5(Type::TENSOR_FLOAT32, {2});
  // Phase 1, operands
  auto input05 = model->addOperand(&type5);
  auto output05 = model->addOperand(&type16);
  auto input05_tmp = model->addOperand(&type5);
  auto dummy39 = model->addOperand(&type14);
  auto param39 = model->addOperand(&type10);
  // Phase 2, operations
  static float dummy39_init[] = {0.0f};
  model->setOperandValue(dummy39, dummy39_init, sizeof(float) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input05_tmp, dummy39, param39}, {input05});
  model->addOperation(ANEURALNETWORKS_CAST, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05_tmp},
    {output05});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_14(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_8(Model *model) {
  OperandType type5(Type::TENSOR_FLOAT32, {2});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {2}, 4.0f, 100);
  // Phase 1, operands
  auto input05 = model->addOperand(&type5);
  auto output05 = model->addOperand(&type7);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_dynamic_output_shape_8(Model *model) {
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {0}, 4.0f, 100);
  OperandType type5(Type::TENSOR_FLOAT32, {2});
  // Phase 1, operands
  auto input05 = model->addOperand(&type5);
  auto output05 = model->addOperand(&type16);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_all_inputs_as_internal_7(Model *model) {
  OperandType type10(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {2});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {2}, 4.0f, 100);
  // Phase 1, operands
  auto input05 = model->addOperand(&type5);
  auto output05 = model->addOperand(&type7);
  auto input05_tmp = model->addOperand(&type5);
  auto dummy40 = model->addOperand(&type14);
  auto param40 = model->addOperand(&type10);
  // Phase 2, operations
  static float dummy40_init[] = {0.0f};
  model->setOperandValue(dummy40, dummy40_init, sizeof(float) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input05_tmp, dummy40, param40}, {input05});
  model->addOperation(ANEURALNETWORKS_CAST, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05_tmp},
    {output05});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type10(Type::INT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {0}, 4.0f, 100);
  OperandType type5(Type::TENSOR_FLOAT32, {2});
  // Phase 1, operands
  auto input05 = model->addOperand(&type5);
  auto output05 = model->addOperand(&type16);
  auto input05_tmp = model->addOperand(&type5);
  auto dummy41 = model->addOperand(&type14);
  auto param41 = model->addOperand(&type10);
  // Phase 2, operations
  static float dummy41_init[] = {0.0f};
  model->setOperandValue(dummy41, dummy41_init, sizeof(float) * 1);
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input05_tmp, dummy41, param41}, {input05});
  model->addOperation(ANEURALNETWORKS_CAST, {input05}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05_tmp},
    {output05});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_19(Model *model) {
  OperandType type6(Type::TENSOR_INT32, {2});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {2}, 4.0f, 100);
  // Phase 1, operands
  auto input06 = model->addOperand(&type6);
  auto output06 = model->addOperand(&type7);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input06}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06},
    {output06});
  assert(model->isValid());
}

bool is_ignored_19(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
namespace generated_tests::cast {

void CreateModel_dynamic_output_shape_19(Model *model) {
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {0}, 4.0f, 100);
  OperandType type6(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto input06 = model->addOperand(&type6);
  auto output06 = model->addOperand(&type16);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_CAST, {input06}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06},
    {output06});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_19(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::cast
