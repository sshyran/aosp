// Generated from space_to_batch_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 1, 1, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 1, 1, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy = model->addOperand(&type12);
  auto param4 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy, param4}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type12);
  auto param5 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param5_init[] = {0};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy1, param5}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 1, 1, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, paddings},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, paddings},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 1, 1, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy2 = model->addOperand(&type12);
  auto param6 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy2, param6}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy3 = model->addOperand(&type12);
  auto param7 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy3, param7}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 1, 1, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 1, 1, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy4 = model->addOperand(&type12);
  auto param8 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(float) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy4, param8}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy5 = model->addOperand(&type12);
  auto param9 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy5, param9}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 1, 1, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, paddings},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, paddings},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {4, 1, 1, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type3);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy6 = model->addOperand(&type12);
  auto param10 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(float) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy6, param10}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy7 = model->addOperand(&type12);
  auto param11 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(float) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy7, param11}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type15(Type::TENSOR_FLOAT16, {4, 1, 1, 2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT16, {4, 1, 1, 2});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
  auto op1_tmp = model->addOperand(&type17);
  auto dummy8 = model->addOperand(&type18);
  auto param12 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(_Float16) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy8, param12}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type17);
  auto dummy9 = model->addOperand(&type18);
  auto param13 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(_Float16) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy9, param13}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type15(Type::TENSOR_FLOAT16, {4, 1, 1, 2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, paddings},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, paddings},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type15(Type::TENSOR_FLOAT16, {4, 1, 1, 2});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type15);
  auto op1_tmp = model->addOperand(&type17);
  auto dummy10 = model->addOperand(&type18);
  auto param14 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(_Float16) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy10, param14}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type17);
  auto dummy11 = model->addOperand(&type18);
  auto param15 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(_Float16) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy11, param15}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {4, 1, 1, 2}, 0.1f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {4, 1, 1, 2}, 0.1f, 0);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  auto op1_tmp = model->addOperand(&type19);
  auto dummy12 = model->addOperand(&type22);
  auto param16 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy12_init[] = {0};
  model->setOperandValue(dummy12, dummy12_init, sizeof(uint8_t) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy12, param16}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type21);
  auto op1_tmp = model->addOperand(&type19);
  auto dummy13 = model->addOperand(&type22);
  auto param17 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy13_init[] = {0};
  model->setOperandValue(dummy13, dummy13_init, sizeof(uint8_t) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy13, param17}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {4, 1, 1, 2}, 0.1f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, paddings},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, paddings},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {4, 1, 1, 2}, 0.1f, 0);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type20);
  auto op1_tmp = model->addOperand(&type19);
  auto dummy14 = model->addOperand(&type22);
  auto param18 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy14_init[] = {0};
  model->setOperandValue(dummy14, dummy14_init, sizeof(uint8_t) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy14, param18}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type21);
  auto op1_tmp = model->addOperand(&type19);
  auto dummy15 = model->addOperand(&type22);
  auto param19 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy15_init[] = {0};
  model->setOperandValue(dummy15, dummy15_init, sizeof(uint8_t) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy15, param19}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type23(Type::TENSOR_FLOAT32, {4, 2, 1, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type23(Type::TENSOR_FLOAT32, {4, 2, 1, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type23);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy16 = model->addOperand(&type12);
  auto param20 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(float) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy16, param20}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy17 = model->addOperand(&type12);
  auto param21 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(float) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy17, param21}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type23(Type::TENSOR_FLOAT32, {4, 2, 1, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, paddings},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, paddings},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type23(Type::TENSOR_FLOAT32, {4, 2, 1, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type23);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy18 = model->addOperand(&type12);
  auto param22 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy18, param22}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy19 = model->addOperand(&type12);
  auto param23 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy19, param23}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type23(Type::TENSOR_FLOAT32, {4, 2, 1, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type23(Type::TENSOR_FLOAT32, {4, 2, 1, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type23);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy20 = model->addOperand(&type12);
  auto param24 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(float) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy20, param24}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy21 = model->addOperand(&type12);
  auto param25 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(float) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy21, param25}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type23(Type::TENSOR_FLOAT32, {4, 2, 1, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, paddings},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, paddings},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type23(Type::TENSOR_FLOAT32, {4, 2, 1, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type23);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy22 = model->addOperand(&type12);
  auto param26 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy22, param26}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {1, 2, 2, 2});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type1);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type11);
  auto op1_tmp = model->addOperand(&type1);
  auto dummy23 = model->addOperand(&type12);
  auto param27 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(float) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy23, param27}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op1_tmp},
    {op4});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type24(Type::TENSOR_FLOAT16, {4, 2, 1, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type24);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type24(Type::TENSOR_FLOAT16, {4, 2, 1, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type24);
  auto op1_tmp = model->addOperand(&type17);
  auto dummy24 = model->addOperand(&type18);
  auto param28 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy24_init[] = {0.0f};
  model->setOperandValue(dummy24, dummy24_init, sizeof(_Float16) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy24, param28}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type17);
  auto dummy25 = model->addOperand(&type18);
  auto param29 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy25_init[] = {0.0f};
  model->setOperandValue(dummy25, dummy25_init, sizeof(_Float16) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy25, param29}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type24(Type::TENSOR_FLOAT16, {4, 2, 1, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type24);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, paddings},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type14(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type14);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, paddings},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type24(Type::TENSOR_FLOAT16, {4, 2, 1, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type24);
  auto op1_tmp = model->addOperand(&type17);
  auto dummy26 = model->addOperand(&type18);
  auto param30 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy26_init[] = {0.0f};
  model->setOperandValue(dummy26, dummy26_init, sizeof(_Float16) * 1);
  static int32_t param30_init[] = {0};
  model->setOperandValue(param30, param30_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy26, param30}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type17(Type::TENSOR_FLOAT16, {1, 2, 2, 2});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type17);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type16);
  auto op1_tmp = model->addOperand(&type17);
  auto dummy27 = model->addOperand(&type18);
  auto param31 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy27_init[] = {0.0f};
  model->setOperandValue(dummy27, dummy27_init, sizeof(_Float16) * 1);
  static int32_t param31_init[] = {0};
  model->setOperandValue(param31, param31_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy27, param31}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4, 2, 1, 1}, 0.1f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4, 2, 1, 1}, 0.1f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type25);
  auto op1_tmp = model->addOperand(&type19);
  auto dummy28 = model->addOperand(&type22);
  auto param32 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy28_init[] = {0};
  model->setOperandValue(dummy28, dummy28_init, sizeof(uint8_t) * 1);
  static int32_t param32_init[] = {0};
  model->setOperandValue(param32, param32_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy28, param32}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type21);
  auto op1_tmp = model->addOperand(&type19);
  auto dummy29 = model->addOperand(&type22);
  auto param33 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy29_init[] = {0};
  model->setOperandValue(dummy29, dummy29_init, sizeof(uint8_t) * 1);
  static int32_t param33_init[] = {0};
  model->setOperandValue(param33, param33_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy29, param33}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4, 2, 1, 1}, 0.1f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type25);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, paddings},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op1, paddings},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 0);
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4, 2, 1, 1}, 0.1f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type25);
  auto op1_tmp = model->addOperand(&type19);
  auto dummy30 = model->addOperand(&type22);
  auto param34 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy30_init[] = {0};
  model->setOperandValue(dummy30, dummy30_init, sizeof(uint8_t) * 1);
  static int32_t param34_init[] = {0};
  model->setOperandValue(param34, param34_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy30, param34}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type19(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2, 2}, 0.1f, 0);
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.1f, 0);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {1}, 0.1f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op1 = model->addOperand(&type19);
  auto param = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op4 = model->addOperand(&type21);
  auto op1_tmp = model->addOperand(&type19);
  auto dummy31 = model->addOperand(&type22);
  auto param35 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {2, 2};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy31_init[] = {0};
  model->setOperandValue(dummy31, dummy31_init, sizeof(uint8_t) * 1);
  static int32_t param35_init[] = {0};
  model->setOperandValue(param35, param35_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op1_tmp, dummy31, param35}, {op1});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op1, param, paddings, layout}, {op4});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op1_tmp},
    {op4});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy32 = model->addOperand(&type12);
  auto param36 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy32_init[] = {0.0f};
  model->setOperandValue(dummy32, dummy32_init, sizeof(float) * 1);
  static int32_t param36_init[] = {0};
  model->setOperandValue(param36, param36_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy32, param36}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type11);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy33 = model->addOperand(&type12);
  auto param37 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy33_init[] = {0.0f};
  model->setOperandValue(dummy33, dummy33_init, sizeof(float) * 1);
  static int32_t param37_init[] = {0};
  model->setOperandValue(param37, param37_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy33, param37}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, paddings},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, paddings},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy34 = model->addOperand(&type12);
  auto param38 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy34_init[] = {0.0f};
  model->setOperandValue(dummy34, dummy34_init, sizeof(float) * 1);
  static int32_t param38_init[] = {0};
  model->setOperandValue(param38, param38_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy34, param38}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type11);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy35 = model->addOperand(&type12);
  auto param39 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy35_init[] = {0.0f};
  model->setOperandValue(dummy35, dummy35_init, sizeof(float) * 1);
  static int32_t param39_init[] = {0};
  model->setOperandValue(param39, param39_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy35, param39}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy36 = model->addOperand(&type12);
  auto param40 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy36_init[] = {0.0f};
  model->setOperandValue(dummy36, dummy36_init, sizeof(float) * 1);
  static int32_t param40_init[] = {0};
  model->setOperandValue(param40, param40_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy36, param40}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type11);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy37 = model->addOperand(&type12);
  auto param41 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy37_init[] = {0.0f};
  model->setOperandValue(dummy37, dummy37_init, sizeof(float) * 1);
  static int32_t param41_init[] = {0};
  model->setOperandValue(param41, param41_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy37, param41}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, paddings},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, paddings},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  OperandType type6(Type::TENSOR_FLOAT32, {4, 2, 2, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type6);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy38 = model->addOperand(&type12);
  auto param42 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy38_init[] = {0.0f};
  model->setOperandValue(dummy38, dummy38_init, sizeof(float) * 1);
  static int32_t param42_init[] = {0};
  model->setOperandValue(param42, param42_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy38, param42}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type5(Type::TENSOR_FLOAT32, {1, 4, 4, 1});
  // Phase 1, operands
  auto op11 = model->addOperand(&type5);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type11);
  auto op11_tmp = model->addOperand(&type5);
  auto dummy39 = model->addOperand(&type12);
  auto param43 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy39_init[] = {0.0f};
  model->setOperandValue(dummy39, dummy39_init, sizeof(float) * 1);
  static int32_t param43_init[] = {0};
  model->setOperandValue(param43, param43_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy39, param43}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {4, 2, 2, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type26);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type26);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type27(Type::TENSOR_FLOAT16, {4, 2, 2, 1});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type27);
  auto op11_tmp = model->addOperand(&type28);
  auto dummy40 = model->addOperand(&type18);
  auto param44 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy40_init[] = {0.0f};
  model->setOperandValue(dummy40, dummy40_init, sizeof(_Float16) * 1);
  static int32_t param44_init[] = {0};
  model->setOperandValue(param44, param44_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy40, param44}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  auto op11_tmp = model->addOperand(&type28);
  auto dummy41 = model->addOperand(&type18);
  auto param45 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy41_init[] = {0.0f};
  model->setOperandValue(dummy41, dummy41_init, sizeof(_Float16) * 1);
  static int32_t param45_init[] = {0};
  model->setOperandValue(param45, param45_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy41, param45}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type27(Type::TENSOR_FLOAT16, {4, 2, 2, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type26);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type27);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, paddings},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type26(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type26);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, paddings},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type27(Type::TENSOR_FLOAT16, {4, 2, 2, 1});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type27);
  auto op11_tmp = model->addOperand(&type28);
  auto dummy42 = model->addOperand(&type18);
  auto param46 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy42_init[] = {0.0f};
  model->setOperandValue(dummy42, dummy42_init, sizeof(_Float16) * 1);
  static int32_t param46_init[] = {0};
  model->setOperandValue(param46, param46_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy42, param46}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type28(Type::TENSOR_FLOAT16, {1, 4, 4, 1});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type28);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  auto op11_tmp = model->addOperand(&type28);
  auto dummy43 = model->addOperand(&type18);
  auto param47 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy43_init[] = {0.0f};
  model->setOperandValue(dummy43, dummy43_init, sizeof(_Float16) * 1);
  static int32_t param47_init[] = {0};
  model->setOperandValue(param47, param47_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy43, param47}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.5f, 0);
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 1}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.5f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type31);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.5f, 0);
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 1}, 0.5f, 0);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type30);
  auto op11_tmp = model->addOperand(&type29);
  auto dummy44 = model->addOperand(&type32);
  auto param48 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy44_init[] = {0};
  model->setOperandValue(dummy44, dummy44_init, sizeof(uint8_t) * 1);
  static int32_t param48_init[] = {0};
  model->setOperandValue(param48, param48_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy44, param48}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.5f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type31);
  auto op11_tmp = model->addOperand(&type29);
  auto dummy45 = model->addOperand(&type32);
  auto param49 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy45_init[] = {0};
  model->setOperandValue(dummy45, dummy45_init, sizeof(uint8_t) * 1);
  static int32_t param49_init[] = {0};
  model->setOperandValue(param49, param49_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy45, param49}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.5f, 0);
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 1}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, paddings},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.5f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type31);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, paddings},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.5f, 0);
  OperandType type30(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 1}, 0.5f, 0);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type30);
  auto op11_tmp = model->addOperand(&type29);
  auto dummy46 = model->addOperand(&type32);
  auto param50 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy46_init[] = {0};
  model->setOperandValue(dummy46, dummy46_init, sizeof(uint8_t) * 1);
  static int32_t param50_init[] = {0};
  model->setOperandValue(param50, param50_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy46, param50}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 0.5f, 0);
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type29);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type31);
  auto op11_tmp = model->addOperand(&type29);
  auto dummy47 = model->addOperand(&type32);
  auto param51 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy47_init[] = {0};
  model->setOperandValue(dummy47, dummy47_init, sizeof(uint8_t) * 1);
  static int32_t param51_init[] = {0};
  model->setOperandValue(param51, param51_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy47, param51}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type34(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type34(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type34);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy48 = model->addOperand(&type12);
  auto param52 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy48_init[] = {0.0f};
  model->setOperandValue(dummy48, dummy48_init, sizeof(float) * 1);
  static int32_t param52_init[] = {0};
  model->setOperandValue(param52, param52_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy48, param52}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type11);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy49 = model->addOperand(&type12);
  auto param53 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy49_init[] = {0.0f};
  model->setOperandValue(dummy49, dummy49_init, sizeof(float) * 1);
  static int32_t param53_init[] = {0};
  model->setOperandValue(param53, param53_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy49, param53}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type34(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, paddings},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, paddings},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type34(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type34);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy50 = model->addOperand(&type12);
  auto param54 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy50_init[] = {0.0f};
  model->setOperandValue(dummy50, dummy50_init, sizeof(float) * 1);
  static int32_t param54_init[] = {0};
  model->setOperandValue(param54, param54_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy50, param54}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type11);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy51 = model->addOperand(&type12);
  auto param55 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy51_init[] = {0.0f};
  model->setOperandValue(dummy51, dummy51_init, sizeof(float) * 1);
  static int32_t param55_init[] = {0};
  model->setOperandValue(param55, param55_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy51, param55}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type34(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type34(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type34);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy52 = model->addOperand(&type12);
  auto param56 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy52_init[] = {0.0f};
  model->setOperandValue(dummy52, dummy52_init, sizeof(float) * 1);
  static int32_t param56_init[] = {0};
  model->setOperandValue(param56, param56_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy52, param56}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type11);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy53 = model->addOperand(&type12);
  auto param57 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy53_init[] = {0.0f};
  model->setOperandValue(dummy53, dummy53_init, sizeof(float) * 1);
  static int32_t param57_init[] = {0};
  model->setOperandValue(param57, param57_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy53, param57}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type34(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type34);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, paddings},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, paddings},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type34(Type::TENSOR_FLOAT32, {4, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type34);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy54 = model->addOperand(&type12);
  auto param58 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy54_init[] = {0.0f};
  model->setOperandValue(dummy54, dummy54_init, sizeof(float) * 1);
  static int32_t param58_init[] = {0};
  model->setOperandValue(param58, param58_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy54, param58}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type33(Type::TENSOR_FLOAT32, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type33);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type11);
  auto op11_tmp = model->addOperand(&type33);
  auto dummy55 = model->addOperand(&type12);
  auto param59 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy55_init[] = {0.0f};
  model->setOperandValue(dummy55, dummy55_init, sizeof(float) * 1);
  static int32_t param59_init[] = {0};
  model->setOperandValue(param59, param59_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy55, param59}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op11_tmp},
    {op41});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type36(Type::TENSOR_FLOAT16, {4, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type35);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type35);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type36(Type::TENSOR_FLOAT16, {4, 1, 2, 2});
  OperandType type37(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type37);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type36);
  auto op11_tmp = model->addOperand(&type37);
  auto dummy56 = model->addOperand(&type18);
  auto param60 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy56_init[] = {0.0f};
  model->setOperandValue(dummy56, dummy56_init, sizeof(_Float16) * 1);
  static int32_t param60_init[] = {0};
  model->setOperandValue(param60, param60_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy56, param60}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type37(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type37);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  auto op11_tmp = model->addOperand(&type37);
  auto dummy57 = model->addOperand(&type18);
  auto param61 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy57_init[] = {0.0f};
  model->setOperandValue(dummy57, dummy57_init, sizeof(_Float16) * 1);
  static int32_t param61_init[] = {0};
  model->setOperandValue(param61, param61_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy57, param61}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type36(Type::TENSOR_FLOAT16, {4, 1, 2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type35);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type36);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, paddings},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type35(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type35);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, paddings},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type36(Type::TENSOR_FLOAT16, {4, 1, 2, 2});
  OperandType type37(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type37);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type36);
  auto op11_tmp = model->addOperand(&type37);
  auto dummy58 = model->addOperand(&type18);
  auto param62 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy58_init[] = {0.0f};
  model->setOperandValue(dummy58, dummy58_init, sizeof(_Float16) * 1);
  static int32_t param62_init[] = {0};
  model->setOperandValue(param62, param62_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy58, param62}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type37(Type::TENSOR_FLOAT16, {1, 1, 4, 4});
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type37);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type16);
  auto op11_tmp = model->addOperand(&type37);
  auto dummy59 = model->addOperand(&type18);
  auto param63 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy59_init[] = {0.0f};
  model->setOperandValue(dummy59, dummy59_init, sizeof(_Float16) * 1);
  static int32_t param63_init[] = {0};
  model->setOperandValue(param63, param63_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy59, param63}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.5f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {4, 1, 2, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type39);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type31);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.5f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {4, 1, 2, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type39);
  auto op11_tmp = model->addOperand(&type38);
  auto dummy60 = model->addOperand(&type32);
  auto param64 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy60_init[] = {0};
  model->setOperandValue(dummy60, dummy60_init, sizeof(uint8_t) * 1);
  static int32_t param64_init[] = {0};
  model->setOperandValue(param64, param64_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy60, param64}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type31);
  auto op11_tmp = model->addOperand(&type38);
  auto dummy61 = model->addOperand(&type32);
  auto param65 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static int32_t paddings_init[] = {0, 0, 0, 0};
  model->setOperandValue(paddings, paddings_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy61_init[] = {0};
  model->setOperandValue(dummy61, dummy61_init, sizeof(uint8_t) * 1);
  static int32_t param65_init[] = {0};
  model->setOperandValue(param65, param65_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy61, param65}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.5f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {4, 1, 2, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type39);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, paddings},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type31);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op11, paddings},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.5f, 0);
  OperandType type39(Type::TENSOR_QUANT8_ASYMM, {4, 1, 2, 2}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type39);
  auto op11_tmp = model->addOperand(&type38);
  auto dummy62 = model->addOperand(&type32);
  auto param66 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy62_init[] = {0};
  model->setOperandValue(dummy62, dummy62_init, sizeof(uint8_t) * 1);
  static int32_t param66_init[] = {0};
  model->setOperandValue(param66, param66_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy62, param66}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type31(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 0);
  OperandType type32(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 0);
  OperandType type38(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 4}, 0.5f, 0);
  OperandType type4(Type::TENSOR_INT32, {2});
  // Phase 1, operands
  auto op11 = model->addOperand(&type38);
  auto param1 = model->addOperand(&type4);
  auto paddings = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op41 = model->addOperand(&type31);
  auto op11_tmp = model->addOperand(&type38);
  auto dummy63 = model->addOperand(&type32);
  auto param67 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param1_init[] = {2, 2};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy63_init[] = {0};
  model->setOperandValue(dummy63, dummy63_init, sizeof(uint8_t) * 1);
  static int32_t param67_init[] = {0};
  model->setOperandValue(param67, param67_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op11_tmp, dummy63, param67}, {op11});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op11, param1, paddings, layout}, {op41});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings, op11_tmp},
    {op41});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {6, 2, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {6, 2, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type8);
  auto op12_tmp = model->addOperand(&type7);
  auto dummy64 = model->addOperand(&type12);
  auto param68 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy64_init[] = {0.0f};
  model->setOperandValue(dummy64, dummy64_init, sizeof(float) * 1);
  static int32_t param68_init[] = {0};
  model->setOperandValue(param68, param68_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy64, param68}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type11);
  auto op12_tmp = model->addOperand(&type7);
  auto dummy65 = model->addOperand(&type12);
  auto param69 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy65_init[] = {0.0f};
  model->setOperandValue(dummy65, dummy65_init, sizeof(float) * 1);
  static int32_t param69_init[] = {0};
  model->setOperandValue(param69, param69_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy65, param69}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {6, 2, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, paddings1},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, paddings1},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {6, 2, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type8);
  auto op12_tmp = model->addOperand(&type7);
  auto dummy66 = model->addOperand(&type12);
  auto param70 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy66_init[] = {0.0f};
  model->setOperandValue(dummy66, dummy66_init, sizeof(float) * 1);
  static int32_t param70_init[] = {0};
  model->setOperandValue(param70, param70_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy66, param70}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings1, op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type11);
  auto op12_tmp = model->addOperand(&type7);
  auto dummy67 = model->addOperand(&type12);
  auto param71 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy67_init[] = {0.0f};
  model->setOperandValue(dummy67, dummy67_init, sizeof(float) * 1);
  static int32_t param71_init[] = {0};
  model->setOperandValue(param71, param71_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy67, param71}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings1, op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {6, 2, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {6, 2, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type8);
  auto op12_tmp = model->addOperand(&type7);
  auto dummy68 = model->addOperand(&type12);
  auto param72 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy68_init[] = {0.0f};
  model->setOperandValue(dummy68, dummy68_init, sizeof(float) * 1);
  static int32_t param72_init[] = {0};
  model->setOperandValue(param72, param72_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy68, param72}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type11);
  auto op12_tmp = model->addOperand(&type7);
  auto dummy69 = model->addOperand(&type12);
  auto param73 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy69_init[] = {0.0f};
  model->setOperandValue(dummy69, dummy69_init, sizeof(float) * 1);
  static int32_t param73_init[] = {0};
  model->setOperandValue(param73, param73_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy69, param73}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {6, 2, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, paddings1},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, paddings1},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  OperandType type8(Type::TENSOR_FLOAT32, {6, 2, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type8);
  auto op12_tmp = model->addOperand(&type7);
  auto dummy70 = model->addOperand(&type12);
  auto param74 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy70_init[] = {0.0f};
  model->setOperandValue(dummy70, dummy70_init, sizeof(float) * 1);
  static int32_t param74_init[] = {0};
  model->setOperandValue(param74, param74_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy70, param74}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings1, op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type7(Type::TENSOR_FLOAT32, {1, 5, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type11);
  auto op12_tmp = model->addOperand(&type7);
  auto dummy71 = model->addOperand(&type12);
  auto param75 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy71_init[] = {0.0f};
  model->setOperandValue(dummy71, dummy71_init, sizeof(float) * 1);
  static int32_t param75_init[] = {0};
  model->setOperandValue(param75, param75_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy71, param75}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings1, op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type40(Type::TENSOR_FLOAT16, {1, 5, 2, 1});
  OperandType type41(Type::TENSOR_FLOAT16, {6, 2, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type40);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type41);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type40(Type::TENSOR_FLOAT16, {1, 5, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type40);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type41(Type::TENSOR_FLOAT16, {6, 2, 2, 1});
  OperandType type42(Type::TENSOR_FLOAT16, {1, 5, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type42);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type41);
  auto op12_tmp = model->addOperand(&type42);
  auto dummy72 = model->addOperand(&type18);
  auto param76 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy72_init[] = {0.0f};
  model->setOperandValue(dummy72, dummy72_init, sizeof(_Float16) * 1);
  static int32_t param76_init[] = {0};
  model->setOperandValue(param76, param76_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy72, param76}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type42(Type::TENSOR_FLOAT16, {1, 5, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type42);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type16);
  auto op12_tmp = model->addOperand(&type42);
  auto dummy73 = model->addOperand(&type18);
  auto param77 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy73_init[] = {0.0f};
  model->setOperandValue(dummy73, dummy73_init, sizeof(_Float16) * 1);
  static int32_t param77_init[] = {0};
  model->setOperandValue(param77, param77_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy73, param77}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type40(Type::TENSOR_FLOAT16, {1, 5, 2, 1});
  OperandType type41(Type::TENSOR_FLOAT16, {6, 2, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type40);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type41);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, paddings1},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type40(Type::TENSOR_FLOAT16, {1, 5, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type40);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, paddings1},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type41(Type::TENSOR_FLOAT16, {6, 2, 2, 1});
  OperandType type42(Type::TENSOR_FLOAT16, {1, 5, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type42);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type41);
  auto op12_tmp = model->addOperand(&type42);
  auto dummy74 = model->addOperand(&type18);
  auto param78 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy74_init[] = {0.0f};
  model->setOperandValue(dummy74, dummy74_init, sizeof(_Float16) * 1);
  static int32_t param78_init[] = {0};
  model->setOperandValue(param78, param78_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy74, param78}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings1, op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type42(Type::TENSOR_FLOAT16, {1, 5, 2, 1});
  // Phase 1, operands
  auto op12 = model->addOperand(&type42);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type16);
  auto op12_tmp = model->addOperand(&type42);
  auto dummy75 = model->addOperand(&type18);
  auto param79 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy75_init[] = {0.0f};
  model->setOperandValue(dummy75, dummy75_init, sizeof(_Float16) * 1);
  static int32_t param79_init[] = {0};
  model->setOperandValue(param79, param79_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy75, param79}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings1, op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 0.5f, 128);
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {6, 2, 2, 1}, 0.5f, 128);
  // Phase 1, operands
  auto op12 = model->addOperand(&type43);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type44);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 0.5f, 128);
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 128);
  // Phase 1, operands
  auto op12 = model->addOperand(&type43);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type45);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 0.5f, 128);
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {6, 2, 2, 1}, 0.5f, 128);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  // Phase 1, operands
  auto op12 = model->addOperand(&type43);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type44);
  auto op12_tmp = model->addOperand(&type43);
  auto dummy76 = model->addOperand(&type46);
  auto param80 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy76_init[] = {128};
  model->setOperandValue(dummy76, dummy76_init, sizeof(uint8_t) * 1);
  static int32_t param80_init[] = {0};
  model->setOperandValue(param80, param80_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy76, param80}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 0.5f, 128);
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 128);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  // Phase 1, operands
  auto op12 = model->addOperand(&type43);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type45);
  auto op12_tmp = model->addOperand(&type43);
  auto dummy77 = model->addOperand(&type46);
  auto param81 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy77_init[] = {128};
  model->setOperandValue(dummy77, dummy77_init, sizeof(uint8_t) * 1);
  static int32_t param81_init[] = {0};
  model->setOperandValue(param81, param81_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy77, param81}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 0.5f, 128);
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {6, 2, 2, 1}, 0.5f, 128);
  // Phase 1, operands
  auto op12 = model->addOperand(&type43);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type44);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, paddings1},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 0.5f, 128);
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 128);
  // Phase 1, operands
  auto op12 = model->addOperand(&type43);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type45);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, paddings1},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 0.5f, 128);
  OperandType type44(Type::TENSOR_QUANT8_ASYMM, {6, 2, 2, 1}, 0.5f, 128);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  // Phase 1, operands
  auto op12 = model->addOperand(&type43);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type44);
  auto op12_tmp = model->addOperand(&type43);
  auto dummy78 = model->addOperand(&type46);
  auto param82 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy78_init[] = {128};
  model->setOperandValue(dummy78, dummy78_init, sizeof(uint8_t) * 1);
  static int32_t param82_init[] = {0};
  model->setOperandValue(param82, param82_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy78, param82}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings1, op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type43(Type::TENSOR_QUANT8_ASYMM, {1, 5, 2, 1}, 0.5f, 128);
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 128);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  // Phase 1, operands
  auto op12 = model->addOperand(&type43);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type45);
  auto op12_tmp = model->addOperand(&type43);
  auto dummy79 = model->addOperand(&type46);
  auto param83 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy79_init[] = {128};
  model->setOperandValue(dummy79, dummy79_init, sizeof(uint8_t) * 1);
  static int32_t param83_init[] = {0};
  model->setOperandValue(param83, param83_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy79, param83}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings1, op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  OperandType type48(Type::TENSOR_FLOAT32, {6, 1, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type48);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  OperandType type48(Type::TENSOR_FLOAT32, {6, 1, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type48);
  auto op12_tmp = model->addOperand(&type47);
  auto dummy80 = model->addOperand(&type12);
  auto param84 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy80_init[] = {0.0f};
  model->setOperandValue(dummy80, dummy80_init, sizeof(float) * 1);
  static int32_t param84_init[] = {0};
  model->setOperandValue(param84, param84_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy80, param84}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type11);
  auto op12_tmp = model->addOperand(&type47);
  auto dummy81 = model->addOperand(&type12);
  auto param85 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy81_init[] = {0.0f};
  model->setOperandValue(dummy81, dummy81_init, sizeof(float) * 1);
  static int32_t param85_init[] = {0};
  model->setOperandValue(param85, param85_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy81, param85}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  OperandType type48(Type::TENSOR_FLOAT32, {6, 1, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type48);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, paddings1},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, paddings1},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  OperandType type48(Type::TENSOR_FLOAT32, {6, 1, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type48);
  auto op12_tmp = model->addOperand(&type47);
  auto dummy82 = model->addOperand(&type12);
  auto param86 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy82_init[] = {0.0f};
  model->setOperandValue(dummy82, dummy82_init, sizeof(float) * 1);
  static int32_t param86_init[] = {0};
  model->setOperandValue(param86, param86_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy82, param86}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings1, op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type11);
  auto op12_tmp = model->addOperand(&type47);
  auto dummy83 = model->addOperand(&type12);
  auto param87 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy83_init[] = {0.0f};
  model->setOperandValue(dummy83, dummy83_init, sizeof(float) * 1);
  static int32_t param87_init[] = {0};
  model->setOperandValue(param87, param87_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy83, param87}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings1, op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  OperandType type48(Type::TENSOR_FLOAT32, {6, 1, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type48);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  OperandType type48(Type::TENSOR_FLOAT32, {6, 1, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type48);
  auto op12_tmp = model->addOperand(&type47);
  auto dummy84 = model->addOperand(&type12);
  auto param88 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy84_init[] = {0.0f};
  model->setOperandValue(dummy84, dummy84_init, sizeof(float) * 1);
  static int32_t param88_init[] = {0};
  model->setOperandValue(param88, param88_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy84, param88}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type11);
  auto op12_tmp = model->addOperand(&type47);
  auto dummy85 = model->addOperand(&type12);
  auto param89 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy85_init[] = {0.0f};
  model->setOperandValue(dummy85, dummy85_init, sizeof(float) * 1);
  static int32_t param89_init[] = {0};
  model->setOperandValue(param89, param89_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy85, param89}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  OperandType type48(Type::TENSOR_FLOAT32, {6, 1, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type48);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, paddings1},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, paddings1},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  OperandType type48(Type::TENSOR_FLOAT32, {6, 1, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type48);
  auto op12_tmp = model->addOperand(&type47);
  auto dummy86 = model->addOperand(&type12);
  auto param90 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy86_init[] = {0.0f};
  model->setOperandValue(dummy86, dummy86_init, sizeof(float) * 1);
  static int32_t param90_init[] = {0};
  model->setOperandValue(param90, param90_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy86, param90}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings1, op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type47(Type::TENSOR_FLOAT32, {1, 1, 5, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type47);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type11);
  auto op12_tmp = model->addOperand(&type47);
  auto dummy87 = model->addOperand(&type12);
  auto param91 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy87_init[] = {0.0f};
  model->setOperandValue(dummy87, dummy87_init, sizeof(float) * 1);
  static int32_t param91_init[] = {0};
  model->setOperandValue(param91, param91_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy87, param91}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings1, op12_tmp},
    {op42});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type49(Type::TENSOR_FLOAT16, {1, 1, 5, 2});
  OperandType type50(Type::TENSOR_FLOAT16, {6, 1, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type49);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type50);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type49(Type::TENSOR_FLOAT16, {1, 1, 5, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type49);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type50(Type::TENSOR_FLOAT16, {6, 1, 2, 2});
  OperandType type51(Type::TENSOR_FLOAT16, {1, 1, 5, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type51);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type50);
  auto op12_tmp = model->addOperand(&type51);
  auto dummy88 = model->addOperand(&type18);
  auto param92 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy88_init[] = {0.0f};
  model->setOperandValue(dummy88, dummy88_init, sizeof(_Float16) * 1);
  static int32_t param92_init[] = {0};
  model->setOperandValue(param92, param92_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy88, param92}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type51(Type::TENSOR_FLOAT16, {1, 1, 5, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type51);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type16);
  auto op12_tmp = model->addOperand(&type51);
  auto dummy89 = model->addOperand(&type18);
  auto param93 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy89_init[] = {0.0f};
  model->setOperandValue(dummy89, dummy89_init, sizeof(_Float16) * 1);
  static int32_t param93_init[] = {0};
  model->setOperandValue(param93, param93_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy89, param93}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type49(Type::TENSOR_FLOAT16, {1, 1, 5, 2});
  OperandType type50(Type::TENSOR_FLOAT16, {6, 1, 2, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type49);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type50);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, paddings1},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type49(Type::TENSOR_FLOAT16, {1, 1, 5, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type49);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, paddings1},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type50(Type::TENSOR_FLOAT16, {6, 1, 2, 2});
  OperandType type51(Type::TENSOR_FLOAT16, {1, 1, 5, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type51);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type50);
  auto op12_tmp = model->addOperand(&type51);
  auto dummy90 = model->addOperand(&type18);
  auto param94 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy90_init[] = {0.0f};
  model->setOperandValue(dummy90, dummy90_init, sizeof(_Float16) * 1);
  static int32_t param94_init[] = {0};
  model->setOperandValue(param94, param94_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy90, param94}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings1, op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type51(Type::TENSOR_FLOAT16, {1, 1, 5, 2});
  // Phase 1, operands
  auto op12 = model->addOperand(&type51);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type16);
  auto op12_tmp = model->addOperand(&type51);
  auto dummy91 = model->addOperand(&type18);
  auto param95 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy91_init[] = {0.0f};
  model->setOperandValue(dummy91, dummy91_init, sizeof(_Float16) * 1);
  static int32_t param95_init[] = {0};
  model->setOperandValue(param95, param95_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy91, param95}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings1, op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {1, 1, 5, 2}, 0.5f, 128);
  OperandType type53(Type::TENSOR_QUANT8_ASYMM, {6, 1, 2, 2}, 0.5f, 128);
  // Phase 1, operands
  auto op12 = model->addOperand(&type52);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 128);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {1, 1, 5, 2}, 0.5f, 128);
  // Phase 1, operands
  auto op12 = model->addOperand(&type52);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type45);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {1, 1, 5, 2}, 0.5f, 128);
  OperandType type53(Type::TENSOR_QUANT8_ASYMM, {6, 1, 2, 2}, 0.5f, 128);
  // Phase 1, operands
  auto op12 = model->addOperand(&type52);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type53);
  auto op12_tmp = model->addOperand(&type52);
  auto dummy92 = model->addOperand(&type46);
  auto param96 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy92_init[] = {128};
  model->setOperandValue(dummy92, dummy92_init, sizeof(uint8_t) * 1);
  static int32_t param96_init[] = {0};
  model->setOperandValue(param96, param96_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy92, param96}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 128);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {1, 1, 5, 2}, 0.5f, 128);
  // Phase 1, operands
  auto op12 = model->addOperand(&type52);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type45);
  auto op12_tmp = model->addOperand(&type52);
  auto dummy93 = model->addOperand(&type46);
  auto param97 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static int32_t paddings1_init[] = {1, 0, 2, 0};
  model->setOperandValue(paddings1, paddings1_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy93_init[] = {128};
  model->setOperandValue(dummy93, dummy93_init, sizeof(uint8_t) * 1);
  static int32_t param97_init[] = {0};
  model->setOperandValue(param97, param97_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy93, param97}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {1, 1, 5, 2}, 0.5f, 128);
  OperandType type53(Type::TENSOR_QUANT8_ASYMM, {6, 1, 2, 2}, 0.5f, 128);
  // Phase 1, operands
  auto op12 = model->addOperand(&type52);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type53);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, paddings1},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 128);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {1, 1, 5, 2}, 0.5f, 128);
  // Phase 1, operands
  auto op12 = model->addOperand(&type52);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type45);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op12, paddings1},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {1, 1, 5, 2}, 0.5f, 128);
  OperandType type53(Type::TENSOR_QUANT8_ASYMM, {6, 1, 2, 2}, 0.5f, 128);
  // Phase 1, operands
  auto op12 = model->addOperand(&type52);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type53);
  auto op12_tmp = model->addOperand(&type52);
  auto dummy94 = model->addOperand(&type46);
  auto param98 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy94_init[] = {128};
  model->setOperandValue(dummy94, dummy94_init, sizeof(uint8_t) * 1);
  static int32_t param98_init[] = {0};
  model->setOperandValue(param98, param98_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy94, param98}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings1, op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type45(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.5f, 128);
  OperandType type46(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 128);
  OperandType type52(Type::TENSOR_QUANT8_ASYMM, {1, 1, 5, 2}, 0.5f, 128);
  // Phase 1, operands
  auto op12 = model->addOperand(&type52);
  auto param2 = model->addOperand(&type4);
  auto paddings1 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op42 = model->addOperand(&type45);
  auto op12_tmp = model->addOperand(&type52);
  auto dummy95 = model->addOperand(&type46);
  auto param99 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param2_init[] = {3, 2};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy95_init[] = {128};
  model->setOperandValue(dummy95, dummy95_init, sizeof(uint8_t) * 1);
  static int32_t param99_init[] = {0};
  model->setOperandValue(param99, param99_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op12_tmp, dummy95, param99}, {op12});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op12, param2, paddings1, layout}, {op42});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings1, op12_tmp},
    {op42});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {6, 2, 4, 1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {6, 2, 4, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type10);
  auto op13_tmp = model->addOperand(&type9);
  auto dummy96 = model->addOperand(&type12);
  auto param100 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy96_init[] = {0.0f};
  model->setOperandValue(dummy96, dummy96_init, sizeof(float) * 1);
  static int32_t param100_init[] = {0};
  model->setOperandValue(param100, param100_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy96, param100}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type11);
  auto op13_tmp = model->addOperand(&type9);
  auto dummy97 = model->addOperand(&type12);
  auto param101 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy97_init[] = {0.0f};
  model->setOperandValue(dummy97, dummy97_init, sizeof(float) * 1);
  static int32_t param101_init[] = {0};
  model->setOperandValue(param101, param101_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy97, param101}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {6, 2, 4, 1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, paddings2},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, paddings2},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {6, 2, 4, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type10);
  auto op13_tmp = model->addOperand(&type9);
  auto dummy98 = model->addOperand(&type12);
  auto param102 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy98_init[] = {0.0f};
  model->setOperandValue(dummy98, dummy98_init, sizeof(float) * 1);
  static int32_t param102_init[] = {0};
  model->setOperandValue(param102, param102_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy98, param102}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings2, op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type11);
  auto op13_tmp = model->addOperand(&type9);
  auto dummy99 = model->addOperand(&type12);
  auto param103 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy99_init[] = {0.0f};
  model->setOperandValue(dummy99, dummy99_init, sizeof(float) * 1);
  static int32_t param103_init[] = {0};
  model->setOperandValue(param103, param103_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy99, param103}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings2, op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {6, 2, 4, 1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {6, 2, 4, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type10);
  auto op13_tmp = model->addOperand(&type9);
  auto dummy100 = model->addOperand(&type12);
  auto param104 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy100_init[] = {0.0f};
  model->setOperandValue(dummy100, dummy100_init, sizeof(float) * 1);
  static int32_t param104_init[] = {0};
  model->setOperandValue(param104, param104_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy100, param104}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type11);
  auto op13_tmp = model->addOperand(&type9);
  auto dummy101 = model->addOperand(&type12);
  auto param105 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy101_init[] = {0.0f};
  model->setOperandValue(dummy101, dummy101_init, sizeof(float) * 1);
  static int32_t param105_init[] = {0};
  model->setOperandValue(param105, param105_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy101, param105}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {6, 2, 4, 1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type10);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, paddings2},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, paddings2},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT32, {6, 2, 4, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type10);
  auto op13_tmp = model->addOperand(&type9);
  auto dummy102 = model->addOperand(&type12);
  auto param106 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy102_init[] = {0.0f};
  model->setOperandValue(dummy102, dummy102_init, sizeof(float) * 1);
  static int32_t param106_init[] = {0};
  model->setOperandValue(param106, param106_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy102, param106}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings2, op13_tmp},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type9(Type::TENSOR_FLOAT32, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type11);
  auto op13_tmp = model->addOperand(&type9);
  auto dummy103 = model->addOperand(&type12);
  auto param107 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy103_init[] = {0.0f};
  model->setOperandValue(dummy103, dummy103_init, sizeof(float) * 1);
  static int32_t param107_init[] = {0};
  model->setOperandValue(param107, param107_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy103, param107}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings2, op13_tmp},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type54(Type::TENSOR_FLOAT16, {1, 4, 2, 1});
  OperandType type55(Type::TENSOR_FLOAT16, {6, 2, 4, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type54);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type55);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type54(Type::TENSOR_FLOAT16, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type54);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type55(Type::TENSOR_FLOAT16, {6, 2, 4, 1});
  OperandType type56(Type::TENSOR_FLOAT16, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type56);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type55);
  auto op13_tmp = model->addOperand(&type56);
  auto dummy104 = model->addOperand(&type18);
  auto param108 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy104_init[] = {0.0f};
  model->setOperandValue(dummy104, dummy104_init, sizeof(_Float16) * 1);
  static int32_t param108_init[] = {0};
  model->setOperandValue(param108, param108_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy104, param108}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type56(Type::TENSOR_FLOAT16, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type56);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type16);
  auto op13_tmp = model->addOperand(&type56);
  auto dummy105 = model->addOperand(&type18);
  auto param109 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy105_init[] = {0.0f};
  model->setOperandValue(dummy105, dummy105_init, sizeof(_Float16) * 1);
  static int32_t param109_init[] = {0};
  model->setOperandValue(param109, param109_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy105, param109}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type54(Type::TENSOR_FLOAT16, {1, 4, 2, 1});
  OperandType type55(Type::TENSOR_FLOAT16, {6, 2, 4, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type54);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type55);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, paddings2},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type54(Type::TENSOR_FLOAT16, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type54);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, paddings2},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type55(Type::TENSOR_FLOAT16, {6, 2, 4, 1});
  OperandType type56(Type::TENSOR_FLOAT16, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type56);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type55);
  auto op13_tmp = model->addOperand(&type56);
  auto dummy106 = model->addOperand(&type18);
  auto param110 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy106_init[] = {0.0f};
  model->setOperandValue(dummy106, dummy106_init, sizeof(_Float16) * 1);
  static int32_t param110_init[] = {0};
  model->setOperandValue(param110, param110_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy106, param110}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings2, op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type56(Type::TENSOR_FLOAT16, {1, 4, 2, 1});
  // Phase 1, operands
  auto op13 = model->addOperand(&type56);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type16);
  auto op13_tmp = model->addOperand(&type56);
  auto dummy107 = model->addOperand(&type18);
  auto param111 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy107_init[] = {0.0f};
  model->setOperandValue(dummy107, dummy107_init, sizeof(_Float16) * 1);
  static int32_t param111_init[] = {0};
  model->setOperandValue(param111, param111_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy107, param111}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings2, op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 1}, 0.25f, 128);
  OperandType type58(Type::TENSOR_QUANT8_ASYMM, {6, 2, 4, 1}, 0.25f, 128);
  // Phase 1, operands
  auto op13 = model->addOperand(&type57);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type58);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 1}, 0.25f, 128);
  OperandType type59(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  // Phase 1, operands
  auto op13 = model->addOperand(&type57);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type59);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 1}, 0.25f, 128);
  OperandType type58(Type::TENSOR_QUANT8_ASYMM, {6, 2, 4, 1}, 0.25f, 128);
  OperandType type60(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  // Phase 1, operands
  auto op13 = model->addOperand(&type57);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type58);
  auto op13_tmp = model->addOperand(&type57);
  auto dummy108 = model->addOperand(&type60);
  auto param112 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy108_init[] = {128};
  model->setOperandValue(dummy108, dummy108_init, sizeof(uint8_t) * 1);
  static int32_t param112_init[] = {0};
  model->setOperandValue(param112, param112_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy108, param112}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 1}, 0.25f, 128);
  OperandType type59(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type60(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  // Phase 1, operands
  auto op13 = model->addOperand(&type57);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type59);
  auto op13_tmp = model->addOperand(&type57);
  auto dummy109 = model->addOperand(&type60);
  auto param113 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy109_init[] = {128};
  model->setOperandValue(dummy109, dummy109_init, sizeof(uint8_t) * 1);
  static int32_t param113_init[] = {0};
  model->setOperandValue(param113, param113_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy109, param113}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 1}, 0.25f, 128);
  OperandType type58(Type::TENSOR_QUANT8_ASYMM, {6, 2, 4, 1}, 0.25f, 128);
  // Phase 1, operands
  auto op13 = model->addOperand(&type57);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type58);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, paddings2},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 1}, 0.25f, 128);
  OperandType type59(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  // Phase 1, operands
  auto op13 = model->addOperand(&type57);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type59);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, paddings2},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 1}, 0.25f, 128);
  OperandType type58(Type::TENSOR_QUANT8_ASYMM, {6, 2, 4, 1}, 0.25f, 128);
  OperandType type60(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  // Phase 1, operands
  auto op13 = model->addOperand(&type57);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type58);
  auto op13_tmp = model->addOperand(&type57);
  auto dummy110 = model->addOperand(&type60);
  auto param114 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy110_init[] = {128};
  model->setOperandValue(dummy110, dummy110_init, sizeof(uint8_t) * 1);
  static int32_t param114_init[] = {0};
  model->setOperandValue(param114, param114_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy110, param114}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings2, op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type57(Type::TENSOR_QUANT8_ASYMM, {1, 4, 2, 1}, 0.25f, 128);
  OperandType type59(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type60(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  // Phase 1, operands
  auto op13 = model->addOperand(&type57);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type59);
  auto op13_tmp = model->addOperand(&type57);
  auto dummy111 = model->addOperand(&type60);
  auto param115 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy111_init[] = {128};
  model->setOperandValue(dummy111, dummy111_init, sizeof(uint8_t) * 1);
  static int32_t param115_init[] = {0};
  model->setOperandValue(param115, param115_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy111, param115}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings2, op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type61(Type::TENSOR_FLOAT32, {1, 1, 4, 2});
  OperandType type62(Type::TENSOR_FLOAT32, {6, 1, 2, 4});
  // Phase 1, operands
  auto op13 = model->addOperand(&type61);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type62);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type61(Type::TENSOR_FLOAT32, {1, 1, 4, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type61);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type61(Type::TENSOR_FLOAT32, {1, 1, 4, 2});
  OperandType type62(Type::TENSOR_FLOAT32, {6, 1, 2, 4});
  // Phase 1, operands
  auto op13 = model->addOperand(&type61);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type62);
  auto op13_tmp = model->addOperand(&type61);
  auto dummy112 = model->addOperand(&type12);
  auto param116 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy112_init[] = {0.0f};
  model->setOperandValue(dummy112, dummy112_init, sizeof(float) * 1);
  static int32_t param116_init[] = {0};
  model->setOperandValue(param116, param116_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy112, param116}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type61(Type::TENSOR_FLOAT32, {1, 1, 4, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type61);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type11);
  auto op13_tmp = model->addOperand(&type61);
  auto dummy113 = model->addOperand(&type12);
  auto param117 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy113_init[] = {0.0f};
  model->setOperandValue(dummy113, dummy113_init, sizeof(float) * 1);
  static int32_t param117_init[] = {0};
  model->setOperandValue(param117, param117_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy113, param117}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type61(Type::TENSOR_FLOAT32, {1, 1, 4, 2});
  OperandType type62(Type::TENSOR_FLOAT32, {6, 1, 2, 4});
  // Phase 1, operands
  auto op13 = model->addOperand(&type61);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type62);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, paddings2},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type61(Type::TENSOR_FLOAT32, {1, 1, 4, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type61);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, paddings2},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type61(Type::TENSOR_FLOAT32, {1, 1, 4, 2});
  OperandType type62(Type::TENSOR_FLOAT32, {6, 1, 2, 4});
  // Phase 1, operands
  auto op13 = model->addOperand(&type61);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type62);
  auto op13_tmp = model->addOperand(&type61);
  auto dummy114 = model->addOperand(&type12);
  auto param118 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy114_init[] = {0.0f};
  model->setOperandValue(dummy114, dummy114_init, sizeof(float) * 1);
  static int32_t param118_init[] = {0};
  model->setOperandValue(param118, param118_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy114, param118}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings2, op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type61(Type::TENSOR_FLOAT32, {1, 1, 4, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type61);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type11);
  auto op13_tmp = model->addOperand(&type61);
  auto dummy115 = model->addOperand(&type12);
  auto param119 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy115_init[] = {0.0f};
  model->setOperandValue(dummy115, dummy115_init, sizeof(float) * 1);
  static int32_t param119_init[] = {0};
  model->setOperandValue(param119, param119_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy115, param119}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings2, op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type61(Type::TENSOR_FLOAT32, {1, 1, 4, 2});
  OperandType type62(Type::TENSOR_FLOAT32, {6, 1, 2, 4});
  // Phase 1, operands
  auto op13 = model->addOperand(&type61);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type62);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type61(Type::TENSOR_FLOAT32, {1, 1, 4, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type61);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type61(Type::TENSOR_FLOAT32, {1, 1, 4, 2});
  OperandType type62(Type::TENSOR_FLOAT32, {6, 1, 2, 4});
  // Phase 1, operands
  auto op13 = model->addOperand(&type61);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type62);
  auto op13_tmp = model->addOperand(&type61);
  auto dummy116 = model->addOperand(&type12);
  auto param120 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy116_init[] = {0.0f};
  model->setOperandValue(dummy116, dummy116_init, sizeof(float) * 1);
  static int32_t param120_init[] = {0};
  model->setOperandValue(param120, param120_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy116, param120}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type61(Type::TENSOR_FLOAT32, {1, 1, 4, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type61);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type11);
  auto op13_tmp = model->addOperand(&type61);
  auto dummy117 = model->addOperand(&type12);
  auto param121 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy117_init[] = {0.0f};
  model->setOperandValue(dummy117, dummy117_init, sizeof(float) * 1);
  static int32_t param121_init[] = {0};
  model->setOperandValue(param121, param121_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy117, param121}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type61(Type::TENSOR_FLOAT32, {1, 1, 4, 2});
  OperandType type62(Type::TENSOR_FLOAT32, {6, 1, 2, 4});
  // Phase 1, operands
  auto op13 = model->addOperand(&type61);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type62);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, paddings2},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type61(Type::TENSOR_FLOAT32, {1, 1, 4, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type61);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, paddings2},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type61(Type::TENSOR_FLOAT32, {1, 1, 4, 2});
  OperandType type62(Type::TENSOR_FLOAT32, {6, 1, 2, 4});
  // Phase 1, operands
  auto op13 = model->addOperand(&type61);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type62);
  auto op13_tmp = model->addOperand(&type61);
  auto dummy118 = model->addOperand(&type12);
  auto param122 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy118_init[] = {0.0f};
  model->setOperandValue(dummy118, dummy118_init, sizeof(float) * 1);
  static int32_t param122_init[] = {0};
  model->setOperandValue(param122, param122_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy118, param122}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings2, op13_tmp},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type11(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type12(Type::TENSOR_FLOAT32, {1});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type61(Type::TENSOR_FLOAT32, {1, 1, 4, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type61);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type11);
  auto op13_tmp = model->addOperand(&type61);
  auto dummy119 = model->addOperand(&type12);
  auto param123 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy119_init[] = {0.0f};
  model->setOperandValue(dummy119, dummy119_init, sizeof(float) * 1);
  static int32_t param123_init[] = {0};
  model->setOperandValue(param123, param123_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy119, param123}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings2, op13_tmp},
    {op43});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type63(Type::TENSOR_FLOAT16, {1, 1, 4, 2});
  OperandType type64(Type::TENSOR_FLOAT16, {6, 1, 2, 4});
  // Phase 1, operands
  auto op13 = model->addOperand(&type63);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type64);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type63(Type::TENSOR_FLOAT16, {1, 1, 4, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type63);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type64(Type::TENSOR_FLOAT16, {6, 1, 2, 4});
  OperandType type65(Type::TENSOR_FLOAT16, {1, 1, 4, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type65);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type64);
  auto op13_tmp = model->addOperand(&type65);
  auto dummy120 = model->addOperand(&type18);
  auto param124 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy120_init[] = {0.0f};
  model->setOperandValue(dummy120, dummy120_init, sizeof(_Float16) * 1);
  static int32_t param124_init[] = {0};
  model->setOperandValue(param124, param124_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy120, param124}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type65(Type::TENSOR_FLOAT16, {1, 1, 4, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type65);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type16);
  auto op13_tmp = model->addOperand(&type65);
  auto dummy121 = model->addOperand(&type18);
  auto param125 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy121_init[] = {0.0f};
  model->setOperandValue(dummy121, dummy121_init, sizeof(_Float16) * 1);
  static int32_t param125_init[] = {0};
  model->setOperandValue(param125, param125_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy121, param125}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type63(Type::TENSOR_FLOAT16, {1, 1, 4, 2});
  OperandType type64(Type::TENSOR_FLOAT16, {6, 1, 2, 4});
  // Phase 1, operands
  auto op13 = model->addOperand(&type63);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type64);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, paddings2},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type63(Type::TENSOR_FLOAT16, {1, 1, 4, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type63);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, paddings2},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type64(Type::TENSOR_FLOAT16, {6, 1, 2, 4});
  OperandType type65(Type::TENSOR_FLOAT16, {1, 1, 4, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type65);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type64);
  auto op13_tmp = model->addOperand(&type65);
  auto dummy122 = model->addOperand(&type18);
  auto param126 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy122_init[] = {0.0f};
  model->setOperandValue(dummy122, dummy122_init, sizeof(_Float16) * 1);
  static int32_t param126_init[] = {0};
  model->setOperandValue(param126, param126_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy122, param126}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings2, op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type16(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type18(Type::TENSOR_FLOAT16, {1});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type65(Type::TENSOR_FLOAT16, {1, 1, 4, 2});
  // Phase 1, operands
  auto op13 = model->addOperand(&type65);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type16);
  auto op13_tmp = model->addOperand(&type65);
  auto dummy123 = model->addOperand(&type18);
  auto param127 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy123_init[] = {0.0f};
  model->setOperandValue(dummy123, dummy123_init, sizeof(_Float16) * 1);
  static int32_t param127_init[] = {0};
  model->setOperandValue(param127, param127_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy123, param127}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings2, op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type66(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 2}, 0.25f, 128);
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {6, 1, 2, 4}, 0.25f, 128);
  // Phase 1, operands
  auto op13 = model->addOperand(&type66);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type67);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type59(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type66(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 2}, 0.25f, 128);
  // Phase 1, operands
  auto op13 = model->addOperand(&type66);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type59);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type60(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type66(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 2}, 0.25f, 128);
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {6, 1, 2, 4}, 0.25f, 128);
  // Phase 1, operands
  auto op13 = model->addOperand(&type66);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type67);
  auto op13_tmp = model->addOperand(&type66);
  auto dummy124 = model->addOperand(&type60);
  auto param128 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy124_init[] = {128};
  model->setOperandValue(dummy124, dummy124_init, sizeof(uint8_t) * 1);
  static int32_t param128_init[] = {0};
  model->setOperandValue(param128, param128_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy124, param128}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type59(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type60(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type66(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 2}, 0.25f, 128);
  // Phase 1, operands
  auto op13 = model->addOperand(&type66);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type59);
  auto op13_tmp = model->addOperand(&type66);
  auto dummy125 = model->addOperand(&type60);
  auto param129 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static int32_t paddings2_init[] = {1, 1, 2, 4};
  model->setOperandValue(paddings2, paddings2_init, sizeof(int32_t) * 4);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy125_init[] = {128};
  model->setOperandValue(dummy125, dummy125_init, sizeof(uint8_t) * 1);
  static int32_t param129_init[] = {0};
  model->setOperandValue(param129, param129_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy125, param129}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
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

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type66(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 2}, 0.25f, 128);
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {6, 1, 2, 4}, 0.25f, 128);
  // Phase 1, operands
  auto op13 = model->addOperand(&type66);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type67);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, paddings2},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type59(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type66(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 2}, 0.25f, 128);
  // Phase 1, operands
  auto op13 = model->addOperand(&type66);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type59);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {op13, paddings2},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type60(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type66(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 2}, 0.25f, 128);
  OperandType type67(Type::TENSOR_QUANT8_ASYMM, {6, 1, 2, 4}, 0.25f, 128);
  // Phase 1, operands
  auto op13 = model->addOperand(&type66);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type67);
  auto op13_tmp = model->addOperand(&type66);
  auto dummy126 = model->addOperand(&type60);
  auto param130 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy126_init[] = {128};
  model->setOperandValue(dummy126, dummy126_init, sizeof(uint8_t) * 1);
  static int32_t param130_init[] = {0};
  model->setOperandValue(param130, param130_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy126, param130}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings2, op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
