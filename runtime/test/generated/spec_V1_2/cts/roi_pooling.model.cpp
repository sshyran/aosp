// Generated from roi_pooling.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::roi_pooling {

void CreateModel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {5, 2, 2, 1});
  OperandType type4(Type::TENSOR_INT32, {5});
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
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
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
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {5, 2, 2, 1});
  OperandType type4(Type::TENSOR_INT32, {5});
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
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  auto in_tmp = model->addOperand(&type1);
  auto dummy = model->addOperand(&type13);
  auto param15 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type2);
  auto dummy1 = model->addOperand(&type13);
  auto param16 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy, param15}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy1, param16}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
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
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type12);
  auto in_tmp = model->addOperand(&type1);
  auto dummy2 = model->addOperand(&type13);
  auto param17 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type2);
  auto dummy3 = model->addOperand(&type13);
  auto param18 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy2, param17}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy3, param18}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {5, 2, 2, 1});
  OperandType type4(Type::TENSOR_INT32, {5});
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
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
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
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {5, 2, 2, 1});
  OperandType type4(Type::TENSOR_INT32, {5});
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
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  auto in_tmp = model->addOperand(&type1);
  auto dummy4 = model->addOperand(&type13);
  auto param19 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type2);
  auto dummy5 = model->addOperand(&type13);
  auto param20 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static float dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(float) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy4, param19}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy5, param20}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
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
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type12);
  auto in_tmp = model->addOperand(&type1);
  auto dummy6 = model->addOperand(&type13);
  auto param21 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type2);
  auto dummy7 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(float) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static float dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(float) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy6, param21}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy7, param22}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2, 1}, 0.25f, 128);
  OperandType type16(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type14);
  auto roi = model->addOperand(&type16);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 128);
  OperandType type16(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type14);
  auto roi = model->addOperand(&type16);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 128);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2, 1}, 0.25f, 128);
  OperandType type16(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type14);
  auto roi = model->addOperand(&type16);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type15);
  auto in_tmp = model->addOperand(&type14);
  auto dummy8 = model->addOperand(&type18);
  auto param23 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy8_init[] = {128};
  model->setOperandValue(dummy8, dummy8_init, sizeof(uint8_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy8, param23}, {in});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.25f, 128);
  OperandType type16(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type14);
  auto roi = model->addOperand(&type16);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type17);
  auto in_tmp = model->addOperand(&type14);
  auto dummy9 = model->addOperand(&type18);
  auto param24 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy9_init[] = {128};
  model->setOperandValue(dummy9, dummy9_init, sizeof(uint8_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy9, param24}, {in});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type20(Type::TENSOR_FLOAT16, {5, 2, 2, 1});
  OperandType type21(Type::FLOAT16, {});
  OperandType type22(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type19);
  auto roi = model->addOperand(&type22);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type21);
  auto param4 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type21(Type::FLOAT16, {});
  OperandType type22(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type19);
  auto roi = model->addOperand(&type22);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type21);
  auto param4 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {5, 2, 2, 1});
  OperandType type21(Type::FLOAT16, {});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type24);
  auto roi = model->addOperand(&type26);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type21);
  auto param4 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type20);
  auto in_tmp = model->addOperand(&type24);
  auto dummy10 = model->addOperand(&type25);
  auto param25 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type26);
  auto dummy11 = model->addOperand(&type25);
  auto param26 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(_Float16) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static _Float16 dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy10, param25}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy11, param26}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::FLOAT16, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type24);
  auto roi = model->addOperand(&type26);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type21);
  auto param4 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type23);
  auto in_tmp = model->addOperand(&type24);
  auto dummy12 = model->addOperand(&type25);
  auto param27 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type26);
  auto dummy13 = model->addOperand(&type25);
  auto param28 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(_Float16) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static _Float16 dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(_Float16) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy12, param27}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy13, param28}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type28(Type::TENSOR_FLOAT32, {5, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type27);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type27);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type28(Type::TENSOR_FLOAT32, {5, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type27);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type28);
  auto in_tmp = model->addOperand(&type27);
  auto dummy14 = model->addOperand(&type13);
  auto param29 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type2);
  auto dummy15 = model->addOperand(&type13);
  auto param30 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(float) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static float dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(float) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy14, param29}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy15, param30}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type27);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type12);
  auto in_tmp = model->addOperand(&type27);
  auto dummy16 = model->addOperand(&type13);
  auto param31 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type2);
  auto dummy17 = model->addOperand(&type13);
  auto param32 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(float) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static float dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(float) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy16, param31}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy17, param32}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type28(Type::TENSOR_FLOAT32, {5, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type27);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type27);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type28(Type::TENSOR_FLOAT32, {5, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type27);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type28);
  auto in_tmp = model->addOperand(&type27);
  auto dummy18 = model->addOperand(&type13);
  auto param33 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type2);
  auto dummy19 = model->addOperand(&type13);
  auto param34 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy18, param33}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy19, param34}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type27);
  auto roi = model->addOperand(&type2);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type12);
  auto in_tmp = model->addOperand(&type27);
  auto dummy20 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type2);
  auto dummy21 = model->addOperand(&type13);
  auto param36 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(float) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(float) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy20, param35}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy21, param36}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 128);
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {5, 1, 2, 2}, 0.25f, 128);
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type29);
  auto roi = model->addOperand(&type16);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 128);
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type29);
  auto roi = model->addOperand(&type16);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 128);
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {5, 1, 2, 2}, 0.25f, 128);
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type29);
  auto roi = model->addOperand(&type16);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type30);
  auto in_tmp = model->addOperand(&type29);
  auto dummy22 = model->addOperand(&type18);
  auto param37 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy22_init[] = {128};
  model->setOperandValue(dummy22, dummy22_init, sizeof(uint8_t) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy22, param37}, {in});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.25f, 128);
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type29);
  auto roi = model->addOperand(&type16);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type6);
  auto param4 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type17);
  auto in_tmp = model->addOperand(&type29);
  auto dummy23 = model->addOperand(&type18);
  auto param38 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy23_init[] = {128};
  model->setOperandValue(dummy23, dummy23_init, sizeof(uint8_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy23, param38}, {in});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::FLOAT16, {});
  OperandType type22(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type32(Type::TENSOR_FLOAT16, {5, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type31);
  auto roi = model->addOperand(&type22);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type21);
  auto param4 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::FLOAT16, {});
  OperandType type22(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type31);
  auto roi = model->addOperand(&type22);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type21);
  auto param4 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::FLOAT16, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type32(Type::TENSOR_FLOAT16, {5, 1, 2, 2});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type33);
  auto roi = model->addOperand(&type26);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type21);
  auto param4 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type32);
  auto in_tmp = model->addOperand(&type33);
  auto dummy24 = model->addOperand(&type25);
  auto param39 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type26);
  auto dummy25 = model->addOperand(&type25);
  auto param40 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(_Float16) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static _Float16 dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(_Float16) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy24, param39}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy25, param40}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::FLOAT16, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type33);
  auto roi = model->addOperand(&type26);
  auto param = model->addOperand(&type4);
  auto param1 = model->addOperand(&type5);
  auto param2 = model->addOperand(&type5);
  auto param3 = model->addOperand(&type21);
  auto param4 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type23);
  auto in_tmp = model->addOperand(&type33);
  auto dummy26 = model->addOperand(&type25);
  auto param41 = model->addOperand(&type5);
  auto roi_tmp = model->addOperand(&type26);
  auto dummy27 = model->addOperand(&type25);
  auto param42 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param_init[] = {0, 0, 0, 0, 0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 5);
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {2.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(_Float16) * 1);
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static _Float16 dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(_Float16) * 1);
  static int32_t param42_init[] = {0};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy26, param41}, {in});
  model->addOperation(ANEURALNETWORKS_ADD, {roi_tmp, dummy27, param42}, {roi});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in, roi, param, param1, param2, param3, param4, layout}, {out});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 4, 8, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type9(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 4, 8, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 4});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 4, 8, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type9(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type9);
  auto in1_tmp = model->addOperand(&type7);
  auto dummy28 = model->addOperand(&type13);
  auto param43 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type8);
  auto dummy29 = model->addOperand(&type13);
  auto param44 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy28_init[] = {0.0f};
  model->setOperandValue(dummy28, dummy28_init, sizeof(float) * 1);
  static int32_t param43_init[] = {0};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static float dummy29_init[] = {0.0f};
  model->setOperandValue(dummy29, dummy29_init, sizeof(float) * 1);
  static int32_t param44_init[] = {0};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy28, param43}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy29, param44}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 4, 8, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 4});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type12);
  auto in1_tmp = model->addOperand(&type7);
  auto dummy30 = model->addOperand(&type13);
  auto param45 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type8);
  auto dummy31 = model->addOperand(&type13);
  auto param46 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy30_init[] = {0.0f};
  model->setOperandValue(dummy30, dummy30_init, sizeof(float) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static float dummy31_init[] = {0.0f};
  model->setOperandValue(dummy31, dummy31_init, sizeof(float) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy30, param45}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy31, param46}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 4, 8, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type9(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 4, 8, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 4});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 4, 8, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 4});
  OperandType type9(Type::TENSOR_FLOAT32, {4, 2, 3, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type9);
  auto in1_tmp = model->addOperand(&type7);
  auto dummy32 = model->addOperand(&type13);
  auto param47 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type8);
  auto dummy33 = model->addOperand(&type13);
  auto param48 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy32_init[] = {0.0f};
  model->setOperandValue(dummy32, dummy32_init, sizeof(float) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static float dummy33_init[] = {0.0f};
  model->setOperandValue(dummy33, dummy33_init, sizeof(float) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy32, param47}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy33, param48}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {4, 4, 8, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 4});
  // Phase 1, operands
  auto in1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type12);
  auto in1_tmp = model->addOperand(&type7);
  auto dummy34 = model->addOperand(&type13);
  auto param49 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type8);
  auto dummy35 = model->addOperand(&type13);
  auto param50 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy34_init[] = {0.0f};
  model->setOperandValue(dummy34, dummy34_init, sizeof(float) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static float dummy35_init[] = {0.0f};
  model->setOperandValue(dummy35, dummy35_init, sizeof(float) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy34, param49}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy35, param50}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {4, 4, 8, 2}, 0.04f, 0);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {4, 2, 3, 2}, 0.04f, 0);
  OperandType type36(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type34);
  auto roi1 = model->addOperand(&type36);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {4, 4, 8, 2}, 0.04f, 0);
  OperandType type36(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.04f, 0);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type34);
  auto roi1 = model->addOperand(&type36);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {4, 4, 8, 2}, 0.04f, 0);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {4, 2, 3, 2}, 0.04f, 0);
  OperandType type36(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1}, 0.04f, 0);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type34);
  auto roi1 = model->addOperand(&type36);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type35);
  auto in1_tmp = model->addOperand(&type34);
  auto dummy36 = model->addOperand(&type38);
  auto param51 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy36_init[] = {0};
  model->setOperandValue(dummy36, dummy36_init, sizeof(uint8_t) * 1);
  static int32_t param51_init[] = {0};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy36, param51}, {in1});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {4, 4, 8, 2}, 0.04f, 0);
  OperandType type36(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.04f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1}, 0.04f, 0);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type34);
  auto roi1 = model->addOperand(&type36);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type37);
  auto in1_tmp = model->addOperand(&type34);
  auto dummy37 = model->addOperand(&type38);
  auto param52 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy37_init[] = {0};
  model->setOperandValue(dummy37, dummy37_init, sizeof(uint8_t) * 1);
  static int32_t param52_init[] = {0};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy37, param52}, {in1});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type21(Type::FLOAT16, {});
  OperandType type39(Type::TENSOR_FLOAT16, {4, 4, 8, 2});
  OperandType type40(Type::TENSOR_FLOAT16, {4, 2, 3, 2});
  OperandType type41(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type39);
  auto roi1 = model->addOperand(&type41);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type21);
  auto param9 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static _Float16 param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(_Float16) * 1);
  static _Float16 param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type21(Type::FLOAT16, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type39(Type::TENSOR_FLOAT16, {4, 4, 8, 2});
  OperandType type41(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type39);
  auto roi1 = model->addOperand(&type41);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type21);
  auto param9 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static _Float16 param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(_Float16) * 1);
  static _Float16 param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type21(Type::FLOAT16, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type40(Type::TENSOR_FLOAT16, {4, 2, 3, 2});
  OperandType type42(Type::TENSOR_FLOAT16, {4, 4, 8, 2});
  OperandType type43(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type42);
  auto roi1 = model->addOperand(&type43);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type21);
  auto param9 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type40);
  auto in1_tmp = model->addOperand(&type42);
  auto dummy38 = model->addOperand(&type25);
  auto param53 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type43);
  auto dummy39 = model->addOperand(&type25);
  auto param54 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static _Float16 param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(_Float16) * 1);
  static _Float16 param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy38_init[] = {0.0f};
  model->setOperandValue(dummy38, dummy38_init, sizeof(_Float16) * 1);
  static int32_t param53_init[] = {0};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static _Float16 dummy39_init[] = {0.0f};
  model->setOperandValue(dummy39, dummy39_init, sizeof(_Float16) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy38, param53}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy39, param54}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type21(Type::FLOAT16, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type42(Type::TENSOR_FLOAT16, {4, 4, 8, 2});
  OperandType type43(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type42);
  auto roi1 = model->addOperand(&type43);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type21);
  auto param9 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type23);
  auto in1_tmp = model->addOperand(&type42);
  auto dummy40 = model->addOperand(&type25);
  auto param55 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type43);
  auto dummy41 = model->addOperand(&type25);
  auto param56 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static _Float16 param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(_Float16) * 1);
  static _Float16 param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy40_init[] = {0.0f};
  model->setOperandValue(dummy40, dummy40_init, sizeof(_Float16) * 1);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static _Float16 dummy41_init[] = {0.0f};
  model->setOperandValue(dummy41, dummy41_init, sizeof(_Float16) * 1);
  static int32_t param56_init[] = {0};
  model->setOperandValue(param56, param56_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy40, param55}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy41, param56}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type44(Type::TENSOR_FLOAT32, {4, 2, 4, 8});
  OperandType type45(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 4});
  // Phase 1, operands
  auto in1 = model->addOperand(&type44);
  auto roi1 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type45);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type44(Type::TENSOR_FLOAT32, {4, 2, 4, 8});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 4});
  // Phase 1, operands
  auto in1 = model->addOperand(&type44);
  auto roi1 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type44(Type::TENSOR_FLOAT32, {4, 2, 4, 8});
  OperandType type45(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 4});
  // Phase 1, operands
  auto in1 = model->addOperand(&type44);
  auto roi1 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type45);
  auto in1_tmp = model->addOperand(&type44);
  auto dummy42 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type8);
  auto dummy43 = model->addOperand(&type13);
  auto param58 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy42_init[] = {0.0f};
  model->setOperandValue(dummy42, dummy42_init, sizeof(float) * 1);
  static int32_t param57_init[] = {0};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static float dummy43_init[] = {0.0f};
  model->setOperandValue(dummy43, dummy43_init, sizeof(float) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy42, param57}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy43, param58}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type44(Type::TENSOR_FLOAT32, {4, 2, 4, 8});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 4});
  // Phase 1, operands
  auto in1 = model->addOperand(&type44);
  auto roi1 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type12);
  auto in1_tmp = model->addOperand(&type44);
  auto dummy44 = model->addOperand(&type13);
  auto param59 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type8);
  auto dummy45 = model->addOperand(&type13);
  auto param60 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy44_init[] = {0.0f};
  model->setOperandValue(dummy44, dummy44_init, sizeof(float) * 1);
  static int32_t param59_init[] = {0};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static float dummy45_init[] = {0.0f};
  model->setOperandValue(dummy45, dummy45_init, sizeof(float) * 1);
  static int32_t param60_init[] = {0};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy44, param59}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy45, param60}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type44(Type::TENSOR_FLOAT32, {4, 2, 4, 8});
  OperandType type45(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 4});
  // Phase 1, operands
  auto in1 = model->addOperand(&type44);
  auto roi1 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type45);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type44(Type::TENSOR_FLOAT32, {4, 2, 4, 8});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 4});
  // Phase 1, operands
  auto in1 = model->addOperand(&type44);
  auto roi1 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type44(Type::TENSOR_FLOAT32, {4, 2, 4, 8});
  OperandType type45(Type::TENSOR_FLOAT32, {4, 2, 2, 3});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 4});
  // Phase 1, operands
  auto in1 = model->addOperand(&type44);
  auto roi1 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type45);
  auto in1_tmp = model->addOperand(&type44);
  auto dummy46 = model->addOperand(&type13);
  auto param61 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type8);
  auto dummy47 = model->addOperand(&type13);
  auto param62 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy46_init[] = {0.0f};
  model->setOperandValue(dummy46, dummy46_init, sizeof(float) * 1);
  static int32_t param61_init[] = {0};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  static float dummy47_init[] = {0.0f};
  model->setOperandValue(dummy47, dummy47_init, sizeof(float) * 1);
  static int32_t param62_init[] = {0};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy46, param61}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy47, param62}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type44(Type::TENSOR_FLOAT32, {4, 2, 4, 8});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {4, 4});
  // Phase 1, operands
  auto in1 = model->addOperand(&type44);
  auto roi1 = model->addOperand(&type8);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type12);
  auto in1_tmp = model->addOperand(&type44);
  auto dummy48 = model->addOperand(&type13);
  auto param63 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type8);
  auto dummy49 = model->addOperand(&type13);
  auto param64 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy48_init[] = {0.0f};
  model->setOperandValue(dummy48, dummy48_init, sizeof(float) * 1);
  static int32_t param63_init[] = {0};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static float dummy49_init[] = {0.0f};
  model->setOperandValue(dummy49, dummy49_init, sizeof(float) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy48, param63}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy49, param64}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type36(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {4, 2, 4, 8}, 0.04f, 0);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 3}, 0.04f, 0);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type46);
  auto roi1 = model->addOperand(&type36);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type47);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type36(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.04f, 0);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {4, 2, 4, 8}, 0.04f, 0);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type46);
  auto roi1 = model->addOperand(&type36);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type36(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1}, 0.04f, 0);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {4, 2, 4, 8}, 0.04f, 0);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 3}, 0.04f, 0);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type46);
  auto roi1 = model->addOperand(&type36);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type47);
  auto in1_tmp = model->addOperand(&type46);
  auto dummy50 = model->addOperand(&type38);
  auto param65 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy50_init[] = {0};
  model->setOperandValue(dummy50, dummy50_init, sizeof(uint8_t) * 1);
  static int32_t param65_init[] = {0};
  model->setOperandValue(param65, param65_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy50, param65}, {in1});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type36(Type::TENSOR_QUANT16_ASYMM, {4, 4}, 0.125f, 0);
  OperandType type37(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.04f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1}, 0.04f, 0);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {4, 2, 4, 8}, 0.04f, 0);
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type46);
  auto roi1 = model->addOperand(&type36);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type6);
  auto param9 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type37);
  auto in1_tmp = model->addOperand(&type46);
  auto dummy51 = model->addOperand(&type38);
  auto param66 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static float param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(float) * 1);
  static float param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy51_init[] = {0};
  model->setOperandValue(dummy51, dummy51_init, sizeof(uint8_t) * 1);
  static int32_t param66_init[] = {0};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy51, param66}, {in1});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type21(Type::FLOAT16, {});
  OperandType type41(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type48(Type::TENSOR_FLOAT16, {4, 2, 4, 8});
  OperandType type49(Type::TENSOR_FLOAT16, {4, 2, 2, 3});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type48);
  auto roi1 = model->addOperand(&type41);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type21);
  auto param9 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type49);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static _Float16 param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(_Float16) * 1);
  static _Float16 param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type21(Type::FLOAT16, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type41(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type48(Type::TENSOR_FLOAT16, {4, 2, 4, 8});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type48);
  auto roi1 = model->addOperand(&type41);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type21);
  auto param9 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static _Float16 param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(_Float16) * 1);
  static _Float16 param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type21(Type::FLOAT16, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type43(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type49(Type::TENSOR_FLOAT16, {4, 2, 2, 3});
  OperandType type5(Type::INT32, {});
  OperandType type50(Type::TENSOR_FLOAT16, {4, 2, 4, 8});
  // Phase 1, operands
  auto in1 = model->addOperand(&type50);
  auto roi1 = model->addOperand(&type43);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type21);
  auto param9 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type49);
  auto in1_tmp = model->addOperand(&type50);
  auto dummy52 = model->addOperand(&type25);
  auto param67 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type43);
  auto dummy53 = model->addOperand(&type25);
  auto param68 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static _Float16 param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(_Float16) * 1);
  static _Float16 param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy52_init[] = {0.0f};
  model->setOperandValue(dummy52, dummy52_init, sizeof(_Float16) * 1);
  static int32_t param67_init[] = {0};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  static _Float16 dummy53_init[] = {0.0f};
  model->setOperandValue(dummy53, dummy53_init, sizeof(_Float16) * 1);
  static int32_t param68_init[] = {0};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy52, param67}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy53, param68}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {4});
  OperandType type21(Type::FLOAT16, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type43(Type::TENSOR_FLOAT16, {4, 4});
  OperandType type5(Type::INT32, {});
  OperandType type50(Type::TENSOR_FLOAT16, {4, 2, 4, 8});
  // Phase 1, operands
  auto in1 = model->addOperand(&type50);
  auto roi1 = model->addOperand(&type43);
  auto param5 = model->addOperand(&type10);
  auto param6 = model->addOperand(&type5);
  auto param7 = model->addOperand(&type5);
  auto param8 = model->addOperand(&type21);
  auto param9 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type23);
  auto in1_tmp = model->addOperand(&type50);
  auto dummy54 = model->addOperand(&type25);
  auto param69 = model->addOperand(&type5);
  auto roi1_tmp = model->addOperand(&type43);
  auto dummy55 = model->addOperand(&type25);
  auto param70 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param5_init[] = {0, 0, 3, 3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 4);
  static int32_t param6_init[] = {2};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {3};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static _Float16 param8_init[] = {4.0f};
  model->setOperandValue(param8, param8_init, sizeof(_Float16) * 1);
  static _Float16 param9_init[] = {4.0f};
  model->setOperandValue(param9, param9_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy54_init[] = {0.0f};
  model->setOperandValue(dummy54, dummy54_init, sizeof(_Float16) * 1);
  static int32_t param69_init[] = {0};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static _Float16 dummy55_init[] = {0.0f};
  model->setOperandValue(dummy55, dummy55_init, sizeof(_Float16) * 1);
  static int32_t param70_init[] = {0};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy54, param69}, {in1});
  model->addOperation(ANEURALNETWORKS_ADD, {roi1_tmp, dummy55, param70}, {roi1});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in1, roi1, param5, param6, param7, param8, param9, layout}, {out1});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {4, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {5, 2, 2, 1});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type11);
  auto roi2 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {4, 4, 4, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type11);
  auto roi2 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {4, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {5, 2, 2, 1});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type11);
  auto roi2 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type3);
  auto in2_tmp = model->addOperand(&type11);
  auto dummy56 = model->addOperand(&type13);
  auto param71 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type2);
  auto dummy57 = model->addOperand(&type13);
  auto param72 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy56_init[] = {0.0f};
  model->setOperandValue(dummy56, dummy56_init, sizeof(float) * 1);
  static int32_t param71_init[] = {0};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  static float dummy57_init[] = {0.0f};
  model->setOperandValue(dummy57, dummy57_init, sizeof(float) * 1);
  static int32_t param72_init[] = {0};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy56, param71}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy57, param72}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {4, 4, 4, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type11);
  auto roi2 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type12);
  auto in2_tmp = model->addOperand(&type11);
  auto dummy58 = model->addOperand(&type13);
  auto param73 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type2);
  auto dummy59 = model->addOperand(&type13);
  auto param74 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy58_init[] = {0.0f};
  model->setOperandValue(dummy58, dummy58_init, sizeof(float) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  static float dummy59_init[] = {0.0f};
  model->setOperandValue(dummy59, dummy59_init, sizeof(float) * 1);
  static int32_t param74_init[] = {0};
  model->setOperandValue(param74, param74_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy58, param73}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy59, param74}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {4, 4, 4, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {5, 2, 2, 1});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type11);
  auto roi2 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {4, 4, 4, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type11);
  auto roi2 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {4, 4, 4, 1});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type3(Type::TENSOR_FLOAT32, {5, 2, 2, 1});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type11);
  auto roi2 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type3);
  auto in2_tmp = model->addOperand(&type11);
  auto dummy60 = model->addOperand(&type13);
  auto param75 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type2);
  auto dummy61 = model->addOperand(&type13);
  auto param76 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy60_init[] = {0.0f};
  model->setOperandValue(dummy60, dummy60_init, sizeof(float) * 1);
  static int32_t param75_init[] = {0};
  model->setOperandValue(param75, param75_init, sizeof(int32_t) * 1);
  static float dummy61_init[] = {0.0f};
  model->setOperandValue(dummy61, dummy61_init, sizeof(float) * 1);
  static int32_t param76_init[] = {0};
  model->setOperandValue(param76, param76_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy60, param75}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy61, param76}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {4, 4, 4, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type11);
  auto roi2 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type12);
  auto in2_tmp = model->addOperand(&type11);
  auto dummy62 = model->addOperand(&type13);
  auto param77 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type2);
  auto dummy63 = model->addOperand(&type13);
  auto param78 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy62_init[] = {0.0f};
  model->setOperandValue(dummy62, dummy62_init, sizeof(float) * 1);
  static int32_t param77_init[] = {0};
  model->setOperandValue(param77, param77_init, sizeof(int32_t) * 1);
  static float dummy63_init[] = {0.0f};
  model->setOperandValue(dummy63, dummy63_init, sizeof(float) * 1);
  static int32_t param78_init[] = {0};
  model->setOperandValue(param78, param78_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy62, param77}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy63, param78}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2, 1}, 0.25f, 128);
  OperandType type16(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type51(Type::TENSOR_QUANT8_ASYMM, {4, 4, 4, 1}, 0.25f, 128);
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type51);
  auto roi2 = model->addOperand(&type16);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_quant8_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type51(Type::TENSOR_QUANT8_ASYMM, {4, 4, 4, 1}, 0.25f, 128);
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type51);
  auto roi2 = model->addOperand(&type16);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_quant8_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {5, 2, 2, 1}, 0.25f, 128);
  OperandType type16(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type51(Type::TENSOR_QUANT8_ASYMM, {4, 4, 4, 1}, 0.25f, 128);
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type51);
  auto roi2 = model->addOperand(&type16);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type15);
  auto in2_tmp = model->addOperand(&type51);
  auto dummy64 = model->addOperand(&type18);
  auto param79 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy64_init[] = {128};
  model->setOperandValue(dummy64, dummy64_init, sizeof(uint8_t) * 1);
  static int32_t param79_init[] = {0};
  model->setOperandValue(param79, param79_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy64, param79}, {in2});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type51(Type::TENSOR_QUANT8_ASYMM, {4, 4, 4, 1}, 0.25f, 128);
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type51);
  auto roi2 = model->addOperand(&type16);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type17);
  auto in2_tmp = model->addOperand(&type51);
  auto dummy65 = model->addOperand(&type18);
  auto param80 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy65_init[] = {128};
  model->setOperandValue(dummy65, dummy65_init, sizeof(uint8_t) * 1);
  static int32_t param80_init[] = {0};
  model->setOperandValue(param80, param80_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy65, param80}, {in2});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {5, 2, 2, 1});
  OperandType type21(Type::FLOAT16, {});
  OperandType type22(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type52(Type::TENSOR_FLOAT16, {4, 4, 4, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type52);
  auto roi2 = model->addOperand(&type22);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type21);
  auto param14 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static _Float16 param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(_Float16) * 1);
  static _Float16 param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_float16_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::FLOAT16, {});
  OperandType type22(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type52(Type::TENSOR_FLOAT16, {4, 4, 4, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type52);
  auto roi2 = model->addOperand(&type22);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type21);
  auto param14 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static _Float16 param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(_Float16) * 1);
  static _Float16 param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {5, 2, 2, 1});
  OperandType type21(Type::FLOAT16, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT16, {4, 4, 4, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type53);
  auto roi2 = model->addOperand(&type26);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type21);
  auto param14 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type20);
  auto in2_tmp = model->addOperand(&type53);
  auto dummy66 = model->addOperand(&type25);
  auto param81 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type26);
  auto dummy67 = model->addOperand(&type25);
  auto param82 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static _Float16 param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(_Float16) * 1);
  static _Float16 param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy66_init[] = {0.0f};
  model->setOperandValue(dummy66, dummy66_init, sizeof(_Float16) * 1);
  static int32_t param81_init[] = {0};
  model->setOperandValue(param81, param81_init, sizeof(int32_t) * 1);
  static _Float16 dummy67_init[] = {0.0f};
  model->setOperandValue(dummy67, dummy67_init, sizeof(_Float16) * 1);
  static int32_t param82_init[] = {0};
  model->setOperandValue(param82, param82_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy66, param81}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy67, param82}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::FLOAT16, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type53(Type::TENSOR_FLOAT16, {4, 4, 4, 1});
  // Phase 1, operands
  auto in2 = model->addOperand(&type53);
  auto roi2 = model->addOperand(&type26);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type21);
  auto param14 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type23);
  auto in2_tmp = model->addOperand(&type53);
  auto dummy68 = model->addOperand(&type25);
  auto param83 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type26);
  auto dummy69 = model->addOperand(&type25);
  auto param84 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static _Float16 param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(_Float16) * 1);
  static _Float16 param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy68_init[] = {0.0f};
  model->setOperandValue(dummy68, dummy68_init, sizeof(_Float16) * 1);
  static int32_t param83_init[] = {0};
  model->setOperandValue(param83, param83_init, sizeof(int32_t) * 1);
  static _Float16 dummy69_init[] = {0.0f};
  model->setOperandValue(dummy69, dummy69_init, sizeof(_Float16) * 1);
  static int32_t param84_init[] = {0};
  model->setOperandValue(param84, param84_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy68, param83}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy69, param84}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type28(Type::TENSOR_FLOAT32, {5, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {4, 1, 4, 4});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type54);
  auto roi2 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {4, 1, 4, 4});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type54);
  auto roi2 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type28(Type::TENSOR_FLOAT32, {5, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {4, 1, 4, 4});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type54);
  auto roi2 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type28);
  auto in2_tmp = model->addOperand(&type54);
  auto dummy70 = model->addOperand(&type13);
  auto param85 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type2);
  auto dummy71 = model->addOperand(&type13);
  auto param86 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy70_init[] = {0.0f};
  model->setOperandValue(dummy70, dummy70_init, sizeof(float) * 1);
  static int32_t param85_init[] = {0};
  model->setOperandValue(param85, param85_init, sizeof(int32_t) * 1);
  static float dummy71_init[] = {0.0f};
  model->setOperandValue(dummy71, dummy71_init, sizeof(float) * 1);
  static int32_t param86_init[] = {0};
  model->setOperandValue(param86, param86_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy70, param85}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy71, param86}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {4, 1, 4, 4});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type54);
  auto roi2 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type12);
  auto in2_tmp = model->addOperand(&type54);
  auto dummy72 = model->addOperand(&type13);
  auto param87 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type2);
  auto dummy73 = model->addOperand(&type13);
  auto param88 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy72_init[] = {0.0f};
  model->setOperandValue(dummy72, dummy72_init, sizeof(float) * 1);
  static int32_t param87_init[] = {0};
  model->setOperandValue(param87, param87_init, sizeof(int32_t) * 1);
  static float dummy73_init[] = {0.0f};
  model->setOperandValue(dummy73, dummy73_init, sizeof(float) * 1);
  static int32_t param88_init[] = {0};
  model->setOperandValue(param88, param88_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy72, param87}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy73, param88}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type28(Type::TENSOR_FLOAT32, {5, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {4, 1, 4, 4});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type54);
  auto roi2 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {4, 1, 4, 4});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type54);
  auto roi2 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type28(Type::TENSOR_FLOAT32, {5, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {4, 1, 4, 4});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type54);
  auto roi2 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type28);
  auto in2_tmp = model->addOperand(&type54);
  auto dummy74 = model->addOperand(&type13);
  auto param89 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type2);
  auto dummy75 = model->addOperand(&type13);
  auto param90 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy74_init[] = {0.0f};
  model->setOperandValue(dummy74, dummy74_init, sizeof(float) * 1);
  static int32_t param89_init[] = {0};
  model->setOperandValue(param89, param89_init, sizeof(int32_t) * 1);
  static float dummy75_init[] = {0.0f};
  model->setOperandValue(dummy75, dummy75_init, sizeof(float) * 1);
  static int32_t param90_init[] = {0};
  model->setOperandValue(param90, param90_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy74, param89}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy75, param90}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type13(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {5, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {4, 1, 4, 4});
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type54);
  auto roi2 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type12);
  auto in2_tmp = model->addOperand(&type54);
  auto dummy76 = model->addOperand(&type13);
  auto param91 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type2);
  auto dummy77 = model->addOperand(&type13);
  auto param92 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy76_init[] = {0.0f};
  model->setOperandValue(dummy76, dummy76_init, sizeof(float) * 1);
  static int32_t param91_init[] = {0};
  model->setOperandValue(param91, param91_init, sizeof(int32_t) * 1);
  static float dummy77_init[] = {0.0f};
  model->setOperandValue(dummy77, dummy77_init, sizeof(float) * 1);
  static int32_t param92_init[] = {0};
  model->setOperandValue(param92, param92_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy76, param91}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy77, param92}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {5, 1, 2, 2}, 0.25f, 128);
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {4, 1, 4, 4}, 0.25f, 128);
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type55);
  auto roi2 = model->addOperand(&type16);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_quant8_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {4, 1, 4, 4}, 0.25f, 128);
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type55);
  auto roi2 = model->addOperand(&type16);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_quant8_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {5, 1, 2, 2}, 0.25f, 128);
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {4, 1, 4, 4}, 0.25f, 128);
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type55);
  auto roi2 = model->addOperand(&type16);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type30);
  auto in2_tmp = model->addOperand(&type55);
  auto dummy78 = model->addOperand(&type18);
  auto param93 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy78_init[] = {128};
  model->setOperandValue(dummy78, dummy78_init, sizeof(uint8_t) * 1);
  static int32_t param93_init[] = {0};
  model->setOperandValue(param93, param93_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy78, param93}, {in2});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT16_ASYMM, {5, 4}, 0.125f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type55(Type::TENSOR_QUANT8_ASYMM, {4, 1, 4, 4}, 0.25f, 128);
  OperandType type6(Type::FLOAT32, {});
  // Phase 1, operands
  auto in2 = model->addOperand(&type55);
  auto roi2 = model->addOperand(&type16);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type6);
  auto param14 = model->addOperand(&type6);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type17);
  auto in2_tmp = model->addOperand(&type55);
  auto dummy79 = model->addOperand(&type18);
  auto param94 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static float param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy79_init[] = {128};
  model->setOperandValue(dummy79, dummy79_init, sizeof(uint8_t) * 1);
  static int32_t param94_init[] = {0};
  model->setOperandValue(param94, param94_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy79, param94}, {in2});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::FLOAT16, {});
  OperandType type22(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type32(Type::TENSOR_FLOAT16, {5, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type56(Type::TENSOR_FLOAT16, {4, 1, 4, 4});
  // Phase 1, operands
  auto in2 = model->addOperand(&type56);
  auto roi2 = model->addOperand(&type22);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type21);
  auto param14 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static _Float16 param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(_Float16) * 1);
  static _Float16 param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_float16_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::FLOAT16, {});
  OperandType type22(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type56(Type::TENSOR_FLOAT16, {4, 1, 4, 4});
  // Phase 1, operands
  auto in2 = model->addOperand(&type56);
  auto roi2 = model->addOperand(&type22);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type21);
  auto param14 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static _Float16 param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(_Float16) * 1);
  static _Float16 param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::FLOAT16, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type32(Type::TENSOR_FLOAT16, {5, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type57(Type::TENSOR_FLOAT16, {4, 1, 4, 4});
  // Phase 1, operands
  auto in2 = model->addOperand(&type57);
  auto roi2 = model->addOperand(&type26);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type21);
  auto param14 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type32);
  auto in2_tmp = model->addOperand(&type57);
  auto dummy80 = model->addOperand(&type25);
  auto param95 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type26);
  auto dummy81 = model->addOperand(&type25);
  auto param96 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static _Float16 param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(_Float16) * 1);
  static _Float16 param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy80_init[] = {0.0f};
  model->setOperandValue(dummy80, dummy80_init, sizeof(_Float16) * 1);
  static int32_t param95_init[] = {0};
  model->setOperandValue(param95, param95_init, sizeof(int32_t) * 1);
  static _Float16 dummy81_init[] = {0.0f};
  model->setOperandValue(dummy81, dummy81_init, sizeof(_Float16) * 1);
  static int32_t param96_init[] = {0};
  model->setOperandValue(param96, param96_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy80, param95}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy81, param96}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
