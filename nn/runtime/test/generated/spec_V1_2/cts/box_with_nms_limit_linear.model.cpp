// Generated from box_with_nms_limit_linear.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::box_with_nms_limit_linear {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {19, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {19, 12});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {16, 4});
  OperandType type5(Type::TENSOR_INT32, {16});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type0);
  auto roi = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type2);
  auto param = model->addOperand(&type6);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type3);
  auto roiOut = model->addOperand(&type4);
  auto classesOut = model->addOperand(&type5);
  auto batchSplitOut = model->addOperand(&type5);
  // Phase 2, operations
  static float param_init[] = {0.3f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static int32_t param1_init[] = {-1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {0.4f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {1.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.3f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, batchSplit, param, param1, param2, param3, param4, param5}, {scoresOut, roiOut, classesOut, batchSplitOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, roi, batchSplit},
    {scoresOut, roiOut, classesOut, batchSplitOut});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {19, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {19, 12});
  OperandType type11(Type::TENSOR_FLOAT32, {0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_INT32, {0});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type0);
  auto roi = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type2);
  auto param = model->addOperand(&type6);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type11);
  auto roiOut = model->addOperand(&type12);
  auto classesOut = model->addOperand(&type13);
  auto batchSplitOut = model->addOperand(&type13);
  // Phase 2, operations
  static float param_init[] = {0.3f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static int32_t param1_init[] = {-1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {0.4f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {1.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.3f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, batchSplit, param, param1, param2, param3, param4, param5}, {scoresOut, roiOut, classesOut, batchSplitOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, roi, batchSplit},
    {scoresOut, roiOut, classesOut, batchSplitOut});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {19, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {19, 12});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {16, 4});
  OperandType type5(Type::TENSOR_INT32, {16});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type0);
  auto roi = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type2);
  auto param = model->addOperand(&type6);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type3);
  auto roiOut = model->addOperand(&type4);
  auto classesOut = model->addOperand(&type5);
  auto batchSplitOut = model->addOperand(&type5);
  auto scores_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type14);
  auto param12 = model->addOperand(&type7);
  auto roi_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type14);
  auto param13 = model->addOperand(&type7);
  // Phase 2, operations
  static float param_init[] = {0.3f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static int32_t param1_init[] = {-1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {0.4f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {1.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.3f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy, param12}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy1, param13}, {roi});
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, batchSplit, param, param1, param2, param3, param4, param5}, {scoresOut, roiOut, classesOut, batchSplitOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit, scores_tmp, roi_tmp},
    {scoresOut, roiOut, classesOut, batchSplitOut});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {19, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {19, 12});
  OperandType type11(Type::TENSOR_FLOAT32, {0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_INT32, {0});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type0);
  auto roi = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type2);
  auto param = model->addOperand(&type6);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type11);
  auto roiOut = model->addOperand(&type12);
  auto classesOut = model->addOperand(&type13);
  auto batchSplitOut = model->addOperand(&type13);
  auto scores_tmp = model->addOperand(&type0);
  auto dummy2 = model->addOperand(&type14);
  auto param14 = model->addOperand(&type7);
  auto roi_tmp = model->addOperand(&type1);
  auto dummy3 = model->addOperand(&type14);
  auto param15 = model->addOperand(&type7);
  // Phase 2, operations
  static float param_init[] = {0.3f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static int32_t param1_init[] = {-1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {0.4f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {1.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.3f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy2, param14}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy3, param15}, {roi});
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, batchSplit, param, param1, param2, param3, param4, param5}, {scoresOut, roiOut, classesOut, batchSplitOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit, scores_tmp, roi_tmp},
    {scoresOut, roiOut, classesOut, batchSplitOut});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {19, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {19, 12});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {16, 4});
  OperandType type5(Type::TENSOR_INT32, {16});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type0);
  auto roi = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type2);
  auto param = model->addOperand(&type6);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type3);
  auto roiOut = model->addOperand(&type4);
  auto classesOut = model->addOperand(&type5);
  auto batchSplitOut = model->addOperand(&type5);
  // Phase 2, operations
  static float param_init[] = {0.3f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static int32_t param1_init[] = {-1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {0.4f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {1.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.3f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, batchSplit, param, param1, param2, param3, param4, param5}, {scoresOut, roiOut, classesOut, batchSplitOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, roi, batchSplit},
    {scoresOut, roiOut, classesOut, batchSplitOut});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {19, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {19, 12});
  OperandType type11(Type::TENSOR_FLOAT32, {0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_INT32, {0});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type0);
  auto roi = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type2);
  auto param = model->addOperand(&type6);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type11);
  auto roiOut = model->addOperand(&type12);
  auto classesOut = model->addOperand(&type13);
  auto batchSplitOut = model->addOperand(&type13);
  // Phase 2, operations
  static float param_init[] = {0.3f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static int32_t param1_init[] = {-1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {0.4f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {1.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.3f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, batchSplit, param, param1, param2, param3, param4, param5}, {scoresOut, roiOut, classesOut, batchSplitOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, roi, batchSplit},
    {scoresOut, roiOut, classesOut, batchSplitOut});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {19, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {19, 12});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type3(Type::TENSOR_FLOAT32, {16});
  OperandType type4(Type::TENSOR_FLOAT32, {16, 4});
  OperandType type5(Type::TENSOR_INT32, {16});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type0);
  auto roi = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type2);
  auto param = model->addOperand(&type6);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type3);
  auto roiOut = model->addOperand(&type4);
  auto classesOut = model->addOperand(&type5);
  auto batchSplitOut = model->addOperand(&type5);
  auto scores_tmp = model->addOperand(&type0);
  auto dummy4 = model->addOperand(&type14);
  auto param16 = model->addOperand(&type7);
  auto roi_tmp = model->addOperand(&type1);
  auto dummy5 = model->addOperand(&type14);
  auto param17 = model->addOperand(&type7);
  // Phase 2, operations
  static float param_init[] = {0.3f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static int32_t param1_init[] = {-1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {0.4f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {1.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.3f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(float) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(float) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy4, param16}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy5, param17}, {roi});
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, batchSplit, param, param1, param2, param3, param4, param5}, {scoresOut, roiOut, classesOut, batchSplitOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit, scores_tmp, roi_tmp},
    {scoresOut, roiOut, classesOut, batchSplitOut});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {19, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {19, 12});
  OperandType type11(Type::TENSOR_FLOAT32, {0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_INT32, {0});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type0);
  auto roi = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type2);
  auto param = model->addOperand(&type6);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type11);
  auto roiOut = model->addOperand(&type12);
  auto classesOut = model->addOperand(&type13);
  auto batchSplitOut = model->addOperand(&type13);
  auto scores_tmp = model->addOperand(&type0);
  auto dummy6 = model->addOperand(&type14);
  auto param18 = model->addOperand(&type7);
  auto roi_tmp = model->addOperand(&type1);
  auto dummy7 = model->addOperand(&type14);
  auto param19 = model->addOperand(&type7);
  // Phase 2, operations
  static float param_init[] = {0.3f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static int32_t param1_init[] = {-1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {0.4f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {1.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.3f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static float dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(float) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static float dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy6, param18}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy7, param19}, {roi});
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, batchSplit, param, param1, param2, param3, param4, param5}, {scoresOut, roiOut, classesOut, batchSplitOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit, scores_tmp, roi_tmp},
    {scoresOut, roiOut, classesOut, batchSplitOut});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_float16(Model *model) {
  OperandType type15(Type::FLOAT16, {});
  OperandType type16(Type::TENSOR_FLOAT16, {19, 12});
  OperandType type17(Type::TENSOR_FLOAT16, {16, 4});
  OperandType type18(Type::TENSOR_FLOAT16, {19, 3});
  OperandType type19(Type::TENSOR_FLOAT16, {16});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type5(Type::TENSOR_INT32, {16});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type18);
  auto roi = model->addOperand(&type16);
  auto batchSplit = model->addOperand(&type2);
  auto param = model->addOperand(&type15);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type15);
  auto param4 = model->addOperand(&type15);
  auto param5 = model->addOperand(&type15);
  auto scoresOut = model->addOperand(&type19);
  auto roiOut = model->addOperand(&type17);
  auto classesOut = model->addOperand(&type5);
  auto batchSplitOut = model->addOperand(&type5);
  // Phase 2, operations
  static _Float16 param_init[] = {0.30000001192092896f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static int32_t param1_init[] = {-1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {0.4000000059604645f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {1.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {0.30000001192092896f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, batchSplit, param, param1, param2, param3, param4, param5}, {scoresOut, roiOut, classesOut, batchSplitOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, roi, batchSplit},
    {scoresOut, roiOut, classesOut, batchSplitOut});
  assert(model->isValid());
}

bool is_ignored_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_float16_dynamic_output_shape(Model *model) {
  OperandType type13(Type::TENSOR_INT32, {0});
  OperandType type15(Type::FLOAT16, {});
  OperandType type16(Type::TENSOR_FLOAT16, {19, 12});
  OperandType type18(Type::TENSOR_FLOAT16, {19, 3});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type20(Type::TENSOR_FLOAT16, {0});
  OperandType type21(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type18);
  auto roi = model->addOperand(&type16);
  auto batchSplit = model->addOperand(&type2);
  auto param = model->addOperand(&type15);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type15);
  auto param4 = model->addOperand(&type15);
  auto param5 = model->addOperand(&type15);
  auto scoresOut = model->addOperand(&type20);
  auto roiOut = model->addOperand(&type21);
  auto classesOut = model->addOperand(&type13);
  auto batchSplitOut = model->addOperand(&type13);
  // Phase 2, operations
  static _Float16 param_init[] = {0.30000001192092896f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static int32_t param1_init[] = {-1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {0.4000000059604645f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {1.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {0.30000001192092896f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, batchSplit, param, param1, param2, param3, param4, param5}, {scoresOut, roiOut, classesOut, batchSplitOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, roi, batchSplit},
    {scoresOut, roiOut, classesOut, batchSplitOut});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_float16_all_inputs_as_internal(Model *model) {
  OperandType type15(Type::FLOAT16, {});
  OperandType type17(Type::TENSOR_FLOAT16, {16, 4});
  OperandType type19(Type::TENSOR_FLOAT16, {16});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type22(Type::TENSOR_FLOAT16, {19, 3});
  OperandType type23(Type::TENSOR_FLOAT16, {1});
  OperandType type24(Type::TENSOR_FLOAT16, {19, 12});
  OperandType type5(Type::TENSOR_INT32, {16});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type22);
  auto roi = model->addOperand(&type24);
  auto batchSplit = model->addOperand(&type2);
  auto param = model->addOperand(&type15);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type15);
  auto param4 = model->addOperand(&type15);
  auto param5 = model->addOperand(&type15);
  auto scoresOut = model->addOperand(&type19);
  auto roiOut = model->addOperand(&type17);
  auto classesOut = model->addOperand(&type5);
  auto batchSplitOut = model->addOperand(&type5);
  auto scores_tmp = model->addOperand(&type22);
  auto dummy8 = model->addOperand(&type23);
  auto param20 = model->addOperand(&type7);
  auto roi_tmp = model->addOperand(&type24);
  auto dummy9 = model->addOperand(&type23);
  auto param21 = model->addOperand(&type7);
  // Phase 2, operations
  static _Float16 param_init[] = {0.30000001192092896f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static int32_t param1_init[] = {-1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {0.4000000059604645f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {1.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {0.30000001192092896f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static _Float16 dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(_Float16) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static _Float16 dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(_Float16) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy8, param20}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy9, param21}, {roi});
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, batchSplit, param, param1, param2, param3, param4, param5}, {scoresOut, roiOut, classesOut, batchSplitOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit, scores_tmp, roi_tmp},
    {scoresOut, roiOut, classesOut, batchSplitOut});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type13(Type::TENSOR_INT32, {0});
  OperandType type15(Type::FLOAT16, {});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type20(Type::TENSOR_FLOAT16, {0});
  OperandType type21(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {19, 3});
  OperandType type23(Type::TENSOR_FLOAT16, {1});
  OperandType type24(Type::TENSOR_FLOAT16, {19, 12});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type22);
  auto roi = model->addOperand(&type24);
  auto batchSplit = model->addOperand(&type2);
  auto param = model->addOperand(&type15);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type15);
  auto param4 = model->addOperand(&type15);
  auto param5 = model->addOperand(&type15);
  auto scoresOut = model->addOperand(&type20);
  auto roiOut = model->addOperand(&type21);
  auto classesOut = model->addOperand(&type13);
  auto batchSplitOut = model->addOperand(&type13);
  auto scores_tmp = model->addOperand(&type22);
  auto dummy10 = model->addOperand(&type23);
  auto param22 = model->addOperand(&type7);
  auto roi_tmp = model->addOperand(&type24);
  auto dummy11 = model->addOperand(&type23);
  auto param23 = model->addOperand(&type7);
  // Phase 2, operations
  static _Float16 param_init[] = {0.30000001192092896f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static int32_t param1_init[] = {-1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {0.4000000059604645f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {1.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {0.30000001192092896f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static _Float16 dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(_Float16) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static _Float16 dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(_Float16) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy10, param22}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy11, param23}, {roi});
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, batchSplit, param, param1, param2, param3, param4, param5}, {scoresOut, roiOut, classesOut, batchSplitOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit, scores_tmp, roi_tmp},
    {scoresOut, roiOut, classesOut, batchSplitOut});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_quant8(Model *model) {
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type25(Type::TENSOR_QUANT16_ASYMM, {19, 12}, 0.125f, 0);
  OperandType type26(Type::TENSOR_QUANT16_ASYMM, {16, 4}, 0.125f, 0);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {19, 3}, 0.01f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {16}, 0.01f, 0);
  OperandType type5(Type::TENSOR_INT32, {16});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type27);
  auto roi = model->addOperand(&type25);
  auto batchSplit = model->addOperand(&type2);
  auto param = model->addOperand(&type6);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type28);
  auto roiOut = model->addOperand(&type26);
  auto classesOut = model->addOperand(&type5);
  auto batchSplitOut = model->addOperand(&type5);
  // Phase 2, operations
  static float param_init[] = {0.3f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static int32_t param1_init[] = {-1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {0.4f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {1.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.3f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, batchSplit, param, param1, param2, param3, param4, param5}, {scoresOut, roiOut, classesOut, batchSplitOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, roi, batchSplit},
    {scoresOut, roiOut, classesOut, batchSplitOut});
  assert(model->isValid());
}

bool is_ignored_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_quant8_dynamic_output_shape(Model *model) {
  OperandType type13(Type::TENSOR_INT32, {0});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type25(Type::TENSOR_QUANT16_ASYMM, {19, 12}, 0.125f, 0);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {19, 3}, 0.01f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 0);
  OperandType type30(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type27);
  auto roi = model->addOperand(&type25);
  auto batchSplit = model->addOperand(&type2);
  auto param = model->addOperand(&type6);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type29);
  auto roiOut = model->addOperand(&type30);
  auto classesOut = model->addOperand(&type13);
  auto batchSplitOut = model->addOperand(&type13);
  // Phase 2, operations
  static float param_init[] = {0.3f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static int32_t param1_init[] = {-1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {0.4f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {1.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.3f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, batchSplit, param, param1, param2, param3, param4, param5}, {scoresOut, roiOut, classesOut, batchSplitOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, roi, batchSplit},
    {scoresOut, roiOut, classesOut, batchSplitOut});
  assert(model->isValid());
}

bool is_ignored_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_quant8_all_inputs_as_internal(Model *model) {
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type25(Type::TENSOR_QUANT16_ASYMM, {19, 12}, 0.125f, 0);
  OperandType type26(Type::TENSOR_QUANT16_ASYMM, {16, 4}, 0.125f, 0);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {19, 3}, 0.01f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {16}, 0.01f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type5(Type::TENSOR_INT32, {16});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type27);
  auto roi = model->addOperand(&type25);
  auto batchSplit = model->addOperand(&type2);
  auto param = model->addOperand(&type6);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type28);
  auto roiOut = model->addOperand(&type26);
  auto classesOut = model->addOperand(&type5);
  auto batchSplitOut = model->addOperand(&type5);
  auto scores_tmp = model->addOperand(&type27);
  auto dummy12 = model->addOperand(&type31);
  auto param24 = model->addOperand(&type7);
  // Phase 2, operations
  static float param_init[] = {0.3f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static int32_t param1_init[] = {-1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {0.4f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {1.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.3f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static uint8_t dummy12_init[] = {0};
  model->setOperandValue(dummy12, dummy12_init, sizeof(uint8_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy12, param24}, {scores});
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, batchSplit, param, param1, param2, param3, param4, param5}, {scoresOut, roiOut, classesOut, batchSplitOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, batchSplit, scores_tmp},
    {scoresOut, roiOut, classesOut, batchSplitOut});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type13(Type::TENSOR_INT32, {0});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type25(Type::TENSOR_QUANT16_ASYMM, {19, 12}, 0.125f, 0);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {19, 3}, 0.01f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 0);
  OperandType type30(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type27);
  auto roi = model->addOperand(&type25);
  auto batchSplit = model->addOperand(&type2);
  auto param = model->addOperand(&type6);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type29);
  auto roiOut = model->addOperand(&type30);
  auto classesOut = model->addOperand(&type13);
  auto batchSplitOut = model->addOperand(&type13);
  auto scores_tmp = model->addOperand(&type27);
  auto dummy13 = model->addOperand(&type31);
  auto param25 = model->addOperand(&type7);
  // Phase 2, operations
  static float param_init[] = {0.3f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static int32_t param1_init[] = {-1};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {0.4f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {1.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.3f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static uint8_t dummy13_init[] = {0};
  model->setOperandValue(dummy13, dummy13_init, sizeof(uint8_t) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy13, param25}, {scores});
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, batchSplit, param, param1, param2, param3, param4, param5}, {scoresOut, roiOut, classesOut, batchSplitOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, batchSplit, scores_tmp},
    {scoresOut, roiOut, classesOut, batchSplitOut});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {19, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {19, 12});
  OperandType type10(Type::TENSOR_INT32, {15});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {15});
  OperandType type9(Type::TENSOR_FLOAT32, {15, 4});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type0);
  auto roi1 = model->addOperand(&type1);
  auto batchSplit1 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type6);
  auto param7 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type6);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto scoresOut1 = model->addOperand(&type8);
  auto roiOut1 = model->addOperand(&type9);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  // Phase 2, operations
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {8};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {0.4f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {0.5f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.3f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, batchSplit1, param6, param7, param8, param9, param10, param11}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, roi1, batchSplit1},
    {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  assert(model->isValid());
}

bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {19, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {19, 12});
  OperandType type11(Type::TENSOR_FLOAT32, {0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_INT32, {0});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type0);
  auto roi1 = model->addOperand(&type1);
  auto batchSplit1 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type6);
  auto param7 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type6);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto scoresOut1 = model->addOperand(&type11);
  auto roiOut1 = model->addOperand(&type12);
  auto classesOut1 = model->addOperand(&type13);
  auto batchSplitOut1 = model->addOperand(&type13);
  // Phase 2, operations
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {8};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {0.4f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {0.5f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.3f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, batchSplit1, param6, param7, param8, param9, param10, param11}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, roi1, batchSplit1},
    {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {19, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {19, 12});
  OperandType type10(Type::TENSOR_INT32, {15});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {15});
  OperandType type9(Type::TENSOR_FLOAT32, {15, 4});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type0);
  auto roi1 = model->addOperand(&type1);
  auto batchSplit1 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type6);
  auto param7 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type6);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto scoresOut1 = model->addOperand(&type8);
  auto roiOut1 = model->addOperand(&type9);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto scores1_tmp = model->addOperand(&type0);
  auto dummy14 = model->addOperand(&type14);
  auto param26 = model->addOperand(&type7);
  auto roi1_tmp = model->addOperand(&type1);
  auto dummy15 = model->addOperand(&type14);
  auto param27 = model->addOperand(&type7);
  // Phase 2, operations
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {8};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {0.4f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {0.5f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.3f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static float dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static float dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(float) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy14, param26}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy15, param27}, {roi1});
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, batchSplit1, param6, param7, param8, param9, param10, param11}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit1, scores1_tmp, roi1_tmp},
    {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {19, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {19, 12});
  OperandType type11(Type::TENSOR_FLOAT32, {0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_INT32, {0});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type0);
  auto roi1 = model->addOperand(&type1);
  auto batchSplit1 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type6);
  auto param7 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type6);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto scoresOut1 = model->addOperand(&type11);
  auto roiOut1 = model->addOperand(&type12);
  auto classesOut1 = model->addOperand(&type13);
  auto batchSplitOut1 = model->addOperand(&type13);
  auto scores1_tmp = model->addOperand(&type0);
  auto dummy16 = model->addOperand(&type14);
  auto param28 = model->addOperand(&type7);
  auto roi1_tmp = model->addOperand(&type1);
  auto dummy17 = model->addOperand(&type14);
  auto param29 = model->addOperand(&type7);
  // Phase 2, operations
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {8};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {0.4f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {0.5f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.3f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static float dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(float) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(float) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy16, param28}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy17, param29}, {roi1});
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, batchSplit1, param6, param7, param8, param9, param10, param11}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit1, scores1_tmp, roi1_tmp},
    {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {19, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {19, 12});
  OperandType type10(Type::TENSOR_INT32, {15});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {15});
  OperandType type9(Type::TENSOR_FLOAT32, {15, 4});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type0);
  auto roi1 = model->addOperand(&type1);
  auto batchSplit1 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type6);
  auto param7 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type6);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto scoresOut1 = model->addOperand(&type8);
  auto roiOut1 = model->addOperand(&type9);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  // Phase 2, operations
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {8};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {0.4f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {0.5f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.3f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, batchSplit1, param6, param7, param8, param9, param10, param11}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, roi1, batchSplit1},
    {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {19, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {19, 12});
  OperandType type11(Type::TENSOR_FLOAT32, {0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_INT32, {0});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type0);
  auto roi1 = model->addOperand(&type1);
  auto batchSplit1 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type6);
  auto param7 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type6);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto scoresOut1 = model->addOperand(&type11);
  auto roiOut1 = model->addOperand(&type12);
  auto classesOut1 = model->addOperand(&type13);
  auto batchSplitOut1 = model->addOperand(&type13);
  // Phase 2, operations
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {8};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {0.4f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {0.5f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.3f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, batchSplit1, param6, param7, param8, param9, param10, param11}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, roi1, batchSplit1},
    {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {19, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {19, 12});
  OperandType type10(Type::TENSOR_INT32, {15});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {15});
  OperandType type9(Type::TENSOR_FLOAT32, {15, 4});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type0);
  auto roi1 = model->addOperand(&type1);
  auto batchSplit1 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type6);
  auto param7 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type6);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto scoresOut1 = model->addOperand(&type8);
  auto roiOut1 = model->addOperand(&type9);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto scores1_tmp = model->addOperand(&type0);
  auto dummy18 = model->addOperand(&type14);
  auto param30 = model->addOperand(&type7);
  auto roi1_tmp = model->addOperand(&type1);
  auto dummy19 = model->addOperand(&type14);
  auto param31 = model->addOperand(&type7);
  // Phase 2, operations
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {8};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {0.4f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {0.5f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.3f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy18, param30}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy19, param31}, {roi1});
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, batchSplit1, param6, param7, param8, param9, param10, param11}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit1, scores1_tmp, roi1_tmp},
    {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {19, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {19, 12});
  OperandType type11(Type::TENSOR_FLOAT32, {0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_INT32, {0});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type0);
  auto roi1 = model->addOperand(&type1);
  auto batchSplit1 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type6);
  auto param7 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type6);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto scoresOut1 = model->addOperand(&type11);
  auto roiOut1 = model->addOperand(&type12);
  auto classesOut1 = model->addOperand(&type13);
  auto batchSplitOut1 = model->addOperand(&type13);
  auto scores1_tmp = model->addOperand(&type0);
  auto dummy20 = model->addOperand(&type14);
  auto param32 = model->addOperand(&type7);
  auto roi1_tmp = model->addOperand(&type1);
  auto dummy21 = model->addOperand(&type14);
  auto param33 = model->addOperand(&type7);
  // Phase 2, operations
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {8};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {0.4f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {0.5f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.3f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static float dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(float) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(float) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy20, param32}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy21, param33}, {roi1});
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, batchSplit1, param6, param7, param8, param9, param10, param11}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit1, scores1_tmp, roi1_tmp},
    {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_float16_2(Model *model) {
  OperandType type10(Type::TENSOR_INT32, {15});
  OperandType type15(Type::FLOAT16, {});
  OperandType type16(Type::TENSOR_FLOAT16, {19, 12});
  OperandType type18(Type::TENSOR_FLOAT16, {19, 3});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type32(Type::TENSOR_FLOAT16, {15, 4});
  OperandType type33(Type::TENSOR_FLOAT16, {15});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type18);
  auto roi1 = model->addOperand(&type16);
  auto batchSplit1 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type15);
  auto param7 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type15);
  auto param10 = model->addOperand(&type15);
  auto param11 = model->addOperand(&type15);
  auto scoresOut1 = model->addOperand(&type33);
  auto roiOut1 = model->addOperand(&type32);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  // Phase 2, operations
  static _Float16 param6_init[] = {0.30000001192092896f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static int32_t param7_init[] = {8};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 param9_init[] = {0.4000000059604645f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static _Float16 param10_init[] = {0.5f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {0.30000001192092896f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, batchSplit1, param6, param7, param8, param9, param10, param11}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, roi1, batchSplit1},
    {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  assert(model->isValid());
}

bool is_ignored_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_float16_dynamic_output_shape_2(Model *model) {
  OperandType type13(Type::TENSOR_INT32, {0});
  OperandType type15(Type::FLOAT16, {});
  OperandType type16(Type::TENSOR_FLOAT16, {19, 12});
  OperandType type18(Type::TENSOR_FLOAT16, {19, 3});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type20(Type::TENSOR_FLOAT16, {0});
  OperandType type21(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type18);
  auto roi1 = model->addOperand(&type16);
  auto batchSplit1 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type15);
  auto param7 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type15);
  auto param10 = model->addOperand(&type15);
  auto param11 = model->addOperand(&type15);
  auto scoresOut1 = model->addOperand(&type20);
  auto roiOut1 = model->addOperand(&type21);
  auto classesOut1 = model->addOperand(&type13);
  auto batchSplitOut1 = model->addOperand(&type13);
  // Phase 2, operations
  static _Float16 param6_init[] = {0.30000001192092896f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static int32_t param7_init[] = {8};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 param9_init[] = {0.4000000059604645f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static _Float16 param10_init[] = {0.5f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {0.30000001192092896f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, batchSplit1, param6, param7, param8, param9, param10, param11}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, roi1, batchSplit1},
    {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type10(Type::TENSOR_INT32, {15});
  OperandType type15(Type::FLOAT16, {});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type22(Type::TENSOR_FLOAT16, {19, 3});
  OperandType type23(Type::TENSOR_FLOAT16, {1});
  OperandType type24(Type::TENSOR_FLOAT16, {19, 12});
  OperandType type32(Type::TENSOR_FLOAT16, {15, 4});
  OperandType type33(Type::TENSOR_FLOAT16, {15});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type22);
  auto roi1 = model->addOperand(&type24);
  auto batchSplit1 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type15);
  auto param7 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type15);
  auto param10 = model->addOperand(&type15);
  auto param11 = model->addOperand(&type15);
  auto scoresOut1 = model->addOperand(&type33);
  auto roiOut1 = model->addOperand(&type32);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto scores1_tmp = model->addOperand(&type22);
  auto dummy22 = model->addOperand(&type23);
  auto param34 = model->addOperand(&type7);
  auto roi1_tmp = model->addOperand(&type24);
  auto dummy23 = model->addOperand(&type23);
  auto param35 = model->addOperand(&type7);
  // Phase 2, operations
  static _Float16 param6_init[] = {0.30000001192092896f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static int32_t param7_init[] = {8};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 param9_init[] = {0.4000000059604645f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static _Float16 param10_init[] = {0.5f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {0.30000001192092896f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static _Float16 dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(_Float16) * 1);
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static _Float16 dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(_Float16) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy22, param34}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy23, param35}, {roi1});
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, batchSplit1, param6, param7, param8, param9, param10, param11}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit1, scores1_tmp, roi1_tmp},
    {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type13(Type::TENSOR_INT32, {0});
  OperandType type15(Type::FLOAT16, {});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type20(Type::TENSOR_FLOAT16, {0});
  OperandType type21(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {19, 3});
  OperandType type23(Type::TENSOR_FLOAT16, {1});
  OperandType type24(Type::TENSOR_FLOAT16, {19, 12});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type22);
  auto roi1 = model->addOperand(&type24);
  auto batchSplit1 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type15);
  auto param7 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type15);
  auto param10 = model->addOperand(&type15);
  auto param11 = model->addOperand(&type15);
  auto scoresOut1 = model->addOperand(&type20);
  auto roiOut1 = model->addOperand(&type21);
  auto classesOut1 = model->addOperand(&type13);
  auto batchSplitOut1 = model->addOperand(&type13);
  auto scores1_tmp = model->addOperand(&type22);
  auto dummy24 = model->addOperand(&type23);
  auto param36 = model->addOperand(&type7);
  auto roi1_tmp = model->addOperand(&type24);
  auto dummy25 = model->addOperand(&type23);
  auto param37 = model->addOperand(&type7);
  // Phase 2, operations
  static _Float16 param6_init[] = {0.30000001192092896f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static int32_t param7_init[] = {8};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 param9_init[] = {0.4000000059604645f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static _Float16 param10_init[] = {0.5f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {0.30000001192092896f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static _Float16 dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(_Float16) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static _Float16 dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(_Float16) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy24, param36}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy25, param37}, {roi1});
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, batchSplit1, param6, param7, param8, param9, param10, param11}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit1, scores1_tmp, roi1_tmp},
    {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_quant8_2(Model *model) {
  OperandType type10(Type::TENSOR_INT32, {15});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type25(Type::TENSOR_QUANT16_ASYMM, {19, 12}, 0.125f, 0);
  OperandType type34(Type::TENSOR_QUANT16_ASYMM, {15, 4}, 0.125f, 0);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {19, 3}, 0.01f, 128);
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {15}, 0.01f, 128);
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type35);
  auto roi1 = model->addOperand(&type25);
  auto batchSplit1 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type6);
  auto param7 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type6);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto scoresOut1 = model->addOperand(&type36);
  auto roiOut1 = model->addOperand(&type34);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  // Phase 2, operations
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {8};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {0.4f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {0.5f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.3f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, batchSplit1, param6, param7, param8, param9, param10, param11}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, roi1, batchSplit1},
    {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  assert(model->isValid());
}

