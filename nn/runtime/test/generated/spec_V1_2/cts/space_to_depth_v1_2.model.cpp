// Generated from space_to_depth_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 8});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 8});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy = model->addOperand(&type9);
  auto param3 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param3}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type8);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type9);
  auto param4 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param4}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 8});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 1, 1, 8});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy2 = model->addOperand(&type9);
  auto param5 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy2, param5}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type8);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy3 = model->addOperand(&type9);
  auto param6 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy3, param6}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type11(Type::TENSOR_FLOAT16, {1, 1, 1, 8});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type12(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT16, {1, 1, 1, 8});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type14(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type13);
  auto dummy4 = model->addOperand(&type14);
  auto param7 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(_Float16) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy4, param7}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type14(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type12);
  auto op1_tmp = model->addOperand(&type13);
  auto dummy5 = model->addOperand(&type14);
  auto param8 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(_Float16) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy5, param8}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 8}, 0.1f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 8}, 0.1f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type15);
  auto dummy6 = model->addOperand(&type18);
  auto param9 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy6_init[] = {0};
  model->setOperandValue(dummy6, dummy6_init, sizeof(uint8_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy6, param9}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type17);
  auto op1_tmp = model->addOperand(&type15);
  auto dummy7 = model->addOperand(&type18);
  auto param10 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy7_init[] = {0};
  model->setOperandValue(dummy7, dummy7_init, sizeof(uint8_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy7, param10}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type19(Type::TENSOR_FLOAT32, {1, 8, 1, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type19(Type::TENSOR_FLOAT32, {1, 8, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type19);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy8 = model->addOperand(&type9);
  auto param11 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy8, param11}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type8);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy9 = model->addOperand(&type9);
  auto param12 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy9, param12}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type19(Type::TENSOR_FLOAT32, {1, 8, 1, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type19(Type::TENSOR_FLOAT32, {1, 8, 1, 1});
  OperandType type3(Type::INT32, {});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type19);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy10 = model->addOperand(&type9);
  auto param13 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(float) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy10, param13}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type8);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy11 = model->addOperand(&type9);
  auto param14 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(float) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy11, param14}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 8, 1, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type12(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type10);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type14(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {1, 8, 1, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  auto op1_tmp = model->addOperand(&type13);
  auto dummy12 = model->addOperand(&type14);
  auto param15 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(_Float16) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy12, param15}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type13(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type14(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type13);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type12);
  auto op1_tmp = model->addOperand(&type13);
  auto dummy13 = model->addOperand(&type14);
  auto param16 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(_Float16) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy13, param16}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 8, 1, 1}, 0.1f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 8, 1, 1}, 0.1f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type21);
  auto op1_tmp = model->addOperand(&type15);
  auto dummy14 = model->addOperand(&type18);
  auto param17 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy14_init[] = {0};
  model->setOperandValue(dummy14, dummy14_init, sizeof(uint8_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy14, param17}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 0);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type15);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type17);
  auto op1_tmp = model->addOperand(&type15);
  auto dummy15 = model->addOperand(&type18);
  auto param18 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy15_init[] = {0};
  model->setOperandValue(dummy15, dummy15_init, sizeof(uint8_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy15, param18}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op1, param, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type5);
  auto op11_tmp = model->addOperand(&type4);
  auto dummy16 = model->addOperand(&type9);
  auto param19 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy16, param19}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type8);
  auto op11_tmp = model->addOperand(&type4);
  auto dummy17 = model->addOperand(&type9);
  auto param20 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(float) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy17, param20}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 4});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type5);
  auto op11_tmp = model->addOperand(&type4);
  auto dummy18 = model->addOperand(&type9);
  auto param21 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy18, param21}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type8);
  auto op11_tmp = model->addOperand(&type4);
  auto dummy19 = model->addOperand(&type9);
  auto param22 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy19, param22}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type23(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type22);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type22);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1});
  OperandType type23(Type::TENSOR_FLOAT16, {1, 2, 2, 4});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type24);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type23);
  auto op11_tmp = model->addOperand(&type24);
  auto dummy20 = model->addOperand(&type14);
  auto param23 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(_Float16) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy20, param23}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type14(Type::TENSOR_FLOAT16, {1});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type24);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type12);
  auto op11_tmp = model->addOperand(&type24);
  auto dummy21 = model->addOperand(&type14);
  auto param24 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(_Float16) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy21, param24}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.5f, 128);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.5f, 128);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type25);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.5f, 128);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 128);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type25);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.5f, 128);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 4}, 0.5f, 128);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type25);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type26);
  auto op11_tmp = model->addOperand(&type25);
  auto dummy22 = model->addOperand(&type28);
  auto param25 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy22_init[] = {128};
  model->setOperandValue(dummy22, dummy22_init, sizeof(uint8_t) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy22, param25}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.5f, 128);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 128);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type3(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type25);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type27);
  auto op11_tmp = model->addOperand(&type25);
  auto dummy23 = model->addOperand(&type28);
  auto param26 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy23_init[] = {128};
  model->setOperandValue(dummy23, dummy23_init, sizeof(uint8_t) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy23, param26}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type30);
  auto op11_tmp = model->addOperand(&type29);
  auto dummy24 = model->addOperand(&type9);
  auto param27 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(float) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy24, param27}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type8);
  auto op11_tmp = model->addOperand(&type29);
  auto dummy25 = model->addOperand(&type9);
  auto param28 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(float) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy25, param28}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type3(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 4, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type30);
  auto op11_tmp = model->addOperand(&type29);
  auto dummy26 = model->addOperand(&type9);
  auto param29 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(float) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy26, param29}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type3(Type::INT32, {});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type8);
  auto op11_tmp = model->addOperand(&type29);
  auto dummy27 = model->addOperand(&type9);
  auto param30 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(float) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy27, param30}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 4, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type31);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type31);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 4, 2, 2});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type32);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy28 = model->addOperand(&type14);
  auto param31 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy28_init[] = {0.0f};
  model->setOperandValue(dummy28, dummy28_init, sizeof(_Float16) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy28, param31}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type14(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type12);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy29 = model->addOperand(&type14);
  auto param32 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy29_init[] = {0.0f};
  model->setOperandValue(dummy29, dummy29_init, sizeof(_Float16) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy29, param32}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.5f, 128);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 2}, 0.5f, 128);
  // Phase 1, operands
  auto op11 = model->addOperand(&type34);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 128);
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.5f, 128);
  // Phase 1, operands
  auto op11 = model->addOperand(&type34);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.5f, 128);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 2}, 0.5f, 128);
  // Phase 1, operands
  auto op11 = model->addOperand(&type34);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type35);
  auto op11_tmp = model->addOperand(&type34);
  auto dummy30 = model->addOperand(&type28);
  auto param33 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy30_init[] = {128};
  model->setOperandValue(dummy30, dummy30_init, sizeof(uint8_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy30, param33}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 128);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type3(Type::INT32, {});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.5f, 128);
  // Phase 1, operands
  auto op11 = model->addOperand(&type34);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type27);
  auto op11_tmp = model->addOperand(&type34);
  auto dummy31 = model->addOperand(&type28);
  auto param34 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param1_init[] = {2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy31_init[] = {128};
  model->setOperandValue(dummy31, dummy31_init, sizeof(uint8_t) * 1);
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy31, param34}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op11, param1, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 8});
  // Phase 1, operands
  auto op12 = model->addOperand(&type6);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op12 = model->addOperand(&type6);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type6);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type7);
  auto op12_tmp = model->addOperand(&type6);
  auto dummy32 = model->addOperand(&type9);
  auto param35 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy32_init[] = {0.0f};
  model->setOperandValue(dummy32, dummy32_init, sizeof(float) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy32, param35}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type6);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type8);
  auto op12_tmp = model->addOperand(&type6);
  auto dummy33 = model->addOperand(&type9);
  auto param36 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy33_init[] = {0.0f};
  model->setOperandValue(dummy33, dummy33_init, sizeof(float) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy33, param36}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 8});
  // Phase 1, operands
  auto op12 = model->addOperand(&type6);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op12 = model->addOperand(&type6);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2, 2, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type6);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type7);
  auto op12_tmp = model->addOperand(&type6);
  auto dummy34 = model->addOperand(&type9);
  auto param37 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy34_init[] = {0.0f};
  model->setOperandValue(dummy34, dummy34_init, sizeof(float) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy34, param37}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 4, 4, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type6);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type8);
  auto op12_tmp = model->addOperand(&type6);
  auto dummy35 = model->addOperand(&type9);
  auto param38 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy35_init[] = {0.0f};
  model->setOperandValue(dummy35, dummy35_init, sizeof(float) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy35, param38}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 4, 4, 2});
  OperandType type37(Type::TENSOR_FLOAT16, {1, 2, 2, 8});
  // Phase 1, operands
  auto op12 = model->addOperand(&type36);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_float16_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 4, 4, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type36);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type37(Type::TENSOR_FLOAT16, {1, 2, 2, 8});
  OperandType type38(Type::TENSOR_FLOAT16, {1, 4, 4, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type38);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type37);
  auto op12_tmp = model->addOperand(&type38);
  auto dummy36 = model->addOperand(&type14);
  auto param39 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy36_init[] = {0.0f};
  model->setOperandValue(dummy36, dummy36_init, sizeof(_Float16) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy36, param39}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type14(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type38(Type::TENSOR_FLOAT16, {1, 4, 4, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type38);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type12);
  auto op12_tmp = model->addOperand(&type38);
  auto dummy37 = model->addOperand(&type14);
  auto param40 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy37_init[] = {0.0f};
  model->setOperandValue(dummy37, dummy37_init, sizeof(_Float16) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy37, param40}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 1.0f, 0);
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 8}, 1.0f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type39);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_quant8_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 1.0f, 0);
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type39);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type41);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 1.0f, 0);
  OperandType type40(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 8}, 1.0f, 0);
  OperandType type42(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type39);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type40);
  auto op12_tmp = model->addOperand(&type39);
  auto dummy38 = model->addOperand(&type42);
  auto param41 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy38_init[] = {0};
  model->setOperandValue(dummy38, dummy38_init, sizeof(uint8_t) * 1);
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy38, param41}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 2}, 1.0f, 0);
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 0);
  OperandType type42(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type39);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type41);
  auto op12_tmp = model->addOperand(&type39);
  auto dummy39 = model->addOperand(&type42);
  auto param42 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy39_init[] = {0};
  model->setOperandValue(dummy39, dummy39_init, sizeof(uint8_t) * 1);
  static int32_t param42_init[] = {0};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy39, param42}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type43(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type44(Type::TENSOR_FLOAT32, {1, 8, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type43);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type44);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type43(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op12 = model->addOperand(&type43);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type43(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type44(Type::TENSOR_FLOAT32, {1, 8, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type43);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type44);
  auto op12_tmp = model->addOperand(&type43);
  auto dummy40 = model->addOperand(&type9);
  auto param43 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy40_init[] = {0.0f};
  model->setOperandValue(dummy40, dummy40_init, sizeof(float) * 1);
  static int32_t param43_init[] = {0};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy40, param43}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type43(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type43);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type8);
  auto op12_tmp = model->addOperand(&type43);
  auto dummy41 = model->addOperand(&type9);
  auto param44 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy41_init[] = {0.0f};
  model->setOperandValue(dummy41, dummy41_init, sizeof(float) * 1);
  static int32_t param44_init[] = {0};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy41, param44}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type43(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type44(Type::TENSOR_FLOAT32, {1, 8, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type43);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type44);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type43(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op12 = model->addOperand(&type43);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type43(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type44(Type::TENSOR_FLOAT32, {1, 8, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type43);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type44);
  auto op12_tmp = model->addOperand(&type43);
  auto dummy42 = model->addOperand(&type9);
  auto param45 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy42_init[] = {0.0f};
  model->setOperandValue(dummy42, dummy42_init, sizeof(float) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy42, param45}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type43(Type::TENSOR_FLOAT32, {1, 2, 4, 4});
  OperandType type8(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT32, {1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type43);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type8);
  auto op12_tmp = model->addOperand(&type43);
  auto dummy43 = model->addOperand(&type9);
  auto param46 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy43_init[] = {0.0f};
  model->setOperandValue(dummy43, dummy43_init, sizeof(float) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy43, param46}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 2, 4, 4});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 8, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type45);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type46);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_float16_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::INT32, {});
  OperandType type45(Type::TENSOR_FLOAT16, {1, 2, 4, 4});
  // Phase 1, operands
  auto op12 = model->addOperand(&type45);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 8, 2, 2});
  OperandType type47(Type::TENSOR_FLOAT16, {1, 2, 4, 4});
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type46);
  auto op12_tmp = model->addOperand(&type47);
  auto dummy44 = model->addOperand(&type14);
  auto param47 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy44_init[] = {0.0f};
  model->setOperandValue(dummy44, dummy44_init, sizeof(_Float16) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy44, param47}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type14(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::INT32, {});
  OperandType type47(Type::TENSOR_FLOAT16, {1, 2, 4, 4});
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type12);
  auto op12_tmp = model->addOperand(&type47);
  auto dummy45 = model->addOperand(&type14);
  auto param48 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy45_init[] = {0.0f};
  model->setOperandValue(dummy45, dummy45_init, sizeof(_Float16) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy45, param48}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {1, 2, 4, 4}, 1.0f, 0);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 8, 2, 2}, 1.0f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type48);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type49);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_quant8_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 0);
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {1, 2, 4, 4}, 1.0f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type48);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type41);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type42(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {1, 2, 4, 4}, 1.0f, 0);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 8, 2, 2}, 1.0f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type48);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type49);
  auto op12_tmp = model->addOperand(&type48);
  auto dummy46 = model->addOperand(&type42);
  auto param49 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy46_init[] = {0};
  model->setOperandValue(dummy46, dummy46_init, sizeof(uint8_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy46, param49}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
namespace generated_tests::space_to_depth_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::INT32, {});
  OperandType type41(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 1.0f, 0);
  OperandType type42(Type::TENSOR_QUANT8_ASYMM, {1}, 1.0f, 0);
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {1, 2, 4, 4}, 1.0f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type48);
  auto param2 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type41);
  auto op12_tmp = model->addOperand(&type48);
  auto dummy47 = model->addOperand(&type42);
  auto param50 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy47_init[] = {0};
  model->setOperandValue(dummy47, dummy47_init, sizeof(uint8_t) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy47, param50}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_DEPTH, {op12, param2, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_depth_v1_2
