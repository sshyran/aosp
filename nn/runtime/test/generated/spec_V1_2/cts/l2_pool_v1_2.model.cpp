// Generated from l2_pool_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::l2_pool_v1_2 {

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
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

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
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

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
  auto param65 = model->addOperand(&type2);
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
  static int32_t param65_init[] = {0};
  model->setOperandValue(param65, param65_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param65}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

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
  auto param66 = model->addOperand(&type2);
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
  static int32_t param66_init[] = {0};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param66}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
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
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
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
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type2(Type::INT32, {});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
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
  auto op1_tmp = model->addOperand(&type21);
  auto dummy2 = model->addOperand(&type22);
  auto param67 = model->addOperand(&type2);
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
  static _Float16 dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(_Float16) * 1);
  static int32_t param67_init[] = {0};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy2, param67}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
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
  auto op1_tmp = model->addOperand(&type21);
  auto dummy3 = model->addOperand(&type22);
  auto param68 = model->addOperand(&type2);
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
  static _Float16 dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(_Float16) * 1);
  static int32_t param68_init[] = {0};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy3, param68}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

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
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

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
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

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
  auto dummy4 = model->addOperand(&type18);
  auto param69 = model->addOperand(&type2);
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
  static float dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(float) * 1);
  static int32_t param69_init[] = {0};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy4, param69}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

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
  auto dummy5 = model->addOperand(&type18);
  auto param70 = model->addOperand(&type2);
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
  static float dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(float) * 1);
  static int32_t param70_init[] = {0};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy5, param70}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_relaxed_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
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
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_relaxed_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
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
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_relaxed_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type2(Type::INT32, {});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
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
  auto op1_tmp = model->addOperand(&type21);
  auto dummy6 = model->addOperand(&type22);
  auto param71 = model->addOperand(&type2);
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
  static int32_t param71_init[] = {0};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy6, param71}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_relaxed_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type21(Type::TENSOR_FLOAT16, {1, 2, 2, 1});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  // Phase 1, operands
  auto op1 = model->addOperand(&type21);
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
  auto op1_tmp = model->addOperand(&type21);
  auto dummy7 = model->addOperand(&type22);
  auto param72 = model->addOperand(&type2);
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
  static int32_t param72_init[] = {0};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy7, param72}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
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
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
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
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
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
  auto op1_tmp = model->addOperand(&type23);
  auto dummy8 = model->addOperand(&type18);
  auto param73 = model->addOperand(&type2);
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
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy8, param73}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
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
  auto op1_tmp = model->addOperand(&type23);
  auto dummy9 = model->addOperand(&type18);
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
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param74_init[] = {0};
  model->setOperandValue(param74, param74_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy9, param74}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
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
  auto op4 = model->addOperand(&type24);
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
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
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
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
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
  auto op4 = model->addOperand(&type24);
  auto op1_tmp = model->addOperand(&type25);
  auto dummy10 = model->addOperand(&type22);
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
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(_Float16) * 1);
  static int32_t param75_init[] = {0};
  model->setOperandValue(param75, param75_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy10, param75}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
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
  auto op1_tmp = model->addOperand(&type25);
  auto dummy11 = model->addOperand(&type22);
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
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(_Float16) * 1);
  static int32_t param76_init[] = {0};
  model->setOperandValue(param76, param76_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy11, param76}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
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
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
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
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
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
  auto op1_tmp = model->addOperand(&type23);
  auto dummy12 = model->addOperand(&type18);
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
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(float) * 1);
  static int32_t param77_init[] = {0};
  model->setOperandValue(param77, param77_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy12, param77}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type23(Type::TENSOR_FLOAT32, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type23);
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
  auto op1_tmp = model->addOperand(&type23);
  auto dummy13 = model->addOperand(&type18);
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
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(float) * 1);
  static int32_t param78_init[] = {0};
  model->setOperandValue(param78, param78_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy13, param78}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_relaxed_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
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
  auto op4 = model->addOperand(&type24);
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
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_relaxed_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
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
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_relaxed_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type24(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
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
  auto op4 = model->addOperand(&type24);
  auto op1_tmp = model->addOperand(&type25);
  auto dummy14 = model->addOperand(&type22);
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
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(_Float16) * 1);
  static int32_t param79_init[] = {0};
  model->setOperandValue(param79, param79_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy14, param79}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_relaxed_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type25(Type::TENSOR_FLOAT16, {1, 1, 2, 2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type25);
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
  auto op1_tmp = model->addOperand(&type25);
  auto dummy15 = model->addOperand(&type22);
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
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(_Float16) * 1);
  static int32_t param80_init[] = {0};
  model->setOperandValue(param80, param80_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy15, param80}, {op1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op1, param, param1, param2, param3, param4, param5, param6, param7, param8, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type4);
  auto op11_tmp = model->addOperand(&type3);
  auto dummy16 = model->addOperand(&type18);
  auto param81 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(float) * 1);
  static int32_t param81_init[] = {0};
  model->setOperandValue(param81, param81_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy16, param81}, {op11});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type17);
  auto op11_tmp = model->addOperand(&type3);
  auto dummy17 = model->addOperand(&type18);
  auto param82 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(float) * 1);
  static int32_t param82_init[] = {0};
  model->setOperandValue(param82, param82_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy17, param82}, {op11});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 2, 4, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {1, 1, 2, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type26);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 2, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type26);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type27(Type::TENSOR_FLOAT16, {1, 1, 2, 1});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type27);
  auto op11_tmp = model->addOperand(&type28);
  auto dummy18 = model->addOperand(&type22);
  auto param83 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(_Float16) * 1);
  static int32_t param83_init[] = {0};
  model->setOperandValue(param83, param83_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy18, param83}, {op11});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type20);
  auto op11_tmp = model->addOperand(&type28);
  auto dummy19 = model->addOperand(&type22);
  auto param84 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(_Float16) * 1);
  static int32_t param84_init[] = {0};
  model->setOperandValue(param84, param84_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy19, param84}, {op11});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  OperandType type4(Type::TENSOR_FLOAT32, {1, 1, 2, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type4);
  auto op11_tmp = model->addOperand(&type3);
  auto dummy20 = model->addOperand(&type18);
  auto param85 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(float) * 1);
  static int32_t param85_init[] = {0};
  model->setOperandValue(param85, param85_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy20, param85}, {op11});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type3);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type17);
  auto op11_tmp = model->addOperand(&type3);
  auto dummy21 = model->addOperand(&type18);
  auto param86 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(float) * 1);
  static int32_t param86_init[] = {0};
  model->setOperandValue(param86, param86_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy21, param86}, {op11});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_relaxed_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 2, 4, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {1, 1, 2, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type26);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_relaxed_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 2, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type26);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_relaxed_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type27(Type::TENSOR_FLOAT16, {1, 1, 2, 1});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type27);
  auto op11_tmp = model->addOperand(&type28);
  auto dummy22 = model->addOperand(&type22);
  auto param87 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(_Float16) * 1);
  static int32_t param87_init[] = {0};
  model->setOperandValue(param87, param87_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy22, param87}, {op11});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nhwc_relaxed_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 2, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type20);
  auto op11_tmp = model->addOperand(&type28);
  auto dummy23 = model->addOperand(&type22);
  auto param88 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(_Float16) * 1);
  static int32_t param88_init[] = {0};
  model->setOperandValue(param88, param88_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy23, param88}, {op11});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 1, 2, 4});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 1, 2, 4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 1, 2, 4});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type30);
  auto op11_tmp = model->addOperand(&type29);
  auto dummy24 = model->addOperand(&type18);
  auto param89 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(float) * 1);
  static int32_t param89_init[] = {0};
  model->setOperandValue(param89, param89_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy24, param89}, {op11});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 1, 2, 4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type17);
  auto op11_tmp = model->addOperand(&type29);
  auto dummy25 = model->addOperand(&type18);
  auto param90 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(float) * 1);
  static int32_t param90_init[] = {0};
  model->setOperandValue(param90, param90_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy25, param90}, {op11});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 1, 2, 4});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 1, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type31);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 1, 2, 4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type31);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 1, 2});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type32);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy26 = model->addOperand(&type22);
  auto param91 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(_Float16) * 1);
  static int32_t param91_init[] = {0};
  model->setOperandValue(param91, param91_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy26, param91}, {op11});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type20);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy27 = model->addOperand(&type22);
  auto param92 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(_Float16) * 1);
  static int32_t param92_init[] = {0};
  model->setOperandValue(param92, param92_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy27, param92}, {op11});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 1, 2, 4});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 1, 2, 4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 1, 2, 4});
  OperandType type30(Type::TENSOR_FLOAT32, {1, 1, 1, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type30);
  auto op11_tmp = model->addOperand(&type29);
  auto dummy28 = model->addOperand(&type18);
  auto param93 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy28_init[] = {0.0f};
  model->setOperandValue(dummy28, dummy28_init, sizeof(float) * 1);
  static int32_t param93_init[] = {0};
  model->setOperandValue(param93, param93_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy28, param93}, {op11});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type29(Type::TENSOR_FLOAT32, {1, 1, 2, 4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type17);
  auto op11_tmp = model->addOperand(&type29);
  auto dummy29 = model->addOperand(&type18);
  auto param94 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy29_init[] = {0.0f};
  model->setOperandValue(dummy29, dummy29_init, sizeof(float) * 1);
  static int32_t param94_init[] = {0};
  model->setOperandValue(param94, param94_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy29, param94}, {op11});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_relaxed_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 1, 2, 4});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 1, 2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type31);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type32);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_relaxed_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type31(Type::TENSOR_FLOAT16, {1, 1, 2, 4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type31);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_relaxed_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type32(Type::TENSOR_FLOAT16, {1, 1, 1, 2});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type32);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy30 = model->addOperand(&type22);
  auto param95 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy30_init[] = {0.0f};
  model->setOperandValue(dummy30, dummy30_init, sizeof(_Float16) * 1);
  static int32_t param95_init[] = {0};
  model->setOperandValue(param95, param95_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy30, param95}, {op11});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_nchw_relaxed_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type33(Type::TENSOR_FLOAT16, {1, 1, 2, 4});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param9 = model->addOperand(&type2);
  auto param10 = model->addOperand(&type2);
  auto param11 = model->addOperand(&type2);
  auto param12 = model->addOperand(&type2);
  auto param13 = model->addOperand(&type2);
  auto param14 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type20);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy31 = model->addOperand(&type22);
  auto param96 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param9_init[] = {1};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  static int32_t param10_init[] = {2};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {2};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  static int32_t param12_init[] = {2};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {2};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy31_init[] = {0.0f};
  model->setOperandValue(dummy31, dummy31_init, sizeof(_Float16) * 1);
  static int32_t param96_init[] = {0};
  model->setOperandValue(param96, param96_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy31, param96}, {op11});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op11, param9, param10, param11, param12, param13, param14, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type5);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_large_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nhwc_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type5);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_large_nhwc_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nhwc_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type5);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type6);
  auto op12_tmp = model->addOperand(&type5);
  auto dummy32 = model->addOperand(&type18);
  auto param97 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy32_init[] = {0.0f};
  model->setOperandValue(dummy32, dummy32_init, sizeof(float) * 1);
  static int32_t param97_init[] = {0};
  model->setOperandValue(param97, param97_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy32, param97}, {op12});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_large_nhwc_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type5);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type17);
  auto op12_tmp = model->addOperand(&type5);
  auto dummy33 = model->addOperand(&type18);
  auto param98 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy33_init[] = {0.0f};
  model->setOperandValue(dummy33, dummy33_init, sizeof(float) * 1);
  static int32_t param98_init[] = {0};
  model->setOperandValue(param98, param98_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy33, param98}, {op12});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_large_nhwc_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1, 2, 2, 3});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 1, 1, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type34);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_large_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::TENSOR_FLOAT16, {1, 2, 2, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type34);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_large_nhwc_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nhwc_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 1, 1, 3});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 2, 2, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type36);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type35);
  auto op12_tmp = model->addOperand(&type36);
  auto dummy34 = model->addOperand(&type22);
  auto param99 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy34_init[] = {0.0f};
  model->setOperandValue(dummy34, dummy34_init, sizeof(_Float16) * 1);
  static int32_t param99_init[] = {0};
  model->setOperandValue(param99, param99_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy34, param99}, {op12});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_large_nhwc_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 2, 2, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type36);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type20);
  auto op12_tmp = model->addOperand(&type36);
  auto dummy35 = model->addOperand(&type22);
  auto param100 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy35_init[] = {0.0f};
  model->setOperandValue(dummy35, dummy35_init, sizeof(_Float16) * 1);
  static int32_t param100_init[] = {0};
  model->setOperandValue(param100, param100_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy35, param100}, {op12});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type5);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_large_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nhwc_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type5);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_large_nhwc_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nhwc_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 3});
  OperandType type6(Type::TENSOR_FLOAT32, {1, 1, 1, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type5);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type6);
  auto op12_tmp = model->addOperand(&type5);
  auto dummy36 = model->addOperand(&type18);
  auto param101 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy36_init[] = {0.0f};
  model->setOperandValue(dummy36, dummy36_init, sizeof(float) * 1);
  static int32_t param101_init[] = {0};
  model->setOperandValue(param101, param101_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy36, param101}, {op12});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_large_nhwc_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 2, 2, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type5);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type17);
  auto op12_tmp = model->addOperand(&type5);
  auto dummy37 = model->addOperand(&type18);
  auto param102 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy37_init[] = {0.0f};
  model->setOperandValue(dummy37, dummy37_init, sizeof(float) * 1);
  static int32_t param102_init[] = {0};
  model->setOperandValue(param102, param102_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy37, param102}, {op12});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nhwc_relaxed_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type34(Type::TENSOR_FLOAT16, {1, 2, 2, 3});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 1, 1, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type34);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type35);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_large_nhwc_relaxed_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nhwc_relaxed_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type34(Type::TENSOR_FLOAT16, {1, 2, 2, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type34);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_large_nhwc_relaxed_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nhwc_relaxed_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 1, 1, 3});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 2, 2, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type36);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type35);
  auto op12_tmp = model->addOperand(&type36);
  auto dummy38 = model->addOperand(&type22);
  auto param103 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy38_init[] = {0.0f};
  model->setOperandValue(dummy38, dummy38_init, sizeof(_Float16) * 1);
  static int32_t param103_init[] = {0};
  model->setOperandValue(param103, param103_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy38, param103}, {op12});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_large_nhwc_relaxed_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nhwc_relaxed_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type36(Type::TENSOR_FLOAT16, {1, 2, 2, 3});
  // Phase 1, operands
  auto op12 = model->addOperand(&type36);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type20);
  auto op12_tmp = model->addOperand(&type36);
  auto dummy39 = model->addOperand(&type22);
  auto param104 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy39_init[] = {0.0f};
  model->setOperandValue(dummy39, dummy39_init, sizeof(_Float16) * 1);
  static int32_t param104_init[] = {0};
  model->setOperandValue(param104, param104_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy39, param104}, {op12});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_large_nhwc_relaxed_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 3, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {1, 3, 1, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type37);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type38);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_large_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 3, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type37);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_large_nchw_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nchw_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 3, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {1, 3, 1, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type37);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type38);
  auto op12_tmp = model->addOperand(&type37);
  auto dummy40 = model->addOperand(&type18);
  auto param105 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy40_init[] = {0.0f};
  model->setOperandValue(dummy40, dummy40_init, sizeof(float) * 1);
  static int32_t param105_init[] = {0};
  model->setOperandValue(param105, param105_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy40, param105}, {op12});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_large_nchw_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 3, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type37);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type17);
  auto op12_tmp = model->addOperand(&type37);
  auto dummy41 = model->addOperand(&type18);
  auto param106 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy41_init[] = {0.0f};
  model->setOperandValue(dummy41, dummy41_init, sizeof(float) * 1);
  static int32_t param106_init[] = {0};
  model->setOperandValue(param106, param106_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy41, param106}, {op12});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_large_nchw_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 3, 2, 2});
  OperandType type40(Type::TENSOR_FLOAT16, {1, 3, 1, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type39);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_large_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 3, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type39);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  assert(model->isValid());
}

