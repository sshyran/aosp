// Generated from generate_proposals.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::generate_proposals {

void CreateModel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 8});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {4});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type2);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type5);
  auto roiOut = model->addOperand(&type6);
  auto batchSplit = model->addOperand(&type7);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 8});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type2);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type17);
  auto batchSplit = model->addOperand(&type18);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nhwc_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type19(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 8});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {4});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type2);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type5);
  auto roiOut = model->addOperand(&type6);
  auto batchSplit = model->addOperand(&type7);
  auto scores_tmp = model->addOperand(&type1);
  auto dummy = model->addOperand(&type19);
  auto param12 = model->addOperand(&type9);
  auto bboxDeltas_tmp = model->addOperand(&type2);
  auto dummy1 = model->addOperand(&type19);
  auto param13 = model->addOperand(&type9);
  auto anchors_tmp = model->addOperand(&type3);
  auto dummy2 = model->addOperand(&type19);
  auto param14 = model->addOperand(&type9);
  auto imageInfo_tmp = model->addOperand(&type4);
  auto dummy3 = model->addOperand(&type19);
  auto param15 = model->addOperand(&type9);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy, param12}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy1, param13}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors_tmp, dummy2, param14}, {anchors});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo_tmp, dummy3, param15}, {imageInfo});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores_tmp, bboxDeltas_tmp, anchors_tmp, imageInfo_tmp},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 8});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type2);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type17);
  auto batchSplit = model->addOperand(&type18);
  auto scores_tmp = model->addOperand(&type1);
  auto dummy4 = model->addOperand(&type19);
  auto param16 = model->addOperand(&type9);
  auto bboxDeltas_tmp = model->addOperand(&type2);
  auto dummy5 = model->addOperand(&type19);
  auto param17 = model->addOperand(&type9);
  auto anchors_tmp = model->addOperand(&type3);
  auto dummy6 = model->addOperand(&type19);
  auto param18 = model->addOperand(&type9);
  auto imageInfo_tmp = model->addOperand(&type4);
  auto dummy7 = model->addOperand(&type19);
  auto param19 = model->addOperand(&type9);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(float) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(float) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(float) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static float dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy4, param16}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy5, param17}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors_tmp, dummy6, param18}, {anchors});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo_tmp, dummy7, param19}, {imageInfo});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores_tmp, bboxDeltas_tmp, anchors_tmp, imageInfo_tmp},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 8});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {4});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type2);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type5);
  auto roiOut = model->addOperand(&type6);
  auto batchSplit = model->addOperand(&type7);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 8});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type2);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type17);
  auto batchSplit = model->addOperand(&type18);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type19(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 8});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {4});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type2);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type5);
  auto roiOut = model->addOperand(&type6);
  auto batchSplit = model->addOperand(&type7);
  auto scores_tmp = model->addOperand(&type1);
  auto dummy8 = model->addOperand(&type19);
  auto param20 = model->addOperand(&type9);
  auto bboxDeltas_tmp = model->addOperand(&type2);
  auto dummy9 = model->addOperand(&type19);
  auto param21 = model->addOperand(&type9);
  auto anchors_tmp = model->addOperand(&type3);
  auto dummy10 = model->addOperand(&type19);
  auto param22 = model->addOperand(&type9);
  auto imageInfo_tmp = model->addOperand(&type4);
  auto dummy11 = model->addOperand(&type19);
  auto param23 = model->addOperand(&type9);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static float dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(float) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static float dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(float) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy8, param20}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy9, param21}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors_tmp, dummy10, param22}, {anchors});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo_tmp, dummy11, param23}, {imageInfo});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores_tmp, bboxDeltas_tmp, anchors_tmp, imageInfo_tmp},
    {scoresOut, roiOut, batchSplit});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 8});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type2);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type17);
  auto batchSplit = model->addOperand(&type18);
  auto scores_tmp = model->addOperand(&type1);
  auto dummy12 = model->addOperand(&type19);
  auto param24 = model->addOperand(&type9);
  auto bboxDeltas_tmp = model->addOperand(&type2);
  auto dummy13 = model->addOperand(&type19);
  auto param25 = model->addOperand(&type9);
  auto anchors_tmp = model->addOperand(&type3);
  auto dummy14 = model->addOperand(&type19);
  auto param26 = model->addOperand(&type9);
  auto imageInfo_tmp = model->addOperand(&type4);
  auto dummy15 = model->addOperand(&type19);
  auto param27 = model->addOperand(&type9);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(float) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static float dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(float) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static float dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static float dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(float) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy12, param24}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy13, param25}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors_tmp, dummy14, param26}, {anchors});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo_tmp, dummy15, param27}, {imageInfo});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores_tmp, bboxDeltas_tmp, anchors_tmp, imageInfo_tmp},
    {scoresOut, roiOut, batchSplit});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT16_SYMM, {2, 4}, 0.125f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 8}, 0.05f, 128);
  OperandType type22(Type::TENSOR_QUANT16_ASYMM, {1, 2}, 0.125f, 0);
  OperandType type23(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.01f, 100);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4}, 0.01f, 100);
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type24);
  auto bboxDeltas = model->addOperand(&type21);
  auto anchors = model->addOperand(&type20);
  auto imageInfo = model->addOperand(&type22);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type25);
  auto roiOut = model->addOperand(&type23);
  auto batchSplit = model->addOperand(&type7);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type20(Type::TENSOR_QUANT16_SYMM, {2, 4}, 0.125f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 8}, 0.05f, 128);
  OperandType type22(Type::TENSOR_QUANT16_ASYMM, {1, 2}, 0.125f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.01f, 100);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 100);
  OperandType type27(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type24);
  auto bboxDeltas = model->addOperand(&type21);
  auto anchors = model->addOperand(&type20);
  auto imageInfo = model->addOperand(&type22);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type26);
  auto roiOut = model->addOperand(&type27);
  auto batchSplit = model->addOperand(&type18);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT16_SYMM, {2, 4}, 0.125f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 8}, 0.05f, 128);
  OperandType type22(Type::TENSOR_QUANT16_ASYMM, {1, 2}, 0.125f, 0);
  OperandType type23(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.01f, 100);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4}, 0.01f, 100);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 100);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1}, 0.05f, 128);
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type24);
  auto bboxDeltas = model->addOperand(&type21);
  auto anchors = model->addOperand(&type20);
  auto imageInfo = model->addOperand(&type22);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type25);
  auto roiOut = model->addOperand(&type23);
  auto batchSplit = model->addOperand(&type7);
  auto scores_tmp = model->addOperand(&type24);
  auto dummy16 = model->addOperand(&type28);
  auto param28 = model->addOperand(&type9);
  auto bboxDeltas_tmp = model->addOperand(&type21);
  auto dummy17 = model->addOperand(&type29);
  auto param29 = model->addOperand(&type9);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy16_init[] = {100};
  model->setOperandValue(dummy16, dummy16_init, sizeof(uint8_t) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static uint8_t dummy17_init[] = {128};
  model->setOperandValue(dummy17, dummy17_init, sizeof(uint8_t) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy16, param28}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy17, param29}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {anchors, imageInfo, scores_tmp, bboxDeltas_tmp},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type20(Type::TENSOR_QUANT16_SYMM, {2, 4}, 0.125f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 8}, 0.05f, 128);
  OperandType type22(Type::TENSOR_QUANT16_ASYMM, {1, 2}, 0.125f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.01f, 100);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 100);
  OperandType type27(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 100);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1}, 0.05f, 128);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type24);
  auto bboxDeltas = model->addOperand(&type21);
  auto anchors = model->addOperand(&type20);
  auto imageInfo = model->addOperand(&type22);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type26);
  auto roiOut = model->addOperand(&type27);
  auto batchSplit = model->addOperand(&type18);
  auto scores_tmp = model->addOperand(&type24);
  auto dummy18 = model->addOperand(&type28);
  auto param30 = model->addOperand(&type9);
  auto bboxDeltas_tmp = model->addOperand(&type21);
  auto dummy19 = model->addOperand(&type29);
  auto param31 = model->addOperand(&type9);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy18_init[] = {100};
  model->setOperandValue(dummy18, dummy18_init, sizeof(uint8_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static uint8_t dummy19_init[] = {128};
  model->setOperandValue(dummy19, dummy19_init, sizeof(uint8_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy18, param30}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy19, param31}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {anchors, imageInfo, scores_tmp, bboxDeltas_tmp},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type30(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 2, 2, 8});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type33(Type::FLOAT16, {});
  OperandType type34(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type36(Type::TENSOR_FLOAT16, {4});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type35);
  auto bboxDeltas = model->addOperand(&type31);
  auto anchors = model->addOperand(&type30);
  auto imageInfo = model->addOperand(&type32);
  auto param = model->addOperand(&type33);
  auto param1 = model->addOperand(&type33);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type33);
  auto param5 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type36);
  auto roiOut = model->addOperand(&type34);
  auto batchSplit = model->addOperand(&type7);
  // Phase 2, operations
  static _Float16 param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.30000001192092896f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type30(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 2, 2, 8});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type33(Type::FLOAT16, {});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type37(Type::TENSOR_FLOAT16, {0});
  OperandType type38(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type35);
  auto bboxDeltas = model->addOperand(&type31);
  auto anchors = model->addOperand(&type30);
  auto imageInfo = model->addOperand(&type32);
  auto param = model->addOperand(&type33);
  auto param1 = model->addOperand(&type33);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type33);
  auto param5 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type37);
  auto roiOut = model->addOperand(&type38);
  auto batchSplit = model->addOperand(&type18);
  // Phase 2, operations
  static _Float16 param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.30000001192092896f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type33(Type::FLOAT16, {});
  OperandType type34(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type36(Type::TENSOR_FLOAT16, {4});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type40(Type::TENSOR_FLOAT16, {1});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 2, 2, 8});
  OperandType type42(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type39);
  auto bboxDeltas = model->addOperand(&type41);
  auto anchors = model->addOperand(&type42);
  auto imageInfo = model->addOperand(&type43);
  auto param = model->addOperand(&type33);
  auto param1 = model->addOperand(&type33);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type33);
  auto param5 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type36);
  auto roiOut = model->addOperand(&type34);
  auto batchSplit = model->addOperand(&type7);
  auto scores_tmp = model->addOperand(&type39);
  auto dummy20 = model->addOperand(&type40);
  auto param32 = model->addOperand(&type9);
  auto bboxDeltas_tmp = model->addOperand(&type41);
  auto dummy21 = model->addOperand(&type40);
  auto param33 = model->addOperand(&type9);
  auto anchors_tmp = model->addOperand(&type42);
  auto dummy22 = model->addOperand(&type40);
  auto param34 = model->addOperand(&type9);
  auto imageInfo_tmp = model->addOperand(&type43);
  auto dummy23 = model->addOperand(&type40);
  auto param35 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.30000001192092896f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(_Float16) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static _Float16 dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(_Float16) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static _Float16 dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(_Float16) * 1);
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static _Float16 dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(_Float16) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy20, param32}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy21, param33}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors_tmp, dummy22, param34}, {anchors});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo_tmp, dummy23, param35}, {imageInfo});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores_tmp, bboxDeltas_tmp, anchors_tmp, imageInfo_tmp},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type33(Type::FLOAT16, {});
  OperandType type37(Type::TENSOR_FLOAT16, {0});
  OperandType type38(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type40(Type::TENSOR_FLOAT16, {1});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 2, 2, 8});
  OperandType type42(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type39);
  auto bboxDeltas = model->addOperand(&type41);
  auto anchors = model->addOperand(&type42);
  auto imageInfo = model->addOperand(&type43);
  auto param = model->addOperand(&type33);
  auto param1 = model->addOperand(&type33);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type33);
  auto param5 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type37);
  auto roiOut = model->addOperand(&type38);
  auto batchSplit = model->addOperand(&type18);
  auto scores_tmp = model->addOperand(&type39);
  auto dummy24 = model->addOperand(&type40);
  auto param36 = model->addOperand(&type9);
  auto bboxDeltas_tmp = model->addOperand(&type41);
  auto dummy25 = model->addOperand(&type40);
  auto param37 = model->addOperand(&type9);
  auto anchors_tmp = model->addOperand(&type42);
  auto dummy26 = model->addOperand(&type40);
  auto param38 = model->addOperand(&type9);
  auto imageInfo_tmp = model->addOperand(&type43);
  auto dummy27 = model->addOperand(&type40);
  auto param39 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.30000001192092896f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(_Float16) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static _Float16 dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(_Float16) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static _Float16 dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(_Float16) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static _Float16 dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(_Float16) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy24, param36}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy25, param37}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors_tmp, dummy26, param38}, {anchors});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo_tmp, dummy27, param39}, {imageInfo});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores_tmp, bboxDeltas_tmp, anchors_tmp, imageInfo_tmp},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type44(Type::TENSOR_FLOAT32, {1, 8, 2, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {4});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type44);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type5);
  auto roiOut = model->addOperand(&type6);
  auto batchSplit = model->addOperand(&type7);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type44(Type::TENSOR_FLOAT32, {1, 8, 2, 2});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type44);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type17);
  auto batchSplit = model->addOperand(&type18);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nchw_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type19(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type44(Type::TENSOR_FLOAT32, {1, 8, 2, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {4});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type44);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type5);
  auto roiOut = model->addOperand(&type6);
  auto batchSplit = model->addOperand(&type7);
  auto scores_tmp = model->addOperand(&type1);
  auto dummy28 = model->addOperand(&type19);
  auto param40 = model->addOperand(&type9);
  auto bboxDeltas_tmp = model->addOperand(&type44);
  auto dummy29 = model->addOperand(&type19);
  auto param41 = model->addOperand(&type9);
  auto anchors_tmp = model->addOperand(&type3);
  auto dummy30 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type9);
  auto imageInfo_tmp = model->addOperand(&type4);
  auto dummy31 = model->addOperand(&type19);
  auto param43 = model->addOperand(&type9);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy28_init[] = {0.0f};
  model->setOperandValue(dummy28, dummy28_init, sizeof(float) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float dummy29_init[] = {0.0f};
  model->setOperandValue(dummy29, dummy29_init, sizeof(float) * 1);
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static float dummy30_init[] = {0.0f};
  model->setOperandValue(dummy30, dummy30_init, sizeof(float) * 1);
  static int32_t param42_init[] = {0};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static float dummy31_init[] = {0.0f};
  model->setOperandValue(dummy31, dummy31_init, sizeof(float) * 1);
  static int32_t param43_init[] = {0};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy28, param40}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy29, param41}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors_tmp, dummy30, param42}, {anchors});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo_tmp, dummy31, param43}, {imageInfo});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores_tmp, bboxDeltas_tmp, anchors_tmp, imageInfo_tmp},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type44(Type::TENSOR_FLOAT32, {1, 8, 2, 2});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type44);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type17);
  auto batchSplit = model->addOperand(&type18);
  auto scores_tmp = model->addOperand(&type1);
  auto dummy32 = model->addOperand(&type19);
  auto param44 = model->addOperand(&type9);
  auto bboxDeltas_tmp = model->addOperand(&type44);
  auto dummy33 = model->addOperand(&type19);
  auto param45 = model->addOperand(&type9);
  auto anchors_tmp = model->addOperand(&type3);
  auto dummy34 = model->addOperand(&type19);
  auto param46 = model->addOperand(&type9);
  auto imageInfo_tmp = model->addOperand(&type4);
  auto dummy35 = model->addOperand(&type19);
  auto param47 = model->addOperand(&type9);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy32_init[] = {0.0f};
  model->setOperandValue(dummy32, dummy32_init, sizeof(float) * 1);
  static int32_t param44_init[] = {0};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static float dummy33_init[] = {0.0f};
  model->setOperandValue(dummy33, dummy33_init, sizeof(float) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static float dummy34_init[] = {0.0f};
  model->setOperandValue(dummy34, dummy34_init, sizeof(float) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static float dummy35_init[] = {0.0f};
  model->setOperandValue(dummy35, dummy35_init, sizeof(float) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy32, param44}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy33, param45}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors_tmp, dummy34, param46}, {anchors});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo_tmp, dummy35, param47}, {imageInfo});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores_tmp, bboxDeltas_tmp, anchors_tmp, imageInfo_tmp},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type44(Type::TENSOR_FLOAT32, {1, 8, 2, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {4});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type44);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type5);
  auto roiOut = model->addOperand(&type6);
  auto batchSplit = model->addOperand(&type7);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type44(Type::TENSOR_FLOAT32, {1, 8, 2, 2});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type44);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type17);
  auto batchSplit = model->addOperand(&type18);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type19(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type44(Type::TENSOR_FLOAT32, {1, 8, 2, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {4});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type44);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type5);
  auto roiOut = model->addOperand(&type6);
  auto batchSplit = model->addOperand(&type7);
  auto scores_tmp = model->addOperand(&type1);
  auto dummy36 = model->addOperand(&type19);
  auto param48 = model->addOperand(&type9);
  auto bboxDeltas_tmp = model->addOperand(&type44);
  auto dummy37 = model->addOperand(&type19);
  auto param49 = model->addOperand(&type9);
  auto anchors_tmp = model->addOperand(&type3);
  auto dummy38 = model->addOperand(&type19);
  auto param50 = model->addOperand(&type9);
  auto imageInfo_tmp = model->addOperand(&type4);
  auto dummy39 = model->addOperand(&type19);
  auto param51 = model->addOperand(&type9);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy36_init[] = {0.0f};
  model->setOperandValue(dummy36, dummy36_init, sizeof(float) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static float dummy37_init[] = {0.0f};
  model->setOperandValue(dummy37, dummy37_init, sizeof(float) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static float dummy38_init[] = {0.0f};
  model->setOperandValue(dummy38, dummy38_init, sizeof(float) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static float dummy39_init[] = {0.0f};
  model->setOperandValue(dummy39, dummy39_init, sizeof(float) * 1);
  static int32_t param51_init[] = {0};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy36, param48}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy37, param49}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors_tmp, dummy38, param50}, {anchors});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo_tmp, dummy39, param51}, {imageInfo});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores_tmp, bboxDeltas_tmp, anchors_tmp, imageInfo_tmp},
    {scoresOut, roiOut, batchSplit});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type44(Type::TENSOR_FLOAT32, {1, 8, 2, 2});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type1);
  auto bboxDeltas = model->addOperand(&type44);
  auto anchors = model->addOperand(&type3);
  auto imageInfo = model->addOperand(&type4);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type17);
  auto batchSplit = model->addOperand(&type18);
  auto scores_tmp = model->addOperand(&type1);
  auto dummy40 = model->addOperand(&type19);
  auto param52 = model->addOperand(&type9);
  auto bboxDeltas_tmp = model->addOperand(&type44);
  auto dummy41 = model->addOperand(&type19);
  auto param53 = model->addOperand(&type9);
  auto anchors_tmp = model->addOperand(&type3);
  auto dummy42 = model->addOperand(&type19);
  auto param54 = model->addOperand(&type9);
  auto imageInfo_tmp = model->addOperand(&type4);
  auto dummy43 = model->addOperand(&type19);
  auto param55 = model->addOperand(&type9);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy40_init[] = {0.0f};
  model->setOperandValue(dummy40, dummy40_init, sizeof(float) * 1);
  static int32_t param52_init[] = {0};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static float dummy41_init[] = {0.0f};
  model->setOperandValue(dummy41, dummy41_init, sizeof(float) * 1);
  static int32_t param53_init[] = {0};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static float dummy42_init[] = {0.0f};
  model->setOperandValue(dummy42, dummy42_init, sizeof(float) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static float dummy43_init[] = {0.0f};
  model->setOperandValue(dummy43, dummy43_init, sizeof(float) * 1);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy40, param52}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy41, param53}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors_tmp, dummy42, param54}, {anchors});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo_tmp, dummy43, param55}, {imageInfo});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores_tmp, bboxDeltas_tmp, anchors_tmp, imageInfo_tmp},
    {scoresOut, roiOut, batchSplit});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT16_SYMM, {2, 4}, 0.125f, 0);
  OperandType type22(Type::TENSOR_QUANT16_ASYMM, {1, 2}, 0.125f, 0);
  OperandType type23(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.01f, 100);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4}, 0.01f, 100);
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 8, 2, 2}, 0.05f, 128);
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type24);
  auto bboxDeltas = model->addOperand(&type45);
  auto anchors = model->addOperand(&type20);
  auto imageInfo = model->addOperand(&type22);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type25);
  auto roiOut = model->addOperand(&type23);
  auto batchSplit = model->addOperand(&type7);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type20(Type::TENSOR_QUANT16_SYMM, {2, 4}, 0.125f, 0);
  OperandType type22(Type::TENSOR_QUANT16_ASYMM, {1, 2}, 0.125f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.01f, 100);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 100);
  OperandType type27(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 8, 2, 2}, 0.05f, 128);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type24);
  auto bboxDeltas = model->addOperand(&type45);
  auto anchors = model->addOperand(&type20);
  auto imageInfo = model->addOperand(&type22);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type26);
  auto roiOut = model->addOperand(&type27);
  auto batchSplit = model->addOperand(&type18);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_QUANT16_SYMM, {2, 4}, 0.125f, 0);
  OperandType type22(Type::TENSOR_QUANT16_ASYMM, {1, 2}, 0.125f, 0);
  OperandType type23(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.01f, 100);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4}, 0.01f, 100);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 100);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1}, 0.05f, 128);
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 8, 2, 2}, 0.05f, 128);
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type24);
  auto bboxDeltas = model->addOperand(&type45);
  auto anchors = model->addOperand(&type20);
  auto imageInfo = model->addOperand(&type22);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type25);
  auto roiOut = model->addOperand(&type23);
  auto batchSplit = model->addOperand(&type7);
  auto scores_tmp = model->addOperand(&type24);
  auto dummy44 = model->addOperand(&type28);
  auto param56 = model->addOperand(&type9);
  auto bboxDeltas_tmp = model->addOperand(&type45);
  auto dummy45 = model->addOperand(&type29);
  auto param57 = model->addOperand(&type9);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy44_init[] = {100};
  model->setOperandValue(dummy44, dummy44_init, sizeof(uint8_t) * 1);
  static int32_t param56_init[] = {0};
  model->setOperandValue(param56, param56_init, sizeof(int32_t) * 1);
  static uint8_t dummy45_init[] = {128};
  model->setOperandValue(dummy45, dummy45_init, sizeof(uint8_t) * 1);
  static int32_t param57_init[] = {0};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy44, param56}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy45, param57}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {anchors, imageInfo, scores_tmp, bboxDeltas_tmp},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type20(Type::TENSOR_QUANT16_SYMM, {2, 4}, 0.125f, 0);
  OperandType type22(Type::TENSOR_QUANT16_ASYMM, {1, 2}, 0.125f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.01f, 100);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {0}, 0.01f, 100);
  OperandType type27(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 100);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1}, 0.05f, 128);
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1, 8, 2, 2}, 0.05f, 128);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type24);
  auto bboxDeltas = model->addOperand(&type45);
  auto anchors = model->addOperand(&type20);
  auto imageInfo = model->addOperand(&type22);
  auto param = model->addOperand(&type8);
  auto param1 = model->addOperand(&type8);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type26);
  auto roiOut = model->addOperand(&type27);
  auto batchSplit = model->addOperand(&type18);
  auto scores_tmp = model->addOperand(&type24);
  auto dummy46 = model->addOperand(&type28);
  auto param58 = model->addOperand(&type9);
  auto bboxDeltas_tmp = model->addOperand(&type45);
  auto dummy47 = model->addOperand(&type29);
  auto param59 = model->addOperand(&type9);
  // Phase 2, operations
  static float param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float param4_init[] = {0.3f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy46_init[] = {100};
  model->setOperandValue(dummy46, dummy46_init, sizeof(uint8_t) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static uint8_t dummy47_init[] = {128};
  model->setOperandValue(dummy47, dummy47_init, sizeof(uint8_t) * 1);
  static int32_t param59_init[] = {0};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy46, param58}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy47, param59}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {anchors, imageInfo, scores_tmp, bboxDeltas_tmp},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type30(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type33(Type::FLOAT16, {});
  OperandType type34(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type36(Type::TENSOR_FLOAT16, {4});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 8, 2, 2});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type35);
  auto bboxDeltas = model->addOperand(&type46);
  auto anchors = model->addOperand(&type30);
  auto imageInfo = model->addOperand(&type32);
  auto param = model->addOperand(&type33);
  auto param1 = model->addOperand(&type33);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type33);
  auto param5 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type36);
  auto roiOut = model->addOperand(&type34);
  auto batchSplit = model->addOperand(&type7);
  // Phase 2, operations
  static _Float16 param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.30000001192092896f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type30(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type33(Type::FLOAT16, {});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type37(Type::TENSOR_FLOAT16, {0});
  OperandType type38(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 8, 2, 2});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type35);
  auto bboxDeltas = model->addOperand(&type46);
  auto anchors = model->addOperand(&type30);
  auto imageInfo = model->addOperand(&type32);
  auto param = model->addOperand(&type33);
  auto param1 = model->addOperand(&type33);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type33);
  auto param5 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type37);
  auto roiOut = model->addOperand(&type38);
  auto batchSplit = model->addOperand(&type18);
  // Phase 2, operations
  static _Float16 param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.30000001192092896f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, bboxDeltas, anchors, imageInfo},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type33(Type::FLOAT16, {});
  OperandType type34(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type36(Type::TENSOR_FLOAT16, {4});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type40(Type::TENSOR_FLOAT16, {1});
  OperandType type42(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type47(Type::TENSOR_FLOAT16, {1, 8, 2, 2});
  OperandType type7(Type::TENSOR_INT32, {4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type39);
  auto bboxDeltas = model->addOperand(&type47);
  auto anchors = model->addOperand(&type42);
  auto imageInfo = model->addOperand(&type43);
  auto param = model->addOperand(&type33);
  auto param1 = model->addOperand(&type33);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type33);
  auto param5 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type36);
  auto roiOut = model->addOperand(&type34);
  auto batchSplit = model->addOperand(&type7);
  auto scores_tmp = model->addOperand(&type39);
  auto dummy48 = model->addOperand(&type40);
  auto param60 = model->addOperand(&type9);
  auto bboxDeltas_tmp = model->addOperand(&type47);
  auto dummy49 = model->addOperand(&type40);
  auto param61 = model->addOperand(&type9);
  auto anchors_tmp = model->addOperand(&type42);
  auto dummy50 = model->addOperand(&type40);
  auto param62 = model->addOperand(&type9);
  auto imageInfo_tmp = model->addOperand(&type43);
  auto dummy51 = model->addOperand(&type40);
  auto param63 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.30000001192092896f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy48_init[] = {0.0f};
  model->setOperandValue(dummy48, dummy48_init, sizeof(_Float16) * 1);
  static int32_t param60_init[] = {0};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  static _Float16 dummy49_init[] = {0.0f};
  model->setOperandValue(dummy49, dummy49_init, sizeof(_Float16) * 1);
  static int32_t param61_init[] = {0};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  static _Float16 dummy50_init[] = {0.0f};
  model->setOperandValue(dummy50, dummy50_init, sizeof(_Float16) * 1);
  static int32_t param62_init[] = {0};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static _Float16 dummy51_init[] = {0.0f};
  model->setOperandValue(dummy51, dummy51_init, sizeof(_Float16) * 1);
  static int32_t param63_init[] = {0};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy48, param60}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy49, param61}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors_tmp, dummy50, param62}, {anchors});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo_tmp, dummy51, param63}, {imageInfo});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores_tmp, bboxDeltas_tmp, anchors_tmp, imageInfo_tmp},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type33(Type::FLOAT16, {});
  OperandType type37(Type::TENSOR_FLOAT16, {0});
  OperandType type38(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type40(Type::TENSOR_FLOAT16, {1});
  OperandType type42(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type47(Type::TENSOR_FLOAT16, {1, 8, 2, 2});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type39);
  auto bboxDeltas = model->addOperand(&type47);
  auto anchors = model->addOperand(&type42);
  auto imageInfo = model->addOperand(&type43);
  auto param = model->addOperand(&type33);
  auto param1 = model->addOperand(&type33);
  auto param2 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type33);
  auto param5 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto scoresOut = model->addOperand(&type37);
  auto roiOut = model->addOperand(&type38);
  auto batchSplit = model->addOperand(&type18);
  auto scores_tmp = model->addOperand(&type39);
  auto dummy52 = model->addOperand(&type40);
  auto param64 = model->addOperand(&type9);
  auto bboxDeltas_tmp = model->addOperand(&type47);
  auto dummy53 = model->addOperand(&type40);
  auto param65 = model->addOperand(&type9);
  auto anchors_tmp = model->addOperand(&type42);
  auto dummy54 = model->addOperand(&type40);
  auto param66 = model->addOperand(&type9);
  auto imageInfo_tmp = model->addOperand(&type43);
  auto dummy55 = model->addOperand(&type40);
  auto param67 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 param_init[] = {4.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {4.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static int32_t param2_init[] = {-1};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {-1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static _Float16 param4_init[] = {0.30000001192092896f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {1.0f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy52_init[] = {0.0f};
  model->setOperandValue(dummy52, dummy52_init, sizeof(_Float16) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  static _Float16 dummy53_init[] = {0.0f};
  model->setOperandValue(dummy53, dummy53_init, sizeof(_Float16) * 1);
  static int32_t param65_init[] = {0};
  model->setOperandValue(param65, param65_init, sizeof(int32_t) * 1);
  static _Float16 dummy54_init[] = {0.0f};
  model->setOperandValue(dummy54, dummy54_init, sizeof(_Float16) * 1);
  static int32_t param66_init[] = {0};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static _Float16 dummy55_init[] = {0.0f};
  model->setOperandValue(dummy55, dummy55_init, sizeof(_Float16) * 1);
  static int32_t param67_init[] = {0};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy52, param64}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy53, param65}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors_tmp, dummy54, param66}, {anchors});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo_tmp, dummy55, param67}, {imageInfo});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores, bboxDeltas, anchors, imageInfo, param, param1, param2, param3, param4, param5, layout}, {scoresOut, roiOut, batchSplit});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores_tmp, bboxDeltas_tmp, anchors_tmp, imageInfo_tmp},
    {scoresOut, roiOut, batchSplit});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 4, 4, 16});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type13(Type::TENSOR_FLOAT32, {30});
  OperandType type14(Type::TENSOR_FLOAT32, {30, 4});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type11);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type13);
  auto roiOut1 = model->addOperand(&type14);
  auto batchSplit1 = model->addOperand(&type15);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 4, 4, 16});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type11);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type16);
  auto roiOut1 = model->addOperand(&type17);
  auto batchSplit1 = model->addOperand(&type18);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nhwc_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 4, 4, 16});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type13(Type::TENSOR_FLOAT32, {30});
  OperandType type14(Type::TENSOR_FLOAT32, {30, 4});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type19(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type11);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type13);
  auto roiOut1 = model->addOperand(&type14);
  auto batchSplit1 = model->addOperand(&type15);
  auto scores1_tmp = model->addOperand(&type10);
  auto dummy56 = model->addOperand(&type19);
  auto param68 = model->addOperand(&type9);
  auto bboxDeltas1_tmp = model->addOperand(&type11);
  auto dummy57 = model->addOperand(&type19);
  auto param69 = model->addOperand(&type9);
  auto anchors1_tmp = model->addOperand(&type6);
  auto dummy58 = model->addOperand(&type19);
  auto param70 = model->addOperand(&type9);
  auto imageInfo1_tmp = model->addOperand(&type12);
  auto dummy59 = model->addOperand(&type19);
  auto param71 = model->addOperand(&type9);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy56_init[] = {0.0f};
  model->setOperandValue(dummy56, dummy56_init, sizeof(float) * 1);
  static int32_t param68_init[] = {0};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static float dummy57_init[] = {0.0f};
  model->setOperandValue(dummy57, dummy57_init, sizeof(float) * 1);
  static int32_t param69_init[] = {0};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static float dummy58_init[] = {0.0f};
  model->setOperandValue(dummy58, dummy58_init, sizeof(float) * 1);
  static int32_t param70_init[] = {0};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  static float dummy59_init[] = {0.0f};
  model->setOperandValue(dummy59, dummy59_init, sizeof(float) * 1);
  static int32_t param71_init[] = {0};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy56, param68}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy57, param69}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors1_tmp, dummy58, param70}, {anchors1});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo1_tmp, dummy59, param71}, {imageInfo1});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1_tmp, bboxDeltas1_tmp, anchors1_tmp, imageInfo1_tmp},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 4, 4, 16});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type11);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type16);
  auto roiOut1 = model->addOperand(&type17);
  auto batchSplit1 = model->addOperand(&type18);
  auto scores1_tmp = model->addOperand(&type10);
  auto dummy60 = model->addOperand(&type19);
  auto param72 = model->addOperand(&type9);
  auto bboxDeltas1_tmp = model->addOperand(&type11);
  auto dummy61 = model->addOperand(&type19);
  auto param73 = model->addOperand(&type9);
  auto anchors1_tmp = model->addOperand(&type6);
  auto dummy62 = model->addOperand(&type19);
  auto param74 = model->addOperand(&type9);
  auto imageInfo1_tmp = model->addOperand(&type12);
  auto dummy63 = model->addOperand(&type19);
  auto param75 = model->addOperand(&type9);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy60_init[] = {0.0f};
  model->setOperandValue(dummy60, dummy60_init, sizeof(float) * 1);
  static int32_t param72_init[] = {0};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static float dummy61_init[] = {0.0f};
  model->setOperandValue(dummy61, dummy61_init, sizeof(float) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  static float dummy62_init[] = {0.0f};
  model->setOperandValue(dummy62, dummy62_init, sizeof(float) * 1);
  static int32_t param74_init[] = {0};
  model->setOperandValue(param74, param74_init, sizeof(int32_t) * 1);
  static float dummy63_init[] = {0.0f};
  model->setOperandValue(dummy63, dummy63_init, sizeof(float) * 1);
  static int32_t param75_init[] = {0};
  model->setOperandValue(param75, param75_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy60, param72}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy61, param73}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors1_tmp, dummy62, param74}, {anchors1});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo1_tmp, dummy63, param75}, {imageInfo1});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1_tmp, bboxDeltas1_tmp, anchors1_tmp, imageInfo1_tmp},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 4, 4, 16});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type13(Type::TENSOR_FLOAT32, {30});
  OperandType type14(Type::TENSOR_FLOAT32, {30, 4});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type11);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type13);
  auto roiOut1 = model->addOperand(&type14);
  auto batchSplit1 = model->addOperand(&type15);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 4, 4, 16});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type11);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type16);
  auto roiOut1 = model->addOperand(&type17);
  auto batchSplit1 = model->addOperand(&type18);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 4, 4, 16});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type13(Type::TENSOR_FLOAT32, {30});
  OperandType type14(Type::TENSOR_FLOAT32, {30, 4});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type19(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type11);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type13);
  auto roiOut1 = model->addOperand(&type14);
  auto batchSplit1 = model->addOperand(&type15);
  auto scores1_tmp = model->addOperand(&type10);
  auto dummy64 = model->addOperand(&type19);
  auto param76 = model->addOperand(&type9);
  auto bboxDeltas1_tmp = model->addOperand(&type11);
  auto dummy65 = model->addOperand(&type19);
  auto param77 = model->addOperand(&type9);
  auto anchors1_tmp = model->addOperand(&type6);
  auto dummy66 = model->addOperand(&type19);
  auto param78 = model->addOperand(&type9);
  auto imageInfo1_tmp = model->addOperand(&type12);
  auto dummy67 = model->addOperand(&type19);
  auto param79 = model->addOperand(&type9);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy64_init[] = {0.0f};
  model->setOperandValue(dummy64, dummy64_init, sizeof(float) * 1);
  static int32_t param76_init[] = {0};
  model->setOperandValue(param76, param76_init, sizeof(int32_t) * 1);
  static float dummy65_init[] = {0.0f};
  model->setOperandValue(dummy65, dummy65_init, sizeof(float) * 1);
  static int32_t param77_init[] = {0};
  model->setOperandValue(param77, param77_init, sizeof(int32_t) * 1);
  static float dummy66_init[] = {0.0f};
  model->setOperandValue(dummy66, dummy66_init, sizeof(float) * 1);
  static int32_t param78_init[] = {0};
  model->setOperandValue(param78, param78_init, sizeof(int32_t) * 1);
  static float dummy67_init[] = {0.0f};
  model->setOperandValue(dummy67, dummy67_init, sizeof(float) * 1);
  static int32_t param79_init[] = {0};
  model->setOperandValue(param79, param79_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy64, param76}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy65, param77}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors1_tmp, dummy66, param78}, {anchors1});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo1_tmp, dummy67, param79}, {imageInfo1});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1_tmp, bboxDeltas1_tmp, anchors1_tmp, imageInfo1_tmp},
    {scoresOut1, roiOut1, batchSplit1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 4, 4, 16});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type11);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type16);
  auto roiOut1 = model->addOperand(&type17);
  auto batchSplit1 = model->addOperand(&type18);
  auto scores1_tmp = model->addOperand(&type10);
  auto dummy68 = model->addOperand(&type19);
  auto param80 = model->addOperand(&type9);
  auto bboxDeltas1_tmp = model->addOperand(&type11);
  auto dummy69 = model->addOperand(&type19);
  auto param81 = model->addOperand(&type9);
  auto anchors1_tmp = model->addOperand(&type6);
  auto dummy70 = model->addOperand(&type19);
  auto param82 = model->addOperand(&type9);
  auto imageInfo1_tmp = model->addOperand(&type12);
  auto dummy71 = model->addOperand(&type19);
  auto param83 = model->addOperand(&type9);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy68_init[] = {0.0f};
  model->setOperandValue(dummy68, dummy68_init, sizeof(float) * 1);
  static int32_t param80_init[] = {0};
  model->setOperandValue(param80, param80_init, sizeof(int32_t) * 1);
  static float dummy69_init[] = {0.0f};
  model->setOperandValue(dummy69, dummy69_init, sizeof(float) * 1);
  static int32_t param81_init[] = {0};
  model->setOperandValue(param81, param81_init, sizeof(int32_t) * 1);
  static float dummy70_init[] = {0.0f};
  model->setOperandValue(dummy70, dummy70_init, sizeof(float) * 1);
  static int32_t param82_init[] = {0};
  model->setOperandValue(param82, param82_init, sizeof(int32_t) * 1);
  static float dummy71_init[] = {0.0f};
  model->setOperandValue(dummy71, dummy71_init, sizeof(float) * 1);
  static int32_t param83_init[] = {0};
  model->setOperandValue(param83, param83_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy68, param80}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy69, param81}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors1_tmp, dummy70, param82}, {anchors1});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo1_tmp, dummy71, param83}, {imageInfo1});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1_tmp, bboxDeltas1_tmp, anchors1_tmp, imageInfo1_tmp},
    {scoresOut1, roiOut1, batchSplit1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type48(Type::TENSOR_QUANT16_SYMM, {4, 4}, 0.125f, 0);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 16}, 0.1f, 128);
  OperandType type50(Type::TENSOR_QUANT16_ASYMM, {2, 2}, 0.125f, 0);
  OperandType type51(Type::TENSOR_QUANT16_ASYMM, {30, 4}, 0.125f, 0);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 4}, 0.005f, 0);
  OperandType type53(Type::TENSOR_QUANT8_ASYMM, {30}, 0.005f, 0);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type52);
  auto bboxDeltas1 = model->addOperand(&type49);
  auto anchors1 = model->addOperand(&type48);
  auto imageInfo1 = model->addOperand(&type50);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type53);
  auto roiOut1 = model->addOperand(&type51);
  auto batchSplit1 = model->addOperand(&type15);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type27(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  OperandType type48(Type::TENSOR_QUANT16_SYMM, {4, 4}, 0.125f, 0);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 16}, 0.1f, 128);
  OperandType type50(Type::TENSOR_QUANT16_ASYMM, {2, 2}, 0.125f, 0);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 4}, 0.005f, 0);
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {0}, 0.005f, 0);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type52);
  auto bboxDeltas1 = model->addOperand(&type49);
  auto anchors1 = model->addOperand(&type48);
  auto imageInfo1 = model->addOperand(&type50);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type54);
  auto roiOut1 = model->addOperand(&type27);
  auto batchSplit1 = model->addOperand(&type18);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type48(Type::TENSOR_QUANT16_SYMM, {4, 4}, 0.125f, 0);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 16}, 0.1f, 128);
  OperandType type50(Type::TENSOR_QUANT16_ASYMM, {2, 2}, 0.125f, 0);
  OperandType type51(Type::TENSOR_QUANT16_ASYMM, {30, 4}, 0.125f, 0);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 4}, 0.005f, 0);
  OperandType type53(Type::TENSOR_QUANT8_ASYMM, {30}, 0.005f, 0);
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {1}, 0.005f, 0);
  OperandType type56(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 128);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type52);
  auto bboxDeltas1 = model->addOperand(&type49);
  auto anchors1 = model->addOperand(&type48);
  auto imageInfo1 = model->addOperand(&type50);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type53);
  auto roiOut1 = model->addOperand(&type51);
  auto batchSplit1 = model->addOperand(&type15);
  auto scores1_tmp = model->addOperand(&type52);
  auto dummy72 = model->addOperand(&type55);
  auto param84 = model->addOperand(&type9);
  auto bboxDeltas1_tmp = model->addOperand(&type49);
  auto dummy73 = model->addOperand(&type56);
  auto param85 = model->addOperand(&type9);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy72_init[] = {0};
  model->setOperandValue(dummy72, dummy72_init, sizeof(uint8_t) * 1);
  static int32_t param84_init[] = {0};
  model->setOperandValue(param84, param84_init, sizeof(int32_t) * 1);
  static uint8_t dummy73_init[] = {128};
  model->setOperandValue(dummy73, dummy73_init, sizeof(uint8_t) * 1);
  static int32_t param85_init[] = {0};
  model->setOperandValue(param85, param85_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy72, param84}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy73, param85}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {anchors1, imageInfo1, scores1_tmp, bboxDeltas1_tmp},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type27(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  OperandType type48(Type::TENSOR_QUANT16_SYMM, {4, 4}, 0.125f, 0);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 16}, 0.1f, 128);
  OperandType type50(Type::TENSOR_QUANT16_ASYMM, {2, 2}, 0.125f, 0);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 4}, 0.005f, 0);
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {0}, 0.005f, 0);
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {1}, 0.005f, 0);
  OperandType type56(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 128);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type52);
  auto bboxDeltas1 = model->addOperand(&type49);
  auto anchors1 = model->addOperand(&type48);
  auto imageInfo1 = model->addOperand(&type50);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type54);
  auto roiOut1 = model->addOperand(&type27);
  auto batchSplit1 = model->addOperand(&type18);
  auto scores1_tmp = model->addOperand(&type52);
  auto dummy74 = model->addOperand(&type55);
  auto param86 = model->addOperand(&type9);
  auto bboxDeltas1_tmp = model->addOperand(&type49);
  auto dummy75 = model->addOperand(&type56);
  auto param87 = model->addOperand(&type9);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy74_init[] = {0};
  model->setOperandValue(dummy74, dummy74_init, sizeof(uint8_t) * 1);
  static int32_t param86_init[] = {0};
  model->setOperandValue(param86, param86_init, sizeof(int32_t) * 1);
  static uint8_t dummy75_init[] = {128};
  model->setOperandValue(dummy75, dummy75_init, sizeof(uint8_t) * 1);
  static int32_t param87_init[] = {0};
  model->setOperandValue(param87, param87_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy74, param86}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy75, param87}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {anchors1, imageInfo1, scores1_tmp, bboxDeltas1_tmp},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type33(Type::FLOAT16, {});
  OperandType type34(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type57(Type::TENSOR_FLOAT16, {2, 4, 4, 16});
  OperandType type58(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type59(Type::TENSOR_FLOAT16, {30, 4});
  OperandType type60(Type::TENSOR_FLOAT16, {2, 4, 4, 4});
  OperandType type61(Type::TENSOR_FLOAT16, {30});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type60);
  auto bboxDeltas1 = model->addOperand(&type57);
  auto anchors1 = model->addOperand(&type34);
  auto imageInfo1 = model->addOperand(&type58);
  auto param6 = model->addOperand(&type33);
  auto param7 = model->addOperand(&type33);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type33);
  auto param11 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type61);
  auto roiOut1 = model->addOperand(&type59);
  auto batchSplit1 = model->addOperand(&type15);
  // Phase 2, operations
  static _Float16 param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {0.20000000298023224f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type33(Type::FLOAT16, {});
  OperandType type34(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type37(Type::TENSOR_FLOAT16, {0});
  OperandType type38(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type57(Type::TENSOR_FLOAT16, {2, 4, 4, 16});
  OperandType type58(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type60(Type::TENSOR_FLOAT16, {2, 4, 4, 4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type60);
  auto bboxDeltas1 = model->addOperand(&type57);
  auto anchors1 = model->addOperand(&type34);
  auto imageInfo1 = model->addOperand(&type58);
  auto param6 = model->addOperand(&type33);
  auto param7 = model->addOperand(&type33);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type33);
  auto param11 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type37);
  auto roiOut1 = model->addOperand(&type38);
  auto batchSplit1 = model->addOperand(&type18);
  // Phase 2, operations
  static _Float16 param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {0.20000000298023224f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type33(Type::FLOAT16, {});
  OperandType type40(Type::TENSOR_FLOAT16, {1});
  OperandType type59(Type::TENSOR_FLOAT16, {30, 4});
  OperandType type61(Type::TENSOR_FLOAT16, {30});
  OperandType type62(Type::TENSOR_FLOAT16, {2, 4, 4, 4});
  OperandType type63(Type::TENSOR_FLOAT16, {2, 4, 4, 16});
  OperandType type64(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type65(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type62);
  auto bboxDeltas1 = model->addOperand(&type63);
  auto anchors1 = model->addOperand(&type64);
  auto imageInfo1 = model->addOperand(&type65);
  auto param6 = model->addOperand(&type33);
  auto param7 = model->addOperand(&type33);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type33);
  auto param11 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type61);
  auto roiOut1 = model->addOperand(&type59);
  auto batchSplit1 = model->addOperand(&type15);
  auto scores1_tmp = model->addOperand(&type62);
  auto dummy76 = model->addOperand(&type40);
  auto param88 = model->addOperand(&type9);
  auto bboxDeltas1_tmp = model->addOperand(&type63);
  auto dummy77 = model->addOperand(&type40);
  auto param89 = model->addOperand(&type9);
  auto anchors1_tmp = model->addOperand(&type64);
  auto dummy78 = model->addOperand(&type40);
  auto param90 = model->addOperand(&type9);
  auto imageInfo1_tmp = model->addOperand(&type65);
  auto dummy79 = model->addOperand(&type40);
  auto param91 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {0.20000000298023224f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy76_init[] = {0.0f};
  model->setOperandValue(dummy76, dummy76_init, sizeof(_Float16) * 1);
  static int32_t param88_init[] = {0};
  model->setOperandValue(param88, param88_init, sizeof(int32_t) * 1);
  static _Float16 dummy77_init[] = {0.0f};
  model->setOperandValue(dummy77, dummy77_init, sizeof(_Float16) * 1);
  static int32_t param89_init[] = {0};
  model->setOperandValue(param89, param89_init, sizeof(int32_t) * 1);
  static _Float16 dummy78_init[] = {0.0f};
  model->setOperandValue(dummy78, dummy78_init, sizeof(_Float16) * 1);
  static int32_t param90_init[] = {0};
  model->setOperandValue(param90, param90_init, sizeof(int32_t) * 1);
  static _Float16 dummy79_init[] = {0.0f};
  model->setOperandValue(dummy79, dummy79_init, sizeof(_Float16) * 1);
  static int32_t param91_init[] = {0};
  model->setOperandValue(param91, param91_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy76, param88}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy77, param89}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors1_tmp, dummy78, param90}, {anchors1});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo1_tmp, dummy79, param91}, {imageInfo1});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1_tmp, bboxDeltas1_tmp, anchors1_tmp, imageInfo1_tmp},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type33(Type::FLOAT16, {});
  OperandType type37(Type::TENSOR_FLOAT16, {0});
  OperandType type38(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type40(Type::TENSOR_FLOAT16, {1});
  OperandType type62(Type::TENSOR_FLOAT16, {2, 4, 4, 4});
  OperandType type63(Type::TENSOR_FLOAT16, {2, 4, 4, 16});
  OperandType type64(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type65(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type62);
  auto bboxDeltas1 = model->addOperand(&type63);
  auto anchors1 = model->addOperand(&type64);
  auto imageInfo1 = model->addOperand(&type65);
  auto param6 = model->addOperand(&type33);
  auto param7 = model->addOperand(&type33);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type33);
  auto param11 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type37);
  auto roiOut1 = model->addOperand(&type38);
  auto batchSplit1 = model->addOperand(&type18);
  auto scores1_tmp = model->addOperand(&type62);
  auto dummy80 = model->addOperand(&type40);
  auto param92 = model->addOperand(&type9);
  auto bboxDeltas1_tmp = model->addOperand(&type63);
  auto dummy81 = model->addOperand(&type40);
  auto param93 = model->addOperand(&type9);
  auto anchors1_tmp = model->addOperand(&type64);
  auto dummy82 = model->addOperand(&type40);
  auto param94 = model->addOperand(&type9);
  auto imageInfo1_tmp = model->addOperand(&type65);
  auto dummy83 = model->addOperand(&type40);
  auto param95 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {0.20000000298023224f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy80_init[] = {0.0f};
  model->setOperandValue(dummy80, dummy80_init, sizeof(_Float16) * 1);
  static int32_t param92_init[] = {0};
  model->setOperandValue(param92, param92_init, sizeof(int32_t) * 1);
  static _Float16 dummy81_init[] = {0.0f};
  model->setOperandValue(dummy81, dummy81_init, sizeof(_Float16) * 1);
  static int32_t param93_init[] = {0};
  model->setOperandValue(param93, param93_init, sizeof(int32_t) * 1);
  static _Float16 dummy82_init[] = {0.0f};
  model->setOperandValue(dummy82, dummy82_init, sizeof(_Float16) * 1);
  static int32_t param94_init[] = {0};
  model->setOperandValue(param94, param94_init, sizeof(int32_t) * 1);
  static _Float16 dummy83_init[] = {0.0f};
  model->setOperandValue(dummy83, dummy83_init, sizeof(_Float16) * 1);
  static int32_t param95_init[] = {0};
  model->setOperandValue(param95, param95_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy80, param92}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy81, param93}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors1_tmp, dummy82, param94}, {anchors1});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo1_tmp, dummy83, param95}, {imageInfo1});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1_tmp, bboxDeltas1_tmp, anchors1_tmp, imageInfo1_tmp},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type13(Type::TENSOR_FLOAT32, {30});
  OperandType type14(Type::TENSOR_FLOAT32, {30, 4});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type66(Type::TENSOR_FLOAT32, {2, 16, 4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type66);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type13);
  auto roiOut1 = model->addOperand(&type14);
  auto batchSplit1 = model->addOperand(&type15);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type66(Type::TENSOR_FLOAT32, {2, 16, 4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type66);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type16);
  auto roiOut1 = model->addOperand(&type17);
  auto batchSplit1 = model->addOperand(&type18);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nchw_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type13(Type::TENSOR_FLOAT32, {30});
  OperandType type14(Type::TENSOR_FLOAT32, {30, 4});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type19(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type66(Type::TENSOR_FLOAT32, {2, 16, 4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type66);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type13);
  auto roiOut1 = model->addOperand(&type14);
  auto batchSplit1 = model->addOperand(&type15);
  auto scores1_tmp = model->addOperand(&type10);
  auto dummy84 = model->addOperand(&type19);
  auto param96 = model->addOperand(&type9);
  auto bboxDeltas1_tmp = model->addOperand(&type66);
  auto dummy85 = model->addOperand(&type19);
  auto param97 = model->addOperand(&type9);
  auto anchors1_tmp = model->addOperand(&type6);
  auto dummy86 = model->addOperand(&type19);
  auto param98 = model->addOperand(&type9);
  auto imageInfo1_tmp = model->addOperand(&type12);
  auto dummy87 = model->addOperand(&type19);
  auto param99 = model->addOperand(&type9);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy84_init[] = {0.0f};
  model->setOperandValue(dummy84, dummy84_init, sizeof(float) * 1);
  static int32_t param96_init[] = {0};
  model->setOperandValue(param96, param96_init, sizeof(int32_t) * 1);
  static float dummy85_init[] = {0.0f};
  model->setOperandValue(dummy85, dummy85_init, sizeof(float) * 1);
  static int32_t param97_init[] = {0};
  model->setOperandValue(param97, param97_init, sizeof(int32_t) * 1);
  static float dummy86_init[] = {0.0f};
  model->setOperandValue(dummy86, dummy86_init, sizeof(float) * 1);
  static int32_t param98_init[] = {0};
  model->setOperandValue(param98, param98_init, sizeof(int32_t) * 1);
  static float dummy87_init[] = {0.0f};
  model->setOperandValue(dummy87, dummy87_init, sizeof(float) * 1);
  static int32_t param99_init[] = {0};
  model->setOperandValue(param99, param99_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy84, param96}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy85, param97}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors1_tmp, dummy86, param98}, {anchors1});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo1_tmp, dummy87, param99}, {imageInfo1});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1_tmp, bboxDeltas1_tmp, anchors1_tmp, imageInfo1_tmp},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type66(Type::TENSOR_FLOAT32, {2, 16, 4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type66);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type16);
  auto roiOut1 = model->addOperand(&type17);
  auto batchSplit1 = model->addOperand(&type18);
  auto scores1_tmp = model->addOperand(&type10);
  auto dummy88 = model->addOperand(&type19);
  auto param100 = model->addOperand(&type9);
  auto bboxDeltas1_tmp = model->addOperand(&type66);
  auto dummy89 = model->addOperand(&type19);
  auto param101 = model->addOperand(&type9);
  auto anchors1_tmp = model->addOperand(&type6);
  auto dummy90 = model->addOperand(&type19);
  auto param102 = model->addOperand(&type9);
  auto imageInfo1_tmp = model->addOperand(&type12);
  auto dummy91 = model->addOperand(&type19);
  auto param103 = model->addOperand(&type9);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy88_init[] = {0.0f};
  model->setOperandValue(dummy88, dummy88_init, sizeof(float) * 1);
  static int32_t param100_init[] = {0};
  model->setOperandValue(param100, param100_init, sizeof(int32_t) * 1);
  static float dummy89_init[] = {0.0f};
  model->setOperandValue(dummy89, dummy89_init, sizeof(float) * 1);
  static int32_t param101_init[] = {0};
  model->setOperandValue(param101, param101_init, sizeof(int32_t) * 1);
  static float dummy90_init[] = {0.0f};
  model->setOperandValue(dummy90, dummy90_init, sizeof(float) * 1);
  static int32_t param102_init[] = {0};
  model->setOperandValue(param102, param102_init, sizeof(int32_t) * 1);
  static float dummy91_init[] = {0.0f};
  model->setOperandValue(dummy91, dummy91_init, sizeof(float) * 1);
  static int32_t param103_init[] = {0};
  model->setOperandValue(param103, param103_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy88, param100}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy89, param101}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors1_tmp, dummy90, param102}, {anchors1});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo1_tmp, dummy91, param103}, {imageInfo1});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1_tmp, bboxDeltas1_tmp, anchors1_tmp, imageInfo1_tmp},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type13(Type::TENSOR_FLOAT32, {30});
  OperandType type14(Type::TENSOR_FLOAT32, {30, 4});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type66(Type::TENSOR_FLOAT32, {2, 16, 4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type66);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type13);
  auto roiOut1 = model->addOperand(&type14);
  auto batchSplit1 = model->addOperand(&type15);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type66(Type::TENSOR_FLOAT32, {2, 16, 4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type66);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type16);
  auto roiOut1 = model->addOperand(&type17);
  auto batchSplit1 = model->addOperand(&type18);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type13(Type::TENSOR_FLOAT32, {30});
  OperandType type14(Type::TENSOR_FLOAT32, {30, 4});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type19(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type66(Type::TENSOR_FLOAT32, {2, 16, 4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type66);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type13);
  auto roiOut1 = model->addOperand(&type14);
  auto batchSplit1 = model->addOperand(&type15);
  auto scores1_tmp = model->addOperand(&type10);
  auto dummy92 = model->addOperand(&type19);
  auto param104 = model->addOperand(&type9);
  auto bboxDeltas1_tmp = model->addOperand(&type66);
  auto dummy93 = model->addOperand(&type19);
  auto param105 = model->addOperand(&type9);
  auto anchors1_tmp = model->addOperand(&type6);
  auto dummy94 = model->addOperand(&type19);
  auto param106 = model->addOperand(&type9);
  auto imageInfo1_tmp = model->addOperand(&type12);
  auto dummy95 = model->addOperand(&type19);
  auto param107 = model->addOperand(&type9);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy92_init[] = {0.0f};
  model->setOperandValue(dummy92, dummy92_init, sizeof(float) * 1);
  static int32_t param104_init[] = {0};
  model->setOperandValue(param104, param104_init, sizeof(int32_t) * 1);
  static float dummy93_init[] = {0.0f};
  model->setOperandValue(dummy93, dummy93_init, sizeof(float) * 1);
  static int32_t param105_init[] = {0};
  model->setOperandValue(param105, param105_init, sizeof(int32_t) * 1);
  static float dummy94_init[] = {0.0f};
  model->setOperandValue(dummy94, dummy94_init, sizeof(float) * 1);
  static int32_t param106_init[] = {0};
  model->setOperandValue(param106, param106_init, sizeof(int32_t) * 1);
  static float dummy95_init[] = {0.0f};
  model->setOperandValue(dummy95, dummy95_init, sizeof(float) * 1);
  static int32_t param107_init[] = {0};
  model->setOperandValue(param107, param107_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy92, param104}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy93, param105}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors1_tmp, dummy94, param106}, {anchors1});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo1_tmp, dummy95, param107}, {imageInfo1});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1_tmp, bboxDeltas1_tmp, anchors1_tmp, imageInfo1_tmp},
    {scoresOut1, roiOut1, batchSplit1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_FLOAT32, {1});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type66(Type::TENSOR_FLOAT32, {2, 16, 4, 4});
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type66);
  auto anchors1 = model->addOperand(&type6);
  auto imageInfo1 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type16);
  auto roiOut1 = model->addOperand(&type17);
  auto batchSplit1 = model->addOperand(&type18);
  auto scores1_tmp = model->addOperand(&type10);
  auto dummy96 = model->addOperand(&type19);
  auto param108 = model->addOperand(&type9);
  auto bboxDeltas1_tmp = model->addOperand(&type66);
  auto dummy97 = model->addOperand(&type19);
  auto param109 = model->addOperand(&type9);
  auto anchors1_tmp = model->addOperand(&type6);
  auto dummy98 = model->addOperand(&type19);
  auto param110 = model->addOperand(&type9);
  auto imageInfo1_tmp = model->addOperand(&type12);
  auto dummy99 = model->addOperand(&type19);
  auto param111 = model->addOperand(&type9);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy96_init[] = {0.0f};
  model->setOperandValue(dummy96, dummy96_init, sizeof(float) * 1);
  static int32_t param108_init[] = {0};
  model->setOperandValue(param108, param108_init, sizeof(int32_t) * 1);
  static float dummy97_init[] = {0.0f};
  model->setOperandValue(dummy97, dummy97_init, sizeof(float) * 1);
  static int32_t param109_init[] = {0};
  model->setOperandValue(param109, param109_init, sizeof(int32_t) * 1);
  static float dummy98_init[] = {0.0f};
  model->setOperandValue(dummy98, dummy98_init, sizeof(float) * 1);
  static int32_t param110_init[] = {0};
  model->setOperandValue(param110, param110_init, sizeof(int32_t) * 1);
  static float dummy99_init[] = {0.0f};
  model->setOperandValue(dummy99, dummy99_init, sizeof(float) * 1);
  static int32_t param111_init[] = {0};
  model->setOperandValue(param111, param111_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy96, param108}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy97, param109}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors1_tmp, dummy98, param110}, {anchors1});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo1_tmp, dummy99, param111}, {imageInfo1});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1_tmp, bboxDeltas1_tmp, anchors1_tmp, imageInfo1_tmp},
    {scoresOut1, roiOut1, batchSplit1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type48(Type::TENSOR_QUANT16_SYMM, {4, 4}, 0.125f, 0);
  OperandType type50(Type::TENSOR_QUANT16_ASYMM, {2, 2}, 0.125f, 0);
  OperandType type51(Type::TENSOR_QUANT16_ASYMM, {30, 4}, 0.125f, 0);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 4}, 0.005f, 0);
  OperandType type53(Type::TENSOR_QUANT8_ASYMM, {30}, 0.005f, 0);
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {2, 16, 4, 4}, 0.1f, 128);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type52);
  auto bboxDeltas1 = model->addOperand(&type67);
  auto anchors1 = model->addOperand(&type48);
  auto imageInfo1 = model->addOperand(&type50);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type53);
  auto roiOut1 = model->addOperand(&type51);
  auto batchSplit1 = model->addOperand(&type15);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type27(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  OperandType type48(Type::TENSOR_QUANT16_SYMM, {4, 4}, 0.125f, 0);
  OperandType type50(Type::TENSOR_QUANT16_ASYMM, {2, 2}, 0.125f, 0);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 4}, 0.005f, 0);
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {0}, 0.005f, 0);
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {2, 16, 4, 4}, 0.1f, 128);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type52);
  auto bboxDeltas1 = model->addOperand(&type67);
  auto anchors1 = model->addOperand(&type48);
  auto imageInfo1 = model->addOperand(&type50);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type54);
  auto roiOut1 = model->addOperand(&type27);
  auto batchSplit1 = model->addOperand(&type18);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type48(Type::TENSOR_QUANT16_SYMM, {4, 4}, 0.125f, 0);
  OperandType type50(Type::TENSOR_QUANT16_ASYMM, {2, 2}, 0.125f, 0);
  OperandType type51(Type::TENSOR_QUANT16_ASYMM, {30, 4}, 0.125f, 0);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 4}, 0.005f, 0);
  OperandType type53(Type::TENSOR_QUANT8_ASYMM, {30}, 0.005f, 0);
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {1}, 0.005f, 0);
  OperandType type56(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 128);
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {2, 16, 4, 4}, 0.1f, 128);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type52);
  auto bboxDeltas1 = model->addOperand(&type67);
  auto anchors1 = model->addOperand(&type48);
  auto imageInfo1 = model->addOperand(&type50);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type53);
  auto roiOut1 = model->addOperand(&type51);
  auto batchSplit1 = model->addOperand(&type15);
  auto scores1_tmp = model->addOperand(&type52);
  auto dummy100 = model->addOperand(&type55);
  auto param112 = model->addOperand(&type9);
  auto bboxDeltas1_tmp = model->addOperand(&type67);
  auto dummy101 = model->addOperand(&type56);
  auto param113 = model->addOperand(&type9);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy100_init[] = {0};
  model->setOperandValue(dummy100, dummy100_init, sizeof(uint8_t) * 1);
  static int32_t param112_init[] = {0};
  model->setOperandValue(param112, param112_init, sizeof(int32_t) * 1);
  static uint8_t dummy101_init[] = {128};
  model->setOperandValue(dummy101, dummy101_init, sizeof(uint8_t) * 1);
  static int32_t param113_init[] = {0};
  model->setOperandValue(param113, param113_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy100, param112}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy101, param113}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {anchors1, imageInfo1, scores1_tmp, bboxDeltas1_tmp},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type27(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  OperandType type48(Type::TENSOR_QUANT16_SYMM, {4, 4}, 0.125f, 0);
  OperandType type50(Type::TENSOR_QUANT16_ASYMM, {2, 2}, 0.125f, 0);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 4}, 0.005f, 0);
  OperandType type54(Type::TENSOR_QUANT8_ASYMM, {0}, 0.005f, 0);
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {1}, 0.005f, 0);
  OperandType type56(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 128);
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {2, 16, 4, 4}, 0.1f, 128);
  OperandType type8(Type::FLOAT32, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type52);
  auto bboxDeltas1 = model->addOperand(&type67);
  auto anchors1 = model->addOperand(&type48);
  auto imageInfo1 = model->addOperand(&type50);
  auto param6 = model->addOperand(&type8);
  auto param7 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type8);
  auto param11 = model->addOperand(&type8);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type54);
  auto roiOut1 = model->addOperand(&type27);
  auto batchSplit1 = model->addOperand(&type18);
  auto scores1_tmp = model->addOperand(&type52);
  auto dummy102 = model->addOperand(&type55);
  auto param114 = model->addOperand(&type9);
  auto bboxDeltas1_tmp = model->addOperand(&type67);
  auto dummy103 = model->addOperand(&type56);
  auto param115 = model->addOperand(&type9);
  // Phase 2, operations
  static float param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {0.2f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy102_init[] = {0};
  model->setOperandValue(dummy102, dummy102_init, sizeof(uint8_t) * 1);
  static int32_t param114_init[] = {0};
  model->setOperandValue(param114, param114_init, sizeof(int32_t) * 1);
  static uint8_t dummy103_init[] = {128};
  model->setOperandValue(dummy103, dummy103_init, sizeof(uint8_t) * 1);
  static int32_t param115_init[] = {0};
  model->setOperandValue(param115, param115_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy102, param114}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy103, param115}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {anchors1, imageInfo1, scores1_tmp, bboxDeltas1_tmp},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type33(Type::FLOAT16, {});
  OperandType type34(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type58(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type59(Type::TENSOR_FLOAT16, {30, 4});
  OperandType type60(Type::TENSOR_FLOAT16, {2, 4, 4, 4});
  OperandType type61(Type::TENSOR_FLOAT16, {30});
  OperandType type68(Type::TENSOR_FLOAT16, {2, 16, 4, 4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type60);
  auto bboxDeltas1 = model->addOperand(&type68);
  auto anchors1 = model->addOperand(&type34);
  auto imageInfo1 = model->addOperand(&type58);
  auto param6 = model->addOperand(&type33);
  auto param7 = model->addOperand(&type33);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type33);
  auto param11 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type61);
  auto roiOut1 = model->addOperand(&type59);
  auto batchSplit1 = model->addOperand(&type15);
  // Phase 2, operations
  static _Float16 param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {0.20000000298023224f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type33(Type::FLOAT16, {});
  OperandType type34(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type37(Type::TENSOR_FLOAT16, {0});
  OperandType type38(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type58(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type60(Type::TENSOR_FLOAT16, {2, 4, 4, 4});
  OperandType type68(Type::TENSOR_FLOAT16, {2, 16, 4, 4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type60);
  auto bboxDeltas1 = model->addOperand(&type68);
  auto anchors1 = model->addOperand(&type34);
  auto imageInfo1 = model->addOperand(&type58);
  auto param6 = model->addOperand(&type33);
  auto param7 = model->addOperand(&type33);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type33);
  auto param11 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type37);
  auto roiOut1 = model->addOperand(&type38);
  auto batchSplit1 = model->addOperand(&type18);
  // Phase 2, operations
  static _Float16 param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {0.20000000298023224f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, bboxDeltas1, anchors1, imageInfo1},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_INT32, {30});
  OperandType type33(Type::FLOAT16, {});
  OperandType type40(Type::TENSOR_FLOAT16, {1});
  OperandType type59(Type::TENSOR_FLOAT16, {30, 4});
  OperandType type61(Type::TENSOR_FLOAT16, {30});
  OperandType type62(Type::TENSOR_FLOAT16, {2, 4, 4, 4});
  OperandType type64(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type65(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type69(Type::TENSOR_FLOAT16, {2, 16, 4, 4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type62);
  auto bboxDeltas1 = model->addOperand(&type69);
  auto anchors1 = model->addOperand(&type64);
  auto imageInfo1 = model->addOperand(&type65);
  auto param6 = model->addOperand(&type33);
  auto param7 = model->addOperand(&type33);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type33);
  auto param11 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type61);
  auto roiOut1 = model->addOperand(&type59);
  auto batchSplit1 = model->addOperand(&type15);
  auto scores1_tmp = model->addOperand(&type62);
  auto dummy104 = model->addOperand(&type40);
  auto param116 = model->addOperand(&type9);
  auto bboxDeltas1_tmp = model->addOperand(&type69);
  auto dummy105 = model->addOperand(&type40);
  auto param117 = model->addOperand(&type9);
  auto anchors1_tmp = model->addOperand(&type64);
  auto dummy106 = model->addOperand(&type40);
  auto param118 = model->addOperand(&type9);
  auto imageInfo1_tmp = model->addOperand(&type65);
  auto dummy107 = model->addOperand(&type40);
  auto param119 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {0.20000000298023224f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy104_init[] = {0.0f};
  model->setOperandValue(dummy104, dummy104_init, sizeof(_Float16) * 1);
  static int32_t param116_init[] = {0};
  model->setOperandValue(param116, param116_init, sizeof(int32_t) * 1);
  static _Float16 dummy105_init[] = {0.0f};
  model->setOperandValue(dummy105, dummy105_init, sizeof(_Float16) * 1);
  static int32_t param117_init[] = {0};
  model->setOperandValue(param117, param117_init, sizeof(int32_t) * 1);
  static _Float16 dummy106_init[] = {0.0f};
  model->setOperandValue(dummy106, dummy106_init, sizeof(_Float16) * 1);
  static int32_t param118_init[] = {0};
  model->setOperandValue(param118, param118_init, sizeof(int32_t) * 1);
  static _Float16 dummy107_init[] = {0.0f};
  model->setOperandValue(dummy107, dummy107_init, sizeof(_Float16) * 1);
  static int32_t param119_init[] = {0};
  model->setOperandValue(param119, param119_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy104, param116}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy105, param117}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors1_tmp, dummy106, param118}, {anchors1});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo1_tmp, dummy107, param119}, {imageInfo1});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1_tmp, bboxDeltas1_tmp, anchors1_tmp, imageInfo1_tmp},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
