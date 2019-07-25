// Generated from sub_quantized_different_scales.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::sub_quantized_different_scales {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, param}, {output0});
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

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto output0 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, param}, {output0});
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

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto output0 = model->addOperand(&type0);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type6);
  auto param64 = model->addOperand(&type1);
  auto input1_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type6);
  auto param65 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static uint8_t dummy_init[] = {0};
  model->setOperandValue(dummy, dummy_init, sizeof(uint8_t) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  static uint8_t dummy1_init[] = {0};
  model->setOperandValue(dummy1, dummy1_init, sizeof(uint8_t) * 1);
  static int32_t param65_init[] = {0};
  model->setOperandValue(param65, param65_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy, param64}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy1, param65}, {input1});
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, param}, {output0});
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

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto input1 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto output0 = model->addOperand(&type5);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type6);
  auto param66 = model->addOperand(&type1);
  auto input1_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type6);
  auto param67 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static uint8_t dummy2_init[] = {0};
  model->setOperandValue(dummy2, dummy2_init, sizeof(uint8_t) * 1);
  static int32_t param66_init[] = {0};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static uint8_t dummy3_init[] = {0};
  model->setOperandValue(dummy3, dummy3_init, sizeof(uint8_t) * 1);
  static int32_t param67_init[] = {0};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy2, param66}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy3, param67}, {input1});
  model->addOperation(ANEURALNETWORKS_SUB, {input0, input1, param}, {output0});
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

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_2(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto input11 = model->addOperand(&type0);
  auto param1 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input01, input11, param1}, {output01});
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

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto input11 = model->addOperand(&type0);
  auto param1 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input01, input11, param1}, {output01});
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

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto input11 = model->addOperand(&type0);
  auto param1 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type2);
  auto input01_tmp = model->addOperand(&type0);
  auto dummy4 = model->addOperand(&type6);
  auto param68 = model->addOperand(&type1);
  auto input11_tmp = model->addOperand(&type0);
  auto dummy5 = model->addOperand(&type6);
  auto param69 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static uint8_t dummy4_init[] = {0};
  model->setOperandValue(dummy4, dummy4_init, sizeof(uint8_t) * 1);
  static int32_t param68_init[] = {0};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static uint8_t dummy5_init[] = {0};
  model->setOperandValue(dummy5, dummy5_init, sizeof(uint8_t) * 1);
  static int32_t param69_init[] = {0};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy4, param68}, {input01});
  model->addOperation(ANEURALNETWORKS_ADD, {input11_tmp, dummy5, param69}, {input11});
  model->addOperation(ANEURALNETWORKS_SUB, {input01, input11, param1}, {output01});
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

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto input11 = model->addOperand(&type0);
  auto param1 = model->addOperand(&type1);
  auto output01 = model->addOperand(&type7);
  auto input01_tmp = model->addOperand(&type0);
  auto dummy6 = model->addOperand(&type6);
  auto param70 = model->addOperand(&type1);
  auto input11_tmp = model->addOperand(&type0);
  auto dummy7 = model->addOperand(&type6);
  auto param71 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static uint8_t dummy6_init[] = {0};
  model->setOperandValue(dummy6, dummy6_init, sizeof(uint8_t) * 1);
  static int32_t param70_init[] = {0};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  static uint8_t dummy7_init[] = {0};
  model->setOperandValue(dummy7, dummy7_init, sizeof(uint8_t) * 1);
  static int32_t param71_init[] = {0};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy6, param70}, {input01});
  model->addOperation(ANEURALNETWORKS_ADD, {input11_tmp, dummy7, param71}, {input11});
  model->addOperation(ANEURALNETWORKS_SUB, {input01, input11, param1}, {output01});
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

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_3(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input02 = model->addOperand(&type0);
  auto input12 = model->addOperand(&type0);
  auto param2 = model->addOperand(&type1);
  auto output02 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input02, input12, param2}, {output02});
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

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input02 = model->addOperand(&type0);
  auto input12 = model->addOperand(&type0);
  auto param2 = model->addOperand(&type1);
  auto output02 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input02, input12, param2}, {output02});
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

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input02 = model->addOperand(&type0);
  auto input12 = model->addOperand(&type0);
  auto param2 = model->addOperand(&type1);
  auto output02 = model->addOperand(&type3);
  auto input02_tmp = model->addOperand(&type0);
  auto dummy8 = model->addOperand(&type6);
  auto param72 = model->addOperand(&type1);
  auto input12_tmp = model->addOperand(&type0);
  auto dummy9 = model->addOperand(&type6);
  auto param73 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static uint8_t dummy8_init[] = {0};
  model->setOperandValue(dummy8, dummy8_init, sizeof(uint8_t) * 1);
  static int32_t param72_init[] = {0};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static uint8_t dummy9_init[] = {0};
  model->setOperandValue(dummy9, dummy9_init, sizeof(uint8_t) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input02_tmp, dummy8, param72}, {input02});
  model->addOperation(ANEURALNETWORKS_ADD, {input12_tmp, dummy9, param73}, {input12});
  model->addOperation(ANEURALNETWORKS_SUB, {input02, input12, param2}, {output02});
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

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input02 = model->addOperand(&type0);
  auto input12 = model->addOperand(&type0);
  auto param2 = model->addOperand(&type1);
  auto output02 = model->addOperand(&type8);
  auto input02_tmp = model->addOperand(&type0);
  auto dummy10 = model->addOperand(&type6);
  auto param74 = model->addOperand(&type1);
  auto input12_tmp = model->addOperand(&type0);
  auto dummy11 = model->addOperand(&type6);
  auto param75 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static uint8_t dummy10_init[] = {0};
  model->setOperandValue(dummy10, dummy10_init, sizeof(uint8_t) * 1);
  static int32_t param74_init[] = {0};
  model->setOperandValue(param74, param74_init, sizeof(int32_t) * 1);
  static uint8_t dummy11_init[] = {0};
  model->setOperandValue(dummy11, dummy11_init, sizeof(uint8_t) * 1);
  static int32_t param75_init[] = {0};
  model->setOperandValue(param75, param75_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input02_tmp, dummy10, param74}, {input02});
  model->addOperation(ANEURALNETWORKS_ADD, {input12_tmp, dummy11, param75}, {input12});
  model->addOperation(ANEURALNETWORKS_SUB, {input02, input12, param2}, {output02});
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

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_4(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input03 = model->addOperand(&type0);
  auto input13 = model->addOperand(&type0);
  auto param3 = model->addOperand(&type1);
  auto output03 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input03, input13, param3}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03, input13},
    {output03});
  assert(model->isValid());
}

bool is_ignored_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input03 = model->addOperand(&type0);
  auto input13 = model->addOperand(&type0);
  auto param3 = model->addOperand(&type1);
  auto output03 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input03, input13, param3}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03, input13},
    {output03});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input03 = model->addOperand(&type0);
  auto input13 = model->addOperand(&type0);
  auto param3 = model->addOperand(&type1);
  auto output03 = model->addOperand(&type4);
  auto input03_tmp = model->addOperand(&type0);
  auto dummy12 = model->addOperand(&type6);
  auto param76 = model->addOperand(&type1);
  auto input13_tmp = model->addOperand(&type0);
  auto dummy13 = model->addOperand(&type6);
  auto param77 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static uint8_t dummy12_init[] = {0};
  model->setOperandValue(dummy12, dummy12_init, sizeof(uint8_t) * 1);
  static int32_t param76_init[] = {0};
  model->setOperandValue(param76, param76_init, sizeof(int32_t) * 1);
  static uint8_t dummy13_init[] = {0};
  model->setOperandValue(dummy13, dummy13_init, sizeof(uint8_t) * 1);
  static int32_t param77_init[] = {0};
  model->setOperandValue(param77, param77_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy12, param76}, {input03});
  model->addOperation(ANEURALNETWORKS_ADD, {input13_tmp, dummy13, param77}, {input13});
  model->addOperation(ANEURALNETWORKS_SUB, {input03, input13, param3}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03_tmp, input13_tmp},
    {output03});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input03 = model->addOperand(&type0);
  auto input13 = model->addOperand(&type0);
  auto param3 = model->addOperand(&type1);
  auto output03 = model->addOperand(&type9);
  auto input03_tmp = model->addOperand(&type0);
  auto dummy14 = model->addOperand(&type6);
  auto param78 = model->addOperand(&type1);
  auto input13_tmp = model->addOperand(&type0);
  auto dummy15 = model->addOperand(&type6);
  auto param79 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static uint8_t dummy14_init[] = {0};
  model->setOperandValue(dummy14, dummy14_init, sizeof(uint8_t) * 1);
  static int32_t param78_init[] = {0};
  model->setOperandValue(param78, param78_init, sizeof(int32_t) * 1);
  static uint8_t dummy15_init[] = {0};
  model->setOperandValue(dummy15, dummy15_init, sizeof(uint8_t) * 1);
  static int32_t param79_init[] = {0};
  model->setOperandValue(param79, param79_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy14, param78}, {input03});
  model->addOperation(ANEURALNETWORKS_ADD, {input13_tmp, dummy15, param79}, {input13});
  model->addOperation(ANEURALNETWORKS_SUB, {input03, input13, param3}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03_tmp, input13_tmp},
    {output03});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_5(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  // Phase 1, operands
  auto input04 = model->addOperand(&type0);
  auto input14 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type1);
  auto output04 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input04, input14, param4}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04, input14},
    {output04});
  assert(model->isValid());
}

bool is_ignored_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input04 = model->addOperand(&type0);
  auto input14 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type1);
  auto output04 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input04, input14, param4}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04, input14},
    {output04});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input04 = model->addOperand(&type0);
  auto input14 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type1);
  auto output04 = model->addOperand(&type0);
  auto input04_tmp = model->addOperand(&type0);
  auto dummy16 = model->addOperand(&type6);
  auto param80 = model->addOperand(&type1);
  auto input14_tmp = model->addOperand(&type2);
  auto dummy17 = model->addOperand(&type10);
  auto param81 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static uint8_t dummy16_init[] = {0};
  model->setOperandValue(dummy16, dummy16_init, sizeof(uint8_t) * 1);
  static int32_t param80_init[] = {0};
  model->setOperandValue(param80, param80_init, sizeof(int32_t) * 1);
  static uint8_t dummy17_init[] = {1};
  model->setOperandValue(dummy17, dummy17_init, sizeof(uint8_t) * 1);
  static int32_t param81_init[] = {0};
  model->setOperandValue(param81, param81_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input04_tmp, dummy16, param80}, {input04});
  model->addOperation(ANEURALNETWORKS_ADD, {input14_tmp, dummy17, param81}, {input14});
  model->addOperation(ANEURALNETWORKS_SUB, {input04, input14, param4}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04_tmp, input14_tmp},
    {output04});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input04 = model->addOperand(&type0);
  auto input14 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type1);
  auto output04 = model->addOperand(&type5);
  auto input04_tmp = model->addOperand(&type0);
  auto dummy18 = model->addOperand(&type6);
  auto param82 = model->addOperand(&type1);
  auto input14_tmp = model->addOperand(&type2);
  auto dummy19 = model->addOperand(&type10);
  auto param83 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static uint8_t dummy18_init[] = {0};
  model->setOperandValue(dummy18, dummy18_init, sizeof(uint8_t) * 1);
  static int32_t param82_init[] = {0};
  model->setOperandValue(param82, param82_init, sizeof(int32_t) * 1);
  static uint8_t dummy19_init[] = {1};
  model->setOperandValue(dummy19, dummy19_init, sizeof(uint8_t) * 1);
  static int32_t param83_init[] = {0};
  model->setOperandValue(param83, param83_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input04_tmp, dummy18, param82}, {input04});
  model->addOperation(ANEURALNETWORKS_ADD, {input14_tmp, dummy19, param83}, {input14});
  model->addOperation(ANEURALNETWORKS_SUB, {input04, input14, param4}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04_tmp, input14_tmp},
    {output04});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_6(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  // Phase 1, operands
  auto input05 = model->addOperand(&type0);
  auto input15 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type1);
  auto output05 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input05, input15, param5}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05, input15},
    {output05});
  assert(model->isValid());
}

bool is_ignored_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input05 = model->addOperand(&type0);
  auto input15 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type1);
  auto output05 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input05, input15, param5}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05, input15},
    {output05});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_6(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input05 = model->addOperand(&type0);
  auto input15 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type1);
  auto output05 = model->addOperand(&type2);
  auto input05_tmp = model->addOperand(&type0);
  auto dummy20 = model->addOperand(&type6);
  auto param84 = model->addOperand(&type1);
  auto input15_tmp = model->addOperand(&type2);
  auto dummy21 = model->addOperand(&type10);
  auto param85 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static uint8_t dummy20_init[] = {0};
  model->setOperandValue(dummy20, dummy20_init, sizeof(uint8_t) * 1);
  static int32_t param84_init[] = {0};
  model->setOperandValue(param84, param84_init, sizeof(int32_t) * 1);
  static uint8_t dummy21_init[] = {1};
  model->setOperandValue(dummy21, dummy21_init, sizeof(uint8_t) * 1);
  static int32_t param85_init[] = {0};
  model->setOperandValue(param85, param85_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input05_tmp, dummy20, param84}, {input05});
  model->addOperation(ANEURALNETWORKS_ADD, {input15_tmp, dummy21, param85}, {input15});
  model->addOperation(ANEURALNETWORKS_SUB, {input05, input15, param5}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05_tmp, input15_tmp},
    {output05});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input05 = model->addOperand(&type0);
  auto input15 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type1);
  auto output05 = model->addOperand(&type7);
  auto input05_tmp = model->addOperand(&type0);
  auto dummy22 = model->addOperand(&type6);
  auto param86 = model->addOperand(&type1);
  auto input15_tmp = model->addOperand(&type2);
  auto dummy23 = model->addOperand(&type10);
  auto param87 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static uint8_t dummy22_init[] = {0};
  model->setOperandValue(dummy22, dummy22_init, sizeof(uint8_t) * 1);
  static int32_t param86_init[] = {0};
  model->setOperandValue(param86, param86_init, sizeof(int32_t) * 1);
  static uint8_t dummy23_init[] = {1};
  model->setOperandValue(dummy23, dummy23_init, sizeof(uint8_t) * 1);
  static int32_t param87_init[] = {0};
  model->setOperandValue(param87, param87_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input05_tmp, dummy22, param86}, {input05});
  model->addOperation(ANEURALNETWORKS_ADD, {input15_tmp, dummy23, param87}, {input15});
  model->addOperation(ANEURALNETWORKS_SUB, {input05, input15, param5}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05_tmp, input15_tmp},
    {output05});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_7(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input06 = model->addOperand(&type0);
  auto input16 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type1);
  auto output06 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input06, input16, param6}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06, input16},
    {output06});
  assert(model->isValid());
}

bool is_ignored_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input06 = model->addOperand(&type0);
  auto input16 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type1);
  auto output06 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input06, input16, param6}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06, input16},
    {output06});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_7(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input06 = model->addOperand(&type0);
  auto input16 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type1);
  auto output06 = model->addOperand(&type3);
  auto input06_tmp = model->addOperand(&type0);
  auto dummy24 = model->addOperand(&type6);
  auto param88 = model->addOperand(&type1);
  auto input16_tmp = model->addOperand(&type2);
  auto dummy25 = model->addOperand(&type10);
  auto param89 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static uint8_t dummy24_init[] = {0};
  model->setOperandValue(dummy24, dummy24_init, sizeof(uint8_t) * 1);
  static int32_t param88_init[] = {0};
  model->setOperandValue(param88, param88_init, sizeof(int32_t) * 1);
  static uint8_t dummy25_init[] = {1};
  model->setOperandValue(dummy25, dummy25_init, sizeof(uint8_t) * 1);
  static int32_t param89_init[] = {0};
  model->setOperandValue(param89, param89_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input06_tmp, dummy24, param88}, {input06});
  model->addOperation(ANEURALNETWORKS_ADD, {input16_tmp, dummy25, param89}, {input16});
  model->addOperation(ANEURALNETWORKS_SUB, {input06, input16, param6}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06_tmp, input16_tmp},
    {output06});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input06 = model->addOperand(&type0);
  auto input16 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type1);
  auto output06 = model->addOperand(&type8);
  auto input06_tmp = model->addOperand(&type0);
  auto dummy26 = model->addOperand(&type6);
  auto param90 = model->addOperand(&type1);
  auto input16_tmp = model->addOperand(&type2);
  auto dummy27 = model->addOperand(&type10);
  auto param91 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static uint8_t dummy26_init[] = {0};
  model->setOperandValue(dummy26, dummy26_init, sizeof(uint8_t) * 1);
  static int32_t param90_init[] = {0};
  model->setOperandValue(param90, param90_init, sizeof(int32_t) * 1);
  static uint8_t dummy27_init[] = {1};
  model->setOperandValue(dummy27, dummy27_init, sizeof(uint8_t) * 1);
  static int32_t param91_init[] = {0};
  model->setOperandValue(param91, param91_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input06_tmp, dummy26, param90}, {input06});
  model->addOperation(ANEURALNETWORKS_ADD, {input16_tmp, dummy27, param91}, {input16});
  model->addOperation(ANEURALNETWORKS_SUB, {input06, input16, param6}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06_tmp, input16_tmp},
    {output06});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_8(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input07 = model->addOperand(&type0);
  auto input17 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type1);
  auto output07 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input07, input17, param7}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07, input17},
    {output07});
  assert(model->isValid());
}

bool is_ignored_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input07 = model->addOperand(&type0);
  auto input17 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type1);
  auto output07 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input07, input17, param7}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07, input17},
    {output07});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_8(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input07 = model->addOperand(&type0);
  auto input17 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type1);
  auto output07 = model->addOperand(&type4);
  auto input07_tmp = model->addOperand(&type0);
  auto dummy28 = model->addOperand(&type6);
  auto param92 = model->addOperand(&type1);
  auto input17_tmp = model->addOperand(&type2);
  auto dummy29 = model->addOperand(&type10);
  auto param93 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static uint8_t dummy28_init[] = {0};
  model->setOperandValue(dummy28, dummy28_init, sizeof(uint8_t) * 1);
  static int32_t param92_init[] = {0};
  model->setOperandValue(param92, param92_init, sizeof(int32_t) * 1);
  static uint8_t dummy29_init[] = {1};
  model->setOperandValue(dummy29, dummy29_init, sizeof(uint8_t) * 1);
  static int32_t param93_init[] = {0};
  model->setOperandValue(param93, param93_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input07_tmp, dummy28, param92}, {input07});
  model->addOperation(ANEURALNETWORKS_ADD, {input17_tmp, dummy29, param93}, {input17});
  model->addOperation(ANEURALNETWORKS_SUB, {input07, input17, param7}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07_tmp, input17_tmp},
    {output07});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input07 = model->addOperand(&type0);
  auto input17 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type1);
  auto output07 = model->addOperand(&type9);
  auto input07_tmp = model->addOperand(&type0);
  auto dummy30 = model->addOperand(&type6);
  auto param94 = model->addOperand(&type1);
  auto input17_tmp = model->addOperand(&type2);
  auto dummy31 = model->addOperand(&type10);
  auto param95 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static uint8_t dummy30_init[] = {0};
  model->setOperandValue(dummy30, dummy30_init, sizeof(uint8_t) * 1);
  static int32_t param94_init[] = {0};
  model->setOperandValue(param94, param94_init, sizeof(int32_t) * 1);
  static uint8_t dummy31_init[] = {1};
  model->setOperandValue(dummy31, dummy31_init, sizeof(uint8_t) * 1);
  static int32_t param95_init[] = {0};
  model->setOperandValue(param95, param95_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input07_tmp, dummy30, param94}, {input07});
  model->addOperation(ANEURALNETWORKS_ADD, {input17_tmp, dummy31, param95}, {input17});
  model->addOperation(ANEURALNETWORKS_SUB, {input07, input17, param7}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07_tmp, input17_tmp},
    {output07});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_9(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input08 = model->addOperand(&type0);
  auto input18 = model->addOperand(&type3);
  auto param8 = model->addOperand(&type1);
  auto output08 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input08, input18, param8}, {output08});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input08, input18},
    {output08});
  assert(model->isValid());
}

bool is_ignored_9(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_9(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input08 = model->addOperand(&type0);
  auto input18 = model->addOperand(&type3);
  auto param8 = model->addOperand(&type1);
  auto output08 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input08, input18, param8}, {output08});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input08, input18},
    {output08});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_9(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_9(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input08 = model->addOperand(&type0);
  auto input18 = model->addOperand(&type3);
  auto param8 = model->addOperand(&type1);
  auto output08 = model->addOperand(&type0);
  auto input08_tmp = model->addOperand(&type0);
  auto dummy32 = model->addOperand(&type6);
  auto param96 = model->addOperand(&type1);
  auto input18_tmp = model->addOperand(&type3);
  auto dummy33 = model->addOperand(&type11);
  auto param97 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static uint8_t dummy32_init[] = {0};
  model->setOperandValue(dummy32, dummy32_init, sizeof(uint8_t) * 1);
  static int32_t param96_init[] = {0};
  model->setOperandValue(param96, param96_init, sizeof(int32_t) * 1);
  static uint8_t dummy33_init[] = {120};
  model->setOperandValue(dummy33, dummy33_init, sizeof(uint8_t) * 1);
  static int32_t param97_init[] = {0};
  model->setOperandValue(param97, param97_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input08_tmp, dummy32, param96}, {input08});
  model->addOperation(ANEURALNETWORKS_ADD, {input18_tmp, dummy33, param97}, {input18});
  model->addOperation(ANEURALNETWORKS_SUB, {input08, input18, param8}, {output08});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input08_tmp, input18_tmp},
    {output08});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_9(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_9(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input08 = model->addOperand(&type0);
  auto input18 = model->addOperand(&type3);
  auto param8 = model->addOperand(&type1);
  auto output08 = model->addOperand(&type5);
  auto input08_tmp = model->addOperand(&type0);
  auto dummy34 = model->addOperand(&type6);
  auto param98 = model->addOperand(&type1);
  auto input18_tmp = model->addOperand(&type3);
  auto dummy35 = model->addOperand(&type11);
  auto param99 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static uint8_t dummy34_init[] = {0};
  model->setOperandValue(dummy34, dummy34_init, sizeof(uint8_t) * 1);
  static int32_t param98_init[] = {0};
  model->setOperandValue(param98, param98_init, sizeof(int32_t) * 1);
  static uint8_t dummy35_init[] = {120};
  model->setOperandValue(dummy35, dummy35_init, sizeof(uint8_t) * 1);
  static int32_t param99_init[] = {0};
  model->setOperandValue(param99, param99_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input08_tmp, dummy34, param98}, {input08});
  model->addOperation(ANEURALNETWORKS_ADD, {input18_tmp, dummy35, param99}, {input18});
  model->addOperation(ANEURALNETWORKS_SUB, {input08, input18, param8}, {output08});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input08_tmp, input18_tmp},
    {output08});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_9(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_10(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input09 = model->addOperand(&type0);
  auto input19 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type1);
  auto output09 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input09, input19, param9}, {output09});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input09, input19},
    {output09});
  assert(model->isValid());
}

