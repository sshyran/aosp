// Generated from roi_align.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::roi_align {

void CreateModel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

bool is_ignored_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

bool is_ignored_nhwc_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  auto in_tmp = model->addOperand(&type1);
  auto dummy = model->addOperand(&type26);
  auto param48 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type2);
  auto dummy1 = model->addOperand(&type26);
  auto param49 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy, param48}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy1, param49}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp, roi_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type25);
  auto in_tmp = model->addOperand(&type1);
  auto dummy2 = model->addOperand(&type26);
  auto param50 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type2);
  auto dummy3 = model->addOperand(&type26);
  auto param51 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param51_init[] = {0};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy2, param50}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy3, param51}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp, roi_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  auto in_tmp = model->addOperand(&type1);
  auto dummy4 = model->addOperand(&type26);
  auto param52 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type2);
  auto dummy5 = model->addOperand(&type26);
  auto param53 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(float) * 1);
  static int32_t param52_init[] = {0};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static float dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(float) * 1);
  static int32_t param53_init[] = {0};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy4, param52}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy5, param53}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp, roi_tmp},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type25);
  auto in_tmp = model->addOperand(&type1);
  auto dummy6 = model->addOperand(&type26);
  auto param54 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type2);
  auto dummy7 = model->addOperand(&type26);
  auto param55 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(float) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static float dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(float) * 1);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy6, param54}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy7, param55}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp, roi_tmp},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 128);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 1}, 0.0625f, 128);
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type27);
  auto roi = model->addOperand(&type29);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 128);
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.0625f, 128);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type27);
  auto roi = model->addOperand(&type29);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 128);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 1}, 0.0625f, 128);
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type27);
  auto roi = model->addOperand(&type29);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type28);
  auto in_tmp = model->addOperand(&type27);
  auto dummy8 = model->addOperand(&type31);
  auto param56 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy8_init[] = {128};
  model->setOperandValue(dummy8, dummy8_init, sizeof(uint8_t) * 1);
  static int32_t param56_init[] = {0};
  model->setOperandValue(param56, param56_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy8, param56}, {in});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 128);
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.0625f, 128);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type27);
  auto roi = model->addOperand(&type29);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type30);
  auto in_tmp = model->addOperand(&type27);
  auto dummy9 = model->addOperand(&type31);
  auto param57 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy9_init[] = {128};
  model->setOperandValue(dummy9, dummy9_init, sizeof(uint8_t) * 1);
  static int32_t param57_init[] = {0};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy9, param57}, {in});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type33(Type::TENSOR_FLOAT16, {4, 2, 2, 1});
  OperandType type34(Type::FLOAT16, {});
  OperandType type35(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type32);
  auto roi = model->addOperand(&type35);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type34);
  auto param4 = model->addOperand(&type34);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type33);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type34(Type::FLOAT16, {});
  OperandType type35(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type32);
  auto roi = model->addOperand(&type35);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type34);
  auto param4 = model->addOperand(&type34);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type33(Type::TENSOR_FLOAT16, {4, 2, 2, 1});
  OperandType type34(Type::FLOAT16, {});
  OperandType type37(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type38(Type::TENSOR_FLOAT16, {1});
  OperandType type39(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type37);
  auto roi = model->addOperand(&type39);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type34);
  auto param4 = model->addOperand(&type34);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type33);
  auto in_tmp = model->addOperand(&type37);
  auto dummy10 = model->addOperand(&type38);
  auto param58 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type39);
  auto dummy11 = model->addOperand(&type38);
  auto param59 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(_Float16) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static _Float16 dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(_Float16) * 1);
  static int32_t param59_init[] = {0};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy10, param58}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy11, param59}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp, roi_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type37(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type38(Type::TENSOR_FLOAT16, {1});
  OperandType type39(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type37);
  auto roi = model->addOperand(&type39);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type34);
  auto param4 = model->addOperand(&type34);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type36);
  auto in_tmp = model->addOperand(&type37);
  auto dummy12 = model->addOperand(&type38);
  auto param60 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type39);
  auto dummy13 = model->addOperand(&type38);
  auto param61 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(_Float16) * 1);
  static int32_t param60_init[] = {0};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  static _Float16 dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(_Float16) * 1);
  static int32_t param61_init[] = {0};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy12, param60}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy13, param61}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp, roi_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type41(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type40);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type41);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

bool is_ignored_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type40);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

bool is_ignored_nchw_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type41(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type40);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type41);
  auto in_tmp = model->addOperand(&type40);
  auto dummy14 = model->addOperand(&type26);
  auto param62 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type2);
  auto dummy15 = model->addOperand(&type26);
  auto param63 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(float) * 1);
  static int32_t param62_init[] = {0};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static float dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(float) * 1);
  static int32_t param63_init[] = {0};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy14, param62}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy15, param63}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp, roi_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type40);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type25);
  auto in_tmp = model->addOperand(&type40);
  auto dummy16 = model->addOperand(&type26);
  auto param64 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type2);
  auto dummy17 = model->addOperand(&type26);
  auto param65 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(float) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  static float dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(float) * 1);
  static int32_t param65_init[] = {0};
  model->setOperandValue(param65, param65_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy16, param64}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy17, param65}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp, roi_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type41(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type40);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type41);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type40);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type41(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type40);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type41);
  auto in_tmp = model->addOperand(&type40);
  auto dummy18 = model->addOperand(&type26);
  auto param66 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type2);
  auto dummy19 = model->addOperand(&type26);
  auto param67 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param66_init[] = {0};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param67_init[] = {0};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy18, param66}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy19, param67}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp, roi_tmp},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type40(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type40);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type25);
  auto in_tmp = model->addOperand(&type40);
  auto dummy20 = model->addOperand(&type26);
  auto param68 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type2);
  auto dummy21 = model->addOperand(&type26);
  auto param69 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(float) * 1);
  static int32_t param68_init[] = {0};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static float dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(float) * 1);
  static int32_t param69_init[] = {0};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy20, param68}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy21, param69}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp, roi_tmp},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type42(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 128);
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {4, 1, 2, 2}, 0.0625f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type42);
  auto roi = model->addOperand(&type29);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type43);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.0625f, 128);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type42(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type42);
  auto roi = model->addOperand(&type29);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type42(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 128);
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {4, 1, 2, 2}, 0.0625f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type42);
  auto roi = model->addOperand(&type29);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type43);
  auto in_tmp = model->addOperand(&type42);
  auto dummy22 = model->addOperand(&type31);
  auto param70 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy22_init[] = {128};
  model->setOperandValue(dummy22, dummy22_init, sizeof(uint8_t) * 1);
  static int32_t param70_init[] = {0};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy22, param70}, {in});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.0625f, 128);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type42(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type42);
  auto roi = model->addOperand(&type29);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type30);
  auto in_tmp = model->addOperand(&type42);
  auto dummy23 = model->addOperand(&type31);
  auto param71 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy23_init[] = {128};
  model->setOperandValue(dummy23, dummy23_init, sizeof(uint8_t) * 1);
  static int32_t param71_init[] = {0};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy23, param71}, {in});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi, in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type35(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type44(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type45(Type::TENSOR_FLOAT16, {4, 1, 2, 2});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type44);
  auto roi = model->addOperand(&type35);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type34);
  auto param4 = model->addOperand(&type34);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type45);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

