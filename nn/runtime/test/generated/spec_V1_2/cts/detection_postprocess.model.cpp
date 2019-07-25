// Generated from detection_postprocess.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::detection_postprocess {

void CreateModel_regular(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 6, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 4});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type0);
  auto roi = model->addOperand(&type1);
  auto anchors = model->addOperand(&type2);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type7);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type9);
  auto param7 = model->addOperand(&type9);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type7);
  auto param10 = model->addOperand(&type8);
  auto scoresOut = model->addOperand(&type3);
  auto roiOut = model->addOperand(&type4);
  auto classesOut = model->addOperand(&type5);
  auto detectionOut = model->addOperand(&type6);
  // Phase 2, operations
  static float param_init[] = {10.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {10.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {5.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {5.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 param4_init[] = {true};
  model->setOperandValue(param4, param4_init, sizeof(bool8) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {0.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {0.5f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 param10_init[] = {false};
  model->setOperandValue(param10, param10_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores, roi, anchors, param, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10}, {scoresOut, roiOut, classesOut, detectionOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, roi, anchors},
    {scoresOut, roiOut, classesOut, detectionOut});
  assert(model->isValid());
}

bool is_ignored_regular(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_regular_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 6, 4});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type0);
  auto roi = model->addOperand(&type1);
  auto anchors = model->addOperand(&type2);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type7);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type9);
  auto param7 = model->addOperand(&type9);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type7);
  auto param10 = model->addOperand(&type8);
  auto scoresOut = model->addOperand(&type11);
  auto roiOut = model->addOperand(&type12);
  auto classesOut = model->addOperand(&type13);
  auto detectionOut = model->addOperand(&type14);
  // Phase 2, operations
  static float param_init[] = {10.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {10.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {5.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {5.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 param4_init[] = {true};
  model->setOperandValue(param4, param4_init, sizeof(bool8) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {0.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {0.5f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 param10_init[] = {false};
  model->setOperandValue(param10, param10_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores, roi, anchors, param, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10}, {scoresOut, roiOut, classesOut, detectionOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, roi, anchors},
    {scoresOut, roiOut, classesOut, detectionOut});
  assert(model->isValid());
}

bool is_ignored_regular_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_regular_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 6, 4});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 4});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type0);
  auto roi = model->addOperand(&type1);
  auto anchors = model->addOperand(&type2);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type7);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type9);
  auto param7 = model->addOperand(&type9);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type7);
  auto param10 = model->addOperand(&type8);
  auto scoresOut = model->addOperand(&type3);
  auto roiOut = model->addOperand(&type4);
  auto classesOut = model->addOperand(&type5);
  auto detectionOut = model->addOperand(&type6);
  auto scores_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type15);
  auto param44 = model->addOperand(&type9);
  auto roi_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type15);
  auto param45 = model->addOperand(&type9);
  auto anchors_tmp = model->addOperand(&type2);
  auto dummy2 = model->addOperand(&type15);
  auto param46 = model->addOperand(&type9);
  // Phase 2, operations
  static float param_init[] = {10.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {10.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {5.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {5.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 param4_init[] = {true};
  model->setOperandValue(param4, param4_init, sizeof(bool8) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {0.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {0.5f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 param10_init[] = {false};
  model->setOperandValue(param10, param10_init, sizeof(bool8) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param44_init[] = {0};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy, param44}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy1, param45}, {roi});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors_tmp, dummy2, param46}, {anchors});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores, roi, anchors, param, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10}, {scoresOut, roiOut, classesOut, detectionOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores_tmp, roi_tmp, anchors_tmp},
    {scoresOut, roiOut, classesOut, detectionOut});
  assert(model->isValid());
}

bool is_ignored_regular_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_regular_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 6, 4});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type0);
  auto roi = model->addOperand(&type1);
  auto anchors = model->addOperand(&type2);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type7);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type9);
  auto param7 = model->addOperand(&type9);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type7);
  auto param10 = model->addOperand(&type8);
  auto scoresOut = model->addOperand(&type11);
  auto roiOut = model->addOperand(&type12);
  auto classesOut = model->addOperand(&type13);
  auto detectionOut = model->addOperand(&type14);
  auto scores_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type15);
  auto param47 = model->addOperand(&type9);
  auto roi_tmp = model->addOperand(&type1);
  auto dummy4 = model->addOperand(&type15);
  auto param48 = model->addOperand(&type9);
  auto anchors_tmp = model->addOperand(&type2);
  auto dummy5 = model->addOperand(&type15);
  auto param49 = model->addOperand(&type9);
  // Phase 2, operations
  static float param_init[] = {10.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {10.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {5.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {5.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 param4_init[] = {true};
  model->setOperandValue(param4, param4_init, sizeof(bool8) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {0.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {0.5f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 param10_init[] = {false};
  model->setOperandValue(param10, param10_init, sizeof(bool8) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static float dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(float) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static float dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(float) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy3, param47}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy4, param48}, {roi});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors_tmp, dummy5, param49}, {anchors});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores, roi, anchors, param, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10}, {scoresOut, roiOut, classesOut, detectionOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores_tmp, roi_tmp, anchors_tmp},
    {scoresOut, roiOut, classesOut, detectionOut});
  assert(model->isValid());
}

bool is_ignored_regular_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_regular_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 6, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 4});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type0);
  auto roi = model->addOperand(&type1);
  auto anchors = model->addOperand(&type2);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type7);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type9);
  auto param7 = model->addOperand(&type9);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type7);
  auto param10 = model->addOperand(&type8);
  auto scoresOut = model->addOperand(&type3);
  auto roiOut = model->addOperand(&type4);
  auto classesOut = model->addOperand(&type5);
  auto detectionOut = model->addOperand(&type6);
  // Phase 2, operations
  static float param_init[] = {10.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {10.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {5.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {5.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 param4_init[] = {true};
  model->setOperandValue(param4, param4_init, sizeof(bool8) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {0.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {0.5f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 param10_init[] = {false};
  model->setOperandValue(param10, param10_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores, roi, anchors, param, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10}, {scoresOut, roiOut, classesOut, detectionOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, roi, anchors},
    {scoresOut, roiOut, classesOut, detectionOut});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_regular_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_regular_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 6, 4});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type0);
  auto roi = model->addOperand(&type1);
  auto anchors = model->addOperand(&type2);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type7);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type9);
  auto param7 = model->addOperand(&type9);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type7);
  auto param10 = model->addOperand(&type8);
  auto scoresOut = model->addOperand(&type11);
  auto roiOut = model->addOperand(&type12);
  auto classesOut = model->addOperand(&type13);
  auto detectionOut = model->addOperand(&type14);
  // Phase 2, operations
  static float param_init[] = {10.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {10.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {5.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {5.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 param4_init[] = {true};
  model->setOperandValue(param4, param4_init, sizeof(bool8) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {0.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {0.5f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 param10_init[] = {false};
  model->setOperandValue(param10, param10_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores, roi, anchors, param, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10}, {scoresOut, roiOut, classesOut, detectionOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, roi, anchors},
    {scoresOut, roiOut, classesOut, detectionOut});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_regular_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_regular_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 6, 4});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 4});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type0);
  auto roi = model->addOperand(&type1);
  auto anchors = model->addOperand(&type2);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type7);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type9);
  auto param7 = model->addOperand(&type9);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type7);
  auto param10 = model->addOperand(&type8);
  auto scoresOut = model->addOperand(&type3);
  auto roiOut = model->addOperand(&type4);
  auto classesOut = model->addOperand(&type5);
  auto detectionOut = model->addOperand(&type6);
  auto scores_tmp = model->addOperand(&type0);
  auto dummy6 = model->addOperand(&type15);
  auto param50 = model->addOperand(&type9);
  auto roi_tmp = model->addOperand(&type1);
  auto dummy7 = model->addOperand(&type15);
  auto param51 = model->addOperand(&type9);
  auto anchors_tmp = model->addOperand(&type2);
  auto dummy8 = model->addOperand(&type15);
  auto param52 = model->addOperand(&type9);
  // Phase 2, operations
  static float param_init[] = {10.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {10.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {5.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {5.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 param4_init[] = {true};
  model->setOperandValue(param4, param4_init, sizeof(bool8) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {0.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {0.5f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 param10_init[] = {false};
  model->setOperandValue(param10, param10_init, sizeof(bool8) * 1);
  static float dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(float) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static float dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(float) * 1);
  static int32_t param51_init[] = {0};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param52_init[] = {0};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy6, param50}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy7, param51}, {roi});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors_tmp, dummy8, param52}, {anchors});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores, roi, anchors, param, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10}, {scoresOut, roiOut, classesOut, detectionOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores_tmp, roi_tmp, anchors_tmp},
    {scoresOut, roiOut, classesOut, detectionOut});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_regular_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_regular_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 6, 4});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type0);
  auto roi = model->addOperand(&type1);
  auto anchors = model->addOperand(&type2);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type7);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type9);
  auto param7 = model->addOperand(&type9);
  auto param8 = model->addOperand(&type7);
  auto param9 = model->addOperand(&type7);
  auto param10 = model->addOperand(&type8);
  auto scoresOut = model->addOperand(&type11);
  auto roiOut = model->addOperand(&type12);
  auto classesOut = model->addOperand(&type13);
  auto detectionOut = model->addOperand(&type14);
  auto scores_tmp = model->addOperand(&type0);
  auto dummy9 = model->addOperand(&type15);
  auto param53 = model->addOperand(&type9);
  auto roi_tmp = model->addOperand(&type1);
  auto dummy10 = model->addOperand(&type15);
  auto param54 = model->addOperand(&type9);
  auto anchors_tmp = model->addOperand(&type2);
  auto dummy11 = model->addOperand(&type15);
  auto param55 = model->addOperand(&type9);
  // Phase 2, operations
  static float param_init[] = {10.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {10.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {5.0f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {5.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 param4_init[] = {true};
  model->setOperandValue(param4, param4_init, sizeof(bool8) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {0.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {0.5f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 param10_init[] = {false};
  model->setOperandValue(param10, param10_init, sizeof(bool8) * 1);
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param53_init[] = {0};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static float dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(float) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static float dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(float) * 1);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy9, param53}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy10, param54}, {roi});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors_tmp, dummy11, param55}, {anchors});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores, roi, anchors, param, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10}, {scoresOut, roiOut, classesOut, detectionOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores_tmp, roi_tmp, anchors_tmp},
    {scoresOut, roiOut, classesOut, detectionOut});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_regular_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_regular_float16(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type17(Type::FLOAT16, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 6, 4});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 3, 4});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 6, 3});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 3});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type20);
  auto roi = model->addOperand(&type18);
  auto anchors = model->addOperand(&type16);
  auto param = model->addOperand(&type17);
  auto param1 = model->addOperand(&type17);
  auto param2 = model->addOperand(&type17);
  auto param3 = model->addOperand(&type17);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type9);
  auto param7 = model->addOperand(&type9);
  auto param8 = model->addOperand(&type17);
  auto param9 = model->addOperand(&type17);
  auto param10 = model->addOperand(&type8);
  auto scoresOut = model->addOperand(&type21);
  auto roiOut = model->addOperand(&type19);
  auto classesOut = model->addOperand(&type5);
  auto detectionOut = model->addOperand(&type6);
  // Phase 2, operations
  static _Float16 param_init[] = {10.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {10.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static _Float16 param2_init[] = {5.0f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {5.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 param4_init[] = {true};
  model->setOperandValue(param4, param4_init, sizeof(bool8) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static _Float16 param8_init[] = {0.0f};
  model->setOperandValue(param8, param8_init, sizeof(_Float16) * 1);
  static _Float16 param9_init[] = {0.5f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static bool8 param10_init[] = {false};
  model->setOperandValue(param10, param10_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores, roi, anchors, param, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10}, {scoresOut, roiOut, classesOut, detectionOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, roi, anchors},
    {scoresOut, roiOut, classesOut, detectionOut});
  assert(model->isValid());
}

bool is_ignored_regular_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_regular_float16_dynamic_output_shape(Model *model) {
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type16(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type17(Type::FLOAT16, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 6, 4});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 6, 3});
  OperandType type22(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type20);
  auto roi = model->addOperand(&type18);
  auto anchors = model->addOperand(&type16);
  auto param = model->addOperand(&type17);
  auto param1 = model->addOperand(&type17);
  auto param2 = model->addOperand(&type17);
  auto param3 = model->addOperand(&type17);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type9);
  auto param7 = model->addOperand(&type9);
  auto param8 = model->addOperand(&type17);
  auto param9 = model->addOperand(&type17);
  auto param10 = model->addOperand(&type8);
  auto scoresOut = model->addOperand(&type22);
  auto roiOut = model->addOperand(&type23);
  auto classesOut = model->addOperand(&type13);
  auto detectionOut = model->addOperand(&type14);
  // Phase 2, operations
  static _Float16 param_init[] = {10.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {10.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static _Float16 param2_init[] = {5.0f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {5.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 param4_init[] = {true};
  model->setOperandValue(param4, param4_init, sizeof(bool8) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static _Float16 param8_init[] = {0.0f};
  model->setOperandValue(param8, param8_init, sizeof(_Float16) * 1);
  static _Float16 param9_init[] = {0.5f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static bool8 param10_init[] = {false};
  model->setOperandValue(param10, param10_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores, roi, anchors, param, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10}, {scoresOut, roiOut, classesOut, detectionOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores, roi, anchors},
    {scoresOut, roiOut, classesOut, detectionOut});
  assert(model->isValid());
}

bool is_ignored_regular_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_regular_float16_all_inputs_as_internal(Model *model) {
  OperandType type17(Type::FLOAT16, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 3, 4});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 3});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 6, 3});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 6, 4});
  OperandType type27(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type24);
  auto roi = model->addOperand(&type26);
  auto anchors = model->addOperand(&type27);
  auto param = model->addOperand(&type17);
  auto param1 = model->addOperand(&type17);
  auto param2 = model->addOperand(&type17);
  auto param3 = model->addOperand(&type17);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type9);
  auto param7 = model->addOperand(&type9);
  auto param8 = model->addOperand(&type17);
  auto param9 = model->addOperand(&type17);
  auto param10 = model->addOperand(&type8);
  auto scoresOut = model->addOperand(&type21);
  auto roiOut = model->addOperand(&type19);
  auto classesOut = model->addOperand(&type5);
  auto detectionOut = model->addOperand(&type6);
  auto scores_tmp = model->addOperand(&type24);
  auto dummy12 = model->addOperand(&type25);
  auto param56 = model->addOperand(&type9);
  auto roi_tmp = model->addOperand(&type26);
  auto dummy13 = model->addOperand(&type25);
  auto param57 = model->addOperand(&type9);
  auto anchors_tmp = model->addOperand(&type27);
  auto dummy14 = model->addOperand(&type25);
  auto param58 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 param_init[] = {10.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {10.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static _Float16 param2_init[] = {5.0f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {5.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 param4_init[] = {true};
  model->setOperandValue(param4, param4_init, sizeof(bool8) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static _Float16 param8_init[] = {0.0f};
  model->setOperandValue(param8, param8_init, sizeof(_Float16) * 1);
  static _Float16 param9_init[] = {0.5f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static bool8 param10_init[] = {false};
  model->setOperandValue(param10, param10_init, sizeof(bool8) * 1);
  static _Float16 dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(_Float16) * 1);
  static int32_t param56_init[] = {0};
  model->setOperandValue(param56, param56_init, sizeof(int32_t) * 1);
  static _Float16 dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(_Float16) * 1);
  static int32_t param57_init[] = {0};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static _Float16 dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(_Float16) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy12, param56}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy13, param57}, {roi});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors_tmp, dummy14, param58}, {anchors});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores, roi, anchors, param, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10}, {scoresOut, roiOut, classesOut, detectionOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores_tmp, roi_tmp, anchors_tmp},
    {scoresOut, roiOut, classesOut, detectionOut});
  assert(model->isValid());
}

