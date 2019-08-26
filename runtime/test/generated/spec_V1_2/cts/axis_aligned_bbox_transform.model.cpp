// Generated from axis_aligned_bbox_transform.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 2});
  // Phase 1, operands
  auto roi = model->addOperand(&type0);
  auto bboxDeltas = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type2);
  auto imageInfo = model->addOperand(&type3);
  auto out = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, batchSplit, imageInfo}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, bboxDeltas, batchSplit, imageInfo},
    {out});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto roi = model->addOperand(&type0);
  auto bboxDeltas = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type2);
  auto imageInfo = model->addOperand(&type3);
  auto out = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, batchSplit, imageInfo}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, bboxDeltas, batchSplit, imageInfo},
    {out});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 2});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto roi = model->addOperand(&type0);
  auto bboxDeltas = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type2);
  auto imageInfo = model->addOperand(&type3);
  auto out = model->addOperand(&type1);
  auto roi_tmp = model->addOperand(&type0);
  auto dummy = model->addOperand(&type6);
  auto param = model->addOperand(&type7);
  auto bboxDeltas_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type6);
  auto param1 = model->addOperand(&type7);
  auto imageInfo_tmp = model->addOperand(&type3);
  auto dummy2 = model->addOperand(&type6);
  auto param2 = model->addOperand(&type7);
  // Phase 2, operations
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy, param}, {roi});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy1, param1}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo_tmp, dummy2, param2}, {imageInfo});
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, batchSplit, imageInfo}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit, roi_tmp, bboxDeltas_tmp, imageInfo_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto roi = model->addOperand(&type0);
  auto bboxDeltas = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type2);
  auto imageInfo = model->addOperand(&type3);
  auto out = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type0);
  auto dummy3 = model->addOperand(&type6);
  auto param3 = model->addOperand(&type7);
  auto bboxDeltas_tmp = model->addOperand(&type1);
  auto dummy4 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type7);
  auto imageInfo_tmp = model->addOperand(&type3);
  auto dummy5 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type7);
  // Phase 2, operations
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static float dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(float) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static float dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(float) * 1);
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy3, param3}, {roi});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy4, param4}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo_tmp, dummy5, param5}, {imageInfo});
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, batchSplit, imageInfo}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit, roi_tmp, bboxDeltas_tmp, imageInfo_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 2});
  // Phase 1, operands
  auto roi = model->addOperand(&type0);
  auto bboxDeltas = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type2);
  auto imageInfo = model->addOperand(&type3);
  auto out = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, batchSplit, imageInfo}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, bboxDeltas, batchSplit, imageInfo},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto roi = model->addOperand(&type0);
  auto bboxDeltas = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type2);
  auto imageInfo = model->addOperand(&type3);
  auto out = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, batchSplit, imageInfo}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, bboxDeltas, batchSplit, imageInfo},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 2});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto roi = model->addOperand(&type0);
  auto bboxDeltas = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type2);
  auto imageInfo = model->addOperand(&type3);
  auto out = model->addOperand(&type1);
  auto roi_tmp = model->addOperand(&type0);
  auto dummy6 = model->addOperand(&type6);
  auto param6 = model->addOperand(&type7);
  auto bboxDeltas_tmp = model->addOperand(&type1);
  auto dummy7 = model->addOperand(&type6);
  auto param7 = model->addOperand(&type7);
  auto imageInfo_tmp = model->addOperand(&type3);
  auto dummy8 = model->addOperand(&type6);
  auto param8 = model->addOperand(&type7);
  // Phase 2, operations
  static float dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(float) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static float dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(float) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy6, param6}, {roi});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy7, param7}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo_tmp, dummy8, param8}, {imageInfo});
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, batchSplit, imageInfo}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit, roi_tmp, bboxDeltas_tmp, imageInfo_tmp},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto roi = model->addOperand(&type0);
  auto bboxDeltas = model->addOperand(&type1);
  auto batchSplit = model->addOperand(&type2);
  auto imageInfo = model->addOperand(&type3);
  auto out = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type0);
  auto dummy9 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type7);
  auto bboxDeltas_tmp = model->addOperand(&type1);
  auto dummy10 = model->addOperand(&type6);
  auto param10 = model->addOperand(&type7);
  auto imageInfo_tmp = model->addOperand(&type3);
  auto dummy11 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type7);
  // Phase 2, operations
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(float) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static float dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(float) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy9, param9}, {roi});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy10, param10}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo_tmp, dummy11, param11}, {imageInfo});
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, batchSplit, imageInfo}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit, roi_tmp, bboxDeltas_tmp, imageInfo_tmp},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_float16(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type8(Type::TENSOR_FLOAT16, {5, 8});
  OperandType type9(Type::TENSOR_FLOAT16, {4, 2});
  // Phase 1, operands
  auto roi = model->addOperand(&type10);
  auto bboxDeltas = model->addOperand(&type8);
  auto batchSplit = model->addOperand(&type2);
  auto imageInfo = model->addOperand(&type9);
  auto out = model->addOperand(&type8);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, batchSplit, imageInfo}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, bboxDeltas, batchSplit, imageInfo},
    {out});
  assert(model->isValid());
}