bool is_ignored_10(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_10(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input09 = model->addOperand(&type0);
  auto input19 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type1);
  auto output09 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input09, input19, param9}, {output09});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input09, input19},
    {output09});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_10(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_10(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input09 = model->addOperand(&type0);
  auto input19 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type1);
  auto output09 = model->addOperand(&type2);
  auto input09_tmp = model->addOperand(&type0);
  auto dummy36 = model->addOperand(&type6);
  auto param100 = model->addOperand(&type1);
  auto input19_tmp = model->addOperand(&type3);
  auto dummy37 = model->addOperand(&type11);
  auto param101 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static uint8_t dummy36_init[] = {0};
  model->setOperandValue(dummy36, dummy36_init, sizeof(uint8_t) * 1);
  static int32_t param100_init[] = {0};
  model->setOperandValue(param100, param100_init, sizeof(int32_t) * 1);
  static uint8_t dummy37_init[] = {120};
  model->setOperandValue(dummy37, dummy37_init, sizeof(uint8_t) * 1);
  static int32_t param101_init[] = {0};
  model->setOperandValue(param101, param101_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input09_tmp, dummy36, param100}, {input09});
  model->addOperation(ANEURALNETWORKS_ADD, {input19_tmp, dummy37, param101}, {input19});
  model->addOperation(ANEURALNETWORKS_SUB, {input09, input19, param9}, {output09});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input09_tmp, input19_tmp},
    {output09});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_10(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_10(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input09 = model->addOperand(&type0);
  auto input19 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type1);
  auto output09 = model->addOperand(&type7);
  auto input09_tmp = model->addOperand(&type0);
  auto dummy38 = model->addOperand(&type6);
  auto param102 = model->addOperand(&type1);
  auto input19_tmp = model->addOperand(&type3);
  auto dummy39 = model->addOperand(&type11);
  auto param103 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static uint8_t dummy38_init[] = {0};
  model->setOperandValue(dummy38, dummy38_init, sizeof(uint8_t) * 1);
  static int32_t param102_init[] = {0};
  model->setOperandValue(param102, param102_init, sizeof(int32_t) * 1);
  static uint8_t dummy39_init[] = {120};
  model->setOperandValue(dummy39, dummy39_init, sizeof(uint8_t) * 1);
  static int32_t param103_init[] = {0};
  model->setOperandValue(param103, param103_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input09_tmp, dummy38, param102}, {input09});
  model->addOperation(ANEURALNETWORKS_ADD, {input19_tmp, dummy39, param103}, {input19});
  model->addOperation(ANEURALNETWORKS_SUB, {input09, input19, param9}, {output09});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input09_tmp, input19_tmp},
    {output09});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_10(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_11(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input010 = model->addOperand(&type0);
  auto input110 = model->addOperand(&type3);
  auto param10 = model->addOperand(&type1);
  auto output010 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input010, input110, param10}, {output010});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input010, input110},
    {output010});
  assert(model->isValid());
}

bool is_ignored_11(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_11(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input010 = model->addOperand(&type0);
  auto input110 = model->addOperand(&type3);
  auto param10 = model->addOperand(&type1);
  auto output010 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input010, input110, param10}, {output010});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input010, input110},
    {output010});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_11(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_11(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input010 = model->addOperand(&type0);
  auto input110 = model->addOperand(&type3);
  auto param10 = model->addOperand(&type1);
  auto output010 = model->addOperand(&type3);
  auto input010_tmp = model->addOperand(&type0);
  auto dummy40 = model->addOperand(&type6);
  auto param104 = model->addOperand(&type1);
  auto input110_tmp = model->addOperand(&type3);
  auto dummy41 = model->addOperand(&type11);
  auto param105 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static uint8_t dummy40_init[] = {0};
  model->setOperandValue(dummy40, dummy40_init, sizeof(uint8_t) * 1);
  static int32_t param104_init[] = {0};
  model->setOperandValue(param104, param104_init, sizeof(int32_t) * 1);
  static uint8_t dummy41_init[] = {120};
  model->setOperandValue(dummy41, dummy41_init, sizeof(uint8_t) * 1);
  static int32_t param105_init[] = {0};
  model->setOperandValue(param105, param105_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input010_tmp, dummy40, param104}, {input010});
  model->addOperation(ANEURALNETWORKS_ADD, {input110_tmp, dummy41, param105}, {input110});
  model->addOperation(ANEURALNETWORKS_SUB, {input010, input110, param10}, {output010});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input010_tmp, input110_tmp},
    {output010});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_11(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_11(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input010 = model->addOperand(&type0);
  auto input110 = model->addOperand(&type3);
  auto param10 = model->addOperand(&type1);
  auto output010 = model->addOperand(&type8);
  auto input010_tmp = model->addOperand(&type0);
  auto dummy42 = model->addOperand(&type6);
  auto param106 = model->addOperand(&type1);
  auto input110_tmp = model->addOperand(&type3);
  auto dummy43 = model->addOperand(&type11);
  auto param107 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static uint8_t dummy42_init[] = {0};
  model->setOperandValue(dummy42, dummy42_init, sizeof(uint8_t) * 1);
  static int32_t param106_init[] = {0};
  model->setOperandValue(param106, param106_init, sizeof(int32_t) * 1);
  static uint8_t dummy43_init[] = {120};
  model->setOperandValue(dummy43, dummy43_init, sizeof(uint8_t) * 1);
  static int32_t param107_init[] = {0};
  model->setOperandValue(param107, param107_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input010_tmp, dummy42, param106}, {input010});
  model->addOperation(ANEURALNETWORKS_ADD, {input110_tmp, dummy43, param107}, {input110});
  model->addOperation(ANEURALNETWORKS_SUB, {input010, input110, param10}, {output010});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input010_tmp, input110_tmp},
    {output010});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_11(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_12(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input011 = model->addOperand(&type0);
  auto input111 = model->addOperand(&type3);
  auto param11 = model->addOperand(&type1);
  auto output011 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input011, input111, param11}, {output011});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input011, input111},
    {output011});
  assert(model->isValid());
}

bool is_ignored_12(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_12(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input011 = model->addOperand(&type0);
  auto input111 = model->addOperand(&type3);
  auto param11 = model->addOperand(&type1);
  auto output011 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input011, input111, param11}, {output011});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input011, input111},
    {output011});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_12(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_12(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input011 = model->addOperand(&type0);
  auto input111 = model->addOperand(&type3);
  auto param11 = model->addOperand(&type1);
  auto output011 = model->addOperand(&type4);
  auto input011_tmp = model->addOperand(&type0);
  auto dummy44 = model->addOperand(&type6);
  auto param108 = model->addOperand(&type1);
  auto input111_tmp = model->addOperand(&type3);
  auto dummy45 = model->addOperand(&type11);
  auto param109 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static uint8_t dummy44_init[] = {0};
  model->setOperandValue(dummy44, dummy44_init, sizeof(uint8_t) * 1);
  static int32_t param108_init[] = {0};
  model->setOperandValue(param108, param108_init, sizeof(int32_t) * 1);
  static uint8_t dummy45_init[] = {120};
  model->setOperandValue(dummy45, dummy45_init, sizeof(uint8_t) * 1);
  static int32_t param109_init[] = {0};
  model->setOperandValue(param109, param109_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input011_tmp, dummy44, param108}, {input011});
  model->addOperation(ANEURALNETWORKS_ADD, {input111_tmp, dummy45, param109}, {input111});
  model->addOperation(ANEURALNETWORKS_SUB, {input011, input111, param11}, {output011});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input011_tmp, input111_tmp},
    {output011});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_12(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_12(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input011 = model->addOperand(&type0);
  auto input111 = model->addOperand(&type3);
  auto param11 = model->addOperand(&type1);
  auto output011 = model->addOperand(&type9);
  auto input011_tmp = model->addOperand(&type0);
  auto dummy46 = model->addOperand(&type6);
  auto param110 = model->addOperand(&type1);
  auto input111_tmp = model->addOperand(&type3);
  auto dummy47 = model->addOperand(&type11);
  auto param111 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static uint8_t dummy46_init[] = {0};
  model->setOperandValue(dummy46, dummy46_init, sizeof(uint8_t) * 1);
  static int32_t param110_init[] = {0};
  model->setOperandValue(param110, param110_init, sizeof(int32_t) * 1);
  static uint8_t dummy47_init[] = {120};
  model->setOperandValue(dummy47, dummy47_init, sizeof(uint8_t) * 1);
  static int32_t param111_init[] = {0};
  model->setOperandValue(param111, param111_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input011_tmp, dummy46, param110}, {input011});
  model->addOperation(ANEURALNETWORKS_ADD, {input111_tmp, dummy47, param111}, {input111});
  model->addOperation(ANEURALNETWORKS_SUB, {input011, input111, param11}, {output011});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input011_tmp, input111_tmp},
    {output011});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_12(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_13(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input012 = model->addOperand(&type0);
  auto input112 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type1);
  auto output012 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input012, input112, param12}, {output012});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input012, input112},
    {output012});
  assert(model->isValid());
}

bool is_ignored_13(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_13(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input012 = model->addOperand(&type0);
  auto input112 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type1);
  auto output012 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input012, input112, param12}, {output012});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input012, input112},
    {output012});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_13(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_13(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input012 = model->addOperand(&type0);
  auto input112 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type1);
  auto output012 = model->addOperand(&type0);
  auto input012_tmp = model->addOperand(&type0);
  auto dummy48 = model->addOperand(&type6);
  auto param112 = model->addOperand(&type1);
  auto input112_tmp = model->addOperand(&type4);
  auto dummy49 = model->addOperand(&type12);
  auto param113 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static uint8_t dummy48_init[] = {0};
  model->setOperandValue(dummy48, dummy48_init, sizeof(uint8_t) * 1);
  static int32_t param112_init[] = {0};
  model->setOperandValue(param112, param112_init, sizeof(int32_t) * 1);
  static uint8_t dummy49_init[] = {120};
  model->setOperandValue(dummy49, dummy49_init, sizeof(uint8_t) * 1);
  static int32_t param113_init[] = {0};
  model->setOperandValue(param113, param113_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input012_tmp, dummy48, param112}, {input012});
  model->addOperation(ANEURALNETWORKS_ADD, {input112_tmp, dummy49, param113}, {input112});
  model->addOperation(ANEURALNETWORKS_SUB, {input012, input112, param12}, {output012});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input012_tmp, input112_tmp},
    {output012});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_13(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_13(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input012 = model->addOperand(&type0);
  auto input112 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type1);
  auto output012 = model->addOperand(&type5);
  auto input012_tmp = model->addOperand(&type0);
  auto dummy50 = model->addOperand(&type6);
  auto param114 = model->addOperand(&type1);
  auto input112_tmp = model->addOperand(&type4);
  auto dummy51 = model->addOperand(&type12);
  auto param115 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static uint8_t dummy50_init[] = {0};
  model->setOperandValue(dummy50, dummy50_init, sizeof(uint8_t) * 1);
  static int32_t param114_init[] = {0};
  model->setOperandValue(param114, param114_init, sizeof(int32_t) * 1);
  static uint8_t dummy51_init[] = {120};
  model->setOperandValue(dummy51, dummy51_init, sizeof(uint8_t) * 1);
  static int32_t param115_init[] = {0};
  model->setOperandValue(param115, param115_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input012_tmp, dummy50, param114}, {input012});
  model->addOperation(ANEURALNETWORKS_ADD, {input112_tmp, dummy51, param115}, {input112});
  model->addOperation(ANEURALNETWORKS_SUB, {input012, input112, param12}, {output012});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input012_tmp, input112_tmp},
    {output012});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_13(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_14(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input013 = model->addOperand(&type0);
  auto input113 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type1);
  auto output013 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input013, input113, param13}, {output013});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input013, input113},
    {output013});
  assert(model->isValid());
}

bool is_ignored_14(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_14(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input013 = model->addOperand(&type0);
  auto input113 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type1);
  auto output013 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input013, input113, param13}, {output013});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input013, input113},
    {output013});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_14(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_14(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input013 = model->addOperand(&type0);
  auto input113 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type1);
  auto output013 = model->addOperand(&type2);
  auto input013_tmp = model->addOperand(&type0);
  auto dummy52 = model->addOperand(&type6);
  auto param116 = model->addOperand(&type1);
  auto input113_tmp = model->addOperand(&type4);
  auto dummy53 = model->addOperand(&type12);
  auto param117 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static uint8_t dummy52_init[] = {0};
  model->setOperandValue(dummy52, dummy52_init, sizeof(uint8_t) * 1);
  static int32_t param116_init[] = {0};
  model->setOperandValue(param116, param116_init, sizeof(int32_t) * 1);
  static uint8_t dummy53_init[] = {120};
  model->setOperandValue(dummy53, dummy53_init, sizeof(uint8_t) * 1);
  static int32_t param117_init[] = {0};
  model->setOperandValue(param117, param117_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input013_tmp, dummy52, param116}, {input013});
  model->addOperation(ANEURALNETWORKS_ADD, {input113_tmp, dummy53, param117}, {input113});
  model->addOperation(ANEURALNETWORKS_SUB, {input013, input113, param13}, {output013});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input013_tmp, input113_tmp},
    {output013});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_14(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_14(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input013 = model->addOperand(&type0);
  auto input113 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type1);
  auto output013 = model->addOperand(&type7);
  auto input013_tmp = model->addOperand(&type0);
  auto dummy54 = model->addOperand(&type6);
  auto param118 = model->addOperand(&type1);
  auto input113_tmp = model->addOperand(&type4);
  auto dummy55 = model->addOperand(&type12);
  auto param119 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static uint8_t dummy54_init[] = {0};
  model->setOperandValue(dummy54, dummy54_init, sizeof(uint8_t) * 1);
  static int32_t param118_init[] = {0};
  model->setOperandValue(param118, param118_init, sizeof(int32_t) * 1);
  static uint8_t dummy55_init[] = {120};
  model->setOperandValue(dummy55, dummy55_init, sizeof(uint8_t) * 1);
  static int32_t param119_init[] = {0};
  model->setOperandValue(param119, param119_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input013_tmp, dummy54, param118}, {input013});
  model->addOperation(ANEURALNETWORKS_ADD, {input113_tmp, dummy55, param119}, {input113});
  model->addOperation(ANEURALNETWORKS_SUB, {input013, input113, param13}, {output013});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input013_tmp, input113_tmp},
    {output013});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_14(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_15(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input014 = model->addOperand(&type0);
  auto input114 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type1);
  auto output014 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input014, input114, param14}, {output014});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input014, input114},
    {output014});
  assert(model->isValid());
}

bool is_ignored_15(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_15(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input014 = model->addOperand(&type0);
  auto input114 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type1);
  auto output014 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input014, input114, param14}, {output014});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input014, input114},
    {output014});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_15(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_15(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input014 = model->addOperand(&type0);
  auto input114 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type1);
  auto output014 = model->addOperand(&type3);
  auto input014_tmp = model->addOperand(&type0);
  auto dummy56 = model->addOperand(&type6);
  auto param120 = model->addOperand(&type1);
  auto input114_tmp = model->addOperand(&type4);
  auto dummy57 = model->addOperand(&type12);
  auto param121 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static uint8_t dummy56_init[] = {0};
  model->setOperandValue(dummy56, dummy56_init, sizeof(uint8_t) * 1);
  static int32_t param120_init[] = {0};
  model->setOperandValue(param120, param120_init, sizeof(int32_t) * 1);
  static uint8_t dummy57_init[] = {120};
  model->setOperandValue(dummy57, dummy57_init, sizeof(uint8_t) * 1);
  static int32_t param121_init[] = {0};
  model->setOperandValue(param121, param121_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input014_tmp, dummy56, param120}, {input014});
  model->addOperation(ANEURALNETWORKS_ADD, {input114_tmp, dummy57, param121}, {input114});
  model->addOperation(ANEURALNETWORKS_SUB, {input014, input114, param14}, {output014});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input014_tmp, input114_tmp},
    {output014});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_15(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_15(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input014 = model->addOperand(&type0);
  auto input114 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type1);
  auto output014 = model->addOperand(&type8);
  auto input014_tmp = model->addOperand(&type0);
  auto dummy58 = model->addOperand(&type6);
  auto param122 = model->addOperand(&type1);
  auto input114_tmp = model->addOperand(&type4);
  auto dummy59 = model->addOperand(&type12);
  auto param123 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static uint8_t dummy58_init[] = {0};
  model->setOperandValue(dummy58, dummy58_init, sizeof(uint8_t) * 1);
  static int32_t param122_init[] = {0};
  model->setOperandValue(param122, param122_init, sizeof(int32_t) * 1);
  static uint8_t dummy59_init[] = {120};
  model->setOperandValue(dummy59, dummy59_init, sizeof(uint8_t) * 1);
  static int32_t param123_init[] = {0};
  model->setOperandValue(param123, param123_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input014_tmp, dummy58, param122}, {input014});
  model->addOperation(ANEURALNETWORKS_ADD, {input114_tmp, dummy59, param123}, {input114});
  model->addOperation(ANEURALNETWORKS_SUB, {input014, input114, param14}, {output014});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input014_tmp, input114_tmp},
    {output014});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_15(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_16(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input015 = model->addOperand(&type0);
  auto input115 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type1);
  auto output015 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input015, input115, param15}, {output015});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input015, input115},
    {output015});
  assert(model->isValid());
}

bool is_ignored_16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_16(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input015 = model->addOperand(&type0);
  auto input115 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type1);
  auto output015 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input015, input115, param15}, {output015});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input015, input115},
    {output015});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_16(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input015 = model->addOperand(&type0);
  auto input115 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type1);
  auto output015 = model->addOperand(&type4);
  auto input015_tmp = model->addOperand(&type0);
  auto dummy60 = model->addOperand(&type6);
  auto param124 = model->addOperand(&type1);
  auto input115_tmp = model->addOperand(&type4);
  auto dummy61 = model->addOperand(&type12);
  auto param125 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static uint8_t dummy60_init[] = {0};
  model->setOperandValue(dummy60, dummy60_init, sizeof(uint8_t) * 1);
  static int32_t param124_init[] = {0};
  model->setOperandValue(param124, param124_init, sizeof(int32_t) * 1);
  static uint8_t dummy61_init[] = {120};
  model->setOperandValue(dummy61, dummy61_init, sizeof(uint8_t) * 1);
  static int32_t param125_init[] = {0};
  model->setOperandValue(param125, param125_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input015_tmp, dummy60, param124}, {input015});
  model->addOperation(ANEURALNETWORKS_ADD, {input115_tmp, dummy61, param125}, {input115});
  model->addOperation(ANEURALNETWORKS_SUB, {input015, input115, param15}, {output015});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input015_tmp, input115_tmp},
    {output015});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_16(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input015 = model->addOperand(&type0);
  auto input115 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type1);
  auto output015 = model->addOperand(&type9);
  auto input015_tmp = model->addOperand(&type0);
  auto dummy62 = model->addOperand(&type6);
  auto param126 = model->addOperand(&type1);
  auto input115_tmp = model->addOperand(&type4);
  auto dummy63 = model->addOperand(&type12);
  auto param127 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static uint8_t dummy62_init[] = {0};
  model->setOperandValue(dummy62, dummy62_init, sizeof(uint8_t) * 1);
  static int32_t param126_init[] = {0};
  model->setOperandValue(param126, param126_init, sizeof(int32_t) * 1);
  static uint8_t dummy63_init[] = {120};
  model->setOperandValue(dummy63, dummy63_init, sizeof(uint8_t) * 1);
  static int32_t param127_init[] = {0};
  model->setOperandValue(param127, param127_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input015_tmp, dummy62, param126}, {input015});
  model->addOperation(ANEURALNETWORKS_ADD, {input115_tmp, dummy63, param127}, {input115});
  model->addOperation(ANEURALNETWORKS_SUB, {input015, input115, param15}, {output015});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input015_tmp, input115_tmp},
    {output015});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_17(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  // Phase 1, operands
  auto input016 = model->addOperand(&type2);
  auto input116 = model->addOperand(&type0);
  auto param16 = model->addOperand(&type1);
  auto output016 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input016, input116, param16}, {output016});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input016, input116},
    {output016});
  assert(model->isValid());
}

bool is_ignored_17(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_17(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input016 = model->addOperand(&type2);
  auto input116 = model->addOperand(&type0);
  auto param16 = model->addOperand(&type1);
  auto output016 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input016, input116, param16}, {output016});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input016, input116},
    {output016});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_17(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_17(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input016 = model->addOperand(&type2);
  auto input116 = model->addOperand(&type0);
  auto param16 = model->addOperand(&type1);
  auto output016 = model->addOperand(&type0);
  auto input016_tmp = model->addOperand(&type2);
  auto dummy64 = model->addOperand(&type10);
  auto param128 = model->addOperand(&type1);
  auto input116_tmp = model->addOperand(&type0);
  auto dummy65 = model->addOperand(&type6);
  auto param129 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static uint8_t dummy64_init[] = {1};
  model->setOperandValue(dummy64, dummy64_init, sizeof(uint8_t) * 1);
  static int32_t param128_init[] = {0};
  model->setOperandValue(param128, param128_init, sizeof(int32_t) * 1);
  static uint8_t dummy65_init[] = {0};
  model->setOperandValue(dummy65, dummy65_init, sizeof(uint8_t) * 1);
  static int32_t param129_init[] = {0};
  model->setOperandValue(param129, param129_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input016_tmp, dummy64, param128}, {input016});
  model->addOperation(ANEURALNETWORKS_ADD, {input116_tmp, dummy65, param129}, {input116});
  model->addOperation(ANEURALNETWORKS_SUB, {input016, input116, param16}, {output016});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input016_tmp, input116_tmp},
    {output016});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_17(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_17(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input016 = model->addOperand(&type2);
  auto input116 = model->addOperand(&type0);
  auto param16 = model->addOperand(&type1);
  auto output016 = model->addOperand(&type5);
  auto input016_tmp = model->addOperand(&type2);
  auto dummy66 = model->addOperand(&type10);
  auto param130 = model->addOperand(&type1);
  auto input116_tmp = model->addOperand(&type0);
  auto dummy67 = model->addOperand(&type6);
  auto param131 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static uint8_t dummy66_init[] = {1};
  model->setOperandValue(dummy66, dummy66_init, sizeof(uint8_t) * 1);
  static int32_t param130_init[] = {0};
  model->setOperandValue(param130, param130_init, sizeof(int32_t) * 1);
  static uint8_t dummy67_init[] = {0};
  model->setOperandValue(dummy67, dummy67_init, sizeof(uint8_t) * 1);
  static int32_t param131_init[] = {0};
  model->setOperandValue(param131, param131_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input016_tmp, dummy66, param130}, {input016});
  model->addOperation(ANEURALNETWORKS_ADD, {input116_tmp, dummy67, param131}, {input116});
  model->addOperation(ANEURALNETWORKS_SUB, {input016, input116, param16}, {output016});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input016_tmp, input116_tmp},
    {output016});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_17(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_18(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  // Phase 1, operands
  auto input017 = model->addOperand(&type2);
  auto input117 = model->addOperand(&type0);
  auto param17 = model->addOperand(&type1);
  auto output017 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input017, input117, param17}, {output017});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input017, input117},
    {output017});
  assert(model->isValid());
}

