// Generated from concat_mixed_quant.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::concat_mixed_quant {

void CreateModel_quant8(Model *model) {
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.084f, 127);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.05f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.089f, 123);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.029f, 0);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {2, 1, 8}, 0.1f, 127);
  // Phase 1, operands
  auto input0 = model->addOperand(&type3);
  auto input1 = model->addOperand(&type4);
  auto input2 = model->addOperand(&type5);
  auto input3 = model->addOperand(&type6);
  auto param = model->addOperand(&type2);
  auto output0 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONCATENATION, {input0, input1, input2, input3, param}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1, input2, input3},
    {output0});
  assert(model->isValid());
}

bool is_ignored_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::concat_mixed_quant
namespace generated_tests::concat_mixed_quant {

void CreateModel_quant8_dynamic_output_shape(Model *model) {
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.084f, 127);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.05f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.089f, 123);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.029f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.1f, 127);
  // Phase 1, operands
  auto input0 = model->addOperand(&type3);
  auto input1 = model->addOperand(&type4);
  auto input2 = model->addOperand(&type5);
  auto input3 = model->addOperand(&type6);
  auto param = model->addOperand(&type2);
  auto output0 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONCATENATION, {input0, input1, input2, input3, param}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1, input2, input3},
    {output0});
  assert(model->isValid());
}

bool is_ignored_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::concat_mixed_quant
namespace generated_tests::concat_mixed_quant {

void CreateModel_quant8_all_inputs_as_internal(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 0.05f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.089f, 123);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.029f, 0);
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.084f, 127);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.05f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.089f, 123);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.029f, 0);
  OperandType type7(Type::TENSOR_QUANT8_ASYMM, {2, 1, 8}, 0.1f, 127);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1}, 0.084f, 127);
  // Phase 1, operands
  auto input0 = model->addOperand(&type3);
  auto input1 = model->addOperand(&type4);
  auto input2 = model->addOperand(&type5);
  auto input3 = model->addOperand(&type6);
  auto param = model->addOperand(&type2);
  auto output0 = model->addOperand(&type7);
  auto input0_tmp = model->addOperand(&type3);
  auto dummy = model->addOperand(&type9);
  auto param1 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type4);
  auto dummy1 = model->addOperand(&type10);
  auto param2 = model->addOperand(&type2);
  auto input2_tmp = model->addOperand(&type5);
  auto dummy2 = model->addOperand(&type11);
  auto param3 = model->addOperand(&type2);
  auto input3_tmp = model->addOperand(&type6);
  auto dummy3 = model->addOperand(&type12);
  auto param4 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static uint8_t dummy_init[] = {127};
  model->setOperandValue(dummy, dummy_init, sizeof(uint8_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static uint8_t dummy1_init[] = {0};
  model->setOperandValue(dummy1, dummy1_init, sizeof(uint8_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static uint8_t dummy2_init[] = {123};
  model->setOperandValue(dummy2, dummy2_init, sizeof(uint8_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static uint8_t dummy3_init[] = {0};
  model->setOperandValue(dummy3, dummy3_init, sizeof(uint8_t) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy, param1}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy1, param2}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy2, param3}, {input2});
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy3, param4}, {input3});
  model->addOperation(ANEURALNETWORKS_CONCATENATION, {input0, input1, input2, input3, param}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp, input2_tmp, input3_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::concat_mixed_quant
namespace generated_tests::concat_mixed_quant {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 0.05f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.089f, 123);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.029f, 0);
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.084f, 127);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.05f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.089f, 123);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.029f, 0);
  OperandType type8(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.1f, 127);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1}, 0.084f, 127);
  // Phase 1, operands
  auto input0 = model->addOperand(&type3);
  auto input1 = model->addOperand(&type4);
  auto input2 = model->addOperand(&type5);
  auto input3 = model->addOperand(&type6);
  auto param = model->addOperand(&type2);
  auto output0 = model->addOperand(&type8);
  auto input0_tmp = model->addOperand(&type3);
  auto dummy4 = model->addOperand(&type9);
  auto param5 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type4);
  auto dummy5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type2);
  auto input2_tmp = model->addOperand(&type5);
  auto dummy6 = model->addOperand(&type11);
  auto param7 = model->addOperand(&type2);
  auto input3_tmp = model->addOperand(&type6);
  auto dummy7 = model->addOperand(&type12);
  auto param8 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static uint8_t dummy4_init[] = {127};
  model->setOperandValue(dummy4, dummy4_init, sizeof(uint8_t) * 1);
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static uint8_t dummy5_init[] = {0};
  model->setOperandValue(dummy5, dummy5_init, sizeof(uint8_t) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static uint8_t dummy6_init[] = {123};
  model->setOperandValue(dummy6, dummy6_init, sizeof(uint8_t) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static uint8_t dummy7_init[] = {0};
  model->setOperandValue(dummy7, dummy7_init, sizeof(uint8_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy4, param5}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy5, param6}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy6, param7}, {input2});
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy7, param8}, {input3});
  model->addOperation(ANEURALNETWORKS_CONCATENATION, {input0, input1, input2, input3, param}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp, input2_tmp, input3_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::concat_mixed_quant
namespace generated_tests::concat_mixed_quant {

void CreateModel_quant8_2(Model *model) {
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 1, 8}, 0.0078125f, 127);
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.084f, 127);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.05f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.089f, 123);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.029f, 0);
  // Phase 1, operands
  auto input0 = model->addOperand(&type3);
  auto input1 = model->addOperand(&type4);
  auto input2 = model->addOperand(&type5);
  auto input3 = model->addOperand(&type6);
  auto param = model->addOperand(&type2);
  auto output0 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONCATENATION, {input0, input1, input2, input3, param}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1, input2, input3},
    {output0});
  assert(model->isValid());
}