namespace generated_tests::generate_proposals {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_INT32, {0});
  OperandType type33(Type::FLOAT16, {});
  OperandType type37(Type::TENSOR_FLOAT16, {0});
  OperandType type38(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type40(Type::TENSOR_FLOAT16, {1});
  OperandType type62(Type::TENSOR_FLOAT16, {2, 4, 4, 4});
  OperandType type64(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type65(Type::TENSOR_FLOAT16, {2, 2});
  OperandType type69(Type::TENSOR_FLOAT16, {2, 16, 4, 4});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type62);
  auto bboxDeltas1 = model->addOperand(&type69);
  auto anchors1 = model->addOperand(&type64);
  auto imageInfo1 = model->addOperand(&type65);
  auto param6 = model->addOperand(&type33);
  auto param7 = model->addOperand(&type33);
  auto param8 = model->addOperand(&type9);
  auto param9 = model->addOperand(&type9);
  auto param10 = model->addOperand(&type33);
  auto param11 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto scoresOut1 = model->addOperand(&type37);
  auto roiOut1 = model->addOperand(&type38);
  auto batchSplit1 = model->addOperand(&type18);
  auto scores1_tmp = model->addOperand(&type62);
  auto dummy108 = model->addOperand(&type40);
  auto param120 = model->addOperand(&type9);
  auto bboxDeltas1_tmp = model->addOperand(&type69);
  auto dummy109 = model->addOperand(&type40);
  auto param121 = model->addOperand(&type9);
  auto anchors1_tmp = model->addOperand(&type64);
  auto dummy110 = model->addOperand(&type40);
  auto param122 = model->addOperand(&type9);
  auto imageInfo1_tmp = model->addOperand(&type65);
  auto dummy111 = model->addOperand(&type40);
  auto param123 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 param6_init[] = {10.0f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {10.0f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static int32_t param8_init[] = {32};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {16};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {0.20000000298023224f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {1.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy108_init[] = {0.0f};
  model->setOperandValue(dummy108, dummy108_init, sizeof(_Float16) * 1);
  static int32_t param120_init[] = {0};
  model->setOperandValue(param120, param120_init, sizeof(int32_t) * 1);
  static _Float16 dummy109_init[] = {0.0f};
  model->setOperandValue(dummy109, dummy109_init, sizeof(_Float16) * 1);
  static int32_t param121_init[] = {0};
  model->setOperandValue(param121, param121_init, sizeof(int32_t) * 1);
  static _Float16 dummy110_init[] = {0.0f};
  model->setOperandValue(dummy110, dummy110_init, sizeof(_Float16) * 1);
  static int32_t param122_init[] = {0};
  model->setOperandValue(param122, param122_init, sizeof(int32_t) * 1);
  static _Float16 dummy111_init[] = {0.0f};
  model->setOperandValue(dummy111, dummy111_init, sizeof(_Float16) * 1);
  static int32_t param123_init[] = {0};
  model->setOperandValue(param123, param123_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy108, param120}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy109, param121}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors1_tmp, dummy110, param122}, {anchors1});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo1_tmp, dummy111, param123}, {imageInfo1});
  model->addOperation(ANEURALNETWORKS_GENERATE_PROPOSALS, {scores1, bboxDeltas1, anchors1, imageInfo1, param6, param7, param8, param9, param10, param11, layout}, {scoresOut1, roiOut1, batchSplit1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1_tmp, bboxDeltas1_tmp, anchors1_tmp, imageInfo1_tmp},
    {scoresOut1, roiOut1, batchSplit1});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::generate_proposals