bool is_ignored_regular_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_regular_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type17(Type::FLOAT16, {});
  OperandType type22(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 6, 3});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 6, 4});
  OperandType type27(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type24);
  auto roi = model->addOperand(&type26);
  auto anchors = model->addOperand(&type27);
  auto param = model->addOperand(&type17);
  auto param1 = model->addOperand(&type17);
  auto param2 = model->addOperand(&type17);
  auto param3 = model->addOperand(&type17);
  auto param4 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type9);
  auto param7 = model->addOperand(&type9);
  auto param8 = model->addOperand(&type17);
  auto param9 = model->addOperand(&type17);
  auto param10 = model->addOperand(&type8);
  auto scoresOut = model->addOperand(&type22);
  auto roiOut = model->addOperand(&type23);
  auto classesOut = model->addOperand(&type13);
  auto detectionOut = model->addOperand(&type14);
  auto scores_tmp = model->addOperand(&type24);
  auto dummy15 = model->addOperand(&type25);
  auto param59 = model->addOperand(&type9);
  auto roi_tmp = model->addOperand(&type26);
  auto dummy16 = model->addOperand(&type25);
  auto param60 = model->addOperand(&type9);
  auto anchors_tmp = model->addOperand(&type27);
  auto dummy17 = model->addOperand(&type25);
  auto param61 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 param_init[] = {10.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {10.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static _Float16 param2_init[] = {5.0f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {5.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 param4_init[] = {true};
  model->setOperandValue(param4, param4_init, sizeof(bool8) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static _Float16 param8_init[] = {0.0f};
  model->setOperandValue(param8, param8_init, sizeof(_Float16) * 1);
  static _Float16 param9_init[] = {0.5f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static bool8 param10_init[] = {false};
  model->setOperandValue(param10, param10_init, sizeof(bool8) * 1);
  static _Float16 dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(_Float16) * 1);
  static int32_t param59_init[] = {0};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static _Float16 dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(_Float16) * 1);
  static int32_t param60_init[] = {0};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  static _Float16 dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(_Float16) * 1);
  static int32_t param61_init[] = {0};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores_tmp, dummy15, param59}, {scores});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy16, param60}, {roi});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors_tmp, dummy17, param61}, {anchors});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores, roi, anchors, param, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10}, {scoresOut, roiOut, classesOut, detectionOut});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores_tmp, roi_tmp, anchors_tmp},
    {scoresOut, roiOut, classesOut, detectionOut});
  assert(model->isValid());
}