bool is_ignored_18(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_18(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input017 = model->addOperand(&type2);
  auto input117 = model->addOperand(&type0);
  auto param17 = model->addOperand(&type1);
  auto output017 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input017, input117, param17}, {output017});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input017, input117},
    {output017});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_18(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_18(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input017 = model->addOperand(&type2);
  auto input117 = model->addOperand(&type0);
  auto param17 = model->addOperand(&type1);
  auto output017 = model->addOperand(&type2);
  auto input017_tmp = model->addOperand(&type2);
  auto dummy68 = model->addOperand(&type10);
  auto param132 = model->addOperand(&type1);
  auto input117_tmp = model->addOperand(&type0);
  auto dummy69 = model->addOperand(&type6);
  auto param133 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static uint8_t dummy68_init[] = {1};
  model->setOperandValue(dummy68, dummy68_init, sizeof(uint8_t) * 1);
  static int32_t param132_init[] = {0};
  model->setOperandValue(param132, param132_init, sizeof(int32_t) * 1);
  static uint8_t dummy69_init[] = {0};
  model->setOperandValue(dummy69, dummy69_init, sizeof(uint8_t) * 1);
  static int32_t param133_init[] = {0};
  model->setOperandValue(param133, param133_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input017_tmp, dummy68, param132}, {input017});
  model->addOperation(ANEURALNETWORKS_ADD, {input117_tmp, dummy69, param133}, {input117});
  model->addOperation(ANEURALNETWORKS_SUB, {input017, input117, param17}, {output017});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input017_tmp, input117_tmp},
    {output017});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_18(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_18(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input017 = model->addOperand(&type2);
  auto input117 = model->addOperand(&type0);
  auto param17 = model->addOperand(&type1);
  auto output017 = model->addOperand(&type7);
  auto input017_tmp = model->addOperand(&type2);
  auto dummy70 = model->addOperand(&type10);
  auto param134 = model->addOperand(&type1);
  auto input117_tmp = model->addOperand(&type0);
  auto dummy71 = model->addOperand(&type6);
  auto param135 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static uint8_t dummy70_init[] = {1};
  model->setOperandValue(dummy70, dummy70_init, sizeof(uint8_t) * 1);
  static int32_t param134_init[] = {0};
  model->setOperandValue(param134, param134_init, sizeof(int32_t) * 1);
  static uint8_t dummy71_init[] = {0};
  model->setOperandValue(dummy71, dummy71_init, sizeof(uint8_t) * 1);
  static int32_t param135_init[] = {0};
  model->setOperandValue(param135, param135_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input017_tmp, dummy70, param134}, {input017});
  model->addOperation(ANEURALNETWORKS_ADD, {input117_tmp, dummy71, param135}, {input117});
  model->addOperation(ANEURALNETWORKS_SUB, {input017, input117, param17}, {output017});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input017_tmp, input117_tmp},
    {output017});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_18(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_19(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input018 = model->addOperand(&type2);
  auto input118 = model->addOperand(&type0);
  auto param18 = model->addOperand(&type1);
  auto output018 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input018, input118, param18}, {output018});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input018, input118},
    {output018});
  assert(model->isValid());
}

bool is_ignored_19(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_19(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input018 = model->addOperand(&type2);
  auto input118 = model->addOperand(&type0);
  auto param18 = model->addOperand(&type1);
  auto output018 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input018, input118, param18}, {output018});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input018, input118},
    {output018});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_19(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_19(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input018 = model->addOperand(&type2);
  auto input118 = model->addOperand(&type0);
  auto param18 = model->addOperand(&type1);
  auto output018 = model->addOperand(&type3);
  auto input018_tmp = model->addOperand(&type2);
  auto dummy72 = model->addOperand(&type10);
  auto param136 = model->addOperand(&type1);
  auto input118_tmp = model->addOperand(&type0);
  auto dummy73 = model->addOperand(&type6);
  auto param137 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static uint8_t dummy72_init[] = {1};
  model->setOperandValue(dummy72, dummy72_init, sizeof(uint8_t) * 1);
  static int32_t param136_init[] = {0};
  model->setOperandValue(param136, param136_init, sizeof(int32_t) * 1);
  static uint8_t dummy73_init[] = {0};
  model->setOperandValue(dummy73, dummy73_init, sizeof(uint8_t) * 1);
  static int32_t param137_init[] = {0};
  model->setOperandValue(param137, param137_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input018_tmp, dummy72, param136}, {input018});
  model->addOperation(ANEURALNETWORKS_ADD, {input118_tmp, dummy73, param137}, {input118});
  model->addOperation(ANEURALNETWORKS_SUB, {input018, input118, param18}, {output018});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input018_tmp, input118_tmp},
    {output018});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_19(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_19(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input018 = model->addOperand(&type2);
  auto input118 = model->addOperand(&type0);
  auto param18 = model->addOperand(&type1);
  auto output018 = model->addOperand(&type8);
  auto input018_tmp = model->addOperand(&type2);
  auto dummy74 = model->addOperand(&type10);
  auto param138 = model->addOperand(&type1);
  auto input118_tmp = model->addOperand(&type0);
  auto dummy75 = model->addOperand(&type6);
  auto param139 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static uint8_t dummy74_init[] = {1};
  model->setOperandValue(dummy74, dummy74_init, sizeof(uint8_t) * 1);
  static int32_t param138_init[] = {0};
  model->setOperandValue(param138, param138_init, sizeof(int32_t) * 1);
  static uint8_t dummy75_init[] = {0};
  model->setOperandValue(dummy75, dummy75_init, sizeof(uint8_t) * 1);
  static int32_t param139_init[] = {0};
  model->setOperandValue(param139, param139_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input018_tmp, dummy74, param138}, {input018});
  model->addOperation(ANEURALNETWORKS_ADD, {input118_tmp, dummy75, param139}, {input118});
  model->addOperation(ANEURALNETWORKS_SUB, {input018, input118, param18}, {output018});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input018_tmp, input118_tmp},
    {output018});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_19(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_20(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input019 = model->addOperand(&type2);
  auto input119 = model->addOperand(&type0);
  auto param19 = model->addOperand(&type1);
  auto output019 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input019, input119, param19}, {output019});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input019, input119},
    {output019});
  assert(model->isValid());
}

bool is_ignored_20(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_20(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input019 = model->addOperand(&type2);
  auto input119 = model->addOperand(&type0);
  auto param19 = model->addOperand(&type1);
  auto output019 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input019, input119, param19}, {output019});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input019, input119},
    {output019});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_20(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_20(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input019 = model->addOperand(&type2);
  auto input119 = model->addOperand(&type0);
  auto param19 = model->addOperand(&type1);
  auto output019 = model->addOperand(&type4);
  auto input019_tmp = model->addOperand(&type2);
  auto dummy76 = model->addOperand(&type10);
  auto param140 = model->addOperand(&type1);
  auto input119_tmp = model->addOperand(&type0);
  auto dummy77 = model->addOperand(&type6);
  auto param141 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static uint8_t dummy76_init[] = {1};
  model->setOperandValue(dummy76, dummy76_init, sizeof(uint8_t) * 1);
  static int32_t param140_init[] = {0};
  model->setOperandValue(param140, param140_init, sizeof(int32_t) * 1);
  static uint8_t dummy77_init[] = {0};
  model->setOperandValue(dummy77, dummy77_init, sizeof(uint8_t) * 1);
  static int32_t param141_init[] = {0};
  model->setOperandValue(param141, param141_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input019_tmp, dummy76, param140}, {input019});
  model->addOperation(ANEURALNETWORKS_ADD, {input119_tmp, dummy77, param141}, {input119});
  model->addOperation(ANEURALNETWORKS_SUB, {input019, input119, param19}, {output019});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input019_tmp, input119_tmp},
    {output019});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_20(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_20(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input019 = model->addOperand(&type2);
  auto input119 = model->addOperand(&type0);
  auto param19 = model->addOperand(&type1);
  auto output019 = model->addOperand(&type9);
  auto input019_tmp = model->addOperand(&type2);
  auto dummy78 = model->addOperand(&type10);
  auto param142 = model->addOperand(&type1);
  auto input119_tmp = model->addOperand(&type0);
  auto dummy79 = model->addOperand(&type6);
  auto param143 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static uint8_t dummy78_init[] = {1};
  model->setOperandValue(dummy78, dummy78_init, sizeof(uint8_t) * 1);
  static int32_t param142_init[] = {0};
  model->setOperandValue(param142, param142_init, sizeof(int32_t) * 1);
  static uint8_t dummy79_init[] = {0};
  model->setOperandValue(dummy79, dummy79_init, sizeof(uint8_t) * 1);
  static int32_t param143_init[] = {0};
  model->setOperandValue(param143, param143_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input019_tmp, dummy78, param142}, {input019});
  model->addOperation(ANEURALNETWORKS_ADD, {input119_tmp, dummy79, param143}, {input119});
  model->addOperation(ANEURALNETWORKS_SUB, {input019, input119, param19}, {output019});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input019_tmp, input119_tmp},
    {output019});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_20(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_21(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  // Phase 1, operands
  auto input020 = model->addOperand(&type2);
  auto input120 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type1);
  auto output020 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input020, input120, param20}, {output020});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input020, input120},
    {output020});
  assert(model->isValid());
}

bool is_ignored_21(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_21(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input020 = model->addOperand(&type2);
  auto input120 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type1);
  auto output020 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input020, input120, param20}, {output020});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input020, input120},
    {output020});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_21(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_21(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  // Phase 1, operands
  auto input020 = model->addOperand(&type2);
  auto input120 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type1);
  auto output020 = model->addOperand(&type0);
  auto input020_tmp = model->addOperand(&type2);
  auto dummy80 = model->addOperand(&type10);
  auto param144 = model->addOperand(&type1);
  auto input120_tmp = model->addOperand(&type2);
  auto dummy81 = model->addOperand(&type10);
  auto param145 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static uint8_t dummy80_init[] = {1};
  model->setOperandValue(dummy80, dummy80_init, sizeof(uint8_t) * 1);
  static int32_t param144_init[] = {0};
  model->setOperandValue(param144, param144_init, sizeof(int32_t) * 1);
  static uint8_t dummy81_init[] = {1};
  model->setOperandValue(dummy81, dummy81_init, sizeof(uint8_t) * 1);
  static int32_t param145_init[] = {0};
  model->setOperandValue(param145, param145_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input020_tmp, dummy80, param144}, {input020});
  model->addOperation(ANEURALNETWORKS_ADD, {input120_tmp, dummy81, param145}, {input120});
  model->addOperation(ANEURALNETWORKS_SUB, {input020, input120, param20}, {output020});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input020_tmp, input120_tmp},
    {output020});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_21(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_21(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input020 = model->addOperand(&type2);
  auto input120 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type1);
  auto output020 = model->addOperand(&type5);
  auto input020_tmp = model->addOperand(&type2);
  auto dummy82 = model->addOperand(&type10);
  auto param146 = model->addOperand(&type1);
  auto input120_tmp = model->addOperand(&type2);
  auto dummy83 = model->addOperand(&type10);
  auto param147 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static uint8_t dummy82_init[] = {1};
  model->setOperandValue(dummy82, dummy82_init, sizeof(uint8_t) * 1);
  static int32_t param146_init[] = {0};
  model->setOperandValue(param146, param146_init, sizeof(int32_t) * 1);
  static uint8_t dummy83_init[] = {1};
  model->setOperandValue(dummy83, dummy83_init, sizeof(uint8_t) * 1);
  static int32_t param147_init[] = {0};
  model->setOperandValue(param147, param147_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input020_tmp, dummy82, param146}, {input020});
  model->addOperation(ANEURALNETWORKS_ADD, {input120_tmp, dummy83, param147}, {input120});
  model->addOperation(ANEURALNETWORKS_SUB, {input020, input120, param20}, {output020});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input020_tmp, input120_tmp},
    {output020});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_21(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_22(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  // Phase 1, operands
  auto input021 = model->addOperand(&type2);
  auto input121 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type1);
  auto output021 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input021, input121, param21}, {output021});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input021, input121},
    {output021});
  assert(model->isValid());
}

bool is_ignored_22(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_22(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input021 = model->addOperand(&type2);
  auto input121 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type1);
  auto output021 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input021, input121, param21}, {output021});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input021, input121},
    {output021});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_22(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_22(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  // Phase 1, operands
  auto input021 = model->addOperand(&type2);
  auto input121 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type1);
  auto output021 = model->addOperand(&type2);
  auto input021_tmp = model->addOperand(&type2);
  auto dummy84 = model->addOperand(&type10);
  auto param148 = model->addOperand(&type1);
  auto input121_tmp = model->addOperand(&type2);
  auto dummy85 = model->addOperand(&type10);
  auto param149 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static uint8_t dummy84_init[] = {1};
  model->setOperandValue(dummy84, dummy84_init, sizeof(uint8_t) * 1);
  static int32_t param148_init[] = {0};
  model->setOperandValue(param148, param148_init, sizeof(int32_t) * 1);
  static uint8_t dummy85_init[] = {1};
  model->setOperandValue(dummy85, dummy85_init, sizeof(uint8_t) * 1);
  static int32_t param149_init[] = {0};
  model->setOperandValue(param149, param149_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input021_tmp, dummy84, param148}, {input021});
  model->addOperation(ANEURALNETWORKS_ADD, {input121_tmp, dummy85, param149}, {input121});
  model->addOperation(ANEURALNETWORKS_SUB, {input021, input121, param21}, {output021});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input021_tmp, input121_tmp},
    {output021});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_22(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_22(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input021 = model->addOperand(&type2);
  auto input121 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type1);
  auto output021 = model->addOperand(&type7);
  auto input021_tmp = model->addOperand(&type2);
  auto dummy86 = model->addOperand(&type10);
  auto param150 = model->addOperand(&type1);
  auto input121_tmp = model->addOperand(&type2);
  auto dummy87 = model->addOperand(&type10);
  auto param151 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static uint8_t dummy86_init[] = {1};
  model->setOperandValue(dummy86, dummy86_init, sizeof(uint8_t) * 1);
  static int32_t param150_init[] = {0};
  model->setOperandValue(param150, param150_init, sizeof(int32_t) * 1);
  static uint8_t dummy87_init[] = {1};
  model->setOperandValue(dummy87, dummy87_init, sizeof(uint8_t) * 1);
  static int32_t param151_init[] = {0};
  model->setOperandValue(param151, param151_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input021_tmp, dummy86, param150}, {input021});
  model->addOperation(ANEURALNETWORKS_ADD, {input121_tmp, dummy87, param151}, {input121});
  model->addOperation(ANEURALNETWORKS_SUB, {input021, input121, param21}, {output021});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input021_tmp, input121_tmp},
    {output021});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_22(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_23(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input022 = model->addOperand(&type2);
  auto input122 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type1);
  auto output022 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input022, input122, param22}, {output022});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input022, input122},
    {output022});
  assert(model->isValid());
}

bool is_ignored_23(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_23(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input022 = model->addOperand(&type2);
  auto input122 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type1);
  auto output022 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input022, input122, param22}, {output022});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input022, input122},
    {output022});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_23(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_23(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input022 = model->addOperand(&type2);
  auto input122 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type1);
  auto output022 = model->addOperand(&type3);
  auto input022_tmp = model->addOperand(&type2);
  auto dummy88 = model->addOperand(&type10);
  auto param152 = model->addOperand(&type1);
  auto input122_tmp = model->addOperand(&type2);
  auto dummy89 = model->addOperand(&type10);
  auto param153 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static uint8_t dummy88_init[] = {1};
  model->setOperandValue(dummy88, dummy88_init, sizeof(uint8_t) * 1);
  static int32_t param152_init[] = {0};
  model->setOperandValue(param152, param152_init, sizeof(int32_t) * 1);
  static uint8_t dummy89_init[] = {1};
  model->setOperandValue(dummy89, dummy89_init, sizeof(uint8_t) * 1);
  static int32_t param153_init[] = {0};
  model->setOperandValue(param153, param153_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input022_tmp, dummy88, param152}, {input022});
  model->addOperation(ANEURALNETWORKS_ADD, {input122_tmp, dummy89, param153}, {input122});
  model->addOperation(ANEURALNETWORKS_SUB, {input022, input122, param22}, {output022});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input022_tmp, input122_tmp},
    {output022});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_23(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_23(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input022 = model->addOperand(&type2);
  auto input122 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type1);
  auto output022 = model->addOperand(&type8);
  auto input022_tmp = model->addOperand(&type2);
  auto dummy90 = model->addOperand(&type10);
  auto param154 = model->addOperand(&type1);
  auto input122_tmp = model->addOperand(&type2);
  auto dummy91 = model->addOperand(&type10);
  auto param155 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static uint8_t dummy90_init[] = {1};
  model->setOperandValue(dummy90, dummy90_init, sizeof(uint8_t) * 1);
  static int32_t param154_init[] = {0};
  model->setOperandValue(param154, param154_init, sizeof(int32_t) * 1);
  static uint8_t dummy91_init[] = {1};
  model->setOperandValue(dummy91, dummy91_init, sizeof(uint8_t) * 1);
  static int32_t param155_init[] = {0};
  model->setOperandValue(param155, param155_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input022_tmp, dummy90, param154}, {input022});
  model->addOperation(ANEURALNETWORKS_ADD, {input122_tmp, dummy91, param155}, {input122});
  model->addOperation(ANEURALNETWORKS_SUB, {input022, input122, param22}, {output022});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input022_tmp, input122_tmp},
    {output022});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_23(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_24(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input023 = model->addOperand(&type2);
  auto input123 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type1);
  auto output023 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input023, input123, param23}, {output023});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input023, input123},
    {output023});
  assert(model->isValid());
}

bool is_ignored_24(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_24(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input023 = model->addOperand(&type2);
  auto input123 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type1);
  auto output023 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input023, input123, param23}, {output023});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input023, input123},
    {output023});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_24(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_24(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input023 = model->addOperand(&type2);
  auto input123 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type1);
  auto output023 = model->addOperand(&type4);
  auto input023_tmp = model->addOperand(&type2);
  auto dummy92 = model->addOperand(&type10);
  auto param156 = model->addOperand(&type1);
  auto input123_tmp = model->addOperand(&type2);
  auto dummy93 = model->addOperand(&type10);
  auto param157 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static uint8_t dummy92_init[] = {1};
  model->setOperandValue(dummy92, dummy92_init, sizeof(uint8_t) * 1);
  static int32_t param156_init[] = {0};
  model->setOperandValue(param156, param156_init, sizeof(int32_t) * 1);
  static uint8_t dummy93_init[] = {1};
  model->setOperandValue(dummy93, dummy93_init, sizeof(uint8_t) * 1);
  static int32_t param157_init[] = {0};
  model->setOperandValue(param157, param157_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input023_tmp, dummy92, param156}, {input023});
  model->addOperation(ANEURALNETWORKS_ADD, {input123_tmp, dummy93, param157}, {input123});
  model->addOperation(ANEURALNETWORKS_SUB, {input023, input123, param23}, {output023});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input023_tmp, input123_tmp},
    {output023});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_24(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_24(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input023 = model->addOperand(&type2);
  auto input123 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type1);
  auto output023 = model->addOperand(&type9);
  auto input023_tmp = model->addOperand(&type2);
  auto dummy94 = model->addOperand(&type10);
  auto param158 = model->addOperand(&type1);
  auto input123_tmp = model->addOperand(&type2);
  auto dummy95 = model->addOperand(&type10);
  auto param159 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static uint8_t dummy94_init[] = {1};
  model->setOperandValue(dummy94, dummy94_init, sizeof(uint8_t) * 1);
  static int32_t param158_init[] = {0};
  model->setOperandValue(param158, param158_init, sizeof(int32_t) * 1);
  static uint8_t dummy95_init[] = {1};
  model->setOperandValue(dummy95, dummy95_init, sizeof(uint8_t) * 1);
  static int32_t param159_init[] = {0};
  model->setOperandValue(param159, param159_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input023_tmp, dummy94, param158}, {input023});
  model->addOperation(ANEURALNETWORKS_ADD, {input123_tmp, dummy95, param159}, {input123});
  model->addOperation(ANEURALNETWORKS_SUB, {input023, input123, param23}, {output023});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input023_tmp, input123_tmp},
    {output023});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_24(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_25(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input024 = model->addOperand(&type2);
  auto input124 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type1);
  auto output024 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input024, input124, param24}, {output024});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input024, input124},
    {output024});
  assert(model->isValid());
}

bool is_ignored_25(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_25(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input024 = model->addOperand(&type2);
  auto input124 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type1);
  auto output024 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input024, input124, param24}, {output024});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input024, input124},
    {output024});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_25(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_25(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input024 = model->addOperand(&type2);
  auto input124 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type1);
  auto output024 = model->addOperand(&type0);
  auto input024_tmp = model->addOperand(&type2);
  auto dummy96 = model->addOperand(&type10);
  auto param160 = model->addOperand(&type1);
  auto input124_tmp = model->addOperand(&type3);
  auto dummy97 = model->addOperand(&type11);
  auto param161 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static uint8_t dummy96_init[] = {1};
  model->setOperandValue(dummy96, dummy96_init, sizeof(uint8_t) * 1);
  static int32_t param160_init[] = {0};
  model->setOperandValue(param160, param160_init, sizeof(int32_t) * 1);
  static uint8_t dummy97_init[] = {120};
  model->setOperandValue(dummy97, dummy97_init, sizeof(uint8_t) * 1);
  static int32_t param161_init[] = {0};
  model->setOperandValue(param161, param161_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input024_tmp, dummy96, param160}, {input024});
  model->addOperation(ANEURALNETWORKS_ADD, {input124_tmp, dummy97, param161}, {input124});
  model->addOperation(ANEURALNETWORKS_SUB, {input024, input124, param24}, {output024});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input024_tmp, input124_tmp},
    {output024});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_25(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_25(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input024 = model->addOperand(&type2);
  auto input124 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type1);
  auto output024 = model->addOperand(&type5);
  auto input024_tmp = model->addOperand(&type2);
  auto dummy98 = model->addOperand(&type10);
  auto param162 = model->addOperand(&type1);
  auto input124_tmp = model->addOperand(&type3);
  auto dummy99 = model->addOperand(&type11);
  auto param163 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static uint8_t dummy98_init[] = {1};
  model->setOperandValue(dummy98, dummy98_init, sizeof(uint8_t) * 1);
  static int32_t param162_init[] = {0};
  model->setOperandValue(param162, param162_init, sizeof(int32_t) * 1);
  static uint8_t dummy99_init[] = {120};
  model->setOperandValue(dummy99, dummy99_init, sizeof(uint8_t) * 1);
  static int32_t param163_init[] = {0};
  model->setOperandValue(param163, param163_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input024_tmp, dummy98, param162}, {input024});
  model->addOperation(ANEURALNETWORKS_ADD, {input124_tmp, dummy99, param163}, {input124});
  model->addOperation(ANEURALNETWORKS_SUB, {input024, input124, param24}, {output024});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input024_tmp, input124_tmp},
    {output024});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_25(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_26(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input025 = model->addOperand(&type2);
  auto input125 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type1);
  auto output025 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input025, input125, param25}, {output025});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input025, input125},
    {output025});
  assert(model->isValid());
}