namespace generated_tests::roi_pooling {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type21(Type::FLOAT16, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type26(Type::TENSOR_FLOAT16, {5, 4});
  OperandType type4(Type::TENSOR_INT32, {5});
  OperandType type5(Type::INT32, {});
  OperandType type57(Type::TENSOR_FLOAT16, {4, 1, 4, 4});
  // Phase 1, operands
  auto in2 = model->addOperand(&type57);
  auto roi2 = model->addOperand(&type26);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type5);
  auto param12 = model->addOperand(&type5);
  auto param13 = model->addOperand(&type21);
  auto param14 = model->addOperand(&type21);
  auto layout = model->addOperand(&type0);
  auto out2 = model->addOperand(&type23);
  auto in2_tmp = model->addOperand(&type57);
  auto dummy82 = model->addOperand(&type25);
  auto param97 = model->addOperand(&type5);
  auto roi2_tmp = model->addOperand(&type26);
  auto dummy83 = model->addOperand(&type25);
  auto param98 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param10_init[] = {2, 2, 2, 2, 2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 5);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static _Float16 param13_init[] = {2.0f};
  model->setOperandValue(param13, param13_init, sizeof(_Float16) * 1);
  static _Float16 param14_init[] = {1.0f};
  model->setOperandValue(param14, param14_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy82_init[] = {0.0f};
  model->setOperandValue(dummy82, dummy82_init, sizeof(_Float16) * 1);
  static int32_t param97_init[] = {0};
  model->setOperandValue(param97, param97_init, sizeof(int32_t) * 1);
  static _Float16 dummy83_init[] = {0.0f};
  model->setOperandValue(dummy83, dummy83_init, sizeof(_Float16) * 1);
  static int32_t param98_init[] = {0};
  model->setOperandValue(param98, param98_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in2_tmp, dummy82, param97}, {in2});
  model->addOperation(ANEURALNETWORKS_ADD, {roi2_tmp, dummy83, param98}, {roi2});
  model->addOperation(ANEURALNETWORKS_ROI_POOLING, {in2, roi2, param10, param11, param12, param13, param14, layout}, {out2});
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

} // namespace generated_tests::roi_pooling