bool is_ignored_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type35(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type44(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type44);
  auto roi = model->addOperand(&type35);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type34);
  auto param4 = model->addOperand(&type34);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in, roi},
    {out});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type38(Type::TENSOR_FLOAT16, {1});
  OperandType type39(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type45(Type::TENSOR_FLOAT16, {4, 1, 2, 2});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type46);
  auto roi = model->addOperand(&type39);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type34);
  auto param4 = model->addOperand(&type34);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type45);
  auto in_tmp = model->addOperand(&type46);
  auto dummy24 = model->addOperand(&type38);
  auto param72 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type39);
  auto dummy25 = model->addOperand(&type38);
  auto param73 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(_Float16) * 1);
  static int32_t param72_init[] = {0};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static _Float16 dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(_Float16) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy24, param72}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy25, param73}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp, roi_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type38(Type::TENSOR_FLOAT16, {1});
  OperandType type39(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type46);
  auto roi = model->addOperand(&type39);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type34);
  auto param4 = model->addOperand(&type34);
  auto param5 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type36);
  auto in_tmp = model->addOperand(&type46);
  auto dummy26 = model->addOperand(&type38);
  auto param74 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type39);
  auto dummy27 = model->addOperand(&type38);
  auto param75 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 4);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static int32_t param5_init[] = {4};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {4};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(_Float16) * 1);
  static int32_t param74_init[] = {0};
  model->setOperandValue(param74, param74_init, sizeof(int32_t) * 1);
  static _Float16 dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(_Float16) * 1);
  static int32_t param75_init[] = {0};
  model->setOperandValue(param75, param75_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy26, param74}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy27, param75}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roi, param, param1, param2, param3, param4, param5, param6, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp, roi_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 4, 8, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 4, 8, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nhwc_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 4, 8, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type8);
  auto in1_tmp = model->addOperand(&type7);
  auto dummy28 = model->addOperand(&type26);
  auto param76 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type2);
  auto dummy29 = model->addOperand(&type26);
  auto param77 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy28_init[] = {0.0f};
  model->setOperandValue(dummy28, dummy28_init, sizeof(float) * 1);
  static int32_t param76_init[] = {0};
  model->setOperandValue(param76, param76_init, sizeof(int32_t) * 1);
  static float dummy29_init[] = {0.0f};
  model->setOperandValue(dummy29, dummy29_init, sizeof(float) * 1);
  static int32_t param77_init[] = {0};
  model->setOperandValue(param77, param77_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy28, param76}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy29, param77}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp, roi1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 4, 8, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type25);
  auto in1_tmp = model->addOperand(&type7);
  auto dummy30 = model->addOperand(&type26);
  auto param78 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type2);
  auto dummy31 = model->addOperand(&type26);
  auto param79 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy30_init[] = {0.0f};
  model->setOperandValue(dummy30, dummy30_init, sizeof(float) * 1);
  static int32_t param78_init[] = {0};
  model->setOperandValue(param78, param78_init, sizeof(int32_t) * 1);
  static float dummy31_init[] = {0.0f};
  model->setOperandValue(dummy31, dummy31_init, sizeof(float) * 1);
  static int32_t param79_init[] = {0};
  model->setOperandValue(param79, param79_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy30, param78}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy31, param79}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp, roi1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 4, 8, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 4, 8, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 4, 8, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type8);
  auto in1_tmp = model->addOperand(&type7);
  auto dummy32 = model->addOperand(&type26);
  auto param80 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type2);
  auto dummy33 = model->addOperand(&type26);
  auto param81 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy32_init[] = {0.0f};
  model->setOperandValue(dummy32, dummy32_init, sizeof(float) * 1);
  static int32_t param80_init[] = {0};
  model->setOperandValue(param80, param80_init, sizeof(int32_t) * 1);
  static float dummy33_init[] = {0.0f};
  model->setOperandValue(dummy33, dummy33_init, sizeof(float) * 1);
  static int32_t param81_init[] = {0};
  model->setOperandValue(param81, param81_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy32, param80}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy33, param81}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp, roi1_tmp},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 4, 8, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type25);
  auto in1_tmp = model->addOperand(&type7);
  auto dummy34 = model->addOperand(&type26);
  auto param82 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type2);
  auto dummy35 = model->addOperand(&type26);
  auto param83 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy34_init[] = {0.0f};
  model->setOperandValue(dummy34, dummy34_init, sizeof(float) * 1);
  static int32_t param82_init[] = {0};
  model->setOperandValue(param82, param82_init, sizeof(int32_t) * 1);
  static float dummy35_init[] = {0.0f};
  model->setOperandValue(dummy35, dummy35_init, sizeof(float) * 1);
  static int32_t param83_init[] = {0};
  model->setOperandValue(param83, param83_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy34, param82}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy35, param83}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp, roi1_tmp},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {4, 4, 8, 2}, 0.04f, 0);
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {4, 2, 3, 2}, 0.03125f, 10);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type47);
  auto roi1 = model->addOperand(&type29);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type48);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {4, 4, 8, 2}, 0.04f, 0);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.03125f, 10);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type47);
  auto roi1 = model->addOperand(&type29);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type49);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {4, 4, 8, 2}, 0.04f, 0);
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {4, 2, 3, 2}, 0.03125f, 10);
  OperandType type5(Type::INT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1}, 0.04f, 0);
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type47);
  auto roi1 = model->addOperand(&type29);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type48);
  auto in1_tmp = model->addOperand(&type47);
  auto dummy36 = model->addOperand(&type50);
  auto param84 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy36_init[] = {0};
  model->setOperandValue(dummy36, dummy36_init, sizeof(uint8_t) * 1);
  static int32_t param84_init[] = {0};
  model->setOperandValue(param84, param84_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy36, param84}, {in1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi1, in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {4, 4, 8, 2}, 0.04f, 0);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.03125f, 10);
  OperandType type5(Type::INT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1}, 0.04f, 0);
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type47);
  auto roi1 = model->addOperand(&type29);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type49);
  auto in1_tmp = model->addOperand(&type47);
  auto dummy37 = model->addOperand(&type50);
  auto param85 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy37_init[] = {0};
  model->setOperandValue(dummy37, dummy37_init, sizeof(uint8_t) * 1);
  static int32_t param85_init[] = {0};
  model->setOperandValue(param85, param85_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy37, param85}, {in1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi1, in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type35(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type51(Type::TENSOR_FLOAT16, {4, 4, 8, 2});
  OperandType type52(Type::TENSOR_FLOAT16, {4, 2, 3, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type51);
  auto roi1 = model->addOperand(&type35);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type34);
  auto param11 = model->addOperand(&type34);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type52);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type35(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type51(Type::TENSOR_FLOAT16, {4, 4, 8, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type51);
  auto roi1 = model->addOperand(&type35);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type34);
  auto param11 = model->addOperand(&type34);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type38(Type::TENSOR_FLOAT16, {1});
  OperandType type39(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type52(Type::TENSOR_FLOAT16, {4, 2, 3, 2});
  OperandType type53(Type::TENSOR_FLOAT16, {4, 4, 8, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type53);
  auto roi1 = model->addOperand(&type39);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type34);
  auto param11 = model->addOperand(&type34);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type52);
  auto in1_tmp = model->addOperand(&type53);
  auto dummy38 = model->addOperand(&type38);
  auto param86 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type39);
  auto dummy39 = model->addOperand(&type38);
  auto param87 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy38_init[] = {0.0f};
  model->setOperandValue(dummy38, dummy38_init, sizeof(_Float16) * 1);
  static int32_t param86_init[] = {0};
  model->setOperandValue(param86, param86_init, sizeof(int32_t) * 1);
  static _Float16 dummy39_init[] = {0.0f};
  model->setOperandValue(dummy39, dummy39_init, sizeof(_Float16) * 1);
  static int32_t param87_init[] = {0};
  model->setOperandValue(param87, param87_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy38, param86}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy39, param87}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp, roi1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type38(Type::TENSOR_FLOAT16, {1});
  OperandType type39(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT16, {4, 4, 8, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type53);
  auto roi1 = model->addOperand(&type39);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type34);
  auto param11 = model->addOperand(&type34);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type36);
  auto in1_tmp = model->addOperand(&type53);
  auto dummy40 = model->addOperand(&type38);
  auto param88 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type39);
  auto dummy41 = model->addOperand(&type38);
  auto param89 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy40_init[] = {0.0f};
  model->setOperandValue(dummy40, dummy40_init, sizeof(_Float16) * 1);
  static int32_t param88_init[] = {0};
  model->setOperandValue(param88, param88_init, sizeof(int32_t) * 1);
  static _Float16 dummy41_init[] = {0.0f};
  model->setOperandValue(dummy41, dummy41_init, sizeof(_Float16) * 1);
  static int32_t param89_init[] = {0};
  model->setOperandValue(param89, param89_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy40, param88}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy41, param89}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp, roi1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {4, 2, 4, 8});
  OperandType type55(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type54);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type55);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {4, 2, 4, 8});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type54);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nchw_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {4, 2, 4, 8});
  OperandType type55(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type54);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type55);
  auto in1_tmp = model->addOperand(&type54);
  auto dummy42 = model->addOperand(&type26);
  auto param90 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type2);
  auto dummy43 = model->addOperand(&type26);
  auto param91 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy42_init[] = {0.0f};
  model->setOperandValue(dummy42, dummy42_init, sizeof(float) * 1);
  static int32_t param90_init[] = {0};
  model->setOperandValue(param90, param90_init, sizeof(int32_t) * 1);
  static float dummy43_init[] = {0.0f};
  model->setOperandValue(dummy43, dummy43_init, sizeof(float) * 1);
  static int32_t param91_init[] = {0};
  model->setOperandValue(param91, param91_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy42, param90}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy43, param91}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp, roi1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {4, 2, 4, 8});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type54);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type25);
  auto in1_tmp = model->addOperand(&type54);
  auto dummy44 = model->addOperand(&type26);
  auto param92 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type2);
  auto dummy45 = model->addOperand(&type26);
  auto param93 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy44_init[] = {0.0f};
  model->setOperandValue(dummy44, dummy44_init, sizeof(float) * 1);
  static int32_t param92_init[] = {0};
  model->setOperandValue(param92, param92_init, sizeof(int32_t) * 1);
  static float dummy45_init[] = {0.0f};
  model->setOperandValue(dummy45, dummy45_init, sizeof(float) * 1);
  static int32_t param93_init[] = {0};
  model->setOperandValue(param93, param93_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy44, param92}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy45, param93}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp, roi1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {4, 2, 4, 8});
  OperandType type55(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type54);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type55);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {4, 2, 4, 8});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type54);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {4, 2, 4, 8});
  OperandType type55(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type54);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type55);
  auto in1_tmp = model->addOperand(&type54);
  auto dummy46 = model->addOperand(&type26);
  auto param94 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type2);
  auto dummy47 = model->addOperand(&type26);
  auto param95 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy46_init[] = {0.0f};
  model->setOperandValue(dummy46, dummy46_init, sizeof(float) * 1);
  static int32_t param94_init[] = {0};
  model->setOperandValue(param94, param94_init, sizeof(int32_t) * 1);
  static float dummy47_init[] = {0.0f};
  model->setOperandValue(dummy47, dummy47_init, sizeof(float) * 1);
  static int32_t param95_init[] = {0};
  model->setOperandValue(param95, param95_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy46, param94}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy47, param95}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp, roi1_tmp},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {4, 2, 4, 8});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type54);
  auto roi1 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type25);
  auto in1_tmp = model->addOperand(&type54);
  auto dummy48 = model->addOperand(&type26);
  auto param96 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type2);
  auto dummy49 = model->addOperand(&type26);
  auto param97 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy48_init[] = {0.0f};
  model->setOperandValue(dummy48, dummy48_init, sizeof(float) * 1);
  static int32_t param96_init[] = {0};
  model->setOperandValue(param96, param96_init, sizeof(int32_t) * 1);
  static float dummy49_init[] = {0.0f};
  model->setOperandValue(dummy49, dummy49_init, sizeof(float) * 1);
  static int32_t param97_init[] = {0};
  model->setOperandValue(param97, param97_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy48, param96}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy49, param97}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp, roi1_tmp},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type56(Type::TENSOR_QUANT8_ASYMM, {4, 2, 4, 8}, 0.04f, 0);
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 3}, 0.03125f, 10);
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type56);
  auto roi1 = model->addOperand(&type29);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type57);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.03125f, 10);
  OperandType type5(Type::INT32, {});
  OperandType type56(Type::TENSOR_QUANT8_ASYMM, {4, 2, 4, 8}, 0.04f, 0);
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type56);
  auto roi1 = model->addOperand(&type29);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type49);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1}, 0.04f, 0);
  OperandType type56(Type::TENSOR_QUANT8_ASYMM, {4, 2, 4, 8}, 0.04f, 0);
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 3}, 0.03125f, 10);
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type56);
  auto roi1 = model->addOperand(&type29);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type57);
  auto in1_tmp = model->addOperand(&type56);
  auto dummy50 = model->addOperand(&type50);
  auto param98 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy50_init[] = {0};
  model->setOperandValue(dummy50, dummy50_init, sizeof(uint8_t) * 1);
  static int32_t param98_init[] = {0};
  model->setOperandValue(param98, param98_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy50, param98}, {in1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi1, in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.03125f, 10);
  OperandType type5(Type::INT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1}, 0.04f, 0);
  OperandType type56(Type::TENSOR_QUANT8_ASYMM, {4, 2, 4, 8}, 0.04f, 0);
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type56);
  auto roi1 = model->addOperand(&type29);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type6);
  auto param11 = model->addOperand(&type6);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type49);
  auto in1_tmp = model->addOperand(&type56);
  auto dummy51 = model->addOperand(&type50);
  auto param99 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static float param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy51_init[] = {0};
  model->setOperandValue(dummy51, dummy51_init, sizeof(uint8_t) * 1);
  static int32_t param99_init[] = {0};
  model->setOperandValue(param99, param99_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy51, param99}, {in1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi1, in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type35(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {4, 2, 4, 8});
  OperandType type59(Type::TENSOR_FLOAT16, {4, 2, 2, 3});
  // Phase 1, operands
  auto in1 = model->addOperand(&type58);
  auto roi1 = model->addOperand(&type35);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type34);
  auto param11 = model->addOperand(&type34);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type59);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type35(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {4, 2, 4, 8});
  // Phase 1, operands
  auto in1 = model->addOperand(&type58);
  auto roi1 = model->addOperand(&type35);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type34);
  auto param11 = model->addOperand(&type34);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1, roi1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type38(Type::TENSOR_FLOAT16, {1});
  OperandType type39(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type59(Type::TENSOR_FLOAT16, {4, 2, 2, 3});
  OperandType type60(Type::TENSOR_FLOAT16, {4, 2, 4, 8});
  // Phase 1, operands
  auto in1 = model->addOperand(&type60);
  auto roi1 = model->addOperand(&type39);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type34);
  auto param11 = model->addOperand(&type34);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type59);
  auto in1_tmp = model->addOperand(&type60);
  auto dummy52 = model->addOperand(&type38);
  auto param100 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type39);
  auto dummy53 = model->addOperand(&type38);
  auto param101 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy52_init[] = {0.0f};
  model->setOperandValue(dummy52, dummy52_init, sizeof(_Float16) * 1);
  static int32_t param100_init[] = {0};
  model->setOperandValue(param100, param100_init, sizeof(int32_t) * 1);
  static _Float16 dummy53_init[] = {0.0f};
  model->setOperandValue(dummy53, dummy53_init, sizeof(_Float16) * 1);
  static int32_t param101_init[] = {0};
  model->setOperandValue(param101, param101_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy52, param100}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy53, param101}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp, roi1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type38(Type::TENSOR_FLOAT16, {1});
  OperandType type39(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type60(Type::TENSOR_FLOAT16, {4, 2, 4, 8});
  // Phase 1, operands
  auto in1 = model->addOperand(&type60);
  auto roi1 = model->addOperand(&type39);
  auto param7 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  auto param9 = model->addOperand(&type5);
  auto param10 = model->addOperand(&type34);
  auto param11 = model->addOperand(&type34);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type36);
  auto in1_tmp = model->addOperand(&type60);
  auto dummy54 = model->addOperand(&type38);
  auto param102 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type39);
  auto dummy55 = model->addOperand(&type38);
  auto param103 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param7_init[] = {0, 0, 3, 3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 4);
  static int32_t param8_init[] = {2};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 param10_init[] = {4.0f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {4.0f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static int32_t param12_init[] = {4};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {4};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy54_init[] = {0.0f};
  model->setOperandValue(dummy54, dummy54_init, sizeof(_Float16) * 1);
  static int32_t param102_init[] = {0};
  model->setOperandValue(param102, param102_init, sizeof(int32_t) * 1);
  static _Float16 dummy55_init[] = {0.0f};
  model->setOperandValue(dummy55, dummy55_init, sizeof(_Float16) * 1);
  static int32_t param103_init[] = {0};
  model->setOperandValue(param103, param103_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy54, param102}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy55, param103}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roi1, param7, param8, param9, param10, param11, param12, param13, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp, roi1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type9);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nhwc_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type9);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nhwc_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type9);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type8);
  auto in2_tmp = model->addOperand(&type9);
  auto dummy56 = model->addOperand(&type26);
  auto param104 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type2);
  auto dummy57 = model->addOperand(&type26);
  auto param105 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy56_init[] = {0.0f};
  model->setOperandValue(dummy56, dummy56_init, sizeof(float) * 1);
  static int32_t param104_init[] = {0};
  model->setOperandValue(param104, param104_init, sizeof(int32_t) * 1);
  static float dummy57_init[] = {0.0f};
  model->setOperandValue(dummy57, dummy57_init, sizeof(float) * 1);
  static int32_t param105_init[] = {0};
  model->setOperandValue(param105, param105_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy56, param104}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy57, param105}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp, roi2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type9);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type25);
  auto in2_tmp = model->addOperand(&type9);
  auto dummy58 = model->addOperand(&type26);
  auto param106 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type2);
  auto dummy59 = model->addOperand(&type26);
  auto param107 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy58_init[] = {0.0f};
  model->setOperandValue(dummy58, dummy58_init, sizeof(float) * 1);
  static int32_t param106_init[] = {0};
  model->setOperandValue(param106, param106_init, sizeof(int32_t) * 1);
  static float dummy59_init[] = {0.0f};
  model->setOperandValue(dummy59, dummy59_init, sizeof(float) * 1);
  static int32_t param107_init[] = {0};
  model->setOperandValue(param107, param107_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy58, param106}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy59, param107}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp, roi2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type9);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type9);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type9);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type8);
  auto in2_tmp = model->addOperand(&type9);
  auto dummy60 = model->addOperand(&type26);
  auto param108 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type2);
  auto dummy61 = model->addOperand(&type26);
  auto param109 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy60_init[] = {0.0f};
  model->setOperandValue(dummy60, dummy60_init, sizeof(float) * 1);
  static int32_t param108_init[] = {0};
  model->setOperandValue(param108, param108_init, sizeof(int32_t) * 1);
  static float dummy61_init[] = {0.0f};
  model->setOperandValue(dummy61, dummy61_init, sizeof(float) * 1);
  static int32_t param109_init[] = {0};
  model->setOperandValue(param109, param109_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy60, param108}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy61, param109}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp, roi2_tmp},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 4, 8, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type9);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type25);
  auto in2_tmp = model->addOperand(&type9);
  auto dummy62 = model->addOperand(&type26);
  auto param110 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type2);
  auto dummy63 = model->addOperand(&type26);
  auto param111 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy62_init[] = {0.0f};
  model->setOperandValue(dummy62, dummy62_init, sizeof(float) * 1);
  static int32_t param110_init[] = {0};
  model->setOperandValue(param110, param110_init, sizeof(int32_t) * 1);
  static float dummy63_init[] = {0.0f};
  model->setOperandValue(dummy63, dummy63_init, sizeof(float) * 1);
  static int32_t param111_init[] = {0};
  model->setOperandValue(param111, param111_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy62, param110}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy63, param111}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp, roi2_tmp},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {4, 2, 3, 2}, 0.03125f, 10);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {2, 4, 8, 2}, 0.04f, 0);
  // Phase 1, operands
  auto in2 = model->addOperand(&type61);
  auto roi2 = model->addOperand(&type29);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type48);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.03125f, 10);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {2, 4, 8, 2}, 0.04f, 0);
  // Phase 1, operands
  auto in2 = model->addOperand(&type61);
  auto roi2 = model->addOperand(&type29);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type49);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {4, 2, 3, 2}, 0.03125f, 10);
  OperandType type5(Type::INT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1}, 0.04f, 0);
  OperandType type6(Type::FLOAT32, {});
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {2, 4, 8, 2}, 0.04f, 0);
  // Phase 1, operands
  auto in2 = model->addOperand(&type61);
  auto roi2 = model->addOperand(&type29);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type48);
  auto in2_tmp = model->addOperand(&type61);
  auto dummy64 = model->addOperand(&type50);
  auto param112 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy64_init[] = {0};
  model->setOperandValue(dummy64, dummy64_init, sizeof(uint8_t) * 1);
  static int32_t param112_init[] = {0};
  model->setOperandValue(param112, param112_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy64, param112}, {in2});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi2, in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.03125f, 10);
  OperandType type5(Type::INT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1}, 0.04f, 0);
  OperandType type6(Type::FLOAT32, {});
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {2, 4, 8, 2}, 0.04f, 0);
  // Phase 1, operands
  auto in2 = model->addOperand(&type61);
  auto roi2 = model->addOperand(&type29);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type49);
  auto in2_tmp = model->addOperand(&type61);
  auto dummy65 = model->addOperand(&type50);
  auto param113 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy65_init[] = {0};
  model->setOperandValue(dummy65, dummy65_init, sizeof(uint8_t) * 1);
  static int32_t param113_init[] = {0};
  model->setOperandValue(param113, param113_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy65, param113}, {in2});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi2, in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type35(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type52(Type::TENSOR_FLOAT16, {4, 2, 3, 2});
  OperandType type62(Type::TENSOR_FLOAT16, {2, 4, 8, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type62);
  auto roi2 = model->addOperand(&type35);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type34);
  auto param18 = model->addOperand(&type34);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type52);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static _Float16 param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(_Float16) * 1);
  static _Float16 param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type35(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type62(Type::TENSOR_FLOAT16, {2, 4, 8, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type62);
  auto roi2 = model->addOperand(&type35);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type34);
  auto param18 = model->addOperand(&type34);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static _Float16 param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(_Float16) * 1);
  static _Float16 param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type38(Type::TENSOR_FLOAT16, {1});
  OperandType type39(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type52(Type::TENSOR_FLOAT16, {4, 2, 3, 2});
  OperandType type63(Type::TENSOR_FLOAT16, {2, 4, 8, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type63);
  auto roi2 = model->addOperand(&type39);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type34);
  auto param18 = model->addOperand(&type34);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type52);
  auto in2_tmp = model->addOperand(&type63);
  auto dummy66 = model->addOperand(&type38);
  auto param114 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type39);
  auto dummy67 = model->addOperand(&type38);
  auto param115 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static _Float16 param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(_Float16) * 1);
  static _Float16 param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy66_init[] = {0.0f};
  model->setOperandValue(dummy66, dummy66_init, sizeof(_Float16) * 1);
  static int32_t param114_init[] = {0};
  model->setOperandValue(param114, param114_init, sizeof(int32_t) * 1);
  static _Float16 dummy67_init[] = {0.0f};
  model->setOperandValue(dummy67, dummy67_init, sizeof(_Float16) * 1);
  static int32_t param115_init[] = {0};
  model->setOperandValue(param115, param115_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy66, param114}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy67, param115}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp, roi2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type38(Type::TENSOR_FLOAT16, {1});
  OperandType type39(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type63(Type::TENSOR_FLOAT16, {2, 4, 8, 2});
  // Phase 1, operands
  auto in2 = model->addOperand(&type63);
  auto roi2 = model->addOperand(&type39);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type34);
  auto param18 = model->addOperand(&type34);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type36);
  auto in2_tmp = model->addOperand(&type63);
  auto dummy68 = model->addOperand(&type38);
  auto param116 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type39);
  auto dummy69 = model->addOperand(&type38);
  auto param117 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static _Float16 param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(_Float16) * 1);
  static _Float16 param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy68_init[] = {0.0f};
  model->setOperandValue(dummy68, dummy68_init, sizeof(_Float16) * 1);
  static int32_t param116_init[] = {0};
  model->setOperandValue(param116, param116_init, sizeof(int32_t) * 1);
  static _Float16 dummy69_init[] = {0.0f};
  model->setOperandValue(dummy69, dummy69_init, sizeof(_Float16) * 1);
  static int32_t param117_init[] = {0};
  model->setOperandValue(param117, param117_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy68, param116}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy69, param117}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp, roi2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type6(Type::FLOAT32, {});
  OperandType type64(Type::TENSOR_FLOAT32, {2, 2, 4, 8});
  // Phase 1, operands
  auto in2 = model->addOperand(&type64);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type55);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nchw_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type64(Type::TENSOR_FLOAT32, {2, 2, 4, 8});
  // Phase 1, operands
  auto in2 = model->addOperand(&type64);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nchw_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type6(Type::FLOAT32, {});
  OperandType type64(Type::TENSOR_FLOAT32, {2, 2, 4, 8});
  // Phase 1, operands
  auto in2 = model->addOperand(&type64);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type55);
  auto in2_tmp = model->addOperand(&type64);
  auto dummy70 = model->addOperand(&type26);
  auto param118 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type2);
  auto dummy71 = model->addOperand(&type26);
  auto param119 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy70_init[] = {0.0f};
  model->setOperandValue(dummy70, dummy70_init, sizeof(float) * 1);
  static int32_t param118_init[] = {0};
  model->setOperandValue(param118, param118_init, sizeof(int32_t) * 1);
  static float dummy71_init[] = {0.0f};
  model->setOperandValue(dummy71, dummy71_init, sizeof(float) * 1);
  static int32_t param119_init[] = {0};
  model->setOperandValue(param119, param119_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy70, param118}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy71, param119}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp, roi2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type64(Type::TENSOR_FLOAT32, {2, 2, 4, 8});
  // Phase 1, operands
  auto in2 = model->addOperand(&type64);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type25);
  auto in2_tmp = model->addOperand(&type64);
  auto dummy72 = model->addOperand(&type26);
  auto param120 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type2);
  auto dummy73 = model->addOperand(&type26);
  auto param121 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy72_init[] = {0.0f};
  model->setOperandValue(dummy72, dummy72_init, sizeof(float) * 1);
  static int32_t param120_init[] = {0};
  model->setOperandValue(param120, param120_init, sizeof(int32_t) * 1);
  static float dummy73_init[] = {0.0f};
  model->setOperandValue(dummy73, dummy73_init, sizeof(float) * 1);
  static int32_t param121_init[] = {0};
  model->setOperandValue(param121, param121_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy72, param120}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy73, param121}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp, roi2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type6(Type::FLOAT32, {});
  OperandType type64(Type::TENSOR_FLOAT32, {2, 2, 4, 8});
  // Phase 1, operands
  auto in2 = model->addOperand(&type64);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type55);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type64(Type::TENSOR_FLOAT32, {2, 2, 4, 8});
  // Phase 1, operands
  auto in2 = model->addOperand(&type64);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type6(Type::FLOAT32, {});
  OperandType type64(Type::TENSOR_FLOAT32, {2, 2, 4, 8});
  // Phase 1, operands
  auto in2 = model->addOperand(&type64);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type55);
  auto in2_tmp = model->addOperand(&type64);
  auto dummy74 = model->addOperand(&type26);
  auto param122 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type2);
  auto dummy75 = model->addOperand(&type26);
  auto param123 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy74_init[] = {0.0f};
  model->setOperandValue(dummy74, dummy74_init, sizeof(float) * 1);
  static int32_t param122_init[] = {0};
  model->setOperandValue(param122, param122_init, sizeof(int32_t) * 1);
  static float dummy75_init[] = {0.0f};
  model->setOperandValue(dummy75, dummy75_init, sizeof(float) * 1);
  static int32_t param123_init[] = {0};
  model->setOperandValue(param123, param123_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy74, param122}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy75, param123}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp, roi2_tmp},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type64(Type::TENSOR_FLOAT32, {2, 2, 4, 8});
  // Phase 1, operands
  auto in2 = model->addOperand(&type64);
  auto roi2 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type25);
  auto in2_tmp = model->addOperand(&type64);
  auto dummy76 = model->addOperand(&type26);
  auto param124 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type2);
  auto dummy77 = model->addOperand(&type26);
  auto param125 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy76_init[] = {0.0f};
  model->setOperandValue(dummy76, dummy76_init, sizeof(float) * 1);
  static int32_t param124_init[] = {0};
  model->setOperandValue(param124, param124_init, sizeof(int32_t) * 1);
  static float dummy77_init[] = {0.0f};
  model->setOperandValue(dummy77, dummy77_init, sizeof(float) * 1);
  static int32_t param125_init[] = {0};
  model->setOperandValue(param125, param125_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy76, param124}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy77, param125}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp, roi2_tmp},
    {out2});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 3}, 0.03125f, 10);
  OperandType type6(Type::FLOAT32, {});
  OperandType type65(Type::TENSOR_QUANT8_ASYMM, {2, 2, 4, 8}, 0.04f, 0);
  // Phase 1, operands
  auto in2 = model->addOperand(&type65);
  auto roi2 = model->addOperand(&type29);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type57);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.03125f, 10);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type65(Type::TENSOR_QUANT8_ASYMM, {2, 2, 4, 8}, 0.04f, 0);
  // Phase 1, operands
  auto in2 = model->addOperand(&type65);
  auto roi2 = model->addOperand(&type29);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type49);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1}, 0.04f, 0);
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 3}, 0.03125f, 10);
  OperandType type6(Type::FLOAT32, {});
  OperandType type65(Type::TENSOR_QUANT8_ASYMM, {2, 2, 4, 8}, 0.04f, 0);
  // Phase 1, operands
  auto in2 = model->addOperand(&type65);
  auto roi2 = model->addOperand(&type29);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type57);
  auto in2_tmp = model->addOperand(&type65);
  auto dummy78 = model->addOperand(&type50);
  auto param126 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy78_init[] = {0};
  model->setOperandValue(dummy78, dummy78_init, sizeof(uint8_t) * 1);
  static int32_t param126_init[] = {0};
  model->setOperandValue(param126, param126_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy78, param126}, {in2});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi2, in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.03125f, 10);
  OperandType type5(Type::INT32, {});
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1}, 0.04f, 0);
  OperandType type6(Type::FLOAT32, {});
  OperandType type65(Type::TENSOR_QUANT8_ASYMM, {2, 2, 4, 8}, 0.04f, 0);
  // Phase 1, operands
  auto in2 = model->addOperand(&type65);
  auto roi2 = model->addOperand(&type29);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type6);
  auto param18 = model->addOperand(&type6);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type49);
  auto in2_tmp = model->addOperand(&type65);
  auto dummy79 = model->addOperand(&type50);
  auto param127 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static float param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy79_init[] = {0};
  model->setOperandValue(dummy79, dummy79_init, sizeof(uint8_t) * 1);
  static int32_t param127_init[] = {0};
  model->setOperandValue(param127, param127_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy79, param127}, {in2});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi2, in2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type35(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type59(Type::TENSOR_FLOAT16, {4, 2, 2, 3});
  OperandType type66(Type::TENSOR_FLOAT16, {2, 2, 4, 8});
  // Phase 1, operands
  auto in2 = model->addOperand(&type66);
  auto roi2 = model->addOperand(&type35);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type34);
  auto param18 = model->addOperand(&type34);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type59);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static _Float16 param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(_Float16) * 1);
  static _Float16 param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_float16_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type35(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type66(Type::TENSOR_FLOAT16, {2, 2, 4, 8});
  // Phase 1, operands
  auto in2 = model->addOperand(&type66);
  auto roi2 = model->addOperand(&type35);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type34);
  auto param18 = model->addOperand(&type34);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static _Float16 param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(_Float16) * 1);
  static _Float16 param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2, roi2},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type38(Type::TENSOR_FLOAT16, {1});
  OperandType type39(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type59(Type::TENSOR_FLOAT16, {4, 2, 2, 3});
  OperandType type67(Type::TENSOR_FLOAT16, {2, 2, 4, 8});
  // Phase 1, operands
  auto in2 = model->addOperand(&type67);
  auto roi2 = model->addOperand(&type39);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type34);
  auto param18 = model->addOperand(&type34);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type59);
  auto in2_tmp = model->addOperand(&type67);
  auto dummy80 = model->addOperand(&type38);
  auto param128 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type39);
  auto dummy81 = model->addOperand(&type38);
  auto param129 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static _Float16 param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(_Float16) * 1);
  static _Float16 param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy80_init[] = {0.0f};
  model->setOperandValue(dummy80, dummy80_init, sizeof(_Float16) * 1);
  static int32_t param128_init[] = {0};
  model->setOperandValue(param128, param128_init, sizeof(int32_t) * 1);
  static _Float16 dummy81_init[] = {0.0f};
  model->setOperandValue(dummy81, dummy81_init, sizeof(_Float16) * 1);
  static int32_t param129_init[] = {0};
  model->setOperandValue(param129, param129_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy80, param128}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy81, param129}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp, roi2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type38(Type::TENSOR_FLOAT16, {1});
  OperandType type39(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type4(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type67(Type::TENSOR_FLOAT16, {2, 2, 4, 8});
  // Phase 1, operands
  auto in2 = model->addOperand(&type67);
  auto roi2 = model->addOperand(&type39);
  auto param14 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  auto param16 = model->addOperand(&type5);
  auto param17 = model->addOperand(&type34);
  auto param18 = model->addOperand(&type34);
  auto param19 = model->addOperand(&type5);
  auto param20 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type36);
  auto in2_tmp = model->addOperand(&type67);
  auto dummy82 = model->addOperand(&type38);
  auto param130 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type39);
  auto dummy83 = model->addOperand(&type38);
  auto param131 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param14_init[] = {0, 0, 1, 1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 4);
  static int32_t param15_init[] = {2};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {3};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static _Float16 param17_init[] = {4.0f};
  model->setOperandValue(param17, param17_init, sizeof(_Float16) * 1);
  static _Float16 param18_init[] = {4.0f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy82_init[] = {0.0f};
  model->setOperandValue(dummy82, dummy82_init, sizeof(_Float16) * 1);
  static int32_t param130_init[] = {0};
  model->setOperandValue(param130, param130_init, sizeof(int32_t) * 1);
  static _Float16 dummy83_init[] = {0.0f};
  model->setOperandValue(dummy83, dummy83_init, sizeof(_Float16) * 1);
  static int32_t param131_init[] = {0};
  model->setOperandValue(param131, param131_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy82, param130}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy83, param131}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in2, roi2, param14, param15, param16, param17, param18, param19, param20, layout}, {out2});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in2_tmp, roi2_tmp},
    {out2});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 4, 4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {5, 2, 2, 1});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type10);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nhwc_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 4, 4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type10);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nhwc_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 4, 4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {5, 2, 2, 1});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type10);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type12);
  auto in3_tmp = model->addOperand(&type10);
  auto dummy84 = model->addOperand(&type26);
  auto param132 = model->addOperand(&type5);
  auto roi3_tmp = model->addOperand(&type11);
  auto dummy85 = model->addOperand(&type26);
  auto param133 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy84_init[] = {0.0f};
  model->setOperandValue(dummy84, dummy84_init, sizeof(float) * 1);
  static int32_t param132_init[] = {0};
  model->setOperandValue(param132, param132_init, sizeof(int32_t) * 1);
  static float dummy85_init[] = {0.0f};
  model->setOperandValue(dummy85, dummy85_init, sizeof(float) * 1);
  static int32_t param133_init[] = {0};
  model->setOperandValue(param133, param133_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy84, param132}, {in3});
  model->addOperation(ANEURALNETWORKS_ADD, {roi3_tmp, dummy85, param133}, {roi3});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp, roi3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 4, 4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type10);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type25);
  auto in3_tmp = model->addOperand(&type10);
  auto dummy86 = model->addOperand(&type26);
  auto param134 = model->addOperand(&type5);
  auto roi3_tmp = model->addOperand(&type11);
  auto dummy87 = model->addOperand(&type26);
  auto param135 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy86_init[] = {0.0f};
  model->setOperandValue(dummy86, dummy86_init, sizeof(float) * 1);
  static int32_t param134_init[] = {0};
  model->setOperandValue(param134, param134_init, sizeof(int32_t) * 1);
  static float dummy87_init[] = {0.0f};
  model->setOperandValue(dummy87, dummy87_init, sizeof(float) * 1);
  static int32_t param135_init[] = {0};
  model->setOperandValue(param135, param135_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy86, param134}, {in3});
  model->addOperation(ANEURALNETWORKS_ADD, {roi3_tmp, dummy87, param135}, {roi3});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp, roi3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 4, 4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {5, 2, 2, 1});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type10);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 4, 4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type10);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 4, 4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type12(Type::TENSOR_FLOAT32, {5, 2, 2, 1});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type10);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type12);
  auto in3_tmp = model->addOperand(&type10);
  auto dummy88 = model->addOperand(&type26);
  auto param136 = model->addOperand(&type5);
  auto roi3_tmp = model->addOperand(&type11);
  auto dummy89 = model->addOperand(&type26);
  auto param137 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy88_init[] = {0.0f};
  model->setOperandValue(dummy88, dummy88_init, sizeof(float) * 1);
  static int32_t param136_init[] = {0};
  model->setOperandValue(param136, param136_init, sizeof(int32_t) * 1);
  static float dummy89_init[] = {0.0f};
  model->setOperandValue(dummy89, dummy89_init, sizeof(float) * 1);
  static int32_t param137_init[] = {0};
  model->setOperandValue(param137, param137_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy88, param136}, {in3});
  model->addOperation(ANEURALNETWORKS_ADD, {roi3_tmp, dummy89, param137}, {roi3});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp, roi3_tmp},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 4, 4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in3 = model->addOperand(&type10);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type25);
  auto in3_tmp = model->addOperand(&type10);
  auto dummy90 = model->addOperand(&type26);
  auto param138 = model->addOperand(&type5);
  auto roi3_tmp = model->addOperand(&type11);
  auto dummy91 = model->addOperand(&type26);
  auto param139 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy90_init[] = {0.0f};
  model->setOperandValue(dummy90, dummy90_init, sizeof(float) * 1);
  static int32_t param138_init[] = {0};
  model->setOperandValue(param138, param138_init, sizeof(int32_t) * 1);
  static float dummy91_init[] = {0.0f};
  model->setOperandValue(dummy91, dummy91_init, sizeof(float) * 1);
  static int32_t param139_init[] = {0};
  model->setOperandValue(param139, param139_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy90, param138}, {in3});
  model->addOperation(ANEURALNETWORKS_ADD, {roi3_tmp, dummy91, param139}, {roi3});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp, roi3_tmp},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type68(Type::TENSOR_QUANT8_ASYMM, {4, 4, 4, 1}, 0.25f, 128);
  OperandType type69(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2, 1}, 0.0625f, 128);
  OperandType type70(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  // Phase 1, operands
  auto in3 = model->addOperand(&type68);
  auto roi3 = model->addOperand(&type70);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type69);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.0625f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type68(Type::TENSOR_QUANT8_ASYMM, {4, 4, 4, 1}, 0.25f, 128);
  OperandType type70(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  // Phase 1, operands
  auto in3 = model->addOperand(&type68);
  auto roi3 = model->addOperand(&type70);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type68(Type::TENSOR_QUANT8_ASYMM, {4, 4, 4, 1}, 0.25f, 128);
  OperandType type69(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2, 1}, 0.0625f, 128);
  OperandType type70(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  // Phase 1, operands
  auto in3 = model->addOperand(&type68);
  auto roi3 = model->addOperand(&type70);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type69);
  auto in3_tmp = model->addOperand(&type68);
  auto dummy92 = model->addOperand(&type31);
  auto param140 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy92_init[] = {128};
  model->setOperandValue(dummy92, dummy92_init, sizeof(uint8_t) * 1);
  static int32_t param140_init[] = {0};
  model->setOperandValue(param140, param140_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy92, param140}, {in3});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi3, in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.0625f, 128);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type68(Type::TENSOR_QUANT8_ASYMM, {4, 4, 4, 1}, 0.25f, 128);
  OperandType type70(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  // Phase 1, operands
  auto in3 = model->addOperand(&type68);
  auto roi3 = model->addOperand(&type70);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type30);
  auto in3_tmp = model->addOperand(&type68);
  auto dummy93 = model->addOperand(&type31);
  auto param141 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy93_init[] = {128};
  model->setOperandValue(dummy93, dummy93_init, sizeof(uint8_t) * 1);
  static int32_t param141_init[] = {0};
  model->setOperandValue(param141, param141_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy93, param141}, {in3});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi3, in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type34(Type::FLOAT16, {});
  OperandType type5(Type::INT32, {});
  OperandType type71(Type::TENSOR_FLOAT16, {4, 4, 4, 1});
  OperandType type72(Type::TENSOR_FLOAT16, {5, 2, 2, 1});
  OperandType type73(Type::TENSOR_FLOAT16, {5, 4});
  // Phase 1, operands
  auto in3 = model->addOperand(&type71);
  auto roi3 = model->addOperand(&type73);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type34);
  auto param25 = model->addOperand(&type34);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type72);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(_Float16) * 1);
  static _Float16 param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type34(Type::FLOAT16, {});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type71(Type::TENSOR_FLOAT16, {4, 4, 4, 1});
  OperandType type73(Type::TENSOR_FLOAT16, {5, 4});
  // Phase 1, operands
  auto in3 = model->addOperand(&type71);
  auto roi3 = model->addOperand(&type73);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type34);
  auto param25 = model->addOperand(&type34);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(_Float16) * 1);
  static _Float16 param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type34(Type::FLOAT16, {});
  OperandType type38(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  OperandType type72(Type::TENSOR_FLOAT16, {5, 2, 2, 1});
  OperandType type74(Type::TENSOR_FLOAT16, {4, 4, 4, 1});
  OperandType type75(Type::TENSOR_FLOAT16, {5, 4});
  // Phase 1, operands
  auto in3 = model->addOperand(&type74);
  auto roi3 = model->addOperand(&type75);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type34);
  auto param25 = model->addOperand(&type34);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type72);
  auto in3_tmp = model->addOperand(&type74);
  auto dummy94 = model->addOperand(&type38);
  auto param142 = model->addOperand(&type5);
  auto roi3_tmp = model->addOperand(&type75);
  auto dummy95 = model->addOperand(&type38);
  auto param143 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(_Float16) * 1);
  static _Float16 param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy94_init[] = {0.0f};
  model->setOperandValue(dummy94, dummy94_init, sizeof(_Float16) * 1);
  static int32_t param142_init[] = {0};
  model->setOperandValue(param142, param142_init, sizeof(int32_t) * 1);
  static _Float16 dummy95_init[] = {0.0f};
  model->setOperandValue(dummy95, dummy95_init, sizeof(_Float16) * 1);
  static int32_t param143_init[] = {0};
  model->setOperandValue(param143, param143_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy94, param142}, {in3});
  model->addOperation(ANEURALNETWORKS_ADD, {roi3_tmp, dummy95, param143}, {roi3});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp, roi3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type34(Type::FLOAT16, {});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type38(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  OperandType type74(Type::TENSOR_FLOAT16, {4, 4, 4, 1});
  OperandType type75(Type::TENSOR_FLOAT16, {5, 4});
  // Phase 1, operands
  auto in3 = model->addOperand(&type74);
  auto roi3 = model->addOperand(&type75);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type34);
  auto param25 = model->addOperand(&type34);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type36);
  auto in3_tmp = model->addOperand(&type74);
  auto dummy96 = model->addOperand(&type38);
  auto param144 = model->addOperand(&type5);
  auto roi3_tmp = model->addOperand(&type75);
  auto dummy97 = model->addOperand(&type38);
  auto param145 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(_Float16) * 1);
  static _Float16 param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy96_init[] = {0.0f};
  model->setOperandValue(dummy96, dummy96_init, sizeof(_Float16) * 1);
  static int32_t param144_init[] = {0};
  model->setOperandValue(param144, param144_init, sizeof(int32_t) * 1);
  static _Float16 dummy97_init[] = {0.0f};
  model->setOperandValue(dummy97, dummy97_init, sizeof(_Float16) * 1);
  static int32_t param145_init[] = {0};
  model->setOperandValue(param145, param145_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy96, param144}, {in3});
  model->addOperation(ANEURALNETWORKS_ADD, {roi3_tmp, dummy97, param145}, {roi3});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp, roi3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type76(Type::TENSOR_FLOAT32, {4, 1, 4, 4});
  OperandType type77(Type::TENSOR_FLOAT32, {5, 1, 2, 2});
  // Phase 1, operands
  auto in3 = model->addOperand(&type76);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type77);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nchw_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type76(Type::TENSOR_FLOAT32, {4, 1, 4, 4});
  // Phase 1, operands
  auto in3 = model->addOperand(&type76);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nchw_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type76(Type::TENSOR_FLOAT32, {4, 1, 4, 4});
  OperandType type77(Type::TENSOR_FLOAT32, {5, 1, 2, 2});
  // Phase 1, operands
  auto in3 = model->addOperand(&type76);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type77);
  auto in3_tmp = model->addOperand(&type76);
  auto dummy98 = model->addOperand(&type26);
  auto param146 = model->addOperand(&type5);
  auto roi3_tmp = model->addOperand(&type11);
  auto dummy99 = model->addOperand(&type26);
  auto param147 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy98_init[] = {0.0f};
  model->setOperandValue(dummy98, dummy98_init, sizeof(float) * 1);
  static int32_t param146_init[] = {0};
  model->setOperandValue(param146, param146_init, sizeof(int32_t) * 1);
  static float dummy99_init[] = {0.0f};
  model->setOperandValue(dummy99, dummy99_init, sizeof(float) * 1);
  static int32_t param147_init[] = {0};
  model->setOperandValue(param147, param147_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy98, param146}, {in3});
  model->addOperation(ANEURALNETWORKS_ADD, {roi3_tmp, dummy99, param147}, {roi3});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp, roi3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type76(Type::TENSOR_FLOAT32, {4, 1, 4, 4});
  // Phase 1, operands
  auto in3 = model->addOperand(&type76);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type25);
  auto in3_tmp = model->addOperand(&type76);
  auto dummy100 = model->addOperand(&type26);
  auto param148 = model->addOperand(&type5);
  auto roi3_tmp = model->addOperand(&type11);
  auto dummy101 = model->addOperand(&type26);
  auto param149 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy100_init[] = {0.0f};
  model->setOperandValue(dummy100, dummy100_init, sizeof(float) * 1);
  static int32_t param148_init[] = {0};
  model->setOperandValue(param148, param148_init, sizeof(int32_t) * 1);
  static float dummy101_init[] = {0.0f};
  model->setOperandValue(dummy101, dummy101_init, sizeof(float) * 1);
  static int32_t param149_init[] = {0};
  model->setOperandValue(param149, param149_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy100, param148}, {in3});
  model->addOperation(ANEURALNETWORKS_ADD, {roi3_tmp, dummy101, param149}, {roi3});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp, roi3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type76(Type::TENSOR_FLOAT32, {4, 1, 4, 4});
  OperandType type77(Type::TENSOR_FLOAT32, {5, 1, 2, 2});
  // Phase 1, operands
  auto in3 = model->addOperand(&type76);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type77);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type76(Type::TENSOR_FLOAT32, {4, 1, 4, 4});
  // Phase 1, operands
  auto in3 = model->addOperand(&type76);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type76(Type::TENSOR_FLOAT32, {4, 1, 4, 4});
  OperandType type77(Type::TENSOR_FLOAT32, {5, 1, 2, 2});
  // Phase 1, operands
  auto in3 = model->addOperand(&type76);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type77);
  auto in3_tmp = model->addOperand(&type76);
  auto dummy102 = model->addOperand(&type26);
  auto param150 = model->addOperand(&type5);
  auto roi3_tmp = model->addOperand(&type11);
  auto dummy103 = model->addOperand(&type26);
  auto param151 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy102_init[] = {0.0f};
  model->setOperandValue(dummy102, dummy102_init, sizeof(float) * 1);
  static int32_t param150_init[] = {0};
  model->setOperandValue(param150, param150_init, sizeof(int32_t) * 1);
  static float dummy103_init[] = {0.0f};
  model->setOperandValue(dummy103, dummy103_init, sizeof(float) * 1);
  static int32_t param151_init[] = {0};
  model->setOperandValue(param151, param151_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy102, param150}, {in3});
  model->addOperation(ANEURALNETWORKS_ADD, {roi3_tmp, dummy103, param151}, {roi3});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp, roi3_tmp},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type76(Type::TENSOR_FLOAT32, {4, 1, 4, 4});
  // Phase 1, operands
  auto in3 = model->addOperand(&type76);
  auto roi3 = model->addOperand(&type11);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type25);
  auto in3_tmp = model->addOperand(&type76);
  auto dummy104 = model->addOperand(&type26);
  auto param152 = model->addOperand(&type5);
  auto roi3_tmp = model->addOperand(&type11);
  auto dummy105 = model->addOperand(&type26);
  auto param153 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy104_init[] = {0.0f};
  model->setOperandValue(dummy104, dummy104_init, sizeof(float) * 1);
  static int32_t param152_init[] = {0};
  model->setOperandValue(param152, param152_init, sizeof(int32_t) * 1);
  static float dummy105_init[] = {0.0f};
  model->setOperandValue(dummy105, dummy105_init, sizeof(float) * 1);
  static int32_t param153_init[] = {0};
  model->setOperandValue(param153, param153_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy104, param152}, {in3});
  model->addOperation(ANEURALNETWORKS_ADD, {roi3_tmp, dummy105, param153}, {roi3});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp, roi3_tmp},
    {out3});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type70(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type78(Type::TENSOR_QUANT8_ASYMM, {4, 1, 4, 4}, 0.25f, 128);
  OperandType type79(Type::TENSOR_QUANT8_ASYMM, {5, 1, 2, 2}, 0.0625f, 128);
  // Phase 1, operands
  auto in3 = model->addOperand(&type78);
  auto roi3 = model->addOperand(&type70);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type79);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.0625f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type70(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type78(Type::TENSOR_QUANT8_ASYMM, {4, 1, 4, 4}, 0.25f, 128);
  // Phase 1, operands
  auto in3 = model->addOperand(&type78);
  auto roi3 = model->addOperand(&type70);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type70(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type78(Type::TENSOR_QUANT8_ASYMM, {4, 1, 4, 4}, 0.25f, 128);
  OperandType type79(Type::TENSOR_QUANT8_ASYMM, {5, 1, 2, 2}, 0.0625f, 128);
  // Phase 1, operands
  auto in3 = model->addOperand(&type78);
  auto roi3 = model->addOperand(&type70);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type79);
  auto in3_tmp = model->addOperand(&type78);
  auto dummy106 = model->addOperand(&type31);
  auto param154 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy106_init[] = {128};
  model->setOperandValue(dummy106, dummy106_init, sizeof(uint8_t) * 1);
  static int32_t param154_init[] = {0};
  model->setOperandValue(param154, param154_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy106, param154}, {in3});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi3, in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.0625f, 128);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type70(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type78(Type::TENSOR_QUANT8_ASYMM, {4, 1, 4, 4}, 0.25f, 128);
  // Phase 1, operands
  auto in3 = model->addOperand(&type78);
  auto roi3 = model->addOperand(&type70);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type6);
  auto param25 = model->addOperand(&type6);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type30);
  auto in3_tmp = model->addOperand(&type78);
  auto dummy107 = model->addOperand(&type31);
  auto param155 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static float param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(float) * 1);
  static float param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy107_init[] = {128};
  model->setOperandValue(dummy107, dummy107_init, sizeof(uint8_t) * 1);
  static int32_t param155_init[] = {0};
  model->setOperandValue(param155, param155_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy107, param155}, {in3});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi3, in3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type34(Type::FLOAT16, {});
  OperandType type5(Type::INT32, {});
  OperandType type73(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type80(Type::TENSOR_FLOAT16, {4, 1, 4, 4});
  OperandType type81(Type::TENSOR_FLOAT16, {5, 1, 2, 2});
  // Phase 1, operands
  auto in3 = model->addOperand(&type80);
  auto roi3 = model->addOperand(&type73);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type34);
  auto param25 = model->addOperand(&type34);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type81);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(_Float16) * 1);
  static _Float16 param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_float16_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type34(Type::FLOAT16, {});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type73(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type80(Type::TENSOR_FLOAT16, {4, 1, 4, 4});
  // Phase 1, operands
  auto in3 = model->addOperand(&type80);
  auto roi3 = model->addOperand(&type73);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type34);
  auto param25 = model->addOperand(&type34);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(_Float16) * 1);
  static _Float16 param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3, roi3},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_float16_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type34(Type::FLOAT16, {});
  OperandType type38(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  OperandType type75(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type81(Type::TENSOR_FLOAT16, {5, 1, 2, 2});
  OperandType type82(Type::TENSOR_FLOAT16, {4, 1, 4, 4});
  // Phase 1, operands
  auto in3 = model->addOperand(&type82);
  auto roi3 = model->addOperand(&type75);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type34);
  auto param25 = model->addOperand(&type34);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type81);
  auto in3_tmp = model->addOperand(&type82);
  auto dummy108 = model->addOperand(&type38);
  auto param156 = model->addOperand(&type5);
  auto roi3_tmp = model->addOperand(&type75);
  auto dummy109 = model->addOperand(&type38);
  auto param157 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(_Float16) * 1);
  static _Float16 param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy108_init[] = {0.0f};
  model->setOperandValue(dummy108, dummy108_init, sizeof(_Float16) * 1);
  static int32_t param156_init[] = {0};
  model->setOperandValue(param156, param156_init, sizeof(int32_t) * 1);
  static _Float16 dummy109_init[] = {0.0f};
  model->setOperandValue(dummy109, dummy109_init, sizeof(_Float16) * 1);
  static int32_t param157_init[] = {0};
  model->setOperandValue(param157, param157_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy108, param156}, {in3});
  model->addOperation(ANEURALNETWORKS_ADD, {roi3_tmp, dummy109, param157}, {roi3});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp, roi3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_INT32, {5});
  OperandType type34(Type::FLOAT16, {});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type38(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  OperandType type75(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type82(Type::TENSOR_FLOAT16, {4, 1, 4, 4});
  // Phase 1, operands
  auto in3 = model->addOperand(&type82);
  auto roi3 = model->addOperand(&type75);
  auto param21 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  auto param23 = model->addOperand(&type5);
  auto param24 = model->addOperand(&type34);
  auto param25 = model->addOperand(&type34);
  auto param26 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out3 = model->addOperand(&type36);
  auto in3_tmp = model->addOperand(&type82);
  auto dummy110 = model->addOperand(&type38);
  auto param158 = model->addOperand(&type5);
  auto roi3_tmp = model->addOperand(&type75);
  auto dummy111 = model->addOperand(&type38);
  auto param159 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param21_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 5);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {2};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static _Float16 param24_init[] = {2.0f};
  model->setOperandValue(param24, param24_init, sizeof(_Float16) * 1);
  static _Float16 param25_init[] = {1.0f};
  model->setOperandValue(param25, param25_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {4};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy110_init[] = {0.0f};
  model->setOperandValue(dummy110, dummy110_init, sizeof(_Float16) * 1);
  static int32_t param158_init[] = {0};
  model->setOperandValue(param158, param158_init, sizeof(int32_t) * 1);
  static _Float16 dummy111_init[] = {0.0f};
  model->setOperandValue(dummy111, dummy111_init, sizeof(_Float16) * 1);
  static int32_t param159_init[] = {0};
  model->setOperandValue(param159, param159_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in3_tmp, dummy110, param158}, {in3});
  model->addOperation(ANEURALNETWORKS_ADD, {roi3_tmp, dummy111, param159}, {roi3});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in3, roi3, param21, param22, param23, param24, param25, param26, param27, layout}, {out3});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in3_tmp, roi3_tmp},
    {out3});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_zero_sized_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type20(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type14);
  auto roi4 = model->addOperand(&type15);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type5);
  auto param31 = model->addOperand(&type5);
  auto param32 = model->addOperand(&type6);
  auto param33 = model->addOperand(&type6);
  auto param34 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type18);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type20);
  auto param35 = model->addOperand(&type5);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type6);
  auto param38 = model->addOperand(&type6);
  auto param39 = model->addOperand(&type5);
  auto param40 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type21);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(float) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static int32_t param30_init[] = {-1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static float param32_init[] = {0.4f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {1.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {2.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {4};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31, param32, param33, param34}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param35, param36, param37, param38, param39, param40, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_zero_sized_nhwc_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type20(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type14);
  auto roi4 = model->addOperand(&type15);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type5);
  auto param31 = model->addOperand(&type5);
  auto param32 = model->addOperand(&type6);
  auto param33 = model->addOperand(&type6);
  auto param34 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type18);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type20);
  auto param35 = model->addOperand(&type5);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type6);
  auto param38 = model->addOperand(&type6);
  auto param39 = model->addOperand(&type5);
  auto param40 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type25);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(float) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static int32_t param30_init[] = {-1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static float param32_init[] = {0.4f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {1.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {2.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {4};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31, param32, param33, param34}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param35, param36, param37, param38, param39, param40, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_zero_sized_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type20(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type21(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type14);
  auto roi4 = model->addOperand(&type15);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type5);
  auto param31 = model->addOperand(&type5);
  auto param32 = model->addOperand(&type6);
  auto param33 = model->addOperand(&type6);
  auto param34 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type18);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type20);
  auto param35 = model->addOperand(&type5);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type6);
  auto param38 = model->addOperand(&type6);
  auto param39 = model->addOperand(&type5);
  auto param40 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type21);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(float) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static int32_t param30_init[] = {-1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static float param32_init[] = {0.4f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {1.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {2.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {4};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31, param32, param33, param34}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param35, param36, param37, param38, param39, param40, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_zero_sized_nhwc_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type20(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type14);
  auto roi4 = model->addOperand(&type15);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type5);
  auto param31 = model->addOperand(&type5);
  auto param32 = model->addOperand(&type6);
  auto param33 = model->addOperand(&type6);
  auto param34 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type18);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type20);
  auto param35 = model->addOperand(&type5);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type6);
  auto param38 = model->addOperand(&type6);
  auto param39 = model->addOperand(&type5);
  auto param40 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type25);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(float) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static int32_t param30_init[] = {-1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static float param32_init[] = {0.4f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {1.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {2.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {4};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31, param32, param33, param34}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param35, param36, param37, param38, param39, param40, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_zero_sized_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type83(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type84(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type85(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type86(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type87(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type88(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type87);
  auto roi4 = model->addOperand(&type85);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type5);
  auto param31 = model->addOperand(&type5);
  auto param32 = model->addOperand(&type6);
  auto param33 = model->addOperand(&type6);
  auto param34 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type88);
  auto roiOut = model->addOperand(&type86);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type84);
  auto param35 = model->addOperand(&type5);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type6);
  auto param38 = model->addOperand(&type6);
  auto param39 = model->addOperand(&type5);
  auto param40 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type83);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi4_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi4, roi4_init, sizeof(uint16_t) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static int32_t param30_init[] = {-1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static float param32_init[] = {0.4f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {1.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {2.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {4};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31, param32, param33, param34}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param35, param36, param37, param38, param39, param40, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_zero_sized_nhwc_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type84(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type85(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type86(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type87(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type88(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type89(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type87);
  auto roi4 = model->addOperand(&type85);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type5);
  auto param31 = model->addOperand(&type5);
  auto param32 = model->addOperand(&type6);
  auto param33 = model->addOperand(&type6);
  auto param34 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type88);
  auto roiOut = model->addOperand(&type86);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type84);
  auto param35 = model->addOperand(&type5);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type6);
  auto param38 = model->addOperand(&type6);
  auto param39 = model->addOperand(&type5);
  auto param40 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type89);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi4_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi4, roi4_init, sizeof(uint16_t) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static int32_t param30_init[] = {-1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static float param32_init[] = {0.4f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {1.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {2.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {4};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31, param32, param33, param34}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param35, param36, param37, param38, param39, param40, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_zero_sized_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type34(Type::FLOAT16, {});
  OperandType type5(Type::INT32, {});
  OperandType type90(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type91(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type92(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type93(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type94(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type95(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type94);
  auto roi4 = model->addOperand(&type92);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type34);
  auto param30 = model->addOperand(&type5);
  auto param31 = model->addOperand(&type5);
  auto param32 = model->addOperand(&type34);
  auto param33 = model->addOperand(&type34);
  auto param34 = model->addOperand(&type34);
  auto scoresOut = model->addOperand(&type95);
  auto roiOut = model->addOperand(&type93);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type91);
  auto param35 = model->addOperand(&type5);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type34);
  auto param38 = model->addOperand(&type34);
  auto param39 = model->addOperand(&type5);
  auto param40 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type90);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(_Float16) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static _Float16 param29_init[] = {0.30000001192092896f};
  model->setOperandValue(param29, param29_init, sizeof(_Float16) * 1);
  static int32_t param30_init[] = {-1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static _Float16 param32_init[] = {0.4000000059604645f};
  model->setOperandValue(param32, param32_init, sizeof(_Float16) * 1);
  static _Float16 param33_init[] = {1.0f};
  model->setOperandValue(param33, param33_init, sizeof(_Float16) * 1);
  static _Float16 param34_init[] = {0.30000001192092896f};
  model->setOperandValue(param34, param34_init, sizeof(_Float16) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static _Float16 param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(_Float16) * 1);
  static _Float16 param38_init[] = {2.0f};
  model->setOperandValue(param38, param38_init, sizeof(_Float16) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {4};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31, param32, param33, param34}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param35, param36, param37, param38, param39, param40, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_zero_sized_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type34(Type::FLOAT16, {});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type91(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type92(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type93(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type94(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type96(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type94);
  auto roi4 = model->addOperand(&type92);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type34);
  auto param30 = model->addOperand(&type5);
  auto param31 = model->addOperand(&type5);
  auto param32 = model->addOperand(&type34);
  auto param33 = model->addOperand(&type34);
  auto param34 = model->addOperand(&type34);
  auto scoresOut = model->addOperand(&type96);
  auto roiOut = model->addOperand(&type93);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type91);
  auto param35 = model->addOperand(&type5);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type34);
  auto param38 = model->addOperand(&type34);
  auto param39 = model->addOperand(&type5);
  auto param40 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type36);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(_Float16) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static _Float16 param29_init[] = {0.30000001192092896f};
  model->setOperandValue(param29, param29_init, sizeof(_Float16) * 1);
  static int32_t param30_init[] = {-1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static _Float16 param32_init[] = {0.4000000059604645f};
  model->setOperandValue(param32, param32_init, sizeof(_Float16) * 1);
  static _Float16 param33_init[] = {1.0f};
  model->setOperandValue(param33, param33_init, sizeof(_Float16) * 1);
  static _Float16 param34_init[] = {0.30000001192092896f};
  model->setOperandValue(param34, param34_init, sizeof(_Float16) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static _Float16 param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(_Float16) * 1);
  static _Float16 param38_init[] = {2.0f};
  model->setOperandValue(param38, param38_init, sizeof(_Float16) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {4};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31, param32, param33, param34}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param35, param36, param37, param38, param39, param40, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_zero_sized_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type20(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type97(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores = model->addOperand(&type14);
  auto roi4 = model->addOperand(&type15);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type5);
  auto param31 = model->addOperand(&type5);
  auto param32 = model->addOperand(&type6);
  auto param33 = model->addOperand(&type6);
  auto param34 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type18);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type20);
  auto param35 = model->addOperand(&type5);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type6);
  auto param38 = model->addOperand(&type6);
  auto param39 = model->addOperand(&type5);
  auto param40 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type97);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(float) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static int32_t param30_init[] = {-1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static float param32_init[] = {0.4f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {1.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {2.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {4};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31, param32, param33, param34}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param35, param36, param37, param38, param39, param40, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_zero_sized_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type20(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type14);
  auto roi4 = model->addOperand(&type15);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type5);
  auto param31 = model->addOperand(&type5);
  auto param32 = model->addOperand(&type6);
  auto param33 = model->addOperand(&type6);
  auto param34 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type18);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type20);
  auto param35 = model->addOperand(&type5);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type6);
  auto param38 = model->addOperand(&type6);
  auto param39 = model->addOperand(&type5);
  auto param40 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type25);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(float) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static int32_t param30_init[] = {-1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static float param32_init[] = {0.4f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {1.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {2.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {4};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31, param32, param33, param34}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param35, param36, param37, param38, param39, param40, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_zero_sized_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type20(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type97(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores = model->addOperand(&type14);
  auto roi4 = model->addOperand(&type15);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type5);
  auto param31 = model->addOperand(&type5);
  auto param32 = model->addOperand(&type6);
  auto param33 = model->addOperand(&type6);
  auto param34 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type18);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type20);
  auto param35 = model->addOperand(&type5);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type6);
  auto param38 = model->addOperand(&type6);
  auto param39 = model->addOperand(&type5);
  auto param40 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type97);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(float) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static int32_t param30_init[] = {-1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static float param32_init[] = {0.4f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {1.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {2.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {4};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31, param32, param33, param34}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param35, param36, param37, param38, param39, param40, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_zero_sized_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type15(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type16(Type::TENSOR_FLOAT32, {0});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type18(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type20(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto scores = model->addOperand(&type14);
  auto roi4 = model->addOperand(&type15);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type5);
  auto param31 = model->addOperand(&type5);
  auto param32 = model->addOperand(&type6);
  auto param33 = model->addOperand(&type6);
  auto param34 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type16);
  auto roiOut = model->addOperand(&type18);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type20);
  auto param35 = model->addOperand(&type5);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type6);
  auto param38 = model->addOperand(&type6);
  auto param39 = model->addOperand(&type5);
  auto param40 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type25);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(float) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static int32_t param30_init[] = {-1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static float param32_init[] = {0.4f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {1.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {2.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {4};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31, param32, param33, param34}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param35, param36, param37, param38, param39, param40, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_zero_sized_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type84(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type85(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type86(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type87(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type88(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type98(Type::TENSOR_QUANT8_ASYMM, {0, 1, 2, 2}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type87);
  auto roi4 = model->addOperand(&type85);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type5);
  auto param31 = model->addOperand(&type5);
  auto param32 = model->addOperand(&type6);
  auto param33 = model->addOperand(&type6);
  auto param34 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type88);
  auto roiOut = model->addOperand(&type86);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type84);
  auto param35 = model->addOperand(&type5);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type6);
  auto param38 = model->addOperand(&type6);
  auto param39 = model->addOperand(&type5);
  auto param40 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type98);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi4_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi4, roi4_init, sizeof(uint16_t) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static int32_t param30_init[] = {-1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static float param32_init[] = {0.4f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {1.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {2.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {4};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31, param32, param33, param34}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param35, param36, param37, param38, param39, param40, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_zero_sized_nchw_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type84(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type85(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type86(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type87(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type88(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type89(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type87);
  auto roi4 = model->addOperand(&type85);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type6);
  auto param30 = model->addOperand(&type5);
  auto param31 = model->addOperand(&type5);
  auto param32 = model->addOperand(&type6);
  auto param33 = model->addOperand(&type6);
  auto param34 = model->addOperand(&type6);
  auto scoresOut = model->addOperand(&type88);
  auto roiOut = model->addOperand(&type86);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type84);
  auto param35 = model->addOperand(&type5);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type6);
  auto param38 = model->addOperand(&type6);
  auto param39 = model->addOperand(&type5);
  auto param40 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type89);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi4_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi4, roi4_init, sizeof(uint16_t) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static float param29_init[] = {0.3f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static int32_t param30_init[] = {-1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static float param32_init[] = {0.4f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {1.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {2.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {4};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31, param32, param33, param34}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param35, param36, param37, param38, param39, param40, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_zero_sized_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type34(Type::FLOAT16, {});
  OperandType type5(Type::INT32, {});
  OperandType type91(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type92(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type93(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type94(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type95(Type::TENSOR_FLOAT16, {0});
  OperandType type99(Type::TENSOR_FLOAT16, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores = model->addOperand(&type94);
  auto roi4 = model->addOperand(&type92);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type34);
  auto param30 = model->addOperand(&type5);
  auto param31 = model->addOperand(&type5);
  auto param32 = model->addOperand(&type34);
  auto param33 = model->addOperand(&type34);
  auto param34 = model->addOperand(&type34);
  auto scoresOut = model->addOperand(&type95);
  auto roiOut = model->addOperand(&type93);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type91);
  auto param35 = model->addOperand(&type5);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type34);
  auto param38 = model->addOperand(&type34);
  auto param39 = model->addOperand(&type5);
  auto param40 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type99);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(_Float16) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static _Float16 param29_init[] = {0.30000001192092896f};
  model->setOperandValue(param29, param29_init, sizeof(_Float16) * 1);
  static int32_t param30_init[] = {-1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static _Float16 param32_init[] = {0.4000000059604645f};
  model->setOperandValue(param32, param32_init, sizeof(_Float16) * 1);
  static _Float16 param33_init[] = {1.0f};
  model->setOperandValue(param33, param33_init, sizeof(_Float16) * 1);
  static _Float16 param34_init[] = {0.30000001192092896f};
  model->setOperandValue(param34, param34_init, sizeof(_Float16) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static _Float16 param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(_Float16) * 1);
  static _Float16 param38_init[] = {2.0f};
  model->setOperandValue(param38, param38_init, sizeof(_Float16) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {4};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31, param32, param33, param34}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param35, param36, param37, param38, param39, param40, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_zero_sized_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_INT32, {0});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type34(Type::FLOAT16, {});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type91(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type92(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type93(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type94(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type96(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type94);
  auto roi4 = model->addOperand(&type92);
  auto param28 = model->addOperand(&type19);
  auto param29 = model->addOperand(&type34);
  auto param30 = model->addOperand(&type5);
  auto param31 = model->addOperand(&type5);
  auto param32 = model->addOperand(&type34);
  auto param33 = model->addOperand(&type34);
  auto param34 = model->addOperand(&type34);
  auto scoresOut = model->addOperand(&type96);
  auto roiOut = model->addOperand(&type93);
  auto classesOut = model->addOperand(&type17);
  auto batchSplitOut = model->addOperand(&type17);
  auto in4 = model->addOperand(&type91);
  auto param35 = model->addOperand(&type5);
  auto param36 = model->addOperand(&type5);
  auto param37 = model->addOperand(&type34);
  auto param38 = model->addOperand(&type34);
  auto param39 = model->addOperand(&type5);
  auto param40 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type36);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi4_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi4, roi4_init, sizeof(_Float16) * 8);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static _Float16 param29_init[] = {0.30000001192092896f};
  model->setOperandValue(param29, param29_init, sizeof(_Float16) * 1);
  static int32_t param30_init[] = {-1};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static _Float16 param32_init[] = {0.4000000059604645f};
  model->setOperandValue(param32, param32_init, sizeof(_Float16) * 1);
  static _Float16 param33_init[] = {1.0f};
  model->setOperandValue(param33, param33_init, sizeof(_Float16) * 1);
  static _Float16 param34_init[] = {0.30000001192092896f};
  model->setOperandValue(param34, param34_init, sizeof(_Float16) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {2};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static _Float16 param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(_Float16) * 1);
  static _Float16 param38_init[] = {2.0f};
  model->setOperandValue(param38, param38_init, sizeof(_Float16) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {4};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi4, param28, param29, param30, param31, param32, param33, param34}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in4, roiOut, batchSplitOut, param35, param36, param37, param38, param39, param40, layout}, {featureMap});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in4},
    {scoresOut, classesOut, featureMap});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 512, 8, 1});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type24(Type::TENSOR_FLOAT32, {1, 128, 4, 1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type22);
  auto roi5 = model->addOperand(&type23);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type24);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5, roi5},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nhwc_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 512, 8, 1});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type22);
  auto roi5 = model->addOperand(&type23);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5, roi5},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nhwc_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 512, 8, 1});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type24(Type::TENSOR_FLOAT32, {1, 128, 4, 1});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type22);
  auto roi5 = model->addOperand(&type23);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type24);
  auto in5_tmp = model->addOperand(&type22);
  auto dummy112 = model->addOperand(&type26);
  auto param160 = model->addOperand(&type5);
  auto roi5_tmp = model->addOperand(&type23);
  auto dummy113 = model->addOperand(&type26);
  auto param161 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy112_init[] = {0.0f};
  model->setOperandValue(dummy112, dummy112_init, sizeof(float) * 1);
  static int32_t param160_init[] = {0};
  model->setOperandValue(param160, param160_init, sizeof(int32_t) * 1);
  static float dummy113_init[] = {0.0f};
  model->setOperandValue(dummy113, dummy113_init, sizeof(float) * 1);
  static int32_t param161_init[] = {0};
  model->setOperandValue(param161, param161_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy112, param160}, {in5});
  model->addOperation(ANEURALNETWORKS_ADD, {roi5_tmp, dummy113, param161}, {roi5});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp, roi5_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 512, 8, 1});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type22);
  auto roi5 = model->addOperand(&type23);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type25);
  auto in5_tmp = model->addOperand(&type22);
  auto dummy114 = model->addOperand(&type26);
  auto param162 = model->addOperand(&type5);
  auto roi5_tmp = model->addOperand(&type23);
  auto dummy115 = model->addOperand(&type26);
  auto param163 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy114_init[] = {0.0f};
  model->setOperandValue(dummy114, dummy114_init, sizeof(float) * 1);
  static int32_t param162_init[] = {0};
  model->setOperandValue(param162, param162_init, sizeof(int32_t) * 1);
  static float dummy115_init[] = {0.0f};
  model->setOperandValue(dummy115, dummy115_init, sizeof(float) * 1);
  static int32_t param163_init[] = {0};
  model->setOperandValue(param163, param163_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy114, param162}, {in5});
  model->addOperation(ANEURALNETWORKS_ADD, {roi5_tmp, dummy115, param163}, {roi5});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp, roi5_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 512, 8, 1});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type24(Type::TENSOR_FLOAT32, {1, 128, 4, 1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type22);
  auto roi5 = model->addOperand(&type23);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type24);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5, roi5},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 512, 8, 1});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type22);
  auto roi5 = model->addOperand(&type23);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5, roi5},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 512, 8, 1});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type24(Type::TENSOR_FLOAT32, {1, 128, 4, 1});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type22);
  auto roi5 = model->addOperand(&type23);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type24);
  auto in5_tmp = model->addOperand(&type22);
  auto dummy116 = model->addOperand(&type26);
  auto param164 = model->addOperand(&type5);
  auto roi5_tmp = model->addOperand(&type23);
  auto dummy117 = model->addOperand(&type26);
  auto param165 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy116_init[] = {0.0f};
  model->setOperandValue(dummy116, dummy116_init, sizeof(float) * 1);
  static int32_t param164_init[] = {0};
  model->setOperandValue(param164, param164_init, sizeof(int32_t) * 1);
  static float dummy117_init[] = {0.0f};
  model->setOperandValue(dummy117, dummy117_init, sizeof(float) * 1);
  static int32_t param165_init[] = {0};
  model->setOperandValue(param165, param165_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy116, param164}, {in5});
  model->addOperation(ANEURALNETWORKS_ADD, {roi5_tmp, dummy117, param165}, {roi5});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp, roi5_tmp},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type22(Type::TENSOR_FLOAT32, {1, 512, 8, 1});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type22);
  auto roi5 = model->addOperand(&type23);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type25);
  auto in5_tmp = model->addOperand(&type22);
  auto dummy118 = model->addOperand(&type26);
  auto param166 = model->addOperand(&type5);
  auto roi5_tmp = model->addOperand(&type23);
  auto dummy119 = model->addOperand(&type26);
  auto param167 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy118_init[] = {0.0f};
  model->setOperandValue(dummy118, dummy118_init, sizeof(float) * 1);
  static int32_t param166_init[] = {0};
  model->setOperandValue(param166, param166_init, sizeof(int32_t) * 1);
  static float dummy119_init[] = {0.0f};
  model->setOperandValue(dummy119, dummy119_init, sizeof(float) * 1);
  static int32_t param167_init[] = {0};
  model->setOperandValue(param167, param167_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy118, param166}, {in5});
  model->addOperation(ANEURALNETWORKS_ADD, {roi5_tmp, dummy119, param167}, {roi5});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp, roi5_tmp},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type100(Type::TENSOR_QUANT8_ASYMM, {1, 512, 8, 1}, 0.25f, 128);
  OperandType type101(Type::TENSOR_QUANT8_ASYMM, {1, 128, 4, 1}, 0.0625f, 128);
  OperandType type102(Type::TENSOR_QUANT16_ASYMM, {1, 4}, 0.125f, 0);
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type100);
  auto roi5 = model->addOperand(&type102);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type101);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5, roi5},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type100(Type::TENSOR_QUANT8_ASYMM, {1, 512, 8, 1}, 0.25f, 128);
  OperandType type102(Type::TENSOR_QUANT16_ASYMM, {1, 4}, 0.125f, 0);
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.0625f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type100);
  auto roi5 = model->addOperand(&type102);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5, roi5},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type100(Type::TENSOR_QUANT8_ASYMM, {1, 512, 8, 1}, 0.25f, 128);
  OperandType type101(Type::TENSOR_QUANT8_ASYMM, {1, 128, 4, 1}, 0.0625f, 128);
  OperandType type102(Type::TENSOR_QUANT16_ASYMM, {1, 4}, 0.125f, 0);
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type100);
  auto roi5 = model->addOperand(&type102);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type101);
  auto in5_tmp = model->addOperand(&type100);
  auto dummy120 = model->addOperand(&type31);
  auto param168 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy120_init[] = {128};
  model->setOperandValue(dummy120, dummy120_init, sizeof(uint8_t) * 1);
  static int32_t param168_init[] = {0};
  model->setOperandValue(param168, param168_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy120, param168}, {in5});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi5, in5_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type100(Type::TENSOR_QUANT8_ASYMM, {1, 512, 8, 1}, 0.25f, 128);
  OperandType type102(Type::TENSOR_QUANT16_ASYMM, {1, 4}, 0.125f, 0);
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.0625f, 128);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type100);
  auto roi5 = model->addOperand(&type102);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type30);
  auto in5_tmp = model->addOperand(&type100);
  auto dummy121 = model->addOperand(&type31);
  auto param169 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy121_init[] = {128};
  model->setOperandValue(dummy121, dummy121_init, sizeof(uint8_t) * 1);
  static int32_t param169_init[] = {0};
  model->setOperandValue(param169, param169_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy121, param169}, {in5});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi5, in5_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type103(Type::TENSOR_FLOAT16, {1, 512, 8, 1});
  OperandType type104(Type::TENSOR_FLOAT16, {1, 128, 4, 1});
  OperandType type105(Type::TENSOR_FLOAT16, {1, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type34(Type::FLOAT16, {});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type103);
  auto roi5 = model->addOperand(&type105);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type34);
  auto param45 = model->addOperand(&type34);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type104);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static _Float16 param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(_Float16) * 1);
  static _Float16 param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(_Float16) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5, roi5},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type103(Type::TENSOR_FLOAT16, {1, 512, 8, 1});
  OperandType type105(Type::TENSOR_FLOAT16, {1, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type34(Type::FLOAT16, {});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type103);
  auto roi5 = model->addOperand(&type105);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type34);
  auto param45 = model->addOperand(&type34);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static _Float16 param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(_Float16) * 1);
  static _Float16 param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(_Float16) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5, roi5},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type104(Type::TENSOR_FLOAT16, {1, 128, 4, 1});
  OperandType type106(Type::TENSOR_FLOAT16, {1, 512, 8, 1});
  OperandType type107(Type::TENSOR_FLOAT16, {1, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type34(Type::FLOAT16, {});
  OperandType type38(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type106);
  auto roi5 = model->addOperand(&type107);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type34);
  auto param45 = model->addOperand(&type34);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type104);
  auto in5_tmp = model->addOperand(&type106);
  auto dummy122 = model->addOperand(&type38);
  auto param170 = model->addOperand(&type5);
  auto roi5_tmp = model->addOperand(&type107);
  auto dummy123 = model->addOperand(&type38);
  auto param171 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static _Float16 param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(_Float16) * 1);
  static _Float16 param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(_Float16) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy122_init[] = {0.0f};
  model->setOperandValue(dummy122, dummy122_init, sizeof(_Float16) * 1);
  static int32_t param170_init[] = {0};
  model->setOperandValue(param170, param170_init, sizeof(int32_t) * 1);
  static _Float16 dummy123_init[] = {0.0f};
  model->setOperandValue(dummy123, dummy123_init, sizeof(_Float16) * 1);
  static int32_t param171_init[] = {0};
  model->setOperandValue(param171, param171_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy122, param170}, {in5});
  model->addOperation(ANEURALNETWORKS_ADD, {roi5_tmp, dummy123, param171}, {roi5});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp, roi5_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type106(Type::TENSOR_FLOAT16, {1, 512, 8, 1});
  OperandType type107(Type::TENSOR_FLOAT16, {1, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type34(Type::FLOAT16, {});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type38(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type106);
  auto roi5 = model->addOperand(&type107);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type34);
  auto param45 = model->addOperand(&type34);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type36);
  auto in5_tmp = model->addOperand(&type106);
  auto dummy124 = model->addOperand(&type38);
  auto param172 = model->addOperand(&type5);
  auto roi5_tmp = model->addOperand(&type107);
  auto dummy125 = model->addOperand(&type38);
  auto param173 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static _Float16 param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(_Float16) * 1);
  static _Float16 param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(_Float16) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy124_init[] = {0.0f};
  model->setOperandValue(dummy124, dummy124_init, sizeof(_Float16) * 1);
  static int32_t param172_init[] = {0};
  model->setOperandValue(param172, param172_init, sizeof(int32_t) * 1);
  static _Float16 dummy125_init[] = {0.0f};
  model->setOperandValue(dummy125, dummy125_init, sizeof(_Float16) * 1);
  static int32_t param173_init[] = {0};
  model->setOperandValue(param173, param173_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy124, param172}, {in5});
  model->addOperation(ANEURALNETWORKS_ADD, {roi5_tmp, dummy125, param173}, {roi5});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp, roi5_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 1, 512, 8});
  OperandType type109(Type::TENSOR_FLOAT32, {1, 1, 128, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type108);
  auto roi5 = model->addOperand(&type23);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type109);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5, roi5},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nchw_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 1, 512, 8});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type108);
  auto roi5 = model->addOperand(&type23);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5, roi5},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nchw_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 1, 512, 8});
  OperandType type109(Type::TENSOR_FLOAT32, {1, 1, 128, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type108);
  auto roi5 = model->addOperand(&type23);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type109);
  auto in5_tmp = model->addOperand(&type108);
  auto dummy126 = model->addOperand(&type26);
  auto param174 = model->addOperand(&type5);
  auto roi5_tmp = model->addOperand(&type23);
  auto dummy127 = model->addOperand(&type26);
  auto param175 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy126_init[] = {0.0f};
  model->setOperandValue(dummy126, dummy126_init, sizeof(float) * 1);
  static int32_t param174_init[] = {0};
  model->setOperandValue(param174, param174_init, sizeof(int32_t) * 1);
  static float dummy127_init[] = {0.0f};
  model->setOperandValue(dummy127, dummy127_init, sizeof(float) * 1);
  static int32_t param175_init[] = {0};
  model->setOperandValue(param175, param175_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy126, param174}, {in5});
  model->addOperation(ANEURALNETWORKS_ADD, {roi5_tmp, dummy127, param175}, {roi5});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp, roi5_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 1, 512, 8});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type108);
  auto roi5 = model->addOperand(&type23);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type25);
  auto in5_tmp = model->addOperand(&type108);
  auto dummy128 = model->addOperand(&type26);
  auto param176 = model->addOperand(&type5);
  auto roi5_tmp = model->addOperand(&type23);
  auto dummy129 = model->addOperand(&type26);
  auto param177 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy128_init[] = {0.0f};
  model->setOperandValue(dummy128, dummy128_init, sizeof(float) * 1);
  static int32_t param176_init[] = {0};
  model->setOperandValue(param176, param176_init, sizeof(int32_t) * 1);
  static float dummy129_init[] = {0.0f};
  model->setOperandValue(dummy129, dummy129_init, sizeof(float) * 1);
  static int32_t param177_init[] = {0};
  model->setOperandValue(param177, param177_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy128, param176}, {in5});
  model->addOperation(ANEURALNETWORKS_ADD, {roi5_tmp, dummy129, param177}, {roi5});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp, roi5_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 1, 512, 8});
  OperandType type109(Type::TENSOR_FLOAT32, {1, 1, 128, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type108);
  auto roi5 = model->addOperand(&type23);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type109);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5, roi5},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 1, 512, 8});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type108);
  auto roi5 = model->addOperand(&type23);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5, roi5},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 1, 512, 8});
  OperandType type109(Type::TENSOR_FLOAT32, {1, 1, 128, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type108);
  auto roi5 = model->addOperand(&type23);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type109);
  auto in5_tmp = model->addOperand(&type108);
  auto dummy130 = model->addOperand(&type26);
  auto param178 = model->addOperand(&type5);
  auto roi5_tmp = model->addOperand(&type23);
  auto dummy131 = model->addOperand(&type26);
  auto param179 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy130_init[] = {0.0f};
  model->setOperandValue(dummy130, dummy130_init, sizeof(float) * 1);
  static int32_t param178_init[] = {0};
  model->setOperandValue(param178, param178_init, sizeof(int32_t) * 1);
  static float dummy131_init[] = {0.0f};
  model->setOperandValue(dummy131, dummy131_init, sizeof(float) * 1);
  static int32_t param179_init[] = {0};
  model->setOperandValue(param179, param179_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy130, param178}, {in5});
  model->addOperation(ANEURALNETWORKS_ADD, {roi5_tmp, dummy131, param179}, {roi5});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp, roi5_tmp},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type108(Type::TENSOR_FLOAT32, {1, 1, 512, 8});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 4});
  OperandType type25(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type108);
  auto roi5 = model->addOperand(&type23);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type25);
  auto in5_tmp = model->addOperand(&type108);
  auto dummy132 = model->addOperand(&type26);
  auto param180 = model->addOperand(&type5);
  auto roi5_tmp = model->addOperand(&type23);
  auto dummy133 = model->addOperand(&type26);
  auto param181 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy132_init[] = {0.0f};
  model->setOperandValue(dummy132, dummy132_init, sizeof(float) * 1);
  static int32_t param180_init[] = {0};
  model->setOperandValue(param180, param180_init, sizeof(int32_t) * 1);
  static float dummy133_init[] = {0.0f};
  model->setOperandValue(dummy133, dummy133_init, sizeof(float) * 1);
  static int32_t param181_init[] = {0};
  model->setOperandValue(param181, param181_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy132, param180}, {in5});
  model->addOperation(ANEURALNETWORKS_ADD, {roi5_tmp, dummy133, param181}, {roi5});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp, roi5_tmp},
    {out4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type102(Type::TENSOR_QUANT16_ASYMM, {1, 4}, 0.125f, 0);
  OperandType type110(Type::TENSOR_QUANT8_ASYMM, {1, 1, 512, 8}, 0.25f, 128);
  OperandType type111(Type::TENSOR_QUANT8_ASYMM, {1, 1, 128, 4}, 0.0625f, 128);
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type110);
  auto roi5 = model->addOperand(&type102);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type111);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5, roi5},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type102(Type::TENSOR_QUANT16_ASYMM, {1, 4}, 0.125f, 0);
  OperandType type110(Type::TENSOR_QUANT8_ASYMM, {1, 1, 512, 8}, 0.25f, 128);
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.0625f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type110);
  auto roi5 = model->addOperand(&type102);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5, roi5},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type102(Type::TENSOR_QUANT16_ASYMM, {1, 4}, 0.125f, 0);
  OperandType type110(Type::TENSOR_QUANT8_ASYMM, {1, 1, 512, 8}, 0.25f, 128);
  OperandType type111(Type::TENSOR_QUANT8_ASYMM, {1, 1, 128, 4}, 0.0625f, 128);
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type110);
  auto roi5 = model->addOperand(&type102);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type111);
  auto in5_tmp = model->addOperand(&type110);
  auto dummy134 = model->addOperand(&type31);
  auto param182 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy134_init[] = {128};
  model->setOperandValue(dummy134, dummy134_init, sizeof(uint8_t) * 1);
  static int32_t param182_init[] = {0};
  model->setOperandValue(param182, param182_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy134, param182}, {in5});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi5, in5_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type102(Type::TENSOR_QUANT16_ASYMM, {1, 4}, 0.125f, 0);
  OperandType type110(Type::TENSOR_QUANT8_ASYMM, {1, 1, 512, 8}, 0.25f, 128);
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.0625f, 128);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type110);
  auto roi5 = model->addOperand(&type102);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type6);
  auto param45 = model->addOperand(&type6);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type30);
  auto in5_tmp = model->addOperand(&type110);
  auto dummy135 = model->addOperand(&type31);
  auto param183 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(float) * 1);
  static float param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(float) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy135_init[] = {128};
  model->setOperandValue(dummy135, dummy135_init, sizeof(uint8_t) * 1);
  static int32_t param183_init[] = {0};
  model->setOperandValue(param183, param183_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy135, param183}, {in5});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {roi5, in5_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_float16_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type105(Type::TENSOR_FLOAT16, {1, 4});
  OperandType type112(Type::TENSOR_FLOAT16, {1, 1, 512, 8});
  OperandType type113(Type::TENSOR_FLOAT16, {1, 1, 128, 4});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type34(Type::FLOAT16, {});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type112);
  auto roi5 = model->addOperand(&type105);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type34);
  auto param45 = model->addOperand(&type34);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type113);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static _Float16 param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(_Float16) * 1);
  static _Float16 param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(_Float16) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5, roi5},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_float16_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type105(Type::TENSOR_FLOAT16, {1, 4});
  OperandType type112(Type::TENSOR_FLOAT16, {1, 1, 512, 8});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type34(Type::FLOAT16, {});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type112);
  auto roi5 = model->addOperand(&type105);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type34);
  auto param45 = model->addOperand(&type34);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static _Float16 param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(_Float16) * 1);
  static _Float16 param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(_Float16) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5, roi5},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_float16_all_inputs_as_internal_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type107(Type::TENSOR_FLOAT16, {1, 4});
  OperandType type113(Type::TENSOR_FLOAT16, {1, 1, 128, 4});
  OperandType type114(Type::TENSOR_FLOAT16, {1, 1, 512, 8});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type34(Type::FLOAT16, {});
  OperandType type38(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type114);
  auto roi5 = model->addOperand(&type107);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type34);
  auto param45 = model->addOperand(&type34);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type113);
  auto in5_tmp = model->addOperand(&type114);
  auto dummy136 = model->addOperand(&type38);
  auto param184 = model->addOperand(&type5);
  auto roi5_tmp = model->addOperand(&type107);
  auto dummy137 = model->addOperand(&type38);
  auto param185 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static _Float16 param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(_Float16) * 1);
  static _Float16 param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(_Float16) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy136_init[] = {0.0f};
  model->setOperandValue(dummy136, dummy136_init, sizeof(_Float16) * 1);
  static int32_t param184_init[] = {0};
  model->setOperandValue(param184, param184_init, sizeof(int32_t) * 1);
  static _Float16 dummy137_init[] = {0.0f};
  model->setOperandValue(dummy137, dummy137_init, sizeof(_Float16) * 1);
  static int32_t param185_init[] = {0};
  model->setOperandValue(param185, param185_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy136, param184}, {in5});
  model->addOperation(ANEURALNETWORKS_ADD, {roi5_tmp, dummy137, param185}, {roi5});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp, roi5_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