bool is_ignored_26(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_26(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input025 = model->addOperand(&type2);
  auto input125 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type1);
  auto output025 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input025, input125, param25}, {output025});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input025, input125},
    {output025});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_26(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_26(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input025 = model->addOperand(&type2);
  auto input125 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type1);
  auto output025 = model->addOperand(&type2);
  auto input025_tmp = model->addOperand(&type2);
  auto dummy100 = model->addOperand(&type10);
  auto param164 = model->addOperand(&type1);
  auto input125_tmp = model->addOperand(&type3);
  auto dummy101 = model->addOperand(&type11);
  auto param165 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static uint8_t dummy100_init[] = {1};
  model->setOperandValue(dummy100, dummy100_init, sizeof(uint8_t) * 1);
  static int32_t param164_init[] = {0};
  model->setOperandValue(param164, param164_init, sizeof(int32_t) * 1);
  static uint8_t dummy101_init[] = {120};
  model->setOperandValue(dummy101, dummy101_init, sizeof(uint8_t) * 1);
  static int32_t param165_init[] = {0};
  model->setOperandValue(param165, param165_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input025_tmp, dummy100, param164}, {input025});
  model->addOperation(ANEURALNETWORKS_ADD, {input125_tmp, dummy101, param165}, {input125});
  model->addOperation(ANEURALNETWORKS_SUB, {input025, input125, param25}, {output025});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input025_tmp, input125_tmp},
    {output025});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_26(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_26(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input025 = model->addOperand(&type2);
  auto input125 = model->addOperand(&type3);
  auto param25 = model->addOperand(&type1);
  auto output025 = model->addOperand(&type7);
  auto input025_tmp = model->addOperand(&type2);
  auto dummy102 = model->addOperand(&type10);
  auto param166 = model->addOperand(&type1);
  auto input125_tmp = model->addOperand(&type3);
  auto dummy103 = model->addOperand(&type11);
  auto param167 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static uint8_t dummy102_init[] = {1};
  model->setOperandValue(dummy102, dummy102_init, sizeof(uint8_t) * 1);
  static int32_t param166_init[] = {0};
  model->setOperandValue(param166, param166_init, sizeof(int32_t) * 1);
  static uint8_t dummy103_init[] = {120};
  model->setOperandValue(dummy103, dummy103_init, sizeof(uint8_t) * 1);
  static int32_t param167_init[] = {0};
  model->setOperandValue(param167, param167_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input025_tmp, dummy102, param166}, {input025});
  model->addOperation(ANEURALNETWORKS_ADD, {input125_tmp, dummy103, param167}, {input125});
  model->addOperation(ANEURALNETWORKS_SUB, {input025, input125, param25}, {output025});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input025_tmp, input125_tmp},
    {output025});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_26(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_27(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input026 = model->addOperand(&type2);
  auto input126 = model->addOperand(&type3);
  auto param26 = model->addOperand(&type1);
  auto output026 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input026, input126, param26}, {output026});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input026, input126},
    {output026});
  assert(model->isValid());
}

bool is_ignored_27(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_27(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input026 = model->addOperand(&type2);
  auto input126 = model->addOperand(&type3);
  auto param26 = model->addOperand(&type1);
  auto output026 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input026, input126, param26}, {output026});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input026, input126},
    {output026});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_27(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_27(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input026 = model->addOperand(&type2);
  auto input126 = model->addOperand(&type3);
  auto param26 = model->addOperand(&type1);
  auto output026 = model->addOperand(&type3);
  auto input026_tmp = model->addOperand(&type2);
  auto dummy104 = model->addOperand(&type10);
  auto param168 = model->addOperand(&type1);
  auto input126_tmp = model->addOperand(&type3);
  auto dummy105 = model->addOperand(&type11);
  auto param169 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static uint8_t dummy104_init[] = {1};
  model->setOperandValue(dummy104, dummy104_init, sizeof(uint8_t) * 1);
  static int32_t param168_init[] = {0};
  model->setOperandValue(param168, param168_init, sizeof(int32_t) * 1);
  static uint8_t dummy105_init[] = {120};
  model->setOperandValue(dummy105, dummy105_init, sizeof(uint8_t) * 1);
  static int32_t param169_init[] = {0};
  model->setOperandValue(param169, param169_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input026_tmp, dummy104, param168}, {input026});
  model->addOperation(ANEURALNETWORKS_ADD, {input126_tmp, dummy105, param169}, {input126});
  model->addOperation(ANEURALNETWORKS_SUB, {input026, input126, param26}, {output026});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input026_tmp, input126_tmp},
    {output026});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_27(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_27(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input026 = model->addOperand(&type2);
  auto input126 = model->addOperand(&type3);
  auto param26 = model->addOperand(&type1);
  auto output026 = model->addOperand(&type8);
  auto input026_tmp = model->addOperand(&type2);
  auto dummy106 = model->addOperand(&type10);
  auto param170 = model->addOperand(&type1);
  auto input126_tmp = model->addOperand(&type3);
  auto dummy107 = model->addOperand(&type11);
  auto param171 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static uint8_t dummy106_init[] = {1};
  model->setOperandValue(dummy106, dummy106_init, sizeof(uint8_t) * 1);
  static int32_t param170_init[] = {0};
  model->setOperandValue(param170, param170_init, sizeof(int32_t) * 1);
  static uint8_t dummy107_init[] = {120};
  model->setOperandValue(dummy107, dummy107_init, sizeof(uint8_t) * 1);
  static int32_t param171_init[] = {0};
  model->setOperandValue(param171, param171_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input026_tmp, dummy106, param170}, {input026});
  model->addOperation(ANEURALNETWORKS_ADD, {input126_tmp, dummy107, param171}, {input126});
  model->addOperation(ANEURALNETWORKS_SUB, {input026, input126, param26}, {output026});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input026_tmp, input126_tmp},
    {output026});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_27(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_28(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input027 = model->addOperand(&type2);
  auto input127 = model->addOperand(&type3);
  auto param27 = model->addOperand(&type1);
  auto output027 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input027, input127, param27}, {output027});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input027, input127},
    {output027});
  assert(model->isValid());
}

bool is_ignored_28(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_28(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input027 = model->addOperand(&type2);
  auto input127 = model->addOperand(&type3);
  auto param27 = model->addOperand(&type1);
  auto output027 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input027, input127, param27}, {output027});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input027, input127},
    {output027});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_28(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_28(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input027 = model->addOperand(&type2);
  auto input127 = model->addOperand(&type3);
  auto param27 = model->addOperand(&type1);
  auto output027 = model->addOperand(&type4);
  auto input027_tmp = model->addOperand(&type2);
  auto dummy108 = model->addOperand(&type10);
  auto param172 = model->addOperand(&type1);
  auto input127_tmp = model->addOperand(&type3);
  auto dummy109 = model->addOperand(&type11);
  auto param173 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static uint8_t dummy108_init[] = {1};
  model->setOperandValue(dummy108, dummy108_init, sizeof(uint8_t) * 1);
  static int32_t param172_init[] = {0};
  model->setOperandValue(param172, param172_init, sizeof(int32_t) * 1);
  static uint8_t dummy109_init[] = {120};
  model->setOperandValue(dummy109, dummy109_init, sizeof(uint8_t) * 1);
  static int32_t param173_init[] = {0};
  model->setOperandValue(param173, param173_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input027_tmp, dummy108, param172}, {input027});
  model->addOperation(ANEURALNETWORKS_ADD, {input127_tmp, dummy109, param173}, {input127});
  model->addOperation(ANEURALNETWORKS_SUB, {input027, input127, param27}, {output027});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input027_tmp, input127_tmp},
    {output027});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_28(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_28(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input027 = model->addOperand(&type2);
  auto input127 = model->addOperand(&type3);
  auto param27 = model->addOperand(&type1);
  auto output027 = model->addOperand(&type9);
  auto input027_tmp = model->addOperand(&type2);
  auto dummy110 = model->addOperand(&type10);
  auto param174 = model->addOperand(&type1);
  auto input127_tmp = model->addOperand(&type3);
  auto dummy111 = model->addOperand(&type11);
  auto param175 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static uint8_t dummy110_init[] = {1};
  model->setOperandValue(dummy110, dummy110_init, sizeof(uint8_t) * 1);
  static int32_t param174_init[] = {0};
  model->setOperandValue(param174, param174_init, sizeof(int32_t) * 1);
  static uint8_t dummy111_init[] = {120};
  model->setOperandValue(dummy111, dummy111_init, sizeof(uint8_t) * 1);
  static int32_t param175_init[] = {0};
  model->setOperandValue(param175, param175_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input027_tmp, dummy110, param174}, {input027});
  model->addOperation(ANEURALNETWORKS_ADD, {input127_tmp, dummy111, param175}, {input127});
  model->addOperation(ANEURALNETWORKS_SUB, {input027, input127, param27}, {output027});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input027_tmp, input127_tmp},
    {output027});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_28(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_29(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input028 = model->addOperand(&type2);
  auto input128 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type1);
  auto output028 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input028, input128, param28}, {output028});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input028, input128},
    {output028});
  assert(model->isValid());
}

bool is_ignored_29(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_29(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input028 = model->addOperand(&type2);
  auto input128 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type1);
  auto output028 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input028, input128, param28}, {output028});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input028, input128},
    {output028});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_29(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_29(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input028 = model->addOperand(&type2);
  auto input128 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type1);
  auto output028 = model->addOperand(&type0);
  auto input028_tmp = model->addOperand(&type2);
  auto dummy112 = model->addOperand(&type10);
  auto param176 = model->addOperand(&type1);
  auto input128_tmp = model->addOperand(&type4);
  auto dummy113 = model->addOperand(&type12);
  auto param177 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static uint8_t dummy112_init[] = {1};
  model->setOperandValue(dummy112, dummy112_init, sizeof(uint8_t) * 1);
  static int32_t param176_init[] = {0};
  model->setOperandValue(param176, param176_init, sizeof(int32_t) * 1);
  static uint8_t dummy113_init[] = {120};
  model->setOperandValue(dummy113, dummy113_init, sizeof(uint8_t) * 1);
  static int32_t param177_init[] = {0};
  model->setOperandValue(param177, param177_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input028_tmp, dummy112, param176}, {input028});
  model->addOperation(ANEURALNETWORKS_ADD, {input128_tmp, dummy113, param177}, {input128});
  model->addOperation(ANEURALNETWORKS_SUB, {input028, input128, param28}, {output028});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input028_tmp, input128_tmp},
    {output028});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_29(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_29(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input028 = model->addOperand(&type2);
  auto input128 = model->addOperand(&type4);
  auto param28 = model->addOperand(&type1);
  auto output028 = model->addOperand(&type5);
  auto input028_tmp = model->addOperand(&type2);
  auto dummy114 = model->addOperand(&type10);
  auto param178 = model->addOperand(&type1);
  auto input128_tmp = model->addOperand(&type4);
  auto dummy115 = model->addOperand(&type12);
  auto param179 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static uint8_t dummy114_init[] = {1};
  model->setOperandValue(dummy114, dummy114_init, sizeof(uint8_t) * 1);
  static int32_t param178_init[] = {0};
  model->setOperandValue(param178, param178_init, sizeof(int32_t) * 1);
  static uint8_t dummy115_init[] = {120};
  model->setOperandValue(dummy115, dummy115_init, sizeof(uint8_t) * 1);
  static int32_t param179_init[] = {0};
  model->setOperandValue(param179, param179_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input028_tmp, dummy114, param178}, {input028});
  model->addOperation(ANEURALNETWORKS_ADD, {input128_tmp, dummy115, param179}, {input128});
  model->addOperation(ANEURALNETWORKS_SUB, {input028, input128, param28}, {output028});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input028_tmp, input128_tmp},
    {output028});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_29(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_30(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input029 = model->addOperand(&type2);
  auto input129 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type1);
  auto output029 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input029, input129, param29}, {output029});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input029, input129},
    {output029});
  assert(model->isValid());
}

bool is_ignored_30(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_30(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input029 = model->addOperand(&type2);
  auto input129 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type1);
  auto output029 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input029, input129, param29}, {output029});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input029, input129},
    {output029});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_30(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_30(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input029 = model->addOperand(&type2);
  auto input129 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type1);
  auto output029 = model->addOperand(&type2);
  auto input029_tmp = model->addOperand(&type2);
  auto dummy116 = model->addOperand(&type10);
  auto param180 = model->addOperand(&type1);
  auto input129_tmp = model->addOperand(&type4);
  auto dummy117 = model->addOperand(&type12);
  auto param181 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static uint8_t dummy116_init[] = {1};
  model->setOperandValue(dummy116, dummy116_init, sizeof(uint8_t) * 1);
  static int32_t param180_init[] = {0};
  model->setOperandValue(param180, param180_init, sizeof(int32_t) * 1);
  static uint8_t dummy117_init[] = {120};
  model->setOperandValue(dummy117, dummy117_init, sizeof(uint8_t) * 1);
  static int32_t param181_init[] = {0};
  model->setOperandValue(param181, param181_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input029_tmp, dummy116, param180}, {input029});
  model->addOperation(ANEURALNETWORKS_ADD, {input129_tmp, dummy117, param181}, {input129});
  model->addOperation(ANEURALNETWORKS_SUB, {input029, input129, param29}, {output029});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input029_tmp, input129_tmp},
    {output029});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_30(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_30(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input029 = model->addOperand(&type2);
  auto input129 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type1);
  auto output029 = model->addOperand(&type7);
  auto input029_tmp = model->addOperand(&type2);
  auto dummy118 = model->addOperand(&type10);
  auto param182 = model->addOperand(&type1);
  auto input129_tmp = model->addOperand(&type4);
  auto dummy119 = model->addOperand(&type12);
  auto param183 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static uint8_t dummy118_init[] = {1};
  model->setOperandValue(dummy118, dummy118_init, sizeof(uint8_t) * 1);
  static int32_t param182_init[] = {0};
  model->setOperandValue(param182, param182_init, sizeof(int32_t) * 1);
  static uint8_t dummy119_init[] = {120};
  model->setOperandValue(dummy119, dummy119_init, sizeof(uint8_t) * 1);
  static int32_t param183_init[] = {0};
  model->setOperandValue(param183, param183_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input029_tmp, dummy118, param182}, {input029});
  model->addOperation(ANEURALNETWORKS_ADD, {input129_tmp, dummy119, param183}, {input129});
  model->addOperation(ANEURALNETWORKS_SUB, {input029, input129, param29}, {output029});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input029_tmp, input129_tmp},
    {output029});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_30(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_31(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input030 = model->addOperand(&type2);
  auto input130 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type1);
  auto output030 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input030, input130, param30}, {output030});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input030, input130},
    {output030});
  assert(model->isValid());
}

bool is_ignored_31(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_31(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input030 = model->addOperand(&type2);
  auto input130 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type1);
  auto output030 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input030, input130, param30}, {output030});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input030, input130},
    {output030});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_31(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_31(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input030 = model->addOperand(&type2);
  auto input130 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type1);
  auto output030 = model->addOperand(&type3);
  auto input030_tmp = model->addOperand(&type2);
  auto dummy120 = model->addOperand(&type10);
  auto param184 = model->addOperand(&type1);
  auto input130_tmp = model->addOperand(&type4);
  auto dummy121 = model->addOperand(&type12);
  auto param185 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static uint8_t dummy120_init[] = {1};
  model->setOperandValue(dummy120, dummy120_init, sizeof(uint8_t) * 1);
  static int32_t param184_init[] = {0};
  model->setOperandValue(param184, param184_init, sizeof(int32_t) * 1);
  static uint8_t dummy121_init[] = {120};
  model->setOperandValue(dummy121, dummy121_init, sizeof(uint8_t) * 1);
  static int32_t param185_init[] = {0};
  model->setOperandValue(param185, param185_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input030_tmp, dummy120, param184}, {input030});
  model->addOperation(ANEURALNETWORKS_ADD, {input130_tmp, dummy121, param185}, {input130});
  model->addOperation(ANEURALNETWORKS_SUB, {input030, input130, param30}, {output030});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input030_tmp, input130_tmp},
    {output030});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_31(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_31(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input030 = model->addOperand(&type2);
  auto input130 = model->addOperand(&type4);
  auto param30 = model->addOperand(&type1);
  auto output030 = model->addOperand(&type8);
  auto input030_tmp = model->addOperand(&type2);
  auto dummy122 = model->addOperand(&type10);
  auto param186 = model->addOperand(&type1);
  auto input130_tmp = model->addOperand(&type4);
  auto dummy123 = model->addOperand(&type12);
  auto param187 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static uint8_t dummy122_init[] = {1};
  model->setOperandValue(dummy122, dummy122_init, sizeof(uint8_t) * 1);
  static int32_t param186_init[] = {0};
  model->setOperandValue(param186, param186_init, sizeof(int32_t) * 1);
  static uint8_t dummy123_init[] = {120};
  model->setOperandValue(dummy123, dummy123_init, sizeof(uint8_t) * 1);
  static int32_t param187_init[] = {0};
  model->setOperandValue(param187, param187_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input030_tmp, dummy122, param186}, {input030});
  model->addOperation(ANEURALNETWORKS_ADD, {input130_tmp, dummy123, param187}, {input130});
  model->addOperation(ANEURALNETWORKS_SUB, {input030, input130, param30}, {output030});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input030_tmp, input130_tmp},
    {output030});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_31(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_32(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input031 = model->addOperand(&type2);
  auto input131 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type1);
  auto output031 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input031, input131, param31}, {output031});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input031, input131},
    {output031});
  assert(model->isValid());
}

bool is_ignored_32(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_32(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input031 = model->addOperand(&type2);
  auto input131 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type1);
  auto output031 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input031, input131, param31}, {output031});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input031, input131},
    {output031});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_32(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_32(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input031 = model->addOperand(&type2);
  auto input131 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type1);
  auto output031 = model->addOperand(&type4);
  auto input031_tmp = model->addOperand(&type2);
  auto dummy124 = model->addOperand(&type10);
  auto param188 = model->addOperand(&type1);
  auto input131_tmp = model->addOperand(&type4);
  auto dummy125 = model->addOperand(&type12);
  auto param189 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static uint8_t dummy124_init[] = {1};
  model->setOperandValue(dummy124, dummy124_init, sizeof(uint8_t) * 1);
  static int32_t param188_init[] = {0};
  model->setOperandValue(param188, param188_init, sizeof(int32_t) * 1);
  static uint8_t dummy125_init[] = {120};
  model->setOperandValue(dummy125, dummy125_init, sizeof(uint8_t) * 1);
  static int32_t param189_init[] = {0};
  model->setOperandValue(param189, param189_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input031_tmp, dummy124, param188}, {input031});
  model->addOperation(ANEURALNETWORKS_ADD, {input131_tmp, dummy125, param189}, {input131});
  model->addOperation(ANEURALNETWORKS_SUB, {input031, input131, param31}, {output031});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input031_tmp, input131_tmp},
    {output031});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_32(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_32(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input031 = model->addOperand(&type2);
  auto input131 = model->addOperand(&type4);
  auto param31 = model->addOperand(&type1);
  auto output031 = model->addOperand(&type9);
  auto input031_tmp = model->addOperand(&type2);
  auto dummy126 = model->addOperand(&type10);
  auto param190 = model->addOperand(&type1);
  auto input131_tmp = model->addOperand(&type4);
  auto dummy127 = model->addOperand(&type12);
  auto param191 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static uint8_t dummy126_init[] = {1};
  model->setOperandValue(dummy126, dummy126_init, sizeof(uint8_t) * 1);
  static int32_t param190_init[] = {0};
  model->setOperandValue(param190, param190_init, sizeof(int32_t) * 1);
  static uint8_t dummy127_init[] = {120};
  model->setOperandValue(dummy127, dummy127_init, sizeof(uint8_t) * 1);
  static int32_t param191_init[] = {0};
  model->setOperandValue(param191, param191_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input031_tmp, dummy126, param190}, {input031});
  model->addOperation(ANEURALNETWORKS_ADD, {input131_tmp, dummy127, param191}, {input131});
  model->addOperation(ANEURALNETWORKS_SUB, {input031, input131, param31}, {output031});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input031_tmp, input131_tmp},
    {output031});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_32(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_33(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input032 = model->addOperand(&type3);
  auto input132 = model->addOperand(&type0);
  auto param32 = model->addOperand(&type1);
  auto output032 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input032, input132, param32}, {output032});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input032, input132},
    {output032});
  assert(model->isValid());
}

bool is_ignored_33(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_33(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input032 = model->addOperand(&type3);
  auto input132 = model->addOperand(&type0);
  auto param32 = model->addOperand(&type1);
  auto output032 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input032, input132, param32}, {output032});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input032, input132},
    {output032});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_33(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_33(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input032 = model->addOperand(&type3);
  auto input132 = model->addOperand(&type0);
  auto param32 = model->addOperand(&type1);
  auto output032 = model->addOperand(&type0);
  auto input032_tmp = model->addOperand(&type3);
  auto dummy128 = model->addOperand(&type11);
  auto param192 = model->addOperand(&type1);
  auto input132_tmp = model->addOperand(&type0);
  auto dummy129 = model->addOperand(&type6);
  auto param193 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static uint8_t dummy128_init[] = {120};
  model->setOperandValue(dummy128, dummy128_init, sizeof(uint8_t) * 1);
  static int32_t param192_init[] = {0};
  model->setOperandValue(param192, param192_init, sizeof(int32_t) * 1);
  static uint8_t dummy129_init[] = {0};
  model->setOperandValue(dummy129, dummy129_init, sizeof(uint8_t) * 1);
  static int32_t param193_init[] = {0};
  model->setOperandValue(param193, param193_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input032_tmp, dummy128, param192}, {input032});
  model->addOperation(ANEURALNETWORKS_ADD, {input132_tmp, dummy129, param193}, {input132});
  model->addOperation(ANEURALNETWORKS_SUB, {input032, input132, param32}, {output032});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input032_tmp, input132_tmp},
    {output032});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_33(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_33(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input032 = model->addOperand(&type3);
  auto input132 = model->addOperand(&type0);
  auto param32 = model->addOperand(&type1);
  auto output032 = model->addOperand(&type5);
  auto input032_tmp = model->addOperand(&type3);
  auto dummy130 = model->addOperand(&type11);
  auto param194 = model->addOperand(&type1);
  auto input132_tmp = model->addOperand(&type0);
  auto dummy131 = model->addOperand(&type6);
  auto param195 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static uint8_t dummy130_init[] = {120};
  model->setOperandValue(dummy130, dummy130_init, sizeof(uint8_t) * 1);
  static int32_t param194_init[] = {0};
  model->setOperandValue(param194, param194_init, sizeof(int32_t) * 1);
  static uint8_t dummy131_init[] = {0};
  model->setOperandValue(dummy131, dummy131_init, sizeof(uint8_t) * 1);
  static int32_t param195_init[] = {0};
  model->setOperandValue(param195, param195_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input032_tmp, dummy130, param194}, {input032});
  model->addOperation(ANEURALNETWORKS_ADD, {input132_tmp, dummy131, param195}, {input132});
  model->addOperation(ANEURALNETWORKS_SUB, {input032, input132, param32}, {output032});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input032_tmp, input132_tmp},
    {output032});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_33(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_34(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input033 = model->addOperand(&type3);
  auto input133 = model->addOperand(&type0);
  auto param33 = model->addOperand(&type1);
  auto output033 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input033, input133, param33}, {output033});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input033, input133},
    {output033});
  assert(model->isValid());
}