namespace generated_tests::space_to_batch_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type13(Type::INT32, {});
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type4(Type::TENSOR_INT32, {2});
  OperandType type59(Type::TENSOR_QUANT8_ASYMM, {0, 0, 0, 0}, 0.25f, 128);
  OperandType type60(Type::TENSOR_QUANT8_ASYMM, {1}, 0.25f, 128);
  OperandType type66(Type::TENSOR_QUANT8_ASYMM, {1, 1, 4, 2}, 0.25f, 128);
  // Phase 1, operands
  auto op13 = model->addOperand(&type66);
  auto param3 = model->addOperand(&type4);
  auto paddings2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto op43 = model->addOperand(&type59);
  auto op13_tmp = model->addOperand(&type66);
  auto dummy127 = model->addOperand(&type60);
  auto param131 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param3_init[] = {3, 2};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 2);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static uint8_t dummy127_init[] = {128};
  model->setOperandValue(dummy127, dummy127_init, sizeof(uint8_t) * 1);
  static int32_t param131_init[] = {0};
  model->setOperandValue(param131, param131_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {op13_tmp, dummy127, param131}, {op13});
  model->addOperation(ANEURALNETWORKS_SPACE_TO_BATCH_ND, {op13, param3, paddings2, layout}, {op43});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {paddings2, op13_tmp},
    {op43});
  assert(model->isValid());
}

bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::space_to_batch_v1_2
