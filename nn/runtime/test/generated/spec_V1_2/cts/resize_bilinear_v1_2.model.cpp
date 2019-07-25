// Generated from resize_bilinear_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy = model->addOperand(&type17);
  auto param42 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param42_init[] = {0};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param42}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type17);
  auto param43 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param43_init[] = {0};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param43}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy2 = model->addOperand(&type17);
  auto param44 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param44_init[] = {0};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy2, param44}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy3 = model->addOperand(&type17);
  auto param45 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy3, param45}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type19);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy4 = model->addOperand(&type22);
  auto param46 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(_Float16) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy4, param46}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy5 = model->addOperand(&type22);
  auto param47 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(_Float16) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy5, param47}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.01f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.01f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type24);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.01f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.01f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.01f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.01f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type24);
  auto op1_tmp = model->addOperand(&type23);
  auto dummy6 = model->addOperand(&type26);
  auto param48 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy6_init[] = {0};
  model->setOperandValue(dummy6, dummy6_init, sizeof(uint8_t) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy6, param48}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.01f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.01f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type25);
  auto op1_tmp = model->addOperand(&type23);
  auto dummy7 = model->addOperand(&type26);
  auto param49 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy7_init[] = {0};
  model->setOperandValue(dummy7, dummy7_init, sizeof(uint8_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy7, param49}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type28(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type28(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type28);
  auto op1_tmp = model->addOperand(&type27);
  auto dummy8 = model->addOperand(&type17);
  auto param50 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy8, param50}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type27);
  auto dummy9 = model->addOperand(&type17);
  auto param51 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param51_init[] = {0};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy9, param51}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type28(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type28(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type28);
  auto op1_tmp = model->addOperand(&type27);
  auto dummy10 = model->addOperand(&type17);
  auto param52 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(float) * 1);
  static int32_t param52_init[] = {0};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy10, param52}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type27);
  auto dummy11 = model->addOperand(&type17);
  auto param53 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(float) * 1);
  static int32_t param53_init[] = {0};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy11, param53}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  // Phase 1, operands
  auto op1 = model->addOperand(&type29);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type29);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type31);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type30);
  auto op1_tmp = model->addOperand(&type31);
  auto dummy12 = model->addOperand(&type22);
  auto param54 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(_Float16) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy12, param54}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type31);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  auto op1_tmp = model->addOperand(&type31);
  auto dummy13 = model->addOperand(&type22);
  auto param55 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(_Float16) * 1);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy13, param55}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.01f, 0);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.01f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type32);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type33);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.01f, 0);
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.01f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type32);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.01f, 0);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.01f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type32);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type33);
  auto op1_tmp = model->addOperand(&type32);
  auto dummy14 = model->addOperand(&type26);
  auto param56 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy14_init[] = {0};
  model->setOperandValue(dummy14, dummy14_init, sizeof(uint8_t) * 1);
  static int32_t param56_init[] = {0};
  model->setOperandValue(param56, param56_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy14, param56}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.01f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.01f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type32);
  auto param = model->addOperand(&type3);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type25);
  auto op1_tmp = model->addOperand(&type32);
  auto dummy15 = model->addOperand(&type26);
  auto param57 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {3};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {3};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy15_init[] = {0};
  model->setOperandValue(dummy15, dummy15_init, sizeof(uint8_t) * 1);
  static int32_t param57_init[] = {0};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy15, param57}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param, param1, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy16 = model->addOperand(&type17);
  auto param58 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(float) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy16, param58}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy17 = model->addOperand(&type17);
  auto param59 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(float) * 1);
  static int32_t param59_init[] = {0};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy17, param59}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 3, 3, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy18 = model->addOperand(&type17);
  auto param60 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param60_init[] = {0};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy18, param60}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy19 = model->addOperand(&type17);
  auto param61 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param61_init[] = {0};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy19, param61}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto param2 = model->addOperand(&type34);
  auto param3 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type19);
  // Phase 2, operations
  static _Float16 param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto param2 = model->addOperand(&type34);
  auto param3 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto param2 = model->addOperand(&type34);
  auto param3 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type19);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy20 = model->addOperand(&type22);
  auto param62 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(_Float16) * 1);
  static int32_t param62_init[] = {0};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy20, param62}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto param2 = model->addOperand(&type34);
  auto param3 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy21 = model->addOperand(&type22);
  auto param63 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(_Float16) * 1);
  static int32_t param63_init[] = {0};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy21, param63}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.01f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.01f, 0);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type24);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.01f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.01f, 0);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type25);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.01f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.01f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type24);
  auto op1_tmp = model->addOperand(&type23);
  auto dummy22 = model->addOperand(&type26);
  auto param64 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy22_init[] = {0};
  model->setOperandValue(dummy22, dummy22_init, sizeof(uint8_t) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy22, param64}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.01f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.01f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type25);
  auto op1_tmp = model->addOperand(&type23);
  auto dummy23 = model->addOperand(&type26);
  auto param65 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy23_init[] = {0};
  model->setOperandValue(dummy23, dummy23_init, sizeof(uint8_t) * 1);
  static int32_t param65_init[] = {0};
  model->setOperandValue(param65, param65_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy23, param65}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type28(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type28);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type28(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type28);
  auto op1_tmp = model->addOperand(&type27);
  auto dummy24 = model->addOperand(&type17);
  auto param66 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(float) * 1);
  static int32_t param66_init[] = {0};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy24, param66}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type27);
  auto dummy25 = model->addOperand(&type17);
  auto param67 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(float) * 1);
  static int32_t param67_init[] = {0};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy25, param67}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type28(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type28);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type28(Type::TENSOR_FLOAT32, {1, 1, 3, 3});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type28);
  auto op1_tmp = model->addOperand(&type27);
  auto dummy26 = model->addOperand(&type17);
  auto param68 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(float) * 1);
  static int32_t param68_init[] = {0};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy26, param68}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type27(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type27);
  auto dummy27 = model->addOperand(&type17);
  auto param69 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(float) * 1);
  static int32_t param69_init[] = {0};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy27, param69}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type29);
  auto param2 = model->addOperand(&type34);
  auto param3 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type30);
  // Phase 2, operations
  static _Float16 param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type29(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type29);
  auto param2 = model->addOperand(&type34);
  auto param3 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT16, {1, 1, 3, 3});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type31);
  auto param2 = model->addOperand(&type34);
  auto param3 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type30);
  auto op1_tmp = model->addOperand(&type31);
  auto dummy28 = model->addOperand(&type22);
  auto param70 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy28_init[] = {0.0f};
  model->setOperandValue(dummy28, dummy28_init, sizeof(_Float16) * 1);
  static int32_t param70_init[] = {0};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy28, param70}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type31);
  auto param2 = model->addOperand(&type34);
  auto param3 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  auto op1_tmp = model->addOperand(&type31);
  auto dummy29 = model->addOperand(&type22);
  auto param71 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static _Float16 param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy29_init[] = {0.0f};
  model->setOperandValue(dummy29, dummy29_init, sizeof(_Float16) * 1);
  static int32_t param71_init[] = {0};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy29, param71}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.01f, 0);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.01f, 0);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type32);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type33);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.01f, 0);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.01f, 0);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type32);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type25);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.01f, 0);
  OperandType type33(Type::TENSOR_QUANT8_ASYMM, {1, 1, 3, 3}, 0.01f, 0);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type32);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type33);
  auto op1_tmp = model->addOperand(&type32);
  auto dummy30 = model->addOperand(&type26);
  auto param72 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy30_init[] = {0};
  model->setOperandValue(dummy30, dummy30_init, sizeof(uint8_t) * 1);
  static int32_t param72_init[] = {0};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy30, param72}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.01f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.01f, 0);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type32);
  auto param2 = model->addOperand(&type4);
  auto param3 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type25);
  auto op1_tmp = model->addOperand(&type32);
  auto dummy31 = model->addOperand(&type26);
  auto param73 = model->addOperand(&type3);
  // Phase 2, operations
  static float param2_init[] = {1.5f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static float param3_init[] = {1.5f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy31_init[] = {0};
  model->setOperandValue(dummy31, dummy31_init, sizeof(uint8_t) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy31, param73}, {op1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op1, param2, param3, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy32 = model->addOperand(&type17);
  auto param74 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy32_init[] = {0.0f};
  model->setOperandValue(dummy32, dummy32_init, sizeof(float) * 1);
  static int32_t param74_init[] = {0};
  model->setOperandValue(param74, param74_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy32, param74}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy33 = model->addOperand(&type17);
  auto param75 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy33_init[] = {0.0f};
  model->setOperandValue(dummy33, dummy33_init, sizeof(float) * 1);
  static int32_t param75_init[] = {0};
  model->setOperandValue(param75, param75_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy33, param75}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy34 = model->addOperand(&type17);
  auto param76 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy34_init[] = {0.0f};
  model->setOperandValue(dummy34, dummy34_init, sizeof(float) * 1);
  static int32_t param76_init[] = {0};
  model->setOperandValue(param76, param76_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy34, param76}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy35 = model->addOperand(&type17);
  auto param77 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy35_init[] = {0.0f};
  model->setOperandValue(dummy35, dummy35_init, sizeof(float) * 1);
  static int32_t param77_init[] = {0};
  model->setOperandValue(param77, param77_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy35, param77}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type35);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type35);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type37(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type37);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type36);
  auto op11_tmp = model->addOperand(&type37);
  auto dummy36 = model->addOperand(&type22);
  auto param78 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy36_init[] = {0.0f};
  model->setOperandValue(dummy36, dummy36_init, sizeof(_Float16) * 1);
  static int32_t param78_init[] = {0};
  model->setOperandValue(param78, param78_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy36, param78}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type37(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type37);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type20);
  auto op11_tmp = model->addOperand(&type37);
  auto dummy37 = model->addOperand(&type22);
  auto param79 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy37_init[] = {0.0f};
  model->setOperandValue(dummy37, dummy37_init, sizeof(_Float16) * 1);
  static int32_t param79_init[] = {0};
  model->setOperandValue(param79, param79_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy37, param79}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.25f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type39);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.25f, 0);
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.25f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 0);
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type39);
  auto op11_tmp = model->addOperand(&type38);
  auto dummy38 = model->addOperand(&type41);
  auto param80 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy38_init[] = {0};
  model->setOperandValue(dummy38, dummy38_init, sizeof(uint8_t) * 1);
  static int32_t param80_init[] = {0};
  model->setOperandValue(param80, param80_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy38, param80}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.25f, 0);
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type40);
  auto op11_tmp = model->addOperand(&type38);
  auto dummy39 = model->addOperand(&type41);
  auto param81 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy39_init[] = {0};
  model->setOperandValue(dummy39, dummy39_init, sizeof(uint8_t) * 1);
  static int32_t param81_init[] = {0};
  model->setOperandValue(param81, param81_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy39, param81}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type42);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type42);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy40 = model->addOperand(&type17);
  auto param82 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy40_init[] = {0.0f};
  model->setOperandValue(dummy40, dummy40_init, sizeof(float) * 1);
  static int32_t param82_init[] = {0};
  model->setOperandValue(param82, param82_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy40, param82}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy41 = model->addOperand(&type17);
  auto param83 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy41_init[] = {0.0f};
  model->setOperandValue(dummy41, dummy41_init, sizeof(float) * 1);
  static int32_t param83_init[] = {0};
  model->setOperandValue(param83, param83_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy41, param83}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type42);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type42);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy42 = model->addOperand(&type17);
  auto param84 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy42_init[] = {0.0f};
  model->setOperandValue(dummy42, dummy42_init, sizeof(float) * 1);
  static int32_t param84_init[] = {0};
  model->setOperandValue(param84, param84_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy42, param84}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy43 = model->addOperand(&type17);
  auto param85 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy43_init[] = {0.0f};
  model->setOperandValue(dummy43, dummy43_init, sizeof(float) * 1);
  static int32_t param85_init[] = {0};
  model->setOperandValue(param85, param85_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy43, param85}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 2, 3, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type35);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type43);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type35);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type37(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 2, 3, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type37);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type43);
  auto op11_tmp = model->addOperand(&type37);
  auto dummy44 = model->addOperand(&type22);
  auto param86 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy44_init[] = {0.0f};
  model->setOperandValue(dummy44, dummy44_init, sizeof(_Float16) * 1);
  static int32_t param86_init[] = {0};
  model->setOperandValue(param86, param86_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy44, param86}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type37(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type37);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type20);
  auto op11_tmp = model->addOperand(&type37);
  auto dummy45 = model->addOperand(&type22);
  auto param87 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy45_init[] = {0.0f};
  model->setOperandValue(dummy45, dummy45_init, sizeof(_Float16) * 1);
  static int32_t param87_init[] = {0};
  model->setOperandValue(param87, param87_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy45, param87}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.25f, 0);
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.25f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type44);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.25f, 0);
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.25f, 0);
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.25f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type44);
  auto op11_tmp = model->addOperand(&type38);
  auto dummy46 = model->addOperand(&type41);
  auto param88 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy46_init[] = {0};
  model->setOperandValue(dummy46, dummy46_init, sizeof(uint8_t) * 1);
  static int32_t param88_init[] = {0};
  model->setOperandValue(param88, param88_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy46, param88}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.25f, 0);
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param4 = model->addOperand(&type3);
  auto param5 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type40);
  auto op11_tmp = model->addOperand(&type38);
  auto dummy47 = model->addOperand(&type41);
  auto param89 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param4_init[] = {3};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {3};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy47_init[] = {0};
  model->setOperandValue(dummy47, dummy47_init, sizeof(uint8_t) * 1);
  static int32_t param89_init[] = {0};
  model->setOperandValue(param89, param89_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy47, param89}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param4, param5, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy48 = model->addOperand(&type17);
  auto param90 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy48_init[] = {0.0f};
  model->setOperandValue(dummy48, dummy48_init, sizeof(float) * 1);
  static int32_t param90_init[] = {0};
  model->setOperandValue(param90, param90_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy48, param90}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy49 = model->addOperand(&type17);
  auto param91 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy49_init[] = {0.0f};
  model->setOperandValue(dummy49, dummy49_init, sizeof(float) * 1);
  static int32_t param91_init[] = {0};
  model->setOperandValue(param91, param91_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy49, param91}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 3, 3, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy50 = model->addOperand(&type17);
  auto param92 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy50_init[] = {0.0f};
  model->setOperandValue(dummy50, dummy50_init, sizeof(float) * 1);
  static int32_t param92_init[] = {0};
  model->setOperandValue(param92, param92_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy50, param92}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy51 = model->addOperand(&type17);
  auto param93 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy51_init[] = {0.0f};
  model->setOperandValue(dummy51, dummy51_init, sizeof(float) * 1);
  static int32_t param93_init[] = {0};
  model->setOperandValue(param93, param93_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy51, param93}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type35);
  auto param6 = model->addOperand(&type34);
  auto param7 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type36);
  // Phase 2, operations
  static _Float16 param6_init[] = {1.600000023841858f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {1.600000023841858f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::FLOAT16, {});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type35);
  auto param6 = model->addOperand(&type34);
  auto param7 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 param6_init[] = {1.600000023841858f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {1.600000023841858f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 3, 3, 2});
  OperandType type37(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type37);
  auto param6 = model->addOperand(&type34);
  auto param7 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type36);
  auto op11_tmp = model->addOperand(&type37);
  auto dummy52 = model->addOperand(&type22);
  auto param94 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param6_init[] = {1.600000023841858f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {1.600000023841858f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy52_init[] = {0.0f};
  model->setOperandValue(dummy52, dummy52_init, sizeof(_Float16) * 1);
  static int32_t param94_init[] = {0};
  model->setOperandValue(param94, param94_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy52, param94}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type37(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type37);
  auto param6 = model->addOperand(&type34);
  auto param7 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type20);
  auto op11_tmp = model->addOperand(&type37);
  auto dummy53 = model->addOperand(&type22);
  auto param95 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param6_init[] = {1.600000023841858f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {1.600000023841858f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy53_init[] = {0.0f};
  model->setOperandValue(dummy53, dummy53_init, sizeof(_Float16) * 1);
  static int32_t param95_init[] = {0};
  model->setOperandValue(param95, param95_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy53, param95}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.25f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 0);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type39);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.25f, 0);
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type40);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.25f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 2}, 0.25f, 0);
  OperandType type4(Type::FLOAT32, {});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type39);
  auto op11_tmp = model->addOperand(&type38);
  auto dummy54 = model->addOperand(&type41);
  auto param96 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy54_init[] = {0};
  model->setOperandValue(dummy54, dummy54_init, sizeof(uint8_t) * 1);
  static int32_t param96_init[] = {0};
  model->setOperandValue(param96, param96_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy54, param96}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.25f, 0);
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type40);
  auto op11_tmp = model->addOperand(&type38);
  auto dummy55 = model->addOperand(&type41);
  auto param97 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy55_init[] = {0};
  model->setOperandValue(dummy55, dummy55_init, sizeof(uint8_t) * 1);
  static int32_t param97_init[] = {0};
  model->setOperandValue(param97, param97_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy55, param97}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type42);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type42);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy56 = model->addOperand(&type17);
  auto param98 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy56_init[] = {0.0f};
  model->setOperandValue(dummy56, dummy56_init, sizeof(float) * 1);
  static int32_t param98_init[] = {0};
  model->setOperandValue(param98, param98_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy56, param98}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy57 = model->addOperand(&type17);
  auto param99 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy57_init[] = {0.0f};
  model->setOperandValue(dummy57, dummy57_init, sizeof(float) * 1);
  static int32_t param99_init[] = {0};
  model->setOperandValue(param99, param99_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy57, param99}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type42);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type42(Type::TENSOR_FLOAT32, {1, 2, 3, 3});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type42);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy58 = model->addOperand(&type17);
  auto param100 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy58_init[] = {0.0f};
  model->setOperandValue(dummy58, dummy58_init, sizeof(float) * 1);
  static int32_t param100_init[] = {0};
  model->setOperandValue(param100, param100_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy58, param100}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy59 = model->addOperand(&type17);
  auto param101 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy59_init[] = {0.0f};
  model->setOperandValue(dummy59, dummy59_init, sizeof(float) * 1);
  static int32_t param101_init[] = {0};
  model->setOperandValue(param101, param101_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy59, param101}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 2, 3, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type35);
  auto param6 = model->addOperand(&type34);
  auto param7 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type43);
  // Phase 2, operations
  static _Float16 param6_init[] = {1.600000023841858f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {1.600000023841858f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::FLOAT16, {});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type35);
  auto param6 = model->addOperand(&type34);
  auto param7 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 param6_init[] = {1.600000023841858f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {1.600000023841858f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type37(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 2, 3, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type37);
  auto param6 = model->addOperand(&type34);
  auto param7 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type43);
  auto op11_tmp = model->addOperand(&type37);
  auto dummy60 = model->addOperand(&type22);
  auto param102 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param6_init[] = {1.600000023841858f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {1.600000023841858f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy60_init[] = {0.0f};
  model->setOperandValue(dummy60, dummy60_init, sizeof(_Float16) * 1);
  static int32_t param102_init[] = {0};
  model->setOperandValue(param102, param102_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy60, param102}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type37(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type37);
  auto param6 = model->addOperand(&type34);
  auto param7 = model->addOperand(&type34);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type20);
  auto op11_tmp = model->addOperand(&type37);
  auto dummy61 = model->addOperand(&type22);
  auto param103 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param6_init[] = {1.600000023841858f};
  model->setOperandValue(param6, param6_init, sizeof(_Float16) * 1);
  static _Float16 param7_init[] = {1.600000023841858f};
  model->setOperandValue(param7, param7_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy61_init[] = {0.0f};
  model->setOperandValue(dummy61, dummy61_init, sizeof(_Float16) * 1);
  static int32_t param103_init[] = {0};
  model->setOperandValue(param103, param103_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy61, param103}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.25f, 0);
  OperandType type4(Type::FLOAT32, {});
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.25f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type44);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.25f, 0);
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type40);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.25f, 0);
  OperandType type4(Type::FLOAT32, {});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3, 3}, 0.25f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type44);
  auto op11_tmp = model->addOperand(&type38);
  auto dummy62 = model->addOperand(&type41);
  auto param104 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy62_init[] = {0};
  model->setOperandValue(dummy62, dummy62_init, sizeof(uint8_t) * 1);
  static int32_t param104_init[] = {0};
  model->setOperandValue(param104, param104_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy62, param104}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.25f, 0);
  OperandType type4(Type::FLOAT32, {});
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param6 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type4);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type40);
  auto op11_tmp = model->addOperand(&type38);
  auto dummy63 = model->addOperand(&type41);
  auto param105 = model->addOperand(&type3);
  // Phase 2, operations
  static float param6_init[] = {1.6f};
  model->setOperandValue(param6, param6_init, sizeof(float) * 1);
  static float param7_init[] = {1.6f};
  model->setOperandValue(param7, param7_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy63_init[] = {0};
  model->setOperandValue(dummy63, dummy63_init, sizeof(uint8_t) * 1);
  static int32_t param105_init[] = {0};
  model->setOperandValue(param105, param105_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy63, param105}, {op11});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op11, param6, param7, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_float16(Model *model) {
  OperandType type18(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type18);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto op42 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op12, param8, param9}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_shape_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_float16_dynamic_output_shape(Model *model) {
  OperandType type18(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type18);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto op42 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op12, param8, param9}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_shape_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_float16_all_inputs_as_internal(Model *model) {
  OperandType type19(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type21);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto op42 = model->addOperand(&type19);
  auto op12_tmp = model->addOperand(&type21);
  auto dummy64 = model->addOperand(&type22);
  auto param106 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 dummy64_init[] = {0.0f};
  model->setOperandValue(dummy64, dummy64_init, sizeof(_Float16) * 1);
  static int32_t param106_init[] = {0};
  model->setOperandValue(param106, param106_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy64, param106}, {op12});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op12, param8, param9}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_shape_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type21);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto op42 = model->addOperand(&type20);
  auto op12_tmp = model->addOperand(&type21);
  auto dummy65 = model->addOperand(&type22);
  auto param107 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static _Float16 dummy65_init[] = {0.0f};
  model->setOperandValue(dummy65, dummy65_init, sizeof(_Float16) * 1);
  static int32_t param107_init[] = {0};
  model->setOperandValue(param107, param107_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy65, param107}, {op12});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op12, param8, param9}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_shape_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_quant8(Model *model) {
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.01f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.01f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type23);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto op42 = model->addOperand(&type24);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op12, param8, param9}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_shape_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_quant8_dynamic_output_shape(Model *model) {
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.01f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.01f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type23);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto op42 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op12, param8, param9}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_shape_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_quant8_all_inputs_as_internal(Model *model) {
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.01f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.01f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type23);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto op42 = model->addOperand(&type24);
  auto op12_tmp = model->addOperand(&type23);
  auto dummy66 = model->addOperand(&type26);
  auto param108 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static uint8_t dummy66_init[] = {0};
  model->setOperandValue(dummy66, dummy66_init, sizeof(uint8_t) * 1);
  static int32_t param108_init[] = {0};
  model->setOperandValue(param108, param108_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy66, param108}, {op12});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op12, param8, param9}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_shape_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_shape_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.01f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.01f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type23);
  auto param8 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type3);
  auto op42 = model->addOperand(&type25);
  auto op12_tmp = model->addOperand(&type23);
  auto dummy67 = model->addOperand(&type26);
  auto param109 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param8_init[] = {3};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {3};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static uint8_t dummy67_init[] = {0};
  model->setOperandValue(dummy67, dummy67_init, sizeof(uint8_t) * 1);
  static int32_t param109_init[] = {0};
  model->setOperandValue(param109, param109_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy67, param109}, {op12});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op12, param8, param9}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_shape_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_float16(Model *model) {
  OperandType type18(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type18);
  auto param10 = model->addOperand(&type34);
  auto param11 = model->addOperand(&type34);
  auto op42 = model->addOperand(&type19);
  // Phase 2, operations
  static _Float16 param10_init[] = {1.7999999523162842f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {1.7999999523162842f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op12, param10, param11}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_scale_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_float16_dynamic_output_shape(Model *model) {
  OperandType type18(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type18);
  auto param10 = model->addOperand(&type34);
  auto param11 = model->addOperand(&type34);
  auto op42 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 param10_init[] = {1.7999999523162842f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {1.7999999523162842f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op12, param10, param11}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_scale_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_float16_all_inputs_as_internal(Model *model) {
  OperandType type19(Type::TENSOR_FLOAT16, {1, 3, 3, 1});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type21);
  auto param10 = model->addOperand(&type34);
  auto param11 = model->addOperand(&type34);
  auto op42 = model->addOperand(&type19);
  auto op12_tmp = model->addOperand(&type21);
  auto dummy68 = model->addOperand(&type22);
  auto param110 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param10_init[] = {1.7999999523162842f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {1.7999999523162842f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static _Float16 dummy68_init[] = {0.0f};
  model->setOperandValue(dummy68, dummy68_init, sizeof(_Float16) * 1);
  static int32_t param110_init[] = {0};
  model->setOperandValue(param110, param110_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy68, param110}, {op12});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op12, param10, param11}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_scale_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type21);
  auto param10 = model->addOperand(&type34);
  auto param11 = model->addOperand(&type34);
  auto op42 = model->addOperand(&type20);
  auto op12_tmp = model->addOperand(&type21);
  auto dummy69 = model->addOperand(&type22);
  auto param111 = model->addOperand(&type3);
  // Phase 2, operations
  static _Float16 param10_init[] = {1.7999999523162842f};
  model->setOperandValue(param10, param10_init, sizeof(_Float16) * 1);
  static _Float16 param11_init[] = {1.7999999523162842f};
  model->setOperandValue(param11, param11_init, sizeof(_Float16) * 1);
  static _Float16 dummy69_init[] = {0.0f};
  model->setOperandValue(dummy69, dummy69_init, sizeof(_Float16) * 1);
  static int32_t param111_init[] = {0};
  model->setOperandValue(param111, param111_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy69, param111}, {op12});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op12, param10, param11}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_scale_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_quant8(Model *model) {
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.01f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.01f, 0);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type23);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type24);
  // Phase 2, operations
  static float param10_init[] = {1.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op12, param10, param11}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_scale_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_quant8_dynamic_output_shape(Model *model) {
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.01f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.01f, 0);
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type23);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type25);
  // Phase 2, operations
  static float param10_init[] = {1.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op12, param10, param11}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_scale_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_quant8_all_inputs_as_internal(Model *model) {
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.01f, 0);
  OperandType type24(Type::TENSOR_QUANT8_ASYMM, {1, 3, 3, 1}, 0.01f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type23);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type24);
  auto op12_tmp = model->addOperand(&type23);
  auto dummy70 = model->addOperand(&type26);
  auto param112 = model->addOperand(&type3);
  // Phase 2, operations
  static float param10_init[] = {1.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static uint8_t dummy70_init[] = {0};
  model->setOperandValue(dummy70, dummy70_init, sizeof(uint8_t) * 1);
  static int32_t param112_init[] = {0};
  model->setOperandValue(param112, param112_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy70, param112}, {op12});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op12, param10, param11}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_scale_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_scale_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type23(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.01f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.01f, 0);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1}, 0.01f, 0);
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  // Phase 1, operands
  auto op12 = model->addOperand(&type23);
  auto param10 = model->addOperand(&type4);
  auto param11 = model->addOperand(&type4);
  auto op42 = model->addOperand(&type25);
  auto op12_tmp = model->addOperand(&type23);
  auto dummy71 = model->addOperand(&type26);
  auto param113 = model->addOperand(&type3);
  // Phase 2, operations
  static float param10_init[] = {1.8f};
  model->setOperandValue(param10, param10_init, sizeof(float) * 1);
  static float param11_init[] = {1.8f};
  model->setOperandValue(param11, param11_init, sizeof(float) * 1);
  static uint8_t dummy71_init[] = {0};
  model->setOperandValue(dummy71, dummy71_init, sizeof(uint8_t) * 1);
  static int32_t param113_init[] = {0};
  model->setOperandValue(param113, param113_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy71, param113}, {op12});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {op12, param10, param11}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_scale_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 3, 3, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param12 = model->addOperand(&type12);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type13);
  auto param19 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type14);
  auto param25 = model->addOperand(&type3);
  auto param26 = model->addOperand(&type3);
  auto out = model->addOperand(&type15);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {0.3f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.4f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {0.3f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static float param21_init[] = {2.0f};
  model->setOperandValue(param21, param21_init, sizeof(float) * 1);
  static float param22_init[] = {2.0f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static int32_t param23_init[] = {4};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {3};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param12, param13, param14, param15, param16, param17, param18}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param19, param20, param21, param22, param23, param24, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap, param25, param26, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nhwc_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param12 = model->addOperand(&type12);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type13);
  auto param19 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type14);
  auto param25 = model->addOperand(&type3);
  auto param26 = model->addOperand(&type3);
  auto out = model->addOperand(&type16);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {0.3f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.4f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {0.3f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static float param21_init[] = {2.0f};
  model->setOperandValue(param21, param21_init, sizeof(float) * 1);
  static float param22_init[] = {2.0f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static int32_t param23_init[] = {4};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {3};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param12, param13, param14, param15, param16, param17, param18}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param19, param20, param21, param22, param23, param24, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap, param25, param26, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 3, 3, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param12 = model->addOperand(&type12);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type13);
  auto param19 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type14);
  auto param25 = model->addOperand(&type3);
  auto param26 = model->addOperand(&type3);
  auto out = model->addOperand(&type15);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {0.3f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.4f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {0.3f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static float param21_init[] = {2.0f};
  model->setOperandValue(param21, param21_init, sizeof(float) * 1);
  static float param22_init[] = {2.0f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static int32_t param23_init[] = {4};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {3};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param12, param13, param14, param15, param16, param17, param18}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param19, param20, param21, param22, param23, param24, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap, param25, param26, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nhwc_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param12 = model->addOperand(&type12);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type13);
  auto param19 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type14);
  auto param25 = model->addOperand(&type3);
  auto param26 = model->addOperand(&type3);
  auto out = model->addOperand(&type16);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {0.3f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.4f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {0.3f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static float param21_init[] = {2.0f};
  model->setOperandValue(param21, param21_init, sizeof(float) * 1);
  static float param22_init[] = {2.0f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static int32_t param23_init[] = {4};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {3};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param12, param13, param14, param15, param16, param17, param18}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param19, param20, param21, param22, param23, param24, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap, param25, param26, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {0, 3, 3, 1}, 0.1f, 128);
  OperandType type48(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type49(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type51(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type50);
  auto roi = model->addOperand(&type48);
  auto param12 = model->addOperand(&type12);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type51);
  auto roiOut = model->addOperand(&type49);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type46);
  auto param19 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type45);
  auto param25 = model->addOperand(&type3);
  auto param26 = model->addOperand(&type3);
  auto out = model->addOperand(&type47);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {0.3f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.4f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {0.3f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static float param21_init[] = {2.0f};
  model->setOperandValue(param21, param21_init, sizeof(float) * 1);
  static float param22_init[] = {2.0f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static int32_t param23_init[] = {4};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {3};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param12, param13, param14, param15, param16, param17, param18}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param19, param20, param21, param22, param23, param24, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap, param25, param26, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nhwc_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type48(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type49(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type51(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type50);
  auto roi = model->addOperand(&type48);
  auto param12 = model->addOperand(&type12);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type51);
  auto roiOut = model->addOperand(&type49);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type46);
  auto param19 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type45);
  auto param25 = model->addOperand(&type3);
  auto param26 = model->addOperand(&type3);
  auto out = model->addOperand(&type52);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {0.3f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.4f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {0.3f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static float param21_init[] = {2.0f};
  model->setOperandValue(param21, param21_init, sizeof(float) * 1);
  static float param22_init[] = {2.0f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static int32_t param23_init[] = {4};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {3};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param12, param13, param14, param15, param16, param17, param18}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param19, param20, param21, param22, param23, param24, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap, param25, param26, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type53(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type54(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type55(Type::TENSOR_FLOAT16, {0, 3, 3, 1});
  OperandType type56(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type57(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type59(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type58);
  auto roi = model->addOperand(&type56);
  auto param12 = model->addOperand(&type12);
  auto param13 = model->addOperand(&type34);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto param16 = model->addOperand(&type34);
  auto param17 = model->addOperand(&type34);
  auto param18 = model->addOperand(&type34);
  auto scoresOut = model->addOperand(&type59);
  auto roiOut = model->addOperand(&type57);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type54);
  auto param19 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type34);
  auto param22 = model->addOperand(&type34);
  auto param23 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type53);
  auto param25 = model->addOperand(&type3);
  auto param26 = model->addOperand(&type3);
  auto out = model->addOperand(&type55);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static _Float16 param13_init[] = {0.30000001192092896f};
  model->setOperandValue(param13, param13_init, sizeof(_Float16) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static _Float16 param16_init[] = {0.4000000059604645f};
  model->setOperandValue(param16, param16_init, sizeof(_Float16) * 1);
  static _Float16 param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(_Float16) * 1);
  static _Float16 param18_init[] = {0.30000001192092896f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static _Float16 param21_init[] = {2.0f};
  model->setOperandValue(param21, param21_init, sizeof(_Float16) * 1);
  static _Float16 param22_init[] = {2.0f};
  model->setOperandValue(param22, param22_init, sizeof(_Float16) * 1);
  static int32_t param23_init[] = {4};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {3};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param12, param13, param14, param15, param16, param17, param18}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param19, param20, param21, param22, param23, param24, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap, param25, param26, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type53(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type54(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type56(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type57(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type60(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type58);
  auto roi = model->addOperand(&type56);
  auto param12 = model->addOperand(&type12);
  auto param13 = model->addOperand(&type34);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto param16 = model->addOperand(&type34);
  auto param17 = model->addOperand(&type34);
  auto param18 = model->addOperand(&type34);
  auto scoresOut = model->addOperand(&type60);
  auto roiOut = model->addOperand(&type57);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type54);
  auto param19 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type34);
  auto param22 = model->addOperand(&type34);
  auto param23 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type53);
  auto param25 = model->addOperand(&type3);
  auto param26 = model->addOperand(&type3);
  auto out = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static _Float16 param13_init[] = {0.30000001192092896f};
  model->setOperandValue(param13, param13_init, sizeof(_Float16) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static _Float16 param16_init[] = {0.4000000059604645f};
  model->setOperandValue(param16, param16_init, sizeof(_Float16) * 1);
  static _Float16 param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(_Float16) * 1);
  static _Float16 param18_init[] = {0.30000001192092896f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static _Float16 param21_init[] = {2.0f};
  model->setOperandValue(param21, param21_init, sizeof(_Float16) * 1);
  static _Float16 param22_init[] = {2.0f};
  model->setOperandValue(param22, param22_init, sizeof(_Float16) * 1);
  static int32_t param23_init[] = {4};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {3};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param12, param13, param14, param15, param16, param17, param18}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param19, param20, param21, param22, param23, param24, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap, param25, param26, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type61(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type62(Type::TENSOR_FLOAT32, {0, 1, 3, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param12 = model->addOperand(&type12);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type13);
  auto param19 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type61);
  auto param25 = model->addOperand(&type3);
  auto param26 = model->addOperand(&type3);
  auto out = model->addOperand(&type62);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {0.3f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.4f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {0.3f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static float param21_init[] = {2.0f};
  model->setOperandValue(param21, param21_init, sizeof(float) * 1);
  static float param22_init[] = {2.0f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static int32_t param23_init[] = {4};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {3};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param12, param13, param14, param15, param16, param17, param18}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param19, param20, param21, param22, param23, param24, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap, param25, param26, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type61(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param12 = model->addOperand(&type12);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type13);
  auto param19 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type61);
  auto param25 = model->addOperand(&type3);
  auto param26 = model->addOperand(&type3);
  auto out = model->addOperand(&type16);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {0.3f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.4f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {0.3f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static float param21_init[] = {2.0f};
  model->setOperandValue(param21, param21_init, sizeof(float) * 1);
  static float param22_init[] = {2.0f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static int32_t param23_init[] = {4};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {3};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param12, param13, param14, param15, param16, param17, param18}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param19, param20, param21, param22, param23, param24, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap, param25, param26, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type61(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type62(Type::TENSOR_FLOAT32, {0, 1, 3, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param12 = model->addOperand(&type12);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type13);
  auto param19 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type61);
  auto param25 = model->addOperand(&type3);
  auto param26 = model->addOperand(&type3);
  auto out = model->addOperand(&type62);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {0.3f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.4f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {0.3f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static float param21_init[] = {2.0f};
  model->setOperandValue(param21, param21_init, sizeof(float) * 1);
  static float param22_init[] = {2.0f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static int32_t param23_init[] = {4};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {3};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param12, param13, param14, param15, param16, param17, param18}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param19, param20, param21, param22, param23, param24, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap, param25, param26, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type61(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param12 = model->addOperand(&type12);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type13);
  auto param19 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type61);
  auto param25 = model->addOperand(&type3);
  auto param26 = model->addOperand(&type3);
  auto out = model->addOperand(&type16);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {0.3f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.4f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {0.3f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static float param21_init[] = {2.0f};
  model->setOperandValue(param21, param21_init, sizeof(float) * 1);
  static float param22_init[] = {2.0f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static int32_t param23_init[] = {4};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {3};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param12, param13, param14, param15, param16, param17, param18}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param19, param20, param21, param22, param23, param24, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap, param25, param26, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type48(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type49(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type51(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type63(Type::TENSOR_QUANT8_ASYMM, {0, 1, 2, 2}, 0.1f, 128);
  OperandType type64(Type::TENSOR_QUANT8_ASYMM, {0, 1, 3, 3}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type50);
  auto roi = model->addOperand(&type48);
  auto param12 = model->addOperand(&type12);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type51);
  auto roiOut = model->addOperand(&type49);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type46);
  auto param19 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type63);
  auto param25 = model->addOperand(&type3);
  auto param26 = model->addOperand(&type3);
  auto out = model->addOperand(&type64);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {0.3f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.4f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {0.3f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static float param21_init[] = {2.0f};
  model->setOperandValue(param21, param21_init, sizeof(float) * 1);
  static float param22_init[] = {2.0f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static int32_t param23_init[] = {4};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {3};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param12, param13, param14, param15, param16, param17, param18}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param19, param20, param21, param22, param23, param24, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap, param25, param26, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nchw_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type48(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type49(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type51(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  OperandType type63(Type::TENSOR_QUANT8_ASYMM, {0, 1, 2, 2}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type50);
  auto roi = model->addOperand(&type48);
  auto param12 = model->addOperand(&type12);
  auto param13 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto param16 = model->addOperand(&type4);
  auto param17 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type4);
  auto scoresOut = model->addOperand(&type51);
  auto roiOut = model->addOperand(&type49);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type46);
  auto param19 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type4);
  auto param22 = model->addOperand(&type4);
  auto param23 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type63);
  auto param25 = model->addOperand(&type3);
  auto param26 = model->addOperand(&type3);
  auto out = model->addOperand(&type52);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static float param13_init[] = {0.3f};
  model->setOperandValue(param13, param13_init, sizeof(float) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static float param16_init[] = {0.4f};
  model->setOperandValue(param16, param16_init, sizeof(float) * 1);
  static float param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(float) * 1);
  static float param18_init[] = {0.3f};
  model->setOperandValue(param18, param18_init, sizeof(float) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static float param21_init[] = {2.0f};
  model->setOperandValue(param21, param21_init, sizeof(float) * 1);
  static float param22_init[] = {2.0f};
  model->setOperandValue(param22, param22_init, sizeof(float) * 1);
  static int32_t param23_init[] = {4};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {3};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param12, param13, param14, param15, param16, param17, param18}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param19, param20, param21, param22, param23, param24, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap, param25, param26, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type54(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type56(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type57(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type59(Type::TENSOR_FLOAT16, {0});
  OperandType type65(Type::TENSOR_FLOAT16, {0, 1, 2, 2});
  OperandType type66(Type::TENSOR_FLOAT16, {0, 1, 3, 3});
  // Phase 1, operands
  auto scores = model->addOperand(&type58);
  auto roi = model->addOperand(&type56);
  auto param12 = model->addOperand(&type12);
  auto param13 = model->addOperand(&type34);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto param16 = model->addOperand(&type34);
  auto param17 = model->addOperand(&type34);
  auto param18 = model->addOperand(&type34);
  auto scoresOut = model->addOperand(&type59);
  auto roiOut = model->addOperand(&type57);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type54);
  auto param19 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type34);
  auto param22 = model->addOperand(&type34);
  auto param23 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type65);
  auto param25 = model->addOperand(&type3);
  auto param26 = model->addOperand(&type3);
  auto out = model->addOperand(&type66);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static _Float16 param13_init[] = {0.30000001192092896f};
  model->setOperandValue(param13, param13_init, sizeof(_Float16) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static _Float16 param16_init[] = {0.4000000059604645f};
  model->setOperandValue(param16, param16_init, sizeof(_Float16) * 1);
  static _Float16 param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(_Float16) * 1);
  static _Float16 param18_init[] = {0.30000001192092896f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static _Float16 param21_init[] = {2.0f};
  model->setOperandValue(param21, param21_init, sizeof(_Float16) * 1);
  static _Float16 param22_init[] = {2.0f};
  model->setOperandValue(param22, param22_init, sizeof(_Float16) * 1);
  static int32_t param23_init[] = {4};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {3};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param12, param13, param14, param15, param16, param17, param18}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param19, param20, param21, param22, param23, param24, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap, param25, param26, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type54(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type56(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type57(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type60(Type::TENSOR_FLOAT16, {0});
  OperandType type65(Type::TENSOR_FLOAT16, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores = model->addOperand(&type58);
  auto roi = model->addOperand(&type56);
  auto param12 = model->addOperand(&type12);
  auto param13 = model->addOperand(&type34);
  auto param14 = model->addOperand(&type3);
  auto param15 = model->addOperand(&type3);
  auto param16 = model->addOperand(&type34);
  auto param17 = model->addOperand(&type34);
  auto param18 = model->addOperand(&type34);
  auto scoresOut = model->addOperand(&type60);
  auto roiOut = model->addOperand(&type57);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type54);
  auto param19 = model->addOperand(&type3);
  auto param20 = model->addOperand(&type3);
  auto param21 = model->addOperand(&type34);
  auto param22 = model->addOperand(&type34);
  auto param23 = model->addOperand(&type3);
  auto param24 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type65);
  auto param25 = model->addOperand(&type3);
  auto param26 = model->addOperand(&type3);
  auto out = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static _Float16 param13_init[] = {0.30000001192092896f};
  model->setOperandValue(param13, param13_init, sizeof(_Float16) * 1);
  static int32_t param14_init[] = {-1};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static _Float16 param16_init[] = {0.4000000059604645f};
  model->setOperandValue(param16, param16_init, sizeof(_Float16) * 1);
  static _Float16 param17_init[] = {1.0f};
  model->setOperandValue(param17, param17_init, sizeof(_Float16) * 1);
  static _Float16 param18_init[] = {0.30000001192092896f};
  model->setOperandValue(param18, param18_init, sizeof(_Float16) * 1);
  static int32_t param19_init[] = {2};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {2};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static _Float16 param21_init[] = {2.0f};
  model->setOperandValue(param21, param21_init, sizeof(_Float16) * 1);
  static _Float16 param22_init[] = {2.0f};
  model->setOperandValue(param22, param22_init, sizeof(_Float16) * 1);
  static int32_t param23_init[] = {4};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {4};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param25_init[] = {3};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param12, param13, param14, param15, param16, param17, param18}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param19, param20, param21, param22, param23, param24, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap, param25, param26, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {scoresOut, classesOut, out});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 3, 3, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param27 = model->addOperand(&type12);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type3);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type13);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type3);
  auto param39 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type14);
  auto param40 = model->addOperand(&type4);
  auto param41 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type15);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float param28_init[] = {0.3f};
  model->setOperandValue(param28, param28_init, sizeof(float) * 1);
  static int32_t param29_init[] = {-1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static float param31_init[] = {0.4f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static float param32_init[] = {1.0f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {2};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {2.0f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static int32_t param38_init[] = {4};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param40_init[] = {1.6f};
  model->setOperandValue(param40, param40_init, sizeof(float) * 1);
  static float param41_init[] = {1.6f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param27, param28, param29, param30, param31, param32, param33}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param34, param35, param36, param37, param38, param39, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap1, param40, param41, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {scoresOut1, classesOut1, out1});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nhwc_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param27 = model->addOperand(&type12);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type3);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type13);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type3);
  auto param39 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type14);
  auto param40 = model->addOperand(&type4);
  auto param41 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type16);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float param28_init[] = {0.3f};
  model->setOperandValue(param28, param28_init, sizeof(float) * 1);
  static int32_t param29_init[] = {-1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static float param31_init[] = {0.4f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static float param32_init[] = {1.0f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {2};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {2.0f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static int32_t param38_init[] = {4};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param40_init[] = {1.6f};
  model->setOperandValue(param40, param40_init, sizeof(float) * 1);
  static float param41_init[] = {1.6f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param27, param28, param29, param30, param31, param32, param33}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param34, param35, param36, param37, param38, param39, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap1, param40, param41, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {scoresOut1, classesOut1, out1});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 3, 3, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param27 = model->addOperand(&type12);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type3);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type13);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type3);
  auto param39 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type14);
  auto param40 = model->addOperand(&type4);
  auto param41 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type15);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float param28_init[] = {0.3f};
  model->setOperandValue(param28, param28_init, sizeof(float) * 1);
  static int32_t param29_init[] = {-1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static float param31_init[] = {0.4f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static float param32_init[] = {1.0f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {2};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {2.0f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static int32_t param38_init[] = {4};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param40_init[] = {1.6f};
  model->setOperandValue(param40, param40_init, sizeof(float) * 1);
  static float param41_init[] = {1.6f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param27, param28, param29, param30, param31, param32, param33}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param34, param35, param36, param37, param38, param39, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap1, param40, param41, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {scoresOut1, classesOut1, out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nhwc_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type14(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param27 = model->addOperand(&type12);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type3);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type13);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type3);
  auto param39 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type14);
  auto param40 = model->addOperand(&type4);
  auto param41 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type16);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float param28_init[] = {0.3f};
  model->setOperandValue(param28, param28_init, sizeof(float) * 1);
  static int32_t param29_init[] = {-1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static float param31_init[] = {0.4f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static float param32_init[] = {1.0f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {2};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {2.0f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static int32_t param38_init[] = {4};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param40_init[] = {1.6f};
  model->setOperandValue(param40, param40_init, sizeof(float) * 1);
  static float param41_init[] = {1.6f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param27, param28, param29, param30, param31, param32, param33}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param34, param35, param36, param37, param38, param39, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap1, param40, param41, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {scoresOut1, classesOut1, out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {0, 3, 3, 1}, 0.1f, 128);
  OperandType type48(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type49(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type51(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  // Phase 1, operands
  auto scores1 = model->addOperand(&type50);
  auto roi1 = model->addOperand(&type48);
  auto param27 = model->addOperand(&type12);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type3);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type51);
  auto roiOut1 = model->addOperand(&type49);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type46);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type3);
  auto param39 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type45);
  auto param40 = model->addOperand(&type4);
  auto param41 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type47);
  // Phase 2, operations
  static uint8_t scores1_init[] = {137, 129};
  model->setOperandValue(scores1, scores1_init, sizeof(uint8_t) * 2);
  static uint16_t roi1_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi1, roi1_init, sizeof(uint16_t) * 8);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float param28_init[] = {0.3f};
  model->setOperandValue(param28, param28_init, sizeof(float) * 1);
  static int32_t param29_init[] = {-1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static float param31_init[] = {0.4f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static float param32_init[] = {1.0f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {2};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {2.0f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static int32_t param38_init[] = {4};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param40_init[] = {1.6f};
  model->setOperandValue(param40, param40_init, sizeof(float) * 1);
  static float param41_init[] = {1.6f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param27, param28, param29, param30, param31, param32, param33}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param34, param35, param36, param37, param38, param39, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap1, param40, param41, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {scoresOut1, classesOut1, out1});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nhwc_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type48(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type49(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type51(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  // Phase 1, operands
  auto scores1 = model->addOperand(&type50);
  auto roi1 = model->addOperand(&type48);
  auto param27 = model->addOperand(&type12);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type3);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type51);
  auto roiOut1 = model->addOperand(&type49);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type46);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type3);
  auto param39 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type45);
  auto param40 = model->addOperand(&type4);
  auto param41 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type52);
  // Phase 2, operations
  static uint8_t scores1_init[] = {137, 129};
  model->setOperandValue(scores1, scores1_init, sizeof(uint8_t) * 2);
  static uint16_t roi1_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi1, roi1_init, sizeof(uint16_t) * 8);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float param28_init[] = {0.3f};
  model->setOperandValue(param28, param28_init, sizeof(float) * 1);
  static int32_t param29_init[] = {-1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static float param31_init[] = {0.4f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static float param32_init[] = {1.0f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {2};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {2.0f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static int32_t param38_init[] = {4};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param40_init[] = {1.6f};
  model->setOperandValue(param40, param40_init, sizeof(float) * 1);
  static float param41_init[] = {1.6f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param27, param28, param29, param30, param31, param32, param33}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param34, param35, param36, param37, param38, param39, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap1, param40, param41, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {scoresOut1, classesOut1, out1});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type53(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type54(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type55(Type::TENSOR_FLOAT16, {0, 3, 3, 1});
  OperandType type56(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type57(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type59(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type58);
  auto roi1 = model->addOperand(&type56);
  auto param27 = model->addOperand(&type12);
  auto param28 = model->addOperand(&type34);
  auto param29 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type3);
  auto param31 = model->addOperand(&type34);
  auto param32 = model->addOperand(&type34);
  auto param33 = model->addOperand(&type34);
  auto scoresOut1 = model->addOperand(&type59);
  auto roiOut1 = model->addOperand(&type57);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type54);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type34);
  auto param37 = model->addOperand(&type34);
  auto param38 = model->addOperand(&type3);
  auto param39 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type53);
  auto param40 = model->addOperand(&type34);
  auto param41 = model->addOperand(&type34);
  auto out1 = model->addOperand(&type55);
  // Phase 2, operations
  static _Float16 scores1_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores1, scores1_init, sizeof(_Float16) * 2);
  static _Float16 roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(_Float16) * 8);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static _Float16 param28_init[] = {0.30000001192092896f};
  model->setOperandValue(param28, param28_init, sizeof(_Float16) * 1);
  static int32_t param29_init[] = {-1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static _Float16 param31_init[] = {0.4000000059604645f};
  model->setOperandValue(param31, param31_init, sizeof(_Float16) * 1);
  static _Float16 param32_init[] = {1.0f};
  model->setOperandValue(param32, param32_init, sizeof(_Float16) * 1);
  static _Float16 param33_init[] = {0.30000001192092896f};
  model->setOperandValue(param33, param33_init, sizeof(_Float16) * 1);
  static int32_t param34_init[] = {2};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static _Float16 param36_init[] = {2.0f};
  model->setOperandValue(param36, param36_init, sizeof(_Float16) * 1);
  static _Float16 param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(_Float16) * 1);
  static int32_t param38_init[] = {4};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 param40_init[] = {1.600000023841858f};
  model->setOperandValue(param40, param40_init, sizeof(_Float16) * 1);
  static _Float16 param41_init[] = {1.600000023841858f};
  model->setOperandValue(param41, param41_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param27, param28, param29, param30, param31, param32, param33}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param34, param35, param36, param37, param38, param39, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap1, param40, param41, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {scoresOut1, classesOut1, out1});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nhwc_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type53(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type54(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type56(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type57(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type60(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type58);
  auto roi1 = model->addOperand(&type56);
  auto param27 = model->addOperand(&type12);
  auto param28 = model->addOperand(&type34);
  auto param29 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type3);
  auto param31 = model->addOperand(&type34);
  auto param32 = model->addOperand(&type34);
  auto param33 = model->addOperand(&type34);
  auto scoresOut1 = model->addOperand(&type60);
  auto roiOut1 = model->addOperand(&type57);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type54);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type34);
  auto param37 = model->addOperand(&type34);
  auto param38 = model->addOperand(&type3);
  auto param39 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type53);
  auto param40 = model->addOperand(&type34);
  auto param41 = model->addOperand(&type34);
  auto out1 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 scores1_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores1, scores1_init, sizeof(_Float16) * 2);
  static _Float16 roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(_Float16) * 8);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static _Float16 param28_init[] = {0.30000001192092896f};
  model->setOperandValue(param28, param28_init, sizeof(_Float16) * 1);
  static int32_t param29_init[] = {-1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static _Float16 param31_init[] = {0.4000000059604645f};
  model->setOperandValue(param31, param31_init, sizeof(_Float16) * 1);
  static _Float16 param32_init[] = {1.0f};
  model->setOperandValue(param32, param32_init, sizeof(_Float16) * 1);
  static _Float16 param33_init[] = {0.30000001192092896f};
  model->setOperandValue(param33, param33_init, sizeof(_Float16) * 1);
  static int32_t param34_init[] = {2};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static _Float16 param36_init[] = {2.0f};
  model->setOperandValue(param36, param36_init, sizeof(_Float16) * 1);
  static _Float16 param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(_Float16) * 1);
  static int32_t param38_init[] = {4};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 param40_init[] = {1.600000023841858f};
  model->setOperandValue(param40, param40_init, sizeof(_Float16) * 1);
  static _Float16 param41_init[] = {1.600000023841858f};
  model->setOperandValue(param41, param41_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param27, param28, param29, param30, param31, param32, param33}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param34, param35, param36, param37, param38, param39, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap1, param40, param41, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {scoresOut1, classesOut1, out1});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nhwc_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type61(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type62(Type::TENSOR_FLOAT32, {0, 1, 3, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param27 = model->addOperand(&type12);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type3);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type13);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type3);
  auto param39 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type61);
  auto param40 = model->addOperand(&type4);
  auto param41 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type62);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float param28_init[] = {0.3f};
  model->setOperandValue(param28, param28_init, sizeof(float) * 1);
  static int32_t param29_init[] = {-1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static float param31_init[] = {0.4f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static float param32_init[] = {1.0f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {2};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {2.0f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static int32_t param38_init[] = {4};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param40_init[] = {1.6f};
  model->setOperandValue(param40, param40_init, sizeof(float) * 1);
  static float param41_init[] = {1.6f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param27, param28, param29, param30, param31, param32, param33}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param34, param35, param36, param37, param38, param39, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap1, param40, param41, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {scoresOut1, classesOut1, out1});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nchw_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type61(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param27 = model->addOperand(&type12);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type3);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type13);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type3);
  auto param39 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type61);
  auto param40 = model->addOperand(&type4);
  auto param41 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type16);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float param28_init[] = {0.3f};
  model->setOperandValue(param28, param28_init, sizeof(float) * 1);
  static int32_t param29_init[] = {-1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static float param31_init[] = {0.4f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static float param32_init[] = {1.0f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {2};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {2.0f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static int32_t param38_init[] = {4};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param40_init[] = {1.6f};
  model->setOperandValue(param40, param40_init, sizeof(float) * 1);
  static float param41_init[] = {1.6f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param27, param28, param29, param30, param31, param32, param33}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param34, param35, param36, param37, param38, param39, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap1, param40, param41, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {scoresOut1, classesOut1, out1});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type61(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type62(Type::TENSOR_FLOAT32, {0, 1, 3, 3});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param27 = model->addOperand(&type12);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type3);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type13);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type3);
  auto param39 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type61);
  auto param40 = model->addOperand(&type4);
  auto param41 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type62);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float param28_init[] = {0.3f};
  model->setOperandValue(param28, param28_init, sizeof(float) * 1);
  static int32_t param29_init[] = {-1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static float param31_init[] = {0.4f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static float param32_init[] = {1.0f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {2};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {2.0f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static int32_t param38_init[] = {4};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param40_init[] = {1.6f};
  model->setOperandValue(param40, param40_init, sizeof(float) * 1);
  static float param41_init[] = {1.6f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param27, param28, param29, param30, param31, param32, param33}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param34, param35, param36, param37, param38, param39, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap1, param40, param41, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {scoresOut1, classesOut1, out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nchw_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type61(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param27 = model->addOperand(&type12);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type3);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type13);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type3);
  auto param39 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type61);
  auto param40 = model->addOperand(&type4);
  auto param41 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type16);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float param28_init[] = {0.3f};
  model->setOperandValue(param28, param28_init, sizeof(float) * 1);
  static int32_t param29_init[] = {-1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static float param31_init[] = {0.4f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static float param32_init[] = {1.0f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {2};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {2.0f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static int32_t param38_init[] = {4};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param40_init[] = {1.6f};
  model->setOperandValue(param40, param40_init, sizeof(float) * 1);
  static float param41_init[] = {1.6f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param27, param28, param29, param30, param31, param32, param33}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param34, param35, param36, param37, param38, param39, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap1, param40, param41, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {scoresOut1, classesOut1, out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type48(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type49(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type51(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type63(Type::TENSOR_QUANT8_ASYMM, {0, 1, 2, 2}, 0.1f, 128);
  OperandType type64(Type::TENSOR_QUANT8_ASYMM, {0, 1, 3, 3}, 0.1f, 128);
  // Phase 1, operands
  auto scores1 = model->addOperand(&type50);
  auto roi1 = model->addOperand(&type48);
  auto param27 = model->addOperand(&type12);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type3);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type51);
  auto roiOut1 = model->addOperand(&type49);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type46);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type3);
  auto param39 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type63);
  auto param40 = model->addOperand(&type4);
  auto param41 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type64);
  // Phase 2, operations
  static uint8_t scores1_init[] = {137, 129};
  model->setOperandValue(scores1, scores1_init, sizeof(uint8_t) * 2);
  static uint16_t roi1_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi1, roi1_init, sizeof(uint16_t) * 8);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float param28_init[] = {0.3f};
  model->setOperandValue(param28, param28_init, sizeof(float) * 1);
  static int32_t param29_init[] = {-1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static float param31_init[] = {0.4f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static float param32_init[] = {1.0f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {2};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {2.0f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static int32_t param38_init[] = {4};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param40_init[] = {1.6f};
  model->setOperandValue(param40, param40_init, sizeof(float) * 1);
  static float param41_init[] = {1.6f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param27, param28, param29, param30, param31, param32, param33}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param34, param35, param36, param37, param38, param39, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap1, param40, param41, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {scoresOut1, classesOut1, out1});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nchw_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::FLOAT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type48(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type49(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type51(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  OperandType type63(Type::TENSOR_QUANT8_ASYMM, {0, 1, 2, 2}, 0.1f, 128);
  // Phase 1, operands
  auto scores1 = model->addOperand(&type50);
  auto roi1 = model->addOperand(&type48);
  auto param27 = model->addOperand(&type12);
  auto param28 = model->addOperand(&type4);
  auto param29 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type3);
  auto param31 = model->addOperand(&type4);
  auto param32 = model->addOperand(&type4);
  auto param33 = model->addOperand(&type4);
  auto scoresOut1 = model->addOperand(&type51);
  auto roiOut1 = model->addOperand(&type49);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type46);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type4);
  auto param37 = model->addOperand(&type4);
  auto param38 = model->addOperand(&type3);
  auto param39 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type63);
  auto param40 = model->addOperand(&type4);
  auto param41 = model->addOperand(&type4);
  auto out1 = model->addOperand(&type52);
  // Phase 2, operations
  static uint8_t scores1_init[] = {137, 129};
  model->setOperandValue(scores1, scores1_init, sizeof(uint8_t) * 2);
  static uint16_t roi1_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi1, roi1_init, sizeof(uint16_t) * 8);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float param28_init[] = {0.3f};
  model->setOperandValue(param28, param28_init, sizeof(float) * 1);
  static int32_t param29_init[] = {-1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static float param31_init[] = {0.4f};
  model->setOperandValue(param31, param31_init, sizeof(float) * 1);
  static float param32_init[] = {1.0f};
  model->setOperandValue(param32, param32_init, sizeof(float) * 1);
  static float param33_init[] = {0.3f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static int32_t param34_init[] = {2};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static float param36_init[] = {2.0f};
  model->setOperandValue(param36, param36_init, sizeof(float) * 1);
  static float param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static int32_t param38_init[] = {4};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float param40_init[] = {1.6f};
  model->setOperandValue(param40, param40_init, sizeof(float) * 1);
  static float param41_init[] = {1.6f};
  model->setOperandValue(param41, param41_init, sizeof(float) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param27, param28, param29, param30, param31, param32, param33}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param34, param35, param36, param37, param38, param39, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap1, param40, param41, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {scoresOut1, classesOut1, out1});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type54(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type56(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type57(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type59(Type::TENSOR_FLOAT16, {0});
  OperandType type65(Type::TENSOR_FLOAT16, {0, 1, 2, 2});
  OperandType type66(Type::TENSOR_FLOAT16, {0, 1, 3, 3});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type58);
  auto roi1 = model->addOperand(&type56);
  auto param27 = model->addOperand(&type12);
  auto param28 = model->addOperand(&type34);
  auto param29 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type3);
  auto param31 = model->addOperand(&type34);
  auto param32 = model->addOperand(&type34);
  auto param33 = model->addOperand(&type34);
  auto scoresOut1 = model->addOperand(&type59);
  auto roiOut1 = model->addOperand(&type57);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type54);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type34);
  auto param37 = model->addOperand(&type34);
  auto param38 = model->addOperand(&type3);
  auto param39 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type65);
  auto param40 = model->addOperand(&type34);
  auto param41 = model->addOperand(&type34);
  auto out1 = model->addOperand(&type66);
  // Phase 2, operations
  static _Float16 scores1_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores1, scores1_init, sizeof(_Float16) * 2);
  static _Float16 roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(_Float16) * 8);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static _Float16 param28_init[] = {0.30000001192092896f};
  model->setOperandValue(param28, param28_init, sizeof(_Float16) * 1);
  static int32_t param29_init[] = {-1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static _Float16 param31_init[] = {0.4000000059604645f};
  model->setOperandValue(param31, param31_init, sizeof(_Float16) * 1);
  static _Float16 param32_init[] = {1.0f};
  model->setOperandValue(param32, param32_init, sizeof(_Float16) * 1);
  static _Float16 param33_init[] = {0.30000001192092896f};
  model->setOperandValue(param33, param33_init, sizeof(_Float16) * 1);
  static int32_t param34_init[] = {2};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static _Float16 param36_init[] = {2.0f};
  model->setOperandValue(param36, param36_init, sizeof(_Float16) * 1);
  static _Float16 param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(_Float16) * 1);
  static int32_t param38_init[] = {4};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 param40_init[] = {1.600000023841858f};
  model->setOperandValue(param40, param40_init, sizeof(_Float16) * 1);
  static _Float16 param41_init[] = {1.600000023841858f};
  model->setOperandValue(param41, param41_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param27, param28, param29, param30, param31, param32, param33}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param34, param35, param36, param37, param38, param39, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap1, param40, param41, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {scoresOut1, classesOut1, out1});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