bool is_ignored_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type13(Type::TENSOR_INT32, {0});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type25(Type::TENSOR_QUANT16_ASYMM, {19, 12}, 0.125f, 0);
  OperandType type30(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {19, 3}, 0.01f, 128);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 128);
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type35);
  auto roi1 = model->addOperand(&type25);
  auto batchSplit1 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type6);
  auto param7 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type6);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto scoresOut1 = model->addOperand(&type37);
  auto roiOut1 = model->addOperand(&type30);
  auto classesOut1 = model->addOperand(&type13);
  auto batchSplitOut1 = model->addOperand(&type13);
  // Phase 2, operations
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {8};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {0.4f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {0.5f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.3f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, batchSplit1, param6, param7, param8, param9, param10, param11}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, roi1, batchSplit1},
    {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  assert(model->isValid());
}

bool is_ignored_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type10(Type::TENSOR_INT32, {15});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type25(Type::TENSOR_QUANT16_ASYMM, {19, 12}, 0.125f, 0);
  OperandType type34(Type::TENSOR_QUANT16_ASYMM, {15, 4}, 0.125f, 0);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {19, 3}, 0.01f, 128);
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {15}, 0.01f, 128);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 128);
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type35);
  auto roi1 = model->addOperand(&type25);
  auto batchSplit1 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type6);
  auto param7 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type6);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto scoresOut1 = model->addOperand(&type36);
  auto roiOut1 = model->addOperand(&type34);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto scores1_tmp = model->addOperand(&type35);
  auto dummy26 = model->addOperand(&type38);
  auto param38 = model->addOperand(&type7);
  // Phase 2, operations
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {8};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {0.4f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {0.5f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.3f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static uint8_t dummy26_init[] = {128};
  model->setOperandValue(dummy26, dummy26_init, sizeof(uint8_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy26, param38}, {scores1});
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, batchSplit1, param6, param7, param8, param9, param10, param11}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi1, batchSplit1, scores1_tmp},
    {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
namespace generated_tests::box_with_nms_limit_linear {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type13(Type::TENSOR_INT32, {0});
  OperandType type2(Type::TENSOR_INT32, {19});
  OperandType type25(Type::TENSOR_QUANT16_ASYMM, {19, 12}, 0.125f, 0);
  OperandType type30(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {19, 3}, 0.01f, 128);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 128);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 128);
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type35);
  auto roi1 = model->addOperand(&type25);
  auto batchSplit1 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type6);
  auto param7 = model->addOperand(&type7);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type6);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto scoresOut1 = model->addOperand(&type37);
  auto roiOut1 = model->addOperand(&type30);
  auto classesOut1 = model->addOperand(&type13);
  auto batchSplitOut1 = model->addOperand(&type13);
  auto scores1_tmp = model->addOperand(&type35);
  auto dummy27 = model->addOperand(&type38);
  auto param39 = model->addOperand(&type7);
  // Phase 2, operations
  static float param6_init[] = {0.3f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static int32_t param7_init[] = {8};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {1};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static float param9_init[] = {0.4f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static float param10_init[] = {0.5f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {0.3f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static uint8_t dummy27_init[] = {128};
  model->setOperandValue(dummy27, dummy27_init, sizeof(uint8_t) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy27, param39}, {scores1});
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, batchSplit1, param6, param7, param8, param9, param10, param11}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi1, batchSplit1, scores1_tmp},
    {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::box_with_nms_limit_linear
