// Generated from div_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::div_v1_2 {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {3});
  OperandType type1(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type0);
  auto act = model->addOperand(&type1);
  auto op3 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DIV, {op1, op2, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2},
    {op3});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::div_v1_2
namespace generated_tests::div_v1_2 {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {3});
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type0);
  auto act = model->addOperand(&type1);
  auto op3 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DIV, {op1, op2, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, op2},
    {op3});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::div_v1_2
namespace generated_tests::div_v1_2 {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {3});
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type0);
  auto act = model->addOperand(&type1);
  auto op3 = model->addOperand(&type0);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type16);
  auto param14 = model->addOperand(&type1);
  auto op2_tmp = model->addOperand(&type0);
  auto dummy1 = model->addOperand(&type16);
  auto param15 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static _Float16 dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(_Float16) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static _Float16 dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(_Float16) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param14}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy1, param15}, {op2});
  model->addOperation(ANEURALNETWORKS_DIV, {op1, op2, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::div_v1_2
namespace generated_tests::div_v1_2 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT16, {3});
  OperandType type1(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT16, {0});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type0);
  auto op2 = model->addOperand(&type0);
  auto act = model->addOperand(&type1);
  auto op3 = model->addOperand(&type15);
  auto op1_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type16);
  auto param16 = model->addOperand(&type1);
  auto op2_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type16);
  auto param17 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t act_init[] = {0};
  model->setOperandValue(act, act_init, sizeof(int32_t) * 1);
  static _Float16 dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(_Float16) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static _Float16 dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(_Float16) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy2, param16}, {op1});
  model->addOperation(ANEURALNETWORKS_ADD, {op2_tmp, dummy3, param17}, {op2});
  model->addOperation(ANEURALNETWORKS_DIV, {op1, op2, act}, {op3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp, op2_tmp},
    {op3});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::div_v1_2
namespace generated_tests::div_v1_2 {

void CreateModel_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT16, {1, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type2);
  auto op21 = model->addOperand(&type3);
  auto act1 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t act1_init[] = {0};
  model->setOperandValue(act1, act1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DIV, {op11, op21, act1}, {op31});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21},
    {op31});
  assert(model->isValid());
}

bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::div_v1_2
namespace generated_tests::div_v1_2 {

void CreateModel_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type2(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT16, {1, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type2);
  auto op21 = model->addOperand(&type3);
  auto act1 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t act1_init[] = {0};
  model->setOperandValue(act1, act1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_DIV, {op11, op21, act1}, {op31});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, op21},
    {op31});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::div_v1_2
namespace generated_tests::div_v1_2 {

void CreateModel_all_inputs_as_internal_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT16, {1, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type2);
  auto op21 = model->addOperand(&type3);
  auto act1 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type2);
  auto op11_tmp = model->addOperand(&type2);
  auto dummy4 = model->addOperand(&type16);
  auto param18 = model->addOperand(&type1);
  auto op21_tmp = model->addOperand(&type3);
  auto dummy5 = model->addOperand(&type16);
  auto param19 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t act1_init[] = {0};
  model->setOperandValue(act1, act1_init, sizeof(int32_t) * 1);
  static _Float16 dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(_Float16) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static _Float16 dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(_Float16) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy4, param18}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy5, param19}, {op21});
  model->addOperation(ANEURALNETWORKS_DIV, {op11, op21, act1}, {op31});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp, op21_tmp},
    {op31});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::div_v1_2
namespace generated_tests::div_v1_2 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT16, {1});
  OperandType type17(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type2(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT16, {1, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type2);
  auto op21 = model->addOperand(&type3);
  auto act1 = model->addOperand(&type1);
  auto op31 = model->addOperand(&type17);
  auto op11_tmp = model->addOperand(&type2);
  auto dummy6 = model->addOperand(&type16);
  auto param20 = model->addOperand(&type1);
  auto op21_tmp = model->addOperand(&type3);
  auto dummy7 = model->addOperand(&type16);
  auto param21 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t act1_init[] = {0};
  model->setOperandValue(act1, act1_init, sizeof(int32_t) * 1);
  static _Float16 dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(_Float16) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static _Float16 dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(_Float16) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy6, param20}, {op11});
  model->addOperation(ANEURALNETWORKS_ADD, {op21_tmp, dummy7, param21}, {op21});
  model->addOperation(ANEURALNETWORKS_DIV, {op11, op21, act1}, {op31});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp, op21_tmp},
    {op31});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::div_v1_2