namespace generated_tests::roi_align {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type107(Type::TENSOR_FLOAT16, {1, 4});
  OperandType type114(Type::TENSOR_FLOAT16, {1, 1, 512, 8});
  OperandType type19(Type::TENSOR_INT32, {1});
  OperandType type34(Type::FLOAT16, {});
  OperandType type36(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type38(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in5 = model->addOperand(&type114);
  auto roi5 = model->addOperand(&type107);
  auto param41 = model->addOperand(&type19);
  auto param42 = model->addOperand(&type5);
  auto param43 = model->addOperand(&type5);
  auto param44 = model->addOperand(&type34);
  auto param45 = model->addOperand(&type34);
  auto param46 = model->addOperand(&type5);
  auto param47 = model->addOperand(&type5);
  auto layout = model->addOperand(&type0);
  auto out4 = model->addOperand(&type36);
  auto in5_tmp = model->addOperand(&type114);
  auto dummy138 = model->addOperand(&type38);
  auto param186 = model->addOperand(&type5);
  auto roi5_tmp = model->addOperand(&type107);
  auto dummy139 = model->addOperand(&type38);
  auto param187 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {128};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {4};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static _Float16 param44_init[] = {1.0f};
  model->setOperandValue(param44, param44_init, sizeof(_Float16) * 1);
  static _Float16 param45_init[] = {64.0f};
  model->setOperandValue(param45, param45_init, sizeof(_Float16) * 1);
  static int32_t param46_init[] = {10};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {10};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy138_init[] = {0.0f};
  model->setOperandValue(dummy138, dummy138_init, sizeof(_Float16) * 1);
  static int32_t param186_init[] = {0};
  model->setOperandValue(param186, param186_init, sizeof(int32_t) * 1);
  static _Float16 dummy139_init[] = {0.0f};
  model->setOperandValue(dummy139, dummy139_init, sizeof(_Float16) * 1);
  static int32_t param187_init[] = {0};
  model->setOperandValue(param187, param187_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in5_tmp, dummy138, param186}, {in5});
  model->addOperation(ANEURALNETWORKS_ADD, {roi5_tmp, dummy139, param187}, {roi5});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in5, roi5, param41, param42, param43, param44, param45, param46, param47, layout}, {out4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in5_tmp, roi5_tmp},
    {out4});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::roi_align