bool is_ignored_34(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_34(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input033 = model->addOperand(&type3);
  auto input133 = model->addOperand(&type0);
  auto param33 = model->addOperand(&type1);
  auto output033 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input033, input133, param33}, {output033});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input033, input133},
    {output033});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_34(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_34(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input033 = model->addOperand(&type3);
  auto input133 = model->addOperand(&type0);
  auto param33 = model->addOperand(&type1);
  auto output033 = model->addOperand(&type2);
  auto input033_tmp = model->addOperand(&type3);
  auto dummy132 = model->addOperand(&type11);
  auto param196 = model->addOperand(&type1);
  auto input133_tmp = model->addOperand(&type0);
  auto dummy133 = model->addOperand(&type6);
  auto param197 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static uint8_t dummy132_init[] = {120};
  model->setOperandValue(dummy132, dummy132_init, sizeof(uint8_t) * 1);
  static int32_t param196_init[] = {0};
  model->setOperandValue(param196, param196_init, sizeof(int32_t) * 1);
  static uint8_t dummy133_init[] = {0};
  model->setOperandValue(dummy133, dummy133_init, sizeof(uint8_t) * 1);
  static int32_t param197_init[] = {0};
  model->setOperandValue(param197, param197_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input033_tmp, dummy132, param196}, {input033});
  model->addOperation(ANEURALNETWORKS_ADD, {input133_tmp, dummy133, param197}, {input133});
  model->addOperation(ANEURALNETWORKS_SUB, {input033, input133, param33}, {output033});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input033_tmp, input133_tmp},
    {output033});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_34(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_34(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input033 = model->addOperand(&type3);
  auto input133 = model->addOperand(&type0);
  auto param33 = model->addOperand(&type1);
  auto output033 = model->addOperand(&type7);
  auto input033_tmp = model->addOperand(&type3);
  auto dummy134 = model->addOperand(&type11);
  auto param198 = model->addOperand(&type1);
  auto input133_tmp = model->addOperand(&type0);
  auto dummy135 = model->addOperand(&type6);
  auto param199 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static uint8_t dummy134_init[] = {120};
  model->setOperandValue(dummy134, dummy134_init, sizeof(uint8_t) * 1);
  static int32_t param198_init[] = {0};
  model->setOperandValue(param198, param198_init, sizeof(int32_t) * 1);
  static uint8_t dummy135_init[] = {0};
  model->setOperandValue(dummy135, dummy135_init, sizeof(uint8_t) * 1);
  static int32_t param199_init[] = {0};
  model->setOperandValue(param199, param199_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input033_tmp, dummy134, param198}, {input033});
  model->addOperation(ANEURALNETWORKS_ADD, {input133_tmp, dummy135, param199}, {input133});
  model->addOperation(ANEURALNETWORKS_SUB, {input033, input133, param33}, {output033});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input033_tmp, input133_tmp},
    {output033});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_34(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_35(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input034 = model->addOperand(&type3);
  auto input134 = model->addOperand(&type0);
  auto param34 = model->addOperand(&type1);
  auto output034 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input034, input134, param34}, {output034});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input034, input134},
    {output034});
  assert(model->isValid());
}

bool is_ignored_35(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_35(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input034 = model->addOperand(&type3);
  auto input134 = model->addOperand(&type0);
  auto param34 = model->addOperand(&type1);
  auto output034 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input034, input134, param34}, {output034});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input034, input134},
    {output034});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_35(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_35(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input034 = model->addOperand(&type3);
  auto input134 = model->addOperand(&type0);
  auto param34 = model->addOperand(&type1);
  auto output034 = model->addOperand(&type3);
  auto input034_tmp = model->addOperand(&type3);
  auto dummy136 = model->addOperand(&type11);
  auto param200 = model->addOperand(&type1);
  auto input134_tmp = model->addOperand(&type0);
  auto dummy137 = model->addOperand(&type6);
  auto param201 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static uint8_t dummy136_init[] = {120};
  model->setOperandValue(dummy136, dummy136_init, sizeof(uint8_t) * 1);
  static int32_t param200_init[] = {0};
  model->setOperandValue(param200, param200_init, sizeof(int32_t) * 1);
  static uint8_t dummy137_init[] = {0};
  model->setOperandValue(dummy137, dummy137_init, sizeof(uint8_t) * 1);
  static int32_t param201_init[] = {0};
  model->setOperandValue(param201, param201_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input034_tmp, dummy136, param200}, {input034});
  model->addOperation(ANEURALNETWORKS_ADD, {input134_tmp, dummy137, param201}, {input134});
  model->addOperation(ANEURALNETWORKS_SUB, {input034, input134, param34}, {output034});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input034_tmp, input134_tmp},
    {output034});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_35(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_35(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input034 = model->addOperand(&type3);
  auto input134 = model->addOperand(&type0);
  auto param34 = model->addOperand(&type1);
  auto output034 = model->addOperand(&type8);
  auto input034_tmp = model->addOperand(&type3);
  auto dummy138 = model->addOperand(&type11);
  auto param202 = model->addOperand(&type1);
  auto input134_tmp = model->addOperand(&type0);
  auto dummy139 = model->addOperand(&type6);
  auto param203 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static uint8_t dummy138_init[] = {120};
  model->setOperandValue(dummy138, dummy138_init, sizeof(uint8_t) * 1);
  static int32_t param202_init[] = {0};
  model->setOperandValue(param202, param202_init, sizeof(int32_t) * 1);
  static uint8_t dummy139_init[] = {0};
  model->setOperandValue(dummy139, dummy139_init, sizeof(uint8_t) * 1);
  static int32_t param203_init[] = {0};
  model->setOperandValue(param203, param203_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input034_tmp, dummy138, param202}, {input034});
  model->addOperation(ANEURALNETWORKS_ADD, {input134_tmp, dummy139, param203}, {input134});
  model->addOperation(ANEURALNETWORKS_SUB, {input034, input134, param34}, {output034});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input034_tmp, input134_tmp},
    {output034});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_35(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_36(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input035 = model->addOperand(&type3);
  auto input135 = model->addOperand(&type0);
  auto param35 = model->addOperand(&type1);
  auto output035 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input035, input135, param35}, {output035});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input035, input135},
    {output035});
  assert(model->isValid());
}

bool is_ignored_36(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_36(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input035 = model->addOperand(&type3);
  auto input135 = model->addOperand(&type0);
  auto param35 = model->addOperand(&type1);
  auto output035 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input035, input135, param35}, {output035});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input035, input135},
    {output035});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_36(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_36(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input035 = model->addOperand(&type3);
  auto input135 = model->addOperand(&type0);
  auto param35 = model->addOperand(&type1);
  auto output035 = model->addOperand(&type4);
  auto input035_tmp = model->addOperand(&type3);
  auto dummy140 = model->addOperand(&type11);
  auto param204 = model->addOperand(&type1);
  auto input135_tmp = model->addOperand(&type0);
  auto dummy141 = model->addOperand(&type6);
  auto param205 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static uint8_t dummy140_init[] = {120};
  model->setOperandValue(dummy140, dummy140_init, sizeof(uint8_t) * 1);
  static int32_t param204_init[] = {0};
  model->setOperandValue(param204, param204_init, sizeof(int32_t) * 1);
  static uint8_t dummy141_init[] = {0};
  model->setOperandValue(dummy141, dummy141_init, sizeof(uint8_t) * 1);
  static int32_t param205_init[] = {0};
  model->setOperandValue(param205, param205_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input035_tmp, dummy140, param204}, {input035});
  model->addOperation(ANEURALNETWORKS_ADD, {input135_tmp, dummy141, param205}, {input135});
  model->addOperation(ANEURALNETWORKS_SUB, {input035, input135, param35}, {output035});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input035_tmp, input135_tmp},
    {output035});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_36(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_36(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input035 = model->addOperand(&type3);
  auto input135 = model->addOperand(&type0);
  auto param35 = model->addOperand(&type1);
  auto output035 = model->addOperand(&type9);
  auto input035_tmp = model->addOperand(&type3);
  auto dummy142 = model->addOperand(&type11);
  auto param206 = model->addOperand(&type1);
  auto input135_tmp = model->addOperand(&type0);
  auto dummy143 = model->addOperand(&type6);
  auto param207 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static uint8_t dummy142_init[] = {120};
  model->setOperandValue(dummy142, dummy142_init, sizeof(uint8_t) * 1);
  static int32_t param206_init[] = {0};
  model->setOperandValue(param206, param206_init, sizeof(int32_t) * 1);
  static uint8_t dummy143_init[] = {0};
  model->setOperandValue(dummy143, dummy143_init, sizeof(uint8_t) * 1);
  static int32_t param207_init[] = {0};
  model->setOperandValue(param207, param207_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input035_tmp, dummy142, param206}, {input035});
  model->addOperation(ANEURALNETWORKS_ADD, {input135_tmp, dummy143, param207}, {input135});
  model->addOperation(ANEURALNETWORKS_SUB, {input035, input135, param35}, {output035});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input035_tmp, input135_tmp},
    {output035});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_36(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_37(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input036 = model->addOperand(&type3);
  auto input136 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type1);
  auto output036 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input036, input136, param36}, {output036});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input036, input136},
    {output036});
  assert(model->isValid());
}

bool is_ignored_37(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_37(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input036 = model->addOperand(&type3);
  auto input136 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type1);
  auto output036 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input036, input136, param36}, {output036});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input036, input136},
    {output036});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_37(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_37(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input036 = model->addOperand(&type3);
  auto input136 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type1);
  auto output036 = model->addOperand(&type0);
  auto input036_tmp = model->addOperand(&type3);
  auto dummy144 = model->addOperand(&type11);
  auto param208 = model->addOperand(&type1);
  auto input136_tmp = model->addOperand(&type2);
  auto dummy145 = model->addOperand(&type10);
  auto param209 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static uint8_t dummy144_init[] = {120};
  model->setOperandValue(dummy144, dummy144_init, sizeof(uint8_t) * 1);
  static int32_t param208_init[] = {0};
  model->setOperandValue(param208, param208_init, sizeof(int32_t) * 1);
  static uint8_t dummy145_init[] = {1};
  model->setOperandValue(dummy145, dummy145_init, sizeof(uint8_t) * 1);
  static int32_t param209_init[] = {0};
  model->setOperandValue(param209, param209_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input036_tmp, dummy144, param208}, {input036});
  model->addOperation(ANEURALNETWORKS_ADD, {input136_tmp, dummy145, param209}, {input136});
  model->addOperation(ANEURALNETWORKS_SUB, {input036, input136, param36}, {output036});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input036_tmp, input136_tmp},
    {output036});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_37(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_37(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input036 = model->addOperand(&type3);
  auto input136 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type1);
  auto output036 = model->addOperand(&type5);
  auto input036_tmp = model->addOperand(&type3);
  auto dummy146 = model->addOperand(&type11);
  auto param210 = model->addOperand(&type1);
  auto input136_tmp = model->addOperand(&type2);
  auto dummy147 = model->addOperand(&type10);
  auto param211 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static uint8_t dummy146_init[] = {120};
  model->setOperandValue(dummy146, dummy146_init, sizeof(uint8_t) * 1);
  static int32_t param210_init[] = {0};
  model->setOperandValue(param210, param210_init, sizeof(int32_t) * 1);
  static uint8_t dummy147_init[] = {1};
  model->setOperandValue(dummy147, dummy147_init, sizeof(uint8_t) * 1);
  static int32_t param211_init[] = {0};
  model->setOperandValue(param211, param211_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input036_tmp, dummy146, param210}, {input036});
  model->addOperation(ANEURALNETWORKS_ADD, {input136_tmp, dummy147, param211}, {input136});
  model->addOperation(ANEURALNETWORKS_SUB, {input036, input136, param36}, {output036});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input036_tmp, input136_tmp},
    {output036});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_37(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_38(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input037 = model->addOperand(&type3);
  auto input137 = model->addOperand(&type2);
  auto param37 = model->addOperand(&type1);
  auto output037 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input037, input137, param37}, {output037});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input037, input137},
    {output037});
  assert(model->isValid());
}

bool is_ignored_38(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_38(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input037 = model->addOperand(&type3);
  auto input137 = model->addOperand(&type2);
  auto param37 = model->addOperand(&type1);
  auto output037 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input037, input137, param37}, {output037});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input037, input137},
    {output037});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_38(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_38(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input037 = model->addOperand(&type3);
  auto input137 = model->addOperand(&type2);
  auto param37 = model->addOperand(&type1);
  auto output037 = model->addOperand(&type2);
  auto input037_tmp = model->addOperand(&type3);
  auto dummy148 = model->addOperand(&type11);
  auto param212 = model->addOperand(&type1);
  auto input137_tmp = model->addOperand(&type2);
  auto dummy149 = model->addOperand(&type10);
  auto param213 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static uint8_t dummy148_init[] = {120};
  model->setOperandValue(dummy148, dummy148_init, sizeof(uint8_t) * 1);
  static int32_t param212_init[] = {0};
  model->setOperandValue(param212, param212_init, sizeof(int32_t) * 1);
  static uint8_t dummy149_init[] = {1};
  model->setOperandValue(dummy149, dummy149_init, sizeof(uint8_t) * 1);
  static int32_t param213_init[] = {0};
  model->setOperandValue(param213, param213_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input037_tmp, dummy148, param212}, {input037});
  model->addOperation(ANEURALNETWORKS_ADD, {input137_tmp, dummy149, param213}, {input137});
  model->addOperation(ANEURALNETWORKS_SUB, {input037, input137, param37}, {output037});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input037_tmp, input137_tmp},
    {output037});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_38(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_38(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input037 = model->addOperand(&type3);
  auto input137 = model->addOperand(&type2);
  auto param37 = model->addOperand(&type1);
  auto output037 = model->addOperand(&type7);
  auto input037_tmp = model->addOperand(&type3);
  auto dummy150 = model->addOperand(&type11);
  auto param214 = model->addOperand(&type1);
  auto input137_tmp = model->addOperand(&type2);
  auto dummy151 = model->addOperand(&type10);
  auto param215 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static uint8_t dummy150_init[] = {120};
  model->setOperandValue(dummy150, dummy150_init, sizeof(uint8_t) * 1);
  static int32_t param214_init[] = {0};
  model->setOperandValue(param214, param214_init, sizeof(int32_t) * 1);
  static uint8_t dummy151_init[] = {1};
  model->setOperandValue(dummy151, dummy151_init, sizeof(uint8_t) * 1);
  static int32_t param215_init[] = {0};
  model->setOperandValue(param215, param215_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input037_tmp, dummy150, param214}, {input037});
  model->addOperation(ANEURALNETWORKS_ADD, {input137_tmp, dummy151, param215}, {input137});
  model->addOperation(ANEURALNETWORKS_SUB, {input037, input137, param37}, {output037});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input037_tmp, input137_tmp},
    {output037});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_38(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_39(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input038 = model->addOperand(&type3);
  auto input138 = model->addOperand(&type2);
  auto param38 = model->addOperand(&type1);
  auto output038 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input038, input138, param38}, {output038});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input038, input138},
    {output038});
  assert(model->isValid());
}

bool is_ignored_39(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_39(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input038 = model->addOperand(&type3);
  auto input138 = model->addOperand(&type2);
  auto param38 = model->addOperand(&type1);
  auto output038 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input038, input138, param38}, {output038});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input038, input138},
    {output038});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_39(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_39(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input038 = model->addOperand(&type3);
  auto input138 = model->addOperand(&type2);
  auto param38 = model->addOperand(&type1);
  auto output038 = model->addOperand(&type3);
  auto input038_tmp = model->addOperand(&type3);
  auto dummy152 = model->addOperand(&type11);
  auto param216 = model->addOperand(&type1);
  auto input138_tmp = model->addOperand(&type2);
  auto dummy153 = model->addOperand(&type10);
  auto param217 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static uint8_t dummy152_init[] = {120};
  model->setOperandValue(dummy152, dummy152_init, sizeof(uint8_t) * 1);
  static int32_t param216_init[] = {0};
  model->setOperandValue(param216, param216_init, sizeof(int32_t) * 1);
  static uint8_t dummy153_init[] = {1};
  model->setOperandValue(dummy153, dummy153_init, sizeof(uint8_t) * 1);
  static int32_t param217_init[] = {0};
  model->setOperandValue(param217, param217_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input038_tmp, dummy152, param216}, {input038});
  model->addOperation(ANEURALNETWORKS_ADD, {input138_tmp, dummy153, param217}, {input138});
  model->addOperation(ANEURALNETWORKS_SUB, {input038, input138, param38}, {output038});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input038_tmp, input138_tmp},
    {output038});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_39(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_39(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input038 = model->addOperand(&type3);
  auto input138 = model->addOperand(&type2);
  auto param38 = model->addOperand(&type1);
  auto output038 = model->addOperand(&type8);
  auto input038_tmp = model->addOperand(&type3);
  auto dummy154 = model->addOperand(&type11);
  auto param218 = model->addOperand(&type1);
  auto input138_tmp = model->addOperand(&type2);
  auto dummy155 = model->addOperand(&type10);
  auto param219 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static uint8_t dummy154_init[] = {120};
  model->setOperandValue(dummy154, dummy154_init, sizeof(uint8_t) * 1);
  static int32_t param218_init[] = {0};
  model->setOperandValue(param218, param218_init, sizeof(int32_t) * 1);
  static uint8_t dummy155_init[] = {1};
  model->setOperandValue(dummy155, dummy155_init, sizeof(uint8_t) * 1);
  static int32_t param219_init[] = {0};
  model->setOperandValue(param219, param219_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input038_tmp, dummy154, param218}, {input038});
  model->addOperation(ANEURALNETWORKS_ADD, {input138_tmp, dummy155, param219}, {input138});
  model->addOperation(ANEURALNETWORKS_SUB, {input038, input138, param38}, {output038});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input038_tmp, input138_tmp},
    {output038});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_39(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_40(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input039 = model->addOperand(&type3);
  auto input139 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type1);
  auto output039 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input039, input139, param39}, {output039});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input039, input139},
    {output039});
  assert(model->isValid());
}

bool is_ignored_40(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_40(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input039 = model->addOperand(&type3);
  auto input139 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type1);
  auto output039 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input039, input139, param39}, {output039});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input039, input139},
    {output039});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_40(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_40(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input039 = model->addOperand(&type3);
  auto input139 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type1);
  auto output039 = model->addOperand(&type4);
  auto input039_tmp = model->addOperand(&type3);
  auto dummy156 = model->addOperand(&type11);
  auto param220 = model->addOperand(&type1);
  auto input139_tmp = model->addOperand(&type2);
  auto dummy157 = model->addOperand(&type10);
  auto param221 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static uint8_t dummy156_init[] = {120};
  model->setOperandValue(dummy156, dummy156_init, sizeof(uint8_t) * 1);
  static int32_t param220_init[] = {0};
  model->setOperandValue(param220, param220_init, sizeof(int32_t) * 1);
  static uint8_t dummy157_init[] = {1};
  model->setOperandValue(dummy157, dummy157_init, sizeof(uint8_t) * 1);
  static int32_t param221_init[] = {0};
  model->setOperandValue(param221, param221_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input039_tmp, dummy156, param220}, {input039});
  model->addOperation(ANEURALNETWORKS_ADD, {input139_tmp, dummy157, param221}, {input139});
  model->addOperation(ANEURALNETWORKS_SUB, {input039, input139, param39}, {output039});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input039_tmp, input139_tmp},
    {output039});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_40(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_40(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input039 = model->addOperand(&type3);
  auto input139 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type1);
  auto output039 = model->addOperand(&type9);
  auto input039_tmp = model->addOperand(&type3);
  auto dummy158 = model->addOperand(&type11);
  auto param222 = model->addOperand(&type1);
  auto input139_tmp = model->addOperand(&type2);
  auto dummy159 = model->addOperand(&type10);
  auto param223 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static uint8_t dummy158_init[] = {120};
  model->setOperandValue(dummy158, dummy158_init, sizeof(uint8_t) * 1);
  static int32_t param222_init[] = {0};
  model->setOperandValue(param222, param222_init, sizeof(int32_t) * 1);
  static uint8_t dummy159_init[] = {1};
  model->setOperandValue(dummy159, dummy159_init, sizeof(uint8_t) * 1);
  static int32_t param223_init[] = {0};
  model->setOperandValue(param223, param223_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input039_tmp, dummy158, param222}, {input039});
  model->addOperation(ANEURALNETWORKS_ADD, {input139_tmp, dummy159, param223}, {input139});
  model->addOperation(ANEURALNETWORKS_SUB, {input039, input139, param39}, {output039});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input039_tmp, input139_tmp},
    {output039});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_40(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_41(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input040 = model->addOperand(&type3);
  auto input140 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type1);
  auto output040 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input040, input140, param40}, {output040});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input040, input140},
    {output040});
  assert(model->isValid());
}

bool is_ignored_41(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_41(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input040 = model->addOperand(&type3);
  auto input140 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type1);
  auto output040 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input040, input140, param40}, {output040});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input040, input140},
    {output040});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_41(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_41(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input040 = model->addOperand(&type3);
  auto input140 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type1);
  auto output040 = model->addOperand(&type0);
  auto input040_tmp = model->addOperand(&type3);
  auto dummy160 = model->addOperand(&type11);
  auto param224 = model->addOperand(&type1);
  auto input140_tmp = model->addOperand(&type3);
  auto dummy161 = model->addOperand(&type11);
  auto param225 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static uint8_t dummy160_init[] = {120};
  model->setOperandValue(dummy160, dummy160_init, sizeof(uint8_t) * 1);
  static int32_t param224_init[] = {0};
  model->setOperandValue(param224, param224_init, sizeof(int32_t) * 1);
  static uint8_t dummy161_init[] = {120};
  model->setOperandValue(dummy161, dummy161_init, sizeof(uint8_t) * 1);
  static int32_t param225_init[] = {0};
  model->setOperandValue(param225, param225_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input040_tmp, dummy160, param224}, {input040});
  model->addOperation(ANEURALNETWORKS_ADD, {input140_tmp, dummy161, param225}, {input140});
  model->addOperation(ANEURALNETWORKS_SUB, {input040, input140, param40}, {output040});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input040_tmp, input140_tmp},
    {output040});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_41(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_41(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input040 = model->addOperand(&type3);
  auto input140 = model->addOperand(&type3);
  auto param40 = model->addOperand(&type1);
  auto output040 = model->addOperand(&type5);
  auto input040_tmp = model->addOperand(&type3);
  auto dummy162 = model->addOperand(&type11);
  auto param226 = model->addOperand(&type1);
  auto input140_tmp = model->addOperand(&type3);
  auto dummy163 = model->addOperand(&type11);
  auto param227 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static uint8_t dummy162_init[] = {120};
  model->setOperandValue(dummy162, dummy162_init, sizeof(uint8_t) * 1);
  static int32_t param226_init[] = {0};
  model->setOperandValue(param226, param226_init, sizeof(int32_t) * 1);
  static uint8_t dummy163_init[] = {120};
  model->setOperandValue(dummy163, dummy163_init, sizeof(uint8_t) * 1);
  static int32_t param227_init[] = {0};
  model->setOperandValue(param227, param227_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input040_tmp, dummy162, param226}, {input040});
  model->addOperation(ANEURALNETWORKS_ADD, {input140_tmp, dummy163, param227}, {input140});
  model->addOperation(ANEURALNETWORKS_SUB, {input040, input140, param40}, {output040});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input040_tmp, input140_tmp},
    {output040});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_41(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_42(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input041 = model->addOperand(&type3);
  auto input141 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type1);
  auto output041 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input041, input141, param41}, {output041});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input041, input141},
    {output041});
  assert(model->isValid());
}

