// Generated from instance_normalization.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::instance_normalization {

void CreateModel_nhwc(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type1);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {0.0001f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_nhwc(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {0.0001f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_nhwc_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type1);
  auto in_tmp = model->addOperand(&type1);
  auto dummy = model->addOperand(&type4);
  auto param6 = model->addOperand(&type5);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {0.0001f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy_init[] = {0.0f};
  model->setOperandValue(dummy, dummy_init, sizeof(float) * 1);
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy, param6}, {in});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  auto in_tmp = model->addOperand(&type1);
  auto dummy1 = model->addOperand(&type4);
  auto param7 = model->addOperand(&type5);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {0.0001f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy1_init[] = {0.0f};
  model->setOperandValue(dummy1, dummy1_init, sizeof(float) * 1);
  static int32_t param7_init[] = {0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy1, param7}, {in});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type1);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {0.0001f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {0.0001f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type1);
  auto in_tmp = model->addOperand(&type1);
  auto dummy2 = model->addOperand(&type4);
  auto param8 = model->addOperand(&type5);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {0.0001f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy2_init[] = {0.0f};
  model->setOperandValue(dummy2, dummy2_init, sizeof(float) * 1);
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy2, param8}, {in});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  auto in_tmp = model->addOperand(&type1);
  auto dummy3 = model->addOperand(&type4);
  auto param9 = model->addOperand(&type5);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {0.0001f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy3_init[] = {0.0f};
  model->setOperandValue(dummy3, dummy3_init, sizeof(float) * 1);
  static int32_t param9_init[] = {0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy3, param9}, {in});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type6(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type7(Type::FLOAT16, {});
  // Phase 1, operands
  auto in = model->addOperand(&type6);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type6);
  // Phase 2, operations
  static _Float16 param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static _Float16 param2_init[] = {9.999999747378752e-05f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type6(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type7(Type::FLOAT16, {});
  OperandType type8(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto in = model->addOperand(&type6);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type8);
  // Phase 2, operations
  static _Float16 param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static _Float16 param2_init[] = {9.999999747378752e-05f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type7(Type::FLOAT16, {});
  OperandType type9(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in = model->addOperand(&type9);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type6);
  auto in_tmp = model->addOperand(&type9);
  auto dummy4 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type5);
  // Phase 2, operations
  static _Float16 param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static _Float16 param2_init[] = {9.999999747378752e-05f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy4_init[] = {0.0f};
  model->setOperandValue(dummy4, dummy4_init, sizeof(_Float16) * 1);
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy4, param10}, {in});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  OperandType type7(Type::FLOAT16, {});
  OperandType type8(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in = model->addOperand(&type9);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type8);
  auto in_tmp = model->addOperand(&type9);
  auto dummy5 = model->addOperand(&type10);
  auto param11 = model->addOperand(&type5);
  // Phase 2, operations
  static _Float16 param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static _Float16 param2_init[] = {9.999999747378752e-05f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy5_init[] = {0.0f};
  model->setOperandValue(dummy5, dummy5_init, sizeof(_Float16) * 1);
  static int32_t param11_init[] = {0};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy5, param11}, {in});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type1);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {0.0001f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_nchw(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {0.0001f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_nchw_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type1);
  auto in_tmp = model->addOperand(&type1);
  auto dummy6 = model->addOperand(&type4);
  auto param12 = model->addOperand(&type5);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {0.0001f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy6_init[] = {0.0f};
  model->setOperandValue(dummy6, dummy6_init, sizeof(float) * 1);
  static int32_t param12_init[] = {0};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy6, param12}, {in});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  auto in_tmp = model->addOperand(&type1);
  auto dummy7 = model->addOperand(&type4);
  auto param13 = model->addOperand(&type5);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {0.0001f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy7_init[] = {0.0f};
  model->setOperandValue(dummy7, dummy7_init, sizeof(float) * 1);
  static int32_t param13_init[] = {0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy7, param13}, {in});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_relaxed(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type1);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {0.0001f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_relaxed_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {0.0001f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_relaxed_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type1);
  auto in_tmp = model->addOperand(&type1);
  auto dummy8 = model->addOperand(&type4);
  auto param14 = model->addOperand(&type5);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {0.0001f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy8_init[] = {0.0f};
  model->setOperandValue(dummy8, dummy8_init, sizeof(float) * 1);
  static int32_t param14_init[] = {0};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy8, param14}, {in});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in = model->addOperand(&type1);
  auto param = model->addOperand(&type2);
  auto param1 = model->addOperand(&type2);
  auto param2 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type3);
  auto in_tmp = model->addOperand(&type1);
  auto dummy9 = model->addOperand(&type4);
  auto param15 = model->addOperand(&type5);
  // Phase 2, operations
  static float param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(float) * 1);
  static float param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(float) * 1);
  static float param2_init[] = {0.0001f};
  model->setOperandValue(param2, param2_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy9_init[] = {0.0f};
  model->setOperandValue(dummy9, dummy9_init, sizeof(float) * 1);
  static int32_t param15_init[] = {0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy9, param15}, {in});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_float16(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type6(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type7(Type::FLOAT16, {});
  // Phase 1, operands
  auto in = model->addOperand(&type6);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type6);
  // Phase 2, operations
  static _Float16 param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static _Float16 param2_init[] = {9.999999747378752e-05f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_nchw_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_float16_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type6(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type7(Type::FLOAT16, {});
  OperandType type8(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto in = model->addOperand(&type6);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type8);
  // Phase 2, operations
  static _Float16 param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static _Float16 param2_init[] = {9.999999747378752e-05f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in},
    {out});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_float16_all_inputs_as_internal(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type7(Type::FLOAT16, {});
  OperandType type9(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in = model->addOperand(&type9);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type6);
  auto in_tmp = model->addOperand(&type9);
  auto dummy10 = model->addOperand(&type10);
  auto param16 = model->addOperand(&type5);
  // Phase 2, operations
  static _Float16 param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static _Float16 param2_init[] = {9.999999747378752e-05f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy10_init[] = {0.0f};
  model->setOperandValue(dummy10, dummy10_init, sizeof(_Float16) * 1);
  static int32_t param16_init[] = {0};
  model->setOperandValue(param16, param16_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy10, param16}, {in});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  OperandType type7(Type::FLOAT16, {});
  OperandType type8(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in = model->addOperand(&type9);
  auto param = model->addOperand(&type7);
  auto param1 = model->addOperand(&type7);
  auto param2 = model->addOperand(&type7);
  auto layout = model->addOperand(&type0);
  auto out = model->addOperand(&type8);
  auto in_tmp = model->addOperand(&type9);
  auto dummy11 = model->addOperand(&type10);
  auto param17 = model->addOperand(&type5);
  // Phase 2, operations
  static _Float16 param_init[] = {1.0f};
  model->setOperandValue(param, param_init, sizeof(_Float16) * 1);
  static _Float16 param1_init[] = {0.0f};
  model->setOperandValue(param1, param1_init, sizeof(_Float16) * 1);
  static _Float16 param2_init[] = {9.999999747378752e-05f};
  model->setOperandValue(param2, param2_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy11_init[] = {0.0f};
  model->setOperandValue(dummy11, dummy11_init, sizeof(_Float16) * 1);
  static int32_t param17_init[] = {0};
  model->setOperandValue(param17, param17_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in_tmp, dummy11, param17}, {in});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in, param, param1, param2, layout}, {out});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in_tmp},
    {out});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type1);
  // Phase 2, operations
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.0001f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nhwc_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type3);
  // Phase 2, operations
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.0001f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nhwc_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type1);
  auto in1_tmp = model->addOperand(&type1);
  auto dummy12 = model->addOperand(&type4);
  auto param18 = model->addOperand(&type5);
  // Phase 2, operations
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.0001f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy12_init[] = {0.0f};
  model->setOperandValue(dummy12, dummy12_init, sizeof(float) * 1);
  static int32_t param18_init[] = {0};
  model->setOperandValue(param18, param18_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy12, param18}, {in1});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type3);
  auto in1_tmp = model->addOperand(&type1);
  auto dummy13 = model->addOperand(&type4);
  auto param19 = model->addOperand(&type5);
  // Phase 2, operations
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.0001f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy13_init[] = {0.0f};
  model->setOperandValue(dummy13, dummy13_init, sizeof(float) * 1);
  static int32_t param19_init[] = {0};
  model->setOperandValue(param19, param19_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy13, param19}, {in1});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type1);
  // Phase 2, operations
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.0001f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type3);
  // Phase 2, operations
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.0001f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type1);
  auto in1_tmp = model->addOperand(&type1);
  auto dummy14 = model->addOperand(&type4);
  auto param20 = model->addOperand(&type5);
  // Phase 2, operations
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.0001f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy14_init[] = {0.0f};
  model->setOperandValue(dummy14, dummy14_init, sizeof(float) * 1);
  static int32_t param20_init[] = {0};
  model->setOperandValue(param20, param20_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy14, param20}, {in1});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type3);
  auto in1_tmp = model->addOperand(&type1);
  auto dummy15 = model->addOperand(&type4);
  auto param21 = model->addOperand(&type5);
  // Phase 2, operations
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.0001f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy15_init[] = {0.0f};
  model->setOperandValue(dummy15, dummy15_init, sizeof(float) * 1);
  static int32_t param21_init[] = {0};
  model->setOperandValue(param21, param21_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy15, param21}, {in1});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type6(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type7(Type::FLOAT16, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type6);
  auto param3 = model->addOperand(&type7);
  auto param4 = model->addOperand(&type7);
  auto param5 = model->addOperand(&type7);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type6);
  // Phase 2, operations
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {9.999999747378752e-05f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type6(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type7(Type::FLOAT16, {});
  OperandType type8(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto in1 = model->addOperand(&type6);
  auto param3 = model->addOperand(&type7);
  auto param4 = model->addOperand(&type7);
  auto param5 = model->addOperand(&type7);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type8);
  // Phase 2, operations
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {9.999999747378752e-05f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type7(Type::FLOAT16, {});
  OperandType type9(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type7);
  auto param4 = model->addOperand(&type7);
  auto param5 = model->addOperand(&type7);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type6);
  auto in1_tmp = model->addOperand(&type9);
  auto dummy16 = model->addOperand(&type10);
  auto param22 = model->addOperand(&type5);
  // Phase 2, operations
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {9.999999747378752e-05f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy16_init[] = {0.0f};
  model->setOperandValue(dummy16, dummy16_init, sizeof(_Float16) * 1);
  static int32_t param22_init[] = {0};
  model->setOperandValue(param22, param22_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy16, param22}, {in1});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  OperandType type7(Type::FLOAT16, {});
  OperandType type8(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type7);
  auto param4 = model->addOperand(&type7);
  auto param5 = model->addOperand(&type7);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type8);
  auto in1_tmp = model->addOperand(&type9);
  auto dummy17 = model->addOperand(&type10);
  auto param23 = model->addOperand(&type5);
  // Phase 2, operations
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {9.999999747378752e-05f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {false};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy17_init[] = {0.0f};
  model->setOperandValue(dummy17, dummy17_init, sizeof(_Float16) * 1);
  static int32_t param23_init[] = {0};
  model->setOperandValue(param23, param23_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy17, param23}, {in1});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type1);
  // Phase 2, operations
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.0001f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nchw_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type3);
  // Phase 2, operations
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.0001f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nchw_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type1);
  auto in1_tmp = model->addOperand(&type1);
  auto dummy18 = model->addOperand(&type4);
  auto param24 = model->addOperand(&type5);
  // Phase 2, operations
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.0001f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy18_init[] = {0.0f};
  model->setOperandValue(dummy18, dummy18_init, sizeof(float) * 1);
  static int32_t param24_init[] = {0};
  model->setOperandValue(param24, param24_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy18, param24}, {in1});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type3);
  auto in1_tmp = model->addOperand(&type1);
  auto dummy19 = model->addOperand(&type4);
  auto param25 = model->addOperand(&type5);
  // Phase 2, operations
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.0001f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy19_init[] = {0.0f};
  model->setOperandValue(dummy19, dummy19_init, sizeof(float) * 1);
  static int32_t param25_init[] = {0};
  model->setOperandValue(param25, param25_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy19, param25}, {in1});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_relaxed_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type1);
  // Phase 2, operations
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.0001f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_relaxed_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type3);
  // Phase 2, operations
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.0001f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_relaxed_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type1);
  auto in1_tmp = model->addOperand(&type1);
  auto dummy20 = model->addOperand(&type4);
  auto param26 = model->addOperand(&type5);
  // Phase 2, operations
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.0001f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy20_init[] = {0.0f};
  model->setOperandValue(dummy20, dummy20_init, sizeof(float) * 1);
  static int32_t param26_init[] = {0};
  model->setOperandValue(param26, param26_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy20, param26}, {in1});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type1(Type::TENSOR_FLOAT32, {2, 2, 2, 2});
  OperandType type2(Type::FLOAT32, {});
  OperandType type3(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  OperandType type4(Type::TENSOR_FLOAT32, {1});
  OperandType type5(Type::INT32, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type2);
  auto param4 = model->addOperand(&type2);
  auto param5 = model->addOperand(&type2);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type3);
  auto in1_tmp = model->addOperand(&type1);
  auto dummy21 = model->addOperand(&type4);
  auto param27 = model->addOperand(&type5);
  // Phase 2, operations
  static float param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(float) * 1);
  static float param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(float) * 1);
  static float param5_init[] = {0.0001f};
  model->setOperandValue(param5, param5_init, sizeof(float) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static float dummy21_init[] = {0.0f};
  model->setOperandValue(dummy21, dummy21_init, sizeof(float) * 1);
  static int32_t param27_init[] = {0};
  model->setOperandValue(param27, param27_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy21, param27}, {in1});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_float16_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type6(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type7(Type::FLOAT16, {});
  // Phase 1, operands
  auto in1 = model->addOperand(&type6);
  auto param3 = model->addOperand(&type7);
  auto param4 = model->addOperand(&type7);
  auto param5 = model->addOperand(&type7);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type6);
  // Phase 2, operations
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {9.999999747378752e-05f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_float16_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type6(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type7(Type::FLOAT16, {});
  OperandType type8(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  // Phase 1, operands
  auto in1 = model->addOperand(&type6);
  auto param3 = model->addOperand(&type7);
  auto param4 = model->addOperand(&type7);
  auto param5 = model->addOperand(&type7);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type8);
  // Phase 2, operations
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {9.999999747378752e-05f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_float16_all_inputs_as_internal_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  OperandType type6(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  OperandType type7(Type::FLOAT16, {});
  OperandType type9(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type7);
  auto param4 = model->addOperand(&type7);
  auto param5 = model->addOperand(&type7);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type6);
  auto in1_tmp = model->addOperand(&type9);
  auto dummy22 = model->addOperand(&type10);
  auto param28 = model->addOperand(&type5);
  // Phase 2, operations
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {9.999999747378752e-05f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy22_init[] = {0.0f};
  model->setOperandValue(dummy22, dummy22_init, sizeof(_Float16) * 1);
  static int32_t param28_init[] = {0};
  model->setOperandValue(param28, param28_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy22, param28}, {in1});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
namespace generated_tests::instance_normalization {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model) {
  OperandType type0(Type::BOOL, {});
  OperandType type10(Type::TENSOR_FLOAT16, {1});
  OperandType type5(Type::INT32, {});
  OperandType type7(Type::FLOAT16, {});
  OperandType type8(Type::TENSOR_FLOAT16, {0, 0, 0, 0});
  OperandType type9(Type::TENSOR_FLOAT16, {2, 2, 2, 2});
  // Phase 1, operands
  auto in1 = model->addOperand(&type9);
  auto param3 = model->addOperand(&type7);
  auto param4 = model->addOperand(&type7);
  auto param5 = model->addOperand(&type7);
  auto layout = model->addOperand(&type0);
  auto out1 = model->addOperand(&type8);
  auto in1_tmp = model->addOperand(&type9);
  auto dummy23 = model->addOperand(&type10);
  auto param29 = model->addOperand(&type5);
  // Phase 2, operations
  static _Float16 param3_init[] = {2.0f};
  model->setOperandValue(param3, param3_init, sizeof(_Float16) * 1);
  static _Float16 param4_init[] = {10.0f};
  model->setOperandValue(param4, param4_init, sizeof(_Float16) * 1);
  static _Float16 param5_init[] = {9.999999747378752e-05f};
  model->setOperandValue(param5, param5_init, sizeof(_Float16) * 1);
  static bool8 layout_init[] = {true};
  model->setOperandValue(layout, layout_init, sizeof(bool8) * 1);
  static _Float16 dummy23_init[] = {0.0f};
  model->setOperandValue(dummy23, dummy23_init, sizeof(_Float16) * 1);
  static int32_t param29_init[] = {0};
  model->setOperandValue(param29, param29_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_ADD, {in1_tmp, dummy23, param29}, {in1});
  model->addOperation(ANEURALNETWORKS_INSTANCE_NORMALIZATION, {in1, param3, param4, param5, layout}, {out1});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {in1_tmp},
    {out1});
  assert(model->isValid());
}

bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace generated_tests::instance_normalization
