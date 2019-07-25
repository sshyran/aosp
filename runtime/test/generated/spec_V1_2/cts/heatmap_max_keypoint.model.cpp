// Generated from heatmap_max_keypoint.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {6, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {6, 1});
  OperandType type4(Type::TENSOR_FLOAT32, {6, 1, 2});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type1);
  auto boxes = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type3);
  auto keypoint = model->addOperand(&type4);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap, boxes},
    {score, keypoint});
  assert(model->isValid());
}

bool is_ignored_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {6, 4, 4, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type1);
  auto boxes = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type12);
  auto keypoint = model->addOperand(&type13);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap, boxes},
    {score, keypoint});
  assert(model->isValid());
}

bool is_ignored_nhwc_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {6, 4, 4, 1});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type15(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {6, 1});
  OperandType type4(Type::TENSOR_FLOAT32, {6, 1, 2});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type1);
  auto boxes = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type3);
  auto keypoint = model->addOperand(&type4);
  auto heatmap_tmp = model->addOperand(&type1);
  auto dummy = model->addOperand(&type14);
  auto param = model->addOperand(&type15);
  auto boxes_tmp = model->addOperand(&type2);
  auto dummy1 = model->addOperand(&type14);
  auto param1 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap_tmp, dummy, param}, {heatmap});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes_tmp, dummy1, param1}, {boxes});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap_tmp, boxes_tmp},
    {score, keypoint});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {6, 4, 4, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type15(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type1);
  auto boxes = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type12);
  auto keypoint = model->addOperand(&type13);
  auto heatmap_tmp = model->addOperand(&type1);
  auto dummy2 = model->addOperand(&type14);
  auto param2 = model->addOperand(&type15);
  auto boxes_tmp = model->addOperand(&type2);
  auto dummy3 = model->addOperand(&type14);
  auto param3 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap_tmp, dummy2, param2}, {heatmap});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes_tmp, dummy3, param3}, {boxes});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap_tmp, boxes_tmp},
    {score, keypoint});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {6, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {6, 1});
  OperandType type4(Type::TENSOR_FLOAT32, {6, 1, 2});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type1);
  auto boxes = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type3);
  auto keypoint = model->addOperand(&type4);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap, boxes},
    {score, keypoint});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {6, 4, 4, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type1);
  auto boxes = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type12);
  auto keypoint = model->addOperand(&type13);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap, boxes},
    {score, keypoint});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {6, 4, 4, 1});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type15(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {6, 1});
  OperandType type4(Type::TENSOR_FLOAT32, {6, 1, 2});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type1);
  auto boxes = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type3);
  auto keypoint = model->addOperand(&type4);
  auto heatmap_tmp = model->addOperand(&type1);
  auto dummy4 = model->addOperand(&type14);
  auto param4 = model->addOperand(&type15);
  auto boxes_tmp = model->addOperand(&type2);
  auto dummy5 = model->addOperand(&type14);
  auto param5 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(float) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static float dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(float) * 1);
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap_tmp, dummy4, param4}, {heatmap});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes_tmp, dummy5, param5}, {boxes});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap_tmp, boxes_tmp},
    {score, keypoint});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {6, 4, 4, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type15(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type1);
  auto boxes = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type12);
  auto keypoint = model->addOperand(&type13);
  auto heatmap_tmp = model->addOperand(&type1);
  auto dummy6 = model->addOperand(&type14);
  auto param6 = model->addOperand(&type15);
  auto boxes_tmp = model->addOperand(&type2);
  auto dummy7 = model->addOperand(&type14);
  auto param7 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(float) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static float dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(float) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap_tmp, dummy6, param6}, {heatmap});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes_tmp, dummy7, param7}, {boxes});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap_tmp, boxes_tmp},
    {score, keypoint});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type17(Type::TENSOR_FLOAT16, {6, 4, 4, 1});
  OperandType type18(Type::TENSOR_FLOAT16, {6, 1, 2});
  OperandType type19(Type::TENSOR_FLOAT16, {6, 1});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type17);
  auto boxes = model->addOperand(&type16);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type19);
  auto keypoint = model->addOperand(&type18);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap, boxes},
    {score, keypoint});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type17(Type::TENSOR_FLOAT16, {6, 4, 4, 1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type21(Type::TENSOR_FLOAT16, {0, 0, 0});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type17);
  auto boxes = model->addOperand(&type16);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type20);
  auto keypoint = model->addOperand(&type21);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap, boxes},
    {score, keypoint});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT16, {6, 1, 2});
  OperandType type19(Type::TENSOR_FLOAT16, {6, 1});
  OperandType type22(Type::TENSOR_FLOAT16, {6, 4, 4, 1});
  OperandType type23(Type::TENSOR_FLOAT16, {1});
  OperandType type24(Type::TENSOR_FLOAT16, {6, 4});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type22);
  auto boxes = model->addOperand(&type24);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type19);
  auto keypoint = model->addOperand(&type18);
  auto heatmap_tmp = model->addOperand(&type22);
  auto dummy8 = model->addOperand(&type23);
  auto param8 = model->addOperand(&type15);
  auto boxes_tmp = model->addOperand(&type24);
  auto dummy9 = model->addOperand(&type23);
  auto param9 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(_Float16) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static _Float16 dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(_Float16) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap_tmp, dummy8, param8}, {heatmap});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes_tmp, dummy9, param9}, {boxes});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap_tmp, boxes_tmp},
    {score, keypoint});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type21(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {6, 4, 4, 1});
  OperandType type23(Type::TENSOR_FLOAT16, {1});
  OperandType type24(Type::TENSOR_FLOAT16, {6, 4});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type22);
  auto boxes = model->addOperand(&type24);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type20);
  auto keypoint = model->addOperand(&type21);
  auto heatmap_tmp = model->addOperand(&type22);
  auto dummy10 = model->addOperand(&type23);
  auto param10 = model->addOperand(&type15);
  auto boxes_tmp = model->addOperand(&type24);
  auto dummy11 = model->addOperand(&type23);
  auto param11 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(_Float16) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static _Float16 dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(_Float16) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap_tmp, dummy10, param10}, {heatmap});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes_tmp, dummy11, param11}, {boxes});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap_tmp, boxes_tmp},
    {score, keypoint});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {6, 1, 4, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {6, 1});
  OperandType type4(Type::TENSOR_FLOAT32, {6, 1, 2});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type25);
  auto boxes = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type3);
  auto keypoint = model->addOperand(&type4);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap, boxes},
    {score, keypoint});
  assert(model->isValid());
}