bool is_ignored_regular_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 6, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 4});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type0);
  auto roi1 = model->addOperand(&type1);
  auto anchors1 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type7);
  auto param12 = model->addOperand(&type7);
  auto param13 = model->addOperand(&type7);
  auto param14 = model->addOperand(&type7);
  auto param15 = model->addOperand(&type8);
  auto param16 = model->addOperand(&type9);
  auto param17 = model->addOperand(&type9);
  auto param18 = model->addOperand(&type9);
  auto param19 = model->addOperand(&type7);
  auto param20 = model->addOperand(&type7);
  auto param21 = model->addOperand(&type8);
  auto scoresOut1 = model->addOperand(&type3);
  auto roiOut1 = model->addOperand(&type4);
  auto classesOut1 = model->addOperand(&type5);
  auto detectionOut1 = model->addOperand(&type6);
  // Phase 2, operations
  static float param11_init[] = {10.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static float param12_init[] = {10.0f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 1);
  static float param13_init[] = {5.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {5.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 param15_init[] = {false};
  model->setOperandValue(param15, param15_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {1};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static float param19_init[] = {0.0f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static float param20_init[] = {0.5f};
  model->setOperandValue(param20, param20_init, sizeof(float) * 1);
  static bool8 param21_init[] = {false};
  model->setOperandValue(param21, param21_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores1, roi1, anchors1, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20, param21}, {scoresOut1, roiOut1, classesOut1, detectionOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, roi1, anchors1},
    {scoresOut1, roiOut1, classesOut1, detectionOut1});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 6, 4});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type0);
  auto roi1 = model->addOperand(&type1);
  auto anchors1 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type7);
  auto param12 = model->addOperand(&type7);
  auto param13 = model->addOperand(&type7);
  auto param14 = model->addOperand(&type7);
  auto param15 = model->addOperand(&type8);
  auto param16 = model->addOperand(&type9);
  auto param17 = model->addOperand(&type9);
  auto param18 = model->addOperand(&type9);
  auto param19 = model->addOperand(&type7);
  auto param20 = model->addOperand(&type7);
  auto param21 = model->addOperand(&type8);
  auto scoresOut1 = model->addOperand(&type11);
  auto roiOut1 = model->addOperand(&type12);
  auto classesOut1 = model->addOperand(&type13);
  auto detectionOut1 = model->addOperand(&type14);
  // Phase 2, operations
  static float param11_init[] = {10.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static float param12_init[] = {10.0f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 1);
  static float param13_init[] = {5.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {5.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 param15_init[] = {false};
  model->setOperandValue(param15, param15_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {1};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static float param19_init[] = {0.0f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static float param20_init[] = {0.5f};
  model->setOperandValue(param20, param20_init, sizeof(float) * 1);
  static bool8 param21_init[] = {false};
  model->setOperandValue(param21, param21_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores1, roi1, anchors1, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20, param21}, {scoresOut1, roiOut1, classesOut1, detectionOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, roi1, anchors1},
    {scoresOut1, roiOut1, classesOut1, detectionOut1});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 6, 4});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 4});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type0);
  auto roi1 = model->addOperand(&type1);
  auto anchors1 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type7);
  auto param12 = model->addOperand(&type7);
  auto param13 = model->addOperand(&type7);
  auto param14 = model->addOperand(&type7);
  auto param15 = model->addOperand(&type8);
  auto param16 = model->addOperand(&type9);
  auto param17 = model->addOperand(&type9);
  auto param18 = model->addOperand(&type9);
  auto param19 = model->addOperand(&type7);
  auto param20 = model->addOperand(&type7);
  auto param21 = model->addOperand(&type8);
  auto scoresOut1 = model->addOperand(&type3);
  auto roiOut1 = model->addOperand(&type4);
  auto classesOut1 = model->addOperand(&type5);
  auto detectionOut1 = model->addOperand(&type6);
  auto scores1_tmp = model->addOperand(&type0);
  auto dummy18 = model->addOperand(&type15);
  auto param62 = model->addOperand(&type9);
  auto roi1_tmp = model->addOperand(&type1);
  auto dummy19 = model->addOperand(&type15);
  auto param63 = model->addOperand(&type9);
  auto anchors1_tmp = model->addOperand(&type2);
  auto dummy20 = model->addOperand(&type15);
  auto param64 = model->addOperand(&type9);
  // Phase 2, operations
  static float param11_init[] = {10.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static float param12_init[] = {10.0f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 1);
  static float param13_init[] = {5.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {5.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 param15_init[] = {false};
  model->setOperandValue(param15, param15_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {1};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static float param19_init[] = {0.0f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static float param20_init[] = {0.5f};
  model->setOperandValue(param20, param20_init, sizeof(float) * 1);
  static bool8 param21_init[] = {false};
  model->setOperandValue(param21, param21_init, sizeof(bool8) * 1);
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param62_init[] = {0};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param63_init[] = {0};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static float dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(float) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy18, param62}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy19, param63}, {roi1});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors1_tmp, dummy20, param64}, {anchors1});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores1, roi1, anchors1, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20, param21}, {scoresOut1, roiOut1, classesOut1, detectionOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1_tmp, roi1_tmp, anchors1_tmp},
    {scoresOut1, roiOut1, classesOut1, detectionOut1});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 6, 4});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type0);
  auto roi1 = model->addOperand(&type1);
  auto anchors1 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type7);
  auto param12 = model->addOperand(&type7);
  auto param13 = model->addOperand(&type7);
  auto param14 = model->addOperand(&type7);
  auto param15 = model->addOperand(&type8);
  auto param16 = model->addOperand(&type9);
  auto param17 = model->addOperand(&type9);
  auto param18 = model->addOperand(&type9);
  auto param19 = model->addOperand(&type7);
  auto param20 = model->addOperand(&type7);
  auto param21 = model->addOperand(&type8);
  auto scoresOut1 = model->addOperand(&type11);
  auto roiOut1 = model->addOperand(&type12);
  auto classesOut1 = model->addOperand(&type13);
  auto detectionOut1 = model->addOperand(&type14);
  auto scores1_tmp = model->addOperand(&type0);
  auto dummy21 = model->addOperand(&type15);
  auto param65 = model->addOperand(&type9);
  auto roi1_tmp = model->addOperand(&type1);
  auto dummy22 = model->addOperand(&type15);
  auto param66 = model->addOperand(&type9);
  auto anchors1_tmp = model->addOperand(&type2);
  auto dummy23 = model->addOperand(&type15);
  auto param67 = model->addOperand(&type9);
  // Phase 2, operations
  static float param11_init[] = {10.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static float param12_init[] = {10.0f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 1);
  static float param13_init[] = {5.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {5.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 param15_init[] = {false};
  model->setOperandValue(param15, param15_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {1};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static float param19_init[] = {0.0f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static float param20_init[] = {0.5f};
  model->setOperandValue(param20, param20_init, sizeof(float) * 1);
  static bool8 param21_init[] = {false};
  model->setOperandValue(param21, param21_init, sizeof(bool8) * 1);
  static float dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(float) * 1);
  static int32_t param65_init[] = {0};
  model->setOperandValue(param65, param65_init, sizeof(int32_t) * 1);
  static float dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(float) * 1);
  static int32_t param66_init[] = {0};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static float dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(float) * 1);
  static int32_t param67_init[] = {0};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy21, param65}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy22, param66}, {roi1});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors1_tmp, dummy23, param67}, {anchors1});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores1, roi1, anchors1, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20, param21}, {scoresOut1, roiOut1, classesOut1, detectionOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1_tmp, roi1_tmp, anchors1_tmp},
    {scoresOut1, roiOut1, classesOut1, detectionOut1});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 6, 4});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 4});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type0);
  auto roi1 = model->addOperand(&type1);
  auto anchors1 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type7);
  auto param12 = model->addOperand(&type7);
  auto param13 = model->addOperand(&type7);
  auto param14 = model->addOperand(&type7);
  auto param15 = model->addOperand(&type8);
  auto param16 = model->addOperand(&type9);
  auto param17 = model->addOperand(&type9);
  auto param18 = model->addOperand(&type9);
  auto param19 = model->addOperand(&type7);
  auto param20 = model->addOperand(&type7);
  auto param21 = model->addOperand(&type8);
  auto scoresOut1 = model->addOperand(&type3);
  auto roiOut1 = model->addOperand(&type4);
  auto classesOut1 = model->addOperand(&type5);
  auto detectionOut1 = model->addOperand(&type6);
  // Phase 2, operations
  static float param11_init[] = {10.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static float param12_init[] = {10.0f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 1);
  static float param13_init[] = {5.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {5.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 param15_init[] = {false};
  model->setOperandValue(param15, param15_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {1};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static float param19_init[] = {0.0f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static float param20_init[] = {0.5f};
  model->setOperandValue(param20, param20_init, sizeof(float) * 1);
  static bool8 param21_init[] = {false};
  model->setOperandValue(param21, param21_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores1, roi1, anchors1, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20, param21}, {scoresOut1, roiOut1, classesOut1, detectionOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, roi1, anchors1},
    {scoresOut1, roiOut1, classesOut1, detectionOut1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 6, 4});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type0);
  auto roi1 = model->addOperand(&type1);
  auto anchors1 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type7);
  auto param12 = model->addOperand(&type7);
  auto param13 = model->addOperand(&type7);
  auto param14 = model->addOperand(&type7);
  auto param15 = model->addOperand(&type8);
  auto param16 = model->addOperand(&type9);
  auto param17 = model->addOperand(&type9);
  auto param18 = model->addOperand(&type9);
  auto param19 = model->addOperand(&type7);
  auto param20 = model->addOperand(&type7);
  auto param21 = model->addOperand(&type8);
  auto scoresOut1 = model->addOperand(&type11);
  auto roiOut1 = model->addOperand(&type12);
  auto classesOut1 = model->addOperand(&type13);
  auto detectionOut1 = model->addOperand(&type14);
  // Phase 2, operations
  static float param11_init[] = {10.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static float param12_init[] = {10.0f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 1);
  static float param13_init[] = {5.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {5.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 param15_init[] = {false};
  model->setOperandValue(param15, param15_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {1};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static float param19_init[] = {0.0f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static float param20_init[] = {0.5f};
  model->setOperandValue(param20, param20_init, sizeof(float) * 1);
  static bool8 param21_init[] = {false};
  model->setOperandValue(param21, param21_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores1, roi1, anchors1, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20, param21}, {scoresOut1, roiOut1, classesOut1, detectionOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, roi1, anchors1},
    {scoresOut1, roiOut1, classesOut1, detectionOut1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 6, 4});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 4});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type0);
  auto roi1 = model->addOperand(&type1);
  auto anchors1 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type7);
  auto param12 = model->addOperand(&type7);
  auto param13 = model->addOperand(&type7);
  auto param14 = model->addOperand(&type7);
  auto param15 = model->addOperand(&type8);
  auto param16 = model->addOperand(&type9);
  auto param17 = model->addOperand(&type9);
  auto param18 = model->addOperand(&type9);
  auto param19 = model->addOperand(&type7);
  auto param20 = model->addOperand(&type7);
  auto param21 = model->addOperand(&type8);
  auto scoresOut1 = model->addOperand(&type3);
  auto roiOut1 = model->addOperand(&type4);
  auto classesOut1 = model->addOperand(&type5);
  auto detectionOut1 = model->addOperand(&type6);
  auto scores1_tmp = model->addOperand(&type0);
  auto dummy24 = model->addOperand(&type15);
  auto param68 = model->addOperand(&type9);
  auto roi1_tmp = model->addOperand(&type1);
  auto dummy25 = model->addOperand(&type15);
  auto param69 = model->addOperand(&type9);
  auto anchors1_tmp = model->addOperand(&type2);
  auto dummy26 = model->addOperand(&type15);
  auto param70 = model->addOperand(&type9);
  // Phase 2, operations
  static float param11_init[] = {10.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static float param12_init[] = {10.0f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 1);
  static float param13_init[] = {5.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {5.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 param15_init[] = {false};
  model->setOperandValue(param15, param15_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {1};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static float param19_init[] = {0.0f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static float param20_init[] = {0.5f};
  model->setOperandValue(param20, param20_init, sizeof(float) * 1);
  static bool8 param21_init[] = {false};
  model->setOperandValue(param21, param21_init, sizeof(bool8) * 1);
  static float dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(float) * 1);
  static int32_t param68_init[] = {0};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static float dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(float) * 1);
  static int32_t param69_init[] = {0};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static float dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(float) * 1);
  static int32_t param70_init[] = {0};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy24, param68}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy25, param69}, {roi1});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors1_tmp, dummy26, param70}, {anchors1});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores1, roi1, anchors1, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20, param21}, {scoresOut1, roiOut1, classesOut1, detectionOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1_tmp, roi1_tmp, anchors1_tmp},
    {scoresOut1, roiOut1, classesOut1, detectionOut1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 6, 4});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type0);
  auto roi1 = model->addOperand(&type1);
  auto anchors1 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type7);
  auto param12 = model->addOperand(&type7);
  auto param13 = model->addOperand(&type7);
  auto param14 = model->addOperand(&type7);
  auto param15 = model->addOperand(&type8);
  auto param16 = model->addOperand(&type9);
  auto param17 = model->addOperand(&type9);
  auto param18 = model->addOperand(&type9);
  auto param19 = model->addOperand(&type7);
  auto param20 = model->addOperand(&type7);
  auto param21 = model->addOperand(&type8);
  auto scoresOut1 = model->addOperand(&type11);
  auto roiOut1 = model->addOperand(&type12);
  auto classesOut1 = model->addOperand(&type13);
  auto detectionOut1 = model->addOperand(&type14);
  auto scores1_tmp = model->addOperand(&type0);
  auto dummy27 = model->addOperand(&type15);
  auto param71 = model->addOperand(&type9);
  auto roi1_tmp = model->addOperand(&type1);
  auto dummy28 = model->addOperand(&type15);
  auto param72 = model->addOperand(&type9);
  auto anchors1_tmp = model->addOperand(&type2);
  auto dummy29 = model->addOperand(&type15);
  auto param73 = model->addOperand(&type9);
  // Phase 2, operations
  static float param11_init[] = {10.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static float param12_init[] = {10.0f};
  model->setOperandValue(param12, param12_init, sizeof(float) * 1);
  static float param13_init[] = {5.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {5.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 param15_init[] = {false};
  model->setOperandValue(param15, param15_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {1};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static float param19_init[] = {0.0f};
  model->setOperandValue(param19, param19_init, sizeof(float) * 1);
  static float param20_init[] = {0.5f};
  model->setOperandValue(param20, param20_init, sizeof(float) * 1);
  static bool8 param21_init[] = {false};
  model->setOperandValue(param21, param21_init, sizeof(bool8) * 1);
  static float dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(float) * 1);
  static int32_t param71_init[] = {0};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  static float dummy28_init[] = {0.0f};
  model->setOperandValue(dummy28, dummy28_init, sizeof(float) * 1);
  static int32_t param72_init[] = {0};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static float dummy29_init[] = {0.0f};
  model->setOperandValue(dummy29, dummy29_init, sizeof(float) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy27, param71}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy28, param72}, {roi1});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors1_tmp, dummy29, param73}, {anchors1});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores1, roi1, anchors1, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20, param21}, {scoresOut1, roiOut1, classesOut1, detectionOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1_tmp, roi1_tmp, anchors1_tmp},
    {scoresOut1, roiOut1, classesOut1, detectionOut1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_float16(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type17(Type::FLOAT16, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 6, 4});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 3, 4});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 6, 3});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 3});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type20);
  auto roi1 = model->addOperand(&type18);
  auto anchors1 = model->addOperand(&type16);
  auto param11 = model->addOperand(&type17);
  auto param12 = model->addOperand(&type17);
  auto param13 = model->addOperand(&type17);
  auto param14 = model->addOperand(&type17);
  auto param15 = model->addOperand(&type8);
  auto param16 = model->addOperand(&type9);
  auto param17 = model->addOperand(&type9);
  auto param18 = model->addOperand(&type9);
  auto param19 = model->addOperand(&type17);
  auto param20 = model->addOperand(&type17);
  auto param21 = model->addOperand(&type8);
  auto scoresOut1 = model->addOperand(&type21);
  auto roiOut1 = model->addOperand(&type19);
  auto classesOut1 = model->addOperand(&type5);
  auto detectionOut1 = model->addOperand(&type6);
  // Phase 2, operations
  static _Float16 param11_init[] = {10.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static _Float16 param12_init[] = {10.0f};
  model->setOperandValue(param12, param12_init, sizeof(_Float16) * 1);
  static _Float16 param13_init[] = {5.0f};
  model->setOperandValue(param13, param13_init, sizeof(_Float16) * 1);
  static _Float16 param14_init[] = {5.0f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static bool8 param15_init[] = {false};
  model->setOperandValue(param15, param15_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {1};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static _Float16 param19_init[] = {0.0f};
  model->setOperandValue(param19, param19_init, sizeof(_Float16) * 1);
  static _Float16 param20_init[] = {0.5f};
  model->setOperandValue(param20, param20_init, sizeof(_Float16) * 1);
  static bool8 param21_init[] = {false};
  model->setOperandValue(param21, param21_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores1, roi1, anchors1, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20, param21}, {scoresOut1, roiOut1, classesOut1, detectionOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, roi1, anchors1},
    {scoresOut1, roiOut1, classesOut1, detectionOut1});
  assert(model->isValid());
}

bool is_ignored_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_float16_dynamic_output_shape(Model *model) {
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type16(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type17(Type::FLOAT16, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 6, 4});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 6, 3});
  OperandType type22(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type20);
  auto roi1 = model->addOperand(&type18);
  auto anchors1 = model->addOperand(&type16);
  auto param11 = model->addOperand(&type17);
  auto param12 = model->addOperand(&type17);
  auto param13 = model->addOperand(&type17);
  auto param14 = model->addOperand(&type17);
  auto param15 = model->addOperand(&type8);
  auto param16 = model->addOperand(&type9);
  auto param17 = model->addOperand(&type9);
  auto param18 = model->addOperand(&type9);
  auto param19 = model->addOperand(&type17);
  auto param20 = model->addOperand(&type17);
  auto param21 = model->addOperand(&type8);
  auto scoresOut1 = model->addOperand(&type22);
  auto roiOut1 = model->addOperand(&type23);
  auto classesOut1 = model->addOperand(&type13);
  auto detectionOut1 = model->addOperand(&type14);
  // Phase 2, operations
  static _Float16 param11_init[] = {10.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static _Float16 param12_init[] = {10.0f};
  model->setOperandValue(param12, param12_init, sizeof(_Float16) * 1);
  static _Float16 param13_init[] = {5.0f};
  model->setOperandValue(param13, param13_init, sizeof(_Float16) * 1);
  static _Float16 param14_init[] = {5.0f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static bool8 param15_init[] = {false};
  model->setOperandValue(param15, param15_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {1};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static _Float16 param19_init[] = {0.0f};
  model->setOperandValue(param19, param19_init, sizeof(_Float16) * 1);
  static _Float16 param20_init[] = {0.5f};
  model->setOperandValue(param20, param20_init, sizeof(_Float16) * 1);
  static bool8 param21_init[] = {false};
  model->setOperandValue(param21, param21_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores1, roi1, anchors1, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20, param21}, {scoresOut1, roiOut1, classesOut1, detectionOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1, roi1, anchors1},
    {scoresOut1, roiOut1, classesOut1, detectionOut1});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_float16_all_inputs_as_internal(Model *model) {
  OperandType type17(Type::FLOAT16, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 3, 4});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 3});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 6, 3});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 6, 4});
  OperandType type27(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type24);
  auto roi1 = model->addOperand(&type26);
  auto anchors1 = model->addOperand(&type27);
  auto param11 = model->addOperand(&type17);
  auto param12 = model->addOperand(&type17);
  auto param13 = model->addOperand(&type17);
  auto param14 = model->addOperand(&type17);
  auto param15 = model->addOperand(&type8);
  auto param16 = model->addOperand(&type9);
  auto param17 = model->addOperand(&type9);
  auto param18 = model->addOperand(&type9);
  auto param19 = model->addOperand(&type17);
  auto param20 = model->addOperand(&type17);
  auto param21 = model->addOperand(&type8);
  auto scoresOut1 = model->addOperand(&type21);
  auto roiOut1 = model->addOperand(&type19);
  auto classesOut1 = model->addOperand(&type5);
  auto detectionOut1 = model->addOperand(&type6);
  auto scores1_tmp = model->addOperand(&type24);
  auto dummy30 = model->addOperand(&type25);
  auto param74 = model->addOperand(&type9);
  auto roi1_tmp = model->addOperand(&type26);
  auto dummy31 = model->addOperand(&type25);
  auto param75 = model->addOperand(&type9);
  auto anchors1_tmp = model->addOperand(&type27);
  auto dummy32 = model->addOperand(&type25);
  auto param76 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 param11_init[] = {10.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static _Float16 param12_init[] = {10.0f};
  model->setOperandValue(param12, param12_init, sizeof(_Float16) * 1);
  static _Float16 param13_init[] = {5.0f};
  model->setOperandValue(param13, param13_init, sizeof(_Float16) * 1);
  static _Float16 param14_init[] = {5.0f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static bool8 param15_init[] = {false};
  model->setOperandValue(param15, param15_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {1};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static _Float16 param19_init[] = {0.0f};
  model->setOperandValue(param19, param19_init, sizeof(_Float16) * 1);
  static _Float16 param20_init[] = {0.5f};
  model->setOperandValue(param20, param20_init, sizeof(_Float16) * 1);
  static bool8 param21_init[] = {false};
  model->setOperandValue(param21, param21_init, sizeof(bool8) * 1);
  static _Float16 dummy30_init[] = {0.0f};
  model->setOperandValue(dummy30, dummy30_init, sizeof(_Float16) * 1);
  static int32_t param74_init[] = {0};
  model->setOperandValue(param74, param74_init, sizeof(int32_t) * 1);
  static _Float16 dummy31_init[] = {0.0f};
  model->setOperandValue(dummy31, dummy31_init, sizeof(_Float16) * 1);
  static int32_t param75_init[] = {0};
  model->setOperandValue(param75, param75_init, sizeof(int32_t) * 1);
  static _Float16 dummy32_init[] = {0.0f};
  model->setOperandValue(dummy32, dummy32_init, sizeof(_Float16) * 1);
  static int32_t param76_init[] = {0};
  model->setOperandValue(param76, param76_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy30, param74}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy31, param75}, {roi1});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors1_tmp, dummy32, param76}, {anchors1});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores1, roi1, anchors1, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20, param21}, {scoresOut1, roiOut1, classesOut1, detectionOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1_tmp, roi1_tmp, anchors1_tmp},
    {scoresOut1, roiOut1, classesOut1, detectionOut1});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type17(Type::FLOAT16, {});
  OperandType type22(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 6, 3});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 6, 4});
  OperandType type27(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type24);
  auto roi1 = model->addOperand(&type26);
  auto anchors1 = model->addOperand(&type27);
  auto param11 = model->addOperand(&type17);
  auto param12 = model->addOperand(&type17);
  auto param13 = model->addOperand(&type17);
  auto param14 = model->addOperand(&type17);
  auto param15 = model->addOperand(&type8);
  auto param16 = model->addOperand(&type9);
  auto param17 = model->addOperand(&type9);
  auto param18 = model->addOperand(&type9);
  auto param19 = model->addOperand(&type17);
  auto param20 = model->addOperand(&type17);
  auto param21 = model->addOperand(&type8);
  auto scoresOut1 = model->addOperand(&type22);
  auto roiOut1 = model->addOperand(&type23);
  auto classesOut1 = model->addOperand(&type13);
  auto detectionOut1 = model->addOperand(&type14);
  auto scores1_tmp = model->addOperand(&type24);
  auto dummy33 = model->addOperand(&type25);
  auto param77 = model->addOperand(&type9);
  auto roi1_tmp = model->addOperand(&type26);
  auto dummy34 = model->addOperand(&type25);
  auto param78 = model->addOperand(&type9);
  auto anchors1_tmp = model->addOperand(&type27);
  auto dummy35 = model->addOperand(&type25);
  auto param79 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 param11_init[] = {10.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static _Float16 param12_init[] = {10.0f};
  model->setOperandValue(param12, param12_init, sizeof(_Float16) * 1);
  static _Float16 param13_init[] = {5.0f};
  model->setOperandValue(param13, param13_init, sizeof(_Float16) * 1);
  static _Float16 param14_init[] = {5.0f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static bool8 param15_init[] = {false};
  model->setOperandValue(param15, param15_init, sizeof(bool8) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {1};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {1};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static _Float16 param19_init[] = {0.0f};
  model->setOperandValue(param19, param19_init, sizeof(_Float16) * 1);
  static _Float16 param20_init[] = {0.5f};
  model->setOperandValue(param20, param20_init, sizeof(_Float16) * 1);
  static bool8 param21_init[] = {false};
  model->setOperandValue(param21, param21_init, sizeof(bool8) * 1);
  static _Float16 dummy33_init[] = {0.0f};
  model->setOperandValue(dummy33, dummy33_init, sizeof(_Float16) * 1);
  static int32_t param77_init[] = {0};
  model->setOperandValue(param77, param77_init, sizeof(int32_t) * 1);
  static _Float16 dummy34_init[] = {0.0f};
  model->setOperandValue(dummy34, dummy34_init, sizeof(_Float16) * 1);
  static int32_t param78_init[] = {0};
  model->setOperandValue(param78, param78_init, sizeof(int32_t) * 1);
  static _Float16 dummy35_init[] = {0.0f};
  model->setOperandValue(dummy35, dummy35_init, sizeof(_Float16) * 1);
  static int32_t param79_init[] = {0};
  model->setOperandValue(param79, param79_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores1_tmp, dummy33, param77}, {scores1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy34, param78}, {roi1});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors1_tmp, dummy35, param79}, {anchors1});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores1, roi1, anchors1, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20, param21}, {scoresOut1, roiOut1, classesOut1, detectionOut1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores1_tmp, roi1_tmp, anchors1_tmp},
    {scoresOut1, roiOut1, classesOut1, detectionOut1});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 6, 7});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 4});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type0);
  auto roi2 = model->addOperand(&type10);
  auto anchors2 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type7);
  auto param23 = model->addOperand(&type7);
  auto param24 = model->addOperand(&type7);
  auto param25 = model->addOperand(&type7);
  auto param26 = model->addOperand(&type8);
  auto param27 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type9);
  auto param29 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type7);
  auto param31 = model->addOperand(&type7);
  auto param32 = model->addOperand(&type8);
  auto scoresOut2 = model->addOperand(&type3);
  auto roiOut2 = model->addOperand(&type4);
  auto classesOut2 = model->addOperand(&type5);
  auto detectionOut2 = model->addOperand(&type6);
  // Phase 2, operations
  static float param22_init[] = {10.0f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {10.0f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static float param24_init[] = {5.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {5.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static bool8 param26_init[] = {false};
  model->setOperandValue(param26, param26_init, sizeof(bool8) * 1);
  static int32_t param27_init[] = {3};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float param30_init[] = {0.0f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {0.5f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 param32_init[] = {false};
  model->setOperandValue(param32, param32_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores2, roi2, anchors2, param22, param23, param24, param25, param26, param27, param28, param29, param30, param31, param32}, {scoresOut2, roiOut2, classesOut2, detectionOut2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, roi2, anchors2},
    {scoresOut2, roiOut2, classesOut2, detectionOut2});
  assert(model->isValid());
}

bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 6, 7});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type0);
  auto roi2 = model->addOperand(&type10);
  auto anchors2 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type7);
  auto param23 = model->addOperand(&type7);
  auto param24 = model->addOperand(&type7);
  auto param25 = model->addOperand(&type7);
  auto param26 = model->addOperand(&type8);
  auto param27 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type9);
  auto param29 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type7);
  auto param31 = model->addOperand(&type7);
  auto param32 = model->addOperand(&type8);
  auto scoresOut2 = model->addOperand(&type11);
  auto roiOut2 = model->addOperand(&type12);
  auto classesOut2 = model->addOperand(&type13);
  auto detectionOut2 = model->addOperand(&type14);
  // Phase 2, operations
  static float param22_init[] = {10.0f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {10.0f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static float param24_init[] = {5.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {5.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static bool8 param26_init[] = {false};
  model->setOperandValue(param26, param26_init, sizeof(bool8) * 1);
  static int32_t param27_init[] = {3};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float param30_init[] = {0.0f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {0.5f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 param32_init[] = {false};
  model->setOperandValue(param32, param32_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores2, roi2, anchors2, param22, param23, param24, param25, param26, param27, param28, param29, param30, param31, param32}, {scoresOut2, roiOut2, classesOut2, detectionOut2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, roi2, anchors2},
    {scoresOut2, roiOut2, classesOut2, detectionOut2});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 6, 7});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 4});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type0);
  auto roi2 = model->addOperand(&type10);
  auto anchors2 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type7);
  auto param23 = model->addOperand(&type7);
  auto param24 = model->addOperand(&type7);
  auto param25 = model->addOperand(&type7);
  auto param26 = model->addOperand(&type8);
  auto param27 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type9);
  auto param29 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type7);
  auto param31 = model->addOperand(&type7);
  auto param32 = model->addOperand(&type8);
  auto scoresOut2 = model->addOperand(&type3);
  auto roiOut2 = model->addOperand(&type4);
  auto classesOut2 = model->addOperand(&type5);
  auto detectionOut2 = model->addOperand(&type6);
  auto scores2_tmp = model->addOperand(&type0);
  auto dummy36 = model->addOperand(&type15);
  auto param80 = model->addOperand(&type9);
  auto roi2_tmp = model->addOperand(&type10);
  auto dummy37 = model->addOperand(&type15);
  auto param81 = model->addOperand(&type9);
  auto anchors2_tmp = model->addOperand(&type2);
  auto dummy38 = model->addOperand(&type15);
  auto param82 = model->addOperand(&type9);
  // Phase 2, operations
  static float param22_init[] = {10.0f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {10.0f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static float param24_init[] = {5.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {5.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static bool8 param26_init[] = {false};
  model->setOperandValue(param26, param26_init, sizeof(bool8) * 1);
  static int32_t param27_init[] = {3};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float param30_init[] = {0.0f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {0.5f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 param32_init[] = {false};
  model->setOperandValue(param32, param32_init, sizeof(bool8) * 1);
  static float dummy36_init[] = {0.0f};
  model->setOperandValue(dummy36, dummy36_init, sizeof(float) * 1);
  static int32_t param80_init[] = {0};
  model->setOperandValue(param80, param80_init, sizeof(int32_t) * 1);
  static float dummy37_init[] = {0.0f};
  model->setOperandValue(dummy37, dummy37_init, sizeof(float) * 1);
  static int32_t param81_init[] = {0};
  model->setOperandValue(param81, param81_init, sizeof(int32_t) * 1);
  static float dummy38_init[] = {0.0f};
  model->setOperandValue(dummy38, dummy38_init, sizeof(float) * 1);
  static int32_t param82_init[] = {0};
  model->setOperandValue(param82, param82_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores2_tmp, dummy36, param80}, {scores2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy37, param81}, {roi2});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors2_tmp, dummy38, param82}, {anchors2});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores2, roi2, anchors2, param22, param23, param24, param25, param26, param27, param28, param29, param30, param31, param32}, {scoresOut2, roiOut2, classesOut2, detectionOut2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2_tmp, roi2_tmp, anchors2_tmp},
    {scoresOut2, roiOut2, classesOut2, detectionOut2});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 6, 7});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type0);
  auto roi2 = model->addOperand(&type10);
  auto anchors2 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type7);
  auto param23 = model->addOperand(&type7);
  auto param24 = model->addOperand(&type7);
  auto param25 = model->addOperand(&type7);
  auto param26 = model->addOperand(&type8);
  auto param27 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type9);
  auto param29 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type7);
  auto param31 = model->addOperand(&type7);
  auto param32 = model->addOperand(&type8);
  auto scoresOut2 = model->addOperand(&type11);
  auto roiOut2 = model->addOperand(&type12);
  auto classesOut2 = model->addOperand(&type13);
  auto detectionOut2 = model->addOperand(&type14);
  auto scores2_tmp = model->addOperand(&type0);
  auto dummy39 = model->addOperand(&type15);
  auto param83 = model->addOperand(&type9);
  auto roi2_tmp = model->addOperand(&type10);
  auto dummy40 = model->addOperand(&type15);
  auto param84 = model->addOperand(&type9);
  auto anchors2_tmp = model->addOperand(&type2);
  auto dummy41 = model->addOperand(&type15);
  auto param85 = model->addOperand(&type9);
  // Phase 2, operations
  static float param22_init[] = {10.0f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {10.0f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static float param24_init[] = {5.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {5.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static bool8 param26_init[] = {false};
  model->setOperandValue(param26, param26_init, sizeof(bool8) * 1);
  static int32_t param27_init[] = {3};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float param30_init[] = {0.0f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {0.5f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 param32_init[] = {false};
  model->setOperandValue(param32, param32_init, sizeof(bool8) * 1);
  static float dummy39_init[] = {0.0f};
  model->setOperandValue(dummy39, dummy39_init, sizeof(float) * 1);
  static int32_t param83_init[] = {0};
  model->setOperandValue(param83, param83_init, sizeof(int32_t) * 1);
  static float dummy40_init[] = {0.0f};
  model->setOperandValue(dummy40, dummy40_init, sizeof(float) * 1);
  static int32_t param84_init[] = {0};
  model->setOperandValue(param84, param84_init, sizeof(int32_t) * 1);
  static float dummy41_init[] = {0.0f};
  model->setOperandValue(dummy41, dummy41_init, sizeof(float) * 1);
  static int32_t param85_init[] = {0};
  model->setOperandValue(param85, param85_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores2_tmp, dummy39, param83}, {scores2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy40, param84}, {roi2});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors2_tmp, dummy41, param85}, {anchors2});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores2, roi2, anchors2, param22, param23, param24, param25, param26, param27, param28, param29, param30, param31, param32}, {scoresOut2, roiOut2, classesOut2, detectionOut2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2_tmp, roi2_tmp, anchors2_tmp},
    {scoresOut2, roiOut2, classesOut2, detectionOut2});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 6, 7});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 4});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type0);
  auto roi2 = model->addOperand(&type10);
  auto anchors2 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type7);
  auto param23 = model->addOperand(&type7);
  auto param24 = model->addOperand(&type7);
  auto param25 = model->addOperand(&type7);
  auto param26 = model->addOperand(&type8);
  auto param27 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type9);
  auto param29 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type7);
  auto param31 = model->addOperand(&type7);
  auto param32 = model->addOperand(&type8);
  auto scoresOut2 = model->addOperand(&type3);
  auto roiOut2 = model->addOperand(&type4);
  auto classesOut2 = model->addOperand(&type5);
  auto detectionOut2 = model->addOperand(&type6);
  // Phase 2, operations
  static float param22_init[] = {10.0f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {10.0f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static float param24_init[] = {5.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {5.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static bool8 param26_init[] = {false};
  model->setOperandValue(param26, param26_init, sizeof(bool8) * 1);
  static int32_t param27_init[] = {3};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float param30_init[] = {0.0f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {0.5f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 param32_init[] = {false};
  model->setOperandValue(param32, param32_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores2, roi2, anchors2, param22, param23, param24, param25, param26, param27, param28, param29, param30, param31, param32}, {scoresOut2, roiOut2, classesOut2, detectionOut2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, roi2, anchors2},
    {scoresOut2, roiOut2, classesOut2, detectionOut2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 6, 7});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type0);
  auto roi2 = model->addOperand(&type10);
  auto anchors2 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type7);
  auto param23 = model->addOperand(&type7);
  auto param24 = model->addOperand(&type7);
  auto param25 = model->addOperand(&type7);
  auto param26 = model->addOperand(&type8);
  auto param27 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type9);
  auto param29 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type7);
  auto param31 = model->addOperand(&type7);
  auto param32 = model->addOperand(&type8);
  auto scoresOut2 = model->addOperand(&type11);
  auto roiOut2 = model->addOperand(&type12);
  auto classesOut2 = model->addOperand(&type13);
  auto detectionOut2 = model->addOperand(&type14);
  // Phase 2, operations
  static float param22_init[] = {10.0f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {10.0f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static float param24_init[] = {5.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {5.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static bool8 param26_init[] = {false};
  model->setOperandValue(param26, param26_init, sizeof(bool8) * 1);
  static int32_t param27_init[] = {3};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float param30_init[] = {0.0f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {0.5f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 param32_init[] = {false};
  model->setOperandValue(param32, param32_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores2, roi2, anchors2, param22, param23, param24, param25, param26, param27, param28, param29, param30, param31, param32}, {scoresOut2, roiOut2, classesOut2, detectionOut2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, roi2, anchors2},
    {scoresOut2, roiOut2, classesOut2, detectionOut2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 6, 7});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 4});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type0);
  auto roi2 = model->addOperand(&type10);
  auto anchors2 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type7);
  auto param23 = model->addOperand(&type7);
  auto param24 = model->addOperand(&type7);
  auto param25 = model->addOperand(&type7);
  auto param26 = model->addOperand(&type8);
  auto param27 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type9);
  auto param29 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type7);
  auto param31 = model->addOperand(&type7);
  auto param32 = model->addOperand(&type8);
  auto scoresOut2 = model->addOperand(&type3);
  auto roiOut2 = model->addOperand(&type4);
  auto classesOut2 = model->addOperand(&type5);
  auto detectionOut2 = model->addOperand(&type6);
  auto scores2_tmp = model->addOperand(&type0);
  auto dummy42 = model->addOperand(&type15);
  auto param86 = model->addOperand(&type9);
  auto roi2_tmp = model->addOperand(&type10);
  auto dummy43 = model->addOperand(&type15);
  auto param87 = model->addOperand(&type9);
  auto anchors2_tmp = model->addOperand(&type2);
  auto dummy44 = model->addOperand(&type15);
  auto param88 = model->addOperand(&type9);
  // Phase 2, operations
  static float param22_init[] = {10.0f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {10.0f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static float param24_init[] = {5.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {5.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static bool8 param26_init[] = {false};
  model->setOperandValue(param26, param26_init, sizeof(bool8) * 1);
  static int32_t param27_init[] = {3};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float param30_init[] = {0.0f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {0.5f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 param32_init[] = {false};
  model->setOperandValue(param32, param32_init, sizeof(bool8) * 1);
  static float dummy42_init[] = {0.0f};
  model->setOperandValue(dummy42, dummy42_init, sizeof(float) * 1);
  static int32_t param86_init[] = {0};
  model->setOperandValue(param86, param86_init, sizeof(int32_t) * 1);
  static float dummy43_init[] = {0.0f};
  model->setOperandValue(dummy43, dummy43_init, sizeof(float) * 1);
  static int32_t param87_init[] = {0};
  model->setOperandValue(param87, param87_init, sizeof(int32_t) * 1);
  static float dummy44_init[] = {0.0f};
  model->setOperandValue(dummy44, dummy44_init, sizeof(float) * 1);
  static int32_t param88_init[] = {0};
  model->setOperandValue(param88, param88_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores2_tmp, dummy42, param86}, {scores2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy43, param87}, {roi2});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors2_tmp, dummy44, param88}, {anchors2});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores2, roi2, anchors2, param22, param23, param24, param25, param26, param27, param28, param29, param30, param31, param32}, {scoresOut2, roiOut2, classesOut2, detectionOut2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2_tmp, roi2_tmp, anchors2_tmp},
    {scoresOut2, roiOut2, classesOut2, detectionOut2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 6, 7});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type0);
  auto roi2 = model->addOperand(&type10);
  auto anchors2 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type7);
  auto param23 = model->addOperand(&type7);
  auto param24 = model->addOperand(&type7);
  auto param25 = model->addOperand(&type7);
  auto param26 = model->addOperand(&type8);
  auto param27 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type9);
  auto param29 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type7);
  auto param31 = model->addOperand(&type7);
  auto param32 = model->addOperand(&type8);
  auto scoresOut2 = model->addOperand(&type11);
  auto roiOut2 = model->addOperand(&type12);
  auto classesOut2 = model->addOperand(&type13);
  auto detectionOut2 = model->addOperand(&type14);
  auto scores2_tmp = model->addOperand(&type0);
  auto dummy45 = model->addOperand(&type15);
  auto param89 = model->addOperand(&type9);
  auto roi2_tmp = model->addOperand(&type10);
  auto dummy46 = model->addOperand(&type15);
  auto param90 = model->addOperand(&type9);
  auto anchors2_tmp = model->addOperand(&type2);
  auto dummy47 = model->addOperand(&type15);
  auto param91 = model->addOperand(&type9);
  // Phase 2, operations
  static float param22_init[] = {10.0f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static float param23_init[] = {10.0f};
  model->setOperandValue(param23, param23_init, sizeof(float) * 1);
  static float param24_init[] = {5.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {5.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static bool8 param26_init[] = {false};
  model->setOperandValue(param26, param26_init, sizeof(bool8) * 1);
  static int32_t param27_init[] = {3};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float param30_init[] = {0.0f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static float param31_init[] = {0.5f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static bool8 param32_init[] = {false};
  model->setOperandValue(param32, param32_init, sizeof(bool8) * 1);
  static float dummy45_init[] = {0.0f};
  model->setOperandValue(dummy45, dummy45_init, sizeof(float) * 1);
  static int32_t param89_init[] = {0};
  model->setOperandValue(param89, param89_init, sizeof(int32_t) * 1);
  static float dummy46_init[] = {0.0f};
  model->setOperandValue(dummy46, dummy46_init, sizeof(float) * 1);
  static int32_t param90_init[] = {0};
  model->setOperandValue(param90, param90_init, sizeof(int32_t) * 1);
  static float dummy47_init[] = {0.0f};
  model->setOperandValue(dummy47, dummy47_init, sizeof(float) * 1);
  static int32_t param91_init[] = {0};
  model->setOperandValue(param91, param91_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores2_tmp, dummy45, param89}, {scores2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy46, param90}, {roi2});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors2_tmp, dummy47, param91}, {anchors2});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores2, roi2, anchors2, param22, param23, param24, param25, param26, param27, param28, param29, param30, param31, param32}, {scoresOut2, roiOut2, classesOut2, detectionOut2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2_tmp, roi2_tmp, anchors2_tmp},
    {scoresOut2, roiOut2, classesOut2, detectionOut2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_float16_2(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type17(Type::FLOAT16, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 3, 4});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 6, 3});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 3});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 6, 7});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type20);
  auto roi2 = model->addOperand(&type28);
  auto anchors2 = model->addOperand(&type16);
  auto param22 = model->addOperand(&type17);
  auto param23 = model->addOperand(&type17);
  auto param24 = model->addOperand(&type17);
  auto param25 = model->addOperand(&type17);
  auto param26 = model->addOperand(&type8);
  auto param27 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type9);
  auto param29 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type17);
  auto param31 = model->addOperand(&type17);
  auto param32 = model->addOperand(&type8);
  auto scoresOut2 = model->addOperand(&type21);
  auto roiOut2 = model->addOperand(&type19);
  auto classesOut2 = model->addOperand(&type5);
  auto detectionOut2 = model->addOperand(&type6);
  // Phase 2, operations
  static _Float16 param22_init[] = {10.0f};
  model->setOperandValue(param22, param22_init, sizeof(_Float16) * 1);
  static _Float16 param23_init[] = {10.0f};
  model->setOperandValue(param23, param23_init, sizeof(_Float16) * 1);
  static _Float16 param24_init[] = {5.0f};
  model->setOperandValue(param24, param24_init, sizeof(_Float16) * 1);
  static _Float16 param25_init[] = {5.0f};
  model->setOperandValue(param25, param25_init, sizeof(_Float16) * 1);
  static bool8 param26_init[] = {false};
  model->setOperandValue(param26, param26_init, sizeof(bool8) * 1);
  static int32_t param27_init[] = {3};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static _Float16 param30_init[] = {0.0f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static _Float16 param31_init[] = {0.5f};
  model->setOperandValue(param31, param31_init, sizeof(_Float16) * 1);
  static bool8 param32_init[] = {false};
  model->setOperandValue(param32, param32_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores2, roi2, anchors2, param22, param23, param24, param25, param26, param27, param28, param29, param30, param31, param32}, {scoresOut2, roiOut2, classesOut2, detectionOut2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, roi2, anchors2},
    {scoresOut2, roiOut2, classesOut2, detectionOut2});
  assert(model->isValid());
}

