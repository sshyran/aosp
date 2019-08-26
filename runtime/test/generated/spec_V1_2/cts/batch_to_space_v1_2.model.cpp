// Generated from batch_to_space_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 1, 1, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type3(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 1, 1, 2});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 1, 1, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy = model->addOperand(&type7);
  auto param2 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param2}, {op1});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 1, 1, 2});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type7);
  auto param3 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param3}, {op1});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 1, 1, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type3(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 1, 1, 2});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 1, 1, 2});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy2 = model->addOperand(&type7);
  auto param4 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy2, param4}, {op1});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {4, 1, 1, 2});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy3 = model->addOperand(&type7);
  auto param5 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy3, param5}, {op1});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type9(Type::TENSOR_FLOAT16, {4, 1, 1, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type9(Type::TENSOR_FLOAT16, {4, 1, 1, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type9);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type12(Type::TENSOR_FLOAT16, {4, 1, 1, 2});
  OperandType type13(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type10);
  auto op1_tmp = model->addOperand(&type12);
  auto dummy4 = model->addOperand(&type13);
  auto param6 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(_Float16) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy4, param6}, {op1});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT16, {4, 1, 1, 2});
  OperandType type13(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type12);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type12);
  auto dummy5 = model->addOperand(&type13);
  auto param7 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(_Float16) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy5, param7}, {op1});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {4, 1, 1, 2}, 0.1f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type3(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {4, 1, 1, 2}, 0.1f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type3(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {4, 1, 1, 2}, 0.1f, 0);
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 0);
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
  auto op1_tmp = model->addOperand(&type14);
  auto dummy6 = model->addOperand(&type17);
  auto param8 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy6_init[] = {0};
  model->setOperandValue(dummy6, dummy6_init, sizeof(uint8_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy6, param8}, {op1});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_QUANT8_ASYMM, {4, 1, 1, 2}, 0.1f, 0);
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 0);
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type14);
  auto dummy7 = model->addOperand(&type17);
  auto param9 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy7_init[] = {0};
  model->setOperandValue(dummy7, dummy7_init, sizeof(uint8_t) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy7, param9}, {op1});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {4, 2, 1, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type3(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {4, 2, 1, 1});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {4, 2, 1, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type18);
  auto dummy8 = model->addOperand(&type7);
  auto param10 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy8, param10}, {op1});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {4, 2, 1, 1});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  auto op1_tmp = model->addOperand(&type18);
  auto dummy9 = model->addOperand(&type7);
  auto param11 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy9, param11}, {op1});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {4, 2, 1, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type3(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {4, 2, 1, 1});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {4, 2, 1, 1});
  OperandType type2(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type2);
  auto op1_tmp = model->addOperand(&type18);
  auto dummy10 = model->addOperand(&type7);
  auto param12 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(float) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy10, param12}, {op1});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {4, 2, 1, 1});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type18);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type6);
  auto op1_tmp = model->addOperand(&type18);
  auto dummy11 = model->addOperand(&type7);
  auto param13 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(float) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy11, param13}, {op1});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type19(Type::TENSOR_FLOAT16, {4, 2, 1, 1});
  OperandType type3(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type19(Type::TENSOR_FLOAT16, {4, 2, 1, 1});
  OperandType type3(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type13(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {4, 2, 1, 1});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type10);
  auto op1_tmp = model->addOperand(&type20);
  auto dummy12 = model->addOperand(&type13);
  auto param14 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(_Float16) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy12, param14}, {op1});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type13(Type::TENSOR_FLOAT16, {1});
  OperandType type20(Type::TENSOR_FLOAT16, {4, 2, 1, 1});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type20);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type20);
  auto dummy13 = model->addOperand(&type13);
  auto param15 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(_Float16) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy13, param15}, {op1});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {4, 2, 1, 1}, 0.1f, 0);
  OperandType type3(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {4, 2, 1, 1}, 0.1f, 0);
  OperandType type3(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {4, 2, 1, 1}, 0.1f, 0);
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy14 = model->addOperand(&type17);
  auto param16 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy14_init[] = {0};
  model->setOperandValue(dummy14, dummy14_init, sizeof(uint8_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy14, param16}, {op1});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {4, 2, 1, 1}, 0.1f, 0);
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
  auto param = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type21);
  auto dummy15 = model->addOperand(&type17);
  auto param17 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy15_init[] = {0};
  model->setOperandValue(dummy15, dummy15_init, sizeof(uint8_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy15, param17}, {op1});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op1, param, layout}, {op4});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type4(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type4(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type4(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type5);
  auto op11_tmp = model->addOperand(&type4);
  auto dummy16 = model->addOperand(&type7);
  auto param18 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(float) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy16, param18}, {op11});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type4(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  auto op11_tmp = model->addOperand(&type4);
  auto dummy17 = model->addOperand(&type7);
  auto param19 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy17, param19}, {op11});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type4(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type5);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type4(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type4(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type5);
  auto op11_tmp = model->addOperand(&type4);
  auto dummy18 = model->addOperand(&type7);
  auto param20 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy18, param20}, {op11});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type4(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type4);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  auto op11_tmp = model->addOperand(&type4);
  auto dummy19 = model->addOperand(&type7);
  auto param21 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy19, param21}, {op11});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type22(Type::TENSOR_FLOAT16, {4, 2, 2, 1});
  OperandType type23(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type3(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type22);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {4, 2, 2, 1});
  OperandType type3(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type22);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1});
  OperandType type23(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type24(Type::TENSOR_FLOAT16, {4, 2, 2, 1});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type24);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type23);
  auto op11_tmp = model->addOperand(&type24);
  auto dummy20 = model->addOperand(&type13);
  auto param22 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(_Float16) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy20, param22}, {op11});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type13(Type::TENSOR_FLOAT16, {1});
  OperandType type24(Type::TENSOR_FLOAT16, {4, 2, 2, 1});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type24);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type11);
  auto op11_tmp = model->addOperand(&type24);
  auto dummy21 = model->addOperand(&type13);
  auto param23 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(_Float16) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy21, param23}, {op11});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 1}, 0.5f, 128);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.5f, 128);
  OperandType type3(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type25);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 1}, 0.5f, 128);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 128);
  OperandType type3(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type25);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 1}, 0.5f, 128);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.5f, 128);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type25);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type26);
  auto op11_tmp = model->addOperand(&type25);
  auto dummy22 = model->addOperand(&type28);
  auto param24 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy22_init[] = {128};
  model->setOperandValue(dummy22, dummy22_init, sizeof(uint8_t) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy22, param24}, {op11});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 1}, 0.5f, 128);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 128);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type25);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type27);
  auto op11_tmp = model->addOperand(&type25);
  auto dummy23 = model->addOperand(&type28);
  auto param25 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy23_init[] = {128};
  model->setOperandValue(dummy23, dummy23_init, sizeof(uint8_t) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy23, param25}, {op11});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type30);
  auto op11_tmp = model->addOperand(&type29);
  auto dummy24 = model->addOperand(&type7);
  auto param26 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy24, param26}, {op11});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  auto op11_tmp = model->addOperand(&type29);
  auto dummy25 = model->addOperand(&type7);
  auto param27 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(float) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy25, param27}, {op11});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type30);
  auto op11_tmp = model->addOperand(&type29);
  auto dummy26 = model->addOperand(&type7);
  auto param28 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(float) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy26, param28}, {op11});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type29(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type6(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type7(Type::TENSOR_FLOAT32, {1});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  auto op11_tmp = model->addOperand(&type29);
  auto dummy27 = model->addOperand(&type7);
  auto param29 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(float) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy27, param29}, {op11});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type31(Type::TENSOR_FLOAT16, {4, 1, 2, 2});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type31);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type31(Type::TENSOR_FLOAT16, {4, 1, 2, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type31);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type33(Type::TENSOR_FLOAT16, {4, 1, 2, 2});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type32);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy28 = model->addOperand(&type13);
  auto param30 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy28_init[] = {0.0f};
  model->setOperandValue(dummy28, dummy28_init, sizeof(_Float16) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy28, param30}, {op11});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type13(Type::TENSOR_FLOAT16, {1});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type33(Type::TENSOR_FLOAT16, {4, 1, 2, 2});
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type11);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy29 = model->addOperand(&type13);
  auto param31 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy29_init[] = {0.0f};
  model->setOperandValue(dummy29, dummy29_init, sizeof(_Float16) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy29, param31}, {op11});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {4, 1, 2, 2}, 0.5f, 128);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.5f, 128);
  // Phase 1, operands
  auto op11 = model->addOperand(&type34);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 128);
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {4, 1, 2, 2}, 0.5f, 128);
  // Phase 1, operands
  auto op11 = model->addOperand(&type34);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {4, 1, 2, 2}, 0.5f, 128);
  OperandType type35(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.5f, 128);
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type34);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type35);
  auto op11_tmp = model->addOperand(&type34);
  auto dummy30 = model->addOperand(&type28);
  auto param32 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy30_init[] = {128};
  model->setOperandValue(dummy30, dummy30_init, sizeof(uint8_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy30, param32}, {op11});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
namespace generated_tests::batch_to_space_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 128);
  OperandType type28(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type3(Type::TENSOR_INT32, {2});
  OperandType type34(Type::TENSOR_QUANT8_ASYMM, {4, 1, 2, 2}, 0.5f, 128);
  OperandType type8(Type::INT32, {});
  // Phase 1, operands
  auto op11 = model->addOperand(&type34);
  auto param1 = model->addOperand(&type3);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type27);
  auto op11_tmp = model->addOperand(&type34);
  auto dummy31 = model->addOperand(&type28);
  auto param33 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy31_init[] = {128};
  model->setOperandValue(dummy31, dummy31_init, sizeof(uint8_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy31, param33}, {op11});
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {op11, param1, layout}, {op41});
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

} // namespace generated_tests::batch_to_space_v1_2