bool is_ignored_42(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_42(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input041 = model->addOperand(&type3);
  auto input141 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type1);
  auto output041 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input041, input141, param41}, {output041});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input041, input141},
    {output041});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_42(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_42(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input041 = model->addOperand(&type3);
  auto input141 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type1);
  auto output041 = model->addOperand(&type2);
  auto input041_tmp = model->addOperand(&type3);
  auto dummy164 = model->addOperand(&type11);
  auto param228 = model->addOperand(&type1);
  auto input141_tmp = model->addOperand(&type3);
  auto dummy165 = model->addOperand(&type11);
  auto param229 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static uint8_t dummy164_init[] = {120};
  model->setOperandValue(dummy164, dummy164_init, sizeof(uint8_t) * 1);
  static int32_t param228_init[] = {0};
  model->setOperandValue(param228, param228_init, sizeof(int32_t) * 1);
  static uint8_t dummy165_init[] = {120};
  model->setOperandValue(dummy165, dummy165_init, sizeof(uint8_t) * 1);
  static int32_t param229_init[] = {0};
  model->setOperandValue(param229, param229_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input041_tmp, dummy164, param228}, {input041});
  model->addOperation(ANEURALNETWORKS_ADD, {input141_tmp, dummy165, param229}, {input141});
  model->addOperation(ANEURALNETWORKS_SUB, {input041, input141, param41}, {output041});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input041_tmp, input141_tmp},
    {output041});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_42(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_42(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input041 = model->addOperand(&type3);
  auto input141 = model->addOperand(&type3);
  auto param41 = model->addOperand(&type1);
  auto output041 = model->addOperand(&type7);
  auto input041_tmp = model->addOperand(&type3);
  auto dummy166 = model->addOperand(&type11);
  auto param230 = model->addOperand(&type1);
  auto input141_tmp = model->addOperand(&type3);
  auto dummy167 = model->addOperand(&type11);
  auto param231 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static uint8_t dummy166_init[] = {120};
  model->setOperandValue(dummy166, dummy166_init, sizeof(uint8_t) * 1);
  static int32_t param230_init[] = {0};
  model->setOperandValue(param230, param230_init, sizeof(int32_t) * 1);
  static uint8_t dummy167_init[] = {120};
  model->setOperandValue(dummy167, dummy167_init, sizeof(uint8_t) * 1);
  static int32_t param231_init[] = {0};
  model->setOperandValue(param231, param231_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input041_tmp, dummy166, param230}, {input041});
  model->addOperation(ANEURALNETWORKS_ADD, {input141_tmp, dummy167, param231}, {input141});
  model->addOperation(ANEURALNETWORKS_SUB, {input041, input141, param41}, {output041});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input041_tmp, input141_tmp},
    {output041});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_42(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_43(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input042 = model->addOperand(&type3);
  auto input142 = model->addOperand(&type3);
  auto param42 = model->addOperand(&type1);
  auto output042 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param42_init[] = {0};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input042, input142, param42}, {output042});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input042, input142},
    {output042});
  assert(model->isValid());
}

bool is_ignored_43(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_43(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input042 = model->addOperand(&type3);
  auto input142 = model->addOperand(&type3);
  auto param42 = model->addOperand(&type1);
  auto output042 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param42_init[] = {0};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input042, input142, param42}, {output042});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input042, input142},
    {output042});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_43(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_43(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  // Phase 1, operands
  auto input042 = model->addOperand(&type3);
  auto input142 = model->addOperand(&type3);
  auto param42 = model->addOperand(&type1);
  auto output042 = model->addOperand(&type3);
  auto input042_tmp = model->addOperand(&type3);
  auto dummy168 = model->addOperand(&type11);
  auto param232 = model->addOperand(&type1);
  auto input142_tmp = model->addOperand(&type3);
  auto dummy169 = model->addOperand(&type11);
  auto param233 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param42_init[] = {0};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static uint8_t dummy168_init[] = {120};
  model->setOperandValue(dummy168, dummy168_init, sizeof(uint8_t) * 1);
  static int32_t param232_init[] = {0};
  model->setOperandValue(param232, param232_init, sizeof(int32_t) * 1);
  static uint8_t dummy169_init[] = {120};
  model->setOperandValue(dummy169, dummy169_init, sizeof(uint8_t) * 1);
  static int32_t param233_init[] = {0};
  model->setOperandValue(param233, param233_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input042_tmp, dummy168, param232}, {input042});
  model->addOperation(ANEURALNETWORKS_ADD, {input142_tmp, dummy169, param233}, {input142});
  model->addOperation(ANEURALNETWORKS_SUB, {input042, input142, param42}, {output042});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input042_tmp, input142_tmp},
    {output042});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_43(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_43(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input042 = model->addOperand(&type3);
  auto input142 = model->addOperand(&type3);
  auto param42 = model->addOperand(&type1);
  auto output042 = model->addOperand(&type8);
  auto input042_tmp = model->addOperand(&type3);
  auto dummy170 = model->addOperand(&type11);
  auto param234 = model->addOperand(&type1);
  auto input142_tmp = model->addOperand(&type3);
  auto dummy171 = model->addOperand(&type11);
  auto param235 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param42_init[] = {0};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static uint8_t dummy170_init[] = {120};
  model->setOperandValue(dummy170, dummy170_init, sizeof(uint8_t) * 1);
  static int32_t param234_init[] = {0};
  model->setOperandValue(param234, param234_init, sizeof(int32_t) * 1);
  static uint8_t dummy171_init[] = {120};
  model->setOperandValue(dummy171, dummy171_init, sizeof(uint8_t) * 1);
  static int32_t param235_init[] = {0};
  model->setOperandValue(param235, param235_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input042_tmp, dummy170, param234}, {input042});
  model->addOperation(ANEURALNETWORKS_ADD, {input142_tmp, dummy171, param235}, {input142});
  model->addOperation(ANEURALNETWORKS_SUB, {input042, input142, param42}, {output042});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input042_tmp, input142_tmp},
    {output042});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_43(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_44(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input043 = model->addOperand(&type3);
  auto input143 = model->addOperand(&type3);
  auto param43 = model->addOperand(&type1);
  auto output043 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param43_init[] = {0};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input043, input143, param43}, {output043});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input043, input143},
    {output043});
  assert(model->isValid());
}

bool is_ignored_44(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_44(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input043 = model->addOperand(&type3);
  auto input143 = model->addOperand(&type3);
  auto param43 = model->addOperand(&type1);
  auto output043 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param43_init[] = {0};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input043, input143, param43}, {output043});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input043, input143},
    {output043});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_44(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_44(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input043 = model->addOperand(&type3);
  auto input143 = model->addOperand(&type3);
  auto param43 = model->addOperand(&type1);
  auto output043 = model->addOperand(&type4);
  auto input043_tmp = model->addOperand(&type3);
  auto dummy172 = model->addOperand(&type11);
  auto param236 = model->addOperand(&type1);
  auto input143_tmp = model->addOperand(&type3);
  auto dummy173 = model->addOperand(&type11);
  auto param237 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param43_init[] = {0};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static uint8_t dummy172_init[] = {120};
  model->setOperandValue(dummy172, dummy172_init, sizeof(uint8_t) * 1);
  static int32_t param236_init[] = {0};
  model->setOperandValue(param236, param236_init, sizeof(int32_t) * 1);
  static uint8_t dummy173_init[] = {120};
  model->setOperandValue(dummy173, dummy173_init, sizeof(uint8_t) * 1);
  static int32_t param237_init[] = {0};
  model->setOperandValue(param237, param237_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input043_tmp, dummy172, param236}, {input043});
  model->addOperation(ANEURALNETWORKS_ADD, {input143_tmp, dummy173, param237}, {input143});
  model->addOperation(ANEURALNETWORKS_SUB, {input043, input143, param43}, {output043});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input043_tmp, input143_tmp},
    {output043});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_44(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_44(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input043 = model->addOperand(&type3);
  auto input143 = model->addOperand(&type3);
  auto param43 = model->addOperand(&type1);
  auto output043 = model->addOperand(&type9);
  auto input043_tmp = model->addOperand(&type3);
  auto dummy174 = model->addOperand(&type11);
  auto param238 = model->addOperand(&type1);
  auto input143_tmp = model->addOperand(&type3);
  auto dummy175 = model->addOperand(&type11);
  auto param239 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param43_init[] = {0};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static uint8_t dummy174_init[] = {120};
  model->setOperandValue(dummy174, dummy174_init, sizeof(uint8_t) * 1);
  static int32_t param238_init[] = {0};
  model->setOperandValue(param238, param238_init, sizeof(int32_t) * 1);
  static uint8_t dummy175_init[] = {120};
  model->setOperandValue(dummy175, dummy175_init, sizeof(uint8_t) * 1);
  static int32_t param239_init[] = {0};
  model->setOperandValue(param239, param239_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input043_tmp, dummy174, param238}, {input043});
  model->addOperation(ANEURALNETWORKS_ADD, {input143_tmp, dummy175, param239}, {input143});
  model->addOperation(ANEURALNETWORKS_SUB, {input043, input143, param43}, {output043});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input043_tmp, input143_tmp},
    {output043});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_44(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_45(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input044 = model->addOperand(&type3);
  auto input144 = model->addOperand(&type4);
  auto param44 = model->addOperand(&type1);
  auto output044 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param44_init[] = {0};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input044, input144, param44}, {output044});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input044, input144},
    {output044});
  assert(model->isValid());
}

bool is_ignored_45(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_45(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input044 = model->addOperand(&type3);
  auto input144 = model->addOperand(&type4);
  auto param44 = model->addOperand(&type1);
  auto output044 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param44_init[] = {0};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input044, input144, param44}, {output044});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input044, input144},
    {output044});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_45(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_45(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input044 = model->addOperand(&type3);
  auto input144 = model->addOperand(&type4);
  auto param44 = model->addOperand(&type1);
  auto output044 = model->addOperand(&type0);
  auto input044_tmp = model->addOperand(&type3);
  auto dummy176 = model->addOperand(&type11);
  auto param240 = model->addOperand(&type1);
  auto input144_tmp = model->addOperand(&type4);
  auto dummy177 = model->addOperand(&type12);
  auto param241 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param44_init[] = {0};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static uint8_t dummy176_init[] = {120};
  model->setOperandValue(dummy176, dummy176_init, sizeof(uint8_t) * 1);
  static int32_t param240_init[] = {0};
  model->setOperandValue(param240, param240_init, sizeof(int32_t) * 1);
  static uint8_t dummy177_init[] = {120};
  model->setOperandValue(dummy177, dummy177_init, sizeof(uint8_t) * 1);
  static int32_t param241_init[] = {0};
  model->setOperandValue(param241, param241_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input044_tmp, dummy176, param240}, {input044});
  model->addOperation(ANEURALNETWORKS_ADD, {input144_tmp, dummy177, param241}, {input144});
  model->addOperation(ANEURALNETWORKS_SUB, {input044, input144, param44}, {output044});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input044_tmp, input144_tmp},
    {output044});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_45(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_45(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input044 = model->addOperand(&type3);
  auto input144 = model->addOperand(&type4);
  auto param44 = model->addOperand(&type1);
  auto output044 = model->addOperand(&type5);
  auto input044_tmp = model->addOperand(&type3);
  auto dummy178 = model->addOperand(&type11);
  auto param242 = model->addOperand(&type1);
  auto input144_tmp = model->addOperand(&type4);
  auto dummy179 = model->addOperand(&type12);
  auto param243 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param44_init[] = {0};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static uint8_t dummy178_init[] = {120};
  model->setOperandValue(dummy178, dummy178_init, sizeof(uint8_t) * 1);
  static int32_t param242_init[] = {0};
  model->setOperandValue(param242, param242_init, sizeof(int32_t) * 1);
  static uint8_t dummy179_init[] = {120};
  model->setOperandValue(dummy179, dummy179_init, sizeof(uint8_t) * 1);
  static int32_t param243_init[] = {0};
  model->setOperandValue(param243, param243_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input044_tmp, dummy178, param242}, {input044});
  model->addOperation(ANEURALNETWORKS_ADD, {input144_tmp, dummy179, param243}, {input144});
  model->addOperation(ANEURALNETWORKS_SUB, {input044, input144, param44}, {output044});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input044_tmp, input144_tmp},
    {output044});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_45(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_46(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input045 = model->addOperand(&type3);
  auto input145 = model->addOperand(&type4);
  auto param45 = model->addOperand(&type1);
  auto output045 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input045, input145, param45}, {output045});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input045, input145},
    {output045});
  assert(model->isValid());
}

bool is_ignored_46(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_46(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input045 = model->addOperand(&type3);
  auto input145 = model->addOperand(&type4);
  auto param45 = model->addOperand(&type1);
  auto output045 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input045, input145, param45}, {output045});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input045, input145},
    {output045});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_46(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_46(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input045 = model->addOperand(&type3);
  auto input145 = model->addOperand(&type4);
  auto param45 = model->addOperand(&type1);
  auto output045 = model->addOperand(&type2);
  auto input045_tmp = model->addOperand(&type3);
  auto dummy180 = model->addOperand(&type11);
  auto param244 = model->addOperand(&type1);
  auto input145_tmp = model->addOperand(&type4);
  auto dummy181 = model->addOperand(&type12);
  auto param245 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static uint8_t dummy180_init[] = {120};
  model->setOperandValue(dummy180, dummy180_init, sizeof(uint8_t) * 1);
  static int32_t param244_init[] = {0};
  model->setOperandValue(param244, param244_init, sizeof(int32_t) * 1);
  static uint8_t dummy181_init[] = {120};
  model->setOperandValue(dummy181, dummy181_init, sizeof(uint8_t) * 1);
  static int32_t param245_init[] = {0};
  model->setOperandValue(param245, param245_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input045_tmp, dummy180, param244}, {input045});
  model->addOperation(ANEURALNETWORKS_ADD, {input145_tmp, dummy181, param245}, {input145});
  model->addOperation(ANEURALNETWORKS_SUB, {input045, input145, param45}, {output045});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input045_tmp, input145_tmp},
    {output045});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_46(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_46(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input045 = model->addOperand(&type3);
  auto input145 = model->addOperand(&type4);
  auto param45 = model->addOperand(&type1);
  auto output045 = model->addOperand(&type7);
  auto input045_tmp = model->addOperand(&type3);
  auto dummy182 = model->addOperand(&type11);
  auto param246 = model->addOperand(&type1);
  auto input145_tmp = model->addOperand(&type4);
  auto dummy183 = model->addOperand(&type12);
  auto param247 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static uint8_t dummy182_init[] = {120};
  model->setOperandValue(dummy182, dummy182_init, sizeof(uint8_t) * 1);
  static int32_t param246_init[] = {0};
  model->setOperandValue(param246, param246_init, sizeof(int32_t) * 1);
  static uint8_t dummy183_init[] = {120};
  model->setOperandValue(dummy183, dummy183_init, sizeof(uint8_t) * 1);
  static int32_t param247_init[] = {0};
  model->setOperandValue(param247, param247_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input045_tmp, dummy182, param246}, {input045});
  model->addOperation(ANEURALNETWORKS_ADD, {input145_tmp, dummy183, param247}, {input145});
  model->addOperation(ANEURALNETWORKS_SUB, {input045, input145, param45}, {output045});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input045_tmp, input145_tmp},
    {output045});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_46(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_47(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input046 = model->addOperand(&type3);
  auto input146 = model->addOperand(&type4);
  auto param46 = model->addOperand(&type1);
  auto output046 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input046, input146, param46}, {output046});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input046, input146},
    {output046});
  assert(model->isValid());
}

bool is_ignored_47(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_47(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input046 = model->addOperand(&type3);
  auto input146 = model->addOperand(&type4);
  auto param46 = model->addOperand(&type1);
  auto output046 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input046, input146, param46}, {output046});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input046, input146},
    {output046});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_47(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_47(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input046 = model->addOperand(&type3);
  auto input146 = model->addOperand(&type4);
  auto param46 = model->addOperand(&type1);
  auto output046 = model->addOperand(&type3);
  auto input046_tmp = model->addOperand(&type3);
  auto dummy184 = model->addOperand(&type11);
  auto param248 = model->addOperand(&type1);
  auto input146_tmp = model->addOperand(&type4);
  auto dummy185 = model->addOperand(&type12);
  auto param249 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static uint8_t dummy184_init[] = {120};
  model->setOperandValue(dummy184, dummy184_init, sizeof(uint8_t) * 1);
  static int32_t param248_init[] = {0};
  model->setOperandValue(param248, param248_init, sizeof(int32_t) * 1);
  static uint8_t dummy185_init[] = {120};
  model->setOperandValue(dummy185, dummy185_init, sizeof(uint8_t) * 1);
  static int32_t param249_init[] = {0};
  model->setOperandValue(param249, param249_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input046_tmp, dummy184, param248}, {input046});
  model->addOperation(ANEURALNETWORKS_ADD, {input146_tmp, dummy185, param249}, {input146});
  model->addOperation(ANEURALNETWORKS_SUB, {input046, input146, param46}, {output046});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input046_tmp, input146_tmp},
    {output046});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_47(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_47(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input046 = model->addOperand(&type3);
  auto input146 = model->addOperand(&type4);
  auto param46 = model->addOperand(&type1);
  auto output046 = model->addOperand(&type8);
  auto input046_tmp = model->addOperand(&type3);
  auto dummy186 = model->addOperand(&type11);
  auto param250 = model->addOperand(&type1);
  auto input146_tmp = model->addOperand(&type4);
  auto dummy187 = model->addOperand(&type12);
  auto param251 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static uint8_t dummy186_init[] = {120};
  model->setOperandValue(dummy186, dummy186_init, sizeof(uint8_t) * 1);
  static int32_t param250_init[] = {0};
  model->setOperandValue(param250, param250_init, sizeof(int32_t) * 1);
  static uint8_t dummy187_init[] = {120};
  model->setOperandValue(dummy187, dummy187_init, sizeof(uint8_t) * 1);
  static int32_t param251_init[] = {0};
  model->setOperandValue(param251, param251_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input046_tmp, dummy186, param250}, {input046});
  model->addOperation(ANEURALNETWORKS_ADD, {input146_tmp, dummy187, param251}, {input146});
  model->addOperation(ANEURALNETWORKS_SUB, {input046, input146, param46}, {output046});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input046_tmp, input146_tmp},
    {output046});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_47(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_48(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input047 = model->addOperand(&type3);
  auto input147 = model->addOperand(&type4);
  auto param47 = model->addOperand(&type1);
  auto output047 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input047, input147, param47}, {output047});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input047, input147},
    {output047});
  assert(model->isValid());
}

bool is_ignored_48(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_48(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input047 = model->addOperand(&type3);
  auto input147 = model->addOperand(&type4);
  auto param47 = model->addOperand(&type1);
  auto output047 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input047, input147, param47}, {output047});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input047, input147},
    {output047});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_48(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_48(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input047 = model->addOperand(&type3);
  auto input147 = model->addOperand(&type4);
  auto param47 = model->addOperand(&type1);
  auto output047 = model->addOperand(&type4);
  auto input047_tmp = model->addOperand(&type3);
  auto dummy188 = model->addOperand(&type11);
  auto param252 = model->addOperand(&type1);
  auto input147_tmp = model->addOperand(&type4);
  auto dummy189 = model->addOperand(&type12);
  auto param253 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static uint8_t dummy188_init[] = {120};
  model->setOperandValue(dummy188, dummy188_init, sizeof(uint8_t) * 1);
  static int32_t param252_init[] = {0};
  model->setOperandValue(param252, param252_init, sizeof(int32_t) * 1);
  static uint8_t dummy189_init[] = {120};
  model->setOperandValue(dummy189, dummy189_init, sizeof(uint8_t) * 1);
  static int32_t param253_init[] = {0};
  model->setOperandValue(param253, param253_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input047_tmp, dummy188, param252}, {input047});
  model->addOperation(ANEURALNETWORKS_ADD, {input147_tmp, dummy189, param253}, {input147});
  model->addOperation(ANEURALNETWORKS_SUB, {input047, input147, param47}, {output047});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input047_tmp, input147_tmp},
    {output047});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_48(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_48(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input047 = model->addOperand(&type3);
  auto input147 = model->addOperand(&type4);
  auto param47 = model->addOperand(&type1);
  auto output047 = model->addOperand(&type9);
  auto input047_tmp = model->addOperand(&type3);
  auto dummy190 = model->addOperand(&type11);
  auto param254 = model->addOperand(&type1);
  auto input147_tmp = model->addOperand(&type4);
  auto dummy191 = model->addOperand(&type12);
  auto param255 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static uint8_t dummy190_init[] = {120};
  model->setOperandValue(dummy190, dummy190_init, sizeof(uint8_t) * 1);
  static int32_t param254_init[] = {0};
  model->setOperandValue(param254, param254_init, sizeof(int32_t) * 1);
  static uint8_t dummy191_init[] = {120};
  model->setOperandValue(dummy191, dummy191_init, sizeof(uint8_t) * 1);
  static int32_t param255_init[] = {0};
  model->setOperandValue(param255, param255_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input047_tmp, dummy190, param254}, {input047});
  model->addOperation(ANEURALNETWORKS_ADD, {input147_tmp, dummy191, param255}, {input147});
  model->addOperation(ANEURALNETWORKS_SUB, {input047, input147, param47}, {output047});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input047_tmp, input147_tmp},
    {output047});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_48(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_49(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input048 = model->addOperand(&type4);
  auto input148 = model->addOperand(&type0);
  auto param48 = model->addOperand(&type1);
  auto output048 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input048, input148, param48}, {output048});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input048, input148},
    {output048});
  assert(model->isValid());
}

bool is_ignored_49(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_49(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input048 = model->addOperand(&type4);
  auto input148 = model->addOperand(&type0);
  auto param48 = model->addOperand(&type1);
  auto output048 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input048, input148, param48}, {output048});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input048, input148},
    {output048});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_49(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_49(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input048 = model->addOperand(&type4);
  auto input148 = model->addOperand(&type0);
  auto param48 = model->addOperand(&type1);
  auto output048 = model->addOperand(&type0);
  auto input048_tmp = model->addOperand(&type4);
  auto dummy192 = model->addOperand(&type12);
  auto param256 = model->addOperand(&type1);
  auto input148_tmp = model->addOperand(&type0);
  auto dummy193 = model->addOperand(&type6);
  auto param257 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static uint8_t dummy192_init[] = {120};
  model->setOperandValue(dummy192, dummy192_init, sizeof(uint8_t) * 1);
  static int32_t param256_init[] = {0};
  model->setOperandValue(param256, param256_init, sizeof(int32_t) * 1);
  static uint8_t dummy193_init[] = {0};
  model->setOperandValue(dummy193, dummy193_init, sizeof(uint8_t) * 1);
  static int32_t param257_init[] = {0};
  model->setOperandValue(param257, param257_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input048_tmp, dummy192, param256}, {input048});
  model->addOperation(ANEURALNETWORKS_ADD, {input148_tmp, dummy193, param257}, {input148});
  model->addOperation(ANEURALNETWORKS_SUB, {input048, input148, param48}, {output048});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input048_tmp, input148_tmp},
    {output048});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_49(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_49(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input048 = model->addOperand(&type4);
  auto input148 = model->addOperand(&type0);
  auto param48 = model->addOperand(&type1);
  auto output048 = model->addOperand(&type5);
  auto input048_tmp = model->addOperand(&type4);
  auto dummy194 = model->addOperand(&type12);
  auto param258 = model->addOperand(&type1);
  auto input148_tmp = model->addOperand(&type0);
  auto dummy195 = model->addOperand(&type6);
  auto param259 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static uint8_t dummy194_init[] = {120};
  model->setOperandValue(dummy194, dummy194_init, sizeof(uint8_t) * 1);
  static int32_t param258_init[] = {0};
  model->setOperandValue(param258, param258_init, sizeof(int32_t) * 1);
  static uint8_t dummy195_init[] = {0};
  model->setOperandValue(dummy195, dummy195_init, sizeof(uint8_t) * 1);
  static int32_t param259_init[] = {0};
  model->setOperandValue(param259, param259_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input048_tmp, dummy194, param258}, {input048});
  model->addOperation(ANEURALNETWORKS_ADD, {input148_tmp, dummy195, param259}, {input148});
  model->addOperation(ANEURALNETWORKS_SUB, {input048, input148, param48}, {output048});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input048_tmp, input148_tmp},
    {output048});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_49(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_50(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input049 = model->addOperand(&type4);
  auto input149 = model->addOperand(&type0);
  auto param49 = model->addOperand(&type1);
  auto output049 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input049, input149, param49}, {output049});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input049, input149},
    {output049});
  assert(model->isValid());
}

