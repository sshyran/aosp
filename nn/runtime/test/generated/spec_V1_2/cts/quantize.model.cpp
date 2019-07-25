// Generated from quantize.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::quantize {

void CreateModel_quant8(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {300}, 1.0f, 0);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type14);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input0}, {output0});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type15);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input0}, {output0});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {300}, 1.0f, 0);
  OperandType type16(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type14);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type16);
  auto param13 = model->addOperand(&type9);
  // Phase 2, operations
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy, param13}, {input0});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input0}, {output0});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  OperandType type16(Type::TENSOR_FLOAT32, {1});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto output0 = model->addOperand(&type15);
  auto input0_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type16);
  auto param14 = model->addOperand(&type9);
  // Phase 2, operations
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input0_tmp, dummy1, param14}, {input0});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input0}, {output0});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {300}, 1.0f, 1);
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto output01 = model->addOperand(&type17);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input01}, {output01});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto output01 = model->addOperand(&type18);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input01}, {output01});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type16(Type::TENSOR_FLOAT32, {1});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {300}, 1.0f, 1);
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto output01 = model->addOperand(&type17);
  auto input01_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type16);
  auto param15 = model->addOperand(&type9);
  // Phase 2, operations
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy2, param15}, {input01});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input01}, {output01});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type16(Type::TENSOR_FLOAT32, {1});
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto output01 = model->addOperand(&type18);
  auto input01_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type16);
  auto param16 = model->addOperand(&type9);
  // Phase 2, operations
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input01_tmp, dummy3, param16}, {input01});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input01}, {output01});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {300}, 0.01f, 120);
  // Phase 1, operands
  auto input02 = model->addOperand(&type0);
  auto output02 = model->addOperand(&type19);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input02}, {output02});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input02 = model->addOperand(&type0);
  auto output02 = model->addOperand(&type20);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input02}, {output02});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type16(Type::TENSOR_FLOAT32, {1});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {300}, 0.01f, 120);
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input02 = model->addOperand(&type0);
  auto output02 = model->addOperand(&type19);
  auto input02_tmp = model->addOperand(&type0);
  auto dummy4 = model->addOperand(&type16);
  auto param17 = model->addOperand(&type9);
  // Phase 2, operations
  static float dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(float) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input02_tmp, dummy4, param17}, {input02});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input02}, {output02});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type16(Type::TENSOR_FLOAT32, {1});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input02 = model->addOperand(&type0);
  auto output02 = model->addOperand(&type20);
  auto input02_tmp = model->addOperand(&type0);
  auto dummy5 = model->addOperand(&type16);
  auto param18 = model->addOperand(&type9);
  // Phase 2, operations
  static float dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(float) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input02_tmp, dummy5, param18}, {input02});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input02}, {output02});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {300}, 10.0f, 120);
  // Phase 1, operands
  auto input03 = model->addOperand(&type0);
  auto output03 = model->addOperand(&type21);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input03}, {output03});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input03 = model->addOperand(&type0);
  auto output03 = model->addOperand(&type22);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input03}, {output03});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type16(Type::TENSOR_FLOAT32, {1});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {300}, 10.0f, 120);
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input03 = model->addOperand(&type0);
  auto output03 = model->addOperand(&type21);
  auto input03_tmp = model->addOperand(&type0);
  auto dummy6 = model->addOperand(&type16);
  auto param19 = model->addOperand(&type9);
  // Phase 2, operations
  static float dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy6, param19}, {input03});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input03}, {output03});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {300});
  OperandType type16(Type::TENSOR_FLOAT32, {1});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input03 = model->addOperand(&type0);
  auto output03 = model->addOperand(&type22);
  auto input03_tmp = model->addOperand(&type0);
  auto dummy7 = model->addOperand(&type16);
  auto param20 = model->addOperand(&type9);
  // Phase 2, operations
  static float dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(float) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input03_tmp, dummy7, param20}, {input03});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input03}, {output03});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_5(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {300}, 1.0f, 0);
  // Phase 1, operands
  auto input04 = model->addOperand(&type1);
  auto output04 = model->addOperand(&type14);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input04}, {output04});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_dynamic_output_shape_5(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  // Phase 1, operands
  auto input04 = model->addOperand(&type1);
  auto output04 = model->addOperand(&type15);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input04}, {output04});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_all_inputs_as_internal_5(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {300}, 1.0f, 0);
  OperandType type23(Type::TENSOR_FLOAT16, {1});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input04 = model->addOperand(&type1);
  auto output04 = model->addOperand(&type14);
  auto input04_tmp = model->addOperand(&type1);
  auto dummy8 = model->addOperand(&type23);
  auto param21 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(_Float16) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input04_tmp, dummy8, param21}, {input04});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input04}, {output04});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 0);
  OperandType type23(Type::TENSOR_FLOAT16, {1});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input04 = model->addOperand(&type1);
  auto output04 = model->addOperand(&type15);
  auto input04_tmp = model->addOperand(&type1);
  auto dummy9 = model->addOperand(&type23);
  auto param22 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(_Float16) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input04_tmp, dummy9, param22}, {input04});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input04}, {output04});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_6(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {300}, 1.0f, 1);
  // Phase 1, operands
  auto input05 = model->addOperand(&type1);
  auto output05 = model->addOperand(&type17);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input05}, {output05});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_dynamic_output_shape_6(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  // Phase 1, operands
  auto input05 = model->addOperand(&type1);
  auto output05 = model->addOperand(&type18);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input05}, {output05});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_all_inputs_as_internal_6(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {300}, 1.0f, 1);
  OperandType type23(Type::TENSOR_FLOAT16, {1});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input05 = model->addOperand(&type1);
  auto output05 = model->addOperand(&type17);
  auto input05_tmp = model->addOperand(&type1);
  auto dummy10 = model->addOperand(&type23);
  auto param23 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(_Float16) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input05_tmp, dummy10, param23}, {input05});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input05}, {output05});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_6(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {0}, 1.0f, 1);
  OperandType type23(Type::TENSOR_FLOAT16, {1});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input05 = model->addOperand(&type1);
  auto output05 = model->addOperand(&type18);
  auto input05_tmp = model->addOperand(&type1);
  auto dummy11 = model->addOperand(&type23);
  auto param24 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(_Float16) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input05_tmp, dummy11, param24}, {input05});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input05}, {output05});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_7(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {300}, 0.01f, 120);
  // Phase 1, operands
  auto input06 = model->addOperand(&type1);
  auto output06 = model->addOperand(&type19);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input06}, {output06});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_dynamic_output_shape_7(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  // Phase 1, operands
  auto input06 = model->addOperand(&type1);
  auto output06 = model->addOperand(&type20);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input06}, {output06});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_all_inputs_as_internal_7(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {300}, 0.01f, 120);
  OperandType type23(Type::TENSOR_FLOAT16, {1});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input06 = model->addOperand(&type1);
  auto output06 = model->addOperand(&type19);
  auto input06_tmp = model->addOperand(&type1);
  auto dummy12 = model->addOperand(&type23);
  auto param25 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(_Float16) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input06_tmp, dummy12, param25}, {input06});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input06}, {output06});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_7(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 120);
  OperandType type23(Type::TENSOR_FLOAT16, {1});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input06 = model->addOperand(&type1);
  auto output06 = model->addOperand(&type20);
  auto input06_tmp = model->addOperand(&type1);
  auto dummy13 = model->addOperand(&type23);
  auto param26 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input06_tmp, dummy13, param26}, {input06});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input06}, {output06});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_8(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {300}, 10.0f, 120);
  // Phase 1, operands
  auto input07 = model->addOperand(&type1);
  auto output07 = model->addOperand(&type21);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input07}, {output07});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_dynamic_output_shape_8(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  // Phase 1, operands
  auto input07 = model->addOperand(&type1);
  auto output07 = model->addOperand(&type22);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input07}, {output07});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_all_inputs_as_internal_8(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {300}, 10.0f, 120);
  OperandType type23(Type::TENSOR_FLOAT16, {1});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input07 = model->addOperand(&type1);
  auto output07 = model->addOperand(&type21);
  auto input07_tmp = model->addOperand(&type1);
  auto dummy14 = model->addOperand(&type23);
  auto param27 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(_Float16) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input07_tmp, dummy14, param27}, {input07});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input07}, {output07});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_8(Model *model) {
  OperandType type1(Type::TENSOR_FLOAT16, {300});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {0}, 10.0f, 120);
  OperandType type23(Type::TENSOR_FLOAT16, {1});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto input07 = model->addOperand(&type1);
  auto output07 = model->addOperand(&type22);
  auto input07_tmp = model->addOperand(&type1);
  auto dummy15 = model->addOperand(&type23);
  auto param28 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(_Float16) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {input07_tmp, dummy15, param28}, {input07});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {input07}, {output07});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_zero_sized(Model *model) {
  OperandType type10(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_INT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type7(Type::TENSOR_INT32, {1});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type2);
  auto roi = model->addOperand(&type3);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto param6 = model->addOperand(&type8);
  auto scoresOut = model->addOperand(&type4);
  auto roiOut = model->addOperand(&type6);
  auto classesOut = model->addOperand(&type5);
  auto batchSplitOut = model->addOperand(&type5);
  auto in = model->addOperand(&type11);
  auto param7 = model->addOperand(&type9);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type8);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type9);
  auto param12 = model->addOperand(&type9);
  auto layout = model->addOperand(&type10);
  auto featureMap = model->addOperand(&type12);
  auto out = model->addOperand(&type13);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
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
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {featureMap}, {out});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_zero_sized_dynamic_output_shape(Model *model) {
  OperandType type10(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_INT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type7(Type::TENSOR_INT32, {1});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type2);
  auto roi = model->addOperand(&type3);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto param6 = model->addOperand(&type8);
  auto scoresOut = model->addOperand(&type4);
  auto roiOut = model->addOperand(&type6);
  auto classesOut = model->addOperand(&type5);
  auto batchSplitOut = model->addOperand(&type5);
  auto in = model->addOperand(&type11);
  auto param7 = model->addOperand(&type9);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type8);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type9);
  auto param12 = model->addOperand(&type9);
  auto layout = model->addOperand(&type10);
  auto featureMap = model->addOperand(&type12);
  auto out = model->addOperand(&type24);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
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
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {featureMap}, {out});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_zero_sized_relaxed(Model *model) {
  OperandType type10(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_INT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type7(Type::TENSOR_INT32, {1});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type2);
  auto roi = model->addOperand(&type3);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto param6 = model->addOperand(&type8);
  auto scoresOut = model->addOperand(&type4);
  auto roiOut = model->addOperand(&type6);
  auto classesOut = model->addOperand(&type5);
  auto batchSplitOut = model->addOperand(&type5);
  auto in = model->addOperand(&type11);
  auto param7 = model->addOperand(&type9);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type8);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type9);
  auto param12 = model->addOperand(&type9);
  auto layout = model->addOperand(&type10);
  auto featureMap = model->addOperand(&type12);
  auto out = model->addOperand(&type13);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
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
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {featureMap}, {out});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_zero_sized_relaxed_dynamic_output_shape(Model *model) {
  OperandType type10(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type4(Type::TENSOR_FLOAT32, {0});
  OperandType type5(Type::TENSOR_INT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type7(Type::TENSOR_INT32, {1});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type2);
  auto roi = model->addOperand(&type3);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto param6 = model->addOperand(&type8);
  auto scoresOut = model->addOperand(&type4);
  auto roiOut = model->addOperand(&type6);
  auto classesOut = model->addOperand(&type5);
  auto batchSplitOut = model->addOperand(&type5);
  auto in = model->addOperand(&type11);
  auto param7 = model->addOperand(&type9);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type8);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type9);
  auto param12 = model->addOperand(&type9);
  auto layout = model->addOperand(&type10);
  auto featureMap = model->addOperand(&type12);
  auto out = model->addOperand(&type24);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
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
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {featureMap}, {out});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_zero_sized_float16(Model *model) {
  OperandType type10(Type::BOOL, {});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type25(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type27(Type::FLOAT16, {});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type29(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type31(Type::TENSOR_FLOAT16, {0});
  OperandType type5(Type::TENSOR_INT32, {0});
  OperandType type7(Type::TENSOR_INT32, {1});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type30);
  auto roi = model->addOperand(&type28);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type27);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type27);
  auto param5 = model->addOperand(&type27);
  auto param6 = model->addOperand(&type27);
  auto scoresOut = model->addOperand(&type31);
  auto roiOut = model->addOperand(&type29);
  auto classesOut = model->addOperand(&type5);
  auto batchSplitOut = model->addOperand(&type5);
  auto in = model->addOperand(&type26);
  auto param7 = model->addOperand(&type9);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type27);
  auto param10 = model->addOperand(&type27);
  auto param11 = model->addOperand(&type9);
  auto param12 = model->addOperand(&type9);
  auto layout = model->addOperand(&type10);
  auto featureMap = model->addOperand(&type25);
  auto out = model->addOperand(&type13);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static _Float16 param1_init[] = {0.30000001192092896f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.4000000059604645f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static _Float16 param6_init[] = {0.30000001192092896f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static _Float16 param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {featureMap}, {out});
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

} // namespace generated_tests::quantize
namespace generated_tests::quantize {

void CreateModel_zero_sized_float16_dynamic_output_shape(Model *model) {
  OperandType type10(Type::BOOL, {});
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  OperandType type25(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type27(Type::FLOAT16, {});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type29(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type32(Type::TENSOR_FLOAT16, {0});
  OperandType type5(Type::TENSOR_INT32, {0});
  OperandType type7(Type::TENSOR_INT32, {1});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type30);
  auto roi = model->addOperand(&type28);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type27);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type27);
  auto param5 = model->addOperand(&type27);
  auto param6 = model->addOperand(&type27);
  auto scoresOut = model->addOperand(&type32);
  auto roiOut = model->addOperand(&type29);
  auto classesOut = model->addOperand(&type5);
  auto batchSplitOut = model->addOperand(&type5);
  auto in = model->addOperand(&type26);
  auto param7 = model->addOperand(&type9);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type27);
  auto param10 = model->addOperand(&type27);
  auto param11 = model->addOperand(&type9);
  auto param12 = model->addOperand(&type9);
  auto layout = model->addOperand(&type10);
  auto featureMap = model->addOperand(&type25);
  auto out = model->addOperand(&type24);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static _Float16 param1_init[] = {0.30000001192092896f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.4000000059604645f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static _Float16 param6_init[] = {0.30000001192092896f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static int32_t param7_init[] = {2};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 param9_init[] = {2.0f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static _Float16 param10_init[] = {2.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static int32_t param11_init[] = {4};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_QUANTIZE, {featureMap}, {out});
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

} // namespace generated_tests::quantize