namespace generated_tests::resize_bilinear_v1_2 {

void CreateModel_zero_sized_nchw_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::FLOAT16, {});
  OperandType type54(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type56(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type57(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type60(Type::TENSOR_FLOAT16, {0});
  OperandType type65(Type::TENSOR_FLOAT16, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type58);
  auto roi1 = model->addOperand(&type56);
  auto param27 = model->addOperand(&type12);
  auto param28 = model->addOperand(&type34);
  auto param29 = model->addOperand(&type3);
  auto param30 = model->addOperand(&type3);
  auto param31 = model->addOperand(&type34);
  auto param32 = model->addOperand(&type34);
  auto param33 = model->addOperand(&type34);
  auto scoresOut1 = model->addOperand(&type60);
  auto roiOut1 = model->addOperand(&type57);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type54);
  auto param34 = model->addOperand(&type3);
  auto param35 = model->addOperand(&type3);
  auto param36 = model->addOperand(&type34);
  auto param37 = model->addOperand(&type34);
  auto param38 = model->addOperand(&type3);
  auto param39 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type65);
  auto param40 = model->addOperand(&type34);
  auto param41 = model->addOperand(&type34);
  auto out1 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 scores1_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores1, scores1_init, sizeof(_Float16) * 2);
  static _Float16 roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(_Float16) * 8);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static _Float16 param28_init[] = {0.30000001192092896f};
  model->setOperandValue(param28, param28_init, sizeof(_Float16) * 1);
  static int32_t param29_init[] = {-1};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static _Float16 param31_init[] = {0.4000000059604645f};
  model->setOperandValue(param31, param31_init, sizeof(_Float16) * 1);
  static _Float16 param32_init[] = {1.0f};
  model->setOperandValue(param32, param32_init, sizeof(_Float16) * 1);
  static _Float16 param33_init[] = {0.30000001192092896f};
  model->setOperandValue(param33, param33_init, sizeof(_Float16) * 1);
  static int32_t param34_init[] = {2};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  static int32_t param35_init[] = {2};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static _Float16 param36_init[] = {2.0f};
  model->setOperandValue(param36, param36_init, sizeof(_Float16) * 1);
  static _Float16 param37_init[] = {2.0f};
  model->setOperandValue(param37, param37_init, sizeof(_Float16) * 1);
  static int32_t param38_init[] = {4};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {4};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 param40_init[] = {1.600000023841858f};
  model->setOperandValue(param40, param40_init, sizeof(_Float16) * 1);
  static _Float16 param41_init[] = {1.600000023841858f};
  model->setOperandValue(param41, param41_init, sizeof(_Float16) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param27, param28, param29, param30, param31, param32, param33}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param34, param35, param36, param37, param38, param39, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_RESIZE_BILINEAR, {featureMap1, param40, param41, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {scoresOut1, classesOut1, out1});
  assert(model->isValid());
}

bool is_ignored_zero_sized_nchw_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::resize_bilinear_v1_2