bool is_ignored_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {6, 1, 4, 4});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type25);
  auto boxes = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type12);
  auto keypoint = model->addOperand(&type13);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap, boxes},
    {score, keypoint});
  assert(model->isValid());
}

bool is_ignored_nchw_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type15(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {6, 1, 4, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {6, 1});
  OperandType type4(Type::TENSOR_FLOAT32, {6, 1, 2});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type25);
  auto boxes = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type3);
  auto keypoint = model->addOperand(&type4);
  auto heatmap_tmp = model->addOperand(&type25);
  auto dummy12 = model->addOperand(&type14);
  auto param12 = model->addOperand(&type15);
  auto boxes_tmp = model->addOperand(&type2);
  auto dummy13 = model->addOperand(&type14);
  auto param13 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(float) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(float) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap_tmp, dummy12, param12}, {heatmap});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes_tmp, dummy13, param13}, {boxes});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap_tmp, boxes_tmp},
    {score, keypoint});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type15(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {6, 1, 4, 4});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type25);
  auto boxes = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type12);
  auto keypoint = model->addOperand(&type13);
  auto heatmap_tmp = model->addOperand(&type25);
  auto dummy14 = model->addOperand(&type14);
  auto param14 = model->addOperand(&type15);
  auto boxes_tmp = model->addOperand(&type2);
  auto dummy15 = model->addOperand(&type14);
  auto param15 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(float) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static float dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(float) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap_tmp, dummy14, param14}, {heatmap});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes_tmp, dummy15, param15}, {boxes});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap_tmp, boxes_tmp},
    {score, keypoint});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {6, 1, 4, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {6, 1});
  OperandType type4(Type::TENSOR_FLOAT32, {6, 1, 2});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type25);
  auto boxes = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type3);
  auto keypoint = model->addOperand(&type4);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap, boxes},
    {score, keypoint});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {6, 1, 4, 4});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type25);
  auto boxes = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type12);
  auto keypoint = model->addOperand(&type13);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap, boxes},
    {score, keypoint});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type15(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {6, 1, 4, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {6, 1});
  OperandType type4(Type::TENSOR_FLOAT32, {6, 1, 2});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type25);
  auto boxes = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type3);
  auto keypoint = model->addOperand(&type4);
  auto heatmap_tmp = model->addOperand(&type25);
  auto dummy16 = model->addOperand(&type14);
  auto param16 = model->addOperand(&type15);
  auto boxes_tmp = model->addOperand(&type2);
  auto dummy17 = model->addOperand(&type14);
  auto param17 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(float) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(float) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap_tmp, dummy16, param16}, {heatmap});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes_tmp, dummy17, param17}, {boxes});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap_tmp, boxes_tmp},
    {score, keypoint});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type15(Type::INT32, {});
  OperandType type2(Type::TENSOR_FLOAT32, {6, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {6, 1, 4, 4});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type25);
  auto boxes = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type12);
  auto keypoint = model->addOperand(&type13);
  auto heatmap_tmp = model->addOperand(&type25);
  auto dummy18 = model->addOperand(&type14);
  auto param18 = model->addOperand(&type15);
  auto boxes_tmp = model->addOperand(&type2);
  auto dummy19 = model->addOperand(&type14);
  auto param19 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap_tmp, dummy18, param18}, {heatmap});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes_tmp, dummy19, param19}, {boxes});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap_tmp, boxes_tmp},
    {score, keypoint});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type18(Type::TENSOR_FLOAT16, {6, 1, 2});
  OperandType type19(Type::TENSOR_FLOAT16, {6, 1});
  OperandType type26(Type::TENSOR_FLOAT16, {6, 1, 4, 4});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type26);
  auto boxes = model->addOperand(&type16);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type19);
  auto keypoint = model->addOperand(&type18);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap, boxes},
    {score, keypoint});
  assert(model->isValid());
}