bool is_ignored_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_float16_dynamic_output_shape(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type8(Type::TENSOR_FLOAT16, {5, 8});
  OperandType type9(Type::TENSOR_FLOAT16, {4, 2});
  // Phase 1, operands
  auto roi = model->addOperand(&type10);
  auto bboxDeltas = model->addOperand(&type8);
  auto batchSplit = model->addOperand(&type2);
  auto imageInfo = model->addOperand(&type9);
  auto out = model->addOperand(&type11);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, batchSplit, imageInfo}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, bboxDeltas, batchSplit, imageInfo},
    {out});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_float16_all_inputs_as_internal(Model *model) {
  OperandType type12(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type13(Type::TENSOR_FLOAT16, {1});
  OperandType type14(Type::TENSOR_FLOAT16, {5, 8});
  OperandType type15(Type::TENSOR_FLOAT16, {4, 2});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT16, {5, 8});
  // Phase 1, operands
  auto roi = model->addOperand(&type12);
  auto bboxDeltas = model->addOperand(&type14);
  auto batchSplit = model->addOperand(&type2);
  auto imageInfo = model->addOperand(&type15);
  auto out = model->addOperand(&type8);
  auto roi_tmp = model->addOperand(&type12);
  auto dummy12 = model->addOperand(&type13);
  auto param12 = model->addOperand(&type7);
  auto bboxDeltas_tmp = model->addOperand(&type14);
  auto dummy13 = model->addOperand(&type13);
  auto param13 = model->addOperand(&type7);
  auto imageInfo_tmp = model->addOperand(&type15);
  auto dummy14 = model->addOperand(&type13);
  auto param14 = model->addOperand(&type7);
  // Phase 2, operations
  static _Float16 dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(_Float16) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static _Float16 dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(_Float16) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static _Float16 dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(_Float16) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy12, param12}, {roi});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy13, param13}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo_tmp, dummy14, param14}, {imageInfo});
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, batchSplit, imageInfo}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit, roi_tmp, bboxDeltas_tmp, imageInfo_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type12(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type13(Type::TENSOR_FLOAT16, {1});
  OperandType type14(Type::TENSOR_FLOAT16, {5, 8});
  OperandType type15(Type::TENSOR_FLOAT16, {4, 2});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto roi = model->addOperand(&type12);
  auto bboxDeltas = model->addOperand(&type14);
  auto batchSplit = model->addOperand(&type2);
  auto imageInfo = model->addOperand(&type15);
  auto out = model->addOperand(&type11);
  auto roi_tmp = model->addOperand(&type12);
  auto dummy15 = model->addOperand(&type13);
  auto param15 = model->addOperand(&type7);
  auto bboxDeltas_tmp = model->addOperand(&type14);
  auto dummy16 = model->addOperand(&type13);
  auto param16 = model->addOperand(&type7);
  auto imageInfo_tmp = model->addOperand(&type15);
  auto dummy17 = model->addOperand(&type13);
  auto param17 = model->addOperand(&type7);
  // Phase 2, operations
  static _Float16 dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(_Float16) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static _Float16 dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(_Float16) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static _Float16 dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(_Float16) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy15, param15}, {roi});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy16, param16}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo_tmp, dummy17, param17}, {imageInfo});
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, batchSplit, imageInfo}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit, roi_tmp, bboxDeltas_tmp, imageInfo_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_quant8(Model *model) {
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {5, 8}, 0.05f, 128);
  OperandType type17(Type::TENSOR_QUANT16_ASYMM, {4, 2}, 0.125f, 0);
  OperandType type18(Type::TENSOR_QUANT16_ASYMM, {5, 8}, 0.125f, 0);
  OperandType type19(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type2(Type::TENSOR_INT32, {5});
  // Phase 1, operands
  auto roi = model->addOperand(&type19);
  auto bboxDeltas = model->addOperand(&type16);
  auto batchSplit = model->addOperand(&type2);
  auto imageInfo = model->addOperand(&type17);
  auto out = model->addOperand(&type18);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, batchSplit, imageInfo}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, bboxDeltas, batchSplit, imageInfo},
    {out});
  assert(model->isValid());
}