namespace generated_tests::div_v1_2 {

void CreateModel_zero_sized(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 2, 2, 2});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type6(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type4);
  auto roi = model->addOperand(&type5);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type10);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type1);
  auto param4 = model->addOperand(&type10);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type10);
  auto scoresOut = model->addOperand(&type6);
  auto roiOut = model->addOperand(&type8);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type12);
  auto param7 = model->addOperand(&type1);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type10);
  auto param11 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type1);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type13);
  auto op = model->addOperand(&type14);
  auto param13 = model->addOperand(&type1);
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
  static float op_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op, op_init, sizeof(float) * 4);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_DIV, {featureMap, op, param13}, {out});
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

} // namespace generated_tests::div_v1_2
namespace generated_tests::div_v1_2 {

void CreateModel_zero_sized_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 2, 2, 2});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type6(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type4);
  auto roi = model->addOperand(&type5);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type10);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type1);
  auto param4 = model->addOperand(&type10);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type10);
  auto scoresOut = model->addOperand(&type6);
  auto roiOut = model->addOperand(&type8);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type12);
  auto param7 = model->addOperand(&type1);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type10);
  auto param11 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type1);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type13);
  auto op = model->addOperand(&type14);
  auto param13 = model->addOperand(&type1);
  auto out = model->addOperand(&type18);
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
  static float op_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op, op_init, sizeof(float) * 4);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_DIV, {featureMap, op, param13}, {out});
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

} // namespace generated_tests::div_v1_2
namespace generated_tests::div_v1_2 {

void CreateModel_zero_sized_relaxed(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 2, 2, 2});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type6(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type4);
  auto roi = model->addOperand(&type5);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type10);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type1);
  auto param4 = model->addOperand(&type10);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type10);
  auto scoresOut = model->addOperand(&type6);
  auto roiOut = model->addOperand(&type8);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type12);
  auto param7 = model->addOperand(&type1);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type10);
  auto param11 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type1);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type13);
  auto op = model->addOperand(&type14);
  auto param13 = model->addOperand(&type1);
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
  static float op_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op, op_init, sizeof(float) * 4);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_DIV, {featureMap, op, param13}, {out});
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

} // namespace generated_tests::div_v1_2
namespace generated_tests::div_v1_2 {

void CreateModel_zero_sized_relaxed_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::FLOAT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 2, 2, 2});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type6(Type::TENSOR_FLOAT32, {0});
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type4);
  auto roi = model->addOperand(&type5);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type10);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type1);
  auto param4 = model->addOperand(&type10);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type10);
  auto scoresOut = model->addOperand(&type6);
  auto roiOut = model->addOperand(&type8);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type12);
  auto param7 = model->addOperand(&type1);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type10);
  auto param11 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type1);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type13);
  auto op = model->addOperand(&type14);
  auto param13 = model->addOperand(&type1);
  auto out = model->addOperand(&type18);
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
  static float op_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op, op_init, sizeof(float) * 4);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_DIV, {featureMap, op, param13}, {out});
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

} // namespace generated_tests::div_v1_2
namespace generated_tests::div_v1_2 {

void CreateModel_zero_sized_float16(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {0, 2, 2, 2});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 1, 1, 2});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type22(Type::FLOAT16, {});
  OperandType type23(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type24(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type26(Type::TENSOR_FLOAT16, {0});
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type25);
  auto roi = model->addOperand(&type23);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type22);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type1);
  auto param4 = model->addOperand(&type22);
  auto param5 = model->addOperand(&type22);
  auto param6 = model->addOperand(&type22);
  auto scoresOut = model->addOperand(&type26);
  auto roiOut = model->addOperand(&type24);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type20);
  auto param7 = model->addOperand(&type1);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type22);
  auto param10 = model->addOperand(&type22);
  auto param11 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type1);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type19);
  auto op = model->addOperand(&type21);
  auto param13 = model->addOperand(&type1);
  auto out = model->addOperand(&type19);
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
  static _Float16 op_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op, op_init, sizeof(_Float16) * 4);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_DIV, {featureMap, op, param13}, {out});
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

} // namespace generated_tests::div_v1_2
namespace generated_tests::div_v1_2 {

void CreateModel_zero_sized_float16_dynamic_output_shape(Model *model) {
  OperandType type1(Type::INT32, {});
  OperandType type11(Type::BOOL, {});
  OperandType type15(Type::TENSOR_FLOAT16, {0});
  OperandType type19(Type::TENSOR_FLOAT16, {0, 2, 2, 2});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 1, 1, 2});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type22(Type::FLOAT16, {});
  OperandType type23(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type24(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type27(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type7(Type::TENSOR_INT32, {0});
  OperandType type9(Type::TENSOR_INT32, {1});
  // Phase 1, operands
  auto scores = model->addOperand(&type25);
  auto roi = model->addOperand(&type23);
  auto param = model->addOperand(&type9);
  auto param1 = model->addOperand(&type22);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type1);
  auto param4 = model->addOperand(&type22);
  auto param5 = model->addOperand(&type22);
  auto param6 = model->addOperand(&type22);
  auto scoresOut = model->addOperand(&type15);
  auto roiOut = model->addOperand(&type24);
  auto classesOut = model->addOperand(&type7);
  auto batchSplitOut = model->addOperand(&type7);
  auto in = model->addOperand(&type20);
  auto param7 = model->addOperand(&type1);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type22);
  auto param10 = model->addOperand(&type22);
  auto param11 = model->addOperand(&type1);
  auto param12 = model->addOperand(&type1);
  auto layout = model->addOperand(&type11);
  auto featureMap = model->addOperand(&type19);
  auto op = model->addOperand(&type21);
  auto param13 = model->addOperand(&type1);
  auto out = model->addOperand(&type27);
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
  static _Float16 op_init[] = {1.0f, 2.0f, 3.0f, 4.0f};
  model->setOperandValue(op, op_init, sizeof(_Float16) * 4);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param, param1, param2, param3, param4, param5, param6}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param7, param8, param9, param10, param11, param12, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_DIV, {featureMap, op, param13}, {out});
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

} // namespace generated_tests::div_v1_2