bool is_ignored_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type21(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT16, {6, 1, 4, 4});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type26);
  auto boxes = model->addOperand(&type16);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type20);
  auto keypoint = model->addOperand(&type21);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap, boxes},
    {score, keypoint});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT16, {6, 1, 2});
  OperandType type19(Type::TENSOR_FLOAT16, {6, 1});
  OperandType type23(Type::TENSOR_FLOAT16, {1});
  OperandType type24(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type27(Type::TENSOR_FLOAT16, {6, 1, 4, 4});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type27);
  auto boxes = model->addOperand(&type24);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type19);
  auto keypoint = model->addOperand(&type18);
  auto heatmap_tmp = model->addOperand(&type27);
  auto dummy20 = model->addOperand(&type23);
  auto param20 = model->addOperand(&type15);
  auto boxes_tmp = model->addOperand(&type24);
  auto dummy21 = model->addOperand(&type23);
  auto param21 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(_Float16) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static _Float16 dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(_Float16) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap_tmp, dummy20, param20}, {heatmap});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes_tmp, dummy21, param21}, {boxes});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap_tmp, boxes_tmp},
    {score, keypoint});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type21(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type23(Type::TENSOR_FLOAT16, {1});
  OperandType type24(Type::TENSOR_FLOAT16, {6, 4});
  OperandType type27(Type::TENSOR_FLOAT16, {6, 1, 4, 4});
  // Phase 1, operands
  auto heatmap = model->addOperand(&type27);
  auto boxes = model->addOperand(&type24);
  auto layout = model->addOperand(&type0);
  auto score = model->addOperand(&type20);
  auto keypoint = model->addOperand(&type21);
  auto heatmap_tmp = model->addOperand(&type27);
  auto dummy22 = model->addOperand(&type23);
  auto param22 = model->addOperand(&type15);
  auto boxes_tmp = model->addOperand(&type24);
  auto dummy23 = model->addOperand(&type23);
  auto param23 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(_Float16) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static _Float16 dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(_Float16) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap_tmp, dummy22, param22}, {heatmap});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes_tmp, dummy23, param23}, {boxes});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap, boxes, layout}, {score, keypoint});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap_tmp, boxes_tmp},
    {score, keypoint});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 4, 2});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type5);
  auto boxes1 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type6);
  auto keypoint1 = model->addOperand(&type7);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type5);
  auto boxes1 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type12);
  auto keypoint1 = model->addOperand(&type13);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nhwc_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type15(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 4, 2});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type5);
  auto boxes1 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type6);
  auto keypoint1 = model->addOperand(&type7);
  auto heatmap1_tmp = model->addOperand(&type5);
  auto dummy24 = model->addOperand(&type14);
  auto param24 = model->addOperand(&type15);
  auto boxes1_tmp = model->addOperand(&type6);
  auto dummy25 = model->addOperand(&type14);
  auto param25 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(float) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static float dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(float) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap1_tmp, dummy24, param24}, {heatmap1});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes1_tmp, dummy25, param25}, {boxes1});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1_tmp, boxes1_tmp},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type15(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type5);
  auto boxes1 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type12);
  auto keypoint1 = model->addOperand(&type13);
  auto heatmap1_tmp = model->addOperand(&type5);
  auto dummy26 = model->addOperand(&type14);
  auto param26 = model->addOperand(&type15);
  auto boxes1_tmp = model->addOperand(&type6);
  auto dummy27 = model->addOperand(&type14);
  auto param27 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static float dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(float) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap1_tmp, dummy26, param26}, {heatmap1});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes1_tmp, dummy27, param27}, {boxes1});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1_tmp, boxes1_tmp},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 4, 2});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type5);
  auto boxes1 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type6);
  auto keypoint1 = model->addOperand(&type7);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {score1, keypoint1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type5);
  auto boxes1 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type12);
  auto keypoint1 = model->addOperand(&type13);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {score1, keypoint1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type15(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 4, 2});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type5);
  auto boxes1 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type6);
  auto keypoint1 = model->addOperand(&type7);
  auto heatmap1_tmp = model->addOperand(&type5);
  auto dummy28 = model->addOperand(&type14);
  auto param28 = model->addOperand(&type15);
  auto boxes1_tmp = model->addOperand(&type6);
  auto dummy29 = model->addOperand(&type14);
  auto param29 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy28_init[] = {0.0f};
  model->setOperandValue(dummy28, dummy28_init, sizeof(float) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float dummy29_init[] = {0.0f};
  model->setOperandValue(dummy29, dummy29_init, sizeof(float) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap1_tmp, dummy28, param28}, {heatmap1});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes1_tmp, dummy29, param29}, {boxes1});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1_tmp, boxes1_tmp},
    {score1, keypoint1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type15(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type5);
  auto boxes1 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type12);
  auto keypoint1 = model->addOperand(&type13);
  auto heatmap1_tmp = model->addOperand(&type5);
  auto dummy30 = model->addOperand(&type14);
  auto param30 = model->addOperand(&type15);
  auto boxes1_tmp = model->addOperand(&type6);
  auto dummy31 = model->addOperand(&type14);
  auto param31 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy30_init[] = {0.0f};
  model->setOperandValue(dummy30, dummy30_init, sizeof(float) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static float dummy31_init[] = {0.0f};
  model->setOperandValue(dummy31, dummy31_init, sizeof(float) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap1_tmp, dummy30, param30}, {heatmap1});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes1_tmp, dummy31, param31}, {boxes1});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1_tmp, boxes1_tmp},
    {score1, keypoint1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type28(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 4, 4, 4});
  OperandType type30(Type::TENSOR_FLOAT16, {2, 4, 2});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type29);
  auto boxes1 = model->addOperand(&type28);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type28);
  auto keypoint1 = model->addOperand(&type30);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type21(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type28(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 4, 4, 4});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type29);
  auto boxes1 = model->addOperand(&type28);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type20);
  auto keypoint1 = model->addOperand(&type21);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {1});
  OperandType type28(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type30(Type::TENSOR_FLOAT16, {2, 4, 2});
  OperandType type31(Type::TENSOR_FLOAT16, {2, 4, 4, 4});
  OperandType type32(Type::TENSOR_FLOAT16, {2, 4});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type31);
  auto boxes1 = model->addOperand(&type32);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type28);
  auto keypoint1 = model->addOperand(&type30);
  auto heatmap1_tmp = model->addOperand(&type31);
  auto dummy32 = model->addOperand(&type23);
  auto param32 = model->addOperand(&type15);
  auto boxes1_tmp = model->addOperand(&type32);
  auto dummy33 = model->addOperand(&type23);
  auto param33 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy32_init[] = {0.0f};
  model->setOperandValue(dummy32, dummy32_init, sizeof(_Float16) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static _Float16 dummy33_init[] = {0.0f};
  model->setOperandValue(dummy33, dummy33_init, sizeof(_Float16) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap1_tmp, dummy32, param32}, {heatmap1});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes1_tmp, dummy33, param33}, {boxes1});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1_tmp, boxes1_tmp},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type21(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type23(Type::TENSOR_FLOAT16, {1});
  OperandType type31(Type::TENSOR_FLOAT16, {2, 4, 4, 4});
  OperandType type32(Type::TENSOR_FLOAT16, {2, 4});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type31);
  auto boxes1 = model->addOperand(&type32);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type20);
  auto keypoint1 = model->addOperand(&type21);
  auto heatmap1_tmp = model->addOperand(&type31);
  auto dummy34 = model->addOperand(&type23);
  auto param34 = model->addOperand(&type15);
  auto boxes1_tmp = model->addOperand(&type32);
  auto dummy35 = model->addOperand(&type23);
  auto param35 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy34_init[] = {0.0f};
  model->setOperandValue(dummy34, dummy34_init, sizeof(_Float16) * 1);
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static _Float16 dummy35_init[] = {0.0f};
  model->setOperandValue(dummy35, dummy35_init, sizeof(_Float16) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap1_tmp, dummy34, param34}, {heatmap1});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes1_tmp, dummy35, param35}, {boxes1});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1_tmp, boxes1_tmp},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type33(Type::TENSOR_QUANT16_ASYMM, {2, 4}, 0.125f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 4}, 0.01f, 128);
  OperandType type35(Type::TENSOR_QUANT16_ASYMM, {2, 4, 2}, 0.125f, 0);
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {2, 4}, 0.01f, 0);
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type34);
  auto boxes1 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type36);
  auto keypoint1 = model->addOperand(&type35);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type33(Type::TENSOR_QUANT16_ASYMM, {2, 4}, 0.125f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 4}, 0.01f, 128);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.01f, 0);
  OperandType type38(Type::TENSOR_QUANT16_ASYMM, {0, 0, 0}, 0.125f, 0);
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type34);
  auto boxes1 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type37);
  auto keypoint1 = model->addOperand(&type38);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::INT32, {});
  OperandType type33(Type::TENSOR_QUANT16_ASYMM, {2, 4}, 0.125f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 4}, 0.01f, 128);
  OperandType type35(Type::TENSOR_QUANT16_ASYMM, {2, 4, 2}, 0.125f, 0);
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {2, 4}, 0.01f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 128);
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type34);
  auto boxes1 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type36);
  auto keypoint1 = model->addOperand(&type35);
  auto heatmap1_tmp = model->addOperand(&type34);
  auto dummy36 = model->addOperand(&type39);
  auto param36 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy36_init[] = {128};
  model->setOperandValue(dummy36, dummy36_init, sizeof(uint8_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap1_tmp, dummy36, param36}, {heatmap1});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {boxes1, heatmap1_tmp},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::INT32, {});
  OperandType type33(Type::TENSOR_QUANT16_ASYMM, {2, 4}, 0.125f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 4}, 0.01f, 128);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.01f, 0);
  OperandType type38(Type::TENSOR_QUANT16_ASYMM, {0, 0, 0}, 0.125f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 128);
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type34);
  auto boxes1 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type37);
  auto keypoint1 = model->addOperand(&type38);
  auto heatmap1_tmp = model->addOperand(&type34);
  auto dummy37 = model->addOperand(&type39);
  auto param37 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy37_init[] = {128};
  model->setOperandValue(dummy37, dummy37_init, sizeof(uint8_t) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap1_tmp, dummy37, param37}, {heatmap1});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {boxes1, heatmap1_tmp},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 4, 2});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type5);
  auto boxes1 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type6);
  auto keypoint1 = model->addOperand(&type7);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type5);
  auto boxes1 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type12);
  auto keypoint1 = model->addOperand(&type13);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nchw_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type15(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 4, 2});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type5);
  auto boxes1 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type6);
  auto keypoint1 = model->addOperand(&type7);
  auto heatmap1_tmp = model->addOperand(&type5);
  auto dummy38 = model->addOperand(&type14);
  auto param38 = model->addOperand(&type15);
  auto boxes1_tmp = model->addOperand(&type6);
  auto dummy39 = model->addOperand(&type14);
  auto param39 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy38_init[] = {0.0f};
  model->setOperandValue(dummy38, dummy38_init, sizeof(float) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static float dummy39_init[] = {0.0f};
  model->setOperandValue(dummy39, dummy39_init, sizeof(float) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap1_tmp, dummy38, param38}, {heatmap1});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes1_tmp, dummy39, param39}, {boxes1});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1_tmp, boxes1_tmp},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type15(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type5);
  auto boxes1 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type12);
  auto keypoint1 = model->addOperand(&type13);
  auto heatmap1_tmp = model->addOperand(&type5);
  auto dummy40 = model->addOperand(&type14);
  auto param40 = model->addOperand(&type15);
  auto boxes1_tmp = model->addOperand(&type6);
  auto dummy41 = model->addOperand(&type14);
  auto param41 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy40_init[] = {0.0f};
  model->setOperandValue(dummy40, dummy40_init, sizeof(float) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static float dummy41_init[] = {0.0f};
  model->setOperandValue(dummy41, dummy41_init, sizeof(float) * 1);
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap1_tmp, dummy40, param40}, {heatmap1});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes1_tmp, dummy41, param41}, {boxes1});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1_tmp, boxes1_tmp},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 4, 2});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type5);
  auto boxes1 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type6);
  auto keypoint1 = model->addOperand(&type7);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {score1, keypoint1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type5);
  auto boxes1 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type12);
  auto keypoint1 = model->addOperand(&type13);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {score1, keypoint1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type15(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4});
  OperandType type7(Type::TENSOR_FLOAT32, {2, 4, 2});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type5);
  auto boxes1 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type6);
  auto keypoint1 = model->addOperand(&type7);
  auto heatmap1_tmp = model->addOperand(&type5);
  auto dummy42 = model->addOperand(&type14);
  auto param42 = model->addOperand(&type15);
  auto boxes1_tmp = model->addOperand(&type6);
  auto dummy43 = model->addOperand(&type14);
  auto param43 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy42_init[] = {0.0f};
  model->setOperandValue(dummy42, dummy42_init, sizeof(float) * 1);
  static int32_t param42_init[] = {0};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static float dummy43_init[] = {0.0f};
  model->setOperandValue(dummy43, dummy43_init, sizeof(float) * 1);
  static int32_t param43_init[] = {0};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap1_tmp, dummy42, param42}, {heatmap1});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes1_tmp, dummy43, param43}, {boxes1});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1_tmp, boxes1_tmp},
    {score1, keypoint1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {0, 0, 0});
  OperandType type14(Type::TENSOR_FLOAT32, {1});
  OperandType type15(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {2, 4, 4, 4});
  OperandType type6(Type::TENSOR_FLOAT32, {2, 4});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type5);
  auto boxes1 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type12);
  auto keypoint1 = model->addOperand(&type13);
  auto heatmap1_tmp = model->addOperand(&type5);
  auto dummy44 = model->addOperand(&type14);
  auto param44 = model->addOperand(&type15);
  auto boxes1_tmp = model->addOperand(&type6);
  auto dummy45 = model->addOperand(&type14);
  auto param45 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy44_init[] = {0.0f};
  model->setOperandValue(dummy44, dummy44_init, sizeof(float) * 1);
  static int32_t param44_init[] = {0};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static float dummy45_init[] = {0.0f};
  model->setOperandValue(dummy45, dummy45_init, sizeof(float) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap1_tmp, dummy44, param44}, {heatmap1});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes1_tmp, dummy45, param45}, {boxes1});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1_tmp, boxes1_tmp},
    {score1, keypoint1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type28(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 4, 4, 4});
  OperandType type30(Type::TENSOR_FLOAT16, {2, 4, 2});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type29);
  auto boxes1 = model->addOperand(&type28);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type28);
  auto keypoint1 = model->addOperand(&type30);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type21(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type28(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type29(Type::TENSOR_FLOAT16, {2, 4, 4, 4});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type29);
  auto boxes1 = model->addOperand(&type28);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type20);
  auto keypoint1 = model->addOperand(&type21);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {1});
  OperandType type28(Type::TENSOR_FLOAT16, {2, 4});
  OperandType type30(Type::TENSOR_FLOAT16, {2, 4, 2});
  OperandType type31(Type::TENSOR_FLOAT16, {2, 4, 4, 4});
  OperandType type32(Type::TENSOR_FLOAT16, {2, 4});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type31);
  auto boxes1 = model->addOperand(&type32);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type28);
  auto keypoint1 = model->addOperand(&type30);
  auto heatmap1_tmp = model->addOperand(&type31);
  auto dummy46 = model->addOperand(&type23);
  auto param46 = model->addOperand(&type15);
  auto boxes1_tmp = model->addOperand(&type32);
  auto dummy47 = model->addOperand(&type23);
  auto param47 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy46_init[] = {0.0f};
  model->setOperandValue(dummy46, dummy46_init, sizeof(_Float16) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static _Float16 dummy47_init[] = {0.0f};
  model->setOperandValue(dummy47, dummy47_init, sizeof(_Float16) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap1_tmp, dummy46, param46}, {heatmap1});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes1_tmp, dummy47, param47}, {boxes1});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1_tmp, boxes1_tmp},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0});
  OperandType type21(Type::TENSOR_FLOAT16, {0, 0, 0});
  OperandType type23(Type::TENSOR_FLOAT16, {1});
  OperandType type31(Type::TENSOR_FLOAT16, {2, 4, 4, 4});
  OperandType type32(Type::TENSOR_FLOAT16, {2, 4});
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type31);
  auto boxes1 = model->addOperand(&type32);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type20);
  auto keypoint1 = model->addOperand(&type21);
  auto heatmap1_tmp = model->addOperand(&type31);
  auto dummy48 = model->addOperand(&type23);
  auto param48 = model->addOperand(&type15);
  auto boxes1_tmp = model->addOperand(&type32);
  auto dummy49 = model->addOperand(&type23);
  auto param49 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy48_init[] = {0.0f};
  model->setOperandValue(dummy48, dummy48_init, sizeof(_Float16) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static _Float16 dummy49_init[] = {0.0f};
  model->setOperandValue(dummy49, dummy49_init, sizeof(_Float16) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap1_tmp, dummy48, param48}, {heatmap1});
  model->addOperation(ANEURALNETWORKS_ADD, {boxes1_tmp, dummy49, param49}, {boxes1});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1_tmp, boxes1_tmp},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type33(Type::TENSOR_QUANT16_ASYMM, {2, 4}, 0.125f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 4}, 0.01f, 128);
  OperandType type35(Type::TENSOR_QUANT16_ASYMM, {2, 4, 2}, 0.125f, 0);
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {2, 4}, 0.01f, 0);
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type34);
  auto boxes1 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type36);
  auto keypoint1 = model->addOperand(&type35);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type33(Type::TENSOR_QUANT16_ASYMM, {2, 4}, 0.125f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 4}, 0.01f, 128);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.01f, 0);
  OperandType type38(Type::TENSOR_QUANT16_ASYMM, {0, 0, 0}, 0.125f, 0);
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type34);
  auto boxes1 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type37);
  auto keypoint1 = model->addOperand(&type38);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap1, boxes1},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::INT32, {});
  OperandType type33(Type::TENSOR_QUANT16_ASYMM, {2, 4}, 0.125f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 4}, 0.01f, 128);
  OperandType type35(Type::TENSOR_QUANT16_ASYMM, {2, 4, 2}, 0.125f, 0);
  OperandType type36(Type::TENSOR_QUANT8_ASYMM, {2, 4}, 0.01f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 128);
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type34);
  auto boxes1 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type36);
  auto keypoint1 = model->addOperand(&type35);
  auto heatmap1_tmp = model->addOperand(&type34);
  auto dummy50 = model->addOperand(&type39);
  auto param50 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy50_init[] = {128};
  model->setOperandValue(dummy50, dummy50_init, sizeof(uint8_t) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap1_tmp, dummy50, param50}, {heatmap1});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {boxes1, heatmap1_tmp},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::INT32, {});
  OperandType type33(Type::TENSOR_QUANT16_ASYMM, {2, 4}, 0.125f, 0);
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {2, 4, 4, 4}, 0.01f, 128);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.01f, 0);
  OperandType type38(Type::TENSOR_QUANT16_ASYMM, {0, 0, 0}, 0.125f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 128);
  // Phase 1, operands
  auto heatmap1 = model->addOperand(&type34);
  auto boxes1 = model->addOperand(&type33);
  auto layout = model->addOperand(&type0);
  auto score1 = model->addOperand(&type37);
  auto keypoint1 = model->addOperand(&type38);
  auto heatmap1_tmp = model->addOperand(&type34);
  auto dummy51 = model->addOperand(&type39);
  auto param51 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy51_init[] = {128};
  model->setOperandValue(dummy51, dummy51_init, sizeof(uint8_t) * 1);
  static int32_t param51_init[] = {0};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap1_tmp, dummy51, param51}, {heatmap1});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap1, boxes1, layout}, {score1, keypoint1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {boxes1, heatmap1_tmp},
    {score1, keypoint1});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type40(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {5, 4, 4, 1}, 0.5f, 128);
  OperandType type42(Type::TENSOR_QUANT16_ASYMM, {5, 1, 2}, 0.125f, 0);
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {5, 1}, 0.1f, 10);
  // Phase 1, operands
  auto heatmap2 = model->addOperand(&type41);
  auto boxes2 = model->addOperand(&type40);
  auto layout = model->addOperand(&type0);
  auto score2 = model->addOperand(&type43);
  auto keypoint2 = model->addOperand(&type42);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap2, boxes2, layout}, {score2, keypoint2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap2, boxes2},
    {score2, keypoint2});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type38(Type::TENSOR_QUANT16_ASYMM, {0, 0, 0}, 0.125f, 0);
  OperandType type40(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {5, 4, 4, 1}, 0.5f, 128);
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.1f, 10);
  // Phase 1, operands
  auto heatmap2 = model->addOperand(&type41);
  auto boxes2 = model->addOperand(&type40);
  auto layout = model->addOperand(&type0);
  auto score2 = model->addOperand(&type44);
  auto keypoint2 = model->addOperand(&type38);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap2, boxes2, layout}, {score2, keypoint2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap2, boxes2},
    {score2, keypoint2});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::INT32, {});
  OperandType type40(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {5, 4, 4, 1}, 0.5f, 128);
  OperandType type42(Type::TENSOR_QUANT16_ASYMM, {5, 1, 2}, 0.125f, 0);
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {5, 1}, 0.1f, 10);
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  // Phase 1, operands
  auto heatmap2 = model->addOperand(&type41);
  auto boxes2 = model->addOperand(&type40);
  auto layout = model->addOperand(&type0);
  auto score2 = model->addOperand(&type43);
  auto keypoint2 = model->addOperand(&type42);
  auto heatmap2_tmp = model->addOperand(&type41);
  auto dummy52 = model->addOperand(&type45);
  auto param52 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy52_init[] = {128};
  model->setOperandValue(dummy52, dummy52_init, sizeof(uint8_t) * 1);
  static int32_t param52_init[] = {0};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap2_tmp, dummy52, param52}, {heatmap2});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap2, boxes2, layout}, {score2, keypoint2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {boxes2, heatmap2_tmp},
    {score2, keypoint2});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::INT32, {});
  OperandType type38(Type::TENSOR_QUANT16_ASYMM, {0, 0, 0}, 0.125f, 0);
  OperandType type40(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {5, 4, 4, 1}, 0.5f, 128);
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.1f, 10);
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  // Phase 1, operands
  auto heatmap2 = model->addOperand(&type41);
  auto boxes2 = model->addOperand(&type40);
  auto layout = model->addOperand(&type0);
  auto score2 = model->addOperand(&type44);
  auto keypoint2 = model->addOperand(&type38);
  auto heatmap2_tmp = model->addOperand(&type41);
  auto dummy53 = model->addOperand(&type45);
  auto param53 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy53_init[] = {128};
  model->setOperandValue(dummy53, dummy53_init, sizeof(uint8_t) * 1);
  static int32_t param53_init[] = {0};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap2_tmp, dummy53, param53}, {heatmap2});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap2, boxes2, layout}, {score2, keypoint2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {boxes2, heatmap2_tmp},
    {score2, keypoint2});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type40(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type42(Type::TENSOR_QUANT16_ASYMM, {5, 1, 2}, 0.125f, 0);
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {5, 1}, 0.1f, 10);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {5, 1, 4, 4}, 0.5f, 128);
  // Phase 1, operands
  auto heatmap2 = model->addOperand(&type47);
  auto boxes2 = model->addOperand(&type40);
  auto layout = model->addOperand(&type0);
  auto score2 = model->addOperand(&type43);
  auto keypoint2 = model->addOperand(&type42);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap2, boxes2, layout}, {score2, keypoint2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap2, boxes2},
    {score2, keypoint2});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type38(Type::TENSOR_QUANT16_ASYMM, {0, 0, 0}, 0.125f, 0);
  OperandType type40(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.1f, 10);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {5, 1, 4, 4}, 0.5f, 128);
  // Phase 1, operands
  auto heatmap2 = model->addOperand(&type47);
  auto boxes2 = model->addOperand(&type40);
  auto layout = model->addOperand(&type0);
  auto score2 = model->addOperand(&type44);
  auto keypoint2 = model->addOperand(&type38);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap2, boxes2, layout}, {score2, keypoint2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {heatmap2, boxes2},
    {score2, keypoint2});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::INT32, {});
  OperandType type40(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type42(Type::TENSOR_QUANT16_ASYMM, {5, 1, 2}, 0.125f, 0);
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {5, 1}, 0.1f, 10);
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {5, 1, 4, 4}, 0.5f, 128);
  // Phase 1, operands
  auto heatmap2 = model->addOperand(&type47);
  auto boxes2 = model->addOperand(&type40);
  auto layout = model->addOperand(&type0);
  auto score2 = model->addOperand(&type43);
  auto keypoint2 = model->addOperand(&type42);
  auto heatmap2_tmp = model->addOperand(&type47);
  auto dummy54 = model->addOperand(&type45);
  auto param54 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy54_init[] = {128};
  model->setOperandValue(dummy54, dummy54_init, sizeof(uint8_t) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap2_tmp, dummy54, param54}, {heatmap2});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap2, boxes2, layout}, {score2, keypoint2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {boxes2, heatmap2_tmp},
    {score2, keypoint2});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
namespace generated_tests::heatmap_max_keypoint {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::INT32, {});
  OperandType type38(Type::TENSOR_QUANT16_ASYMM, {0, 0, 0}, 0.125f, 0);
  OperandType type40(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {0, 0}, 0.1f, 10);
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {5, 1, 4, 4}, 0.5f, 128);
  // Phase 1, operands
  auto heatmap2 = model->addOperand(&type47);
  auto boxes2 = model->addOperand(&type40);
  auto layout = model->addOperand(&type0);
  auto score2 = model->addOperand(&type44);
  auto keypoint2 = model->addOperand(&type38);
  auto heatmap2_tmp = model->addOperand(&type47);
  auto dummy55 = model->addOperand(&type45);
  auto param55 = model->addOperand(&type15);
  // Phase 2, operations
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy55_init[] = {128};
  model->setOperandValue(dummy55, dummy55_init, sizeof(uint8_t) * 1);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {heatmap2_tmp, dummy55, param55}, {heatmap2});
  model->addOperation(ANEURALNETWORKS_HEATMAP_MAX_KEYPOINT, {heatmap2, boxes2, layout}, {score2, keypoint2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {boxes2, heatmap2_tmp},
    {score2, keypoint2});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::heatmap_max_keypoint