bool is_ignored_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_float16_dynamic_output_shape_2(Model *model) {
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type16(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type17(Type::FLOAT16, {});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 6, 3});
  OperandType type22(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 6, 7});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type20);
  auto roi2 = model->addOperand(&type28);
  auto anchors2 = model->addOperand(&type16);
  auto param22 = model->addOperand(&type17);
  auto param23 = model->addOperand(&type17);
  auto param24 = model->addOperand(&type17);
  auto param25 = model->addOperand(&type17);
  auto param26 = model->addOperand(&type8);
  auto param27 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type9);
  auto param29 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type17);
  auto param31 = model->addOperand(&type17);
  auto param32 = model->addOperand(&type8);
  auto scoresOut2 = model->addOperand(&type22);
  auto roiOut2 = model->addOperand(&type23);
  auto classesOut2 = model->addOperand(&type13);
  auto detectionOut2 = model->addOperand(&type14);
  // Phase 2, operations
  static _Float16 param22_init[] = {10.0f};
  model->setOperandValue(param22, param22_init, sizeof(_Float16) * 1);
  static _Float16 param23_init[] = {10.0f};
  model->setOperandValue(param23, param23_init, sizeof(_Float16) * 1);
  static _Float16 param24_init[] = {5.0f};
  model->setOperandValue(param24, param24_init, sizeof(_Float16) * 1);
  static _Float16 param25_init[] = {5.0f};
  model->setOperandValue(param25, param25_init, sizeof(_Float16) * 1);
  static bool8 param26_init[] = {false};
  model->setOperandValue(param26, param26_init, sizeof(bool8) * 1);
  static int32_t param27_init[] = {3};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static _Float16 param30_init[] = {0.0f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static _Float16 param31_init[] = {0.5f};
  model->setOperandValue(param31, param31_init, sizeof(_Float16) * 1);
  static bool8 param32_init[] = {false};
  model->setOperandValue(param32, param32_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores2, roi2, anchors2, param22, param23, param24, param25, param26, param27, param28, param29, param30, param31, param32}, {scoresOut2, roiOut2, classesOut2, detectionOut2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2, roi2, anchors2},
    {scoresOut2, roiOut2, classesOut2, detectionOut2});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type17(Type::FLOAT16, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 3, 4});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 3});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 6, 3});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type27(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type29(Type::TENSOR_FLOAT16, {1, 6, 7});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type24);
  auto roi2 = model->addOperand(&type29);
  auto anchors2 = model->addOperand(&type27);
  auto param22 = model->addOperand(&type17);
  auto param23 = model->addOperand(&type17);
  auto param24 = model->addOperand(&type17);
  auto param25 = model->addOperand(&type17);
  auto param26 = model->addOperand(&type8);
  auto param27 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type9);
  auto param29 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type17);
  auto param31 = model->addOperand(&type17);
  auto param32 = model->addOperand(&type8);
  auto scoresOut2 = model->addOperand(&type21);
  auto roiOut2 = model->addOperand(&type19);
  auto classesOut2 = model->addOperand(&type5);
  auto detectionOut2 = model->addOperand(&type6);
  auto scores2_tmp = model->addOperand(&type24);
  auto dummy48 = model->addOperand(&type25);
  auto param92 = model->addOperand(&type9);
  auto roi2_tmp = model->addOperand(&type29);
  auto dummy49 = model->addOperand(&type25);
  auto param93 = model->addOperand(&type9);
  auto anchors2_tmp = model->addOperand(&type27);
  auto dummy50 = model->addOperand(&type25);
  auto param94 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 param22_init[] = {10.0f};
  model->setOperandValue(param22, param22_init, sizeof(_Float16) * 1);
  static _Float16 param23_init[] = {10.0f};
  model->setOperandValue(param23, param23_init, sizeof(_Float16) * 1);
  static _Float16 param24_init[] = {5.0f};
  model->setOperandValue(param24, param24_init, sizeof(_Float16) * 1);
  static _Float16 param25_init[] = {5.0f};
  model->setOperandValue(param25, param25_init, sizeof(_Float16) * 1);
  static bool8 param26_init[] = {false};
  model->setOperandValue(param26, param26_init, sizeof(bool8) * 1);
  static int32_t param27_init[] = {3};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static _Float16 param30_init[] = {0.0f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static _Float16 param31_init[] = {0.5f};
  model->setOperandValue(param31, param31_init, sizeof(_Float16) * 1);
  static bool8 param32_init[] = {false};
  model->setOperandValue(param32, param32_init, sizeof(bool8) * 1);
  static _Float16 dummy48_init[] = {0.0f};
  model->setOperandValue(dummy48, dummy48_init, sizeof(_Float16) * 1);
  static int32_t param92_init[] = {0};
  model->setOperandValue(param92, param92_init, sizeof(int32_t) * 1);
  static _Float16 dummy49_init[] = {0.0f};
  model->setOperandValue(dummy49, dummy49_init, sizeof(_Float16) * 1);
  static int32_t param93_init[] = {0};
  model->setOperandValue(param93, param93_init, sizeof(int32_t) * 1);
  static _Float16 dummy50_init[] = {0.0f};
  model->setOperandValue(dummy50, dummy50_init, sizeof(_Float16) * 1);
  static int32_t param94_init[] = {0};
  model->setOperandValue(param94, param94_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores2_tmp, dummy48, param92}, {scores2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy49, param93}, {roi2});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors2_tmp, dummy50, param94}, {anchors2});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores2, roi2, anchors2, param22, param23, param24, param25, param26, param27, param28, param29, param30, param31, param32}, {scoresOut2, roiOut2, classesOut2, detectionOut2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2_tmp, roi2_tmp, anchors2_tmp},
    {scoresOut2, roiOut2, classesOut2, detectionOut2});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type17(Type::FLOAT16, {});
  OperandType type22(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 6, 3});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type27(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type29(Type::TENSOR_FLOAT16, {1, 6, 7});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores2 = model->addOperand(&type24);
  auto roi2 = model->addOperand(&type29);
  auto anchors2 = model->addOperand(&type27);
  auto param22 = model->addOperand(&type17);
  auto param23 = model->addOperand(&type17);
  auto param24 = model->addOperand(&type17);
  auto param25 = model->addOperand(&type17);
  auto param26 = model->addOperand(&type8);
  auto param27 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type9);
  auto param29 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type17);
  auto param31 = model->addOperand(&type17);
  auto param32 = model->addOperand(&type8);
  auto scoresOut2 = model->addOperand(&type22);
  auto roiOut2 = model->addOperand(&type23);
  auto classesOut2 = model->addOperand(&type13);
  auto detectionOut2 = model->addOperand(&type14);
  auto scores2_tmp = model->addOperand(&type24);
  auto dummy51 = model->addOperand(&type25);
  auto param95 = model->addOperand(&type9);
  auto roi2_tmp = model->addOperand(&type29);
  auto dummy52 = model->addOperand(&type25);
  auto param96 = model->addOperand(&type9);
  auto anchors2_tmp = model->addOperand(&type27);
  auto dummy53 = model->addOperand(&type25);
  auto param97 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 param22_init[] = {10.0f};
  model->setOperandValue(param22, param22_init, sizeof(_Float16) * 1);
  static _Float16 param23_init[] = {10.0f};
  model->setOperandValue(param23, param23_init, sizeof(_Float16) * 1);
  static _Float16 param24_init[] = {5.0f};
  model->setOperandValue(param24, param24_init, sizeof(_Float16) * 1);
  static _Float16 param25_init[] = {5.0f};
  model->setOperandValue(param25, param25_init, sizeof(_Float16) * 1);
  static bool8 param26_init[] = {false};
  model->setOperandValue(param26, param26_init, sizeof(bool8) * 1);
  static int32_t param27_init[] = {3};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {1};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static _Float16 param30_init[] = {0.0f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static _Float16 param31_init[] = {0.5f};
  model->setOperandValue(param31, param31_init, sizeof(_Float16) * 1);
  static bool8 param32_init[] = {false};
  model->setOperandValue(param32, param32_init, sizeof(bool8) * 1);
  static _Float16 dummy51_init[] = {0.0f};
  model->setOperandValue(dummy51, dummy51_init, sizeof(_Float16) * 1);
  static int32_t param95_init[] = {0};
  model->setOperandValue(param95, param95_init, sizeof(int32_t) * 1);
  static _Float16 dummy52_init[] = {0.0f};
  model->setOperandValue(dummy52, dummy52_init, sizeof(_Float16) * 1);
  static int32_t param96_init[] = {0};
  model->setOperandValue(param96, param96_init, sizeof(int32_t) * 1);
  static _Float16 dummy53_init[] = {0.0f};
  model->setOperandValue(dummy53, dummy53_init, sizeof(_Float16) * 1);
  static int32_t param97_init[] = {0};
  model->setOperandValue(param97, param97_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores2_tmp, dummy51, param95}, {scores2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy52, param96}, {roi2});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors2_tmp, dummy53, param97}, {anchors2});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores2, roi2, anchors2, param22, param23, param24, param25, param26, param27, param28, param29, param30, param31, param32}, {scoresOut2, roiOut2, classesOut2, detectionOut2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores2_tmp, roi2_tmp, anchors2_tmp},
    {scoresOut2, roiOut2, classesOut2, detectionOut2});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 6, 7});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 4});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores3 = model->addOperand(&type0);
  auto roi3 = model->addOperand(&type10);
  auto anchors3 = model->addOperand(&type2);
  auto param33 = model->addOperand(&type7);
  auto param34 = model->addOperand(&type7);
  auto param35 = model->addOperand(&type7);
  auto param36 = model->addOperand(&type7);
  auto param37 = model->addOperand(&type8);
  auto param38 = model->addOperand(&type9);
  auto param39 = model->addOperand(&type9);
  auto param40 = model->addOperand(&type9);
  auto param41 = model->addOperand(&type7);
  auto param42 = model->addOperand(&type7);
  auto param43 = model->addOperand(&type8);
  auto scoresOut3 = model->addOperand(&type3);
  auto roiOut3 = model->addOperand(&type4);
  auto classesOut3 = model->addOperand(&type5);
  auto detectionOut3 = model->addOperand(&type6);
  // Phase 2, operations
  static float param33_init[] = {10.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {10.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static float param35_init[] = {5.0f};
  model->setOperandValue(param35, param35_init, sizeof(float) * 1);
  static float param36_init[] = {5.0f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static bool8 param37_init[] = {false};
  model->setOperandValue(param37, param37_init, sizeof(bool8) * 1);
  static int32_t param38_init[] = {3};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {1};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {1};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float param41_init[] = {0.0f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  static float param42_init[] = {0.5f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static bool8 param43_init[] = {true};
  model->setOperandValue(param43, param43_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores3, roi3, anchors3, param33, param34, param35, param36, param37, param38, param39, param40, param41, param42, param43}, {scoresOut3, roiOut3, classesOut3, detectionOut3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores3, roi3, anchors3},
    {scoresOut3, roiOut3, classesOut3, detectionOut3});
  assert(model->isValid());
}

bool is_ignored_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 6, 7});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores3 = model->addOperand(&type0);
  auto roi3 = model->addOperand(&type10);
  auto anchors3 = model->addOperand(&type2);
  auto param33 = model->addOperand(&type7);
  auto param34 = model->addOperand(&type7);
  auto param35 = model->addOperand(&type7);
  auto param36 = model->addOperand(&type7);
  auto param37 = model->addOperand(&type8);
  auto param38 = model->addOperand(&type9);
  auto param39 = model->addOperand(&type9);
  auto param40 = model->addOperand(&type9);
  auto param41 = model->addOperand(&type7);
  auto param42 = model->addOperand(&type7);
  auto param43 = model->addOperand(&type8);
  auto scoresOut3 = model->addOperand(&type11);
  auto roiOut3 = model->addOperand(&type12);
  auto classesOut3 = model->addOperand(&type13);
  auto detectionOut3 = model->addOperand(&type14);
  // Phase 2, operations
  static float param33_init[] = {10.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {10.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static float param35_init[] = {5.0f};
  model->setOperandValue(param35, param35_init, sizeof(float) * 1);
  static float param36_init[] = {5.0f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static bool8 param37_init[] = {false};
  model->setOperandValue(param37, param37_init, sizeof(bool8) * 1);
  static int32_t param38_init[] = {3};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {1};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {1};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float param41_init[] = {0.0f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  static float param42_init[] = {0.5f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static bool8 param43_init[] = {true};
  model->setOperandValue(param43, param43_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores3, roi3, anchors3, param33, param34, param35, param36, param37, param38, param39, param40, param41, param42, param43}, {scoresOut3, roiOut3, classesOut3, detectionOut3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores3, roi3, anchors3},
    {scoresOut3, roiOut3, classesOut3, detectionOut3});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 6, 7});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 4});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores3 = model->addOperand(&type0);
  auto roi3 = model->addOperand(&type10);
  auto anchors3 = model->addOperand(&type2);
  auto param33 = model->addOperand(&type7);
  auto param34 = model->addOperand(&type7);
  auto param35 = model->addOperand(&type7);
  auto param36 = model->addOperand(&type7);
  auto param37 = model->addOperand(&type8);
  auto param38 = model->addOperand(&type9);
  auto param39 = model->addOperand(&type9);
  auto param40 = model->addOperand(&type9);
  auto param41 = model->addOperand(&type7);
  auto param42 = model->addOperand(&type7);
  auto param43 = model->addOperand(&type8);
  auto scoresOut3 = model->addOperand(&type3);
  auto roiOut3 = model->addOperand(&type4);
  auto classesOut3 = model->addOperand(&type5);
  auto detectionOut3 = model->addOperand(&type6);
  auto scores3_tmp = model->addOperand(&type0);
  auto dummy54 = model->addOperand(&type15);
  auto param98 = model->addOperand(&type9);
  auto roi3_tmp = model->addOperand(&type10);
  auto dummy55 = model->addOperand(&type15);
  auto param99 = model->addOperand(&type9);
  auto anchors3_tmp = model->addOperand(&type2);
  auto dummy56 = model->addOperand(&type15);
  auto param100 = model->addOperand(&type9);
  // Phase 2, operations
  static float param33_init[] = {10.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {10.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static float param35_init[] = {5.0f};
  model->setOperandValue(param35, param35_init, sizeof(float) * 1);
  static float param36_init[] = {5.0f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static bool8 param37_init[] = {false};
  model->setOperandValue(param37, param37_init, sizeof(bool8) * 1);
  static int32_t param38_init[] = {3};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {1};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {1};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float param41_init[] = {0.0f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  static float param42_init[] = {0.5f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static bool8 param43_init[] = {true};
  model->setOperandValue(param43, param43_init, sizeof(bool8) * 1);
  static float dummy54_init[] = {0.0f};
  model->setOperandValue(dummy54, dummy54_init, sizeof(float) * 1);
  static int32_t param98_init[] = {0};
  model->setOperandValue(param98, param98_init, sizeof(int32_t) * 1);
  static float dummy55_init[] = {0.0f};
  model->setOperandValue(dummy55, dummy55_init, sizeof(float) * 1);
  static int32_t param99_init[] = {0};
  model->setOperandValue(param99, param99_init, sizeof(int32_t) * 1);
  static float dummy56_init[] = {0.0f};
  model->setOperandValue(dummy56, dummy56_init, sizeof(float) * 1);
  static int32_t param100_init[] = {0};
  model->setOperandValue(param100, param100_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores3_tmp, dummy54, param98}, {scores3});
  model->addOperation(ANEURALNETWORKS_ADD, {roi3_tmp, dummy55, param99}, {roi3});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors3_tmp, dummy56, param100}, {anchors3});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores3, roi3, anchors3, param33, param34, param35, param36, param37, param38, param39, param40, param41, param42, param43}, {scoresOut3, roiOut3, classesOut3, detectionOut3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores3_tmp, roi3_tmp, anchors3_tmp},
    {scoresOut3, roiOut3, classesOut3, detectionOut3});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 6, 7});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores3 = model->addOperand(&type0);
  auto roi3 = model->addOperand(&type10);
  auto anchors3 = model->addOperand(&type2);
  auto param33 = model->addOperand(&type7);
  auto param34 = model->addOperand(&type7);
  auto param35 = model->addOperand(&type7);
  auto param36 = model->addOperand(&type7);
  auto param37 = model->addOperand(&type8);
  auto param38 = model->addOperand(&type9);
  auto param39 = model->addOperand(&type9);
  auto param40 = model->addOperand(&type9);
  auto param41 = model->addOperand(&type7);
  auto param42 = model->addOperand(&type7);
  auto param43 = model->addOperand(&type8);
  auto scoresOut3 = model->addOperand(&type11);
  auto roiOut3 = model->addOperand(&type12);
  auto classesOut3 = model->addOperand(&type13);
  auto detectionOut3 = model->addOperand(&type14);
  auto scores3_tmp = model->addOperand(&type0);
  auto dummy57 = model->addOperand(&type15);
  auto param101 = model->addOperand(&type9);
  auto roi3_tmp = model->addOperand(&type10);
  auto dummy58 = model->addOperand(&type15);
  auto param102 = model->addOperand(&type9);
  auto anchors3_tmp = model->addOperand(&type2);
  auto dummy59 = model->addOperand(&type15);
  auto param103 = model->addOperand(&type9);
  // Phase 2, operations
  static float param33_init[] = {10.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {10.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static float param35_init[] = {5.0f};
  model->setOperandValue(param35, param35_init, sizeof(float) * 1);
  static float param36_init[] = {5.0f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static bool8 param37_init[] = {false};
  model->setOperandValue(param37, param37_init, sizeof(bool8) * 1);
  static int32_t param38_init[] = {3};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {1};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {1};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float param41_init[] = {0.0f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  static float param42_init[] = {0.5f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static bool8 param43_init[] = {true};
  model->setOperandValue(param43, param43_init, sizeof(bool8) * 1);
  static float dummy57_init[] = {0.0f};
  model->setOperandValue(dummy57, dummy57_init, sizeof(float) * 1);
  static int32_t param101_init[] = {0};
  model->setOperandValue(param101, param101_init, sizeof(int32_t) * 1);
  static float dummy58_init[] = {0.0f};
  model->setOperandValue(dummy58, dummy58_init, sizeof(float) * 1);
  static int32_t param102_init[] = {0};
  model->setOperandValue(param102, param102_init, sizeof(int32_t) * 1);
  static float dummy59_init[] = {0.0f};
  model->setOperandValue(dummy59, dummy59_init, sizeof(float) * 1);
  static int32_t param103_init[] = {0};
  model->setOperandValue(param103, param103_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores3_tmp, dummy57, param101}, {scores3});
  model->addOperation(ANEURALNETWORKS_ADD, {roi3_tmp, dummy58, param102}, {roi3});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors3_tmp, dummy59, param103}, {anchors3});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores3, roi3, anchors3, param33, param34, param35, param36, param37, param38, param39, param40, param41, param42, param43}, {scoresOut3, roiOut3, classesOut3, detectionOut3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores3_tmp, roi3_tmp, anchors3_tmp},
    {scoresOut3, roiOut3, classesOut3, detectionOut3});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_relaxed_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 6, 7});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 4});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores3 = model->addOperand(&type0);
  auto roi3 = model->addOperand(&type10);
  auto anchors3 = model->addOperand(&type2);
  auto param33 = model->addOperand(&type7);
  auto param34 = model->addOperand(&type7);
  auto param35 = model->addOperand(&type7);
  auto param36 = model->addOperand(&type7);
  auto param37 = model->addOperand(&type8);
  auto param38 = model->addOperand(&type9);
  auto param39 = model->addOperand(&type9);
  auto param40 = model->addOperand(&type9);
  auto param41 = model->addOperand(&type7);
  auto param42 = model->addOperand(&type7);
  auto param43 = model->addOperand(&type8);
  auto scoresOut3 = model->addOperand(&type3);
  auto roiOut3 = model->addOperand(&type4);
  auto classesOut3 = model->addOperand(&type5);
  auto detectionOut3 = model->addOperand(&type6);
  // Phase 2, operations
  static float param33_init[] = {10.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {10.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static float param35_init[] = {5.0f};
  model->setOperandValue(param35, param35_init, sizeof(float) * 1);
  static float param36_init[] = {5.0f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static bool8 param37_init[] = {false};
  model->setOperandValue(param37, param37_init, sizeof(bool8) * 1);
  static int32_t param38_init[] = {3};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {1};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {1};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float param41_init[] = {0.0f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  static float param42_init[] = {0.5f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static bool8 param43_init[] = {true};
  model->setOperandValue(param43, param43_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores3, roi3, anchors3, param33, param34, param35, param36, param37, param38, param39, param40, param41, param42, param43}, {scoresOut3, roiOut3, classesOut3, detectionOut3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores3, roi3, anchors3},
    {scoresOut3, roiOut3, classesOut3, detectionOut3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 6, 7});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores3 = model->addOperand(&type0);
  auto roi3 = model->addOperand(&type10);
  auto anchors3 = model->addOperand(&type2);
  auto param33 = model->addOperand(&type7);
  auto param34 = model->addOperand(&type7);
  auto param35 = model->addOperand(&type7);
  auto param36 = model->addOperand(&type7);
  auto param37 = model->addOperand(&type8);
  auto param38 = model->addOperand(&type9);
  auto param39 = model->addOperand(&type9);
  auto param40 = model->addOperand(&type9);
  auto param41 = model->addOperand(&type7);
  auto param42 = model->addOperand(&type7);
  auto param43 = model->addOperand(&type8);
  auto scoresOut3 = model->addOperand(&type11);
  auto roiOut3 = model->addOperand(&type12);
  auto classesOut3 = model->addOperand(&type13);
  auto detectionOut3 = model->addOperand(&type14);
  // Phase 2, operations
  static float param33_init[] = {10.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {10.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static float param35_init[] = {5.0f};
  model->setOperandValue(param35, param35_init, sizeof(float) * 1);
  static float param36_init[] = {5.0f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static bool8 param37_init[] = {false};
  model->setOperandValue(param37, param37_init, sizeof(bool8) * 1);
  static int32_t param38_init[] = {3};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {1};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {1};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float param41_init[] = {0.0f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  static float param42_init[] = {0.5f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static bool8 param43_init[] = {true};
  model->setOperandValue(param43, param43_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores3, roi3, anchors3, param33, param34, param35, param36, param37, param38, param39, param40, param41, param42, param43}, {scoresOut3, roiOut3, classesOut3, detectionOut3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores3, roi3, anchors3},
    {scoresOut3, roiOut3, classesOut3, detectionOut3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 6, 7});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 3, 4});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores3 = model->addOperand(&type0);
  auto roi3 = model->addOperand(&type10);
  auto anchors3 = model->addOperand(&type2);
  auto param33 = model->addOperand(&type7);
  auto param34 = model->addOperand(&type7);
  auto param35 = model->addOperand(&type7);
  auto param36 = model->addOperand(&type7);
  auto param37 = model->addOperand(&type8);
  auto param38 = model->addOperand(&type9);
  auto param39 = model->addOperand(&type9);
  auto param40 = model->addOperand(&type9);
  auto param41 = model->addOperand(&type7);
  auto param42 = model->addOperand(&type7);
  auto param43 = model->addOperand(&type8);
  auto scoresOut3 = model->addOperand(&type3);
  auto roiOut3 = model->addOperand(&type4);
  auto classesOut3 = model->addOperand(&type5);
  auto detectionOut3 = model->addOperand(&type6);
  auto scores3_tmp = model->addOperand(&type0);
  auto dummy60 = model->addOperand(&type15);
  auto param104 = model->addOperand(&type9);
  auto roi3_tmp = model->addOperand(&type10);
  auto dummy61 = model->addOperand(&type15);
  auto param105 = model->addOperand(&type9);
  auto anchors3_tmp = model->addOperand(&type2);
  auto dummy62 = model->addOperand(&type15);
  auto param106 = model->addOperand(&type9);
  // Phase 2, operations
  static float param33_init[] = {10.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {10.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static float param35_init[] = {5.0f};
  model->setOperandValue(param35, param35_init, sizeof(float) * 1);
  static float param36_init[] = {5.0f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static bool8 param37_init[] = {false};
  model->setOperandValue(param37, param37_init, sizeof(bool8) * 1);
  static int32_t param38_init[] = {3};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {1};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {1};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float param41_init[] = {0.0f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  static float param42_init[] = {0.5f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static bool8 param43_init[] = {true};
  model->setOperandValue(param43, param43_init, sizeof(bool8) * 1);
  static float dummy60_init[] = {0.0f};
  model->setOperandValue(dummy60, dummy60_init, sizeof(float) * 1);
  static int32_t param104_init[] = {0};
  model->setOperandValue(param104, param104_init, sizeof(int32_t) * 1);
  static float dummy61_init[] = {0.0f};
  model->setOperandValue(dummy61, dummy61_init, sizeof(float) * 1);
  static int32_t param105_init[] = {0};
  model->setOperandValue(param105, param105_init, sizeof(int32_t) * 1);
  static float dummy62_init[] = {0.0f};
  model->setOperandValue(dummy62, dummy62_init, sizeof(float) * 1);
  static int32_t param106_init[] = {0};
  model->setOperandValue(param106, param106_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores3_tmp, dummy60, param104}, {scores3});
  model->addOperation(ANEURALNETWORKS_ADD, {roi3_tmp, dummy61, param105}, {roi3});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors3_tmp, dummy62, param106}, {anchors3});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores3, roi3, anchors3, param33, param34, param35, param36, param37, param38, param39, param40, param41, param42, param43}, {scoresOut3, roiOut3, classesOut3, detectionOut3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores3_tmp, roi3_tmp, anchors3_tmp},
    {scoresOut3, roiOut3, classesOut3, detectionOut3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {1, 6, 3});
  OperandType type10(Type::TENSOR_FLOAT32, {1, 6, 7});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type15(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type7(Type::FLOAT32, {});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores3 = model->addOperand(&type0);
  auto roi3 = model->addOperand(&type10);
  auto anchors3 = model->addOperand(&type2);
  auto param33 = model->addOperand(&type7);
  auto param34 = model->addOperand(&type7);
  auto param35 = model->addOperand(&type7);
  auto param36 = model->addOperand(&type7);
  auto param37 = model->addOperand(&type8);
  auto param38 = model->addOperand(&type9);
  auto param39 = model->addOperand(&type9);
  auto param40 = model->addOperand(&type9);
  auto param41 = model->addOperand(&type7);
  auto param42 = model->addOperand(&type7);
  auto param43 = model->addOperand(&type8);
  auto scoresOut3 = model->addOperand(&type11);
  auto roiOut3 = model->addOperand(&type12);
  auto classesOut3 = model->addOperand(&type13);
  auto detectionOut3 = model->addOperand(&type14);
  auto scores3_tmp = model->addOperand(&type0);
  auto dummy63 = model->addOperand(&type15);
  auto param107 = model->addOperand(&type9);
  auto roi3_tmp = model->addOperand(&type10);
  auto dummy64 = model->addOperand(&type15);
  auto param108 = model->addOperand(&type9);
  auto anchors3_tmp = model->addOperand(&type2);
  auto dummy65 = model->addOperand(&type15);
  auto param109 = model->addOperand(&type9);
  // Phase 2, operations
  static float param33_init[] = {10.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {10.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static float param35_init[] = {5.0f};
  model->setOperandValue(param35, param35_init, sizeof(float) * 1);
  static float param36_init[] = {5.0f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static bool8 param37_init[] = {false};
  model->setOperandValue(param37, param37_init, sizeof(bool8) * 1);
  static int32_t param38_init[] = {3};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {1};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {1};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float param41_init[] = {0.0f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  static float param42_init[] = {0.5f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static bool8 param43_init[] = {true};
  model->setOperandValue(param43, param43_init, sizeof(bool8) * 1);
  static float dummy63_init[] = {0.0f};
  model->setOperandValue(dummy63, dummy63_init, sizeof(float) * 1);
  static int32_t param107_init[] = {0};
  model->setOperandValue(param107, param107_init, sizeof(int32_t) * 1);
  static float dummy64_init[] = {0.0f};
  model->setOperandValue(dummy64, dummy64_init, sizeof(float) * 1);
  static int32_t param108_init[] = {0};
  model->setOperandValue(param108, param108_init, sizeof(int32_t) * 1);
  static float dummy65_init[] = {0.0f};
  model->setOperandValue(dummy65, dummy65_init, sizeof(float) * 1);
  static int32_t param109_init[] = {0};
  model->setOperandValue(param109, param109_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores3_tmp, dummy63, param107}, {scores3});
  model->addOperation(ANEURALNETWORKS_ADD, {roi3_tmp, dummy64, param108}, {roi3});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors3_tmp, dummy65, param109}, {anchors3});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores3, roi3, anchors3, param33, param34, param35, param36, param37, param38, param39, param40, param41, param42, param43}, {scoresOut3, roiOut3, classesOut3, detectionOut3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores3_tmp, roi3_tmp, anchors3_tmp},
    {scoresOut3, roiOut3, classesOut3, detectionOut3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_float16_3(Model *model) {
  OperandType type16(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type17(Type::FLOAT16, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 3, 4});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 6, 3});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 3});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 6, 7});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores3 = model->addOperand(&type20);
  auto roi3 = model->addOperand(&type28);
  auto anchors3 = model->addOperand(&type16);
  auto param33 = model->addOperand(&type17);
  auto param34 = model->addOperand(&type17);
  auto param35 = model->addOperand(&type17);
  auto param36 = model->addOperand(&type17);
  auto param37 = model->addOperand(&type8);
  auto param38 = model->addOperand(&type9);
  auto param39 = model->addOperand(&type9);
  auto param40 = model->addOperand(&type9);
  auto param41 = model->addOperand(&type17);
  auto param42 = model->addOperand(&type17);
  auto param43 = model->addOperand(&type8);
  auto scoresOut3 = model->addOperand(&type21);
  auto roiOut3 = model->addOperand(&type19);
  auto classesOut3 = model->addOperand(&type5);
  auto detectionOut3 = model->addOperand(&type6);
  // Phase 2, operations
  static _Float16 param33_init[] = {10.0f};
  model->setOperandValue(param33, param33_init, sizeof(_Float16) * 1);
  static _Float16 param34_init[] = {10.0f};
  model->setOperandValue(param34, param34_init, sizeof(_Float16) * 1);
  static _Float16 param35_init[] = {5.0f};
  model->setOperandValue(param35, param35_init, sizeof(_Float16) * 1);
  static _Float16 param36_init[] = {5.0f};
  model->setOperandValue(param36, param36_init, sizeof(_Float16) * 1);
  static bool8 param37_init[] = {false};
  model->setOperandValue(param37, param37_init, sizeof(bool8) * 1);
  static int32_t param38_init[] = {3};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {1};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {1};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static _Float16 param41_init[] = {0.0f};
  model->setOperandValue(param41, param41_init, sizeof(_Float16) * 1);
  static _Float16 param42_init[] = {0.5f};
  model->setOperandValue(param42, param42_init, sizeof(_Float16) * 1);
  static bool8 param43_init[] = {true};
  model->setOperandValue(param43, param43_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores3, roi3, anchors3, param33, param34, param35, param36, param37, param38, param39, param40, param41, param42, param43}, {scoresOut3, roiOut3, classesOut3, detectionOut3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores3, roi3, anchors3},
    {scoresOut3, roiOut3, classesOut3, detectionOut3});
  assert(model->isValid());
}

bool is_ignored_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_float16_dynamic_output_shape_3(Model *model) {
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type16(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type17(Type::FLOAT16, {});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 6, 3});
  OperandType type22(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 6, 7});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores3 = model->addOperand(&type20);
  auto roi3 = model->addOperand(&type28);
  auto anchors3 = model->addOperand(&type16);
  auto param33 = model->addOperand(&type17);
  auto param34 = model->addOperand(&type17);
  auto param35 = model->addOperand(&type17);
  auto param36 = model->addOperand(&type17);
  auto param37 = model->addOperand(&type8);
  auto param38 = model->addOperand(&type9);
  auto param39 = model->addOperand(&type9);
  auto param40 = model->addOperand(&type9);
  auto param41 = model->addOperand(&type17);
  auto param42 = model->addOperand(&type17);
  auto param43 = model->addOperand(&type8);
  auto scoresOut3 = model->addOperand(&type22);
  auto roiOut3 = model->addOperand(&type23);
  auto classesOut3 = model->addOperand(&type13);
  auto detectionOut3 = model->addOperand(&type14);
  // Phase 2, operations
  static _Float16 param33_init[] = {10.0f};
  model->setOperandValue(param33, param33_init, sizeof(_Float16) * 1);
  static _Float16 param34_init[] = {10.0f};
  model->setOperandValue(param34, param34_init, sizeof(_Float16) * 1);
  static _Float16 param35_init[] = {5.0f};
  model->setOperandValue(param35, param35_init, sizeof(_Float16) * 1);
  static _Float16 param36_init[] = {5.0f};
  model->setOperandValue(param36, param36_init, sizeof(_Float16) * 1);
  static bool8 param37_init[] = {false};
  model->setOperandValue(param37, param37_init, sizeof(bool8) * 1);
  static int32_t param38_init[] = {3};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {1};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {1};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static _Float16 param41_init[] = {0.0f};
  model->setOperandValue(param41, param41_init, sizeof(_Float16) * 1);
  static _Float16 param42_init[] = {0.5f};
  model->setOperandValue(param42, param42_init, sizeof(_Float16) * 1);
  static bool8 param43_init[] = {true};
  model->setOperandValue(param43, param43_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores3, roi3, anchors3, param33, param34, param35, param36, param37, param38, param39, param40, param41, param42, param43}, {scoresOut3, roiOut3, classesOut3, detectionOut3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores3, roi3, anchors3},
    {scoresOut3, roiOut3, classesOut3, detectionOut3});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type17(Type::FLOAT16, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 3, 4});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 3});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 6, 3});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type27(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type29(Type::TENSOR_FLOAT16, {1, 6, 7});
  OperandType type5(Type::TENSOR_INT32, {1, 3});
  OperandType type6(Type::TENSOR_INT32, {1});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores3 = model->addOperand(&type24);
  auto roi3 = model->addOperand(&type29);
  auto anchors3 = model->addOperand(&type27);
  auto param33 = model->addOperand(&type17);
  auto param34 = model->addOperand(&type17);
  auto param35 = model->addOperand(&type17);
  auto param36 = model->addOperand(&type17);
  auto param37 = model->addOperand(&type8);
  auto param38 = model->addOperand(&type9);
  auto param39 = model->addOperand(&type9);
  auto param40 = model->addOperand(&type9);
  auto param41 = model->addOperand(&type17);
  auto param42 = model->addOperand(&type17);
  auto param43 = model->addOperand(&type8);
  auto scoresOut3 = model->addOperand(&type21);
  auto roiOut3 = model->addOperand(&type19);
  auto classesOut3 = model->addOperand(&type5);
  auto detectionOut3 = model->addOperand(&type6);
  auto scores3_tmp = model->addOperand(&type24);
  auto dummy66 = model->addOperand(&type25);
  auto param110 = model->addOperand(&type9);
  auto roi3_tmp = model->addOperand(&type29);
  auto dummy67 = model->addOperand(&type25);
  auto param111 = model->addOperand(&type9);
  auto anchors3_tmp = model->addOperand(&type27);
  auto dummy68 = model->addOperand(&type25);
  auto param112 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 param33_init[] = {10.0f};
  model->setOperandValue(param33, param33_init, sizeof(_Float16) * 1);
  static _Float16 param34_init[] = {10.0f};
  model->setOperandValue(param34, param34_init, sizeof(_Float16) * 1);
  static _Float16 param35_init[] = {5.0f};
  model->setOperandValue(param35, param35_init, sizeof(_Float16) * 1);
  static _Float16 param36_init[] = {5.0f};
  model->setOperandValue(param36, param36_init, sizeof(_Float16) * 1);
  static bool8 param37_init[] = {false};
  model->setOperandValue(param37, param37_init, sizeof(bool8) * 1);
  static int32_t param38_init[] = {3};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {1};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {1};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static _Float16 param41_init[] = {0.0f};
  model->setOperandValue(param41, param41_init, sizeof(_Float16) * 1);
  static _Float16 param42_init[] = {0.5f};
  model->setOperandValue(param42, param42_init, sizeof(_Float16) * 1);
  static bool8 param43_init[] = {true};
  model->setOperandValue(param43, param43_init, sizeof(bool8) * 1);
  static _Float16 dummy66_init[] = {0.0f};
  model->setOperandValue(dummy66, dummy66_init, sizeof(_Float16) * 1);
  static int32_t param110_init[] = {0};
  model->setOperandValue(param110, param110_init, sizeof(int32_t) * 1);
  static _Float16 dummy67_init[] = {0.0f};
  model->setOperandValue(dummy67, dummy67_init, sizeof(_Float16) * 1);
  static int32_t param111_init[] = {0};
  model->setOperandValue(param111, param111_init, sizeof(int32_t) * 1);
  static _Float16 dummy68_init[] = {0.0f};
  model->setOperandValue(dummy68, dummy68_init, sizeof(_Float16) * 1);
  static int32_t param112_init[] = {0};
  model->setOperandValue(param112, param112_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores3_tmp, dummy66, param110}, {scores3});
  model->addOperation(ANEURALNETWORKS_ADD, {roi3_tmp, dummy67, param111}, {roi3});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors3_tmp, dummy68, param112}, {anchors3});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores3, roi3, anchors3, param33, param34, param35, param36, param37, param38, param39, param40, param41, param42, param43}, {scoresOut3, roiOut3, classesOut3, detectionOut3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores3_tmp, roi3_tmp, anchors3_tmp},
    {scoresOut3, roiOut3, classesOut3, detectionOut3});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