bool is_ignored_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_quant8_dynamic_output_shape(Model *model) {
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {5, 8}, 0.05f, 128);
  OperandType type17(Type::TENSOR_QUANT16_ASYMM, {4, 2}, 0.125f, 0);
  OperandType type19(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type20(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  // Phase 1, operands
  auto roi = model->addOperand(&type19);
  auto bboxDeltas = model->addOperand(&type16);
  auto batchSplit = model->addOperand(&type2);
  auto imageInfo = model->addOperand(&type17);
  auto out = model->addOperand(&type20);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, batchSplit, imageInfo}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, bboxDeltas, batchSplit, imageInfo},
    {out});
  assert(model->isValid());
}

bool is_ignored_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_quant8_all_inputs_as_internal(Model *model) {
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {5, 8}, 0.05f, 128);
  OperandType type17(Type::TENSOR_QUANT16_ASYMM, {4, 2}, 0.125f, 0);
  OperandType type18(Type::TENSOR_QUANT16_ASYMM, {5, 8}, 0.125f, 0);
  OperandType type19(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1}, 0.05f, 128);
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto roi = model->addOperand(&type19);
  auto bboxDeltas = model->addOperand(&type16);
  auto batchSplit = model->addOperand(&type2);
  auto imageInfo = model->addOperand(&type17);
  auto out = model->addOperand(&type18);
  auto bboxDeltas_tmp = model->addOperand(&type16);
  auto dummy18 = model->addOperand(&type21);
  auto param18 = model->addOperand(&type7);
  // Phase 2, operations
  static uint8_t dummy18_init[] = {128};
  model->setOperandValue(dummy18, dummy18_init, sizeof(uint8_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy18, param18}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, batchSplit, imageInfo}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, batchSplit, imageInfo, bboxDeltas_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {5, 8}, 0.05f, 128);
  OperandType type17(Type::TENSOR_QUANT16_ASYMM, {4, 2}, 0.125f, 0);
  OperandType type19(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type20(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1}, 0.05f, 128);
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto roi = model->addOperand(&type19);
  auto bboxDeltas = model->addOperand(&type16);
  auto batchSplit = model->addOperand(&type2);
  auto imageInfo = model->addOperand(&type17);
  auto out = model->addOperand(&type20);
  auto bboxDeltas_tmp = model->addOperand(&type16);
  auto dummy19 = model->addOperand(&type21);
  auto param19 = model->addOperand(&type7);
  // Phase 2, operations
  static uint8_t dummy19_init[] = {128};
  model->setOperandValue(dummy19, dummy19_init, sizeof(uint8_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas_tmp, dummy19, param19}, {bboxDeltas});
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi, bboxDeltas, batchSplit, imageInfo}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, batchSplit, imageInfo, bboxDeltas_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type4(Type::TENSOR_FLOAT32, {7, 2});
  // Phase 1, operands
  auto roi1 = model->addOperand(&type0);
  auto bboxDeltas1 = model->addOperand(&type1);
  auto batchSplit1 = model->addOperand(&type2);
  auto imageInfo1 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi1, bboxDeltas1, batchSplit1, imageInfo1}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi1, bboxDeltas1, batchSplit1, imageInfo1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type4(Type::TENSOR_FLOAT32, {7, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto roi1 = model->addOperand(&type0);
  auto bboxDeltas1 = model->addOperand(&type1);
  auto batchSplit1 = model->addOperand(&type2);
  auto imageInfo1 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi1, bboxDeltas1, batchSplit1, imageInfo1}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi1, bboxDeltas1, batchSplit1, imageInfo1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type4(Type::TENSOR_FLOAT32, {7, 2});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto roi1 = model->addOperand(&type0);
  auto bboxDeltas1 = model->addOperand(&type1);
  auto batchSplit1 = model->addOperand(&type2);
  auto imageInfo1 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type1);
  auto roi1_tmp = model->addOperand(&type0);
  auto dummy20 = model->addOperand(&type6);
  auto param20 = model->addOperand(&type7);
  auto bboxDeltas1_tmp = model->addOperand(&type1);
  auto dummy21 = model->addOperand(&type6);
  auto param21 = model->addOperand(&type7);
  auto imageInfo1_tmp = model->addOperand(&type4);
  auto dummy22 = model->addOperand(&type6);
  auto param22 = model->addOperand(&type7);
  // Phase 2, operations
  static float dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(float) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static float dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(float) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static float dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(float) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy20, param20}, {roi1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy21, param21}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo1_tmp, dummy22, param22}, {imageInfo1});
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi1, bboxDeltas1, batchSplit1, imageInfo1}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit1, roi1_tmp, bboxDeltas1_tmp, imageInfo1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type4(Type::TENSOR_FLOAT32, {7, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto roi1 = model->addOperand(&type0);
  auto bboxDeltas1 = model->addOperand(&type1);
  auto batchSplit1 = model->addOperand(&type2);
  auto imageInfo1 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type0);
  auto dummy23 = model->addOperand(&type6);
  auto param23 = model->addOperand(&type7);
  auto bboxDeltas1_tmp = model->addOperand(&type1);
  auto dummy24 = model->addOperand(&type6);
  auto param24 = model->addOperand(&type7);
  auto imageInfo1_tmp = model->addOperand(&type4);
  auto dummy25 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type7);
  // Phase 2, operations
  static float dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(float) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(float) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static float dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(float) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy23, param23}, {roi1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy24, param24}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo1_tmp, dummy25, param25}, {imageInfo1});
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi1, bboxDeltas1, batchSplit1, imageInfo1}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit1, roi1_tmp, bboxDeltas1_tmp, imageInfo1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type4(Type::TENSOR_FLOAT32, {7, 2});
  // Phase 1, operands
  auto roi1 = model->addOperand(&type0);
  auto bboxDeltas1 = model->addOperand(&type1);
  auto batchSplit1 = model->addOperand(&type2);
  auto imageInfo1 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi1, bboxDeltas1, batchSplit1, imageInfo1}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi1, bboxDeltas1, batchSplit1, imageInfo1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type4(Type::TENSOR_FLOAT32, {7, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  // Phase 1, operands
  auto roi1 = model->addOperand(&type0);
  auto bboxDeltas1 = model->addOperand(&type1);
  auto batchSplit1 = model->addOperand(&type2);
  auto imageInfo1 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type5);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi1, bboxDeltas1, batchSplit1, imageInfo1}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi1, bboxDeltas1, batchSplit1, imageInfo1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type4(Type::TENSOR_FLOAT32, {7, 2});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto roi1 = model->addOperand(&type0);
  auto bboxDeltas1 = model->addOperand(&type1);
  auto batchSplit1 = model->addOperand(&type2);
  auto imageInfo1 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type1);
  auto roi1_tmp = model->addOperand(&type0);
  auto dummy26 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type7);
  auto bboxDeltas1_tmp = model->addOperand(&type1);
  auto dummy27 = model->addOperand(&type6);
  auto param27 = model->addOperand(&type7);
  auto imageInfo1_tmp = model->addOperand(&type4);
  auto dummy28 = model->addOperand(&type6);
  auto param28 = model->addOperand(&type7);
  // Phase 2, operations
  static float dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static float dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(float) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float dummy28_init[] = {0.0f};
  model->setOperandValue(dummy28, dummy28_init, sizeof(float) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy26, param26}, {roi1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy27, param27}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo1_tmp, dummy28, param28}, {imageInfo1});
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi1, bboxDeltas1, batchSplit1, imageInfo1}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit1, roi1_tmp, bboxDeltas1_tmp, imageInfo1_tmp},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type1(Type::TENSOR_FLOAT32, {5, 8});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type4(Type::TENSOR_FLOAT32, {7, 2});
  OperandType type5(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto roi1 = model->addOperand(&type0);
  auto bboxDeltas1 = model->addOperand(&type1);
  auto batchSplit1 = model->addOperand(&type2);
  auto imageInfo1 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type0);
  auto dummy29 = model->addOperand(&type6);
  auto param29 = model->addOperand(&type7);
  auto bboxDeltas1_tmp = model->addOperand(&type1);
  auto dummy30 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type7);
  auto imageInfo1_tmp = model->addOperand(&type4);
  auto dummy31 = model->addOperand(&type6);
  auto param31 = model->addOperand(&type7);
  // Phase 2, operations
  static float dummy29_init[] = {0.0f};
  model->setOperandValue(dummy29, dummy29_init, sizeof(float) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float dummy30_init[] = {0.0f};
  model->setOperandValue(dummy30, dummy30_init, sizeof(float) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static float dummy31_init[] = {0.0f};
  model->setOperandValue(dummy31, dummy31_init, sizeof(float) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy29, param29}, {roi1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy30, param30}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo1_tmp, dummy31, param31}, {imageInfo1});
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi1, bboxDeltas1, batchSplit1, imageInfo1}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit1, roi1_tmp, bboxDeltas1_tmp, imageInfo1_tmp},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_float16_2(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type22(Type::TENSOR_FLOAT16, {7, 2});
  OperandType type8(Type::TENSOR_FLOAT16, {5, 8});
  // Phase 1, operands
  auto roi1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type8);
  auto batchSplit1 = model->addOperand(&type2);
  auto imageInfo1 = model->addOperand(&type22);
  auto out1 = model->addOperand(&type8);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi1, bboxDeltas1, batchSplit1, imageInfo1}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi1, bboxDeltas1, batchSplit1, imageInfo1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_float16_dynamic_output_shape_2(Model *model) {
  OperandType type10(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type22(Type::TENSOR_FLOAT16, {7, 2});
  OperandType type8(Type::TENSOR_FLOAT16, {5, 8});
  // Phase 1, operands
  auto roi1 = model->addOperand(&type10);
  auto bboxDeltas1 = model->addOperand(&type8);
  auto batchSplit1 = model->addOperand(&type2);
  auto imageInfo1 = model->addOperand(&type22);
  auto out1 = model->addOperand(&type11);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi1, bboxDeltas1, batchSplit1, imageInfo1}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi1, bboxDeltas1, batchSplit1, imageInfo1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type12(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type13(Type::TENSOR_FLOAT16, {1});
  OperandType type14(Type::TENSOR_FLOAT16, {5, 8});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type23(Type::TENSOR_FLOAT16, {7, 2});
  OperandType type7(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT16, {5, 8});
  // Phase 1, operands
  auto roi1 = model->addOperand(&type12);
  auto bboxDeltas1 = model->addOperand(&type14);
  auto batchSplit1 = model->addOperand(&type2);
  auto imageInfo1 = model->addOperand(&type23);
  auto out1 = model->addOperand(&type8);
  auto roi1_tmp = model->addOperand(&type12);
  auto dummy32 = model->addOperand(&type13);
  auto param32 = model->addOperand(&type7);
  auto bboxDeltas1_tmp = model->addOperand(&type14);
  auto dummy33 = model->addOperand(&type13);
  auto param33 = model->addOperand(&type7);
  auto imageInfo1_tmp = model->addOperand(&type23);
  auto dummy34 = model->addOperand(&type13);
  auto param34 = model->addOperand(&type7);
  // Phase 2, operations
  static _Float16 dummy32_init[] = {0.0f};
  model->setOperandValue(dummy32, dummy32_init, sizeof(_Float16) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static _Float16 dummy33_init[] = {0.0f};
  model->setOperandValue(dummy33, dummy33_init, sizeof(_Float16) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static _Float16 dummy34_init[] = {0.0f};
  model->setOperandValue(dummy34, dummy34_init, sizeof(_Float16) * 1);
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy32, param32}, {roi1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy33, param33}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo1_tmp, dummy34, param34}, {imageInfo1});
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi1, bboxDeltas1, batchSplit1, imageInfo1}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit1, roi1_tmp, bboxDeltas1_tmp, imageInfo1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type12(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type13(Type::TENSOR_FLOAT16, {1});
  OperandType type14(Type::TENSOR_FLOAT16, {5, 8});
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type23(Type::TENSOR_FLOAT16, {7, 2});
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto roi1 = model->addOperand(&type12);
  auto bboxDeltas1 = model->addOperand(&type14);
  auto batchSplit1 = model->addOperand(&type2);
  auto imageInfo1 = model->addOperand(&type23);
  auto out1 = model->addOperand(&type11);
  auto roi1_tmp = model->addOperand(&type12);
  auto dummy35 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type7);
  auto bboxDeltas1_tmp = model->addOperand(&type14);
  auto dummy36 = model->addOperand(&type13);
  auto param36 = model->addOperand(&type7);
  auto imageInfo1_tmp = model->addOperand(&type23);
  auto dummy37 = model->addOperand(&type13);
  auto param37 = model->addOperand(&type7);
  // Phase 2, operations
  static _Float16 dummy35_init[] = {0.0f};
  model->setOperandValue(dummy35, dummy35_init, sizeof(_Float16) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static _Float16 dummy36_init[] = {0.0f};
  model->setOperandValue(dummy36, dummy36_init, sizeof(_Float16) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static _Float16 dummy37_init[] = {0.0f};
  model->setOperandValue(dummy37, dummy37_init, sizeof(_Float16) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy35, param35}, {roi1});
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy36, param36}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_ADD, {imageInfo1_tmp, dummy37, param37}, {imageInfo1});
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi1, bboxDeltas1, batchSplit1, imageInfo1}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {batchSplit1, roi1_tmp, bboxDeltas1_tmp, imageInfo1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_quant8_2(Model *model) {
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {5, 8}, 0.05f, 128);
  OperandType type18(Type::TENSOR_QUANT16_ASYMM, {5, 8}, 0.125f, 0);
  OperandType type19(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {7, 2}, 0.125f, 0);
  // Phase 1, operands
  auto roi1 = model->addOperand(&type19);
  auto bboxDeltas1 = model->addOperand(&type16);
  auto batchSplit1 = model->addOperand(&type2);
  auto imageInfo1 = model->addOperand(&type24);
  auto out1 = model->addOperand(&type18);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi1, bboxDeltas1, batchSplit1, imageInfo1}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi1, bboxDeltas1, batchSplit1, imageInfo1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {5, 8}, 0.05f, 128);
  OperandType type19(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type20(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {7, 2}, 0.125f, 0);
  // Phase 1, operands
  auto roi1 = model->addOperand(&type19);
  auto bboxDeltas1 = model->addOperand(&type16);
  auto batchSplit1 = model->addOperand(&type2);
  auto imageInfo1 = model->addOperand(&type24);
  auto out1 = model->addOperand(&type20);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi1, bboxDeltas1, batchSplit1, imageInfo1}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi1, bboxDeltas1, batchSplit1, imageInfo1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {5, 8}, 0.05f, 128);
  OperandType type18(Type::TENSOR_QUANT16_ASYMM, {5, 8}, 0.125f, 0);
  OperandType type19(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1}, 0.05f, 128);
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {7, 2}, 0.125f, 0);
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto roi1 = model->addOperand(&type19);
  auto bboxDeltas1 = model->addOperand(&type16);
  auto batchSplit1 = model->addOperand(&type2);
  auto imageInfo1 = model->addOperand(&type24);
  auto out1 = model->addOperand(&type18);
  auto bboxDeltas1_tmp = model->addOperand(&type16);
  auto dummy38 = model->addOperand(&type21);
  auto param38 = model->addOperand(&type7);
  // Phase 2, operations
  static uint8_t dummy38_init[] = {128};
  model->setOperandValue(dummy38, dummy38_init, sizeof(uint8_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy38, param38}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi1, bboxDeltas1, batchSplit1, imageInfo1}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi1, batchSplit1, imageInfo1, bboxDeltas1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