bool is_ignored_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::concat_mixed_quant
namespace generated_tests::concat_mixed_quant {

void CreateModel_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.0078125f, 127);
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.084f, 127);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.05f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.089f, 123);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.029f, 0);
  // Phase 1, operands
  auto input0 = model->addOperand(&type3);
  auto input1 = model->addOperand(&type4);
  auto input2 = model->addOperand(&type5);
  auto input3 = model->addOperand(&type6);
  auto param = model->addOperand(&type2);
  auto output0 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_CONCATENATION, {input0, input1, input2, input3, param}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0, input1, input2, input3},
    {output0});
  assert(model->isValid());
}

bool is_ignored_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::concat_mixed_quant
namespace generated_tests::concat_mixed_quant {

void CreateModel_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 0.05f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.089f, 123);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.029f, 0);
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 1, 8}, 0.0078125f, 127);
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.084f, 127);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.05f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.089f, 123);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.029f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1}, 0.084f, 127);
  // Phase 1, operands
  auto input0 = model->addOperand(&type3);
  auto input1 = model->addOperand(&type4);
  auto input2 = model->addOperand(&type5);
  auto input3 = model->addOperand(&type6);
  auto param = model->addOperand(&type2);
  auto output0 = model->addOperand(&type13);
  auto input0_tmp = model->addOperand(&type3);
  auto dummy8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type4);
  auto dummy9 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type2);
  auto input2_tmp = model->addOperand(&type5);
  auto dummy10 = model->addOperand(&type11);
  auto param11 = model->addOperand(&type2);
  auto input3_tmp = model->addOperand(&type6);
  auto dummy11 = model->addOperand(&type12);
  auto param12 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static uint8_t dummy8_init[] = {127};
  model->setOperandValue(dummy8, dummy8_init, sizeof(uint8_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static uint8_t dummy9_init[] = {0};
  model->setOperandValue(dummy9, dummy9_init, sizeof(uint8_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static uint8_t dummy10_init[] = {123};
  model->setOperandValue(dummy10, dummy10_init, sizeof(uint8_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static uint8_t dummy11_init[] = {0};
  model->setOperandValue(dummy11, dummy11_init, sizeof(uint8_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy8, param9}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy9, param10}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy10, param11}, {input2});
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy11, param12}, {input3});
  model->addOperation(ANEURALNETWORKS_CONCATENATION, {input0, input1, input2, input3, param}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp, input2_tmp, input3_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::concat_mixed_quant
namespace generated_tests::concat_mixed_quant {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type10(Type::TENSOR_QUANT8_ASYMM, {1}, 0.05f, 0);
  OperandType type11(Type::TENSOR_QUANT8_ASYMM, {1}, 0.089f, 123);
  OperandType type12(Type::TENSOR_QUANT8_ASYMM, {1}, 0.029f, 0);
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0}, 0.0078125f, 127);
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.084f, 127);
  OperandType type4(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.05f, 0);
  OperandType type5(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.089f, 123);
  OperandType type6(Type::TENSOR_QUANT8_ASYMM, {2, 1, 2}, 0.029f, 0);
  OperandType type9(Type::TENSOR_QUANT8_ASYMM, {1}, 0.084f, 127);
  // Phase 1, operands
  auto input0 = model->addOperand(&type3);
  auto input1 = model->addOperand(&type4);
  auto input2 = model->addOperand(&type5);
  auto input3 = model->addOperand(&type6);
  auto param = model->addOperand(&type2);
  auto output0 = model->addOperand(&type14);
  auto input0_tmp = model->addOperand(&type3);
  auto dummy12 = model->addOperand(&type9);
  auto param13 = model->addOperand(&type2);
  auto input1_tmp = model->addOperand(&type4);
  auto dummy13 = model->addOperand(&type10);
  auto param14 = model->addOperand(&type2);
  auto input2_tmp = model->addOperand(&type5);
  auto dummy14 = model->addOperand(&type11);
  auto param15 = model->addOperand(&type2);
  auto input3_tmp = model->addOperand(&type6);
  auto dummy15 = model->addOperand(&type12);
  auto param16 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static uint8_t dummy12_init[] = {127};
  model->setOperandValue(dummy12, dummy12_init, sizeof(uint8_t) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static uint8_t dummy13_init[] = {0};
  model->setOperandValue(dummy13, dummy13_init, sizeof(uint8_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static uint8_t dummy14_init[] = {123};
  model->setOperandValue(dummy14, dummy14_init, sizeof(uint8_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static uint8_t dummy15_init[] = {0};
  model->setOperandValue(dummy15, dummy15_init, sizeof(uint8_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy12, param13}, {input0});
  model->addOperation(ANEURALNETWORKS_ADD, {input1_tmp, dummy13, param14}, {input1});
  model->addOperation(ANEURALNETWORKS_ADD, {input2_tmp, dummy14, param15}, {input2});
  model->addOperation(ANEURALNETWORKS_ADD, {input3_tmp, dummy15, param16}, {input3});
  model->addOperation(ANEURALNETWORKS_CONCATENATION, {input0, input1, input2, input3, param}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0_tmp, input1_tmp, input2_tmp, input3_tmp},
    {output0});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::concat_mixed_quant