namespace generated_tests::detection_postprocess {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type13(Type::TENSOR_INT32, {0, 0});
  OperandType type14(Type::TENSOR_INT32, {0});
  OperandType type17(Type::FLOAT16, {});
  OperandType type22(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 6, 3});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type27(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type29(Type::TENSOR_FLOAT16, {1, 6, 7});
  OperandType type8(Type::BOOL, {});
  OperandType type9(Type::INT32, {});
  // Phase 1, operands
  auto scores3 = model->addOperand(&type24);
  auto roi3 = model->addOperand(&type29);
  auto anchors3 = model->addOperand(&type27);
  auto param33 = model->addOperand(&type17);
  auto param34 = model->addOperand(&type17);
  auto param35 = model->addOperand(&type17);
  auto param36 = model->addOperand(&type17);
  auto param37 = model->addOperand(&type8);
  auto param38 = model->addOperand(&type9);
  auto param39 = model->addOperand(&type9);
  auto param40 = model->addOperand(&type9);
  auto param41 = model->addOperand(&type17);
  auto param42 = model->addOperand(&type17);
  auto param43 = model->addOperand(&type8);
  auto scoresOut3 = model->addOperand(&type22);
  auto roiOut3 = model->addOperand(&type23);
  auto classesOut3 = model->addOperand(&type13);
  auto detectionOut3 = model->addOperand(&type14);
  auto scores3_tmp = model->addOperand(&type24);
  auto dummy69 = model->addOperand(&type25);
  auto param113 = model->addOperand(&type9);
  auto roi3_tmp = model->addOperand(&type29);
  auto dummy70 = model->addOperand(&type25);
  auto param114 = model->addOperand(&type9);
  auto anchors3_tmp = model->addOperand(&type27);
  auto dummy71 = model->addOperand(&type25);
  auto param115 = model->addOperand(&type9);
  // Phase 2, operations
  static _Float16 param33_init[] = {10.0f};
  model->setOperandValue(param33, param33_init, sizeof(_Float16) * 1);
  static _Float16 param34_init[] = {10.0f};
  model->setOperandValue(param34, param34_init, sizeof(_Float16) * 1);
  static _Float16 param35_init[] = {5.0f};
  model->setOperandValue(param35, param35_init, sizeof(_Float16) * 1);
  static _Float16 param36_init[] = {5.0f};
  model->setOperandValue(param36, param36_init, sizeof(_Float16) * 1);
  static bool8 param37_init[] = {false};
  model->setOperandValue(param37, param37_init, sizeof(bool8) * 1);
  static int32_t param38_init[] = {3};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {1};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {1};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static _Float16 param41_init[] = {0.0f};
  model->setOperandValue(param41, param41_init, sizeof(_Float16) * 1);
  static _Float16 param42_init[] = {0.5f};
  model->setOperandValue(param42, param42_init, sizeof(_Float16) * 1);
  static bool8 param43_init[] = {true};
  model->setOperandValue(param43, param43_init, sizeof(bool8) * 1);
  static _Float16 dummy69_init[] = {0.0f};
  model->setOperandValue(dummy69, dummy69_init, sizeof(_Float16) * 1);
  static int32_t param113_init[] = {0};
  model->setOperandValue(param113, param113_init, sizeof(int32_t) * 1);
  static _Float16 dummy70_init[] = {0.0f};
  model->setOperandValue(dummy70, dummy70_init, sizeof(_Float16) * 1);
  static int32_t param114_init[] = {0};
  model->setOperandValue(param114, param114_init, sizeof(int32_t) * 1);
  static _Float16 dummy71_init[] = {0.0f};
  model->setOperandValue(dummy71, dummy71_init, sizeof(_Float16) * 1);
  static int32_t param115_init[] = {0};
  model->setOperandValue(param115, param115_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {scores3_tmp, dummy69, param113}, {scores3});
  model->addOperation(ANEURALNETWORKS_ADD, {roi3_tmp, dummy70, param114}, {roi3});
  model->addOperation(ANEURALNETWORKS_ADD, {anchors3_tmp, dummy71, param115}, {anchors3});
  model->addOperation(ANEURALNETWORKS_DETECTION_POSTPROCESSING, {scores3, roi3, anchors3, param33, param34, param35, param36, param37, param38, param39, param40, param41, param42, param43}, {scoresOut3, roiOut3, classesOut3, detectionOut3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {scores3_tmp, roi3_tmp, anchors3_tmp},
    {scoresOut3, roiOut3, classesOut3, detectionOut3});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::detection_postprocess