bool is_ignored_50(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_50(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input049 = model->addOperand(&type4);
  auto input149 = model->addOperand(&type0);
  auto param49 = model->addOperand(&type1);
  auto output049 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input049, input149, param49}, {output049});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input049, input149},
    {output049});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_50(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_50(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input049 = model->addOperand(&type4);
  auto input149 = model->addOperand(&type0);
  auto param49 = model->addOperand(&type1);
  auto output049 = model->addOperand(&type2);
  auto input049_tmp = model->addOperand(&type4);
  auto dummy196 = model->addOperand(&type12);
  auto param260 = model->addOperand(&type1);
  auto input149_tmp = model->addOperand(&type0);
  auto dummy197 = model->addOperand(&type6);
  auto param261 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static uint8_t dummy196_init[] = {120};
  model->setOperandValue(dummy196, dummy196_init, sizeof(uint8_t) * 1);
  static int32_t param260_init[] = {0};
  model->setOperandValue(param260, param260_init, sizeof(int32_t) * 1);
  static uint8_t dummy197_init[] = {0};
  model->setOperandValue(dummy197, dummy197_init, sizeof(uint8_t) * 1);
  static int32_t param261_init[] = {0};
  model->setOperandValue(param261, param261_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input049_tmp, dummy196, param260}, {input049});
  model->addOperation(ANEURALNETWORKS_ADD, {input149_tmp, dummy197, param261}, {input149});
  model->addOperation(ANEURALNETWORKS_SUB, {input049, input149, param49}, {output049});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input049_tmp, input149_tmp},
    {output049});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_50(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_50(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input049 = model->addOperand(&type4);
  auto input149 = model->addOperand(&type0);
  auto param49 = model->addOperand(&type1);
  auto output049 = model->addOperand(&type7);
  auto input049_tmp = model->addOperand(&type4);
  auto dummy198 = model->addOperand(&type12);
  auto param262 = model->addOperand(&type1);
  auto input149_tmp = model->addOperand(&type0);
  auto dummy199 = model->addOperand(&type6);
  auto param263 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static uint8_t dummy198_init[] = {120};
  model->setOperandValue(dummy198, dummy198_init, sizeof(uint8_t) * 1);
  static int32_t param262_init[] = {0};
  model->setOperandValue(param262, param262_init, sizeof(int32_t) * 1);
  static uint8_t dummy199_init[] = {0};
  model->setOperandValue(dummy199, dummy199_init, sizeof(uint8_t) * 1);
  static int32_t param263_init[] = {0};
  model->setOperandValue(param263, param263_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input049_tmp, dummy198, param262}, {input049});
  model->addOperation(ANEURALNETWORKS_ADD, {input149_tmp, dummy199, param263}, {input149});
  model->addOperation(ANEURALNETWORKS_SUB, {input049, input149, param49}, {output049});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input049_tmp, input149_tmp},
    {output049});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_50(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_51(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input050 = model->addOperand(&type4);
  auto input150 = model->addOperand(&type0);
  auto param50 = model->addOperand(&type1);
  auto output050 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input050, input150, param50}, {output050});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input050, input150},
    {output050});
  assert(model->isValid());
}

bool is_ignored_51(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_51(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input050 = model->addOperand(&type4);
  auto input150 = model->addOperand(&type0);
  auto param50 = model->addOperand(&type1);
  auto output050 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input050, input150, param50}, {output050});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input050, input150},
    {output050});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_51(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_51(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input050 = model->addOperand(&type4);
  auto input150 = model->addOperand(&type0);
  auto param50 = model->addOperand(&type1);
  auto output050 = model->addOperand(&type3);
  auto input050_tmp = model->addOperand(&type4);
  auto dummy200 = model->addOperand(&type12);
  auto param264 = model->addOperand(&type1);
  auto input150_tmp = model->addOperand(&type0);
  auto dummy201 = model->addOperand(&type6);
  auto param265 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static uint8_t dummy200_init[] = {120};
  model->setOperandValue(dummy200, dummy200_init, sizeof(uint8_t) * 1);
  static int32_t param264_init[] = {0};
  model->setOperandValue(param264, param264_init, sizeof(int32_t) * 1);
  static uint8_t dummy201_init[] = {0};
  model->setOperandValue(dummy201, dummy201_init, sizeof(uint8_t) * 1);
  static int32_t param265_init[] = {0};
  model->setOperandValue(param265, param265_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input050_tmp, dummy200, param264}, {input050});
  model->addOperation(ANEURALNETWORKS_ADD, {input150_tmp, dummy201, param265}, {input150});
  model->addOperation(ANEURALNETWORKS_SUB, {input050, input150, param50}, {output050});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input050_tmp, input150_tmp},
    {output050});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_51(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_51(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input050 = model->addOperand(&type4);
  auto input150 = model->addOperand(&type0);
  auto param50 = model->addOperand(&type1);
  auto output050 = model->addOperand(&type8);
  auto input050_tmp = model->addOperand(&type4);
  auto dummy202 = model->addOperand(&type12);
  auto param266 = model->addOperand(&type1);
  auto input150_tmp = model->addOperand(&type0);
  auto dummy203 = model->addOperand(&type6);
  auto param267 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static uint8_t dummy202_init[] = {120};
  model->setOperandValue(dummy202, dummy202_init, sizeof(uint8_t) * 1);
  static int32_t param266_init[] = {0};
  model->setOperandValue(param266, param266_init, sizeof(int32_t) * 1);
  static uint8_t dummy203_init[] = {0};
  model->setOperandValue(dummy203, dummy203_init, sizeof(uint8_t) * 1);
  static int32_t param267_init[] = {0};
  model->setOperandValue(param267, param267_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input050_tmp, dummy202, param266}, {input050});
  model->addOperation(ANEURALNETWORKS_ADD, {input150_tmp, dummy203, param267}, {input150});
  model->addOperation(ANEURALNETWORKS_SUB, {input050, input150, param50}, {output050});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input050_tmp, input150_tmp},
    {output050});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_51(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_52(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input051 = model->addOperand(&type4);
  auto input151 = model->addOperand(&type0);
  auto param51 = model->addOperand(&type1);
  auto output051 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param51_init[] = {0};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input051, input151, param51}, {output051});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input051, input151},
    {output051});
  assert(model->isValid());
}

bool is_ignored_52(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_52(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input051 = model->addOperand(&type4);
  auto input151 = model->addOperand(&type0);
  auto param51 = model->addOperand(&type1);
  auto output051 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param51_init[] = {0};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input051, input151, param51}, {output051});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input051, input151},
    {output051});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_52(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_52(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto input051 = model->addOperand(&type4);
  auto input151 = model->addOperand(&type0);
  auto param51 = model->addOperand(&type1);
  auto output051 = model->addOperand(&type4);
  auto input051_tmp = model->addOperand(&type4);
  auto dummy204 = model->addOperand(&type12);
  auto param268 = model->addOperand(&type1);
  auto input151_tmp = model->addOperand(&type0);
  auto dummy205 = model->addOperand(&type6);
  auto param269 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param51_init[] = {0};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static uint8_t dummy204_init[] = {120};
  model->setOperandValue(dummy204, dummy204_init, sizeof(uint8_t) * 1);
  static int32_t param268_init[] = {0};
  model->setOperandValue(param268, param268_init, sizeof(int32_t) * 1);
  static uint8_t dummy205_init[] = {0};
  model->setOperandValue(dummy205, dummy205_init, sizeof(uint8_t) * 1);
  static int32_t param269_init[] = {0};
  model->setOperandValue(param269, param269_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input051_tmp, dummy204, param268}, {input051});
  model->addOperation(ANEURALNETWORKS_ADD, {input151_tmp, dummy205, param269}, {input151});
  model->addOperation(ANEURALNETWORKS_SUB, {input051, input151, param51}, {output051});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input051_tmp, input151_tmp},
    {output051});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_52(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_52(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input051 = model->addOperand(&type4);
  auto input151 = model->addOperand(&type0);
  auto param51 = model->addOperand(&type1);
  auto output051 = model->addOperand(&type9);
  auto input051_tmp = model->addOperand(&type4);
  auto dummy206 = model->addOperand(&type12);
  auto param270 = model->addOperand(&type1);
  auto input151_tmp = model->addOperand(&type0);
  auto dummy207 = model->addOperand(&type6);
  auto param271 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param51_init[] = {0};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static uint8_t dummy206_init[] = {120};
  model->setOperandValue(dummy206, dummy206_init, sizeof(uint8_t) * 1);
  static int32_t param270_init[] = {0};
  model->setOperandValue(param270, param270_init, sizeof(int32_t) * 1);
  static uint8_t dummy207_init[] = {0};
  model->setOperandValue(dummy207, dummy207_init, sizeof(uint8_t) * 1);
  static int32_t param271_init[] = {0};
  model->setOperandValue(param271, param271_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input051_tmp, dummy206, param270}, {input051});
  model->addOperation(ANEURALNETWORKS_ADD, {input151_tmp, dummy207, param271}, {input151});
  model->addOperation(ANEURALNETWORKS_SUB, {input051, input151, param51}, {output051});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input051_tmp, input151_tmp},
    {output051});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_52(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_53(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input052 = model->addOperand(&type4);
  auto input152 = model->addOperand(&type2);
  auto param52 = model->addOperand(&type1);
  auto output052 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param52_init[] = {0};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input052, input152, param52}, {output052});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input052, input152},
    {output052});
  assert(model->isValid());
}

bool is_ignored_53(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_53(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input052 = model->addOperand(&type4);
  auto input152 = model->addOperand(&type2);
  auto param52 = model->addOperand(&type1);
  auto output052 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param52_init[] = {0};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input052, input152, param52}, {output052});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input052, input152},
    {output052});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_53(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_53(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input052 = model->addOperand(&type4);
  auto input152 = model->addOperand(&type2);
  auto param52 = model->addOperand(&type1);
  auto output052 = model->addOperand(&type0);
  auto input052_tmp = model->addOperand(&type4);
  auto dummy208 = model->addOperand(&type12);
  auto param272 = model->addOperand(&type1);
  auto input152_tmp = model->addOperand(&type2);
  auto dummy209 = model->addOperand(&type10);
  auto param273 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param52_init[] = {0};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static uint8_t dummy208_init[] = {120};
  model->setOperandValue(dummy208, dummy208_init, sizeof(uint8_t) * 1);
  static int32_t param272_init[] = {0};
  model->setOperandValue(param272, param272_init, sizeof(int32_t) * 1);
  static uint8_t dummy209_init[] = {1};
  model->setOperandValue(dummy209, dummy209_init, sizeof(uint8_t) * 1);
  static int32_t param273_init[] = {0};
  model->setOperandValue(param273, param273_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input052_tmp, dummy208, param272}, {input052});
  model->addOperation(ANEURALNETWORKS_ADD, {input152_tmp, dummy209, param273}, {input152});
  model->addOperation(ANEURALNETWORKS_SUB, {input052, input152, param52}, {output052});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input052_tmp, input152_tmp},
    {output052});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_53(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_53(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input052 = model->addOperand(&type4);
  auto input152 = model->addOperand(&type2);
  auto param52 = model->addOperand(&type1);
  auto output052 = model->addOperand(&type5);
  auto input052_tmp = model->addOperand(&type4);
  auto dummy210 = model->addOperand(&type12);
  auto param274 = model->addOperand(&type1);
  auto input152_tmp = model->addOperand(&type2);
  auto dummy211 = model->addOperand(&type10);
  auto param275 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param52_init[] = {0};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static uint8_t dummy210_init[] = {120};
  model->setOperandValue(dummy210, dummy210_init, sizeof(uint8_t) * 1);
  static int32_t param274_init[] = {0};
  model->setOperandValue(param274, param274_init, sizeof(int32_t) * 1);
  static uint8_t dummy211_init[] = {1};
  model->setOperandValue(dummy211, dummy211_init, sizeof(uint8_t) * 1);
  static int32_t param275_init[] = {0};
  model->setOperandValue(param275, param275_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input052_tmp, dummy210, param274}, {input052});
  model->addOperation(ANEURALNETWORKS_ADD, {input152_tmp, dummy211, param275}, {input152});
  model->addOperation(ANEURALNETWORKS_SUB, {input052, input152, param52}, {output052});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input052_tmp, input152_tmp},
    {output052});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_53(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_54(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input053 = model->addOperand(&type4);
  auto input153 = model->addOperand(&type2);
  auto param53 = model->addOperand(&type1);
  auto output053 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param53_init[] = {0};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input053, input153, param53}, {output053});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input053, input153},
    {output053});
  assert(model->isValid());
}

bool is_ignored_54(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_54(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input053 = model->addOperand(&type4);
  auto input153 = model->addOperand(&type2);
  auto param53 = model->addOperand(&type1);
  auto output053 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param53_init[] = {0};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input053, input153, param53}, {output053});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input053, input153},
    {output053});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_54(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_54(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input053 = model->addOperand(&type4);
  auto input153 = model->addOperand(&type2);
  auto param53 = model->addOperand(&type1);
  auto output053 = model->addOperand(&type2);
  auto input053_tmp = model->addOperand(&type4);
  auto dummy212 = model->addOperand(&type12);
  auto param276 = model->addOperand(&type1);
  auto input153_tmp = model->addOperand(&type2);
  auto dummy213 = model->addOperand(&type10);
  auto param277 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param53_init[] = {0};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static uint8_t dummy212_init[] = {120};
  model->setOperandValue(dummy212, dummy212_init, sizeof(uint8_t) * 1);
  static int32_t param276_init[] = {0};
  model->setOperandValue(param276, param276_init, sizeof(int32_t) * 1);
  static uint8_t dummy213_init[] = {1};
  model->setOperandValue(dummy213, dummy213_init, sizeof(uint8_t) * 1);
  static int32_t param277_init[] = {0};
  model->setOperandValue(param277, param277_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input053_tmp, dummy212, param276}, {input053});
  model->addOperation(ANEURALNETWORKS_ADD, {input153_tmp, dummy213, param277}, {input153});
  model->addOperation(ANEURALNETWORKS_SUB, {input053, input153, param53}, {output053});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input053_tmp, input153_tmp},
    {output053});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_54(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_54(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input053 = model->addOperand(&type4);
  auto input153 = model->addOperand(&type2);
  auto param53 = model->addOperand(&type1);
  auto output053 = model->addOperand(&type7);
  auto input053_tmp = model->addOperand(&type4);
  auto dummy214 = model->addOperand(&type12);
  auto param278 = model->addOperand(&type1);
  auto input153_tmp = model->addOperand(&type2);
  auto dummy215 = model->addOperand(&type10);
  auto param279 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param53_init[] = {0};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static uint8_t dummy214_init[] = {120};
  model->setOperandValue(dummy214, dummy214_init, sizeof(uint8_t) * 1);
  static int32_t param278_init[] = {0};
  model->setOperandValue(param278, param278_init, sizeof(int32_t) * 1);
  static uint8_t dummy215_init[] = {1};
  model->setOperandValue(dummy215, dummy215_init, sizeof(uint8_t) * 1);
  static int32_t param279_init[] = {0};
  model->setOperandValue(param279, param279_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input053_tmp, dummy214, param278}, {input053});
  model->addOperation(ANEURALNETWORKS_ADD, {input153_tmp, dummy215, param279}, {input153});
  model->addOperation(ANEURALNETWORKS_SUB, {input053, input153, param53}, {output053});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input053_tmp, input153_tmp},
    {output053});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_54(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_55(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input054 = model->addOperand(&type4);
  auto input154 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type1);
  auto output054 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input054, input154, param54}, {output054});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input054, input154},
    {output054});
  assert(model->isValid());
}

bool is_ignored_55(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_55(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input054 = model->addOperand(&type4);
  auto input154 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type1);
  auto output054 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input054, input154, param54}, {output054});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input054, input154},
    {output054});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_55(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_55(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input054 = model->addOperand(&type4);
  auto input154 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type1);
  auto output054 = model->addOperand(&type3);
  auto input054_tmp = model->addOperand(&type4);
  auto dummy216 = model->addOperand(&type12);
  auto param280 = model->addOperand(&type1);
  auto input154_tmp = model->addOperand(&type2);
  auto dummy217 = model->addOperand(&type10);
  auto param281 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static uint8_t dummy216_init[] = {120};
  model->setOperandValue(dummy216, dummy216_init, sizeof(uint8_t) * 1);
  static int32_t param280_init[] = {0};
  model->setOperandValue(param280, param280_init, sizeof(int32_t) * 1);
  static uint8_t dummy217_init[] = {1};
  model->setOperandValue(dummy217, dummy217_init, sizeof(uint8_t) * 1);
  static int32_t param281_init[] = {0};
  model->setOperandValue(param281, param281_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input054_tmp, dummy216, param280}, {input054});
  model->addOperation(ANEURALNETWORKS_ADD, {input154_tmp, dummy217, param281}, {input154});
  model->addOperation(ANEURALNETWORKS_SUB, {input054, input154, param54}, {output054});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input054_tmp, input154_tmp},
    {output054});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_55(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_55(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input054 = model->addOperand(&type4);
  auto input154 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type1);
  auto output054 = model->addOperand(&type8);
  auto input054_tmp = model->addOperand(&type4);
  auto dummy218 = model->addOperand(&type12);
  auto param282 = model->addOperand(&type1);
  auto input154_tmp = model->addOperand(&type2);
  auto dummy219 = model->addOperand(&type10);
  auto param283 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static uint8_t dummy218_init[] = {120};
  model->setOperandValue(dummy218, dummy218_init, sizeof(uint8_t) * 1);
  static int32_t param282_init[] = {0};
  model->setOperandValue(param282, param282_init, sizeof(int32_t) * 1);
  static uint8_t dummy219_init[] = {1};
  model->setOperandValue(dummy219, dummy219_init, sizeof(uint8_t) * 1);
  static int32_t param283_init[] = {0};
  model->setOperandValue(param283, param283_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input054_tmp, dummy218, param282}, {input054});
  model->addOperation(ANEURALNETWORKS_ADD, {input154_tmp, dummy219, param283}, {input154});
  model->addOperation(ANEURALNETWORKS_SUB, {input054, input154, param54}, {output054});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input054_tmp, input154_tmp},
    {output054});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_55(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_56(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input055 = model->addOperand(&type4);
  auto input155 = model->addOperand(&type2);
  auto param55 = model->addOperand(&type1);
  auto output055 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input055, input155, param55}, {output055});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input055, input155},
    {output055});
  assert(model->isValid());
}

bool is_ignored_56(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_56(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input055 = model->addOperand(&type4);
  auto input155 = model->addOperand(&type2);
  auto param55 = model->addOperand(&type1);
  auto output055 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input055, input155, param55}, {output055});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input055, input155},
    {output055});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_56(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_56(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input055 = model->addOperand(&type4);
  auto input155 = model->addOperand(&type2);
  auto param55 = model->addOperand(&type1);
  auto output055 = model->addOperand(&type4);
  auto input055_tmp = model->addOperand(&type4);
  auto dummy220 = model->addOperand(&type12);
  auto param284 = model->addOperand(&type1);
  auto input155_tmp = model->addOperand(&type2);
  auto dummy221 = model->addOperand(&type10);
  auto param285 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static uint8_t dummy220_init[] = {120};
  model->setOperandValue(dummy220, dummy220_init, sizeof(uint8_t) * 1);
  static int32_t param284_init[] = {0};
  model->setOperandValue(param284, param284_init, sizeof(int32_t) * 1);
  static uint8_t dummy221_init[] = {1};
  model->setOperandValue(dummy221, dummy221_init, sizeof(uint8_t) * 1);
  static int32_t param285_init[] = {0};
  model->setOperandValue(param285, param285_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input055_tmp, dummy220, param284}, {input055});
  model->addOperation(ANEURALNETWORKS_ADD, {input155_tmp, dummy221, param285}, {input155});
  model->addOperation(ANEURALNETWORKS_SUB, {input055, input155, param55}, {output055});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input055_tmp, input155_tmp},
    {output055});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_56(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_56(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 1);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input055 = model->addOperand(&type4);
  auto input155 = model->addOperand(&type2);
  auto param55 = model->addOperand(&type1);
  auto output055 = model->addOperand(&type9);
  auto input055_tmp = model->addOperand(&type4);
  auto dummy222 = model->addOperand(&type12);
  auto param286 = model->addOperand(&type1);
  auto input155_tmp = model->addOperand(&type2);
  auto dummy223 = model->addOperand(&type10);
  auto param287 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static uint8_t dummy222_init[] = {120};
  model->setOperandValue(dummy222, dummy222_init, sizeof(uint8_t) * 1);
  static int32_t param286_init[] = {0};
  model->setOperandValue(param286, param286_init, sizeof(int32_t) * 1);
  static uint8_t dummy223_init[] = {1};
  model->setOperandValue(dummy223, dummy223_init, sizeof(uint8_t) * 1);
  static int32_t param287_init[] = {0};
  model->setOperandValue(param287, param287_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input055_tmp, dummy222, param286}, {input055});
  model->addOperation(ANEURALNETWORKS_ADD, {input155_tmp, dummy223, param287}, {input155});
  model->addOperation(ANEURALNETWORKS_SUB, {input055, input155, param55}, {output055});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input055_tmp, input155_tmp},
    {output055});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_56(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_57(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input056 = model->addOperand(&type4);
  auto input156 = model->addOperand(&type3);
  auto param56 = model->addOperand(&type1);
  auto output056 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param56_init[] = {0};
  model->setOperandValue(param56, param56_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input056, input156, param56}, {output056});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input056, input156},
    {output056});
  assert(model->isValid());
}

bool is_ignored_57(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_57(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input056 = model->addOperand(&type4);
  auto input156 = model->addOperand(&type3);
  auto param56 = model->addOperand(&type1);
  auto output056 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param56_init[] = {0};
  model->setOperandValue(param56, param56_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input056, input156, param56}, {output056});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input056, input156},
    {output056});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_57(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_57(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input056 = model->addOperand(&type4);
  auto input156 = model->addOperand(&type3);
  auto param56 = model->addOperand(&type1);
  auto output056 = model->addOperand(&type0);
  auto input056_tmp = model->addOperand(&type4);
  auto dummy224 = model->addOperand(&type12);
  auto param288 = model->addOperand(&type1);
  auto input156_tmp = model->addOperand(&type3);
  auto dummy225 = model->addOperand(&type11);
  auto param289 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param56_init[] = {0};
  model->setOperandValue(param56, param56_init, sizeof(int32_t) * 1);
  static uint8_t dummy224_init[] = {120};
  model->setOperandValue(dummy224, dummy224_init, sizeof(uint8_t) * 1);
  static int32_t param288_init[] = {0};
  model->setOperandValue(param288, param288_init, sizeof(int32_t) * 1);
  static uint8_t dummy225_init[] = {120};
  model->setOperandValue(dummy225, dummy225_init, sizeof(uint8_t) * 1);
  static int32_t param289_init[] = {0};
  model->setOperandValue(param289, param289_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input056_tmp, dummy224, param288}, {input056});
  model->addOperation(ANEURALNETWORKS_ADD, {input156_tmp, dummy225, param289}, {input156});
  model->addOperation(ANEURALNETWORKS_SUB, {input056, input156, param56}, {output056});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input056_tmp, input156_tmp},
    {output056});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_57(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_57(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input056 = model->addOperand(&type4);
  auto input156 = model->addOperand(&type3);
  auto param56 = model->addOperand(&type1);
  auto output056 = model->addOperand(&type5);
  auto input056_tmp = model->addOperand(&type4);
  auto dummy226 = model->addOperand(&type12);
  auto param290 = model->addOperand(&type1);
  auto input156_tmp = model->addOperand(&type3);
  auto dummy227 = model->addOperand(&type11);
  auto param291 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param56_init[] = {0};
  model->setOperandValue(param56, param56_init, sizeof(int32_t) * 1);
  static uint8_t dummy226_init[] = {120};
  model->setOperandValue(dummy226, dummy226_init, sizeof(uint8_t) * 1);
  static int32_t param290_init[] = {0};
  model->setOperandValue(param290, param290_init, sizeof(int32_t) * 1);
  static uint8_t dummy227_init[] = {120};
  model->setOperandValue(dummy227, dummy227_init, sizeof(uint8_t) * 1);
  static int32_t param291_init[] = {0};
  model->setOperandValue(param291, param291_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input056_tmp, dummy226, param290}, {input056});
  model->addOperation(ANEURALNETWORKS_ADD, {input156_tmp, dummy227, param291}, {input156});
  model->addOperation(ANEURALNETWORKS_SUB, {input056, input156, param56}, {output056});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input056_tmp, input156_tmp},
    {output056});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_57(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_58(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input057 = model->addOperand(&type4);
  auto input157 = model->addOperand(&type3);
  auto param57 = model->addOperand(&type1);
  auto output057 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param57_init[] = {0};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input057, input157, param57}, {output057});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input057, input157},
    {output057});
  assert(model->isValid());
}