bool is_ignored_large_nchw_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nchw_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type40(Type::TENSOR_FLOAT16, {1, 3, 1, 1});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 3, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type41);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type40);
  auto op12_tmp = model->addOperand(&type41);
  auto dummy42 = model->addOperand(&type22);
  auto param107 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy42_init[] = {0.0f};
  model->setOperandValue(dummy42, dummy42_init, sizeof(_Float16) * 1);
  static int32_t param107_init[] = {0};
  model->setOperandValue(param107, param107_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy42, param107}, {op12});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_large_nchw_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 3, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type41);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type20);
  auto op12_tmp = model->addOperand(&type41);
  auto dummy43 = model->addOperand(&type22);
  auto param108 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy43_init[] = {0.0f};
  model->setOperandValue(dummy43, dummy43_init, sizeof(_Float16) * 1);
  static int32_t param108_init[] = {0};
  model->setOperandValue(param108, param108_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy43, param108}, {op12});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 3, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {1, 3, 1, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type37);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type38);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_large_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 3, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type37);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type17);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_large_nchw_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nchw_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 3, 2, 2});
  OperandType type38(Type::TENSOR_FLOAT32, {1, 3, 1, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type37);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type38);
  auto op12_tmp = model->addOperand(&type37);
  auto dummy44 = model->addOperand(&type18);
  auto param109 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy44_init[] = {0.0f};
  model->setOperandValue(dummy44, dummy44_init, sizeof(float) * 1);
  static int32_t param109_init[] = {0};
  model->setOperandValue(param109, param109_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy44, param109}, {op12});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_large_nchw_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type37(Type::TENSOR_FLOAT32, {1, 3, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type37);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type17);
  auto op12_tmp = model->addOperand(&type37);
  auto dummy45 = model->addOperand(&type18);
  auto param110 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy45_init[] = {0.0f};
  model->setOperandValue(dummy45, dummy45_init, sizeof(float) * 1);
  static int32_t param110_init[] = {0};
  model->setOperandValue(param110, param110_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy45, param110}, {op12});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nchw_relaxed_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 3, 2, 2});
  OperandType type40(Type::TENSOR_FLOAT16, {1, 3, 1, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type39);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type40);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_large_nchw_relaxed_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nchw_relaxed_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type39(Type::TENSOR_FLOAT16, {1, 3, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type39);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_large_nchw_relaxed_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nchw_relaxed_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type40(Type::TENSOR_FLOAT16, {1, 3, 1, 1});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 3, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type41);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type40);
  auto op12_tmp = model->addOperand(&type41);
  auto dummy46 = model->addOperand(&type22);
  auto param111 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy46_init[] = {0.0f};
  model->setOperandValue(dummy46, dummy46_init, sizeof(_Float16) * 1);
  static int32_t param111_init[] = {0};
  model->setOperandValue(param111, param111_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy46, param111}, {op12});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_large_nchw_relaxed_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_large_nchw_relaxed_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type22(Type::TENSOR_FLOAT16, {1});
  OperandType type41(Type::TENSOR_FLOAT16, {1, 3, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type41);
  auto param15 = model->addOperand(&type2);
  auto param16 = model->addOperand(&type2);
  auto param17 = model->addOperand(&type2);
  auto param18 = model->addOperand(&type2);
  auto param19 = model->addOperand(&type2);
  auto param20 = model->addOperand(&type2);
  auto param21 = model->addOperand(&type2);
  auto param22 = model->addOperand(&type2);
  auto param23 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type20);
  auto op12_tmp = model->addOperand(&type41);
  auto dummy47 = model->addOperand(&type22);
  auto param112 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  static int32_t param19_init[] = {1};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  static int32_t param20_init[] = {1};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  static int32_t param21_init[] = {2};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  static int32_t param22_init[] = {2};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy47_init[] = {0.0f};
  model->setOperandValue(dummy47, dummy47_init, sizeof(_Float16) * 1);
  static int32_t param112_init[] = {0};
  model->setOperandValue(param112, param112_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy47, param112}, {op12});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {op12, param15, param16, param17, param18, param19, param20, param21, param22, param23, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_large_nchw_relaxed_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

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
  auto param24 = model->addOperand(&type12);
  auto param25 = model->addOperand(&type13);
  auto param26 = model->addOperand(&type2);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type13);
  auto param29 = model->addOperand(&type13);
  auto param30 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type14);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto param33 = model->addOperand(&type13);
  auto param34 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type15);
  auto param37 = model->addOperand(&type2);
  auto param38 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type2);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type2);
  auto param43 = model->addOperand(&type2);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto out = model->addOperand(&type16);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static float param25_init[] = {0.3f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {-1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float param28_init[] = {0.4f};
  model->setOperandValue(param28, param28_init, sizeof(float) * 1);
  static float param29_init[] = {1.0f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static float param30_init[] = {0.3f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float param33_init[] = {2.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {4};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {1};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {1};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {2};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {2};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param24, param25, param26, param27, param28, param29, param30}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param31, param32, param33, param34, param35, param36, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap, param37, param38, param39, param40, param41, param42, param43, param44, param45, layout}, {out});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

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
  auto param24 = model->addOperand(&type12);
  auto param25 = model->addOperand(&type13);
  auto param26 = model->addOperand(&type2);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type13);
  auto param29 = model->addOperand(&type13);
  auto param30 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type14);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto param33 = model->addOperand(&type13);
  auto param34 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type15);
  auto param37 = model->addOperand(&type2);
  auto param38 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type2);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type2);
  auto param43 = model->addOperand(&type2);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto out = model->addOperand(&type17);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static float param25_init[] = {0.3f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {-1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float param28_init[] = {0.4f};
  model->setOperandValue(param28, param28_init, sizeof(float) * 1);
  static float param29_init[] = {1.0f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static float param30_init[] = {0.3f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float param33_init[] = {2.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {4};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {1};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {1};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {2};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {2};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param24, param25, param26, param27, param28, param29, param30}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param31, param32, param33, param34, param35, param36, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap, param37, param38, param39, param40, param41, param42, param43, param44, param45, layout}, {out});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

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
  auto param24 = model->addOperand(&type12);
  auto param25 = model->addOperand(&type13);
  auto param26 = model->addOperand(&type2);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type13);
  auto param29 = model->addOperand(&type13);
  auto param30 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type14);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto param33 = model->addOperand(&type13);
  auto param34 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type15);
  auto param37 = model->addOperand(&type2);
  auto param38 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type2);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type2);
  auto param43 = model->addOperand(&type2);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto out = model->addOperand(&type16);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static float param25_init[] = {0.3f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {-1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float param28_init[] = {0.4f};
  model->setOperandValue(param28, param28_init, sizeof(float) * 1);
  static float param29_init[] = {1.0f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static float param30_init[] = {0.3f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float param33_init[] = {2.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {4};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {1};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {1};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {2};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {2};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param24, param25, param26, param27, param28, param29, param30}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param31, param32, param33, param34, param35, param36, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap, param37, param38, param39, param40, param41, param42, param43, param44, param45, layout}, {out});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

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
  auto param24 = model->addOperand(&type12);
  auto param25 = model->addOperand(&type13);
  auto param26 = model->addOperand(&type2);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type13);
  auto param29 = model->addOperand(&type13);
  auto param30 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type14);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto param33 = model->addOperand(&type13);
  auto param34 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type15);
  auto param37 = model->addOperand(&type2);
  auto param38 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type2);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type2);
  auto param43 = model->addOperand(&type2);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto out = model->addOperand(&type17);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static float param25_init[] = {0.3f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {-1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float param28_init[] = {0.4f};
  model->setOperandValue(param28, param28_init, sizeof(float) * 1);
  static float param29_init[] = {1.0f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static float param30_init[] = {0.3f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float param33_init[] = {2.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {4};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {1};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {1};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {2};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {2};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param24, param25, param26, param27, param28, param29, param30}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param31, param32, param33, param34, param35, param36, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap, param37, param38, param39, param40, param41, param42, param43, param44, param45, layout}, {out});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_zero_sized_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type44(Type::TENSOR_FLOAT16, {0, 1, 1, 1});
  OperandType type45(Type::FLOAT16, {});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type47(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type48(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type49(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type48);
  auto roi = model->addOperand(&type46);
  auto param24 = model->addOperand(&type12);
  auto param25 = model->addOperand(&type45);
  auto param26 = model->addOperand(&type2);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type45);
  auto param29 = model->addOperand(&type45);
  auto param30 = model->addOperand(&type45);
  auto scoresOut = model->addOperand(&type49);
  auto roiOut = model->addOperand(&type47);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type43);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto param33 = model->addOperand(&type45);
  auto param34 = model->addOperand(&type45);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type42);
  auto param37 = model->addOperand(&type2);
  auto param38 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type2);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type2);
  auto param43 = model->addOperand(&type2);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto out = model->addOperand(&type44);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static _Float16 param25_init[] = {0.30000001192092896f};
  model->setOperandValue(param25, param25_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {-1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static _Float16 param28_init[] = {0.4000000059604645f};
  model->setOperandValue(param28, param28_init, sizeof(_Float16) * 1);
  static _Float16 param29_init[] = {1.0f};
  model->setOperandValue(param29, param29_init, sizeof(_Float16) * 1);
  static _Float16 param30_init[] = {0.30000001192092896f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static _Float16 param33_init[] = {2.0f};
  model->setOperandValue(param33, param33_init, sizeof(_Float16) * 1);
  static _Float16 param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(_Float16) * 1);
  static int32_t param35_init[] = {4};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {1};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {1};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {2};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {2};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param24, param25, param26, param27, param28, param29, param30}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param31, param32, param33, param34, param35, param36, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap, param37, param38, param39, param40, param41, param42, param43, param44, param45, layout}, {out});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_zero_sized_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type42(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type45(Type::FLOAT16, {});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type47(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type48(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type50(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type48);
  auto roi = model->addOperand(&type46);
  auto param24 = model->addOperand(&type12);
  auto param25 = model->addOperand(&type45);
  auto param26 = model->addOperand(&type2);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type45);
  auto param29 = model->addOperand(&type45);
  auto param30 = model->addOperand(&type45);
  auto scoresOut = model->addOperand(&type50);
  auto roiOut = model->addOperand(&type47);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type43);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto param33 = model->addOperand(&type45);
  auto param34 = model->addOperand(&type45);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type42);
  auto param37 = model->addOperand(&type2);
  auto param38 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type2);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type2);
  auto param43 = model->addOperand(&type2);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto out = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static _Float16 param25_init[] = {0.30000001192092896f};
  model->setOperandValue(param25, param25_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {-1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static _Float16 param28_init[] = {0.4000000059604645f};
  model->setOperandValue(param28, param28_init, sizeof(_Float16) * 1);
  static _Float16 param29_init[] = {1.0f};
  model->setOperandValue(param29, param29_init, sizeof(_Float16) * 1);
  static _Float16 param30_init[] = {0.30000001192092896f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static _Float16 param33_init[] = {2.0f};
  model->setOperandValue(param33, param33_init, sizeof(_Float16) * 1);
  static _Float16 param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(_Float16) * 1);
  static int32_t param35_init[] = {4};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {1};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {1};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {2};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {2};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param24, param25, param26, param27, param28, param29, param30}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param31, param32, param33, param34, param35, param36, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap, param37, param38, param39, param40, param41, param42, param43, param44, param45, layout}, {out});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_zero_sized_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 1, 1, 1});
  OperandType type2(Type::INT32, {});
  OperandType type51(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param24 = model->addOperand(&type12);
  auto param25 = model->addOperand(&type13);
  auto param26 = model->addOperand(&type2);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type13);
  auto param29 = model->addOperand(&type13);
  auto param30 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type14);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto param33 = model->addOperand(&type13);
  auto param34 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type51);
  auto param37 = model->addOperand(&type2);
  auto param38 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type2);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type2);
  auto param43 = model->addOperand(&type2);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto out = model->addOperand(&type16);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static float param25_init[] = {0.3f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {-1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float param28_init[] = {0.4f};
  model->setOperandValue(param28, param28_init, sizeof(float) * 1);
  static float param29_init[] = {1.0f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static float param30_init[] = {0.3f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float param33_init[] = {2.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {4};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {1};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {1};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {2};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {2};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param24, param25, param26, param27, param28, param29, param30}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param31, param32, param33, param34, param35, param36, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap, param37, param38, param39, param40, param41, param42, param43, param44, param45, layout}, {out});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_zero_sized_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type51(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param24 = model->addOperand(&type12);
  auto param25 = model->addOperand(&type13);
  auto param26 = model->addOperand(&type2);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type13);
  auto param29 = model->addOperand(&type13);
  auto param30 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type14);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto param33 = model->addOperand(&type13);
  auto param34 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type51);
  auto param37 = model->addOperand(&type2);
  auto param38 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type2);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type2);
  auto param43 = model->addOperand(&type2);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto out = model->addOperand(&type17);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static float param25_init[] = {0.3f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {-1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float param28_init[] = {0.4f};
  model->setOperandValue(param28, param28_init, sizeof(float) * 1);
  static float param29_init[] = {1.0f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static float param30_init[] = {0.3f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float param33_init[] = {2.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {4};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {1};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {1};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {2};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {2};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param24, param25, param26, param27, param28, param29, param30}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param31, param32, param33, param34, param35, param36, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap, param37, param38, param39, param40, param41, param42, param43, param44, param45, layout}, {out});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_zero_sized_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type16(Type::TENSOR_FLOAT32, {0, 1, 1, 1});
  OperandType type2(Type::INT32, {});
  OperandType type51(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param24 = model->addOperand(&type12);
  auto param25 = model->addOperand(&type13);
  auto param26 = model->addOperand(&type2);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type13);
  auto param29 = model->addOperand(&type13);
  auto param30 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type14);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto param33 = model->addOperand(&type13);
  auto param34 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type51);
  auto param37 = model->addOperand(&type2);
  auto param38 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type2);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type2);
  auto param43 = model->addOperand(&type2);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto out = model->addOperand(&type16);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static float param25_init[] = {0.3f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {-1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float param28_init[] = {0.4f};
  model->setOperandValue(param28, param28_init, sizeof(float) * 1);
  static float param29_init[] = {1.0f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static float param30_init[] = {0.3f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float param33_init[] = {2.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {4};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {1};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {1};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {2};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {2};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param24, param25, param26, param27, param28, param29, param30}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param31, param32, param33, param34, param35, param36, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap, param37, param38, param39, param40, param41, param42, param43, param44, param45, layout}, {out});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_zero_sized_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type51(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores = model->addOperand(&type7);
  auto roi = model->addOperand(&type8);
  auto param24 = model->addOperand(&type12);
  auto param25 = model->addOperand(&type13);
  auto param26 = model->addOperand(&type2);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type13);
  auto param29 = model->addOperand(&type13);
  auto param30 = model->addOperand(&type13);
  auto scoresOut = model->addOperand(&type9);
  auto roiOut = model->addOperand(&type11);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type14);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto param33 = model->addOperand(&type13);
  auto param34 = model->addOperand(&type13);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type51);
  auto param37 = model->addOperand(&type2);
  auto param38 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type2);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type2);
  auto param43 = model->addOperand(&type2);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto out = model->addOperand(&type17);
  // Phase 2, operations
  static float scores_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores, scores_init, sizeof(float) * 2);
  static float roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(float) * 8);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static float param25_init[] = {0.3f};
  model->setOperandValue(param25, param25_init, sizeof(float) * 1);
  static int32_t param26_init[] = {-1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static float param28_init[] = {0.4f};
  model->setOperandValue(param28, param28_init, sizeof(float) * 1);
  static float param29_init[] = {1.0f};
  model->setOperandValue(param29, param29_init, sizeof(float) * 1);
  static float param30_init[] = {0.3f};
  model->setOperandValue(param30, param30_init, sizeof(float) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static float param33_init[] = {2.0f};
  model->setOperandValue(param33, param33_init, sizeof(float) * 1);
  static float param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(float) * 1);
  static int32_t param35_init[] = {4};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {1};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {1};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {2};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {2};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param24, param25, param26, param27, param28, param29, param30}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param31, param32, param33, param34, param35, param36, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap, param37, param38, param39, param40, param41, param42, param43, param44, param45, layout}, {out});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_zero_sized_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type44(Type::TENSOR_FLOAT16, {0, 1, 1, 1});
  OperandType type45(Type::FLOAT16, {});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type47(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type48(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type49(Type::TENSOR_FLOAT16, {0});
  OperandType type52(Type::TENSOR_FLOAT16, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores = model->addOperand(&type48);
  auto roi = model->addOperand(&type46);
  auto param24 = model->addOperand(&type12);
  auto param25 = model->addOperand(&type45);
  auto param26 = model->addOperand(&type2);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type45);
  auto param29 = model->addOperand(&type45);
  auto param30 = model->addOperand(&type45);
  auto scoresOut = model->addOperand(&type49);
  auto roiOut = model->addOperand(&type47);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type43);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto param33 = model->addOperand(&type45);
  auto param34 = model->addOperand(&type45);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type52);
  auto param37 = model->addOperand(&type2);
  auto param38 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type2);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type2);
  auto param43 = model->addOperand(&type2);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto out = model->addOperand(&type44);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static _Float16 param25_init[] = {0.30000001192092896f};
  model->setOperandValue(param25, param25_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {-1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static _Float16 param28_init[] = {0.4000000059604645f};
  model->setOperandValue(param28, param28_init, sizeof(_Float16) * 1);
  static _Float16 param29_init[] = {1.0f};
  model->setOperandValue(param29, param29_init, sizeof(_Float16) * 1);
  static _Float16 param30_init[] = {0.30000001192092896f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static _Float16 param33_init[] = {2.0f};
  model->setOperandValue(param33, param33_init, sizeof(_Float16) * 1);
  static _Float16 param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(_Float16) * 1);
  static int32_t param35_init[] = {4};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {1};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {1};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {2};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {2};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param24, param25, param26, param27, param28, param29, param30}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param31, param32, param33, param34, param35, param36, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap, param37, param38, param39, param40, param41, param42, param43, param44, param45, layout}, {out});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_zero_sized_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type45(Type::FLOAT16, {});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type47(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type48(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type50(Type::TENSOR_FLOAT16, {0});
  OperandType type52(Type::TENSOR_FLOAT16, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores = model->addOperand(&type48);
  auto roi = model->addOperand(&type46);
  auto param24 = model->addOperand(&type12);
  auto param25 = model->addOperand(&type45);
  auto param26 = model->addOperand(&type2);
  auto param27 = model->addOperand(&type2);
  auto param28 = model->addOperand(&type45);
  auto param29 = model->addOperand(&type45);
  auto param30 = model->addOperand(&type45);
  auto scoresOut = model->addOperand(&type50);
  auto roiOut = model->addOperand(&type47);
  auto classesOut = model->addOperand(&type10);
  auto batchSplitOut = model->addOperand(&type10);
  auto in = model->addOperand(&type43);
  auto param31 = model->addOperand(&type2);
  auto param32 = model->addOperand(&type2);
  auto param33 = model->addOperand(&type45);
  auto param34 = model->addOperand(&type45);
  auto param35 = model->addOperand(&type2);
  auto param36 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap = model->addOperand(&type52);
  auto param37 = model->addOperand(&type2);
  auto param38 = model->addOperand(&type2);
  auto param39 = model->addOperand(&type2);
  auto param40 = model->addOperand(&type2);
  auto param41 = model->addOperand(&type2);
  auto param42 = model->addOperand(&type2);
  auto param43 = model->addOperand(&type2);
  auto param44 = model->addOperand(&type2);
  auto param45 = model->addOperand(&type2);
  auto out = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 scores_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores, scores_init, sizeof(_Float16) * 2);
  static _Float16 roi_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi, roi_init, sizeof(_Float16) * 8);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  static _Float16 param25_init[] = {0.30000001192092896f};
  model->setOperandValue(param25, param25_init, sizeof(_Float16) * 1);
  static int32_t param26_init[] = {-1};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  static _Float16 param28_init[] = {0.4000000059604645f};
  model->setOperandValue(param28, param28_init, sizeof(_Float16) * 1);
  static _Float16 param29_init[] = {1.0f};
  model->setOperandValue(param29, param29_init, sizeof(_Float16) * 1);
  static _Float16 param30_init[] = {0.30000001192092896f};
  model->setOperandValue(param30, param30_init, sizeof(_Float16) * 1);
  static int32_t param31_init[] = {2};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  static int32_t param32_init[] = {2};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  static _Float16 param33_init[] = {2.0f};
  model->setOperandValue(param33, param33_init, sizeof(_Float16) * 1);
  static _Float16 param34_init[] = {2.0f};
  model->setOperandValue(param34, param34_init, sizeof(_Float16) * 1);
  static int32_t param35_init[] = {4};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  static int32_t param36_init[] = {4};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  static int32_t param41_init[] = {1};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  static int32_t param42_init[] = {1};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  static int32_t param43_init[] = {2};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  static int32_t param44_init[] = {2};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores, roi, param24, param25, param26, param27, param28, param29, param30}, {scoresOut, roiOut, classesOut, batchSplitOut});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in, roiOut, batchSplitOut, param31, param32, param33, param34, param35, param36, layout}, {featureMap});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap, param37, param38, param39, param40, param41, param42, param43, param44, param45, layout}, {out});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

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
  auto param46 = model->addOperand(&type12);
  auto param47 = model->addOperand(&type13);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type13);
  auto param51 = model->addOperand(&type13);
  auto param52 = model->addOperand(&type13);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type14);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto param55 = model->addOperand(&type13);
  auto param56 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type15);
  auto param59 = model->addOperand(&type2);
  auto param60 = model->addOperand(&type2);
  auto param61 = model->addOperand(&type2);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type15);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static float param47_init[] = {0.3f};
  model->setOperandValue(param47, param47_init, sizeof(float) * 1);
  static int32_t param48_init[] = {-1};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static float param50_init[] = {0.4f};
  model->setOperandValue(param50, param50_init, sizeof(float) * 1);
  static float param51_init[] = {1.0f};
  model->setOperandValue(param51, param51_init, sizeof(float) * 1);
  static float param52_init[] = {0.3f};
  model->setOperandValue(param52, param52_init, sizeof(float) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static float param55_init[] = {2.0f};
  model->setOperandValue(param55, param55_init, sizeof(float) * 1);
  static float param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static int32_t param57_init[] = {4};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param59_init[] = {1};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static int32_t param60_init[] = {1};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  static int32_t param61_init[] = {1};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param46, param47, param48, param49, param50, param51, param52}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param53, param54, param55, param56, param57, param58, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap1, param59, param60, param61, param62, param63, param64, layout}, {out1});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

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
  auto param46 = model->addOperand(&type12);
  auto param47 = model->addOperand(&type13);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type13);
  auto param51 = model->addOperand(&type13);
  auto param52 = model->addOperand(&type13);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type14);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto param55 = model->addOperand(&type13);
  auto param56 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type15);
  auto param59 = model->addOperand(&type2);
  auto param60 = model->addOperand(&type2);
  auto param61 = model->addOperand(&type2);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type17);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static float param47_init[] = {0.3f};
  model->setOperandValue(param47, param47_init, sizeof(float) * 1);
  static int32_t param48_init[] = {-1};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static float param50_init[] = {0.4f};
  model->setOperandValue(param50, param50_init, sizeof(float) * 1);
  static float param51_init[] = {1.0f};
  model->setOperandValue(param51, param51_init, sizeof(float) * 1);
  static float param52_init[] = {0.3f};
  model->setOperandValue(param52, param52_init, sizeof(float) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static float param55_init[] = {2.0f};
  model->setOperandValue(param55, param55_init, sizeof(float) * 1);
  static float param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static int32_t param57_init[] = {4};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param59_init[] = {1};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static int32_t param60_init[] = {1};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  static int32_t param61_init[] = {1};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param46, param47, param48, param49, param50, param51, param52}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param53, param54, param55, param56, param57, param58, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap1, param59, param60, param61, param62, param63, param64, layout}, {out1});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

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
  auto param46 = model->addOperand(&type12);
  auto param47 = model->addOperand(&type13);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type13);
  auto param51 = model->addOperand(&type13);
  auto param52 = model->addOperand(&type13);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type14);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto param55 = model->addOperand(&type13);
  auto param56 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type15);
  auto param59 = model->addOperand(&type2);
  auto param60 = model->addOperand(&type2);
  auto param61 = model->addOperand(&type2);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type15);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static float param47_init[] = {0.3f};
  model->setOperandValue(param47, param47_init, sizeof(float) * 1);
  static int32_t param48_init[] = {-1};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static float param50_init[] = {0.4f};
  model->setOperandValue(param50, param50_init, sizeof(float) * 1);
  static float param51_init[] = {1.0f};
  model->setOperandValue(param51, param51_init, sizeof(float) * 1);
  static float param52_init[] = {0.3f};
  model->setOperandValue(param52, param52_init, sizeof(float) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static float param55_init[] = {2.0f};
  model->setOperandValue(param55, param55_init, sizeof(float) * 1);
  static float param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static int32_t param57_init[] = {4};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param59_init[] = {1};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static int32_t param60_init[] = {1};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  static int32_t param61_init[] = {1};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param46, param47, param48, param49, param50, param51, param52}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param53, param54, param55, param56, param57, param58, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap1, param59, param60, param61, param62, param63, param64, layout}, {out1});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

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
  auto param46 = model->addOperand(&type12);
  auto param47 = model->addOperand(&type13);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type13);
  auto param51 = model->addOperand(&type13);
  auto param52 = model->addOperand(&type13);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type14);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto param55 = model->addOperand(&type13);
  auto param56 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type15);
  auto param59 = model->addOperand(&type2);
  auto param60 = model->addOperand(&type2);
  auto param61 = model->addOperand(&type2);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type17);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static float param47_init[] = {0.3f};
  model->setOperandValue(param47, param47_init, sizeof(float) * 1);
  static int32_t param48_init[] = {-1};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static float param50_init[] = {0.4f};
  model->setOperandValue(param50, param50_init, sizeof(float) * 1);
  static float param51_init[] = {1.0f};
  model->setOperandValue(param51, param51_init, sizeof(float) * 1);
  static float param52_init[] = {0.3f};
  model->setOperandValue(param52, param52_init, sizeof(float) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static float param55_init[] = {2.0f};
  model->setOperandValue(param55, param55_init, sizeof(float) * 1);
  static float param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static int32_t param57_init[] = {4};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param59_init[] = {1};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static int32_t param60_init[] = {1};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  static int32_t param61_init[] = {1};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param46, param47, param48, param49, param50, param51, param52}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param53, param54, param55, param56, param57, param58, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap1, param59, param60, param61, param62, param63, param64, layout}, {out1});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_zero_sized_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type42(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type45(Type::FLOAT16, {});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type47(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type48(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type49(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type48);
  auto roi1 = model->addOperand(&type46);
  auto param46 = model->addOperand(&type12);
  auto param47 = model->addOperand(&type45);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type45);
  auto param51 = model->addOperand(&type45);
  auto param52 = model->addOperand(&type45);
  auto scoresOut1 = model->addOperand(&type49);
  auto roiOut1 = model->addOperand(&type47);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type43);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto param55 = model->addOperand(&type45);
  auto param56 = model->addOperand(&type45);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type42);
  auto param59 = model->addOperand(&type2);
  auto param60 = model->addOperand(&type2);
  auto param61 = model->addOperand(&type2);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type42);
  // Phase 2, operations
  static _Float16 scores1_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores1, scores1_init, sizeof(_Float16) * 2);
  static _Float16 roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(_Float16) * 8);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static _Float16 param47_init[] = {0.30000001192092896f};
  model->setOperandValue(param47, param47_init, sizeof(_Float16) * 1);
  static int32_t param48_init[] = {-1};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static _Float16 param50_init[] = {0.4000000059604645f};
  model->setOperandValue(param50, param50_init, sizeof(_Float16) * 1);
  static _Float16 param51_init[] = {1.0f};
  model->setOperandValue(param51, param51_init, sizeof(_Float16) * 1);
  static _Float16 param52_init[] = {0.30000001192092896f};
  model->setOperandValue(param52, param52_init, sizeof(_Float16) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static _Float16 param55_init[] = {2.0f};
  model->setOperandValue(param55, param55_init, sizeof(_Float16) * 1);
  static _Float16 param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(_Float16) * 1);
  static int32_t param57_init[] = {4};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param59_init[] = {1};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static int32_t param60_init[] = {1};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  static int32_t param61_init[] = {1};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param46, param47, param48, param49, param50, param51, param52}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param53, param54, param55, param56, param57, param58, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap1, param59, param60, param61, param62, param63, param64, layout}, {out1});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_zero_sized_nhwc_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type42(Type::TENSOR_FLOAT16, {0, 2, 2, 1});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type45(Type::FLOAT16, {});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type47(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type48(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type50(Type::TENSOR_FLOAT16, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type48);
  auto roi1 = model->addOperand(&type46);
  auto param46 = model->addOperand(&type12);
  auto param47 = model->addOperand(&type45);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type45);
  auto param51 = model->addOperand(&type45);
  auto param52 = model->addOperand(&type45);
  auto scoresOut1 = model->addOperand(&type50);
  auto roiOut1 = model->addOperand(&type47);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type43);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto param55 = model->addOperand(&type45);
  auto param56 = model->addOperand(&type45);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type42);
  auto param59 = model->addOperand(&type2);
  auto param60 = model->addOperand(&type2);
  auto param61 = model->addOperand(&type2);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 scores1_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores1, scores1_init, sizeof(_Float16) * 2);
  static _Float16 roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(_Float16) * 8);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static _Float16 param47_init[] = {0.30000001192092896f};
  model->setOperandValue(param47, param47_init, sizeof(_Float16) * 1);
  static int32_t param48_init[] = {-1};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static _Float16 param50_init[] = {0.4000000059604645f};
  model->setOperandValue(param50, param50_init, sizeof(_Float16) * 1);
  static _Float16 param51_init[] = {1.0f};
  model->setOperandValue(param51, param51_init, sizeof(_Float16) * 1);
  static _Float16 param52_init[] = {0.30000001192092896f};
  model->setOperandValue(param52, param52_init, sizeof(_Float16) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static _Float16 param55_init[] = {2.0f};
  model->setOperandValue(param55, param55_init, sizeof(_Float16) * 1);
  static _Float16 param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(_Float16) * 1);
  static int32_t param57_init[] = {4};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param59_init[] = {1};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static int32_t param60_init[] = {1};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  static int32_t param61_init[] = {1};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param46, param47, param48, param49, param50, param51, param52}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param53, param54, param55, param56, param57, param58, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap1, param59, param60, param61, param62, param63, param64, layout}, {out1});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_zero_sized_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type2(Type::INT32, {});
  OperandType type51(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param46 = model->addOperand(&type12);
  auto param47 = model->addOperand(&type13);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type13);
  auto param51 = model->addOperand(&type13);
  auto param52 = model->addOperand(&type13);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type14);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto param55 = model->addOperand(&type13);
  auto param56 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type51);
  auto param59 = model->addOperand(&type2);
  auto param60 = model->addOperand(&type2);
  auto param61 = model->addOperand(&type2);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type51);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static float param47_init[] = {0.3f};
  model->setOperandValue(param47, param47_init, sizeof(float) * 1);
  static int32_t param48_init[] = {-1};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static float param50_init[] = {0.4f};
  model->setOperandValue(param50, param50_init, sizeof(float) * 1);
  static float param51_init[] = {1.0f};
  model->setOperandValue(param51, param51_init, sizeof(float) * 1);
  static float param52_init[] = {0.3f};
  model->setOperandValue(param52, param52_init, sizeof(float) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static float param55_init[] = {2.0f};
  model->setOperandValue(param55, param55_init, sizeof(float) * 1);
  static float param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static int32_t param57_init[] = {4};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param59_init[] = {1};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static int32_t param60_init[] = {1};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  static int32_t param61_init[] = {1};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param46, param47, param48, param49, param50, param51, param52}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param53, param54, param55, param56, param57, param58, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap1, param59, param60, param61, param62, param63, param64, layout}, {out1});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_zero_sized_nchw_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type51(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param46 = model->addOperand(&type12);
  auto param47 = model->addOperand(&type13);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type13);
  auto param51 = model->addOperand(&type13);
  auto param52 = model->addOperand(&type13);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type14);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto param55 = model->addOperand(&type13);
  auto param56 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type51);
  auto param59 = model->addOperand(&type2);
  auto param60 = model->addOperand(&type2);
  auto param61 = model->addOperand(&type2);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type17);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static float param47_init[] = {0.3f};
  model->setOperandValue(param47, param47_init, sizeof(float) * 1);
  static int32_t param48_init[] = {-1};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static float param50_init[] = {0.4f};
  model->setOperandValue(param50, param50_init, sizeof(float) * 1);
  static float param51_init[] = {1.0f};
  model->setOperandValue(param51, param51_init, sizeof(float) * 1);
  static float param52_init[] = {0.3f};
  model->setOperandValue(param52, param52_init, sizeof(float) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static float param55_init[] = {2.0f};
  model->setOperandValue(param55, param55_init, sizeof(float) * 1);
  static float param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static int32_t param57_init[] = {4};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param59_init[] = {1};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static int32_t param60_init[] = {1};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  static int32_t param61_init[] = {1};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param46, param47, param48, param49, param50, param51, param52}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param53, param54, param55, param56, param57, param58, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap1, param59, param60, param61, param62, param63, param64, layout}, {out1});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_zero_sized_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type2(Type::INT32, {});
  OperandType type51(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param46 = model->addOperand(&type12);
  auto param47 = model->addOperand(&type13);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type13);
  auto param51 = model->addOperand(&type13);
  auto param52 = model->addOperand(&type13);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type14);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto param55 = model->addOperand(&type13);
  auto param56 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type51);
  auto param59 = model->addOperand(&type2);
  auto param60 = model->addOperand(&type2);
  auto param61 = model->addOperand(&type2);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type51);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static float param47_init[] = {0.3f};
  model->setOperandValue(param47, param47_init, sizeof(float) * 1);
  static int32_t param48_init[] = {-1};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static float param50_init[] = {0.4f};
  model->setOperandValue(param50, param50_init, sizeof(float) * 1);
  static float param51_init[] = {1.0f};
  model->setOperandValue(param51, param51_init, sizeof(float) * 1);
  static float param52_init[] = {0.3f};
  model->setOperandValue(param52, param52_init, sizeof(float) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static float param55_init[] = {2.0f};
  model->setOperandValue(param55, param55_init, sizeof(float) * 1);
  static float param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static int32_t param57_init[] = {4};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param59_init[] = {1};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static int32_t param60_init[] = {1};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  static int32_t param61_init[] = {1};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param46, param47, param48, param49, param50, param51, param52}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param53, param54, param55, param56, param57, param58, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap1, param59, param60, param61, param62, param63, param64, layout}, {out1});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_zero_sized_nchw_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 4});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type13(Type::FLOAT32, {});
  OperandType type14(Type::TENSOR_FLOAT32, {1, 1, 1, 1});
  OperandType type17(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::INT32, {});
  OperandType type51(Type::TENSOR_FLOAT32, {0, 1, 2, 2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 8});
  OperandType type9(Type::TENSOR_FLOAT32, {0});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type7);
  auto roi1 = model->addOperand(&type8);
  auto param46 = model->addOperand(&type12);
  auto param47 = model->addOperand(&type13);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type13);
  auto param51 = model->addOperand(&type13);
  auto param52 = model->addOperand(&type13);
  auto scoresOut1 = model->addOperand(&type9);
  auto roiOut1 = model->addOperand(&type11);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type14);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto param55 = model->addOperand(&type13);
  auto param56 = model->addOperand(&type13);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type51);
  auto param59 = model->addOperand(&type2);
  auto param60 = model->addOperand(&type2);
  auto param61 = model->addOperand(&type2);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type17);
  // Phase 2, operations
  static float scores1_init[] = {0.9f, 0.1f};
  model->setOperandValue(scores1, scores1_init, sizeof(float) * 2);
  static float roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(float) * 8);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static float param47_init[] = {0.3f};
  model->setOperandValue(param47, param47_init, sizeof(float) * 1);
  static int32_t param48_init[] = {-1};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static float param50_init[] = {0.4f};
  model->setOperandValue(param50, param50_init, sizeof(float) * 1);
  static float param51_init[] = {1.0f};
  model->setOperandValue(param51, param51_init, sizeof(float) * 1);
  static float param52_init[] = {0.3f};
  model->setOperandValue(param52, param52_init, sizeof(float) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static float param55_init[] = {2.0f};
  model->setOperandValue(param55, param55_init, sizeof(float) * 1);
  static float param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(float) * 1);
  static int32_t param57_init[] = {4};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param59_init[] = {1};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static int32_t param60_init[] = {1};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  static int32_t param61_init[] = {1};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param46, param47, param48, param49, param50, param51, param52}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param53, param54, param55, param56, param57, param58, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap1, param59, param60, param61, param62, param63, param64, layout}, {out1});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_zero_sized_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type45(Type::FLOAT16, {});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type47(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type48(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type49(Type::TENSOR_FLOAT16, {0});
  OperandType type52(Type::TENSOR_FLOAT16, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type48);
  auto roi1 = model->addOperand(&type46);
  auto param46 = model->addOperand(&type12);
  auto param47 = model->addOperand(&type45);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type45);
  auto param51 = model->addOperand(&type45);
  auto param52 = model->addOperand(&type45);
  auto scoresOut1 = model->addOperand(&type49);
  auto roiOut1 = model->addOperand(&type47);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type43);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto param55 = model->addOperand(&type45);
  auto param56 = model->addOperand(&type45);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type52);
  auto param59 = model->addOperand(&type2);
  auto param60 = model->addOperand(&type2);
  auto param61 = model->addOperand(&type2);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type52);
  // Phase 2, operations
  static _Float16 scores1_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores1, scores1_init, sizeof(_Float16) * 2);
  static _Float16 roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(_Float16) * 8);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static _Float16 param47_init[] = {0.30000001192092896f};
  model->setOperandValue(param47, param47_init, sizeof(_Float16) * 1);
  static int32_t param48_init[] = {-1};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static _Float16 param50_init[] = {0.4000000059604645f};
  model->setOperandValue(param50, param50_init, sizeof(_Float16) * 1);
  static _Float16 param51_init[] = {1.0f};
  model->setOperandValue(param51, param51_init, sizeof(_Float16) * 1);
  static _Float16 param52_init[] = {0.30000001192092896f};
  model->setOperandValue(param52, param52_init, sizeof(_Float16) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static _Float16 param55_init[] = {2.0f};
  model->setOperandValue(param55, param55_init, sizeof(_Float16) * 1);
  static _Float16 param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(_Float16) * 1);
  static int32_t param57_init[] = {4};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param59_init[] = {1};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static int32_t param60_init[] = {1};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  static int32_t param61_init[] = {1};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param46, param47, param48, param49, param50, param51, param52}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param53, param54, param55, param56, param57, param58, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap1, param59, param60, param61, param62, param63, param64, layout}, {out1});
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

} // namespace generated_tests::l2_pool_v1_2
namespace generated_tests::l2_pool_v1_2 {

void CreateModel_zero_sized_nchw_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_INT32, {0});
  OperandType type12(Type::TENSOR_INT32, {1});
  OperandType type2(Type::INT32, {});
  OperandType type20(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type43(Type::TENSOR_FLOAT16, {1, 1, 1, 1});
  OperandType type45(Type::FLOAT16, {});
  OperandType type46(Type::TENSOR_FLOAT16, {1, 8});
  OperandType type47(Type::TENSOR_FLOAT16, {0, 4});
  OperandType type48(Type::TENSOR_FLOAT16, {1, 2});
  OperandType type50(Type::TENSOR_FLOAT16, {0});
  OperandType type52(Type::TENSOR_FLOAT16, {0, 1, 2, 2});
  // Phase 1, operands
  auto scores1 = model->addOperand(&type48);
  auto roi1 = model->addOperand(&type46);
  auto param46 = model->addOperand(&type12);
  auto param47 = model->addOperand(&type45);
  auto param48 = model->addOperand(&type2);
  auto param49 = model->addOperand(&type2);
  auto param50 = model->addOperand(&type45);
  auto param51 = model->addOperand(&type45);
  auto param52 = model->addOperand(&type45);
  auto scoresOut1 = model->addOperand(&type50);
  auto roiOut1 = model->addOperand(&type47);
  auto classesOut1 = model->addOperand(&type10);
  auto batchSplitOut1 = model->addOperand(&type10);
  auto in1 = model->addOperand(&type43);
  auto param53 = model->addOperand(&type2);
  auto param54 = model->addOperand(&type2);
  auto param55 = model->addOperand(&type45);
  auto param56 = model->addOperand(&type45);
  auto param57 = model->addOperand(&type2);
  auto param58 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto featureMap1 = model->addOperand(&type52);
  auto param59 = model->addOperand(&type2);
  auto param60 = model->addOperand(&type2);
  auto param61 = model->addOperand(&type2);
  auto param62 = model->addOperand(&type2);
  auto param63 = model->addOperand(&type2);
  auto param64 = model->addOperand(&type2);
  auto out1 = model->addOperand(&type20);
  // Phase 2, operations
  static _Float16 scores1_init[] = {0.8999999761581421f, 0.10000000149011612f};
  model->setOperandValue(scores1, scores1_init, sizeof(_Float16) * 2);
  static _Float16 roi1_init[] = {1.0f, 1.0f, 10.0f, 10.0f, 0.0f, 0.0f, 10.0f, 10.0f};
  model->setOperandValue(roi1, roi1_init, sizeof(_Float16) * 8);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  static _Float16 param47_init[] = {0.30000001192092896f};
  model->setOperandValue(param47, param47_init, sizeof(_Float16) * 1);
  static int32_t param48_init[] = {-1};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  static _Float16 param50_init[] = {0.4000000059604645f};
  model->setOperandValue(param50, param50_init, sizeof(_Float16) * 1);
  static _Float16 param51_init[] = {1.0f};
  model->setOperandValue(param51, param51_init, sizeof(_Float16) * 1);
  static _Float16 param52_init[] = {0.30000001192092896f};
  model->setOperandValue(param52, param52_init, sizeof(_Float16) * 1);
  static int32_t param53_init[] = {2};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  static int32_t param54_init[] = {2};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  static _Float16 param55_init[] = {2.0f};
  model->setOperandValue(param55, param55_init, sizeof(_Float16) * 1);
  static _Float16 param56_init[] = {2.0f};
  model->setOperandValue(param56, param56_init, sizeof(_Float16) * 1);
  static int32_t param57_init[] = {4};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  static int32_t param58_init[] = {4};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static int32_t param59_init[] = {1};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  static int32_t param60_init[] = {1};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  static int32_t param61_init[] = {1};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  static int32_t param62_init[] = {2};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  static int32_t param63_init[] = {2};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_BOX_WITH_NMS_LIMIT, {scores1, roi1, param46, param47, param48, param49, param50, param51, param52}, {scoresOut1, roiOut1, classesOut1, batchSplitOut1});
  model->addOperation(ANEURALNETWORKS_ROI_ALIGN, {in1, roiOut1, batchSplitOut1, param53, param54, param55, param56, param57, param58, layout}, {featureMap1});
  model->addOperation(ANEURALNETWORKS_L2_POOL_2D, {featureMap1, param59, param60, param61, param62, param63, param64, layout}, {out1});
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

} // namespace generated_tests::l2_pool_v1_2
