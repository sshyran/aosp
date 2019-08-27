// Generated from max_pool_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type1);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy = model->addOperand(&type18);
  auto param74 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param74_init[] = {0};
  model->setOperandValue(param74, param74_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param74}, {op1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type17);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type18);
  auto param75 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param75_init[] = {0};
  model->setOperandValue(param75, param75_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param75}, {op1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type1);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type1);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy2 = model->addOperand(&type18);
  auto param76 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param76_init[] = {0};
  model->setOperandValue(param76, param76_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy2, param76}, {op1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type17);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy3 = model->addOperand(&type18);
  auto param77 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param77_init[] = {0};
  model->setOperandValue(param77, param77_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy3, param77}, {op1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type2(Type::INT32, {});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type19);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type2(Type::INT32, {});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type19);
  auto op1_tmp = model->addOperand(&type19);
  auto dummy4 = model->addOperand(&type21);
  auto param78 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy4_init[] = {0};
  model->setOperandValue(dummy4, dummy4_init, sizeof(uint8_t) * 1);
  static int32_t param78_init[] = {0};
  model->setOperandValue(param78, param78_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy4, param78}, {op1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 1}, 0.5f, 0);
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  auto op1_tmp = model->addOperand(&type19);
  auto dummy5 = model->addOperand(&type21);
  auto param79 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy5_init[] = {0};
  model->setOperandValue(dummy5, dummy5_init, sizeof(uint8_t) * 1);
  static int32_t param79_init[] = {0};
  model->setOperandValue(param79, param79_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy5, param79}, {op1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto op1 = model->addOperand(&type22);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type22);
  auto op1_tmp = model->addOperand(&type24);
  auto dummy6 = model->addOperand(&type25);
  auto param80 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(_Float16) * 1);
  static int32_t param80_init[] = {0};
  model->setOperandValue(param80, param80_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy6, param80}, {op1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type24);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type23);
  auto op1_tmp = model->addOperand(&type24);
  auto dummy7 = model->addOperand(&type25);
  auto param81 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(_Float16) * 1);
  static int32_t param81_init[] = {0};
  model->setOperandValue(param81, param81_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy7, param81}, {op1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type26);
  auto op1_tmp = model->addOperand(&type26);
  auto dummy8 = model->addOperand(&type18);
  auto param82 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param82_init[] = {0};
  model->setOperandValue(param82, param82_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy8, param82}, {op1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type17);
  auto op1_tmp = model->addOperand(&type26);
  auto dummy9 = model->addOperand(&type18);
  auto param83 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param83_init[] = {0};
  model->setOperandValue(param83, param83_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy9, param83}, {op1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type26);
  auto op1_tmp = model->addOperand(&type26);
  auto dummy10 = model->addOperand(&type18);
  auto param84 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(float) * 1);
  static int32_t param84_init[] = {0};
  model->setOperandValue(param84, param84_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy10, param84}, {op1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type26(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type26);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type17);
  auto op1_tmp = model->addOperand(&type26);
  auto dummy11 = model->addOperand(&type18);
  auto param85 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(float) * 1);
  static int32_t param85_init[] = {0};
  model->setOperandValue(param85, param85_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy11, param85}, {op1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type27);
  auto op1_tmp = model->addOperand(&type27);
  auto dummy12 = model->addOperand(&type21);
  auto param86 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy12_init[] = {0};
  model->setOperandValue(dummy12, dummy12_init, sizeof(uint8_t) * 1);
  static int32_t param86_init[] = {0};
  model->setOperandValue(param86, param86_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy12, param86}, {op1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type27(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 2}, 0.5f, 0);
  // Phase 1, operands
  auto op1 = model->addOperand(&type27);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  auto op1_tmp = model->addOperand(&type27);
  auto dummy13 = model->addOperand(&type21);
  auto param87 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy13_init[] = {0};
  model->setOperandValue(dummy13, dummy13_init, sizeof(uint8_t) * 1);
  static int32_t param87_init[] = {0};
  model->setOperandValue(param87, param87_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy13, param87}, {op1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type28);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type29(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type29);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type28);
  auto op1_tmp = model->addOperand(&type29);
  auto dummy14 = model->addOperand(&type25);
  auto param88 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(_Float16) * 1);
  static int32_t param88_init[] = {0};
  model->setOperandValue(param88, param88_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy14, param88}, {op1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type29(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type29);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto param6 = model->addOperand(&type2);
  auto param7 = model->addOperand(&type2);
  auto param8 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type23);
  auto op1_tmp = model->addOperand(&type29);
  auto dummy15 = model->addOperand(&type25);
  auto param89 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 1);
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {0};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  static int32_t param4_init[] = {1};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  static int32_t param6_init[] = {1};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(_Float16) * 1);
  static int32_t param89_init[] = {0};
  model->setOperandValue(param89, param89_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy15, param89}, {op1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5, 50, 70, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {5, 2, 3, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5, 50, 70, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {5, 50, 70, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {5, 2, 3, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type30);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type4);
  auto op11_tmp = model->addOperand(&type30);
  auto dummy16 = model->addOperand(&type18);
  auto param90 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(float) * 1);
  static int32_t param90_init[] = {0};
  model->setOperandValue(param90, param90_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy16, param90}, {op11});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {5, 50, 70, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type30);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type17);
  auto op11_tmp = model->addOperand(&type30);
  auto dummy17 = model->addOperand(&type18);
  auto param91 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(float) * 1);
  static int32_t param91_init[] = {0};
  model->setOperandValue(param91, param91_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy17, param91}, {op11});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5, 50, 70, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {5, 2, 3, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5, 50, 70, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {5, 50, 70, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {5, 2, 3, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type30);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type4);
  auto op11_tmp = model->addOperand(&type30);
  auto dummy18 = model->addOperand(&type18);
  auto param92 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param92_init[] = {0};
  model->setOperandValue(param92, param92_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy18, param92}, {op11});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {5, 50, 70, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type30);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type17);
  auto op11_tmp = model->addOperand(&type30);
  auto dummy19 = model->addOperand(&type18);
  auto param93 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param93_init[] = {0};
  model->setOperandValue(param93, param93_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy19, param93}, {op11});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {5, 50, 70, 3}, 0.5f, 0);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {5, 2, 3, 3}, 0.5f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type31);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {5, 50, 70, 3}, 0.5f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type31);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {5, 50, 70, 3}, 0.5f, 0);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {5, 2, 3, 3}, 0.5f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type31);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type32);
  auto op11_tmp = model->addOperand(&type31);
  auto dummy20 = model->addOperand(&type21);
  auto param94 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy20_init[] = {0};
  model->setOperandValue(dummy20, dummy20_init, sizeof(uint8_t) * 1);
  static int32_t param94_init[] = {0};
  model->setOperandValue(param94, param94_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy20, param94}, {op11});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {5, 50, 70, 3}, 0.5f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type31);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type20);
  auto op11_tmp = model->addOperand(&type31);
  auto dummy21 = model->addOperand(&type21);
  auto param95 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy21_init[] = {0};
  model->setOperandValue(dummy21, dummy21_init, sizeof(uint8_t) * 1);
  static int32_t param95_init[] = {0};
  model->setOperandValue(param95, param95_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy21, param95}, {op11});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {5, 50, 70, 3});
  OperandType type34(Type::TENSOR_FLOAT16, {5, 2, 3, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type33(Type::TENSOR_FLOAT16, {5, 50, 70, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type34(Type::TENSOR_FLOAT16, {5, 2, 3, 3});
  OperandType type35(Type::TENSOR_FLOAT16, {5, 50, 70, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type35);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type34);
  auto op11_tmp = model->addOperand(&type35);
  auto dummy22 = model->addOperand(&type25);
  auto param96 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(_Float16) * 1);
  static int32_t param96_init[] = {0};
  model->setOperandValue(param96, param96_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy22, param96}, {op11});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type35(Type::TENSOR_FLOAT16, {5, 50, 70, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type35);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type23);
  auto op11_tmp = model->addOperand(&type35);
  auto dummy23 = model->addOperand(&type25);
  auto param97 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(_Float16) * 1);
  static int32_t param97_init[] = {0};
  model->setOperandValue(param97, param97_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy23, param97}, {op11});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT32, {5, 3, 50, 70});
  OperandType type37(Type::TENSOR_FLOAT32, {5, 3, 2, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type36);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT32, {5, 3, 50, 70});
  // Phase 1, operands
  auto op11 = model->addOperand(&type36);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT32, {5, 3, 50, 70});
  OperandType type37(Type::TENSOR_FLOAT32, {5, 3, 2, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type36);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type37);
  auto op11_tmp = model->addOperand(&type36);
  auto dummy24 = model->addOperand(&type18);
  auto param98 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(float) * 1);
  static int32_t param98_init[] = {0};
  model->setOperandValue(param98, param98_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy24, param98}, {op11});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT32, {5, 3, 50, 70});
  // Phase 1, operands
  auto op11 = model->addOperand(&type36);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type17);
  auto op11_tmp = model->addOperand(&type36);
  auto dummy25 = model->addOperand(&type18);
  auto param99 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(float) * 1);
  static int32_t param99_init[] = {0};
  model->setOperandValue(param99, param99_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy25, param99}, {op11});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT32, {5, 3, 50, 70});
  OperandType type37(Type::TENSOR_FLOAT32, {5, 3, 2, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type36);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT32, {5, 3, 50, 70});
  // Phase 1, operands
  auto op11 = model->addOperand(&type36);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT32, {5, 3, 50, 70});
  OperandType type37(Type::TENSOR_FLOAT32, {5, 3, 2, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type36);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type37);
  auto op11_tmp = model->addOperand(&type36);
  auto dummy26 = model->addOperand(&type18);
  auto param100 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(float) * 1);
  static int32_t param100_init[] = {0};
  model->setOperandValue(param100, param100_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy26, param100}, {op11});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT32, {5, 3, 50, 70});
  // Phase 1, operands
  auto op11 = model->addOperand(&type36);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type17);
  auto op11_tmp = model->addOperand(&type36);
  auto dummy27 = model->addOperand(&type18);
  auto param101 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(float) * 1);
  static int32_t param101_init[] = {0};
  model->setOperandValue(param101, param101_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy27, param101}, {op11});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {5, 3, 50, 70}, 0.5f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {5, 3, 2, 3}, 0.5f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type39);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {5, 3, 50, 70}, 0.5f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {5, 3, 50, 70}, 0.5f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {5, 3, 2, 3}, 0.5f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type39);
  auto op11_tmp = model->addOperand(&type38);
  auto dummy28 = model->addOperand(&type21);
  auto param102 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy28_init[] = {0};
  model->setOperandValue(dummy28, dummy28_init, sizeof(uint8_t) * 1);
  static int32_t param102_init[] = {0};
  model->setOperandValue(param102, param102_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy28, param102}, {op11});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {5, 3, 50, 70}, 0.5f, 0);
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type20);
  auto op11_tmp = model->addOperand(&type38);
  auto dummy29 = model->addOperand(&type21);
  auto param103 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy29_init[] = {0};
  model->setOperandValue(dummy29, dummy29_init, sizeof(uint8_t) * 1);
  static int32_t param103_init[] = {0};
  model->setOperandValue(param103, param103_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy29, param103}, {op11});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT16, {5, 3, 50, 70});
  OperandType type41(Type::TENSOR_FLOAT16, {5, 3, 2, 3});
  // Phase 1, operands
  auto op11 = model->addOperand(&type40);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type41);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type40(Type::TENSOR_FLOAT16, {5, 3, 50, 70});
  // Phase 1, operands
  auto op11 = model->addOperand(&type40);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type41(Type::TENSOR_FLOAT16, {5, 3, 2, 3});
  OperandType type42(Type::TENSOR_FLOAT16, {5, 3, 50, 70});
  // Phase 1, operands
  auto op11 = model->addOperand(&type42);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type41);
  auto op11_tmp = model->addOperand(&type42);
  auto dummy30 = model->addOperand(&type25);
  auto param104 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy30_init[] = {0.0f};
  model->setOperandValue(dummy30, dummy30_init, sizeof(_Float16) * 1);
  static int32_t param104_init[] = {0};
  model->setOperandValue(param104, param104_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy30, param104}, {op11});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type42(Type::TENSOR_FLOAT16, {5, 3, 50, 70});
  // Phase 1, operands
  auto op11 = model->addOperand(&type42);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type23);
  auto op11_tmp = model->addOperand(&type42);
  auto dummy31 = model->addOperand(&type25);
  auto param105 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {20};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {20};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {20};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {20};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy31_init[] = {0.0f};
  model->setOperandValue(dummy31, dummy31_init, sizeof(_Float16) * 1);
  static int32_t param105_init[] = {0};
  model->setOperandValue(param105, param105_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy31, param105}, {op11});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, param15, param16, param17, layout}, {op41});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5, 50, 70, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {5, 2, 3, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5, 50, 70, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {5, 50, 70, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {5, 2, 3, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type30);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type4);
  auto op12_tmp = model->addOperand(&type30);
  auto dummy32 = model->addOperand(&type18);
  auto param106 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy32_init[] = {0.0f};
  model->setOperandValue(dummy32, dummy32_init, sizeof(float) * 1);
  static int32_t param106_init[] = {0};
  model->setOperandValue(param106, param106_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy32, param106}, {op12});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {5, 50, 70, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type30);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type17);
  auto op12_tmp = model->addOperand(&type30);
  auto dummy33 = model->addOperand(&type18);
  auto param107 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy33_init[] = {0.0f};
  model->setOperandValue(dummy33, dummy33_init, sizeof(float) * 1);
  static int32_t param107_init[] = {0};
  model->setOperandValue(param107, param107_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy33, param107}, {op12});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5, 50, 70, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {5, 2, 3, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {5, 50, 70, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type3);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {5, 50, 70, 3});
  OperandType type4(Type::TENSOR_FLOAT32, {5, 2, 3, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type30);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type4);
  auto op12_tmp = model->addOperand(&type30);
  auto dummy34 = model->addOperand(&type18);
  auto param108 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy34_init[] = {0.0f};
  model->setOperandValue(dummy34, dummy34_init, sizeof(float) * 1);
  static int32_t param108_init[] = {0};
  model->setOperandValue(param108, param108_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy34, param108}, {op12});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type30(Type::TENSOR_FLOAT32, {5, 50, 70, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type30);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type17);
  auto op12_tmp = model->addOperand(&type30);
  auto dummy35 = model->addOperand(&type18);
  auto param109 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy35_init[] = {0.0f};
  model->setOperandValue(dummy35, dummy35_init, sizeof(float) * 1);
  static int32_t param109_init[] = {0};
  model->setOperandValue(param109, param109_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy35, param109}, {op12});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {5, 50, 70, 3}, 0.25f, 0);
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {5, 2, 3, 3}, 0.25f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type43);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type44);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_quant8_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {5, 50, 70, 3}, 0.25f, 0);
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type43);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type45);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {5, 50, 70, 3}, 0.25f, 0);
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {5, 2, 3, 3}, 0.25f, 0);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type43);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type44);
  auto op12_tmp = model->addOperand(&type43);
  auto dummy36 = model->addOperand(&type46);
  auto param110 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy36_init[] = {0};
  model->setOperandValue(dummy36, dummy36_init, sizeof(uint8_t) * 1);
  static int32_t param110_init[] = {0};
  model->setOperandValue(param110, param110_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy36, param110}, {op12});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {5, 50, 70, 3}, 0.25f, 0);
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type43);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type45);
  auto op12_tmp = model->addOperand(&type43);
  auto dummy37 = model->addOperand(&type46);
  auto param111 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy37_init[] = {0};
  model->setOperandValue(dummy37, dummy37_init, sizeof(uint8_t) * 1);
  static int32_t param111_init[] = {0};
  model->setOperandValue(param111, param111_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy37, param111}, {op12});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type33(Type::TENSOR_FLOAT16, {5, 50, 70, 3});
  OperandType type34(Type::TENSOR_FLOAT16, {5, 2, 3, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type33);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_float16_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type33(Type::TENSOR_FLOAT16, {5, 50, 70, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type33);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type34(Type::TENSOR_FLOAT16, {5, 2, 3, 3});
  OperandType type35(Type::TENSOR_FLOAT16, {5, 50, 70, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type35);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type34);
  auto op12_tmp = model->addOperand(&type35);
  auto dummy38 = model->addOperand(&type25);
  auto param112 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy38_init[] = {0.0f};
  model->setOperandValue(dummy38, dummy38_init, sizeof(_Float16) * 1);
  static int32_t param112_init[] = {0};
  model->setOperandValue(param112, param112_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy38, param112}, {op12});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type35(Type::TENSOR_FLOAT16, {5, 50, 70, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type35);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type23);
  auto op12_tmp = model->addOperand(&type35);
  auto dummy39 = model->addOperand(&type25);
  auto param113 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy39_init[] = {0.0f};
  model->setOperandValue(dummy39, dummy39_init, sizeof(_Float16) * 1);
  static int32_t param113_init[] = {0};
  model->setOperandValue(param113, param113_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy39, param113}, {op12});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT32, {5, 3, 50, 70});
  OperandType type37(Type::TENSOR_FLOAT32, {5, 3, 2, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type36);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT32, {5, 3, 50, 70});
  // Phase 1, operands
  auto op12 = model->addOperand(&type36);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT32, {5, 3, 50, 70});
  OperandType type37(Type::TENSOR_FLOAT32, {5, 3, 2, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type36);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type37);
  auto op12_tmp = model->addOperand(&type36);
  auto dummy40 = model->addOperand(&type18);
  auto param114 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy40_init[] = {0.0f};
  model->setOperandValue(dummy40, dummy40_init, sizeof(float) * 1);
  static int32_t param114_init[] = {0};
  model->setOperandValue(param114, param114_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy40, param114}, {op12});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT32, {5, 3, 50, 70});
  // Phase 1, operands
  auto op12 = model->addOperand(&type36);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type17);
  auto op12_tmp = model->addOperand(&type36);
  auto dummy41 = model->addOperand(&type18);
  auto param115 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy41_init[] = {0.0f};
  model->setOperandValue(dummy41, dummy41_init, sizeof(float) * 1);
  static int32_t param115_init[] = {0};
  model->setOperandValue(param115, param115_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy41, param115}, {op12});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT32, {5, 3, 50, 70});
  OperandType type37(Type::TENSOR_FLOAT32, {5, 3, 2, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type36);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type37);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT32, {5, 3, 50, 70});
  // Phase 1, operands
  auto op12 = model->addOperand(&type36);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT32, {5, 3, 50, 70});
  OperandType type37(Type::TENSOR_FLOAT32, {5, 3, 2, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type36);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type37);
  auto op12_tmp = model->addOperand(&type36);
  auto dummy42 = model->addOperand(&type18);
  auto param116 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy42_init[] = {0.0f};
  model->setOperandValue(dummy42, dummy42_init, sizeof(float) * 1);
  static int32_t param116_init[] = {0};
  model->setOperandValue(param116, param116_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy42, param116}, {op12});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type36(Type::TENSOR_FLOAT32, {5, 3, 50, 70});
  // Phase 1, operands
  auto op12 = model->addOperand(&type36);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type17);
  auto op12_tmp = model->addOperand(&type36);
  auto dummy43 = model->addOperand(&type18);
  auto param117 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy43_init[] = {0.0f};
  model->setOperandValue(dummy43, dummy43_init, sizeof(float) * 1);
  static int32_t param117_init[] = {0};
  model->setOperandValue(param117, param117_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy43, param117}, {op12});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {5, 3, 50, 70}, 0.25f, 0);
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {5, 3, 2, 3}, 0.25f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type48);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_quant8_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {5, 3, 50, 70}, 0.25f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type45);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {5, 3, 50, 70}, 0.25f, 0);
  OperandType type48(Type::TENSOR_QUANT8_ASYMM, {5, 3, 2, 3}, 0.25f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type48);
  auto op12_tmp = model->addOperand(&type47);
  auto dummy44 = model->addOperand(&type46);
  auto param118 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy44_init[] = {0};
  model->setOperandValue(dummy44, dummy44_init, sizeof(uint8_t) * 1);
  static int32_t param118_init[] = {0};
  model->setOperandValue(param118, param118_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy44, param118}, {op12});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  OperandType type47(Type::TENSOR_QUANT8_ASYMM, {5, 3, 50, 70}, 0.25f, 0);
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type45);
  auto op12_tmp = model->addOperand(&type47);
  auto dummy45 = model->addOperand(&type46);
  auto param119 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy45_init[] = {0};
  model->setOperandValue(dummy45, dummy45_init, sizeof(uint8_t) * 1);
  static int32_t param119_init[] = {0};
  model->setOperandValue(param119, param119_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy45, param119}, {op12});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type40(Type::TENSOR_FLOAT16, {5, 3, 50, 70});
  OperandType type41(Type::TENSOR_FLOAT16, {5, 3, 2, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type40);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type41);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_float16_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type40(Type::TENSOR_FLOAT16, {5, 3, 50, 70});
  // Phase 1, operands
  auto op12 = model->addOperand(&type40);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type41(Type::TENSOR_FLOAT16, {5, 3, 2, 3});
  OperandType type42(Type::TENSOR_FLOAT16, {5, 3, 50, 70});
  // Phase 1, operands
  auto op12 = model->addOperand(&type42);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type41);
  auto op12_tmp = model->addOperand(&type42);
  auto dummy46 = model->addOperand(&type25);
  auto param120 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy46_init[] = {0.0f};
  model->setOperandValue(dummy46, dummy46_init, sizeof(_Float16) * 1);
  static int32_t param120_init[] = {0};
  model->setOperandValue(param120, param120_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy46, param120}, {op12});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type42(Type::TENSOR_FLOAT16, {5, 3, 50, 70});
  // Phase 1, operands
  auto op12 = model->addOperand(&type42);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto param24 = model->addOperand(&type2);
  auto param25 = model->addOperand(&type2);
  auto param26 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type23);
  auto op12_tmp = model->addOperand(&type42);
  auto dummy47 = model->addOperand(&type25);
  auto param121 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {20};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {20};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static int32_t param24_init[] = {20};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static int32_t param25_init[] = {20};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  static int32_t param26_init[] = {3};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy47_init[] = {0.0f};
  model->setOperandValue(dummy47, dummy47_init, sizeof(_Float16) * 1);
  static int32_t param121_init[] = {0};
  model->setOperandValue(param121, param121_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy47, param121}, {op12});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op12, param18, param19, param20, param21, param22, param23, param24, param25, param26, layout}, {op42});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type6);
  auto op13_tmp = model->addOperand(&type5);
  auto dummy48 = model->addOperand(&type18);
  auto param122 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy48_init[] = {0.0f};
  model->setOperandValue(dummy48, dummy48_init, sizeof(float) * 1);
  static int32_t param122_init[] = {0};
  model->setOperandValue(param122, param122_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy48, param122}, {op13});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type17);
  auto op13_tmp = model->addOperand(&type5);
  auto dummy49 = model->addOperand(&type18);
  auto param123 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy49_init[] = {0.0f};
  model->setOperandValue(dummy49, dummy49_init, sizeof(float) * 1);
  static int32_t param123_init[] = {0};
  model->setOperandValue(param123, param123_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy49, param123}, {op13});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_relaxed_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type6);
  auto op13_tmp = model->addOperand(&type5);
  auto dummy50 = model->addOperand(&type18);
  auto param124 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy50_init[] = {0.0f};
  model->setOperandValue(dummy50, dummy50_init, sizeof(float) * 1);
  static int32_t param124_init[] = {0};
  model->setOperandValue(param124, param124_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy50, param124}, {op13});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type5);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type17);
  auto op13_tmp = model->addOperand(&type5);
  auto dummy51 = model->addOperand(&type18);
  auto param125 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy51_init[] = {0.0f};
  model->setOperandValue(dummy51, dummy51_init, sizeof(float) * 1);
  static int32_t param125_init[] = {0};
  model->setOperandValue(param125, param125_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy51, param125}, {op13});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 2, 4, 1}, 0.25f, 0);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 0.25f, 0);
  // Phase 1, operands
  auto op13 = model->addOperand(&type49);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type50);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_quant8_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 2, 4, 1}, 0.25f, 0);
  // Phase 1, operands
  auto op13 = model->addOperand(&type49);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type45);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 2, 4, 1}, 0.25f, 0);
  OperandType type50(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 1}, 0.25f, 0);
  // Phase 1, operands
  auto op13 = model->addOperand(&type49);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type50);
  auto op13_tmp = model->addOperand(&type49);
  auto dummy52 = model->addOperand(&type46);
  auto param126 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy52_init[] = {0};
  model->setOperandValue(dummy52, dummy52_init, sizeof(uint8_t) * 1);
  static int32_t param126_init[] = {0};
  model->setOperandValue(param126, param126_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy52, param126}, {op13});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  OperandType type49(Type::TENSOR_QUANT8_ASYMM, {1, 2, 4, 1}, 0.25f, 0);
  // Phase 1, operands
  auto op13 = model->addOperand(&type49);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type45);
  auto op13_tmp = model->addOperand(&type49);
  auto dummy53 = model->addOperand(&type46);
  auto param127 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy53_init[] = {0};
  model->setOperandValue(dummy53, dummy53_init, sizeof(uint8_t) * 1);
  static int32_t param127_init[] = {0};
  model->setOperandValue(param127, param127_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy53, param127}, {op13});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type51(Type::TENSOR_FLOAT16, {1, 2, 4, 1});
  OperandType type52(Type::TENSOR_FLOAT16, {1, 1, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type51);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type52);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_float16_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type51(Type::TENSOR_FLOAT16, {1, 2, 4, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type51);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type52(Type::TENSOR_FLOAT16, {1, 1, 2, 1});
  OperandType type53(Type::TENSOR_FLOAT16, {1, 2, 4, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type53);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type52);
  auto op13_tmp = model->addOperand(&type53);
  auto dummy54 = model->addOperand(&type25);
  auto param128 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy54_init[] = {0.0f};
  model->setOperandValue(dummy54, dummy54_init, sizeof(_Float16) * 1);
  static int32_t param128_init[] = {0};
  model->setOperandValue(param128, param128_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy54, param128}, {op13});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type53(Type::TENSOR_FLOAT16, {1, 2, 4, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type53);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type23);
  auto op13_tmp = model->addOperand(&type53);
  auto dummy55 = model->addOperand(&type25);
  auto param129 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy55_init[] = {0.0f};
  model->setOperandValue(dummy55, dummy55_init, sizeof(_Float16) * 1);
  static int32_t param129_init[] = {0};
  model->setOperandValue(param129, param129_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy55, param129}, {op13});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {1, 1, 2, 4});
  OperandType type55(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type54);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type55);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {1, 1, 2, 4});
  // Phase 1, operands
  auto op13 = model->addOperand(&type54);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {1, 1, 2, 4});
  OperandType type55(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type54);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type55);
  auto op13_tmp = model->addOperand(&type54);
  auto dummy56 = model->addOperand(&type18);
  auto param130 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy56_init[] = {0.0f};
  model->setOperandValue(dummy56, dummy56_init, sizeof(float) * 1);
  static int32_t param130_init[] = {0};
  model->setOperandValue(param130, param130_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy56, param130}, {op13});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {1, 1, 2, 4});
  // Phase 1, operands
  auto op13 = model->addOperand(&type54);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type17);
  auto op13_tmp = model->addOperand(&type54);
  auto dummy57 = model->addOperand(&type18);
  auto param131 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy57_init[] = {0.0f};
  model->setOperandValue(dummy57, dummy57_init, sizeof(float) * 1);
  static int32_t param131_init[] = {0};
  model->setOperandValue(param131, param131_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy57, param131}, {op13});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {1, 1, 2, 4});
  OperandType type55(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type54);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type55);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_relaxed_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {1, 1, 2, 4});
  // Phase 1, operands
  auto op13 = model->addOperand(&type54);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {1, 1, 2, 4});
  OperandType type55(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type54);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type55);
  auto op13_tmp = model->addOperand(&type54);
  auto dummy58 = model->addOperand(&type18);
  auto param132 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy58_init[] = {0.0f};
  model->setOperandValue(dummy58, dummy58_init, sizeof(float) * 1);
  static int32_t param132_init[] = {0};
  model->setOperandValue(param132, param132_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy58, param132}, {op13});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type54(Type::TENSOR_FLOAT32, {1, 1, 2, 4});
  // Phase 1, operands
  auto op13 = model->addOperand(&type54);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type17);
  auto op13_tmp = model->addOperand(&type54);
  auto dummy59 = model->addOperand(&type18);
  auto param133 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy59_init[] = {0.0f};
  model->setOperandValue(dummy59, dummy59_init, sizeof(float) * 1);
  static int32_t param133_init[] = {0};
  model->setOperandValue(param133, param133_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy59, param133}, {op13});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type56(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 4}, 0.25f, 0);
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 2}, 0.25f, 0);
  // Phase 1, operands
  auto op13 = model->addOperand(&type56);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type57);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_quant8_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type56(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 4}, 0.25f, 0);
  // Phase 1, operands
  auto op13 = model->addOperand(&type56);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type45);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  OperandType type56(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 4}, 0.25f, 0);
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 2}, 0.25f, 0);
  // Phase 1, operands
  auto op13 = model->addOperand(&type56);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type57);
  auto op13_tmp = model->addOperand(&type56);
  auto dummy60 = model->addOperand(&type46);
  auto param134 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy60_init[] = {0};
  model->setOperandValue(dummy60, dummy60_init, sizeof(uint8_t) * 1);
  static int32_t param134_init[] = {0};
  model->setOperandValue(param134, param134_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy60, param134}, {op13});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 0);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 0);
  OperandType type56(Type::TENSOR_QUANT8_ASYMM, {1, 1, 2, 4}, 0.25f, 0);
  // Phase 1, operands
  auto op13 = model->addOperand(&type56);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type45);
  auto op13_tmp = model->addOperand(&type56);
  auto dummy61 = model->addOperand(&type46);
  auto param135 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy61_init[] = {0};
  model->setOperandValue(dummy61, dummy61_init, sizeof(uint8_t) * 1);
  static int32_t param135_init[] = {0};
  model->setOperandValue(param135, param135_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy61, param135}, {op13});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 1, 2, 4});
  OperandType type59(Type::TENSOR_FLOAT16, {1, 1, 1, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type58);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type59);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_float16_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type58(Type::TENSOR_FLOAT16, {1, 1, 2, 4});
  // Phase 1, operands
  auto op13 = model->addOperand(&type58);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type59(Type::TENSOR_FLOAT16, {1, 1, 1, 2});
  OperandType type60(Type::TENSOR_FLOAT16, {1, 1, 2, 4});
  // Phase 1, operands
  auto op13 = model->addOperand(&type60);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type59);
  auto op13_tmp = model->addOperand(&type60);
  auto dummy62 = model->addOperand(&type25);
  auto param136 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy62_init[] = {0.0f};
  model->setOperandValue(dummy62, dummy62_init, sizeof(_Float16) * 1);
  static int32_t param136_init[] = {0};
  model->setOperandValue(param136, param136_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy62, param136}, {op13});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type25(Type::TENSOR_FLOAT16, {1});
  OperandType type60(Type::TENSOR_FLOAT16, {1, 1, 2, 4});
  // Phase 1, operands
  auto op13 = model->addOperand(&type60);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type2);
  auto param29 = model->addOperand(&type2);
  auto param30 = model->addOperand(&type2);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type23);
  auto op13_tmp = model->addOperand(&type60);
  auto dummy63 = model->addOperand(&type25);
  auto param137 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param27_init[] = {1};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static int32_t param28_init[] = {2};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  static int32_t param29_init[] = {2};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  static int32_t param30_init[] = {2};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy63_init[] = {0.0f};
  model->setOperandValue(dummy63, dummy63_init, sizeof(_Float16) * 1);
  static int32_t param137_init[] = {0};
  model->setOperandValue(param137, param137_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy63, param137}, {op13});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {op13, param27, param28, param29, param30, param31, param32, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 1, 1, 1});
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param33 = model->addOperand(&type12);
  auto param34 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto param37 = model->addOperand(&type13);
  auto param38 = model->addOperand(&type13);
  auto param39 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type14);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type13);
  auto param43 = model->addOperand(&type13);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type15);
  auto param46 = model->addOperand(&type2);
  auto param47 = model->addOperand(&type2);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type2);
  auto param51 = model->addOperand(&type2);
  auto param52 = model->addOperand(&type2);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto out = model->addOperand(&type16);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {-1};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {0.4f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {1.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static float param39_init[] = {0.3f};
  model->setOperandValue(param39, param39_init, sizeof(float) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {2};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static float param43_init[] = {2.0f};
  model->setOperandValue(param43, param43_init, sizeof(float) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {4};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {1};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static int32_t param51_init[] = {1};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static int32_t param52_init[] = {2};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param33, param34, param35, param36, param37, param38, param39}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param40, param41, param42, param43, param44, param45, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap, param46, param47, param48, param49, param50, param51, param52, param53, param54, layout}, {out});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nhwc_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param33 = model->addOperand(&type12);
  auto param34 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto param37 = model->addOperand(&type13);
  auto param38 = model->addOperand(&type13);
  auto param39 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type14);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type13);
  auto param43 = model->addOperand(&type13);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type15);
  auto param46 = model->addOperand(&type2);
  auto param47 = model->addOperand(&type2);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type2);
  auto param51 = model->addOperand(&type2);
  auto param52 = model->addOperand(&type2);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto out = model->addOperand(&type17);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {-1};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {0.4f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {1.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static float param39_init[] = {0.3f};
  model->setOperandValue(param39, param39_init, sizeof(float) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {2};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static float param43_init[] = {2.0f};
  model->setOperandValue(param43, param43_init, sizeof(float) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {4};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {1};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static int32_t param51_init[] = {1};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static int32_t param52_init[] = {2};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param33, param34, param35, param36, param37, param38, param39}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param40, param41, param42, param43, param44, param45, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap, param46, param47, param48, param49, param50, param51, param52, param53, param54, layout}, {out});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 1, 1, 1});
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param33 = model->addOperand(&type12);
  auto param34 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto param37 = model->addOperand(&type13);
  auto param38 = model->addOperand(&type13);
  auto param39 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type14);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type13);
  auto param43 = model->addOperand(&type13);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type15);
  auto param46 = model->addOperand(&type2);
  auto param47 = model->addOperand(&type2);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type2);
  auto param51 = model->addOperand(&type2);
  auto param52 = model->addOperand(&type2);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto out = model->addOperand(&type16);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {-1};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {0.4f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {1.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static float param39_init[] = {0.3f};
  model->setOperandValue(param39, param39_init, sizeof(float) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {2};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static float param43_init[] = {2.0f};
  model->setOperandValue(param43, param43_init, sizeof(float) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {4};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {1};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static int32_t param51_init[] = {1};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static int32_t param52_init[] = {2};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param33, param34, param35, param36, param37, param38, param39}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param40, param41, param42, param43, param44, param45, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap, param46, param47, param48, param49, param50, param51, param52, param53, param54, layout}, {out});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nhwc_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param33 = model->addOperand(&type12);
  auto param34 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto param37 = model->addOperand(&type13);
  auto param38 = model->addOperand(&type13);
  auto param39 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type14);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type13);
  auto param43 = model->addOperand(&type13);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type15);
  auto param46 = model->addOperand(&type2);
  auto param47 = model->addOperand(&type2);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type2);
  auto param51 = model->addOperand(&type2);
  auto param52 = model->addOperand(&type2);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto out = model->addOperand(&type17);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {-1};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {0.4f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {1.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static float param39_init[] = {0.3f};
  model->setOperandValue(param39, param39_init, sizeof(float) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {2};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static float param43_init[] = {2.0f};
  model->setOperandValue(param43, param43_init, sizeof(float) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {4};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {1};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static int32_t param51_init[] = {1};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static int32_t param52_init[] = {2};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param33, param34, param35, param36, param37, param38, param39}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param40, param41, param42, param43, param44, param45, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap, param46, param47, param48, param49, param50, param51, param52, param53, param54, layout}, {out});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type2(Type::INT32, {});
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type62(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type63(Type::TENSOR_QUANT8_ASYMM, {0, 1, 1, 1}, 0.1f, 128);
  OperandType type64(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type65(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type66(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type66);
  auto roi = model->addOperand(&type64);
  auto param33 = model->addOperand(&type12);
  auto param34 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto param37 = model->addOperand(&type13);
  auto param38 = model->addOperand(&type13);
  auto param39 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type67);
  auto roiOut = model->addOperand(&type65);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type62);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type13);
  auto param43 = model->addOperand(&type13);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type61);
  auto param46 = model->addOperand(&type2);
  auto param47 = model->addOperand(&type2);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type2);
  auto param51 = model->addOperand(&type2);
  auto param52 = model->addOperand(&type2);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto out = model->addOperand(&type63);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {-1};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {0.4f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {1.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static float param39_init[] = {0.3f};
  model->setOperandValue(param39, param39_init, sizeof(float) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {2};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static float param43_init[] = {2.0f};
  model->setOperandValue(param43, param43_init, sizeof(float) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {4};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {1};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static int32_t param51_init[] = {1};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static int32_t param52_init[] = {2};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param33, param34, param35, param36, param37, param38, param39}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param40, param41, param42, param43, param44, param45, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap, param46, param47, param48, param49, param50, param51, param52, param53, param54, layout}, {out});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nhwc_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type2(Type::INT32, {});
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type62(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type64(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type65(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type66(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type68(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type66);
  auto roi = model->addOperand(&type64);
  auto param33 = model->addOperand(&type12);
  auto param34 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto param37 = model->addOperand(&type13);
  auto param38 = model->addOperand(&type13);
  auto param39 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type67);
  auto roiOut = model->addOperand(&type65);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type62);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type13);
  auto param43 = model->addOperand(&type13);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type61);
  auto param46 = model->addOperand(&type2);
  auto param47 = model->addOperand(&type2);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type2);
  auto param51 = model->addOperand(&type2);
  auto param52 = model->addOperand(&type2);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto out = model->addOperand(&type68);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {-1};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {0.4f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {1.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static float param39_init[] = {0.3f};
  model->setOperandValue(param39, param39_init, sizeof(float) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {2};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static float param43_init[] = {2.0f};
  model->setOperandValue(param43, param43_init, sizeof(float) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {4};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {1};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static int32_t param51_init[] = {1};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static int32_t param52_init[] = {2};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param33, param34, param35, param36, param37, param38, param39}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param40, param41, param42, param43, param44, param45, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap, param46, param47, param48, param49, param50, param51, param52, param53, param54, layout}, {out});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type69(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type70(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type71(Type::TENSOR_FLOAT16, {0, 1, 1, 1});
  OperandType type72(Type::FLOAT16, {});
  OperandType type73(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type74(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type75(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type76(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type75);
  auto roi = model->addOperand(&type73);
  auto param33 = model->addOperand(&type12);
  auto param34 = model->addOperand(&type72);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto param37 = model->addOperand(&type72);
  auto param38 = model->addOperand(&type72);
  auto param39 = model->addOperand(&type72);
  auto scoresOut = model->addOperand(&type76);
  auto roiOut = model->addOperand(&type74);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type70);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type72);
  auto param43 = model->addOperand(&type72);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type69);
  auto param46 = model->addOperand(&type2);
  auto param47 = model->addOperand(&type2);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type2);
  auto param51 = model->addOperand(&type2);
  auto param52 = model->addOperand(&type2);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto out = model->addOperand(&type71);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static _Float16 param34_init[] = {0.30000001192092896f};
  model->setOperandValue(param34, param34_init, sizeof(_Float16) * 1);
  static int32_t param35_init[] = {-1};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static _Float16 param37_init[] = {0.4000000059604645f};
  model->setOperandValue(param37, param37_init, sizeof(_Float16) * 1);
  static _Float16 param38_init[] = {1.0f};
  model->setOperandValue(param38, param38_init, sizeof(_Float16) * 1);
  static _Float16 param39_init[] = {0.30000001192092896f};
  model->setOperandValue(param39, param39_init, sizeof(_Float16) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {2};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static _Float16 param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(_Float16) * 1);
  static _Float16 param43_init[] = {2.0f};
  model->setOperandValue(param43, param43_init, sizeof(_Float16) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {4};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {1};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static int32_t param51_init[] = {1};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static int32_t param52_init[] = {2};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param33, param34, param35, param36, param37, param38, param39}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param40, param41, param42, param43, param44, param45, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap, param46, param47, param48, param49, param50, param51, param52, param53, param54, layout}, {out});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type69(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type70(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type72(Type::FLOAT16, {});
  OperandType type73(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type74(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type75(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type77(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type75);
  auto roi = model->addOperand(&type73);
  auto param33 = model->addOperand(&type12);
  auto param34 = model->addOperand(&type72);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto param37 = model->addOperand(&type72);
  auto param38 = model->addOperand(&type72);
  auto param39 = model->addOperand(&type72);
  auto scoresOut = model->addOperand(&type77);
  auto roiOut = model->addOperand(&type74);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type70);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type72);
  auto param43 = model->addOperand(&type72);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type69);
  auto param46 = model->addOperand(&type2);
  auto param47 = model->addOperand(&type2);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type2);
  auto param51 = model->addOperand(&type2);
  auto param52 = model->addOperand(&type2);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto out = model->addOperand(&type23);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static _Float16 param34_init[] = {0.30000001192092896f};
  model->setOperandValue(param34, param34_init, sizeof(_Float16) * 1);
  static int32_t param35_init[] = {-1};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static _Float16 param37_init[] = {0.4000000059604645f};
  model->setOperandValue(param37, param37_init, sizeof(_Float16) * 1);
  static _Float16 param38_init[] = {1.0f};
  model->setOperandValue(param38, param38_init, sizeof(_Float16) * 1);
  static _Float16 param39_init[] = {0.30000001192092896f};
  model->setOperandValue(param39, param39_init, sizeof(_Float16) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {2};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static _Float16 param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(_Float16) * 1);
  static _Float16 param43_init[] = {2.0f};
  model->setOperandValue(param43, param43_init, sizeof(_Float16) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {4};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {1};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static int32_t param51_init[] = {1};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static int32_t param52_init[] = {2};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param33, param34, param35, param36, param37, param38, param39}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param40, param41, param42, param43, param44, param45, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap, param46, param47, param48, param49, param50, param51, param52, param53, param54, layout}, {out});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 1, 1, 1});
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type78(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param33 = model->addOperand(&type12);
  auto param34 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto param37 = model->addOperand(&type13);
  auto param38 = model->addOperand(&type13);
  auto param39 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type14);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type13);
  auto param43 = model->addOperand(&type13);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type78);
  auto param46 = model->addOperand(&type2);
  auto param47 = model->addOperand(&type2);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type2);
  auto param51 = model->addOperand(&type2);
  auto param52 = model->addOperand(&type2);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto out = model->addOperand(&type16);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {-1};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {0.4f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {1.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static float param39_init[] = {0.3f};
  model->setOperandValue(param39, param39_init, sizeof(float) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {2};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static float param43_init[] = {2.0f};
  model->setOperandValue(param43, param43_init, sizeof(float) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {4};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {1};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static int32_t param51_init[] = {1};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static int32_t param52_init[] = {2};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param33, param34, param35, param36, param37, param38, param39}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param40, param41, param42, param43, param44, param45, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap, param46, param47, param48, param49, param50, param51, param52, param53, param54, layout}, {out});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type78(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param33 = model->addOperand(&type12);
  auto param34 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto param37 = model->addOperand(&type13);
  auto param38 = model->addOperand(&type13);
  auto param39 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type14);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type13);
  auto param43 = model->addOperand(&type13);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type78);
  auto param46 = model->addOperand(&type2);
  auto param47 = model->addOperand(&type2);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type2);
  auto param51 = model->addOperand(&type2);
  auto param52 = model->addOperand(&type2);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto out = model->addOperand(&type17);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {-1};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {0.4f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {1.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static float param39_init[] = {0.3f};
  model->setOperandValue(param39, param39_init, sizeof(float) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {2};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static float param43_init[] = {2.0f};
  model->setOperandValue(param43, param43_init, sizeof(float) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {4};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {1};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static int32_t param51_init[] = {1};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static int32_t param52_init[] = {2};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param33, param34, param35, param36, param37, param38, param39}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param40, param41, param42, param43, param44, param45, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap, param46, param47, param48, param49, param50, param51, param52, param53, param54, layout}, {out});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 1, 1, 1});
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type78(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param33 = model->addOperand(&type12);
  auto param34 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto param37 = model->addOperand(&type13);
  auto param38 = model->addOperand(&type13);
  auto param39 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type14);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type13);
  auto param43 = model->addOperand(&type13);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type78);
  auto param46 = model->addOperand(&type2);
  auto param47 = model->addOperand(&type2);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type2);
  auto param51 = model->addOperand(&type2);
  auto param52 = model->addOperand(&type2);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto out = model->addOperand(&type16);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {-1};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {0.4f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {1.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static float param39_init[] = {0.3f};
  model->setOperandValue(param39, param39_init, sizeof(float) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {2};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static float param43_init[] = {2.0f};
  model->setOperandValue(param43, param43_init, sizeof(float) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {4};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {1};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static int32_t param51_init[] = {1};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static int32_t param52_init[] = {2};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param33, param34, param35, param36, param37, param38, param39}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param40, param41, param42, param43, param44, param45, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap, param46, param47, param48, param49, param50, param51, param52, param53, param54, layout}, {out});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type78(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param33 = model->addOperand(&type12);
  auto param34 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto param37 = model->addOperand(&type13);
  auto param38 = model->addOperand(&type13);
  auto param39 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type14);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type13);
  auto param43 = model->addOperand(&type13);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type78);
  auto param46 = model->addOperand(&type2);
  auto param47 = model->addOperand(&type2);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type2);
  auto param51 = model->addOperand(&type2);
  auto param52 = model->addOperand(&type2);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto out = model->addOperand(&type17);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {-1};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {0.4f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {1.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static float param39_init[] = {0.3f};
  model->setOperandValue(param39, param39_init, sizeof(float) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {2};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static float param43_init[] = {2.0f};
  model->setOperandValue(param43, param43_init, sizeof(float) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {4};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {1};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static int32_t param51_init[] = {1};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static int32_t param52_init[] = {2};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param33, param34, param35, param36, param37, param38, param39}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param40, param41, param42, param43, param44, param45, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap, param46, param47, param48, param49, param50, param51, param52, param53, param54, layout}, {out});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type2(Type::INT32, {});
  OperandType type62(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type63(Type::TENSOR_QUANT8_ASYMM, {0, 1, 1, 1}, 0.1f, 128);
  OperandType type64(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type65(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type66(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type79(Type::TENSOR_QUANT8_ASYMM, {0, 1, 2, 2}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type66);
  auto roi = model->addOperand(&type64);
  auto param33 = model->addOperand(&type12);
  auto param34 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto param37 = model->addOperand(&type13);
  auto param38 = model->addOperand(&type13);
  auto param39 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type67);
  auto roiOut = model->addOperand(&type65);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type62);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type13);
  auto param43 = model->addOperand(&type13);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type79);
  auto param46 = model->addOperand(&type2);
  auto param47 = model->addOperand(&type2);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type2);
  auto param51 = model->addOperand(&type2);
  auto param52 = model->addOperand(&type2);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto out = model->addOperand(&type63);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {-1};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {0.4f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {1.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static float param39_init[] = {0.3f};
  model->setOperandValue(param39, param39_init, sizeof(float) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {2};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static float param43_init[] = {2.0f};
  model->setOperandValue(param43, param43_init, sizeof(float) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {4};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {1};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static int32_t param51_init[] = {1};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static int32_t param52_init[] = {2};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param33, param34, param35, param36, param37, param38, param39}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param40, param41, param42, param43, param44, param45, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap, param46, param47, param48, param49, param50, param51, param52, param53, param54, layout}, {out});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nchw_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type2(Type::INT32, {});
  OperandType type62(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type64(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type65(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type66(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type68(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  OperandType type79(Type::TENSOR_QUANT8_ASYMM, {0, 1, 2, 2}, 0.1f, 128);
  // Phase 1, operands
  auto scores = model->addOperand(&type66);
  auto roi = model->addOperand(&type64);
  auto param33 = model->addOperand(&type12);
  auto param34 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto param37 = model->addOperand(&type13);
  auto param38 = model->addOperand(&type13);
  auto param39 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type67);
  auto roiOut = model->addOperand(&type65);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type62);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type13);
  auto param43 = model->addOperand(&type13);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type79);
  auto param46 = model->addOperand(&type2);
  auto param47 = model->addOperand(&type2);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type2);
  auto param51 = model->addOperand(&type2);
  auto param52 = model->addOperand(&type2);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto out = model->addOperand(&type68);
  // Phase 2, operations
  static uint8_t scores_init[] = {137, 129};
  model->setOperandValue(scores, scores_init, sizeof(uint8_t) * 2);
  static uint16_t roi_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi, roi_init, sizeof(uint16_t) * 8);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static float param34_init[] = {0.3f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {-1};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static float param37_init[] = {0.4f};
  model->setOperandValue(param37, param37_init, sizeof(float) * 1);
  static float param38_init[] = {1.0f};
  model->setOperandValue(param38, param38_init, sizeof(float) * 1);
  static float param39_init[] = {0.3f};
  model->setOperandValue(param39, param39_init, sizeof(float) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {2};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static float param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(float) * 1);
  static float param43_init[] = {2.0f};
  model->setOperandValue(param43, param43_init, sizeof(float) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {4};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {1};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static int32_t param51_init[] = {1};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static int32_t param52_init[] = {2};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param33, param34, param35, param36, param37, param38, param39}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param40, param41, param42, param43, param44, param45, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap, param46, param47, param48, param49, param50, param51, param52, param53, param54, layout}, {out});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type70(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type71(Type::TENSOR_FLOAT16, {0, 1, 1, 1});
  OperandType type72(Type::FLOAT16, {});
  OperandType type73(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type74(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type75(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type76(Type::TENSOR_FLOAT16, {0});
  OperandType type80(Type::TENSOR_FLOAT16, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores = model->addOperand(&type75);
  auto roi = model->addOperand(&type73);
  auto param33 = model->addOperand(&type12);
  auto param34 = model->addOperand(&type72);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto param37 = model->addOperand(&type72);
  auto param38 = model->addOperand(&type72);
  auto param39 = model->addOperand(&type72);
  auto scoresOut = model->addOperand(&type76);
  auto roiOut = model->addOperand(&type74);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type70);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type72);
  auto param43 = model->addOperand(&type72);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type80);
  auto param46 = model->addOperand(&type2);
  auto param47 = model->addOperand(&type2);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type2);
  auto param51 = model->addOperand(&type2);
  auto param52 = model->addOperand(&type2);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto out = model->addOperand(&type71);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static _Float16 param34_init[] = {0.30000001192092896f};
  model->setOperandValue(param34, param34_init, sizeof(_Float16) * 1);
  static int32_t param35_init[] = {-1};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static _Float16 param37_init[] = {0.4000000059604645f};
  model->setOperandValue(param37, param37_init, sizeof(_Float16) * 1);
  static _Float16 param38_init[] = {1.0f};
  model->setOperandValue(param38, param38_init, sizeof(_Float16) * 1);
  static _Float16 param39_init[] = {0.30000001192092896f};
  model->setOperandValue(param39, param39_init, sizeof(_Float16) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {2};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static _Float16 param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(_Float16) * 1);
  static _Float16 param43_init[] = {2.0f};
  model->setOperandValue(param43, param43_init, sizeof(_Float16) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {4};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {1};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static int32_t param51_init[] = {1};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static int32_t param52_init[] = {2};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param33, param34, param35, param36, param37, param38, param39}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param40, param41, param42, param43, param44, param45, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap, param46, param47, param48, param49, param50, param51, param52, param53, param54, layout}, {out});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type70(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type72(Type::FLOAT16, {});
  OperandType type73(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type74(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type75(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type77(Type::TENSOR_FLOAT16, {0});
  OperandType type80(Type::TENSOR_FLOAT16, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores = model->addOperand(&type75);
  auto roi = model->addOperand(&type73);
  auto param33 = model->addOperand(&type12);
  auto param34 = model->addOperand(&type72);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto param37 = model->addOperand(&type72);
  auto param38 = model->addOperand(&type72);
  auto param39 = model->addOperand(&type72);
  auto scoresOut = model->addOperand(&type77);
  auto roiOut = model->addOperand(&type74);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type70);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type72);
  auto param43 = model->addOperand(&type72);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type80);
  auto param46 = model->addOperand(&type2);
  auto param47 = model->addOperand(&type2);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type2);
  auto param51 = model->addOperand(&type2);
  auto param52 = model->addOperand(&type2);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto out = model->addOperand(&type23);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  static _Float16 param34_init[] = {0.30000001192092896f};
  model->setOperandValue(param34, param34_init, sizeof(_Float16) * 1);
  static int32_t param35_init[] = {-1};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static _Float16 param37_init[] = {0.4000000059604645f};
  model->setOperandValue(param37, param37_init, sizeof(_Float16) * 1);
  static _Float16 param38_init[] = {1.0f};
  model->setOperandValue(param38, param38_init, sizeof(_Float16) * 1);
  static _Float16 param39_init[] = {0.30000001192092896f};
  model->setOperandValue(param39, param39_init, sizeof(_Float16) * 1);
  static int32_t param40_init[] = {2};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {2};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static _Float16 param42_init[] = {2.0f};
  model->setOperandValue(param42, param42_init, sizeof(_Float16) * 1);
  static _Float16 param43_init[] = {2.0f};
  model->setOperandValue(param43, param43_init, sizeof(_Float16) * 1);
  static int32_t param44_init[] = {4};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {4};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static int32_t param50_init[] = {1};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  static int32_t param51_init[] = {1};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  static int32_t param52_init[] = {2};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param33, param34, param35, param36, param37, param38, param39}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param40, param41, param42, param43, param44, param45, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap, param46, param47, param48, param49, param50, param51, param52, param53, param54, layout}, {out});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param55 = model->addOperand(&type12);
  auto param56 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto param59 = model->addOperand(&type13);
  auto param60 = model->addOperand(&type13);
  auto param61 = model->addOperand(&type13);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type14);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type13);
  auto param65 = model->addOperand(&type13);
  auto param66 = model->addOperand(&type2);
  auto param67 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type15);
  auto param68 = model->addOperand(&type2);
  auto param69 = model->addOperand(&type2);
  auto param70 = model->addOperand(&type2);
  auto param71 = model->addOperand(&type2);
  auto param72 = model->addOperand(&type2);
  auto param73 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type15);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {0.3f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static int32_t param57_init[] = {-1};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static float param59_init[] = {0.4f};
  model->setOperandValue(param59, param59_init, sizeof(float) * 1);
  static float param60_init[] = {1.0f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {0.3f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static float param64_init[] = {2.0f};
  model->setOperandValue(param64, param64_init, sizeof(float) * 1);
  static float param65_init[] = {2.0f};
  model->setOperandValue(param65, param65_init, sizeof(float) * 1);
  static int32_t param66_init[] = {4};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static int32_t param67_init[] = {4};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param68_init[] = {1};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static int32_t param69_init[] = {1};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static int32_t param70_init[] = {1};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  static int32_t param71_init[] = {2};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  static int32_t param72_init[] = {2};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param55, param56, param57, param58, param59, param60, param61}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param62, param63, param64, param65, param66, param67, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap1, param68, param69, param70, param71, param72, param73, layout}, {out1});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nhwc_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param55 = model->addOperand(&type12);
  auto param56 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto param59 = model->addOperand(&type13);
  auto param60 = model->addOperand(&type13);
  auto param61 = model->addOperand(&type13);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type14);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type13);
  auto param65 = model->addOperand(&type13);
  auto param66 = model->addOperand(&type2);
  auto param67 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type15);
  auto param68 = model->addOperand(&type2);
  auto param69 = model->addOperand(&type2);
  auto param70 = model->addOperand(&type2);
  auto param71 = model->addOperand(&type2);
  auto param72 = model->addOperand(&type2);
  auto param73 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type17);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {0.3f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static int32_t param57_init[] = {-1};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static float param59_init[] = {0.4f};
  model->setOperandValue(param59, param59_init, sizeof(float) * 1);
  static float param60_init[] = {1.0f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {0.3f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static float param64_init[] = {2.0f};
  model->setOperandValue(param64, param64_init, sizeof(float) * 1);
  static float param65_init[] = {2.0f};
  model->setOperandValue(param65, param65_init, sizeof(float) * 1);
  static int32_t param66_init[] = {4};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static int32_t param67_init[] = {4};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param68_init[] = {1};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static int32_t param69_init[] = {1};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static int32_t param70_init[] = {1};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  static int32_t param71_init[] = {2};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  static int32_t param72_init[] = {2};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param55, param56, param57, param58, param59, param60, param61}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param62, param63, param64, param65, param66, param67, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap1, param68, param69, param70, param71, param72, param73, layout}, {out1});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param55 = model->addOperand(&type12);
  auto param56 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto param59 = model->addOperand(&type13);
  auto param60 = model->addOperand(&type13);
  auto param61 = model->addOperand(&type13);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type14);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type13);
  auto param65 = model->addOperand(&type13);
  auto param66 = model->addOperand(&type2);
  auto param67 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type15);
  auto param68 = model->addOperand(&type2);
  auto param69 = model->addOperand(&type2);
  auto param70 = model->addOperand(&type2);
  auto param71 = model->addOperand(&type2);
  auto param72 = model->addOperand(&type2);
  auto param73 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type15);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {0.3f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static int32_t param57_init[] = {-1};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static float param59_init[] = {0.4f};
  model->setOperandValue(param59, param59_init, sizeof(float) * 1);
  static float param60_init[] = {1.0f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {0.3f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static float param64_init[] = {2.0f};
  model->setOperandValue(param64, param64_init, sizeof(float) * 1);
  static float param65_init[] = {2.0f};
  model->setOperandValue(param65, param65_init, sizeof(float) * 1);
  static int32_t param66_init[] = {4};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static int32_t param67_init[] = {4};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param68_init[] = {1};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static int32_t param69_init[] = {1};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static int32_t param70_init[] = {1};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  static int32_t param71_init[] = {2};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  static int32_t param72_init[] = {2};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param55, param56, param57, param58, param59, param60, param61}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param62, param63, param64, param65, param66, param67, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap1, param68, param69, param70, param71, param72, param73, layout}, {out1});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nhwc_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type15(Type::TENSOR_FLOAT32, {0, 2, 2, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param55 = model->addOperand(&type12);
  auto param56 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto param59 = model->addOperand(&type13);
  auto param60 = model->addOperand(&type13);
  auto param61 = model->addOperand(&type13);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type14);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type13);
  auto param65 = model->addOperand(&type13);
  auto param66 = model->addOperand(&type2);
  auto param67 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type15);
  auto param68 = model->addOperand(&type2);
  auto param69 = model->addOperand(&type2);
  auto param70 = model->addOperand(&type2);
  auto param71 = model->addOperand(&type2);
  auto param72 = model->addOperand(&type2);
  auto param73 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type17);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {0.3f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static int32_t param57_init[] = {-1};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static float param59_init[] = {0.4f};
  model->setOperandValue(param59, param59_init, sizeof(float) * 1);
  static float param60_init[] = {1.0f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {0.3f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static float param64_init[] = {2.0f};
  model->setOperandValue(param64, param64_init, sizeof(float) * 1);
  static float param65_init[] = {2.0f};
  model->setOperandValue(param65, param65_init, sizeof(float) * 1);
  static int32_t param66_init[] = {4};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static int32_t param67_init[] = {4};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param68_init[] = {1};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static int32_t param69_init[] = {1};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static int32_t param70_init[] = {1};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  static int32_t param71_init[] = {2};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  static int32_t param72_init[] = {2};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param55, param56, param57, param58, param59, param60, param61}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param62, param63, param64, param65, param66, param67, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap1, param68, param69, param70, param71, param72, param73, layout}, {out1});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type2(Type::INT32, {});
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type62(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type64(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type65(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type66(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  // Phase 1, operands
  auto scores1 = model->addOperand(&type66);
  auto roi1 = model->addOperand(&type64);
  auto param55 = model->addOperand(&type12);
  auto param56 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto param59 = model->addOperand(&type13);
  auto param60 = model->addOperand(&type13);
  auto param61 = model->addOperand(&type13);
  auto scoresOut1 = model->addOperand(&type67);
  auto roiOut1 = model->addOperand(&type65);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type62);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type13);
  auto param65 = model->addOperand(&type13);
  auto param66 = model->addOperand(&type2);
  auto param67 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type61);
  auto param68 = model->addOperand(&type2);
  auto param69 = model->addOperand(&type2);
  auto param70 = model->addOperand(&type2);
  auto param71 = model->addOperand(&type2);
  auto param72 = model->addOperand(&type2);
  auto param73 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type61);
  // Phase 2, operations
  static uint8_t scores1_init[] = {137, 129};
  model->setOperandValue(scores1, scores1_init, sizeof(uint8_t) * 2);
  static uint16_t roi1_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi1, roi1_init, sizeof(uint16_t) * 8);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {0.3f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static int32_t param57_init[] = {-1};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static float param59_init[] = {0.4f};
  model->setOperandValue(param59, param59_init, sizeof(float) * 1);
  static float param60_init[] = {1.0f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {0.3f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static float param64_init[] = {2.0f};
  model->setOperandValue(param64, param64_init, sizeof(float) * 1);
  static float param65_init[] = {2.0f};
  model->setOperandValue(param65, param65_init, sizeof(float) * 1);
  static int32_t param66_init[] = {4};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static int32_t param67_init[] = {4};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param68_init[] = {1};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static int32_t param69_init[] = {1};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static int32_t param70_init[] = {1};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  static int32_t param71_init[] = {2};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  static int32_t param72_init[] = {2};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param55, param56, param57, param58, param59, param60, param61}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param62, param63, param64, param65, param66, param67, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap1, param68, param69, param70, param71, param72, param73, layout}, {out1});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nhwc_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type2(Type::INT32, {});
  OperandType type61(Type::TENSOR_QUANT8_ASYMM, {0, 2, 2, 1}, 0.1f, 128);
  OperandType type62(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type64(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type65(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type66(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type68(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  // Phase 1, operands
  auto scores1 = model->addOperand(&type66);
  auto roi1 = model->addOperand(&type64);
  auto param55 = model->addOperand(&type12);
  auto param56 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto param59 = model->addOperand(&type13);
  auto param60 = model->addOperand(&type13);
  auto param61 = model->addOperand(&type13);
  auto scoresOut1 = model->addOperand(&type67);
  auto roiOut1 = model->addOperand(&type65);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type62);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type13);
  auto param65 = model->addOperand(&type13);
  auto param66 = model->addOperand(&type2);
  auto param67 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type61);
  auto param68 = model->addOperand(&type2);
  auto param69 = model->addOperand(&type2);
  auto param70 = model->addOperand(&type2);
  auto param71 = model->addOperand(&type2);
  auto param72 = model->addOperand(&type2);
  auto param73 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type68);
  // Phase 2, operations
  static uint8_t scores1_init[] = {137, 129};
  model->setOperandValue(scores1, scores1_init, sizeof(uint8_t) * 2);
  static uint16_t roi1_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi1, roi1_init, sizeof(uint16_t) * 8);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {0.3f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static int32_t param57_init[] = {-1};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static float param59_init[] = {0.4f};
  model->setOperandValue(param59, param59_init, sizeof(float) * 1);
  static float param60_init[] = {1.0f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {0.3f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static float param64_init[] = {2.0f};
  model->setOperandValue(param64, param64_init, sizeof(float) * 1);
  static float param65_init[] = {2.0f};
  model->setOperandValue(param65, param65_init, sizeof(float) * 1);
  static int32_t param66_init[] = {4};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static int32_t param67_init[] = {4};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param68_init[] = {1};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static int32_t param69_init[] = {1};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static int32_t param70_init[] = {1};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  static int32_t param71_init[] = {2};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  static int32_t param72_init[] = {2};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param55, param56, param57, param58, param59, param60, param61}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param62, param63, param64, param65, param66, param67, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap1, param68, param69, param70, param71, param72, param73, layout}, {out1});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type69(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type70(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type72(Type::FLOAT16, {});
  OperandType type73(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type74(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type75(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type76(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type75);
  auto roi1 = model->addOperand(&type73);
  auto param55 = model->addOperand(&type12);
  auto param56 = model->addOperand(&type72);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto param59 = model->addOperand(&type72);
  auto param60 = model->addOperand(&type72);
  auto param61 = model->addOperand(&type72);
  auto scoresOut1 = model->addOperand(&type76);
  auto roiOut1 = model->addOperand(&type74);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type70);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type72);
  auto param65 = model->addOperand(&type72);
  auto param66 = model->addOperand(&type2);
  auto param67 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type69);
  auto param68 = model->addOperand(&type2);
  auto param69 = model->addOperand(&type2);
  auto param70 = model->addOperand(&type2);
  auto param71 = model->addOperand(&type2);
  auto param72 = model->addOperand(&type2);
  auto param73 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type69);
  // Phase 2, operations
  static _Float16 scores1_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores1, scores1_init, sizeof(_Float16) * 2);
  static _Float16 roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(_Float16) * 8);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static _Float16 param56_init[] = {0.30000001192092896f};
  model->setOperandValue(param56, param56_init, sizeof(_Float16) * 1);
  static int32_t param57_init[] = {-1};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static _Float16 param59_init[] = {0.4000000059604645f};
  model->setOperandValue(param59, param59_init, sizeof(_Float16) * 1);
  static _Float16 param60_init[] = {1.0f};
  model->setOperandValue(param60, param60_init, sizeof(_Float16) * 1);
  static _Float16 param61_init[] = {0.30000001192092896f};
  model->setOperandValue(param61, param61_init, sizeof(_Float16) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static _Float16 param64_init[] = {2.0f};
  model->setOperandValue(param64, param64_init, sizeof(_Float16) * 1);
  static _Float16 param65_init[] = {2.0f};
  model->setOperandValue(param65, param65_init, sizeof(_Float16) * 1);
  static int32_t param66_init[] = {4};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static int32_t param67_init[] = {4};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param68_init[] = {1};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static int32_t param69_init[] = {1};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static int32_t param70_init[] = {1};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  static int32_t param71_init[] = {2};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  static int32_t param72_init[] = {2};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param55, param56, param57, param58, param59, param60, param61}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param62, param63, param64, param65, param66, param67, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap1, param68, param69, param70, param71, param72, param73, layout}, {out1});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nhwc_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type69(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type70(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type72(Type::FLOAT16, {});
  OperandType type73(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type74(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type75(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type77(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type75);
  auto roi1 = model->addOperand(&type73);
  auto param55 = model->addOperand(&type12);
  auto param56 = model->addOperand(&type72);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto param59 = model->addOperand(&type72);
  auto param60 = model->addOperand(&type72);
  auto param61 = model->addOperand(&type72);
  auto scoresOut1 = model->addOperand(&type77);
  auto roiOut1 = model->addOperand(&type74);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type70);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type72);
  auto param65 = model->addOperand(&type72);
  auto param66 = model->addOperand(&type2);
  auto param67 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type69);
  auto param68 = model->addOperand(&type2);
  auto param69 = model->addOperand(&type2);
  auto param70 = model->addOperand(&type2);
  auto param71 = model->addOperand(&type2);
  auto param72 = model->addOperand(&type2);
  auto param73 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type23);
  // Phase 2, operations
  static _Float16 scores1_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores1, scores1_init, sizeof(_Float16) * 2);
  static _Float16 roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(_Float16) * 8);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static _Float16 param56_init[] = {0.30000001192092896f};
  model->setOperandValue(param56, param56_init, sizeof(_Float16) * 1);
  static int32_t param57_init[] = {-1};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static _Float16 param59_init[] = {0.4000000059604645f};
  model->setOperandValue(param59, param59_init, sizeof(_Float16) * 1);
  static _Float16 param60_init[] = {1.0f};
  model->setOperandValue(param60, param60_init, sizeof(_Float16) * 1);
  static _Float16 param61_init[] = {0.30000001192092896f};
  model->setOperandValue(param61, param61_init, sizeof(_Float16) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static _Float16 param64_init[] = {2.0f};
  model->setOperandValue(param64, param64_init, sizeof(_Float16) * 1);
  static _Float16 param65_init[] = {2.0f};
  model->setOperandValue(param65, param65_init, sizeof(_Float16) * 1);
  static int32_t param66_init[] = {4};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static int32_t param67_init[] = {4};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param68_init[] = {1};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static int32_t param69_init[] = {1};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static int32_t param70_init[] = {1};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  static int32_t param71_init[] = {2};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  static int32_t param72_init[] = {2};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param55, param56, param57, param58, param59, param60, param61}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param62, param63, param64, param65, param66, param67, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap1, param68, param69, param70, param71, param72, param73, layout}, {out1});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type78(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param55 = model->addOperand(&type12);
  auto param56 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto param59 = model->addOperand(&type13);
  auto param60 = model->addOperand(&type13);
  auto param61 = model->addOperand(&type13);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type14);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type13);
  auto param65 = model->addOperand(&type13);
  auto param66 = model->addOperand(&type2);
  auto param67 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type78);
  auto param68 = model->addOperand(&type2);
  auto param69 = model->addOperand(&type2);
  auto param70 = model->addOperand(&type2);
  auto param71 = model->addOperand(&type2);
  auto param72 = model->addOperand(&type2);
  auto param73 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type78);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {0.3f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static int32_t param57_init[] = {-1};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static float param59_init[] = {0.4f};
  model->setOperandValue(param59, param59_init, sizeof(float) * 1);
  static float param60_init[] = {1.0f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {0.3f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static float param64_init[] = {2.0f};
  model->setOperandValue(param64, param64_init, sizeof(float) * 1);
  static float param65_init[] = {2.0f};
  model->setOperandValue(param65, param65_init, sizeof(float) * 1);
  static int32_t param66_init[] = {4};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static int32_t param67_init[] = {4};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param68_init[] = {1};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static int32_t param69_init[] = {1};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static int32_t param70_init[] = {1};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  static int32_t param71_init[] = {2};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  static int32_t param72_init[] = {2};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param55, param56, param57, param58, param59, param60, param61}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param62, param63, param64, param65, param66, param67, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap1, param68, param69, param70, param71, param72, param73, layout}, {out1});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nchw_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type78(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param55 = model->addOperand(&type12);
  auto param56 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto param59 = model->addOperand(&type13);
  auto param60 = model->addOperand(&type13);
  auto param61 = model->addOperand(&type13);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type14);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type13);
  auto param65 = model->addOperand(&type13);
  auto param66 = model->addOperand(&type2);
  auto param67 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type78);
  auto param68 = model->addOperand(&type2);
  auto param69 = model->addOperand(&type2);
  auto param70 = model->addOperand(&type2);
  auto param71 = model->addOperand(&type2);
  auto param72 = model->addOperand(&type2);
  auto param73 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type17);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {0.3f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static int32_t param57_init[] = {-1};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static float param59_init[] = {0.4f};
  model->setOperandValue(param59, param59_init, sizeof(float) * 1);
  static float param60_init[] = {1.0f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {0.3f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static float param64_init[] = {2.0f};
  model->setOperandValue(param64, param64_init, sizeof(float) * 1);
  static float param65_init[] = {2.0f};
  model->setOperandValue(param65, param65_init, sizeof(float) * 1);
  static int32_t param66_init[] = {4};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static int32_t param67_init[] = {4};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param68_init[] = {1};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static int32_t param69_init[] = {1};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static int32_t param70_init[] = {1};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  static int32_t param71_init[] = {2};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  static int32_t param72_init[] = {2};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param55, param56, param57, param58, param59, param60, param61}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param62, param63, param64, param65, param66, param67, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap1, param68, param69, param70, param71, param72, param73, layout}, {out1});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type78(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param55 = model->addOperand(&type12);
  auto param56 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto param59 = model->addOperand(&type13);
  auto param60 = model->addOperand(&type13);
  auto param61 = model->addOperand(&type13);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type14);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type13);
  auto param65 = model->addOperand(&type13);
  auto param66 = model->addOperand(&type2);
  auto param67 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type78);
  auto param68 = model->addOperand(&type2);
  auto param69 = model->addOperand(&type2);
  auto param70 = model->addOperand(&type2);
  auto param71 = model->addOperand(&type2);
  auto param72 = model->addOperand(&type2);
  auto param73 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type78);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {0.3f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static int32_t param57_init[] = {-1};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static float param59_init[] = {0.4f};
  model->setOperandValue(param59, param59_init, sizeof(float) * 1);
  static float param60_init[] = {1.0f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {0.3f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static float param64_init[] = {2.0f};
  model->setOperandValue(param64, param64_init, sizeof(float) * 1);
  static float param65_init[] = {2.0f};
  model->setOperandValue(param65, param65_init, sizeof(float) * 1);
  static int32_t param66_init[] = {4};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static int32_t param67_init[] = {4};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param68_init[] = {1};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static int32_t param69_init[] = {1};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static int32_t param70_init[] = {1};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  static int32_t param71_init[] = {2};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  static int32_t param72_init[] = {2};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param55, param56, param57, param58, param59, param60, param61}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param62, param63, param64, param65, param66, param67, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap1, param68, param69, param70, param71, param72, param73, layout}, {out1});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nchw_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type78(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param55 = model->addOperand(&type12);
  auto param56 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto param59 = model->addOperand(&type13);
  auto param60 = model->addOperand(&type13);
  auto param61 = model->addOperand(&type13);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type14);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type13);
  auto param65 = model->addOperand(&type13);
  auto param66 = model->addOperand(&type2);
  auto param67 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type78);
  auto param68 = model->addOperand(&type2);
  auto param69 = model->addOperand(&type2);
  auto param70 = model->addOperand(&type2);
  auto param71 = model->addOperand(&type2);
  auto param72 = model->addOperand(&type2);
  auto param73 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type17);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {0.3f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static int32_t param57_init[] = {-1};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static float param59_init[] = {0.4f};
  model->setOperandValue(param59, param59_init, sizeof(float) * 1);
  static float param60_init[] = {1.0f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {0.3f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static float param64_init[] = {2.0f};
  model->setOperandValue(param64, param64_init, sizeof(float) * 1);
  static float param65_init[] = {2.0f};
  model->setOperandValue(param65, param65_init, sizeof(float) * 1);
  static int32_t param66_init[] = {4};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static int32_t param67_init[] = {4};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param68_init[] = {1};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static int32_t param69_init[] = {1};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static int32_t param70_init[] = {1};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  static int32_t param71_init[] = {2};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  static int32_t param72_init[] = {2};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param55, param56, param57, param58, param59, param60, param61}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param62, param63, param64, param65, param66, param67, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap1, param68, param69, param70, param71, param72, param73, layout}, {out1});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type2(Type::INT32, {});
  OperandType type62(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type64(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type65(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type66(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type79(Type::TENSOR_QUANT8_ASYMM, {0, 1, 2, 2}, 0.1f, 128);
  // Phase 1, operands
  auto scores1 = model->addOperand(&type66);
  auto roi1 = model->addOperand(&type64);
  auto param55 = model->addOperand(&type12);
  auto param56 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto param59 = model->addOperand(&type13);
  auto param60 = model->addOperand(&type13);
  auto param61 = model->addOperand(&type13);
  auto scoresOut1 = model->addOperand(&type67);
  auto roiOut1 = model->addOperand(&type65);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type62);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type13);
  auto param65 = model->addOperand(&type13);
  auto param66 = model->addOperand(&type2);
  auto param67 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type79);
  auto param68 = model->addOperand(&type2);
  auto param69 = model->addOperand(&type2);
  auto param70 = model->addOperand(&type2);
  auto param71 = model->addOperand(&type2);
  auto param72 = model->addOperand(&type2);
  auto param73 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type79);
  // Phase 2, operations
  static uint8_t scores1_init[] = {137, 129};
  model->setOperandValue(scores1, scores1_init, sizeof(uint8_t) * 2);
  static uint16_t roi1_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi1, roi1_init, sizeof(uint16_t) * 8);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {0.3f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static int32_t param57_init[] = {-1};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static float param59_init[] = {0.4f};
  model->setOperandValue(param59, param59_init, sizeof(float) * 1);
  static float param60_init[] = {1.0f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {0.3f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static float param64_init[] = {2.0f};
  model->setOperandValue(param64, param64_init, sizeof(float) * 1);
  static float param65_init[] = {2.0f};
  model->setOperandValue(param65, param65_init, sizeof(float) * 1);
  static int32_t param66_init[] = {4};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static int32_t param67_init[] = {4};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param68_init[] = {1};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static int32_t param69_init[] = {1};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static int32_t param70_init[] = {1};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  static int32_t param71_init[] = {2};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  static int32_t param72_init[] = {2};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param55, param56, param57, param58, param59, param60, param61}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param62, param63, param64, param65, param66, param67, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap1, param68, param69, param70, param71, param72, param73, layout}, {out1});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nchw_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type2(Type::INT32, {});
  OperandType type62(Type::TENSOR_QUANT8_ASYMM, {1, 1, 1, 1}, 0.1f, 128);
  OperandType type64(Type::TENSOR_QUANT16_ASYMM, {1, 8}, 0.125f, 0);
  OperandType type65(Type::TENSOR_QUANT16_ASYMM, {0, 4}, 0.125f, 0);
  OperandType type66(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.1f, 128);
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {0}, 0.1f, 128);
  OperandType type68(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 128);
  OperandType type79(Type::TENSOR_QUANT8_ASYMM, {0, 1, 2, 2}, 0.1f, 128);
  // Phase 1, operands
  auto scores1 = model->addOperand(&type66);
  auto roi1 = model->addOperand(&type64);
  auto param55 = model->addOperand(&type12);
  auto param56 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto param59 = model->addOperand(&type13);
  auto param60 = model->addOperand(&type13);
  auto param61 = model->addOperand(&type13);
  auto scoresOut1 = model->addOperand(&type67);
  auto roiOut1 = model->addOperand(&type65);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type62);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type13);
  auto param65 = model->addOperand(&type13);
  auto param66 = model->addOperand(&type2);
  auto param67 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type79);
  auto param68 = model->addOperand(&type2);
  auto param69 = model->addOperand(&type2);
  auto param70 = model->addOperand(&type2);
  auto param71 = model->addOperand(&type2);
  auto param72 = model->addOperand(&type2);
  auto param73 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type68);
  // Phase 2, operations
  static uint8_t scores1_init[] = {137, 129};
  model->setOperandValue(scores1, scores1_init, sizeof(uint8_t) * 2);
  static uint16_t roi1_init[] = {8, 8, 80, 80, 0, 0, 80, 80};
  model->setOperandValue(roi1, roi1_init, sizeof(uint16_t) * 8);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static float param56_init[] = {0.3f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static int32_t param57_init[] = {-1};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static float param59_init[] = {0.4f};
  model->setOperandValue(param59, param59_init, sizeof(float) * 1);
  static float param60_init[] = {1.0f};
  model->setOperandValue(param60, param60_init, sizeof(float) * 1);
  static float param61_init[] = {0.3f};
  model->setOperandValue(param61, param61_init, sizeof(float) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static float param64_init[] = {2.0f};
  model->setOperandValue(param64, param64_init, sizeof(float) * 1);
  static float param65_init[] = {2.0f};
  model->setOperandValue(param65, param65_init, sizeof(float) * 1);
  static int32_t param66_init[] = {4};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static int32_t param67_init[] = {4};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param68_init[] = {1};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static int32_t param69_init[] = {1};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static int32_t param70_init[] = {1};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  static int32_t param71_init[] = {2};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  static int32_t param72_init[] = {2};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param55, param56, param57, param58, param59, param60, param61}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param62, param63, param64, param65, param66, param67, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap1, param68, param69, param70, param71, param72, param73, layout}, {out1});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type70(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type72(Type::FLOAT16, {});
  OperandType type73(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type74(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type75(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type76(Type::TENSOR_FLOAT16, {0});
  OperandType type80(Type::TENSOR_FLOAT16, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type75);
  auto roi1 = model->addOperand(&type73);
  auto param55 = model->addOperand(&type12);
  auto param56 = model->addOperand(&type72);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto param59 = model->addOperand(&type72);
  auto param60 = model->addOperand(&type72);
  auto param61 = model->addOperand(&type72);
  auto scoresOut1 = model->addOperand(&type76);
  auto roiOut1 = model->addOperand(&type74);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type70);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type72);
  auto param65 = model->addOperand(&type72);
  auto param66 = model->addOperand(&type2);
  auto param67 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type80);
  auto param68 = model->addOperand(&type2);
  auto param69 = model->addOperand(&type2);
  auto param70 = model->addOperand(&type2);
  auto param71 = model->addOperand(&type2);
  auto param72 = model->addOperand(&type2);
  auto param73 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type80);
  // Phase 2, operations
  static _Float16 scores1_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores1, scores1_init, sizeof(_Float16) * 2);
  static _Float16 roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(_Float16) * 8);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static _Float16 param56_init[] = {0.30000001192092896f};
  model->setOperandValue(param56, param56_init, sizeof(_Float16) * 1);
  static int32_t param57_init[] = {-1};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static _Float16 param59_init[] = {0.4000000059604645f};
  model->setOperandValue(param59, param59_init, sizeof(_Float16) * 1);
  static _Float16 param60_init[] = {1.0f};
  model->setOperandValue(param60, param60_init, sizeof(_Float16) * 1);
  static _Float16 param61_init[] = {0.30000001192092896f};
  model->setOperandValue(param61, param61_init, sizeof(_Float16) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static _Float16 param64_init[] = {2.0f};
  model->setOperandValue(param64, param64_init, sizeof(_Float16) * 1);
  static _Float16 param65_init[] = {2.0f};
  model->setOperandValue(param65, param65_init, sizeof(_Float16) * 1);
  static int32_t param66_init[] = {4};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static int32_t param67_init[] = {4};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param68_init[] = {1};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static int32_t param69_init[] = {1};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static int32_t param70_init[] = {1};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  static int32_t param71_init[] = {2};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  static int32_t param72_init[] = {2};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param55, param56, param57, param58, param59, param60, param61}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param62, param63, param64, param65, param66, param67, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap1, param68, param69, param70, param71, param72, param73, layout}, {out1});
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

} // namespace generated_tests::max_pool_v1_2
namespace generated_tests::max_pool_v1_2 {

void CreateModel_zero_sized_nchw_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type70(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type72(Type::FLOAT16, {});
  OperandType type73(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type74(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type75(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type77(Type::TENSOR_FLOAT16, {0});
  OperandType type80(Type::TENSOR_FLOAT16, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type75);
  auto roi1 = model->addOperand(&type73);
  auto param55 = model->addOperand(&type12);
  auto param56 = model->addOperand(&type72);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto param59 = model->addOperand(&type72);
  auto param60 = model->addOperand(&type72);
  auto param61 = model->addOperand(&type72);
  auto scoresOut1 = model->addOperand(&type77);
  auto roiOut1 = model->addOperand(&type74);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type70);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type72);
  auto param65 = model->addOperand(&type72);
  auto param66 = model->addOperand(&type2);
  auto param67 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type80);
  auto param68 = model->addOperand(&type2);
  auto param69 = model->addOperand(&type2);
  auto param70 = model->addOperand(&type2);
  auto param71 = model->addOperand(&type2);
  auto param72 = model->addOperand(&type2);
  auto param73 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type23);
  // Phase 2, operations
  static _Float16 scores1_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores1, scores1_init, sizeof(_Float16) * 2);
  static _Float16 roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(_Float16) * 8);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  static _Float16 param56_init[] = {0.30000001192092896f};
  model->setOperandValue(param56, param56_init, sizeof(_Float16) * 1);
  static int32_t param57_init[] = {-1};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static _Float16 param59_init[] = {0.4000000059604645f};
  model->setOperandValue(param59, param59_init, sizeof(_Float16) * 1);
  static _Float16 param60_init[] = {1.0f};
  model->setOperandValue(param60, param60_init, sizeof(_Float16) * 1);
  static _Float16 param61_init[] = {0.30000001192092896f};
  model->setOperandValue(param61, param61_init, sizeof(_Float16) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static _Float16 param64_init[] = {2.0f};
  model->setOperandValue(param64, param64_init, sizeof(_Float16) * 1);
  static _Float16 param65_init[] = {2.0f};
  model->setOperandValue(param65, param65_init, sizeof(_Float16) * 1);
  static int32_t param66_init[] = {4};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  static int32_t param67_init[] = {4};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param68_init[] = {1};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  static int32_t param69_init[] = {1};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  static int32_t param70_init[] = {1};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  static int32_t param71_init[] = {2};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  static int32_t param72_init[] = {2};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param55, param56, param57, param58, param59, param60, param61}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param62, param63, param64, param65, param66, param67, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_MAX_POOL_2D, {featureMap1, param68, param69, param70, param71, param72, param73, layout}, {out1});
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

} // namespace generated_tests::max_pool_v1_2