bool is_ignored_58(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_58(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input057 = model->addOperand(&type4);
  auto input157 = model->addOperand(&type3);
  auto param57 = model->addOperand(&type1);
  auto output057 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param57_init[] = {0};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input057, input157, param57}, {output057});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input057, input157},
    {output057});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_58(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_58(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input057 = model->addOperand(&type4);
  auto input157 = model->addOperand(&type3);
  auto param57 = model->addOperand(&type1);
  auto output057 = model->addOperand(&type2);
  auto input057_tmp = model->addOperand(&type4);
  auto dummy228 = model->addOperand(&type12);
  auto param292 = model->addOperand(&type1);
  auto input157_tmp = model->addOperand(&type3);
  auto dummy229 = model->addOperand(&type11);
  auto param293 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param57_init[] = {0};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static uint8_t dummy228_init[] = {120};
  model->setOperandValue(dummy228, dummy228_init, sizeof(uint8_t) * 1);
  static int32_t param292_init[] = {0};
  model->setOperandValue(param292, param292_init, sizeof(int32_t) * 1);
  static uint8_t dummy229_init[] = {120};
  model->setOperandValue(dummy229, dummy229_init, sizeof(uint8_t) * 1);
  static int32_t param293_init[] = {0};
  model->setOperandValue(param293, param293_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input057_tmp, dummy228, param292}, {input057});
  model->addOperation(ANEURALNETWORKS_ADD, {input157_tmp, dummy229, param293}, {input157});
  model->addOperation(ANEURALNETWORKS_SUB, {input057, input157, param57}, {output057});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input057_tmp, input157_tmp},
    {output057});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_58(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_58(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input057 = model->addOperand(&type4);
  auto input157 = model->addOperand(&type3);
  auto param57 = model->addOperand(&type1);
  auto output057 = model->addOperand(&type7);
  auto input057_tmp = model->addOperand(&type4);
  auto dummy230 = model->addOperand(&type12);
  auto param294 = model->addOperand(&type1);
  auto input157_tmp = model->addOperand(&type3);
  auto dummy231 = model->addOperand(&type11);
  auto param295 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param57_init[] = {0};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static uint8_t dummy230_init[] = {120};
  model->setOperandValue(dummy230, dummy230_init, sizeof(uint8_t) * 1);
  static int32_t param294_init[] = {0};
  model->setOperandValue(param294, param294_init, sizeof(int32_t) * 1);
  static uint8_t dummy231_init[] = {120};
  model->setOperandValue(dummy231, dummy231_init, sizeof(uint8_t) * 1);
  static int32_t param295_init[] = {0};
  model->setOperandValue(param295, param295_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input057_tmp, dummy230, param294}, {input057});
  model->addOperation(ANEURALNETWORKS_ADD, {input157_tmp, dummy231, param295}, {input157});
  model->addOperation(ANEURALNETWORKS_SUB, {input057, input157, param57}, {output057});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input057_tmp, input157_tmp},
    {output057});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_58(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_59(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input058 = model->addOperand(&type4);
  auto input158 = model->addOperand(&type3);
  auto param58 = model->addOperand(&type1);
  auto output058 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input058, input158, param58}, {output058});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input058, input158},
    {output058});
  assert(model->isValid());
}

bool is_ignored_59(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_59(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input058 = model->addOperand(&type4);
  auto input158 = model->addOperand(&type3);
  auto param58 = model->addOperand(&type1);
  auto output058 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input058, input158, param58}, {output058});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input058, input158},
    {output058});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_59(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_59(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input058 = model->addOperand(&type4);
  auto input158 = model->addOperand(&type3);
  auto param58 = model->addOperand(&type1);
  auto output058 = model->addOperand(&type3);
  auto input058_tmp = model->addOperand(&type4);
  auto dummy232 = model->addOperand(&type12);
  auto param296 = model->addOperand(&type1);
  auto input158_tmp = model->addOperand(&type3);
  auto dummy233 = model->addOperand(&type11);
  auto param297 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static uint8_t dummy232_init[] = {120};
  model->setOperandValue(dummy232, dummy232_init, sizeof(uint8_t) * 1);
  static int32_t param296_init[] = {0};
  model->setOperandValue(param296, param296_init, sizeof(int32_t) * 1);
  static uint8_t dummy233_init[] = {120};
  model->setOperandValue(dummy233, dummy233_init, sizeof(uint8_t) * 1);
  static int32_t param297_init[] = {0};
  model->setOperandValue(param297, param297_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input058_tmp, dummy232, param296}, {input058});
  model->addOperation(ANEURALNETWORKS_ADD, {input158_tmp, dummy233, param297}, {input158});
  model->addOperation(ANEURALNETWORKS_SUB, {input058, input158, param58}, {output058});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input058_tmp, input158_tmp},
    {output058});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_59(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_59(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input058 = model->addOperand(&type4);
  auto input158 = model->addOperand(&type3);
  auto param58 = model->addOperand(&type1);
  auto output058 = model->addOperand(&type8);
  auto input058_tmp = model->addOperand(&type4);
  auto dummy234 = model->addOperand(&type12);
  auto param298 = model->addOperand(&type1);
  auto input158_tmp = model->addOperand(&type3);
  auto dummy235 = model->addOperand(&type11);
  auto param299 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static uint8_t dummy234_init[] = {120};
  model->setOperandValue(dummy234, dummy234_init, sizeof(uint8_t) * 1);
  static int32_t param298_init[] = {0};
  model->setOperandValue(param298, param298_init, sizeof(int32_t) * 1);
  static uint8_t dummy235_init[] = {120};
  model->setOperandValue(dummy235, dummy235_init, sizeof(uint8_t) * 1);
  static int32_t param299_init[] = {0};
  model->setOperandValue(param299, param299_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input058_tmp, dummy234, param298}, {input058});
  model->addOperation(ANEURALNETWORKS_ADD, {input158_tmp, dummy235, param299}, {input158});
  model->addOperation(ANEURALNETWORKS_SUB, {input058, input158, param58}, {output058});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input058_tmp, input158_tmp},
    {output058});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_59(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_60(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input059 = model->addOperand(&type4);
  auto input159 = model->addOperand(&type3);
  auto param59 = model->addOperand(&type1);
  auto output059 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param59_init[] = {0};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input059, input159, param59}, {output059});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input059, input159},
    {output059});
  assert(model->isValid());
}

bool is_ignored_60(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_60(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input059 = model->addOperand(&type4);
  auto input159 = model->addOperand(&type3);
  auto param59 = model->addOperand(&type1);
  auto output059 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param59_init[] = {0};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input059, input159, param59}, {output059});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input059, input159},
    {output059});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_60(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_60(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input059 = model->addOperand(&type4);
  auto input159 = model->addOperand(&type3);
  auto param59 = model->addOperand(&type1);
  auto output059 = model->addOperand(&type4);
  auto input059_tmp = model->addOperand(&type4);
  auto dummy236 = model->addOperand(&type12);
  auto param300 = model->addOperand(&type1);
  auto input159_tmp = model->addOperand(&type3);
  auto dummy237 = model->addOperand(&type11);
  auto param301 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param59_init[] = {0};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static uint8_t dummy236_init[] = {120};
  model->setOperandValue(dummy236, dummy236_init, sizeof(uint8_t) * 1);
  static int32_t param300_init[] = {0};
  model->setOperandValue(param300, param300_init, sizeof(int32_t) * 1);
  static uint8_t dummy237_init[] = {120};
  model->setOperandValue(dummy237, dummy237_init, sizeof(uint8_t) * 1);
  static int32_t param301_init[] = {0};
  model->setOperandValue(param301, param301_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input059_tmp, dummy236, param300}, {input059});
  model->addOperation(ANEURALNETWORKS_ADD, {input159_tmp, dummy237, param301}, {input159});
  model->addOperation(ANEURALNETWORKS_SUB, {input059, input159, param59}, {output059});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input059_tmp, input159_tmp},
    {output059});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_60(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_60(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 120);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input059 = model->addOperand(&type4);
  auto input159 = model->addOperand(&type3);
  auto param59 = model->addOperand(&type1);
  auto output059 = model->addOperand(&type9);
  auto input059_tmp = model->addOperand(&type4);
  auto dummy238 = model->addOperand(&type12);
  auto param302 = model->addOperand(&type1);
  auto input159_tmp = model->addOperand(&type3);
  auto dummy239 = model->addOperand(&type11);
  auto param303 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param59_init[] = {0};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static uint8_t dummy238_init[] = {120};
  model->setOperandValue(dummy238, dummy238_init, sizeof(uint8_t) * 1);
  static int32_t param302_init[] = {0};
  model->setOperandValue(param302, param302_init, sizeof(int32_t) * 1);
  static uint8_t dummy239_init[] = {120};
  model->setOperandValue(dummy239, dummy239_init, sizeof(uint8_t) * 1);
  static int32_t param303_init[] = {0};
  model->setOperandValue(param303, param303_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input059_tmp, dummy238, param302}, {input059});
  model->addOperation(ANEURALNETWORKS_ADD, {input159_tmp, dummy239, param303}, {input159});
  model->addOperation(ANEURALNETWORKS_SUB, {input059, input159, param59}, {output059});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input059_tmp, input159_tmp},
    {output059});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_60(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_61(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input060 = model->addOperand(&type4);
  auto input160 = model->addOperand(&type4);
  auto param60 = model->addOperand(&type1);
  auto output060 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param60_init[] = {0};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input060, input160, param60}, {output060});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input060, input160},
    {output060});
  assert(model->isValid());
}

bool is_ignored_61(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_61(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input060 = model->addOperand(&type4);
  auto input160 = model->addOperand(&type4);
  auto param60 = model->addOperand(&type1);
  auto output060 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param60_init[] = {0};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input060, input160, param60}, {output060});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input060, input160},
    {output060});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_61(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_61(Model *model) {
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 0);
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input060 = model->addOperand(&type4);
  auto input160 = model->addOperand(&type4);
  auto param60 = model->addOperand(&type1);
  auto output060 = model->addOperand(&type0);
  auto input060_tmp = model->addOperand(&type4);
  auto dummy240 = model->addOperand(&type12);
  auto param304 = model->addOperand(&type1);
  auto input160_tmp = model->addOperand(&type4);
  auto dummy241 = model->addOperand(&type12);
  auto param305 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param60_init[] = {0};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  static uint8_t dummy240_init[] = {120};
  model->setOperandValue(dummy240, dummy240_init, sizeof(uint8_t) * 1);
  static int32_t param304_init[] = {0};
  model->setOperandValue(param304, param304_init, sizeof(int32_t) * 1);
  static uint8_t dummy241_init[] = {120};
  model->setOperandValue(dummy241, dummy241_init, sizeof(uint8_t) * 1);
  static int32_t param305_init[] = {0};
  model->setOperandValue(param305, param305_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input060_tmp, dummy240, param304}, {input060});
  model->addOperation(ANEURALNETWORKS_ADD, {input160_tmp, dummy241, param305}, {input160});
  model->addOperation(ANEURALNETWORKS_SUB, {input060, input160, param60}, {output060});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input060_tmp, input160_tmp},
    {output060});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_61(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_61(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input060 = model->addOperand(&type4);
  auto input160 = model->addOperand(&type4);
  auto param60 = model->addOperand(&type1);
  auto output060 = model->addOperand(&type5);
  auto input060_tmp = model->addOperand(&type4);
  auto dummy242 = model->addOperand(&type12);
  auto param306 = model->addOperand(&type1);
  auto input160_tmp = model->addOperand(&type4);
  auto dummy243 = model->addOperand(&type12);
  auto param307 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param60_init[] = {0};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  static uint8_t dummy242_init[] = {120};
  model->setOperandValue(dummy242, dummy242_init, sizeof(uint8_t) * 1);
  static int32_t param306_init[] = {0};
  model->setOperandValue(param306, param306_init, sizeof(int32_t) * 1);
  static uint8_t dummy243_init[] = {120};
  model->setOperandValue(dummy243, dummy243_init, sizeof(uint8_t) * 1);
  static int32_t param307_init[] = {0};
  model->setOperandValue(param307, param307_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input060_tmp, dummy242, param306}, {input060});
  model->addOperation(ANEURALNETWORKS_ADD, {input160_tmp, dummy243, param307}, {input160});
  model->addOperation(ANEURALNETWORKS_SUB, {input060, input160, param60}, {output060});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input060_tmp, input160_tmp},
    {output060});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_61(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_62(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input061 = model->addOperand(&type4);
  auto input161 = model->addOperand(&type4);
  auto param61 = model->addOperand(&type1);
  auto output061 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param61_init[] = {0};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input061, input161, param61}, {output061});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input061, input161},
    {output061});
  assert(model->isValid());
}

bool is_ignored_62(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_62(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input061 = model->addOperand(&type4);
  auto input161 = model->addOperand(&type4);
  auto param61 = model->addOperand(&type1);
  auto output061 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param61_init[] = {0};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input061, input161, param61}, {output061});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input061, input161},
    {output061});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_62(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_62(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type2(Type::TENSOR_QUANT8_ASYMM, {144}, 1.0f, 1);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input061 = model->addOperand(&type4);
  auto input161 = model->addOperand(&type4);
  auto param61 = model->addOperand(&type1);
  auto output061 = model->addOperand(&type2);
  auto input061_tmp = model->addOperand(&type4);
  auto dummy244 = model->addOperand(&type12);
  auto param308 = model->addOperand(&type1);
  auto input161_tmp = model->addOperand(&type4);
  auto dummy245 = model->addOperand(&type12);
  auto param309 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param61_init[] = {0};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  static uint8_t dummy244_init[] = {120};
  model->setOperandValue(dummy244, dummy244_init, sizeof(uint8_t) * 1);
  static int32_t param308_init[] = {0};
  model->setOperandValue(param308, param308_init, sizeof(int32_t) * 1);
  static uint8_t dummy245_init[] = {120};
  model->setOperandValue(dummy245, dummy245_init, sizeof(uint8_t) * 1);
  static int32_t param309_init[] = {0};
  model->setOperandValue(param309, param309_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input061_tmp, dummy244, param308}, {input061});
  model->addOperation(ANEURALNETWORKS_ADD, {input161_tmp, dummy245, param309}, {input161});
  model->addOperation(ANEURALNETWORKS_SUB, {input061, input161, param61}, {output061});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input061_tmp, input161_tmp},
    {output061});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_62(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_62(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input061 = model->addOperand(&type4);
  auto input161 = model->addOperand(&type4);
  auto param61 = model->addOperand(&type1);
  auto output061 = model->addOperand(&type7);
  auto input061_tmp = model->addOperand(&type4);
  auto dummy246 = model->addOperand(&type12);
  auto param310 = model->addOperand(&type1);
  auto input161_tmp = model->addOperand(&type4);
  auto dummy247 = model->addOperand(&type12);
  auto param311 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param61_init[] = {0};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  static uint8_t dummy246_init[] = {120};
  model->setOperandValue(dummy246, dummy246_init, sizeof(uint8_t) * 1);
  static int32_t param310_init[] = {0};
  model->setOperandValue(param310, param310_init, sizeof(int32_t) * 1);
  static uint8_t dummy247_init[] = {120};
  model->setOperandValue(dummy247, dummy247_init, sizeof(uint8_t) * 1);
  static int32_t param311_init[] = {0};
  model->setOperandValue(param311, param311_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input061_tmp, dummy246, param310}, {input061});
  model->addOperation(ANEURALNETWORKS_ADD, {input161_tmp, dummy247, param311}, {input161});
  model->addOperation(ANEURALNETWORKS_SUB, {input061, input161, param61}, {output061});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input061_tmp, input161_tmp},
    {output061});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_62(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_63(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input062 = model->addOperand(&type4);
  auto input162 = model->addOperand(&type4);
  auto param62 = model->addOperand(&type1);
  auto output062 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param62_init[] = {0};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input062, input162, param62}, {output062});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input062, input162},
    {output062});
  assert(model->isValid());
}

bool is_ignored_63(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_63(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input062 = model->addOperand(&type4);
  auto input162 = model->addOperand(&type4);
  auto param62 = model->addOperand(&type1);
  auto output062 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param62_init[] = {0};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input062, input162, param62}, {output062});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input062, input162},
    {output062});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_63(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_63(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {144}, 0.01f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input062 = model->addOperand(&type4);
  auto input162 = model->addOperand(&type4);
  auto param62 = model->addOperand(&type1);
  auto output062 = model->addOperand(&type3);
  auto input062_tmp = model->addOperand(&type4);
  auto dummy248 = model->addOperand(&type12);
  auto param312 = model->addOperand(&type1);
  auto input162_tmp = model->addOperand(&type4);
  auto dummy249 = model->addOperand(&type12);
  auto param313 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param62_init[] = {0};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static uint8_t dummy248_init[] = {120};
  model->setOperandValue(dummy248, dummy248_init, sizeof(uint8_t) * 1);
  static int32_t param312_init[] = {0};
  model->setOperandValue(param312, param312_init, sizeof(int32_t) * 1);
  static uint8_t dummy249_init[] = {120};
  model->setOperandValue(dummy249, dummy249_init, sizeof(uint8_t) * 1);
  static int32_t param313_init[] = {0};
  model->setOperandValue(param313, param313_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input062_tmp, dummy248, param312}, {input062});
  model->addOperation(ANEURALNETWORKS_ADD, {input162_tmp, dummy249, param313}, {input162});
  model->addOperation(ANEURALNETWORKS_SUB, {input062, input162, param62}, {output062});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input062_tmp, input162_tmp},
    {output062});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_63(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_63(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input062 = model->addOperand(&type4);
  auto input162 = model->addOperand(&type4);
  auto param62 = model->addOperand(&type1);
  auto output062 = model->addOperand(&type8);
  auto input062_tmp = model->addOperand(&type4);
  auto dummy250 = model->addOperand(&type12);
  auto param314 = model->addOperand(&type1);
  auto input162_tmp = model->addOperand(&type4);
  auto dummy251 = model->addOperand(&type12);
  auto param315 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param62_init[] = {0};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static uint8_t dummy250_init[] = {120};
  model->setOperandValue(dummy250, dummy250_init, sizeof(uint8_t) * 1);
  static int32_t param314_init[] = {0};
  model->setOperandValue(param314, param314_init, sizeof(int32_t) * 1);
  static uint8_t dummy251_init[] = {120};
  model->setOperandValue(dummy251, dummy251_init, sizeof(uint8_t) * 1);
  static int32_t param315_init[] = {0};
  model->setOperandValue(param315, param315_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input062_tmp, dummy250, param314}, {input062});
  model->addOperation(ANEURALNETWORKS_ADD, {input162_tmp, dummy251, param315}, {input162});
  model->addOperation(ANEURALNETWORKS_SUB, {input062, input162, param62}, {output062});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input062_tmp, input162_tmp},
    {output062});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_63(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_64(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input063 = model->addOperand(&type4);
  auto input163 = model->addOperand(&type4);
  auto param63 = model->addOperand(&type1);
  auto output063 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param63_init[] = {0};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input063, input163, param63}, {output063});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input063, input163},
    {output063});
  assert(model->isValid());
}

bool is_ignored_64(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_dynamic_output_shape_64(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input063 = model->addOperand(&type4);
  auto input163 = model->addOperand(&type4);
  auto param63 = model->addOperand(&type1);
  auto output063 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param63_init[] = {0};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_SUB, {input063, input163, param63}, {output063});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input063, input163},
    {output063});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_64(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_64(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  // Phase 1, operands
  auto input063 = model->addOperand(&type4);
  auto input163 = model->addOperand(&type4);
  auto param63 = model->addOperand(&type1);
  auto output063 = model->addOperand(&type4);
  auto input063_tmp = model->addOperand(&type4);
  auto dummy252 = model->addOperand(&type12);
  auto param316 = model->addOperand(&type1);
  auto input163_tmp = model->addOperand(&type4);
  auto dummy253 = model->addOperand(&type12);
  auto param317 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param63_init[] = {0};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static uint8_t dummy252_init[] = {120};
  model->setOperandValue(dummy252, dummy252_init, sizeof(uint8_t) * 1);
  static int32_t param316_init[] = {0};
  model->setOperandValue(param316, param316_init, sizeof(int32_t) * 1);
  static uint8_t dummy253_init[] = {120};
  model->setOperandValue(dummy253, dummy253_init, sizeof(uint8_t) * 1);
  static int32_t param317_init[] = {0};
  model->setOperandValue(param317, param317_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input063_tmp, dummy252, param316}, {input063});
  model->addOperation(ANEURALNETWORKS_ADD, {input163_tmp, dummy253, param317}, {input163});
  model->addOperation(ANEURALNETWORKS_SUB, {input063, input163, param63}, {output063});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input063_tmp, input163_tmp},
    {output063});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_64(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
namespace generated_tests::sub_quantized_different_scales {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_64(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 10.0f, 120);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {144}, 10.0f, 120);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input063 = model->addOperand(&type4);
  auto input163 = model->addOperand(&type4);
  auto param63 = model->addOperand(&type1);
  auto output063 = model->addOperand(&type9);
  auto input063_tmp = model->addOperand(&type4);
  auto dummy254 = model->addOperand(&type12);
  auto param318 = model->addOperand(&type1);
  auto input163_tmp = model->addOperand(&type4);
  auto dummy255 = model->addOperand(&type12);
  auto param319 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param63_init[] = {0};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static uint8_t dummy254_init[] = {120};
  model->setOperandValue(dummy254, dummy254_init, sizeof(uint8_t) * 1);
  static int32_t param318_init[] = {0};
  model->setOperandValue(param318, param318_init, sizeof(int32_t) * 1);
  static uint8_t dummy255_init[] = {120};
  model->setOperandValue(dummy255, dummy255_init, sizeof(uint8_t) * 1);
  static int32_t param319_init[] = {0};
  model->setOperandValue(param319, param319_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input063_tmp, dummy254, param318}, {input063});
  model->addOperation(ANEURALNETWORKS_ADD, {input163_tmp, dummy255, param319}, {input163});
  model->addOperation(ANEURALNETWORKS_SUB, {input063, input163, param63}, {output063});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input063_tmp, input163_tmp},
    {output063});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_64(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::sub_quantized_different_scales