namespace generated_tests::axis_aligned_bbox_transform {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {5, 8}, 0.05f, 128);
  OperandType type19(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type2(Type::TENSOR_INT32, {5});
  OperandType type20(Type::TENSOR_QUANT16_ASYMM, {0, 0}, 0.125f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1}, 0.05f, 128);
  OperandType type24(Type::TENSOR_QUANT16_ASYMM, {7, 2}, 0.125f, 0);
  OperandType type7(Type::INT32, {});
  // Phase 1, operands
  auto roi1 = model->addOperand(&type19);
  auto bboxDeltas1 = model->addOperand(&type16);
  auto batchSplit1 = model->addOperand(&type2);
  auto imageInfo1 = model->addOperand(&type24);
  auto out1 = model->addOperand(&type20);
  auto bboxDeltas1_tmp = model->addOperand(&type16);
  auto dummy39 = model->addOperand(&type21);
  auto param39 = model->addOperand(&type7);
  // Phase 2, operations
  static uint8_t dummy39_init[] = {128};
  model->setOperandValue(dummy39, dummy39_init, sizeof(uint8_t) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {bboxDeltas1_tmp, dummy39, param39}, {bboxDeltas1});
  model->addOperation(ANEURALNETWORKS_AXIS_ALIGNED_BBOX_TRANSFORM, {roi1, bboxDeltas1, batchSplit1, imageInfo1}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi1, batchSplit1, imageInfo1, bboxDeltas1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::axis_aligned_bbox_transform
